
        
        IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    
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
    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
     protected:
  ResponseAction Run() override;
  ~NwObjCallObjectMethodAsyncFunction() override;
    
    void CalibrateExtrinsics(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                         const IntrinsicParams& param, const int check_cond,
                         const double thresh_cond, InputOutputArray omc, InputOutputArray Tc);
    
    #undef cv_hal_QR32f
#define cv_hal_QR32f lapack_QR32f
#undef cv_hal_QR64f
#define cv_hal_QR64f lapack_QR64f
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdFft.Runtime.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdFft.Runtime.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
    
    /* ////////////////////////////////////////////////////////////////////
//
//  CvMat helper tables
//
// */
    
    
    {
    {
    {            if (stream == 0)
                cudaSafeCall( cudaDeviceSynchronize() );
        }
    };
}
    
      void RegisterForOnWriteableLocked(grpc_closure* write_closure) override {
    grpc_fd_notify_on_write(fd_, write_closure);
  }
    
      if (tcp->shutting_down) {
    GRPC_CLOSURE_SCHED(
        cb, GRPC_ERROR_CREATE_REFERENCING_FROM_STATIC_STRING(
                'TCP socket is shutting down', &tcp->shutdown_error, 1));
    return;
  }
    
    #include 'src/core/lib/channel/channel_stack.h'
#include 'src/core/lib/gpr/string.h'
#include 'src/core/lib/profiling/timers.h'
#include 'src/core/lib/security/context/security_context.h'
#include 'src/core/lib/security/credentials/credentials.h'
#include 'src/core/lib/security/security_connector/security_connector.h'
#include 'src/core/lib/slice/slice_internal.h'
#include 'src/core/lib/slice/slice_string_helpers.h'
#include 'src/core/lib/surface/call.h'
#include 'src/core/lib/transport/static_metadata.h'
    
    const grpc_channel_filter grpc_server_auth_filter = {
    auth_start_transport_stream_op_batch,
    grpc_channel_next_op,
    sizeof(call_data),
    init_call_elem,
    grpc_call_stack_ignore_set_pollset_or_pollset_set,
    destroy_call_elem,
    sizeof(channel_data),
    init_channel_elem,
    destroy_channel_elem,
    grpc_channel_next_get_info,
    'server-auth'};

    
      /// SyncRequestThreadManager is an implementation of ThreadManager. This class
  /// is responsible for polling for incoming RPCs and calling the RPC handlers.
  /// This is only used in case of a Sync server (i.e a server exposing a sync
  /// interface)
  class SyncRequestThreadManager;
    
            // Start the Dear ImGui frame
        ImGui_Marmalade_NewFrame();
        ImGui::NewFrame();
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    HRESULT CreateDeviceD3D(HWND hWnd)
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
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows during development. Please read the comments in imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array that we will update during the application lifetime.
    io.KeyMap[ImGuiKey_Tab] = VK_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = VK_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = VK_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = VK_UP;
    io.KeyMap[ImGuiKey_DownArrow] = VK_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = VK_PRIOR;
    io.KeyMap[ImGuiKey_PageDown] = VK_NEXT;
    io.KeyMap[ImGuiKey_Home] = VK_HOME;
    io.KeyMap[ImGuiKey_End] = VK_END;
    io.KeyMap[ImGuiKey_Insert] = VK_INSERT;
    io.KeyMap[ImGuiKey_Delete] = VK_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = VK_BACK;
    io.KeyMap[ImGuiKey_Space] = VK_SPACE;
    io.KeyMap[ImGuiKey_Enter] = VK_RETURN;
    io.KeyMap[ImGuiKey_Escape] = VK_ESCAPE;
    io.KeyMap[ImGuiKey_A] = 'A';
    io.KeyMap[ImGuiKey_C] = 'C';
    io.KeyMap[ImGuiKey_V] = 'V';
    io.KeyMap[ImGuiKey_X] = 'X';
    io.KeyMap[ImGuiKey_Y] = 'Y';
    io.KeyMap[ImGuiKey_Z] = 'Z';
    
      std::string Name() const override { return 'DummyCameraTransformer'; }
    
    #include 'modules/common/log.h'
#include 'modules/perception/obstacle/camera/common/camera.h'
#include 'modules/perception/obstacle/camera/common/visual_object.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_transformer.h'
    
      for (std::size_t i = 0; i < discretized_trajectory.NumOfPoints(); ++i) {
    const auto& trajectory_point = discretized_trajectory.TrajectoryPointAt(i);
    double ego_theta = trajectory_point.path_point().theta();
    Box2d ego_box(
        {trajectory_point.path_point().x(), trajectory_point.path_point().y()},
        ego_theta, ego_length, ego_width);
    double shift_distance =
        ego_length / 2.0 - vehicle_config.vehicle_param().back_edge_to_center();
    Vec2d shift_vec{shift_distance * std::cos(ego_theta),
                    shift_distance * std::sin(ego_theta)};
    ego_box.Shift(shift_vec);
    }
    
      /**
   * @brief Determines the distance between the box and a given point
   * @param point The point whose distance to the box we wish to compute
   * @return A distance
   */
  double DistanceTo(const Vec2d &point) const;
    
      /**
   * @brief Compute the distance from a line segment to the polygon.
   *        If the line segment is within the polygon, or it has intersect with
   *        the polygon, return 0. Otherwise, this distance is
   *        the minimal distance between the distances from the two ends
   *        of the line segment to the polygon.
   * @param line_segment The line segment to compute whose distance to
   *        the polygon.
   * @return The distance from the line segment to the polygon.
   */
  double DistanceTo(const LineSegment2d &line_segment) const;
    
    TEST_F(DecisionTest, mix_yellow) {
  std::vector<int> color_list = {3, 3, 3, 0, 0, 0, 3, 0, 3, 2, 0, 2, 0, 0,
                                 2, 1, 0, 2, 0, 2, 0, 1, 1, 3, 0, 0, 3};
  std::vector<int> gt_list = {3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
                              2, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3};
  ReviseOption option(100);
  for (size_t i = 0; i < color_list.size(); ++i) {
    std::vector<LightPtr> light;
    light.emplace_back(new Light);
    light[0]->status.color = TLColor(color_list[i]);
    reviser_->Revise(option, &light);
    option.ts += 0.1;
    ASSERT_TRUE(TLColor(gt_list[i]) == light[0]->status.color);
  }
}
    
    PathObstacle *PathDecision::AddPathObstacle(const PathObstacle &path_obstacle) {
  std::lock_guard<std::mutex> lock(obstacle_mutex_);
  return path_obstacles_.Add(path_obstacle.Id(), path_obstacle);
}
    
    
    {  /**
   * @brief Compute a trajectory for execution.
   * @param planning_init_point The trajectory point where planning starts.
   * @param frame Current planning frame.
   * @param reference_line_info The computed reference line.
   * @return OK if planning succeeds; error otherwise.
   */
  virtual apollo::common::Status PlanOnReferenceLine(
      const common::TrajectoryPoint& planning_init_point, Frame* frame,
      ReferenceLineInfo* reference_line_info) = 0;
};
    
      /**
   * @brief Override function Plan in parent class Planner.
   * @param planning_init_point The trajectory point where planning starts.
   * @param frame Current planning frame.
   * @param reference_line_info The computed reference line.
   * @return OK if planning succeeds; error otherwise.
   */
  apollo::common::Status PlanOnReferenceLine(
      const common::TrajectoryPoint& planning_init_point, Frame* frame,
      ReferenceLineInfo* reference_line_info) override;
  /**
   * @brief Read the recorded trajectory file.
   * @param filename The name of the trajectory file.
   */
  void ReadTrajectoryFile(const std::string& filename);
    
    class MLPEvaluator : public Evaluator {
 public:
  /**
   * @brief Constructor
   */
  MLPEvaluator();
    }
    
      // right nudge and ignore
  {
    PathObstacle path_obstacle;
    ObjectDecisionType decision;
    }