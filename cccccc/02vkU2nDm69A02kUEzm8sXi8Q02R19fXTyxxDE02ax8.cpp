
        
          char *oldAllocation = Allocated;
  char *oldBegin = Begin;
  std::size_t oldSize = (std::size_t) (End - oldBegin);
    
      void print(Node *node, ChildKind childKind) {
    // The top-level indents here create the line to the node we're
    // trying to print.
    }
    
    /// Classify a potential CF typedef.
CFPointeeInfo
CFPointeeInfo::classifyTypedef(const clang::TypedefNameDecl *typedefDecl) {
  clang::QualType type = typedefDecl->getUnderlyingType();
    }
    
      // Static members
  IAMResult(DeclName declName, EffectiveClangContext dc)
      : name(declName), effectiveDC(dc) {}
    
    /// Implement argument semantics in a way that will make it easier to have
/// >1 primary file (or even a primary file list) in the future without
/// breaking anything today.
///
/// Semantics today:
/// If input files are on command line, primary files on command line are also
/// input files; they are not repeated without -primary-file. If input files are
/// in a file list, the primary files on the command line are repeated in the
/// file list. Thus, if there are any primary files, it is illegal to have both
/// (non-primary) input files and a file list. Finally, the order of input files
/// must match the order given on the command line or the file list.
///
/// Side note:
/// since each input file will cause a lot of work for the compiler, this code
/// is biased towards clarity and not optimized.
/// In the near future, it will be possible to put primary files in the
/// filelist, or to have a separate filelist for primaries. The organization
/// here anticipates that evolution.
    
    // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    public:
  EventListener(int id,
                const base::WeakPtr<DispatcherHost>& dispatcher_host,
                const base::DictionaryValue& option);
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    #include <string.h>
    
    NwObjCreateFunction::~NwObjCreateFunction() {
}
    
    #include <google/protobuf/io/zero_copy_stream.h>
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
    // integral_constant, defined in tr1, is a wrapper for an integer
// value. We don't really need this generality; we could get away
// with hardcoding the integer type to bool. We use the fully
// general integer_constant for compatibility with tr1.
    
    namespace GOOGLE_NAMESPACE = google::protobuf::internal;
    
    int main(int argc, char *argv[]) {
  if (argc % 2 == 0 || argc == 1) {
    std::cerr << 'Usage: [input_files] [output_file_names] where ' <<
        'input_files are one to one mapping to output_file_names.' <<
        std::endl;
    return 1;
  }
    }
    
    // Like ASSERT_EXIT, but continues on to successive tests in the
// test case, if any:
# define EXPECT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_NONFATAL_FAILURE_)
    
    namespace testing {
    }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the name of the typedef for the type parameters of the
// given test case.
# define GTEST_TYPE_PARAMS_(TestCaseName) gtest_type_params_##TestCaseName##_
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestInfo);
};
    
    
template <typename T1, typename T2, typename T3, typename T4>
class CartesianProductGenerator4
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3, T4> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3, T4> ParamType;
    }
    
    // Copyright 2009 Google Inc.
// All Rights Reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: wan@google.com (Zhanyong Wan)
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
     private:
  // Creates a node with a given element value.  The next pointer is
  // set to NULL.
  explicit QueueNode(const E& an_element) : element_(an_element), next_(NULL) {}
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
      ::opencensus::trace::SpanContext ToSpanContext() const {
    return ::opencensus::trace::SpanContext(
        ::opencensus::trace::TraceId(trace_id),
        ::opencensus::trace::SpanId(span_id),
        ::opencensus::trace::TraceOptions(trace_options));
  }
    
      void FillErrorResponse(const Status& status,
                         reflection::v1alpha::ErrorResponse* error_response);
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    #if !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)
    
    void PerHostStore::ReportStreamCreated(const grpc::string& lb_id,
                                       const grpc::string& load_key) {
  GPR_ASSERT(lb_id != kInvalidLbId);
  SetUpForNewLbId(lb_id, load_key);
  // Prior to this one, there was no load balancer receiving report, so we may
  // have unassigned orphaned stores to assign to this new balancer.
  // TODO(juanlishen): If the load key of this new stream is the same with
  // some previously adopted orphan store, we may want to take the orphan to
  // this stream. Need to discuss with LB team.
  if (assigned_stores_.size() == 1) {
    for (const auto& p : per_balancer_stores_) {
      const grpc::string& other_lb_id = p.first;
      const std::unique_ptr<PerBalancerStore>& orphaned_store = p.second;
      if (other_lb_id != lb_id) {
        orphaned_store->Resume();
        AssignOrphanedStore(orphaned_store.get(), lb_id);
      }
    }
  }
  // The first connected balancer will adopt the kInvalidLbId.
  if (per_balancer_stores_.size() == 1) {
    SetUpForNewLbId(kInvalidLbId, '');
    ReportStreamClosed(kInvalidLbId);
  }
}
    
    
    {  // Set the maximum number of read-only files that will be mapped via mmap.
  // Must be called before creating an Env.
  static void SetReadOnlyMMapLimit(int limit);
};
    
    static const int kValueSize = 1000;
    
    class SequentialFile;
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    
    {}  // namespace leveldb
    
    #include <string>
    
      // Mark the specified file number as used.
  void MarkFileNumberUsed(uint64_t number);
    
      // Check that the file exists.
  ASSERT_TRUE(env_->FileExists('/dir/f'));
  ASSERT_OK(env_->GetFileSize('/dir/f', &file_size));
  ASSERT_EQ(0, file_size);
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(1, children.size());
  ASSERT_EQ('f', children[0]);
    
      Status(Status&& rhs) noexcept : state_(rhs.state_) { rhs.state_ = nullptr; }
  Status& operator=(Status&& rhs) noexcept;
    
    #include 'leveldb/iterator.h'
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_BUILDER_H_

    
    static void ImGui_ImplWin32_UpdateMousePos()
{
    ImGuiIO& io = ImGui::GetIO();
    }
    
            // Enable debug report extension (we need additional storage, so we duplicate the user array to add our new extension to it)
        const char** extensions_ext = (const char**)malloc(sizeof(const char*) * (extensions_count + 1));
        memcpy(extensions_ext, extensions, extensions_count * sizeof(const char*));
        extensions_ext[extensions_count] = 'VK_EXT_debug_report';
        create_info.enabledExtensionCount = extensions_count + 1;
        create_info.ppEnabledExtensionNames = extensions_ext;
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Glfw Error %d: %s\n', error, description);
}
    
    bool CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    int main(int argc, char **argv)
{
    swoole_init();
    }
    
    
    {            ret = chan->push(&i);
            ASSERT_TRUE(ret);
            ret = chan->push(&i);
            ASSERT_TRUE(ret);
        }, &chan),
    
            if (pid == 0)
        {
            exit(0);
        }
    
        SwooleG.use_signalfd = 1;
    
        swoole_event_wait();
    
    const char* swoole_strerror(int code)
{
    if (code < SW_ERROR_START)
    {
        return strerror(code);
    }
    /* swstrerror {{{*/
    switch(code)
    {
    case SW_ERROR_MALLOC_FAIL:
        return 'Malloc fail';
    case SW_ERROR_SYSTEM_CALL_FAIL:
        return 'System call fail';
    case SW_ERROR_PHP_FATAL_ERROR:
        return 'PHP fatal error';
    case SW_ERROR_NAME_TOO_LONG:
        return 'Name too long';
    case SW_ERROR_INVALID_PARAMS:
        return 'Invalid params';
    case SW_ERROR_QUEUE_FULL:
        return 'Queue full';
    case SW_ERROR_OPERATION_NOT_SUPPORT:
        return 'Operation not support';
    case SW_ERROR_FILE_NOT_EXIST:
        return 'File not exist';
    case SW_ERROR_FILE_TOO_LARGE:
        return 'File too large';
    case SW_ERROR_FILE_EMPTY:
        return 'File empty';
    case SW_ERROR_DNSLOOKUP_DUPLICATE_REQUEST:
        return 'DNS Lookup duplicate request';
    case SW_ERROR_DNSLOOKUP_RESOLVE_FAILED:
        return 'DNS Lookup resolve failed';
    case SW_ERROR_DNSLOOKUP_RESOLVE_TIMEOUT:
        return 'DNS Lookup resolve timeout';
    case SW_ERROR_BAD_IPV6_ADDRESS:
        return 'Bad ipv6 address';
    case SW_ERROR_UNREGISTERED_SIGNAL:
        return 'Unregistered signal';
    case SW_ERROR_SESSION_CLOSED_BY_SERVER:
        return 'Session closed by server';
    case SW_ERROR_SESSION_CLOSED_BY_CLIENT:
        return 'Session closed by client';
    case SW_ERROR_SESSION_CLOSING:
        return 'Session closing';
    case SW_ERROR_SESSION_CLOSED:
        return 'Session closed';
    case SW_ERROR_SESSION_NOT_EXIST:
        return 'Session not exist';
    case SW_ERROR_SESSION_INVALID_ID:
        return 'Session invalid id';
    case SW_ERROR_SESSION_DISCARD_TIMEOUT_DATA:
        return 'Session discard timeout data';
    case SW_ERROR_OUTPUT_BUFFER_OVERFLOW:
        return 'Output buffer overflow';
    case SW_ERROR_SSL_NOT_READY:
        return 'SSL not ready';
    case SW_ERROR_SSL_CANNOT_USE_SENFILE:
        return 'SSL cannot use senfile';
    case SW_ERROR_SSL_EMPTY_PEER_CERTIFICATE:
        return 'SSL empty peer certificate';
    case SW_ERROR_SSL_VEFIRY_FAILED:
        return 'SSL vefiry failed';
    case SW_ERROR_SSL_BAD_CLIENT:
        return 'SSL bad client';
    case SW_ERROR_SSL_BAD_PROTOCOL:
        return 'SSL bad protocol';
    case SW_ERROR_PACKAGE_LENGTH_TOO_LARGE:
        return 'Package length too large';
    case SW_ERROR_DATA_LENGTH_TOO_LARGE:
        return 'Data length too large';
    case SW_ERROR_TASK_PACKAGE_TOO_BIG:
        return 'Task package too big';
    case SW_ERROR_TASK_DISPATCH_FAIL:
        return 'Task dispatch fail';
    case SW_ERROR_HTTP2_STREAM_ID_TOO_BIG:
        return 'Http2 stream id too big';
    case SW_ERROR_HTTP2_STREAM_NO_HEADER:
        return 'Http2 stream no header';
    case SW_ERROR_HTTP2_STREAM_NOT_FOUND:
        return 'Http2 stream not found';
    case SW_ERROR_AIO_BAD_REQUEST:
        return 'Aio bad request';
    case SW_ERROR_AIO_CANCELED:
        return 'Aio canceled';
    case SW_ERROR_CLIENT_NO_CONNECTION:
        return 'Client no connection';
    case SW_ERROR_SOCKET_CLOSED:
        return 'Socket closed';
    case SW_ERROR_SOCKS5_UNSUPPORT_VERSION:
        return 'Socks5 unsupport version';
    case SW_ERROR_SOCKS5_UNSUPPORT_METHOD:
        return 'Socks5 unsupport method';
    case SW_ERROR_SOCKS5_AUTH_FAILED:
        return 'Socks5 auth failed';
    case SW_ERROR_SOCKS5_SERVER_ERROR:
        return 'Socks5 server error';
    case SW_ERROR_HTTP_PROXY_HANDSHAKE_ERROR:
        return 'Http proxy handshake error';
    case SW_ERROR_HTTP_INVALID_PROTOCOL:
        return 'Http invalid protocol';
    case SW_ERROR_WEBSOCKET_BAD_CLIENT:
        return 'Websocket bad client';
    case SW_ERROR_WEBSOCKET_BAD_OPCODE:
        return 'Websocket bad opcode';
    case SW_ERROR_WEBSOCKET_UNCONNECTED:
        return 'Websocket unconnected';
    case SW_ERROR_WEBSOCKET_HANDSHAKE_FAILED:
        return 'Websocket handshake failed';
    case SW_ERROR_SERVER_MUST_CREATED_BEFORE_CLIENT:
        return 'Server must created before client';
    case SW_ERROR_SERVER_TOO_MANY_SOCKET:
        return 'Server too many socket';
    case SW_ERROR_SERVER_WORKER_TERMINATED:
        return 'Server worker terminated';
    case SW_ERROR_SERVER_INVALID_LISTEN_PORT:
        return 'Server invalid listen port';
    case SW_ERROR_SERVER_TOO_MANY_LISTEN_PORT:
        return 'Server too many listen port';
    case SW_ERROR_SERVER_PIPE_BUFFER_FULL:
        return 'Server pipe buffer full';
    case SW_ERROR_SERVER_NO_IDLE_WORKER:
        return 'Server no idle worker';
    case SW_ERROR_SERVER_ONLY_START_ONE:
        return 'Server only start one';
    case SW_ERROR_SERVER_SEND_IN_MASTER:
        return 'Server send in master';
    case SW_ERROR_SERVER_INVALID_REQUEST:
        return 'Server invalid request';
    case SW_ERROR_SERVER_CONNECT_FAIL:
        return 'Server connect fail';
    case SW_ERROR_SERVER_WORKER_EXIT_TIMEOUT:
        return 'Server worker exit timeout';
    case SW_ERROR_CO_OUT_OF_COROUTINE:
        return 'Coroutine out of coroutine';
    case SW_ERROR_CO_HAS_BEEN_BOUND:
        return 'Coroutine has been bound';
    case SW_ERROR_CO_MUTEX_DOUBLE_UNLOCK:
        return 'Coroutine mutex double unlock';
    case SW_ERROR_CO_BLOCK_OBJECT_LOCKED:
        return 'Coroutine block object locked';
    case SW_ERROR_CO_BLOCK_OBJECT_WAITING:
        return 'Coroutine block object waiting';
    case SW_ERROR_CO_YIELD_FAILED:
        return 'Coroutine yield failed';
    case SW_ERROR_CO_GETCONTEXT_FAILED:
        return 'Coroutine getcontext failed';
    case SW_ERROR_CO_SWAPCONTEXT_FAILED:
        return 'Coroutine swapcontext failed';
    case SW_ERROR_CO_MAKECONTEXT_FAILED:
        return 'Coroutine makecontext failed';
    case SW_ERROR_CO_IOCPINIT_FAILED:
        return 'Coroutine iocpinit failed';
    case SW_ERROR_CO_PROTECT_STACK_FAILED:
        return 'Coroutine protect stack failed';
    case SW_ERROR_CO_STD_THREAD_LINK_ERROR:
        return 'Coroutine std thread link error';
    case SW_ERROR_CO_DISABLED_MULTI_THREAD:
        return 'Coroutine disabled multi thread';
    default:
        static char buffer[32];
#ifndef __MACH__
        snprintf(buffer, sizeof(buffer), 'Unknown error %d', code);
#else
        snprintf(buffer, sizeof(buffer), 'Unknown error: %d', code);
#endif
        return buffer;
    }
/*}}}*/
}