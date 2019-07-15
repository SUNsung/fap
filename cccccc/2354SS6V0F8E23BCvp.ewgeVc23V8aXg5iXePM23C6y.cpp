
        
        #endif  // CHROME_BROWSER_CERTIFICATE_MANAGER_MODEL_H_

    
    Dictionary::Dictionary() : isolate_(NULL) {}
    
    namespace mate {
    }
    
    namespace internal {
    }
    
    bool Converter<v8::Local<v8::Function>>::FromV8(v8::Isolate* isolate,
                                                v8::Local<v8::Value> val,
                                                v8::Local<v8::Function>* out) {
  if (!val->IsFunction())
    return false;
  *out = v8::Local<v8::Function>::Cast(val);
  return true;
}
    
      bool Delete(const base::StringPiece& key) {
    v8::Maybe<bool> result = GetHandle()->Delete(isolate_->GetCurrentContext(),
                                                 StringToV8(isolate_, key));
    return !result.IsNothing() && result.FromJust();
  }
    
    
    { private:
  scoped_refptr<RefCountedPersistent<v8::Object>> handle_;
};
    
    std::string V8TypeAsString(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  if (value.IsEmpty())
    return '<empty handle>';
  v8::MaybeLocal<v8::String> details =
      value->ToDetailString(isolate->GetCurrentContext());
  std::string result;
  if (!details.IsEmpty())
    ConvertFromV8(isolate, details.ToLocalChecked(), &result);
  return result;
}
    
    ObjectTemplateBuilder& ObjectTemplateBuilder::MakeDestroyable() {
  SetMethod('destroy', base::Bind(internal::Destroyable::Destroy));
  SetMethod('isDestroyed', base::Bind(internal::Destroyable::IsDestroyed));
  return *this;
}
    
      // Helper class for linux specific messages.  LinuxWatcher is ref counted
  // because it posts messages between threads.
  class LinuxWatcher;
  scoped_refptr<LinuxWatcher> watcher_;
  int sock_;
  bool listen_on_ready_ = false;
#endif
    
    #if defined(OS_MACOSX)
  // Tell the application to create a new window for a tab.
  void NewWindowForTab();
#endif  // defined(OS_MACOSX)
    
      // This method determines if we should use the same process and if we should,
  // opens a new browser tab.  This runs on the UI thread.
  // |reader| is for sending back ACK message.
  void HandleMessage(const std::string& current_dir,
                     const std::vector<std::string>& argv,
                     SocketReader* reader);
    
    
    {} // namespace aria2

    
    class DHTSetup {
public:
  DHTSetup();
    }
    
      void update();
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port) const
{
  return generateToken(infoHash, ipaddr, port, secret_[0]);
}
    
      DNSCache& operator=(const DNSCache& c);
    
    
    {  // Sleep just until `num_bytes` is allowed.
  uint64_t sleep_amount =
      static_cast<uint64_t>(num_bytes /
                            static_cast<long double>(delayed_write_rate_) *
                            kMicrosPerSecond) +
      sleep_debt;
  last_refill_time_ = time_now + sleep_amount;
  return sleep_amount;
}
    
    #include <string>
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/compaction_filter.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/table.h'
#include 'rocksdb/utilities/options_util.h'
    
      // Number of open files that can be used by the DB.  You may need to
  // increase this if your database has a large working set (budget
  // one open file per 2MB of working set).
  //
  // Default: 1000
  int max_open_files;
    
    /*
 * Class:     org_rocksdb_Checkpoint
 * Method:    dispose
 * Signature: (J)V
 */
void Java_org_rocksdb_Checkpoint_disposeInternal(JNIEnv* /*env*/,
                                                 jobject /*jobj*/,
                                                 jlong jhandle) {
  auto* checkpoint = reinterpret_cast<rocksdb::Checkpoint*>(jhandle);
  assert(checkpoint != nullptr);
  delete checkpoint;
}
    
            // ------------------------------ Basic Operators ------------------------------ //
        Rectangle<T>& operator*=(const T value);
    
    template <typename Func, typename Arg0>
struct GetInfoFunctor0
{
    Func f_; const Arg0& arg0_;
    cl_int operator ()(
        cl_uint param, size_type size, void* value, size_type* size_ret)
    { return f_(arg0_, param, size, value, size_ret); }
};
    
        template<typename T>
    Rectangle<T> Rectangle<T>::operator/(const T value) const
    {
        try
        {
            return Rectangle<T>{T(x / value), T(y / value), T(width / value), T(height / value)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Rectangle<T>{};
        }
    }
    
    class RenderActionAppendTreeCreateFinish : public RenderAction {
 public:
  explicit RenderActionAppendTreeCreateFinish(const std::string &page_id,
                                              const std::string &ref);
    }
    
    
    {
    { private:
  float default_nav_width_;
  float default_overflow_width_;
};
}  // namespace WeexCore
    
    
    {
    { public:
  std::string page_id_;
};
}  // namespace WeexCore