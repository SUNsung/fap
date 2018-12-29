
        
        struct DefaultCache {
  llvm::sys::Mutex Mux;
  CacheImpl::CallBacks CBs;
  llvm::DenseMap<DefaultCacheKey, void *> Entries;
    }
    
    
    {} // end anonymous namespace
    
        case NameRole::BaseName:
    case NameRole::FirstParameter:
    case NameRole::Partial:
    case NameRole::SubsequentParameter:
      // Classify the part of speech of the word before the type
      // information we would strip off.
      switch (getPartOfSpeech(*nameWordRevIter)) {
      case PartOfSpeech::Preposition:
        if (role == NameRole::BaseName) {
          // Strip off the part of the name that is redundant with
          // type information, so long as there's something preceding the
          // preposition.
          if (std::next(nameWordRevIter) != nameWordRevIterEnd)
            name = name.substr(0, nameWordRevIter.base().getPosition());
          break;
        }
    }
    
      static CFPointeeInfo forVoid() {
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = nullptr;
    return info;
  }
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H */

    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
    
    {}  // namespace grpc
    
    void ProtoServerReflection::FillFileDescriptorResponse(
    const protobuf::FileDescriptor* file_desc,
    ServerReflectionResponse* response,
    std::unordered_set<grpc::string>* seen_files) {
  if (seen_files->find(file_desc->name()) != seen_files->end()) {
    return;
  }
  seen_files->insert(file_desc->name());
    }
    
      Status GetFileByName(ServerContext* context, const grpc::string& file_name,
                       reflection::v1alpha::ServerReflectionResponse* response);
    
    static std::unique_ptr< ::grpc::ServerBuilderPlugin> CreateProtoReflection() {
  return std::unique_ptr< ::grpc::ServerBuilderPlugin>(
      new ProtoServerReflectionPlugin());
}
    
    /*!
 * \brief DataBatch of NDArray, returned by Iterator
 */
struct DataBatch {
  /*! \brief content of dense data, if this DataBatch is dense */
  std::vector<NDArray> data;
  /*! \brief index of image data */
  std::vector<uint64_t> index;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
  /*! \brief num of example padded to batch */
  int num_batch_padd;
};  // struct DataBatch
    
    
    {
    {    std::vector<T> ret(ret_index.size());
    for (size_t i = 0; i < ret_index.size(); ++i) {
      ret[i] = all_data[ret_index[i]];
    }
    return ret;
  }
  /*!
   * \brief create OperatorProperty
   * \param type_name the type string of the OperatorProperty
   * \return a new constructed OperatorProperty
   */
  static OperatorProperty *Create(const char* type_name);
  /*! \return execution type of the operator */
  virtual ExecType exec_type() const {
    return ExecType::kSync;
  }
};
    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
    TShape Vector2TShape(const std::vector<int> &vec_int) {
  std::vector<mshadow::index_t> vec;
  for (uint32_t i = 0; i < vec_int.size(); ++i)
    vec.push_back(vec_int[i]);
  // 0-dim represents scalar in caffe
  if (vec_int.size() == 0)
    vec.push_back(1);
  return {vec.begin(), vec.end()};
}
    
    #if defined(__CUDACC__)
    Stream<xpu> *s = ctx.get_stream<xpu>();
    // TODO(Haoran): when need cublas handle in stream?
    CHECK_EQ(s->blas_handle_ownership_, Stream<xpu>::OwnHandle)
          << 'Must init CuBLAS handle in stream';
#endif  // __CUDACC__
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeOpProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    #include 'DHTNode.h'
#include 'DHTBucket.h'
#include 'DHTBucketTree.h'
#include 'DHTTaskQueue.h'
#include 'DHTTaskFactory.h'
#include 'DHTTask.h'
#include 'util.h'
#include 'LogFactory.h'
#include 'Logger.h'
#include 'fmt.h'
    
    public:
  DHTRoutingTableSerializer(int family);
    
      ~DHTTaskExecutor();
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
    class DHTTaskQueue {
public:
  virtual ~DHTTaskQueue() = default;
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}