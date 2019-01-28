
        
        namespace atom {
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RenderProcessPreferences);
};
    
      // C++ can not distinguish overloaded member function.
  template <AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template <AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template <typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
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
    
      // content::JavaScriptDialogManager implementations.
  void RunJavaScriptDialog(content::WebContents* web_contents,
                           content::RenderFrameHost* rfh,
                           content::JavaScriptDialogType dialog_type,
                           const base::string16& message_text,
                           const base::string16& default_prompt_text,
                           DialogClosedCallback callback,
                           bool* did_suppress_message) override;
  void RunBeforeUnloadDialog(content::WebContents* web_contents,
                             content::RenderFrameHost* rfh,
                             bool is_reload,
                             DialogClosedCallback callback) override;
  void CancelDialogs(content::WebContents* web_contents,
                     bool reset_state) override;
    
    AtomQuotaPermissionContext::~AtomQuotaPermissionContext() {}
    
    #endif  // ATOM_BROWSER_AUTO_UPDATER_H_

    
    #endif  // ATOM_BROWSER_NET_ABOUT_PROTOCOL_HANDLER_H_

    
    void URLRequestAboutJob::Kill() {
  weak_ptr_factory_.InvalidateWeakPtrs();
  URLRequestJob::Kill();
}
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
      // If we have a conflict with the word before the preposition, don't
  // split.
  if (std::next(nameWordRevIter) != nameWordRevIterEnd &&
      wordConflictsBeforePreposition(*std::next(nameWordRevIter), preposition))
    return false;
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    
    {
    {    void emitNote(clang::FullSourceLoc Loc, StringRef Message) override {
      // We get invalid note locations when trying to describe where a module
      // is imported and the actual location is in Swift. We also want to ignore
      // things like 'in module X imported from <swift-imported-modules>'.
      if (Loc.isInvalid() || isInSwiftBuffers(Loc))
        return;
      emitDiagnosticMessage(Loc, {}, clang::DiagnosticsEngine::Note, Message,
                            {}, {});
    }
  };
} // end anonymous namespace
    
    // Section 6.2: Decoding procedure
    
    namespace mxnet {
/*! \brief runtime functions for NDArray */
class Imperative {
 public:
  /*! \brief */
  class AGInfo {
   public:
    Context ctx;
    OpReqType grad_req;
    OpStatePtr state;
    std::vector<NDArray> outputs;
    std::vector<NDArray> out_grads;
    bool fresh_out_grad;
    }
    }
    }
    
    template<>
void SetDataGradToBlob<mshadow::gpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_gpu_diff(data_ptr);
}
    
    #define MXCAFFELAYER(__object$, __type$) \
  (static_cast<mxnet::op::caffe::CaffeLayerFriend<__type$> *>(__object$))
    
        // Caffe seems to understand phase inside an 'include {}' block
    if (!param_.prototxt.has_phase()) {
      if (param_.prototxt.include().size()) {
        if (param_.prototxt.include(0).has_phase()) {
          param_.prototxt.set_phase(param_.prototxt.include(0).phase());
        }
      }
    }
    
      /*brief Set up caffeop to infer output shape*/
  bool InferShape(std::vector<TShape> *in_shape,
                  std::vector<TShape> *out_shape,
                  std::vector<TShape> *aux_shape) const override {
    using namespace mshadow;
    using ::caffe::Blob;
    using std::vector;
    if (caffeOp_ == NULL)
      caffeOp_ = caffe::LayerRegistry<float>::CreateLayer(param_.prototxt);
    }
    
        int expected_num_data = param_.num_weight + param_.num_data;
    CHECK(in_data.size() == expected_num_data && in_grad.size() == expected_num_data);
    CHECK_EQ(req.size(), expected_num_data);
    
      uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionManagerHandler> handler(new ExtensionManagerHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionManagerProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }
    
      void __set_response(const ExtensionPluginResponse& val);
    
    // Starting with the dataset returned by createTestDB(), getTestDBResultStream
// returns a vector of std::pair's where pair.first is the query that would
// need to be performed on the dataset to make the results be pair.second
std::vector<std::pair<std::string, QueryData>> getTestDBResultStream();
    
    /**
 * @brief Queries SMART devices on the system by autodetection and explicit
 * storage controller arguments.
 *
 * @param client libsmartctl client
 * @param walk_func function that walks the system devices and runs the handler
 * function on each device
 * @param results reference to QueryData to store results in
 */
void querySmartDevices(
    libsmartctl::ClientInterface& client,
    std::function<void(
        std::function<void(const std::string&, hardwareDriver*)>)> walk_func,
    QueryData& results);
    
    class SQLPlugin : public Plugin {
 public:
  /// Run a SQL query string against the SQL implementation.
  virtual Status query(const std::string& query,
                       QueryData& results,
                       bool use_cache) const = 0;
    }