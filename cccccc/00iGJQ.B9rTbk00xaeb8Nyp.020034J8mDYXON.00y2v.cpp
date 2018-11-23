
        
        void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('autoUpdater', AutoUpdater::Create(isolate));
  dict.Set('AutoUpdater', AutoUpdater::GetConstructor(isolate)->GetFunction());
}
    
    using CompletionCallback = base::Callback<void(const base::FilePath&)>;
    
    template <>
struct Converter<in_app_purchase::Product> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const in_app_purchase::Product& val) {
    mate::Dictionary dict = mate::Dictionary::CreateEmpty(isolate);
    dict.SetHidden('simple', true);
    dict.Set('productIdentifier', val.productIdentifier);
    dict.Set('localizedDescription', val.localizedDescription);
    dict.Set('localizedTitle', val.localizedTitle);
    dict.Set('contentVersion', val.localizedTitle);
    dict.Set('contentLengths', val.contentLengths);
    }
    }
    
      URLRequest::SetConstructor(isolate, base::Bind(URLRequest::New));
    
    #include 'atom/browser/api/event_emitter.h'
    
     private:
  // this.emit(name, event, args...);
  template <typename... Args>
  bool EmitWithEvent(const base::StringPiece& name,
                     v8::Local<v8::Object> event,
                     const Args&... args) {
    v8::Locker locker(isolate());
    v8::HandleScope handle_scope(isolate());
    EmitEvent(isolate(), GetWrapper(), name, event, args...);
    return event->Get(StringToV8(isolate(), 'defaultPrevented'))
        ->BooleanValue();
  }
    
    void SavePageHandler::OnDownloadUpdated(download::DownloadItem* item) {
  if (item->IsDone()) {
    v8::Isolate* isolate = v8::Isolate::GetCurrent();
    v8::Locker locker(isolate);
    v8::HandleScope handle_scope(isolate);
    if (item->GetState() == download::DownloadItem::COMPLETE) {
      callback_.Run(v8::Null(isolate));
    } else {
      v8::Local<v8::String> error_message =
          v8::String::NewFromUtf8(isolate, 'Fail to save page');
      callback_.Run(v8::Exception::Error(error_message));
    }
    Destroy(item);
  }
}
    
      bool IsDestroyed() {
    v8::Local<v8::Object> wrapper = Wrappable<T>::GetWrapper();
    return wrapper->InternalFieldCount() == 0 ||
           wrapper->GetAlignedPointerFromInternalField(0) == nullptr;
  }
    
    class AtomJavaScriptDialogManager : public content::JavaScriptDialogManager {
 public:
  explicit AtomJavaScriptDialogManager(api::WebContents* api_web_contents);
  ~AtomJavaScriptDialogManager() override;
    }
    
    #ifndef ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
#define ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
    
    /**
 * @brief Get a specific filler from the specification given in FillerParameter.
 *
 * Ideally this would be replaced by a factory pattern, but we will leave it
 * this way for now.
 */
template <typename Dtype>
Filler<Dtype>* GetFiller(const FillerParameter& param) {
  const std::string& type = param.type();
  if (type == 'constant') {
    return new ConstantFiller<Dtype>(param);
  } else if (type == 'gaussian') {
    return new GaussianFiller<Dtype>(param);
  } else if (type == 'positive_unitball') {
    return new PositiveUnitballFiller<Dtype>(param);
  } else if (type == 'uniform') {
    return new UniformFiller<Dtype>(param);
  } else if (type == 'xavier') {
    return new XavierFiller<Dtype>(param);
  } else if (type == 'msra') {
    return new MSRAFiller<Dtype>(param);
  } else if (type == 'bilinear') {
    return new BilinearFiller<Dtype>(param);
  } else {
    CHECK(false) << 'Unknown filler name: ' << param.type();
  }
  return (Filler<Dtype>*)(NULL);
}
    
    
    {}  // namespace caffe
    
      static vector<string> LayerTypeList() {
    CreatorRegistry& registry = Registry();
    vector<string> layer_types;
    for (typename CreatorRegistry::iterator iter = registry.begin();
         iter != registry.end(); ++iter) {
      layer_types.push_back(iter->first);
    }
    return layer_types;
  }
    
      int num_kernels_im2col_;
  int num_kernels_col2im_;
  int conv_out_channels_;
  int conv_in_channels_;
  int conv_out_spatial_dim_;
  int kernel_dim_;
  int col_offset_;
  int output_offset_;
    
    #endif  // CAFFE_DATA_LAYERS_HPP_

    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    
    {    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    state.SetBytesProcessed(state.iterations() * file.tellg());
}
BENCHMARK_CAPTURE(ParseFile, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseFile, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseFile, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseFile, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseFile, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseFile, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseFile, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
    std::string FormatString(const char* msg, va_list args);
std::string FormatString(const char* msg, ...);
    
    // Returns true if the string matches the flag.
bool IsFlag(const char* str, const char* flag);
    
    BenchmarkReporter::BenchmarkReporter()
    : output_stream_(&std::cout), error_stream_(&std::cerr) {}
    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_struct', 0, arguments));
  std::array<int, 2> expected{{sizeof(testStruct), sizeof(testStruct)}};
  checkTracepointArguments(arguments, expected);
}
    
    //////////////////////////////////////////////////////////////////////
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
          void operator()() {
        f_();
      }
    
    #include <folly/Function.h>
#include <folly/Optional.h>
#include <folly/Range.h>
    
      bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto newptr = get_newptr(n);
    PackedPtr oldptr, expectedptr;
    }