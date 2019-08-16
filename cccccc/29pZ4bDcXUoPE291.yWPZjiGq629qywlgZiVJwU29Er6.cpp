
        
            for (auto protocol : protocols) {
#if SWIFT_OBJC_INTEROP
      if (protocol.isObjC()) {
        // The protocol name is mangled as a type symbol, with the _Tt prefix.
        StringRef ProtoName(protocol.getName());
        NodePointer protocolNode = Dem.demangleSymbol(ProtoName);
    }
    }
    
      ParameterList(SourceLoc LParenLoc, size_t numParameters, SourceLoc RParenLoc)
    : LParenLoc(LParenLoc), RParenLoc(RParenLoc), numParameters(numParameters){}
  void operator=(const ParameterList&) = delete;
public:
  /// Create a parameter list with the specified parameters.
  static ParameterList *create(const ASTContext &C, SourceLoc LParenLoc,
                               ArrayRef<ParamDecl*> params,
                               SourceLoc RParenLoc);
    
      /// Sets the serialized flag.
  void setSerialized(IsSerialized_t serialized) {
    assert(serialized != IsSerializable);
    Serialized = (serialized ? 1 : 0);
  }
    
    /// This is a base class for passes that are based on function liveness
/// computations like e.g. dead function elimination.
/// It provides a common logic for computing live (i.e. reachable) functions.
class FunctionLivenessComputation {
protected:
    }
    
      /// Get or create SILGlobalVariable for a given global VarDecl.
  SILGlobalVariable *getSILGlobalVariable(VarDecl *gDecl,
                                          ForDefinition_t forDef);
    
      const SelfMetadataSource *
  createSelf() {
    return SelfMetadataSource::create(*this);
  }
    
      llvm::ArrayRef<FieldRecord> getFields() const {
    return {getFieldRecordBuffer(), NumFields};
  }
    
      ReadBytesResult readBytes(RemoteAddress Addr, uint64_t Size) override {
    auto I = std::find_if(Images.begin(), Images.end(), [=](const Image &I) {
      return I.isAddressValid(Addr, Size);
    });
    return I == Images.end() ? ReadBytesResult(nullptr, [](const void *) {})
                             : I->readBytes(Addr, Size);
  }
    
      /// If set, the mangler calls this function to determine whether to symbolic
  /// reference a given entity. If null, the mangler acts as if it's set to
  /// always return true.
  std::function<bool (SymbolicReferent)> CanSymbolicReference;
  
  bool canSymbolicReference(SymbolicReferent referent) {
    return AllowSymbolicReferences
      && (!CanSymbolicReference || CanSymbolicReference(referent));
  }
    
    
    {  // Reshape blobs.
  const int batch_size = this->layer_param_.hdf5_data_param().batch_size();
  const int top_size = this->layer_param_.top_size();
  vector<int> top_shape;
  for (int i = 0; i < top_size; ++i) {
    top_shape.resize(hdf_blobs_[i]->num_axes());
    top_shape[0] = batch_size;
    for (int j = 1; j < top_shape.size(); ++j) {
      top_shape[j] = hdf_blobs_[i]->shape(j);
    }
    top[i]->Reshape(top_shape);
  }
}
    
    template <typename Dtype>
void SGDSolver<Dtype>::ComputeUpdateValue(int param_id, Dtype rate) {
  const vector<Blob<Dtype>*>& net_params = this->net_->learnable_params();
  const vector<float>& net_params_lr = this->net_->params_lr();
  Dtype momentum = this->param_.momentum();
  Dtype local_rate = rate * net_params_lr[param_id];
  // Compute the update to history, then copy it to the parameter diff.
  switch (Caffe::mode()) {
  case Caffe::CPU: {
    caffe_cpu_axpby(net_params[param_id]->count(), local_rate,
              net_params[param_id]->cpu_diff(), momentum,
              history_[param_id]->mutable_cpu_data());
    caffe_copy(net_params[param_id]->count(),
        history_[param_id]->cpu_data(),
        net_params[param_id]->mutable_cpu_diff());
    break;
  }
  case Caffe::GPU: {
#ifndef CPU_ONLY
    sgd_update_gpu(net_params[param_id]->count(),
        net_params[param_id]->mutable_gpu_diff(),
        history_[param_id]->mutable_gpu_data(),
        momentum, local_rate);
#else
    NO_GPU;
#endif
    break;
  }
  default:
    LOG(FATAL) << 'Unknown caffe mode: ' << Caffe::mode();
  }
}
    
      Blob<Dtype>* blob_label = new Blob<Dtype>();
  hdf5_load_nd_dataset(file_id, HDF5_DATA_LABEL_NAME, 0, 4,
                       blob_label, reshape);
  this->CheckBlobEqual(*(this->blob_label_), *blob_label);
    
      if (reshape) {
    blob->Reshape(blob_dims);
  } else {
    if (blob_dims != blob->shape()) {
      // create shape string for error message
      ostringstream stream;
      int count = 1;
      for (int i = 0; i < blob_dims.size(); ++i) {
        stream << blob_dims[i] << ' ';
        count = count * blob_dims[i];
      }
      stream << '(' << count << ')';
      string source_shape_string = stream.str();
    }
    }
    
      gflags::SetUsageMessage('This script converts the MNIST dataset to\n'
        'the lmdb/leveldb format used by Caffe to load data.\n'
        'Usage:\n'
        '    convert_mnist_data [FLAGS] input_image_file input_label_file '
        'output_db_file\n'
        'The MNIST dataset could be downloaded at\n'
        '    http://yann.lecun.com/exdb/mnist/\n'
        'You should gunzip them after downloading,'
        'or directly use data/mnist/get_mnist.sh\n');
  gflags::ParseCommandLineFlags(&argc, &argv, true);
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    #ifndef MXNET_PROFILER_AGGREGATE_STATS_H_
#define MXNET_PROFILER_AGGREGATE_STATS_H_
    
    void StorageImpl::DirectFree(Storage::Handle handle) {
  // Do nothing if dtpr is nullptr because the handle may have already
  // been freed or have not been allocated memory yet.
  if (handle.dptr == nullptr) return;
    }
    
    template <typename DType>
void LstmBackward(DType* ws,
                  DType* rs,
                  const int L,
                  const int D,
                  const int T,
                  const int N,
                  const int I,
                  const int H,
                  DType* x_ptr,
                  DType* hx_ptr,
                  DType* cx_ptr,
                  DType* w_ptr,
                  DType* y_ptr,
                  DType* dy_ptr,
                  DType* dhy_ptr,
                  DType* dcy_ptr,
                  DType* dx_ptr,
                  DType* dhx_ptr,
                  DType* dcx_ptr,
                  DType* dw_ptr,
                  DType* db_ptr,
                  int req_data,
                  int req_params,
                  int req_state,
                  int req_statecell,
                  const float dropout) {
  DType* dropout_random = rs + (L - 1) * D * T * N * H;
  DType* rs2 = rs + (L - 1) * D * T * N * H;
  DType* tmp_buf = ws;
  DType* ws2 = tmp_buf + 8 * T * H;
  const int total_layers = D * L;
  Tensor<cpu, 3, DType> hx(hx_ptr, Shape3(total_layers, N, H));
  Tensor<cpu, 3, DType> cx(cx_ptr, Shape3(total_layers, N, H));
  Tensor<cpu, 3, DType> dhx(dhx_ptr, Shape3(total_layers, N, H));
  Tensor<cpu, 3, DType> dcx(dcx_ptr, Shape3(total_layers, N, H));
  const int b_size = 2 * H * 4;
  const int r_size = D * T * N * H * 6;
  const int y_offset = T * N * H * 5;
  const int w_size1 = (I + H) * H * 4;      // first layer
  const int w_size2 = (D * H + H) * H * 4;  // other layers
  const int cell_size = N * H;
  DType* dy_tmp_ptr = ws2 + T * cell_size * 4 + cell_size * 3;
  for (int i = L - 1; i >= 0; --i) {
    const int input_size = i ? H * D : I;
    const int w_size = i ? w_size2 : w_size1;
    int idx = i * D;
    DType* w_cur_ptr = i ? w_ptr + (w_size1 + (i - 1) * w_size2) * D : w_ptr;
    DType* dw_cur_ptr = i ? dw_ptr + (w_size1 + (i - 1) * w_size2) * D : dw_ptr;
    DType* db_cur_ptr = db_ptr + i * b_size * D;
    DType* rs_cur_ptr = rs2 + i * r_size;
    DType* dhy_cur_ptr = dhy_ptr ? dhy_ptr + i * cell_size * D : NULL;
    DType* dcy_cur_ptr = dcy_ptr ? dcy_ptr + i * cell_size * D : NULL;
    Tensor<cpu, 3, DType> y(rs_cur_ptr + y_offset, Shape3(T, N, H * D));
    Tensor<cpu, 3, DType> dy(dy_ptr, Shape3(T, N, H * D));
    Tensor<cpu, 2, DType> x(i ? y.dptr_ - r_size : x_ptr, Shape2(T * N, input_size));
    Tensor<cpu, 2, DType> dx(i ? dy_tmp_ptr : dx_ptr, Shape2(T * N, input_size));
    LstmBackwardSingleLayer<DType>(ws2, rs_cur_ptr, tmp_buf, false, T, N, input_size, H,
                                   x, hx[idx], cx[idx], y, dy, dx, dhx[idx], dcx[idx],
                                   dhy_cur_ptr, dcy_cur_ptr, w_cur_ptr, dw_cur_ptr, db_cur_ptr,
                                   req_data, req_params, req_state, req_statecell);
    if (D == 2) {
      w_cur_ptr += w_size;
      dw_cur_ptr += w_size;
      db_cur_ptr += b_size;
      ++idx;
      dhy_cur_ptr = dhy_ptr ? dhy_cur_ptr + cell_size : NULL;
      dcy_cur_ptr = dcy_ptr ? dcy_cur_ptr + cell_size : NULL;
      LstmBackwardSingleLayer<DType>(ws2, rs_cur_ptr, tmp_buf, true, T, N, input_size, H,
                                     x, hx[idx], cx[idx], y, dy, dx, dhx[idx], dcx[idx],
                                     dhy_cur_ptr, dcy_cur_ptr, w_cur_ptr, dw_cur_ptr, db_cur_ptr,
                                     req_data, req_params, req_state, req_statecell);
    }
    if (dropout > 0.0f && i > 0 && req_data != kNullOp) {
      dropout_random = dropout_random - T * N * D * H;
      const int omp_threads = mxnet::engine::OpenMP::Get()->GetRecommendedOMPThreadCount();
      #pragma omp parallel for num_threads(omp_threads)
      for (int j = 0; j < T * N * D * H; j++) {
        if (dropout_random[j] == 0) {
          dx.dptr_[j] = 0;
        } else {
          dx.dptr_[j] = dx.dptr_[j] / (1.0f - dropout);
        }
      }
    }
    dy_ptr = dx.dptr_;
  }
}
    
    namespace mxnet {
namespace op {
    }
    }
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    Speed* Speed::create(ActionInterval* action, float speed)
{
    Speed *ret = new (std::nothrow) Speed();
    if (ret && ret->initWithAction(action, speed))
    {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
    OrbitCamera * OrbitCamera::create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    OrbitCamera * obitCamera = new (std::nothrow) OrbitCamera();
    if(obitCamera && obitCamera->initWithDuration(t, radius, deltaRadius, angleZ, deltaAngleZ, angleX, deltaAngleX))
    {
        obitCamera->autorelease();
        return obitCamera;
    }
    
    delete obitCamera;
    return nullptr;
}
    
    #if defined(__GNUC__) && ((__GNUC__ >= 4) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1)))
#pragma GCC diagnostic ignored '-Wdeprecated-declarations'
#elif _MSC_VER >= 1400 //vs 2005 or higher
#pragma warning (push)
#pragma warning (disable: 4996)
#endif
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
            if ( frameNames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: Animation '%s' found in dictionary without any frames - cannot add to animation cache.', anim.first.c_str());
            continue;
        }
    
    void ComponentContainer::onEnter()
{
    for (auto& iter : _componentMap)
    {
        iter.second->onEnter();
    }
}