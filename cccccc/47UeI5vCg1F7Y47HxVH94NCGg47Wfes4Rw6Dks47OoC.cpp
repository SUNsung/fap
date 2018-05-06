
        
              T* resource;
      OP_REQUIRES_OK(
          context,
          mgr->LookupOrCreate<T>(cinfo_.container(), cinfo_.name(), &resource,
                                 [this](T** ret) EXCLUSIVE_LOCKS_REQUIRED(mu_) {
                                   Status s = CreateResource(ret);
                                   if (!s.ok() && *ret != nullptr) {
                                     CHECK((*ret)->Unref());
                                   }
                                   return s;
                                 }));
    
      double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
  }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
    string VersionedComputationHandle::ToString() const {
  return tensorflow::strings::StrCat(handle.handle(), ':v', version);
}
    
    HloReachabilityMap::HloReachabilityMap(
    const std::list<HloInstruction*>& instructions)
    : size_(instructions.size()) {
  bit_vectors_.reserve(size_);
  for (const HloInstruction* hlo : instructions) {
    indices_[hlo] = bit_vectors_.size();
    bit_vectors_.emplace_back(size_);
  }
  CHECK_EQ(size_, indices_.size());  // instructions should be unique
}
    
    namespace tensorflow {
#define REGISTER_COMPLEX(D, R, C)                         \
  REGISTER_KERNEL_BUILDER(Name('Angle')                   \
                              .Device(DEVICE_##D)         \
                              .TypeConstraint<C>('T')     \
                              .TypeConstraint<R>('Tout'), \
                          UnaryOp<D##Device, functor::get_angle<C>>);
    }
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    
    {  std::vector<string> debug_urls_1;
  ASSERT_FALSE(
      DebugIO::IsDebugNodeGateOpen('foo:1:DebugIdentity', debug_urls_1));
}
    
    #include 'grpc++/grpc++.h'
#include 'tensorflow/core/debug/debug_io_utils.h'
#include 'tensorflow/core/debug/debug_service.grpc.pb.h'
#include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/platform/mutex.h'
    
    
    {  // ExtensionFunction:
  bool RunAsync() override;
  DECLARE_EXTENSION_FUNCTION('nw.currentWindowInternal.setBadgeLabel', UNKNOWN)
};
    
    // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
        base::win::ShortcutProperties props;
    base::string16 appID;
    if (content::Shell::GetPackage()->root()->GetString('app-id', &appID) == false)
      content::Shell::GetPackage()->root()->GetString(switches::kmName, &appID);
    const std::wstring appName = base::UTF8ToWide(content::Shell::GetPackage()->GetName());
    props.set_app_id(appID);
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
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
    
    void Menu::Destroy() {
}
    
    void MenuItem::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    if (enable_shortcut_){
      focus_manager->RegisterAccelerator(
        accelerator_,
        ui::AcceleratorManager::kHighPriority,
        this);
    }
    if (submenu_ != NULL){
      submenu_->UpdateKeys(focus_manager);
    }
  }
}
    
    bool NwClipboardReadAvailableTypesFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  bool contains_filenames;
  std::vector<base::string16> types;
  clipboard->ReadAvailableTypes(ui::CLIPBOARD_TYPE_COPY_PASTE, &types, &contains_filenames);
  for(std::vector<base::string16>::iterator it = types.begin(); it != types.end(); it++) {
    if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeText)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_TEXT))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeHTML)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_HTML))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeRTF)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_RTF))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypePNG)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_PNG))));
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_JPEG))));
    }
  }
  return true;
}
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    static char* CopyString(const std::string& str) {
  char* result = reinterpret_cast<char*>(malloc(sizeof(char) * str.size()));
  memcpy(result, str.data(), sizeof(char) * str.size());
  return result;
}
    
    
    {}  // namespace leveldb
    
    namespace leveldb {
    }
    
        if (bytes_ > 0) {
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / (finish - start_));
      if (!message_.empty()) {
        message_  = std::string(rate) + ' ' + message_;
      } else {
        message_ = rate;
      }
    }
    
    // A Comparator object provides a total order across slices that are
// used as keys in an sstable or a database.  A Comparator implementation
// must be thread-safe since leveldb may invoke its methods concurrently
// from multiple threads.
class Comparator {
 public:
  virtual ~Comparator();
    }
    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};