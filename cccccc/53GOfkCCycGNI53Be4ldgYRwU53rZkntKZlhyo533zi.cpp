
        
        #endif  // ATOM_BROWSER_API_ATOM_API_IN_APP_PURCHASE_H_

    
    static gfx::Rect DIPToScreenRect(atom::NativeWindow* window,
                                 const gfx::Rect& rect) {
  HWND hwnd = window ? window->GetAcceleratedWidget() : nullptr;
  return display::win::ScreenWin::DIPToScreenRect(hwnd, rect);
}
    
    #endif  // ATOM_BROWSER_API_ATOM_API_SCREEN_H_

    
    class AtomBrowserContext;
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include 'atom/browser/api/save_page_handler.h'
    
    class AtomJavaScriptDialogManager : public content::JavaScriptDialogManager {
 public:
  explicit AtomJavaScriptDialogManager(api::WebContents* api_web_contents);
  ~AtomJavaScriptDialogManager() override;
    }
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    void AutoUpdater::SetDelegate(Delegate* delegate) {
  delegate_ = delegate;
}
    
    
    { protected:
  virtual ~Delegate() {}
};
    
    #include 'base/macros.h'
    
      // Construct a generic signature builder by collecting the constraints
  // from the requirement and the context of the conformance together,
  // because both define the capabilities of the requirement.
  GenericSignatureBuilder builder(ctx);
    
    
    {
    {        // Register the memory buffer.
        SML->registerMemoryBuffer(info.name, std::move(bitstream));
        foundModules.push_back(info.name);
      }
    } else {
      llvm::dbgs() << 'Unable to load module';
      if (!info.name.empty())
        llvm::dbgs() << ' '' << info.name << '\'';
      llvm::dbgs() << '.\n';
    }
    
    void swift::printOpaquePrefixMap(raw_ostream &out, void *_root,
                         void (*printNodeData)(raw_ostream &out, void *node)) {
  auto root = reinterpret_cast<Node*>(_root);
  if (!root) {
    out << '(empty)\n';
    return;
  }
  TreePrinter(out, *printNodeData).print(root, ChildKind::Root);
}
    
    break_table = GraphemeClusterBreakPropertyTable(unicodeGraphemeBreakPropertyFile)
    
    #ifndef SWIFT_IMPORTER_IMPORT_AS_MEMBER_INFERENCE_H
#define SWIFT_IMPORTER_IMPORT_AS_MEMBER_INFERENCE_H
    
    #include <grpcpp/impl/grpc_library.h>
#include <grpcpp/security/credentials.h>
    
    #include <grpcpp/support/channel_arguments.h>
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    // Serializes the outgoing stats context.  Field IDs are 1 byte followed by
// field data. A 1 byte version ID is always encoded first. Tags are directly
// serialized into the given grpc_slice.
size_t StatsContextSerialize(size_t max_tags_len, grpc_slice* tags);
    
    namespace grpc {
    }
    
        NDMask::~NDMask()
    {}
    
    
    {
    {    private:
        static bool IsNativeUDF(const Dictionary& dict);
    };
}

    
        ParameterInitializer HeNormalInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::HeNormalInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
    
    {        ImGui::Render();
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Setup orthographic projection matrix into our constant buffer
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). 
    {
        D3D11_MAPPED_SUBRESOURCE mapped_resource;
        if (ctx->Map(g_pVertexConstantBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_resource) != S_OK)
            return;
        VERTEX_CONSTANT_BUFFER* constant_buffer = (VERTEX_CONSTANT_BUFFER*)mapped_resource.pData;
        float L = draw_data->DisplayPos.x;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
        float T = draw_data->DisplayPos.y;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
        float mvp[4][4] =
        {
            { 2.0f/(R-L),   0.0f,           0.0f,       0.0f },
            { 0.0f,         2.0f/(T-B),     0.0f,       0.0f },
            { 0.0f,         0.0f,           0.5f,       0.0f },
            { (R+L)/(L-R),  (T+B)/(B-T),    0.5f,       1.0f },
        };
        memcpy(&constant_buffer->mvp, mvp, sizeof(mvp));
        ctx->Unmap(g_pVertexConstantBuffer, 0);
    }
    
    void ImGui_ImplFreeGLUT_InstallFuncs()
{
    glutReshapeFunc(ImGui_ImplFreeGLUT_ReshapeFunc);
    glutMotionFunc(ImGui_ImplFreeGLUT_MotionFunc);
    glutPassiveMotionFunc(ImGui_ImplFreeGLUT_MotionFunc);
    glutMouseFunc(ImGui_ImplFreeGLUT_MouseFunc);
    glutMouseWheelFunc(ImGui_ImplFreeGLUT_MouseWheelFunc);
    glutKeyboardFunc(ImGui_ImplFreeGLUT_KeyboardFunc);
    glutKeyboardUpFunc(ImGui_ImplFreeGLUT_KeyboardUpFunc);
    glutSpecialFunc(ImGui_ImplFreeGLUT_SpecialFunc);
    glutSpecialUpFunc(ImGui_ImplFreeGLUT_SpecialUpFunc);
}
    
    int32 ImGui_Marmalade_CharCallback(void* system_data, void* user_data)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardCharEvent* e = (s3eKeyboardCharEvent*)system_data;
    if ((e->m_Char > 0 && e->m_Char < 0x10000))
        io.AddInputCharacter((unsigned short)e->m_Char);
    }
    
        const GLchar* fragment_shader_glsl_120 =
        '#ifdef GL_ES\n'
        '    precision mediump float;\n'
        '#endif\n'
        'uniform sampler2D Texture;\n'
        'varying vec2 Frag_UV;\n'
        'varying vec4 Frag_Color;\n'
        'void main()\n'
        '{\n'
        '    gl_FragColor = Frag_Color * texture2D(Texture, Frag_UV.st);\n'
        '}\n';
    
        // Request a certain mode and confirm that it is available. If not use VK_PRESENT_MODE_FIFO_KHR which is mandatory
    uint32_t avail_count = 0;
    vkGetPhysicalDeviceSurfacePresentModesKHR(physical_device, surface, &avail_count, NULL);
    ImVector<VkPresentModeKHR> avail_modes;
    avail_modes.resize((int)avail_count);
    vkGetPhysicalDeviceSurfacePresentModesKHR(physical_device, surface, &avail_count, avail_modes.Data);
    //for (uint32_t avail_i = 0; avail_i < avail_count; avail_i++)
    //    printf('[vulkan] avail_modes[%d] = %d\n', avail_i, avail_modes[avail_i]);
    
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
        ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    static void SetupVulkan(const char** extensions, uint32_t extensions_count)
{
    VkResult err;
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
    
    #endif  // !defined(ROCKSDB_LITE) && !defined(OS_WIN)

    
    #include 'rocksdb/db.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/options.h'
    
      static void CompactFiles(void* arg) {
    std::unique_ptr<CompactionTask> task(
        reinterpret_cast<CompactionTask*>(arg));
    assert(task);
    assert(task->db);
    Status s = task->db->CompactFiles(
        task->compact_options,
        task->input_file_names,
        task->output_level);
    printf('CompactFiles() finished with status %s\n', s.ToString().c_str());
    if (!s.ok() && !s.IsIOError() && task->retry_on_fail) {
      // If a compaction task with its retry_on_fail=true failed,
      // try to schedule another compaction in case the reason
      // is not an IO error.
      CompactionTask* new_task = task->compactor->PickCompaction(
          task->db, task->column_family_name);
      task->compactor->ScheduleCompaction(new_task);
    }
  }
    
      // The operation (high-level action) that the current thread is involved.
  const OperationType operation_type;