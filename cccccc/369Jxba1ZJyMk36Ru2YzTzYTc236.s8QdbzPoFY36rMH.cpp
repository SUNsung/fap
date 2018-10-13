
        
        
    {    result->AppendBoolean(success);
    return;
  } else if (method == 'UnregisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    GlobalShortcutListener::GetInstance()->UnregisterAccelerator(
        shortcut->GetAccelerator(), shortcut);
    return;
  } else if (method == 'SetProxyConfig') {
    std::string proxy_config;
    arguments.GetString(0, &proxy_config);
    SetProxyConfig(GetRenderProcessHost(), proxy_config);
    return;
  } else if (method == 'DoneMenuShow') {
    dispatcher_host->quit_run_loop();
    return;
  }
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
      ~EventListener() override;
    
    class MenuDelegate : public ui::SimpleMenuModel::Delegate {
 public:
  MenuDelegate(ObjectManager* object_manager);
  ~MenuDelegate() override;
    }
    
    
    {  focus_manager_ = NULL;
}
    
     protected:
  ~NwAppGetArgvSyncFunction() override;
    
      bool NwScreenInitEventListenersFunction::RunNWSync(base::ListValue* response, std::string* error) {
    NwScreenDisplayObserver::GetInstance();
    return true;
  }
    
    template <class I>
struct is_random_imp
{
#ifndef BOOST_NO_STD_ITERATOR_TRAITS
private:
   typedef typename std::iterator_traits<I>::iterator_category cat;
public:
   BOOST_STATIC_CONSTANT(bool, value = (::boost::is_convertible<cat*, std::random_access_iterator_tag*>::value));
#else
   BOOST_STATIC_CONSTANT(bool, value = false);
#endif
};
    
       // find out which of these two alternatives we need to take:
   bool take_first, take_second;
   if(position == last)
   {
      take_first = rep->can_be_null & mask_take;
      take_second = rep->can_be_null & mask_skip;
   }
   else
   {
      take_first = can_start(*position, rep->_map, (unsigned char)mask_take);
      take_second = can_start(*position, rep->_map, (unsigned char)mask_skip);
   }
    
    #ifndef BOOST_NO_WREGEX
#define BOOST_REGEX_CHAR_T wchar_t
#ifdef BOOST_REGEX_WIDE_INSTANTIATE
#  define BOOST_REGEX_INSTANTIATE
#endif
#include <boost/regex/v4/instances.hpp>
#undef BOOST_REGEX_CHAR_T
#ifdef BOOST_REGEX_INSTANTIATE
#  undef BOOST_REGEX_INSTANTIATE
#endif
#endif
    
    static void Dump(benchmark::State& state, const char* filename, int indent)
{
    std::ifstream f(filename);
    std::string str((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    json j = json::parse(str);
    }
    
    // Macros for defining flags.
#define DEFINE_bool(name, default_val, doc) bool FLAG(name) = (default_val)
#define DEFINE_int32(name, default_val, doc) int32_t FLAG(name) = (default_val)
#define DEFINE_int64(name, default_val, doc) int64_t FLAG(name) = (default_val)
#define DEFINE_double(name, default_val, doc) double FLAG(name) = (default_val)
#define DEFINE_string(name, default_val, doc) \
  std::string FLAG(name) = (default_val)
    
    
    {    printed_header_ = true;
  } else {
    // check that all the current counters are saved in the name set
    for (const auto& run : reports) {
      for (const auto& cnt : run.counters) {
        CHECK(user_counter_names_.find(cnt.first) != user_counter_names_.end())
              << 'All counters must be present in each run. '
              << 'Counter named \'' << cnt.first
              << '\' was not in a run after being added to the header';
      }
    }
  }
    
    // Enable thread safety attributes only with clang.
// The attributes can be safely erased when compiling with other compilers.
#if defined(HAVE_THREAD_SAFETY_ATTRIBUTES)
#define THREAD_ANNOTATION_ATTRIBUTE__(x) __attribute__((x))
#else
#define THREAD_ANNOTATION_ATTRIBUTE__(x)  // no-op
#endif