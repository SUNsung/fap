
        
        
    {}  // namespace atom
    
    namespace atom {
    }
    
    namespace atom {
    }
    
      // External notification requesting a sync datatype refresh for the current
  // profile. The details value is a const syncer::ObjectIdInvalidationMap.
  // If the payload map is empty, it should be treated as an invalidation for
  // all enabled types. This is used for notifications on Android.
  NOTIFICATION_SYNC_REFRESH_REMOTE,
    
    class ChromeBrowserPepperHostFactory : public ppapi::host::HostFactory {
 public:
  // Non-owning pointer to the filter must outlive this class.
  explicit ChromeBrowserPepperHostFactory(content::BrowserPpapiHost* host);
  ~ChromeBrowserPepperHostFactory() override;
    }
    
     private:
  PepperIsolatedFileSystemMessageFilter(int render_process_id,
                                        const base::FilePath& profile_directory,
                                        const GURL& document_url,
                                        ppapi::host::PpapiHost* ppapi_host_);
    
    decltype(__pfnDliNotifyHook2) __pfnDliNotifyHook2 = load_exe_hook;
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    
namespace nwapi {
    }
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    void MenuItem::SetChecked(bool checked) {
  // Set active will cause 'activate' to be emitted, so block here
  block_active_ = true;
  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(menu_item_), checked);
  block_active_ = false;
}
    
    bool NwAppCloseAllWindowsFunction::RunAsync() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return false;
    }
    
    bool NwClipboardClearSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
  return true;
}
    
    public:
  typedef Value value_type;
  typedef unsigned int size_t;
  typedef int difference_type;
  typedef Value& reference;
  typedef Value* pointer;
  typedef ValueIterator SelfType;
    
    void RepeatedEnumFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    #if defined(_MSC_VER) && _MSC_VER < 1400
// This is the only specialization that allows VC++ 7.1 to remove const in
// 'const int[3] and 'const int[3][4]'.  However, it causes trouble with GCC
// and thus needs to be conditionally compiled.
template <typename T, size_t N>
struct RemoveConst<T[N]> {
  typedef typename RemoveConst<T>::type type[N];
};
#endif
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_PARAM_UTIL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_PARAM_UTIL_H_
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
        for (int i = 2; i*i <= n; i++) {
      // n is divisible by an integer other than 1 and itself.
      if ((n % i) == 0) return false;
    }
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
    static const int kBlockSize = 32768;
    
    namespace leveldb {
    }
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    
#endif  // STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_

    
    namespace leveldb {
    }