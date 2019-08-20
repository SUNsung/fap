
        
        void TextFormatConformanceTestSuite::RunValidTextFormatTestProto2(
    const string& test_name, ConformanceLevel level, const string& input_text) {
  TestAllTypesProto2 prototype;
  RunValidTextFormatTestWithMessage(test_name, level, input_text, prototype);
}
    
    bool InitMapContainers();
    
    typedef struct RepeatedScalarContainer : public ContainerBase {
} RepeatedScalarContainer;
    
    PyObject* NewPyUnknownFieldRef(PyUnknownFields* parent,
                               Py_ssize_t index) {
  PyUnknownFieldRef* self = reinterpret_cast<PyUnknownFieldRef*>(
      PyType_GenericAlloc(&PyUnknownFieldRef_Type, 0));
  if (self == NULL) {
    return NULL;
  }
    }
    
        ArenaImpl* arena_;       // Containing arena.
    void* owner_;            // &ThreadCache of this thread;
    Block* head_;            // Head of linked list of blocks.
    CleanupChunk* cleanup_;  // Head of cleanup list.
    SerialArena* next_;      // Next SerialArena in this linked list.
    
    template <typename T, bool use_arena>
void TestParseCorruptedString(const T& message) {
  int success_count = 0;
  std::string s;
  {
    // Map order is not deterministic. To make the test deterministic we want
    // to serialize the proto deterministically.
    io::StringOutputStream output(&s);
    io::CodedOutputStream out(&output);
    out.SetSerializationDeterministic(true);
    message.SerializePartialToCodedStream(&out);
  }
  const int kMaxIters = 900;
  const int stride = s.size() <= kMaxIters ? 1 : s.size() / kMaxIters;
  const int start = stride == 1 || use_arena ? 0 : (stride + 1) / 2;
  for (int i = start; i < s.size(); i += stride) {
    for (int c = 1 + (i % 17); c < 256; c += 2 * c + (i & 3)) {
      s[i] ^= c;
      Arena arena;
      T* message = Arena::CreateMessage<T>(use_arena ? &arena : nullptr);
      if (message->ParseFromString(s)) {
        ++success_count;
      }
      if (!use_arena) {
        delete message;
      }
      s[i] ^= c;  // Restore s to its original state.
    }
  }
  // This next line is a low bar.  But getting through the test without crashing
  // due to use-after-free or other bugs is a big part of what we're checking.
  GOOGLE_CHECK_GT(success_count, 0);
}
    
      // Avoid triggering the SSO optimization by setting the string to something
  // larger than the internal buffer.
  field.Set(&default_value, WrapString('Test long long long long value'),
            &arena);
  EXPECT_EQ(std::string('Test long long long long value'), field.Get());
  field.Set(&default_value, std::string(''), &arena);
  field.Destroy(&default_value, &arena);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace cpp {
    }
    }
    }
    }
    
    #include <map>
#include <memory>
#include <vector>
    
      void Generate(io::Printer* printer);
    
    
    
    
    {  *accelerator = item->accelerator_;
  return true;
}
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
      nw::Package* package = nw::package();
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::CommandLine::StringVector args = command_line->GetArgs();
  base::CommandLine::StringVector argv = command_line->original_argv();
    
    #include 'extensions/browser/extension_function.h'
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    #include <mongo/bson/timestamp.h>
#include <mongo/db/catalog/collection.h>
#include <mongo/db/namespace_string.h>
#include <mongo/db/operation_context.h>
#include <mongo/db/repl/oplog.h>
#include <mongo/db/service_context.h>
#include <mongo/stdx/mutex.h>
    
    #include 'mongo/db/handle_request_response.h'
#include 'mongo/base/transaction_error.h'
    
        /**
     * If this PlanExecutor is tracking change stream resume tokens, return the most recent token
     * for the batch that is currently being built. Otherwise, return an empty object.
     */
    virtual BSONObj getPostBatchResumeToken() const = 0;
    
        BSONObj query1 = BSON('$where' << BSONCodeWScope(code, BSON('a' << true)));
    auto expr1 = unittest::assertGet(
        ExtensionsCallbackReal(&_opCtx, &_nss).parseWhere(query1.firstElement()));
    
    class UpdateDate2 : public Base {
public:
    void run() {
        BSONObj o;
        {
            BSONObjBuilder b;
            b.appendTimestamp('a');
            b.appendTimestamp('b');
            b.append('_id', 1);
            o = b.obj();
        }
    }
    }
    
                // If we are positioned just before a new-line that is located at the
            //   end of input, succeed.
            if (fp->fInputIdx == fAnchorLimit-1) {
                UChar32 c;
                U16_GET(inputBuf, fAnchorStart, fp->fInputIdx, fAnchorLimit, c);
    }
    
    static UBool copyAsSuperscript(
        const UnicodeString &s,
        int32_t beginIndex,
        int32_t endIndex,
        UnicodeString &result,
        UErrorCode &status) {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    for (int32_t i = beginIndex; i < endIndex;) {
        UChar32 c = s.char32At(i);
        int32_t digit = u_charDigitValue(c);
        if (digit < 0) {
            status = U_INVALID_CHAR_FOUND;
            return FALSE;
        }
        result.append(kSuperscriptDigits[digit]);
        i += U16_LENGTH(c);
    }
    return TRUE;
}
    
    //-------------------------------------------------------------------------------
//
//  ScriptSet - A bit set representing a set of scripts.
//
//              This class was originally used exclusively with script sets appearing
//              as part of the spoof check whole script confusable binary data. Its
//              use has since become more general, but the continued use to wrap
//              prebuilt binary data does constrain the design.
//
//-------------------------------------------------------------------------------
class U_I18N_API ScriptSet: public UMemory {
  public:
    ScriptSet();
    ScriptSet(const ScriptSet &other);
    ~ScriptSet();
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
        for (int n = 0; n < 20; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
    
    {        glfwMakeContextCurrent(window);
        glfwSwapBuffers(window);
    }
    
        // Select Present Mode
#ifdef IMGUI_UNLIMITED_FRAME_RATE
    VkPresentModeKHR present_modes[] = { VK_PRESENT_MODE_MAILBOX_KHR, VK_PRESENT_MODE_IMMEDIATE_KHR, VK_PRESENT_MODE_FIFO_KHR };
#else
    VkPresentModeKHR present_modes[] = { VK_PRESENT_MODE_FIFO_KHR };
#endif
    wd->PresentMode = ImGui_ImplVulkanH_SelectPresentMode(g_PhysicalDevice, wd->Surface, &present_modes[0], IM_ARRAYSIZE(present_modes));
    //printf('[vulkan] Selected PresentMode = %d\n', wd->PresentMode);
    
        // Start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplSDL2_NewFrame(g_Window);
    ImGui::NewFrame();
    
    Status platformStat(const fs::path& path, WINDOWS_STAT* wfile_stat) {
  auto FLAGS_AND_ATTRIBUTES = FILE_ATTRIBUTE_ARCHIVE |
                              FILE_ATTRIBUTE_ENCRYPTED | FILE_ATTRIBUTE_HIDDEN |
                              FILE_ATTRIBUTE_NORMAL | FILE_ATTRIBUTE_OFFLINE |
                              FILE_ATTRIBUTE_READONLY | FILE_ATTRIBUTE_SYSTEM |
                              FILE_ATTRIBUTE_TEMPORARY;
  boost::system::error_code ec;
  if (fs::is_directory(path, ec) && ec.value() == errc::success) {
    FLAGS_AND_ATTRIBUTES |= FILE_FLAG_BACKUP_SEMANTICS;
  }
    }
    
    ModuleHandle platformModuleOpen(const std::string& path) {
  return ::dlopen(path.c_str(), RTLD_NOW | RTLD_LOCAL);
}
    
      // LookupAccountSid first gets the size of the username buff required.
  LookupAccountSidW(
      nullptr, sid, nullptr, &unameSize, nullptr, &domNameSize, &eUse);
  std::vector<wchar_t> uname(unameSize);
  std::vector<wchar_t> domName(domNameSize);
  auto accountFound = LookupAccountSidW(nullptr,
                                        sid,
                                        uname.data(),
                                        &unameSize,
                                        domName.data(),
                                        &domNameSize,
                                        &eUse);
    
        r['on_disk'] = BIGINT(-1);
    
    
    {  QueryData const rows = execute_query('select * from interface_details');
  auto verify_non_negative_or_empty = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    auto cast_result = tryTo<int64_t>(value);
    if (!cast_result) {
      return false;
    }
    return cast_result.get() >= 0;
  };
  auto verify_non_empty_string_or_empty_on_win = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    return true;
  };
#ifdef OSQUERY_WINDOWS
  auto verify_int_or_empty_on_win = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    auto cast_result = tryTo<int64_t>(value);
    if (!cast_result) {
      return false;
    }
    return true;
  };
  auto verify_bool_or_empty_on_win = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    if (value != '1' && value != '0') {
      return false;
    }
    return true;
  };
#endif
  auto const row_map = ValidatatioMap{
      {'interface', NonEmptyString},
      {'mac', verify_non_empty_string_or_empty_on_win},
      {'type', NonNegativeInt},
      {'mtu', verify_non_empty_string_or_empty_on_win},
      {'metric', NonNegativeInt},
      {'flags', NonNegativeInt},
      {'ipackets', verify_non_negative_or_empty},
      {'opackets', verify_non_negative_or_empty},
      {'ibytes', verify_non_negative_or_empty},
      {'obytes', verify_non_negative_or_empty},
      {'ierrors', verify_non_negative_or_empty},
      {'oerrors', verify_non_negative_or_empty},
      {'idrops', verify_non_negative_or_empty},
      {'odrops', verify_non_negative_or_empty},
      {'collisions', NonNegativeOrErrorInt},
      {'last_change', IntType},
#ifdef OSQUERY_POSIX
      {'link_speed', NonNegativeInt},
#endif
#ifdef OSQUERY_LINUX
      {'pci_slot', NormalType},
#endif
#ifdef OSQUERY_WINDOWS
      {'friendly_name', NormalType},
      {'description', NormalType},
      {'manufacturer', NormalType},
      {'connection_id', NormalType},
      {'connection_status', verify_int_or_empty_on_win},
      {'enabled', verify_bool_or_empty_on_win},
      {'physical_adapter', verify_bool_or_empty_on_win},
      {'speed', verify_non_negative_or_empty},
      {'service', NormalType},
      {'dhcp_enabled', verify_bool_or_empty_on_win},
      {'dhcp_lease_expires', NormalType},
      {'dhcp_lease_obtained', NormalType},
      {'dhcp_server', NormalType},
      {'dns_domain', NormalType},
      {'dns_domain_suffix_search_order', NormalType},
      {'dns_host_name', NormalType},
      {'dns_server_search_order', NormalType},
#endif
  };
  validate_rows(rows, row_map);
}
    
    #include <boost/filesystem/path.hpp>