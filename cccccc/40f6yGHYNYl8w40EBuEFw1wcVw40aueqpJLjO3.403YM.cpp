
        
        
    {}  // namespace internal
    
    Dictionary::Dictionary() : isolate_(NULL) {}
    
    namespace mate {
    }
    
    v8::Local<v8::Value> Converter<const char*>::ToV8(v8::Isolate* isolate,
                                                  const char* val) {
  return v8::String::NewFromUtf8(isolate, val, v8::NewStringType::kNormal)
      .ToLocalChecked();
}
    
    #include 'native_mate/converter.h'
#include 'native_mate/object_template_builder.h'
    
    template <>
struct Converter<Promise> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate, Promise val);
  // TODO(MarshallOfSound): Implement FromV8 to allow promise chaining
  //                        in native land
  // static bool FromV8(v8::Isolate* isolate,
  //                    v8::Local<v8::Value> val,
  //                    Promise* out);
};
    
    #ifndef NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
#define NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
    
    #if defined(OS_WIN)
#include 'base/win/message_window.h'
#endif  // defined(OS_WIN)
    
      void visitCheckedCastValueBranchInst(CheckedCastValueBranchInst *CCVBI) {
    SGM.useConformancesFromType(CCVBI->getSourceType());
    SGM.useConformancesFromType(CCVBI->getTargetType());
    SGM.useConformancesFromObjectiveCType(CCVBI->getSourceType());
    SGM.useConformancesFromObjectiveCType(CCVBI->getTargetType());
  }
    
    
    {private:
  void createNode(const SILFunction &);
};
    
      /// Create a new SILVTable with the given method-to-implementation mapping.
  /// The SILDeclRef keys should reference the most-overridden members available
  /// through the class.
  static SILVTable *create(SILModule &M, ClassDecl *Class,
                           IsSerialized_t Serialized,
                           ArrayRef<Entry> Entries);
    
      /// Bookkeeping to ensure that useConformancesFrom{ObjectiveC,}Type() is
  /// only called once for each unique type, as an optimization.
  llvm::DenseSet<TypeBase *> usedConformancesFromTypes;
  llvm::DenseSet<TypeBase *> usedConformancesFromObjectiveCTypes;
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    Menu::~Menu() {
  Destroy();
}
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
    void ImGui_ImplGLUT_MouseFunc(int glut_button, int state, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    int button = -1;
    if (glut_button == GLUT_LEFT_BUTTON) button = 0;
    if (glut_button == GLUT_RIGHT_BUTTON) button = 1;
    if (glut_button == GLUT_MIDDLE_BUTTON) button = 2;
    if (button != -1 && state == GLUT_DOWN)
        io.MouseDown[button] = true;
    if (button != -1 && state == GLUT_UP)
        io.MouseDown[button] = false;
}
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Glfw Error %d: %s\n', error, description);
}
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
    
    bool CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC1 sd;
    {
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount = NUM_BACK_BUFFERS;
        sd.Width = 0;
        sd.Height = 0;
        sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.Flags = DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        sd.AlphaMode = DXGI_ALPHA_MODE_UNSPECIFIED;
        sd.Scaling = DXGI_SCALING_STRETCH;
        sd.Stereo = FALSE;
    }
    }
    
        // Bind shader and vertex buffers
    unsigned int stride = sizeof(ImDrawVert);
    unsigned int offset = 0;
    ctx->IASetInputLayout(g_pInputLayout);
    ctx->IASetVertexBuffers(0, 1, &g_pVB, &stride, &offset);
    ctx->IASetIndexBuffer(g_pIB, sizeof(ImDrawIdx) == 2 ? DXGI_FORMAT_R16_UINT : DXGI_FORMAT_R32_UINT, 0);
    ctx->IASetPrimitiveTopology(D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ctx->VSSetShader(g_pVertexShader);
    ctx->VSSetConstantBuffers(0, 1, &g_pVertexConstantBuffer);
    ctx->PSSetShader(g_pPixelShader);
    ctx->PSSetSamplers(0, 1, &g_pFontSampler);
    
            // Create the input layout
        D3D11_INPUT_ELEMENT_DESC local_layout[] =
        {
            { 'POSITION', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->pos), D3D11_INPUT_PER_VERTEX_DATA, 0 },
            { 'TEXCOORD', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->uv),  D3D11_INPUT_PER_VERTEX_DATA, 0 },
            { 'COLOR',    0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, (size_t)(&((ImDrawVert*)0)->col), D3D11_INPUT_PER_VERTEX_DATA, 0 },
        };
        if (g_pd3dDevice->CreateInputLayout(local_layout, 3, g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pInputLayout) != S_OK)
            return false;
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2019-05-29: DirectX9: Added support for large mesh (64K+ vertices), enable ImGuiBackendFlags_RendererHasVtxOffset flag.
//  2019-04-30: DirectX9: Added support for special ImDrawCallback_ResetRenderState callback to reset render state.
//  2019-03-29: Misc: Fixed erroneous assert in ImGui_ImplDX9_InvalidateDeviceObjects().
//  2019-01-16: Misc: Disabled fog before drawing UI's. Fixes issue #2288.
//  2018-11-30: Misc: Setting up io.BackendRendererName so it can be displayed in the About Window.
//  2018-06-08: Misc: Extracted imgui_impl_dx9.cpp/.h away from the old combined DX9+Win32 example.
//  2018-06-08: DirectX9: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-05-07: Render: Saving/restoring Transform because they don't seem to be included in the StateBlock. Setting shading mode to Gouraud.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplDX9_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
    
    const float INNER_TIME_64E_S3[12][32] = {
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f}};
    
    
    {
    {
    {}  // namespace common
}  // namespace perception
}  // namespace apollo

    
    TEST(CyberNodeTest, create_writer) {
  EXPECT_TRUE(apollo::cyber::OK());
  auto msgChat = std::make_shared<apollo::cyber::proto::Chatter>();
  apollo::cyber::PyNode node('talker');
  apollo::cyber::PyWriter *pw =
      node.create_writer('channel/chatter', msgChat->GetTypeName(), 10);
  EXPECT_NE(pw, nullptr);
    }
    
      apollo::drivers::gnss::GnssTimeType time_type;
  gnss_time_type(gnss_type, &time_type);
    
    namespace apollo {
namespace planning {
    }
    }
    
    
    { private:
  static constexpr char const* const CROSSWALK_VO_ID_PREFIX = 'CW_';
  std::vector<const hdmap::PathOverlap*> crosswalk_overlaps_;
};
    
    
    {  accel_cmd_67_->set_accel_cmd(pedal / 100.0);
}
    
    #include 'cyber/common/log.h'
#include 'modules/map/pnc_map/path.h'
#include 'modules/planning/common/frame.h'
#include 'modules/planning/common/planning_context.h'
#include 'modules/planning/common/util/util.h'
#include 'modules/planning/scenarios/util/util.h'
    
    using apollo::common::ErrorCode;
using apollo::common::Status;
using apollo::common::time::Clock;
    
    Stage::Stage(const ScenarioConfig::StageConfig& config) : config_(config) {
  // set stage_type in PlanningContext
  PlanningContext::Instance()
      ->mutable_planning_status()
      ->mutable_scenario()
      ->set_stage_type(stage_type());
    }