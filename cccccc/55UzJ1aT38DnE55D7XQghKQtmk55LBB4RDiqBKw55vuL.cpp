
        
        
    {  Alarm alarm_;
  bool signal_client_;
  std::mutex mu_;
  std::unique_ptr<grpc::string> host_;
};
    
    // TODO(ctiller): leaked objects in this test
TEST_P(ShutdownTest, ShutdownTest) {
  ResetStub();
    }
    
    static void async_connect_unlock_and_cleanup(async_connect* ac,
                                             grpc_winsocket* socket) {
  int done = (--ac->refs == 0);
  gpr_mu_unlock(&ac->mu);
  if (done) {
    grpc_channel_args_destroy(ac->channel_args);
    gpr_mu_destroy(&ac->mu);
    gpr_free(ac->addr_name);
    gpr_free(ac);
  }
  if (socket != NULL) grpc_winsocket_destroy(socket);
}
    
    #include <grpc/support/atm.h>
#include 'src/core/lib/debug/trace.h'
#include 'src/core/lib/gpr/mpscq.h'
#include 'src/core/lib/iomgr/exec_ctx.h'
    
    static inline std::shared_ptr<::grpc::Channel> CreateChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds) {
  return ::grpc_impl::CreateChannelImpl(target, creds);
}
    
    
    {class SecureChannelCredentials;
class ResourceQuota;
}  // namespace grpc_impl
    
    ChannelCredentials::~ChannelCredentials() {}
    
      void SendSimpleClientStreaming() {
    EchoRequest send_request;
    EchoResponse recv_response;
    grpc::string expected_message;
    ClientContext cli_ctx;
    cli_ctx.set_wait_for_ready(true);
    send_request.set_message('Hello');
    auto stream = stub_->RequestStream(&cli_ctx, &recv_response);
    for (int i = 0; i < 5; i++) {
      EXPECT_TRUE(stream->Write(send_request));
      expected_message.append(send_request.message());
    }
    stream->WritesDone();
    Status recv_status = stream->Finish();
    EXPECT_EQ(expected_message, recv_response.message());
    EXPECT_TRUE(recv_status.ok());
  }
    
        grpc::string exp = '';
    EXPECT_TRUE(cstream->Read(&response));
    exp.append(response.message() + ' ');
    
      void SendRpc(int num_rpcs) {
    for (int i = 0; i < num_rpcs; i++) {
      EchoRequest send_request;
      EchoRequest recv_request;
      EchoResponse send_response;
      EchoResponse recv_response;
      Status recv_status;
    }
    }
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // !!! GLUT/FreeGLUT IS OBSOLETE SOFTWARE. Using GLUT is not recommended unless you really miss the 90's. !!!
// !!! If someone or something is teaching you GLUT in 2019, you are being abused. Please show some resistance. !!!
// !!! Nowadays, prefer using GLFW or SDL instead!
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Setup window
    SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+DirectX11 example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);
    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    SDL_GetWindowWMInfo(window, &wmInfo);
    HWND hwnd = (HWND)wmInfo.info.win.window;
    
    // Data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        // Our state (make them static = more or less global) as a convenience to keep the example terse.
    static bool show_demo_window = true;
    static bool show_another_window = false;
    static ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    // Win32 message handler
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
      void Flush() override {
    if (flush_pending_) {
      flush_pending_ = false;
    }
    last_flush_micros_ = env_->NowMicros();
  }
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    compactionReason
 * Signature: (J)B
 */
jbyte Java_org_rocksdb_CompactionJobInfo_compactionReason(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_job_info =
    reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  return rocksdb::CompactionReasonJni::toJavaCompactionReason(
      compact_job_info->compaction_reason);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsFIFO
 * Method:    newCompactionOptionsFIFO
 * Signature: ()J
 */
jlong Java_org_rocksdb_CompactionOptionsFIFO_newCompactionOptionsFIFO(
    JNIEnv*, jclass) {
  const auto* opt = new rocksdb::CompactionOptionsFIFO();
  return reinterpret_cast<jlong>(opt);
}
    
    /*
 * Class:     org_rocksdb_Env
 * Method:    getDefaultEnvInternal
 * Signature: ()J
 */
jlong Java_org_rocksdb_Env_getDefaultEnvInternal(
    JNIEnv*, jclass) {
  return reinterpret_cast<jlong>(rocksdb::Env::Default());
}
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    newEnvOptions
 * Signature: ()J
 */
jlong Java_org_rocksdb_EnvOptions_newEnvOptions__(
    JNIEnv*, jclass) {
  auto *env_opt = new rocksdb::EnvOptions();
  return reinterpret_cast<jlong>(env_opt);
}
    
    /*
 * Class:     org_rocksdb_OptionsUtil
 * Method:    getLatestOptionsFileName
 * Signature: (Ljava/lang/String;J)Ljava/lang/String;
 */
jstring Java_org_rocksdb_OptionsUtil_getLatestOptionsFileName(
    JNIEnv* env, jclass /*jcls*/, jstring jdbpath, jlong jenv_handle) {
  jboolean has_exception = JNI_FALSE;
  auto db_path = rocksdb::JniUtil::copyStdString(env, jdbpath, &has_exception);
  if (has_exception == JNI_TRUE) {
    // exception occurred
    return nullptr;
  }
  std::string options_file_name;
  rocksdb::Status s = rocksdb::GetLatestOptionsFileName(
      db_path, reinterpret_cast<rocksdb::Env*>(jenv_handle),
      &options_file_name);
  if (!s.ok()) {
    // error, raise an exception
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
    return nullptr;
  } else {
    return env->NewStringUTF(options_file_name.c_str());
  }
}

    
    class TableFilterJniCallback : public JniCallback {
 public:
    TableFilterJniCallback(
        JNIEnv* env, jobject jtable_filter);
    std::function<bool(const rocksdb::TableProperties&)> GetTableFilterFunction();
    }
    
    /*
 * Class:     org_rocksdb_ThreadStatus
 * Method:    getOperationPropertyName
 * Signature: (BI)Ljava/lang/String;
 */
jstring Java_org_rocksdb_ThreadStatus_getOperationPropertyName(
    JNIEnv* env, jclass, jbyte joperation_type_value, jint jindex) {
  auto name = rocksdb::ThreadStatus::GetOperationPropertyName(
      rocksdb::OperationTypeJni::toCppOperationType(joperation_type_value),
      static_cast<int>(jindex));
  return rocksdb::JniUtil::toJavaString(env, &name, true);
}
    
        pt::ptree container_details;
    s = dockerApi('/containers/' + r['id'] + '/json?stream=false',
                  container_details);
    if (s.ok()) {
      r['pid'] =
          BIGINT(container_details.get_child('State').get<pid_t>('Pid', -1));
      r['started_at'] = container_details.get_child('State').get<std::string>(
          'StartedAt', '');
      r['finished_at'] = container_details.get_child('State').get<std::string>(
          'FinishedAt', '');
      r['privileged'] = container_details.get_child('HostConfig')
                                .get<bool>('Privileged', false)
                            ? INTEGER(1)
                            : INTEGER(0);
      r['readonly_rootfs'] = container_details.get_child('HostConfig')
                                     .get<bool>('ReadonlyRootfs', false)
                                 ? INTEGER(1)
                                 : INTEGER(0);
      r['path'] = container_details.get<std::string>('Path', '');
    }
    
    bool validate_value_using_flags(const std::string& value,
                                                      int flags) {
  if ((flags & NonEmpty) > 0) {
    if (value.length() == 0) {
      return false;
    }
  }
    }
    
    void setToBackgroundPriority() {
  auto ret =
      SetPriorityClass(GetCurrentProcess(), PROCESS_MODE_BACKGROUND_BEGIN);
  if (ret != TRUE) {
    LOG(WARNING) << 'Failed to set background process priority with '
                 << GetLastError();
  }
}
    
        if (context.isAnyColumnUsed({'cwd', 'root', 'path', 'on_disk'})) {
      getProcessPathInfo(proc_handle, pid, r);
    }
    
      if (action->second == 'genConfig') {
    std::map<std::string, std::string> config;
    auto stat = genConfig(config);
    response.push_back(config);
    return stat;
  } else if (action->second == 'genPack') {
    auto name = request.find('name');
    auto value = request.find('value');
    if (name == request.end() || value == request.end()) {
      return Status(1, 'Missing name or value');
    }
    }
    
    #include <osquery/config/tests/test_utils.h>