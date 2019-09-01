
        
        template <typename Dtype>
void SGDSolver<Dtype>::SnapshotSolverStateToHDF5(
    const string& model_filename) {
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#ifdef USE_HDF5
  string snapshot_filename =
      Solver<Dtype>::SnapshotFilename('.solverstate.h5');
  LOG(INFO) << 'Snapshotting solver state to HDF5 file ' << snapshot_filename;
  hid_t file_hid = H5Fcreate(snapshot_filename.c_str(), H5F_ACC_TRUNC,
      H5P_DEFAULT, H5P_DEFAULT);
  CHECK_GE(file_hid, 0)
      << 'Couldn't open ' << snapshot_filename << ' to save solver state.';
  hdf5_save_int(file_hid, 'iter', this->iter_);
  hdf5_save_string(file_hid, 'learned_net', model_filename);
  hdf5_save_int(file_hid, 'current_step', this->current_step_);
  hid_t history_hid = H5Gcreate2(file_hid, 'history', H5P_DEFAULT, H5P_DEFAULT,
      H5P_DEFAULT);
  CHECK_GE(history_hid, 0)
      << 'Error saving solver state to ' << snapshot_filename << '.';
  for (int i = 0; i < history_.size(); ++i) {
    ostringstream oss;
    oss << i;
    hdf5_save_nd_dataset<Dtype>(history_hid, oss.str(), *history_[i]);
  }
  H5Gclose(history_hid);
  H5Fclose(file_hid);
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#else
  LOG(FATAL) << 'SnapshotSolverStateToHDF5 requires hdf5;'
             << ' compile with USE_HDF5.';
#endif  // USE_HDF5
}
    
    // Get pooling layer according to engine.
template <typename Dtype>
shared_ptr<Layer<Dtype> > GetPoolingLayer(const LayerParameter& param) {
  PoolingParameter_Engine engine = param.pooling_param().engine();
  if (engine == PoolingParameter_Engine_DEFAULT) {
    engine = PoolingParameter_Engine_CAFFE;
#ifdef USE_CUDNN
    engine = PoolingParameter_Engine_CUDNN;
#endif
  }
  if (engine == PoolingParameter_Engine_CAFFE) {
    return shared_ptr<Layer<Dtype> >(new PoolingLayer<Dtype>(param));
#ifdef USE_CUDNN
  } else if (engine == PoolingParameter_Engine_CUDNN) {
    if (param.top_size() > 1) {
      LOG(INFO) << 'cuDNN does not support multiple tops. '
                << 'Using Caffe's own pooling layer.';
      return shared_ptr<Layer<Dtype> >(new PoolingLayer<Dtype>(param));
    }
    // CuDNN assumes layers are not being modified in place, thus
    // breaking our index tracking for updates in some cases in Caffe.
    // Until there is a workaround in Caffe (index management) or
    // cuDNN, use Caffe layer to max pooling, or don't use in place
    // layers after max pooling layers
    if (param.pooling_param().pool() == PoolingParameter_PoolMethod_MAX) {
        return shared_ptr<Layer<Dtype> >(new PoolingLayer<Dtype>(param));
    } else {
        return shared_ptr<Layer<Dtype> >(new CuDNNPoolingLayer<Dtype>(param));
    }
#endif
  } else {
    LOG(FATAL) << 'Layer ' << param.name() << ' has unknown engine.';
    throw;  // Avoids missing return warning
  }
}
    
    template <typename Dtype>
void PoolingLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  PoolingParameter pool_param = this->layer_param_.pooling_param();
  if (pool_param.global_pooling()) {
    CHECK(!(pool_param.has_kernel_size() ||
      pool_param.has_kernel_h() || pool_param.has_kernel_w()))
      << 'With Global_pooling: true Filter size cannot specified';
  } else {
    CHECK(!pool_param.has_kernel_size() !=
      !(pool_param.has_kernel_h() && pool_param.has_kernel_w()))
      << 'Filter size is kernel_size OR kernel_h and kernel_w; not both';
    CHECK(pool_param.has_kernel_size() ||
      (pool_param.has_kernel_h() && pool_param.has_kernel_w()))
      << 'For non-square filters both kernel_h and kernel_w are required.';
  }
  CHECK((!pool_param.has_pad() && pool_param.has_pad_h()
      && pool_param.has_pad_w())
      || (!pool_param.has_pad_h() && !pool_param.has_pad_w()))
      << 'pad is pad OR pad_h and pad_w are required.';
  CHECK((!pool_param.has_stride() && pool_param.has_stride_h()
      && pool_param.has_stride_w())
      || (!pool_param.has_stride_h() && !pool_param.has_stride_w()))
      << 'Stride is stride OR stride_h and stride_w are required.';
  global_pooling_ = pool_param.global_pooling();
  round_mode_ = pool_param.round_mode();
  if (global_pooling_) {
    kernel_h_ = bottom[0]->height();
    kernel_w_ = bottom[0]->width();
  } else {
    if (pool_param.has_kernel_size()) {
      kernel_h_ = kernel_w_ = pool_param.kernel_size();
    } else {
      kernel_h_ = pool_param.kernel_h();
      kernel_w_ = pool_param.kernel_w();
    }
  }
  CHECK_GT(kernel_h_, 0) << 'Filter dimensions cannot be zero.';
  CHECK_GT(kernel_w_, 0) << 'Filter dimensions cannot be zero.';
  if (!pool_param.has_pad_h()) {
    pad_h_ = pad_w_ = pool_param.pad();
  } else {
    pad_h_ = pool_param.pad_h();
    pad_w_ = pool_param.pad_w();
  }
  if (!pool_param.has_stride_h()) {
    stride_h_ = stride_w_ = pool_param.stride();
  } else {
    stride_h_ = pool_param.stride_h();
    stride_w_ = pool_param.stride_w();
  }
  if (global_pooling_) {
    CHECK(pad_h_ == 0 && pad_w_ == 0 && stride_h_ == 1 && stride_w_ == 1)
      << 'With Global_pooling: true; only pad = 0 and stride = 1';
  }
  if (pad_h_ != 0 || pad_w_ != 0) {
    CHECK(this->layer_param_.pooling_param().pool()
        == PoolingParameter_PoolMethod_AVE
        || this->layer_param_.pooling_param().pool()
        == PoolingParameter_PoolMethod_MAX)
        << 'Padding implemented only for average and max pooling.';
    CHECK_LT(pad_h_, kernel_h_);
    CHECK_LT(pad_w_, kernel_w_);
  }
}
    
    
    {
    {    // Save a snapshot if needed.
    if ((param_.snapshot()
         && iter_ % param_.snapshot() == 0
         && Caffe::root_solver()) ||
         (request == SolverAction::SNAPSHOT)) {
      Snapshot();
    }
    if (SolverAction::STOP == request) {
      requested_early_exit_ = true;
      // Break out of training loop.
      break;
    }
  }
}
    
      /// @brief Deprecated; use <code>Blob(const vector<int>& shape)</code>.
  explicit Blob(const int num, const int channels, const int height,
      const int width);
  explicit Blob(const vector<int>& shape);
    
    #ifdef USE_OPENCV
  /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Mat.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<cv::Mat> & mat_vector,
                Blob<Dtype>* transformed_blob);
    
    	ground_bottom_color = Color::hex(0x282f36ff);
	ground_horizon_color = Color::hex(0x6c655fff);
	ground_curve = 0.02;
	ground_energy = 1;
    
    godot_pool_byte_array_read_access GDAPI *godot_pool_byte_array_read(const godot_pool_byte_array *p_self) {
	const PoolVector<uint8_t> *self = (const PoolVector<uint8_t> *)p_self;
	return (godot_pool_byte_array_read_access *)memnew(PoolVector<uint8_t>::Read(self->read()));
}
    
    UPNPDevice::UPNPDevice() {
	description_url = '';
	service_type = '';
	igd_control_url = '';
	igd_service_type = '';
	igd_our_addr = '';
	igd_status = IGD_STATUS_UNKNOWN_ERROR;
}
    
    class PowerIphone {
private:
	int nsecs_left;
	int percent_left;
	OS::PowerState power_state;
    }
    
      void done() {
    if (m_first) {
      m_out << '{';
    }
    m_out << '}\n';
  }
    
    
    {
    {
    {
    {          if (!val) {
            /* TODO: may be 'nil' is not OK? */
/*
            add_soap_fault(obj, 'Client', 'Can't find response data');
            xmlFreeDoc(response);
            return false;
*/
          } else {
            /* Decoding value of parameter */
            if (param != nullptr) {
              tmp = master_to_zval(param->encode, val);
            } else {
              tmp = master_to_zval(encodePtr(), val);
            }
          }
          return_value.toArrRef().set(String(param->paramName), tmp);
          param_count++;
        }
      }
    } else {
      /* Function hasn't WSDL description */
      xmlNodePtr val;
      val = resp->children;
      while (val != nullptr) {
        while (val && val->type != XML_ELEMENT_NODE) {
          val = val->next;
        }
        if (val != nullptr) {
          if (!node_is_equal_ex(val,'result',RPC_SOAP12_NAMESPACE)) {
            Variant tmp = master_to_zval(encodePtr(), val);
            if (val->name) {
              String key((char*)val->name, CopyString);
              if (return_value.toCArrRef().exists(key)) {
                auto const lval = return_value.toArrRef().lvalAt(key).unboxed();
                if (!isArrayLikeType(lval.type())) {
                  auto const tv = make_tv<KindOfArray>(
                    tvCastToArrayLikeData(lval.tv())
                  );
                  cellMove(tv, lval);
                }
                asArrRef(lval).append(tmp);
              } else if (val->next && get_node(val->next, (char*)val->name)) {
                Array arr = Array::Create();
                arr.append(tmp);
                return_value.toArrRef().set(key, arr);
              } else {
                return_value.toArrRef().set(key, tmp);
              }
            } else {
              return_value.toArrRef().append(tmp);
            }
            ++param_count;
          }
          val = val->next;
        }
      }
    }
  }
    
      // Use a key with non-zero span, because otherwise a key right at the base of
  // a range will be treated as before the range (bad) rather than within it
  // (good).
  PerfMap::Range key{uintptr_t(frame->addr), uintptr_t(frame->addr)+1};
  auto const& it = m_map.find(key);
  if (it == m_map.end()) {
    // Not found.
    frame->filename = '?';
    frame->funcname = 'TC?'; // Note HHProf::HandlePProfSymbol() dependency.
    return true;
  }
    
    #ifndef incl_HPHP_SYNCHRONIZABLE_H_
#define incl_HPHP_SYNCHRONIZABLE_H_
    
    /*
 * This contains shared stubs used for multiple purposes in the
 * ArrayData vtable.  Most of the functions used by more than one
 * kind, or for more than one purpose should be collected here.
 *
 * Note: if you have entry points on an array kind that should never
 * be called, it's generaelly preferable to give them their own unique
 * functions so it will be obvious which kind was involved in core
 * files.  We only try to consolidate the common array functions that
 * should actually be called.
 */
struct ArrayCommon {
  static ssize_t ReturnInvalidIndex(const ArrayData*);
    }
    
    /*
 * Initializes the repo schema id and the compiler id from their special
 * sections in the hhvm binary.
 */
void readBuildInfo() {
  if (inited.load(std::memory_order_acquire)) return;
  std::unique_lock<std::mutex> lock(mtx);
  if (inited.load(std::memory_order_acquire)) return;
    }
    
      // We want to ensure that all code blocks are close to each other so that we
  // can short jump/point between them. Thus we allocate one slab and divide it
  // between the various blocks.
    
        void* sp = (void*) ((char*) stack_ + stack_size_);
    
        tmp = (swFdInfo *) swHashMap_find_int(ht, 36 * 3);
    ASSERT_EQ((void* )tmp, nullptr);
    
    namespace swoole
{
    }
    
    
    {    return app.exec();
}

    
            auto iter = cache_map.find(key);
        if (iter != cache_map.end())
        {
            iter->second->second.first = expire_time;
            iter->second->second.second = val;
            cache_list.splice(cache_list.begin(), cache_list, iter->second);
            return;
        }
    
    typedef struct node_t
{
    int pri;
    int val;
} node_t;
    
                    if (ZEND_CALL_KIND_EX((*call_info) >> 24) == ZEND_CALL_TOP_CODE)
                {
                    return 0;
                }
                else if (ZEND_CALL_KIND_EX(*(call_info) >> 24) == ZEND_CALL_NESTED_CODE)
                {
                    memcpy(buf, '[INCLUDE_OR_EVAL]', sizeof('[INCLUDE_OR_EVAL]'));
                }
                else
                {
                    ZEND_ASSERT(0);
                }
            }
            else
            {
                if (0 > trace_get_strz(traced_pid, buf, buf_size, function_name + offsetof(zend_string, val)))
                {
                    return -1;
                }