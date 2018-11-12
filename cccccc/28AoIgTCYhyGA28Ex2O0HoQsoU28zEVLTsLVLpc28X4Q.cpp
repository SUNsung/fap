
        
        // static
void AutoUpdater::BuildPrototype(v8::Isolate* isolate,
                                 v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'AutoUpdater'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('checkForUpdates', &auto_updater::AutoUpdater::CheckForUpdates)
      .SetMethod('getFeedURL', &auto_updater::AutoUpdater::GetFeedURL)
      .SetMethod('setFeedURL', &AutoUpdater::SetFeedURL)
      .SetMethod('quitAndInstall', &AutoUpdater::QuitAndInstall);
}
    
    namespace api {
    }
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
#if defined(OS_MACOSX)
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('inAppPurchase', InAppPurchase::Create(isolate));
  dict.Set('InAppPurchase',
           InAppPurchase::GetConstructor(isolate)->GetFunction());
#endif
}
    
    // static
void PowerMonitor::BuildPrototype(v8::Isolate* isolate,
                                  v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'PowerMonitor'));
    }
    
     protected:
  WebRequest(v8::Isolate* isolate, AtomBrowserContext* browser_context);
  ~WebRequest() override;
    
    namespace IPC {
class Message;
}
    
      // this.emit(name, new Event(sender, message), args...);
  template <typename... Args>
  bool EmitWithSender(const base::StringPiece& name,
                      content::RenderFrameHost* sender,
                      IPC::Message* message,
                      const Args&... args) {
    v8::Locker locker(isolate());
    v8::HandleScope handle_scope(isolate());
    v8::Local<v8::Object> wrapper = GetWrapper();
    if (wrapper.IsEmpty()) {
      return false;
    }
    v8::Local<v8::Object> event =
        internal::CreateJSEvent(isolate(), wrapper, sender, message);
    return EmitWithEvent(name, event, args...);
  }
    
      bool IsDestroyed() {
    v8::Local<v8::Object> wrapper = Wrappable<T>::GetWrapper();
    return wrapper->InternalFieldCount() == 0 ||
           wrapper->GetAlignedPointerFromInternalField(0) == nullptr;
  }
    
     private:
  void OnMessageBoxCallback(DialogClosedCallback callback,
                            const std::string& origin,
                            int code,
                            bool checkbox_checked);
    
      // Returns true iff the test part failed.
  bool failed() const { return type_ != kSuccess; }
    
    // This macro is used for implementing macros such as
// EXPECT_DEATH_IF_SUPPORTED and ASSERT_DEATH_IF_SUPPORTED on systems where
// death tests are not supported. Those macros must compile on such systems
// iff EXPECT_DEATH and ASSERT_DEATH compile with the same parameters on
// systems that support death tests. This allows one to write such a macro
// on a system that does not support death tests and be sure that it will
// compile on a death-test supporting system.
//
// Parameters:
//   statement -  A statement that a macro such as EXPECT_DEATH would test
//                for program termination. This macro has to make sure this
//                statement is compiled but not executed, to ensure that
//                EXPECT_DEATH_IF_SUPPORTED compiles with a certain
//                parameter iff EXPECT_DEATH compiles with it.
//   regex     -  A regex that a macro such as EXPECT_DEATH would use to test
//                the output of statement.  This parameter has to be
//                compiled but not evaluated by this macro, to ensure that
//                this macro only accepts expressions that a macro such as
//                EXPECT_DEATH would accept.
//   terminator - Must be an empty statement for EXPECT_DEATH_IF_SUPPORTED
//                and a return statement for ASSERT_DEATH_IF_SUPPORTED.
//                This ensures that ASSERT_DEATH_IF_SUPPORTED will not
//                compile inside functions where ASSERT_DEATH doesn't
//                compile.
//
//  The branch that has an always false condition is used to ensure that
//  statement and regex are compiled (and thus syntactically correct) but
//  never executed. The unreachable code macro protects the terminator
//  statement from generating an 'unreachable code' warning in case
//  statement unconditionally returns or throws. The Message constructor at
//  the end allows the syntax of streaming additional messages into the
//  macro, for compilational compatibility with EXPECT_DEATH/ASSERT_DEATH.
# define GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, terminator) \
    GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
    if (::testing::internal::AlwaysTrue()) { \
      GTEST_LOG_(WARNING) \
          << 'Death tests are not supported on this platform.\n' \
          << 'Statement '' #statement '' cannot be verified.'; \
    } else if (::testing::internal::AlwaysFalse()) { \
      ::testing::internal::RE::PartialMatch('.*', (regex)); \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
      terminator; \
    } else \
      ::testing::Message()
    
    $range i 1..n-1
$for i [[
$range j 1..i
$range k i+1..n
template <$for j, [[typename T$j]]>
struct Types<$for j, [[T$j]]$for k[[, internal::None]]> {
  typedef internal::Types$i<$for j, [[T$j]]> type;
};
    
    // Implementation #1 calculates the primes on-the-fly.
class OnTheFlyPrimeTable : public PrimeTable {
 public:
  virtual bool IsPrime(int n) const {
    if (n <= 1) return false;
    }
    }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      // Gets the 0-terminated C string this MyString object represents.
  const char* c_string() const { return c_string_; }
    
    #include 'src/cpp/ext/filters/census/context.h'
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    // Serializes the outgoing trace context. Field IDs are 1 byte followed by
// field data. A 1 byte version ID is always encoded first.
size_t TraceContextSerialize(const ::opencensus::trace::SpanContext& context,
                             char* tracing_buf, size_t tracing_buf_size);
    
    #include <grpc/support/port_platform.h>
    
    
    {  const protobuf::FileDescriptor* file_desc =
      descriptor_pool_->FindFileByName(filename);
  if (file_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'File not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(file_desc, response, &seen_files);
  return Status::OK;
}
    
      Status GetFileByName(ServerContext* context, const grpc::string& file_name,
                       reflection::v1alpha::ServerReflectionResponse* response);
    
    void ProtoServerReflectionPlugin::ChangeArguments(const grpc::string& name,
                                                  void* value) {}
    
    #include 'src/cpp/server/dynamic_thread_pool.h'
    
    #endif

    
    //////////////////////////////////////////////////////////////////////
    
    ALWAYS_INLINE
const APCLocalArray* APCLocalArray::asApcArray(const ArrayData* ad) {
  assertx(ad->kind() == kApcKind);
  return static_cast<const APCLocalArray*>(ad);
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    #include <string>
#include <utility>
#include <vector>
    
    struct RequestCPUTimeoutException : ResourceExceededException {
  RequestCPUTimeoutException(const std::string& msg, const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestCPUTimeoutException);
};
    
    
    {#ifdef __cplusplus
} /* namespace regex_constants */
/*
 * import names into boost for backwards compatiblity:
 */
using regex_constants::match_flag_type;
using regex_constants::match_default;
using regex_constants::match_not_bol;
using regex_constants::match_not_eol;
using regex_constants::match_not_bob;
using regex_constants::match_not_eob;
using regex_constants::match_not_bow;
using regex_constants::match_not_eow;
using regex_constants::match_not_dot_newline;
using regex_constants::match_not_dot_null;
using regex_constants::match_prev_avail;
/* using regex_constants::match_init; */
using regex_constants::match_any;
using regex_constants::match_not_null;
using regex_constants::match_continuous;
using regex_constants::match_partial;
/*using regex_constants::match_stop; */
using regex_constants::match_all;
using regex_constants::match_perl;
using regex_constants::match_posix;
using regex_constants::match_nosubs;
using regex_constants::match_extra;
using regex_constants::match_single_line;
/*using regex_constants::match_max; */
using regex_constants::format_all;
using regex_constants::format_sed;
using regex_constants::format_perl;
using regex_constants::format_default;
using regex_constants::format_no_copy;
using regex_constants::format_first_only;
/*using regex_constants::format_is_if;*/
    
    #endif  // BOOST_REGEX_NO_FWD
    
    
    {public:
   regex_iterator_implementation(const regex_type* p, BidirectionalIterator last, match_flag_type f)
      : base(), end(last), re(*p), flags(f){}
   bool init(BidirectionalIterator first)
   {
      base = first;
      return regex_search(first, end, what, re, flags);
   }
   bool compare(const regex_iterator_implementation& that)
   {
      if(this == &that) return true;
      return (&re.get_data() == &that.re.get_data()) && (end == that.end) && (flags == that.flags) && (what[0].first == that.what[0].first) && (what[0].second == that.what[0].second);
   }
   const match_results<BidirectionalIterator>& get()
   { return what; }
   bool next()
   {
      //if(what.prefix().first != what[0].second)
      //   flags |= match_prev_avail;
      BidirectionalIterator next_start = what[0].second;
      match_flag_type f(flags);
      if(!what.length() || (f & regex_constants::match_posix))
         f |= regex_constants::match_not_initial_null;
      //if(base != next_start)
      //   f |= regex_constants::match_not_bob;
      bool result = regex_search(next_start, end, what, re, f, base);
      if(result)
         what.set_base(base);
      return result;
   }
private:
   regex_iterator_implementation& operator=(const regex_iterator_implementation&);
};
    
    template <class ST, class SA, class Allocator, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 match_results<typename std::basic_string<charT, ST, SA>::const_iterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
template <class charT, class traits>
inline bool regex_match(const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   match_results<const charT*> m;
   return regex_match(str, str + traits::length(str), m, e, flags | regex_constants::match_any);
}
    
    #endif  // BOOST_REGEX_V4_REGEX_MERGE_HPP
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_format.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides formatting output routines for search and replace
  *                operations.  Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1>
class split_pred
{
   typedef std::basic_string<charT, Traits1, Alloc1> string_type;
   typedef typename string_type::const_iterator iterator_type;
   iterator_type* p_last;
   OutputIterator* p_out;
   std::size_t* p_max;
   std::size_t initial_max;
public:
   split_pred(iterator_type* a, OutputIterator* b, std::size_t* c)
      : p_last(a), p_out(b), p_max(c), initial_max(*c) {}
    }
    
    
    {} // namespace boost
    
    std::vector<std::string> PrometheusMetricsConfigParserPlugin::keys() const {
  return {kPrometheusParserRootKey};
}
    
      // We use a restricted scope below to change the data structure from
  // an array to a set. This lets us do deletes much more efficiently
  std::vector<std::string> created_views;
  std::set<std::string> erase_views;
  {
    std::vector<std::string> old_views_vec;
    scanDatabaseKeys(kQueries, old_views_vec, kConfigViews);
    for (const auto& view : old_views_vec) {
      erase_views.insert(view.substr(kConfigViews.size()));
    }
  }
    
    TEST_F(ProcessTests, test_launchWorker) {
  {
    std::vector<char*> argv;
    for (size_t i = 0; i < kExpectedWorkerArgsCount; i++) {
      char* entry = new char[strlen(kExpectedWorkerArgs[i]) + 1];
      EXPECT_NE(entry, nullptr);
      memset(entry, '\0', strlen(kExpectedWorkerArgs[i]) + 1);
      memcpy(entry, kExpectedWorkerArgs[i], strlen(kExpectedWorkerArgs[i]));
      argv.push_back(entry);
    }
    argv.push_back(nullptr);
    }
    }
    
    #include <atomic>
#include <string>
    
    bool INotifyEventPublisher::needMonitoring(const std::string& path,
                                           INotifySubscriptionContextRef& isc,
                                           uint32_t mask,
                                           bool recursive,
                                           bool add_watch) {
  bool rc = true;
  struct stat file_dir_stat;
  time_t sc_time = isc->path_sc_time_[path];
    }
    
      Row r3;
  std::string msg2 = '0A001F9100000000FE80000000000000022522FFFEB03684000000';
  parseSockAddr(msg2, r3, unix_socket);
  ASSERT_FALSE(r3['remote_address'].empty());
  EXPECT_EQ(r3['remote_address'], 'fe80:0000:0000:0000:0225:22ff:feb0:3684');
  EXPECT_EQ(r3['remote_port'], '8081');
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    #include 'imgui.h'
#include 'imgui_impl_dx9.h'
    
    int32 ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data)
{
    // pEvent->m_Button is of type s3ePointerButton and indicates which mouse
    // button was pressed.  For touchscreen this should always have the value
    // S3E_POINTER_BUTTON_SELECT
    s3ePointerEvent* pEvent = (s3ePointerEvent*)system_data;
    }
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    w = al_get_display_width(g_Display);
    h = al_get_display_height(g_Display);
    io.DisplaySize = ImVec2((float)w, (float)h);
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array.
    io.KeyMap[ImGuiKey_Tab] = SDL_SCANCODE_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = SDL_SCANCODE_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = SDL_SCANCODE_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = SDL_SCANCODE_UP;
    io.KeyMap[ImGuiKey_DownArrow] = SDL_SCANCODE_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = SDL_SCANCODE_PAGEUP;
    io.KeyMap[ImGuiKey_PageDown] = SDL_SCANCODE_PAGEDOWN;
    io.KeyMap[ImGuiKey_Home] = SDL_SCANCODE_HOME;
    io.KeyMap[ImGuiKey_End] = SDL_SCANCODE_END;
    io.KeyMap[ImGuiKey_Insert] = SDL_SCANCODE_INSERT;
    io.KeyMap[ImGuiKey_Delete] = SDL_SCANCODE_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = SDL_SCANCODE_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = SDL_SCANCODE_SPACE;
    io.KeyMap[ImGuiKey_Enter] = SDL_SCANCODE_RETURN;
    io.KeyMap[ImGuiKey_Escape] = SDL_SCANCODE_ESCAPE;
    io.KeyMap[ImGuiKey_A] = SDL_SCANCODE_A;
    io.KeyMap[ImGuiKey_C] = SDL_SCANCODE_C;
    io.KeyMap[ImGuiKey_V] = SDL_SCANCODE_V;
    io.KeyMap[ImGuiKey_X] = SDL_SCANCODE_X;
    io.KeyMap[ImGuiKey_Y] = SDL_SCANCODE_Y;
    io.KeyMap[ImGuiKey_Z] = SDL_SCANCODE_Z;
    
    void ImDrawList::AddRectFilled(const ImVec2& a, const ImVec2& b, ImU32 col, float rounding, int rounding_corners_flags)
{
    if ((col & IM_COL32_A_MASK) == 0)
        return;
    if (rounding > 0.0f)
    {
        PathRect(a, b, rounding, rounding_corners_flags);
        PathFillConvex(col);
    }
    else
    {
        PrimReserve(6, 4);
        PrimRect(a, b, col);
    }
}
    
        // Backup GL state
    GLenum last_active_texture; glGetIntegerv(GL_ACTIVE_TEXTURE, (GLint*)&last_active_texture);
    glActiveTexture(GL_TEXTURE0);
    GLint last_program; glGetIntegerv(GL_CURRENT_PROGRAM, &last_program);
    GLint last_texture; glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
#ifdef GL_SAMPLER_BINDING
    GLint last_sampler; glGetIntegerv(GL_SAMPLER_BINDING, &last_sampler);
#endif
    GLint last_array_buffer; glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &last_array_buffer);
    GLint last_vertex_array; glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &last_vertex_array);
#ifdef GL_POLYGON_MODE
    GLint last_polygon_mode[2]; glGetIntegerv(GL_POLYGON_MODE, last_polygon_mode);
#endif
    GLint last_viewport[4]; glGetIntegerv(GL_VIEWPORT, last_viewport);
    GLint last_scissor_box[4]; glGetIntegerv(GL_SCISSOR_BOX, last_scissor_box);
    GLenum last_blend_src_rgb; glGetIntegerv(GL_BLEND_SRC_RGB, (GLint*)&last_blend_src_rgb);
    GLenum last_blend_dst_rgb; glGetIntegerv(GL_BLEND_DST_RGB, (GLint*)&last_blend_dst_rgb);
    GLenum last_blend_src_alpha; glGetIntegerv(GL_BLEND_SRC_ALPHA, (GLint*)&last_blend_src_alpha);
    GLenum last_blend_dst_alpha; glGetIntegerv(GL_BLEND_DST_ALPHA, (GLint*)&last_blend_dst_alpha);
    GLenum last_blend_equation_rgb; glGetIntegerv(GL_BLEND_EQUATION_RGB, (GLint*)&last_blend_equation_rgb);
    GLenum last_blend_equation_alpha; glGetIntegerv(GL_BLEND_EQUATION_ALPHA, (GLint*)&last_blend_equation_alpha);
    GLboolean last_enable_blend = glIsEnabled(GL_BLEND);
    GLboolean last_enable_cull_face = glIsEnabled(GL_CULL_FACE);
    GLboolean last_enable_depth_test = glIsEnabled(GL_DEPTH_TEST);
    GLboolean last_enable_scissor_test = glIsEnabled(GL_SCISSOR_TEST);
    
        // Functions
    IMGUI_API void AddInputCharacter(ImWchar c);                        // Add new character into InputCharacters[]
    IMGUI_API void AddInputCharactersUTF8(const char* utf8_chars);      // Add new characters into InputCharacters[] from an UTF-8 string
    inline void    ClearInputCharacters() { InputCharacters[0] = 0; }   // Clear the text input buffer manually
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);