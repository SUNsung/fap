
        
          static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    
    {  if (trusted_) {
    content::WebContents* web_view_contents = guest_web_contents_list[0];
    bool load_success = pdf_extension_test_util::EnsurePDFHasLoaded(
      web_view_contents);
    EXPECT_TRUE(load_success);
  }
}
    
    #include 'base/files/file_path.h'
    
      blink::LocalFrame* core_frame = blink::toWebLocalFrameImpl(frame)->frame();
  if (core_frame->deprecatedLocalOwner()) {
    element = blink::toV8((blink::HTMLElement*)core_frame->deprecatedLocalOwner(),
                            frame->mainWorldScriptContext()->Global(),
                            frame->mainWorldScriptContext()->GetIsolate());
  }
  args->Set(0, element);
  args->Set(1, v8_str(request.url().string().utf8().c_str()));
  args->Set(2, policy_obj);
    
    #include 'base/basictypes.h'
#include 'content/public/renderer/render_view_observer.h'
#include 'third_party/WebKit/public/web/WebNavigationPolicy.h'
#include <v8.h>
#include <string>
    
    #include 'base/basictypes.h'
#include 'base/compiler_specific.h'
#include 'v8/include/v8.h'
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    
    {    block_active_ = false;
    g_signal_connect(menu_item_, 'activate',
                     G_CALLBACK(OnClickThunk), this);
  }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    void RepeatedPrimitiveFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
void RepeatedPrimitiveFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
void RepeatedPrimitiveFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP

    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  std::string key       = *v8::String::Utf8Value(args[0]->ToString());
  std::string value     = *v8::String::Utf8Value(args[1]->ToString());
  std::string cf        = *v8::String::Utf8Value(args[2]->ToString());
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
      if(m_jcallback_obj != nullptr) {    
    env->DeleteGlobalRef(m_jcallback_obj);
  }
    
      virtual Status Insert(const Slice& key, void* value, size_t charge,
                        void (*deleter)(const Slice& key, void* value),
                        Handle** handle, Priority priority) override {
    // The handle and value passed in are for real cache, so we pass nullptr
    // to key_only_cache_ for both instead. Also, the deleter function pointer
    // will be called by user to perform some external operation which should
    // be applied only once. Thus key_only_cache accepts an empty function.
    // *Lambda function without capture can be assgined to a function pointer
    Handle* h = key_only_cache_->Lookup(key);
    if (h == nullptr) {
      key_only_cache_->Insert(key, nullptr, charge,
                              [](const Slice& k, void* v) {}, nullptr,
                              priority);
    } else {
      key_only_cache_->Release(h);
    }
    }
    
      virtual Status CreateColumnFamilies(
      const ColumnFamilyOptions& options,
      const std::vector<std::string>& column_family_names,
      std::vector<ColumnFamilyHandle*>* handles) override {
    return db_->CreateColumnFamilies(options, column_family_names, handles);
  }
    
    #pragma once
    
    
    {  ASSERT_TRUE(YGNodeLayoutGetHadOverflow(root));
}
    
    
    {
    {
    {  static void OnLoad();
 private:
  bool attachedWithThisScope_;
};
}
}
