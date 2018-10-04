
        
          // add two new params for better error handling
  errorObject->Set(mate::StringToV8(isolate(), 'code'),
                   v8::Integer::New(isolate(), code));
  errorObject->Set(mate::StringToV8(isolate(), 'domain'),
                   mate::StringToV8(isolate(), domain));
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  BrowserView::SetConstructor(isolate, base::Bind(&BrowserView::New));
    }
    
    
    {}  // namespace atom

    
    // static
mate::Handle<DownloadItem> DownloadItem::Create(v8::Isolate* isolate,
                                                download::DownloadItem* item) {
  auto* existing = TrackableObject::FromWrappedClass(isolate, item);
  if (existing)
    return mate::CreateHandle(isolate, static_cast<DownloadItem*>(existing));
    }
    
    void Menu::SetRole(int index, const base::string16& role) {
  model_->SetRole(index, role);
}
    
    #include 'atom/browser/api/event_emitter.h'
    
      void Show();
  void Close();
    
    // static
void PowerMonitor::BuildPrototype(v8::Isolate* isolate,
                                  v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'PowerMonitor'));
    }
    
    namespace atom {
    }
    
    int RenderProcessPreferences::AddEntry(const base::DictionaryValue& entry) {
  return preferences_.AddEntry(entry);
}
    
      /// Retrieve the array of protocol conformances, which line up with the
  /// requirements of the generic signature.
  ArrayRef<ProtocolConformanceRef> getConformances() const {
    return llvm::makeArrayRef(getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
  MutableArrayRef<ProtocolConformanceRef> getConformances() {
    return MutableArrayRef<ProtocolConformanceRef>(
                              getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
    
    
    {  SyntaxMap[FromNode] = ToNode;
}
    
    
    {    buf = buf.substr(info.bytes);
  }
    
      // Now, match from the first word up until the end of the type name.
  auto typeWordIter = typeWordRevIter.base(),
    typeWordIterEnd = typeWords.end();
  ++nameWordIter;
  while (typeWordIter != typeWordIterEnd &&
         nameWordIter != nameWordIterEnd &&
         matchNameWordToTypeWord(*nameWordIter, *typeWordIter)) {
    ++typeWordIter;
    ++nameWordIter;
  }
    
    using namespace swift;
    
    
    {  return forInvalid();
}
    
    #include <intrin.h>
#include <boost/memory_order.hpp>
#include <boost/type_traits/make_signed.hpp>
#include <boost/atomic/detail/config.hpp>
#include <boost/atomic/detail/interlocked.hpp>
#include <boost/atomic/detail/storage_type.hpp>
#include <boost/atomic/detail/operations_fwd.hpp>
#include <boost/atomic/capabilities.hpp>
#include <boost/atomic/detail/ops_msvc_common.hpp>
    
      /**
   * @brief Stop the CAN client.
   */
  virtual void Stop() = 0;
    
      void SendThreadFunc() {
    using common::time::Clock;
    using common::time::AsInt64;
    using common::time::micros;
    using common::ErrorCode;
    AINFO << 'Send thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    std::vector<CanFrame> frames;
    frames.resize(MAX_CAN_SEND_FRAME_LEN);
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');
    
    
    {
    {
    {      --(*argc);
      --i;
    } else if (IsFlag(argv[i], 'help')) {
      PrintUsageAndExit();
    }
  }
  for (auto const* flag :
       {&FLAGS_benchmark_format, &FLAGS_benchmark_out_format})
    if (*flag != 'console' && *flag != 'json' && *flag != 'csv') {
      PrintUsageAndExit();
    }
  if (FLAGS_benchmark_color.empty()) {
    PrintUsageAndExit();
  }
}
    
    Benchmark* Benchmark::ThreadPerCpu() {
  thread_counts_.push_back(CPUInfo::Get().num_cpus);
  return this;
}
    
    
    {  *value = value_str;
  return true;
}
    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);