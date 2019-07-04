
        
        namespace mate {
    }
    
    Arguments::Arguments()
    : isolate_(NULL), info_(NULL), next_(0), insufficient_arguments_(false) {}
    
    void* FromV8Impl(v8::Isolate* isolate, v8::Local<v8::Value> val) {
  if (!val->IsObject())
    return nullptr;
  v8::Local<v8::Object> obj = v8::Local<v8::Object>::Cast(val);
  if (obj->InternalFieldCount() != 1)
    return nullptr;
  return obj->GetAlignedPointerFromInternalField(0);
}
    
    template <>
struct Converter<v8::Local<v8::Array>> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   v8::Local<v8::Array> val);
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     v8::Local<v8::Array>* out);
};
    
    // Dictionary is useful when writing bindings for a function that either
// receives an arbitrary JavaScript object as an argument or returns an
// arbitrary JavaScript object as a result. For example, Dictionary is useful
// when you might use the |dictionary| type in WebIDL:
//
//   http://heycam.github.io/webidl/#idl-dictionaries
//
// WARNING: You cannot retain a Dictionary object in the heap. The underlying
//          storage for Dictionary is tied to the closest enclosing
//          v8::HandleScope. Generally speaking, you should store a Dictionary
//          on the stack.
//
class Dictionary {
 public:
  Dictionary();
  Dictionary(v8::Isolate* isolate, v8::Local<v8::Object> object);
  Dictionary(const Dictionary& other);
  virtual ~Dictionary();
    }
    
    // CreateFunctionTemplate creates a v8::FunctionTemplate that will create
// JavaScript functions that execute a provided C++ function or base::Callback.
// JavaScript arguments are automatically converted via gin::Converter, as is
// the return value of the C++ function, if any.
//
// NOTE: V8 caches FunctionTemplates for a lifetime of a web page for its own
// internal reasons, thus it is generally a good idea to cache the template
// returned by this function.  Otherwise, repeated method invocations from JS
// will create substantial memory leaks. See http://crbug.com/463487.
template <typename Sig>
v8::Local<v8::FunctionTemplate> CreateFunctionTemplate(
    v8::Isolate* isolate,
    const base::Callback<Sig> callback,
    int callback_flags = 0) {
  typedef internal::CallbackHolder<Sig> HolderT;
  HolderT* holder = new HolderT(isolate, callback, callback_flags);
    }
    
    
    {}  // namespace mate
    
      template <typename T>
  void Reject(T* value) {
    resolver_->Reject(mate::ConvertToV8(isolate(), value));
  }
    
    // Checks the visibility of the enumerated window and signals once a visible
// window has been found.
BOOL CALLBACK BrowserWindowEnumeration(HWND window, LPARAM param) {
  bool* result = reinterpret_cast<bool*>(param);
  *result = ::IsWindowVisible(window) != 0;
  // Stops enumeration if a visible window has been found.
  return !*result;
}
    
    #ifdef _DEBUG
  // Don't display assert dialog boxes in CI test runs
  static const char* kCI = 'ELECTRON_CI';
  bool is_ci = IsEnvSet(kCI);
  if (!is_ci) {
    for (int i = 0; i < arguments.argc; ++i) {
      if (!_wcsicmp(arguments.argv[i], L'--ci')) {
        is_ci = true;
        _putenv_s(kCI, '1');  // set flag for child processes
        break;
      }
    }
  }
  if (is_ci) {
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_DEBUG | _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
    }
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    void Clipboard::Clear() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
}
    
    
    {} // namespace nwapi

    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    #include 'base/files/file_path.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/threading/thread_restrictions.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'content/nw/src/nw_base.h'
#include 'content/nw/src/nw_content.h'
#include 'content/nw/src/nw_package.h'
#include 'ui/base/accelerators/accelerator.h'
#include 'ui/gfx/image/image_skia_operations.h'
#include 'ui/events/event_constants.h'//for modifier key code
#include 'base/logging.h'
    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    namespace CNTK
{
    class ProgressWriter::Impl
    {
    public:
        Impl(size_t updateWriteFrequency, size_t firstUpdatesToWrite)
            : m_frequency(updateWriteFrequency), m_firstN(firstUpdatesToWrite),
            m_totalUpdates(0), m_totalSummaries(0)
        {
            Reset();
        }
    }
    }
    
        bool Trainer::TrainDistributedMinibatch(const std::unordered_map<Variable, ValuePtr>& arguments, std::unordered_map<Variable, ValuePtr>& outputsToFetch, bool sweepEnd, const DeviceDescriptor& computeDevice /*= DeviceDescriptor::UseDefaultDevice()*/)
    {
        std::unordered_map<Parameter, NDArrayViewPtr> gradients;
        gradients.reserve(m_learnerParameters.size());
    }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
    
    {        auto originalConstantValue = Value();
        auto constantValueCPU = originalConstantValue->DeepClone(DeviceDescriptor::CPUDevice(), true);
        NDArrayViewPtr newConstantValue = CloneAsDataType(constantValueCPU, dataType, true);
        return Constant(newConstantValue->DeepClone(originalConstantValue->Device(), originalConstantValue->IsReadOnly()), Name());
    }
    
            if (::WaitForSingleObject(m_handle, wait ? INFINITE : 0) != WAIT_OBJECT_0)
        {
            // failed to acquire
            int rc = ::CloseHandle(m_handle);
            if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
            {
                RuntimeError('Acquire: Handler close failure with error code %d', ::GetLastError());
            }
            m_handle = NULL;
            return false;
        }
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};