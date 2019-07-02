
        
        v8::Local<v8::Object> Dictionary::GetHandle() const {
  return object_;
}
    
    PersistentDictionary::~PersistentDictionary() {}
    
    namespace mate {
    }
    
    template <typename P1,
          typename P2,
          typename P3,
          typename P4,
          typename P5,
          typename P6>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2, P3, P4, P5, P6)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  typename CallbackParamTraits<P3>::LocalType a3;
  typename CallbackParamTraits<P4>::LocalType a4;
  typename CallbackParamTraits<P5>::LocalType a5;
  typename CallbackParamTraits<P6>::LocalType a6;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2) ||
      !GetNextArgument(args, 0, false, &a3) ||
      !GetNextArgument(args, 0, false, &a4) ||
      !GetNextArgument(args, 0, false, &a5) ||
      !GetNextArgument(args, 0, false, &a6))
    return nullptr;
  return callback.Run(a1, a2, a3, a4, a5, a6);
}
    
    template <>
struct Converter<v8::Local<v8::Object>> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   v8::Local<v8::Object> val);
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     v8::Local<v8::Object>* out);
};
    
      template <typename ReturnType>
  void DispatchToCallback(base::Callback<ReturnType(ArgTypes...)> callback) {
    v8::MicrotasksScope script_scope(args_->isolate(),
                                     v8::MicrotasksScope::kRunMicrotasks);
    args_->Return(callback.Run(ArgumentHolder<indices, ArgTypes>::value...));
  }
    
    template <typename T>
struct Converter<mate::Handle<T>> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const mate::Handle<T>& val) {
    return val.ToV8();
  }
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     mate::Handle<T>* out) {
    T* object = NULL;
    if (val->IsNull() || val->IsUndefined()) {
      *out = mate::Handle<T>();
      return true;
    }
    if (!Converter<T*>::FromV8(isolate, val, &object)) {
      return false;
    }
    v8::Local<v8::Context> context = isolate->GetCurrentContext();
    *out = mate::Handle<T>(val->ToObject(context).ToLocalChecked(), object);
    return true;
  }
};
    
    class Promise {
 public:
  Promise();
  explicit Promise(v8::Isolate* isolate);
  virtual ~Promise();
    }
    
    #if defined(OS_POSIX) && !defined(OS_ANDROID)
  // Exposed for testing.  We use a timeout on Linux, and in tests we want
  // this timeout to be short.
  NotifyResult NotifyOtherProcessWithTimeout(
      const base::CommandLine& command_line,
      int retry_attempts,
      const base::TimeDelta& timeout,
      bool kill_unresponsive);
  NotifyResult NotifyOtherProcessWithTimeoutOrCreate(
      const base::CommandLine& command_line,
      int retry_attempts,
      const base::TimeDelta& timeout);
  void OverrideCurrentPidForTesting(base::ProcessId pid);
  void OverrideKillCallbackForTesting(
      const base::RepeatingCallback<void(int)>& callback);
#endif
    
    #include 'shell/browser/api/atom_api_download_item.h'