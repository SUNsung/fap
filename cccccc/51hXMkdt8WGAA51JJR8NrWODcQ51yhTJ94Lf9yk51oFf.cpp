class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    #ifndef ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_
#define ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_
    
    void SavePageHandler::OnDownloadCreated(content::DownloadManager* manager,
                                        content::DownloadItem* item) {
  // OnDownloadCreated is invoked during WebContents::SavePage, so the |item|
  // here is the one stated by WebContents::SavePage.
  item->AddObserver(this);
}
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
      // True if we've handled auth (Login or CancelAuth has been called).
  bool handled_auth_;
  mutable base::Lock handled_auth_lock_;
    
    RenderProcessPreferences::RenderProcessPreferences(const Predicate& predicate)
    : predicate_(predicate),
      next_id_(0),
      cache_needs_update_(true) {
  registrar_.Add(this,
                 content::NOTIFICATION_RENDERER_PROCESS_CREATED,
                 content::NotificationService::AllBrowserContextsAndSources());
}
    
    std::string Value::asString() const {
  switch (type_) {
  case nullValue:
    return '';
  case stringValue:
  {
    if (value_.string_ == 0) return '';
    unsigned this_len;
    char const* this_str;
    decodePrefixedString(this->allocated_, this->value_.string_, &this_len, &this_str);
    return std::string(this_str, this_len);
  }
  case booleanValue:
    return value_.bool_ ? 'true' : 'false';
  case intValue:
    return valueToString(value_.int_);
  case uintValue:
    return valueToString(value_.uint_);
  case realValue:
    return valueToString(value_.real_);
  default:
    JSON_FAIL_MESSAGE('Type is not convertible to string');
  }
}
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    {  printer->Print(
    variables_,
    'private static readonly pbc::MapField<$key_type_name$, $value_type_name$>.Codec _map_$name$_codec\n'
    '    = new pbc::MapField<$key_type_name$, $value_type_name$>.Codec(');
  key_generator->GenerateCodecCode(printer);
  printer->Print(', ');
  value_generator->GenerateCodecCode(printer);
  printer->Print(
    variables_,
    ', $tag$);\n'
    'private readonly pbc::MapField<$key_type_name$, $value_type_name$> $name$_ = new pbc::MapField<$key_type_name$, $value_type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::MapField<$key_type_name$, $value_type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_enum_field.h>
    
    class SourceGeneratorBase {
 protected:
  SourceGeneratorBase(const FileDescriptor* descriptor, const Options* options);
  virtual ~SourceGeneratorBase();
    }
    
      if (args[0]->IsUndefined()) {
    iterator.reset(db_wrapper->db_->NewIterator(rocksdb::ReadOptions()));
  } else {
    if (!db_wrapper->HasFamilyNamed(arg0, db_wrapper)) {
      return scope.Close(Boolean::New(false));
    }
    }
    
      // Construct an iterator to the data. Reserve enough space for the result.
  RedisListIterator it(data);
  int bytesRemoved = std::min(num,totalOccs)*it.SizeOf(value);
  it.Reserve(it.Size() - bytesRemoved);
    
      // Returns the physical offset of the last record returned by ReadRecord.
  //
  // Undefined before the first call to ReadRecord.
  uint64_t LastRecordOffset();
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
      std::vector<uint64_t> expected_locations = {0, 1, 2, 3};
  std::vector<std::string> keys;
  for (auto& user_key : user_keys) {
    keys.push_back(GetInternalKey(user_key, false));
  }
  uint64_t expected_table_size = GetExpectedTableSize(keys.size());
    
    
    {    return cache_->Insert(key, value, charge, deleter, handle, priority);
  }
    
    #include <SDL.h>
#include <SDL_syswm.h>
#include <SDL_opengl.h>
#include 'imgui.h'
#include 'imgui_impl_sdl_gl2.h'
    
    #include 'imgui.h'
#include 'imgui_impl_dx10.h'
#include <d3d10_1.h>
#include <d3d10.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    static void error_callback(int error, const char* description)
{
    fprintf(stderr, 'Error %d: %s\n', error, description);
}