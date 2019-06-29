
        
            StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
    
    {}%
    
    #include 'swift/Demangling/StandardTypesMangling.def'
    
    // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    namespace nwapi {
    }
    
      ui::KeyboardCode keyval = ui::VKEY_UNKNOWN;
    
    ExtensionFunction::ResponseAction
NwObjCallObjectMethodAsyncFunction::Run() {
  EXTENSION_FUNCTION_VALIDATE(args_);
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    MeasureDouble RpcClientServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error (propagated from the server)',
      kUnitMilliseconds);
  return measure;
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
    
    
    {}  // namespace
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    // A thread pool interface for running callbacks.
class ThreadPoolInterface {
 public:
  virtual ~ThreadPoolInterface() {}
    }
    
    namespace dmlc {
namespace data {
    }
    }
    
          ASSERT_TRUE(input == output);
    
      auto inst = page[0];
  ASSERT_EQ(inst.size(), 2);
  for (auto entry : inst) {
    ASSERT_EQ(entry.index, 0);
  }
    
    
    {}  // namespace xgboost
    
      void UpdatePredictionCache(
      const gbm::GBTreeModel& model,
      std::vector<std::unique_ptr<TreeUpdater>>* updaters,
      int num_new_trees) override {
    int old_ntree = model.trees.size() - num_new_trees;
    // update cache entry
    for (auto& kv : cache_) {
      PredictionCacheEntry& e = kv.second;
    }
    }