
        
          static void OnDoneRecvMessageCb(void* user_data, grpc_error* error);
    
      explicit CensusContext(absl::string_view name)
      : span_(::opencensus::trace::Span::StartSpan(name)) {}
    
    // Client
MeasureDouble RpcClientSentBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientSentBytesPerRpcMeasureName,
      'Total bytes sent across all request messages per RPC', kUnitBytes);
  return measure;
}
    
    void ProtoServerReflection::FillErrorResponse(const Status& status,
                                              ErrorResponse* error_response) {
  error_response->set_error_code(status.error_code());
  error_response->set_error_message(status.error_message());
}
    
    
    {}  // namespace grpc
    
    // Given a map from type K to a set of value type V, removes the given key and
// the associated set, and returns the set. Returns an empty set if the key is
// not found.
template <typename K, typename V>
std::set<V> UnorderedMapOfSetExtract(std::unordered_map<K, std::set<V>>& map,
                                     const K& key) {
  auto it = map.find(key);
  if (it != map.end()) {
    auto set = std::move(it->second);
    map.erase(it);
    return set;
  }
  return {};
};
    
    
    {  // Schedule the given callback for execution.
  virtual void Add(const std::function<void()>& callback) = 0;
};
    
    #include 'src/proto/grpc/core/stats.pb.h'
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
    #ifndef PLUGIN_CAFFE_CAFFE_COMMON_H_
#define PLUGIN_CAFFE_CAFFE_COMMON_H_
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
    #ifndef DECL_BINARY_LAUNCH
#define DECL_BINARY_LAUNCH(XPU, OP)                                               \
  template <> \
  void BinaryOpKernelImpl<OP, XPU>(mshadow::Stream<XPU> *s, \
                          const TBlob& lhs, const TBlob& rhs, TBlob *out) { \
    BinaryOpKernelLaunch<OP>(s, lhs, rhs, out); \
  }
#endif
    
    )code' ADD_FILELINE)
.set_attr<FCompute>('FCompute<cpu>', DivSqrtDimForward_<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_contrib_div_sqrt_dim'});
    
    
    {
    {
    {  bool init_cudnn_;
  cudnnDataType_t dtype_;
  cudnnSpatialTransformerDescriptor_t st_desc_;
  cudnnTensorDescriptor_t in_desc_;
  cudnnTensorDescriptor_t out_desc_;
  cudnnSamplerType_t sampler_;
  #if CUDNN_MAJOR >= 5
  cudnnTensorFormat_t format_;
  #endif
  BilinearSamplerParam param_;
};
#endif  // __CUDACC__ && CUDNN
}  // namespace op
}  // namespace mxnet
    
    
    {
    {}  // namespace op
}  // namespace mxnet
    
    
    {  SrcPos start;
  SrcPos past;
};
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
      /**
   * Fill up vector with summary information.
   */
  virtual void debuggerInfo(InfoVec& /*info*/) {}
    
    PlainDirectory::~PlainDirectory() {
  close();
}
    
      void clear() {
    ptr_ = NULL;
    length_ = 0;
  }
  void set(const char* data, size_type len) {
    ptr_ = data;
    length_ = len;
  }
  void set(const char* str) {
    ptr_ = str;
    length_ = str ? strlen(str) : 0;
  }
  void set(const void* data, size_type len) {
    ptr_ = reinterpret_cast<const char*>(data);
    length_ = len;
  }
    
    
    {
    {}  // namespace phonenumbers
}  // namespace i18n
    
    #if !defined(NDEBUG) && !defined(I18N_PHONENUMBERS_USE_BOOST) && \
    (defined(__linux__) || defined(__apple__))
    
      string national_number;
  phone_util_.GetNationalSignificantNumber(number, &national_number);
  int64 phone_prefix;
  safe_strto64(SimpleItoa(number.country_code()) + national_number,
               &phone_prefix);
    
      const PhoneNumberUtil& phone_util_;
  scoped_ptr<const DefaultMapStorage> storage_;
    
    // Returns the number of elements in
// get_prefix_language_code_pairs()
int get_prefix_language_code_pairs_size();