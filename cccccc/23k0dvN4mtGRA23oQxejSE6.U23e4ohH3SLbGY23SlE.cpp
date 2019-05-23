
        
        namespace atom {
    }
    
    // TaskRunner implementation that posts tasks into libuv's default loop.
class UvTaskRunner : public base::SingleThreadTaskRunner {
 public:
  explicit UvTaskRunner(uv_loop_t* loop);
    }
    
    
    {}  // namespace api
    
    
    {}  // namespace atom

    
    void OffscreenViewProxy::SetBitmap(const SkBitmap& bitmap) {
  if (view_bounds_.width() == bitmap.width() &&
      view_bounds_.height() == bitmap.height() && observer_) {
    view_bitmap_.reset(new SkBitmap(bitmap));
    observer_->OnProxyViewPaint(view_bounds_);
  }
}
    
      /* Should be tested when running loops to exit when requested. */
  bool must_stop();
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    
    {  // extra temporarary variables is used to carry out sums/broadcasting
  // using BLAS
  Blob<Dtype> batch_sum_multiplier_;
  Blob<Dtype> num_by_chans_;
  Blob<Dtype> spatial_sum_multiplier_;
};
    
    namespace caffe {
    }
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    bool FaultInjectionTestEnv::IsFileCreatedSinceLastDirSync(
    const std::string& filename) {
  MutexLock l(&mutex_);
  return new_files_since_last_dir_sync_.find(filename) !=
         new_files_since_last_dir_sync_.end();
}
    
        if (resyncing_) {
      if (record_type == kMiddleType) {
        continue;
      } else if (record_type == kLastType) {
        resyncing_ = false;
        continue;
      } else {
        resyncing_ = false;
      }
    }
    
      bool Overlaps(const char* smallest, const char* largest) {
    InternalKeyComparator cmp(BytewiseComparator());
    Slice s(smallest != nullptr ? smallest : '');
    Slice l(largest != nullptr ? largest : '');
    return SomeFileOverlapsRange(cmp, disjoint_sorted_files_, files_,
                                 (smallest != nullptr ? &s : nullptr),
                                 (largest != nullptr ? &l : nullptr));
  }
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key; iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n', read + 1,
            size / 1048576.0, Size(Key(n), Key(kCount)) / 1048576.0);
    if (size <= initial_size / 10) {
      break;
    }
  }
    
      // If an error has occurred, return it.  Else return an ok status.
  virtual Status status() const = 0;
    
      // -------------------
  // Parameters that affect behavior
    
      ~Table();
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
    // these gpu functions are defined in gradient_compression.cu
void Quantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                      const float threshold);
void Dequantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                        const float threshold);
    
    struct GradientCompressionParam : public dmlc::Parameter<GradientCompressionParam> {
  std::string type;
  float threshold;
  DMLC_DECLARE_PARAMETER(GradientCompressionParam) {
    DMLC_DECLARE_FIELD(type)
      .describe('Type of gradient compression to use, like `2bit` for example');
    DMLC_DECLARE_FIELD(threshold).set_default(0.5)
      .describe('Threshold to use for 2bit gradient compression');
  }
};
    
    KVStore* KVStore::Create(const char *type_name) {
  std::string tname = type_name;
  std::transform(tname.begin(), tname.end(), tname.begin(), ::tolower);
  KVStore* kv = nullptr;
  bool use_device_comm = false;
  auto has = [tname](const std::string& pattern) {
    return tname.find(pattern) != std::string::npos;
  };
  if (has('device')) {
    use_device_comm = true;
  }
    }
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file native_op.cc
 * \brief
 * \author Junyuan Xie
*/
#include './native_op-inl.h'
    
    MXNET_REGISTER_OP_PROPERTY(IdentityAttachKLSparseReg, IdentityAttachKLSparseRegProp)
.describe('Apply a sparse regularization to the output a sigmoid activation function.')
.add_argument('data', 'NDArray-or-Symbol', 'Input data.')
.add_arguments(IdentityAttachKLSparseRegParam::__FIELDS__());
    
    bool SimpleCSRSource::Next() {
  if (!at_first_) return false;
  at_first_ = false;
  return true;
}
    
      void InitOutPredictions(const MetaInfo& info,
                          HostDeviceVector<bst_float>* out_preds,
                          const gbm::GBTreeModel& model) const {
    size_t n = model.param.num_output_group * info.num_row_;
    const auto& base_margin = info.base_margin_.HostVector();
    out_preds->Resize(n);
    std::vector<bst_float>& out_preds_h = out_preds->HostVector();
    if (base_margin.size() == n) {
      CHECK_EQ(out_preds->Size(), n);
      std::copy(base_margin.begin(), base_margin.end(), out_preds_h.begin());
    } else {
      if (!base_margin.empty()) {
        std::ostringstream oss;
        oss << 'Warning: Ignoring the base margin, since it has incorrect length. '
            << 'The base margin must be an array of length ';
        if (model.param.num_output_group > 1) {
          oss << '[num_class] * [number of data points], i.e. '
              << model.param.num_output_group << ' * ' << info.num_row_
              << ' = ' << n << '. ';
        } else {
          oss << '[number of data points], i.e. ' << info.num_row_ << '. ';
        }
        oss << 'Instead, all data points will use '
            << 'base_score = ' << model.base_margin;
        LOG(INFO) << oss.str();
      }
      std::fill(out_preds_h.begin(), out_preds_h.end(), model.base_margin);
    }
  }
    
    //////////////////////////////////////////////////////////////////////
    
      /*
   * Create an uncounted array if we can.
   *
   * If this collection is an OuterHandle, then we need to do a full check on
   * this array for things like circularity.  If we're an InnerHandle, someone
   * already checked that, but we want to check for whether it's uncounted to
   * use a better representation.  For the OuterHandle case, we just delegate
   * to APCArray below (which will do the full DataWalker pass).
   */
  if (level == APCHandleLevel::Inner && apcExtension::UseUncounted &&
      !array->empty()) {
    DataWalker walker(DataWalker::LookupFeature::HasObjectOrResource);
    auto const features = walker.traverseData(const_cast<ArrayData*>(array));
    assertx(!features.isCircular);
    if (!features.hasObjectOrResource) {
      auto const makeUncounted = [&] () {
        if (isVectorCollection(obj->collectionType())) {
          return APCArray::MakeUncountedVec(const_cast<ArrayData*>(array));
        }
        return APCArray::MakeUncountedDict(const_cast<ArrayData*>(array));
      };
      return WrapArray(
        { makeUncounted(), getMemSize(array) + sizeof(APCTypedValue) },
        obj->collectionType()
      );
    }
  }
    
    namespace HPHP {
    }
    
    #include <sys/types.h>
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
      CLASSNAME_IS('OutputFile');
  // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    #endif // incl_HPHP_PIPE_H_

    
    /**
 * A request-local wrapper for the three standard files:
 * STDIN, STDOUT, and STDERR.
 */
struct BuiltinFiles final : RequestEventHandler {
  static const Variant& GetSTDIN();
  static const Variant& GetSTDOUT();
  static const Variant& GetSTDERR();
    }