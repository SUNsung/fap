
        
            void Model::SetModelversion(VERSION p_modelVersion)
    {
        m_modelProto->set_model_version(p_modelVersion);
    }
    
    using namespace onnx;
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(HardSigmoid)
        .Description('HardSigmoid takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the hard sigmoid function, f(x) = max⁡(0,min⁡(alpha*x+beta,1)), '
            'is applied to the  tensor elementwise.')
        .Input('X', 'Input tensor of any shape', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scalar offset', AttrType::AttributeProto_AttributeType_FLOAT);
    
    namespace ONNXIR {
    }
    
        // Get utterance description by its index.
    const UtteranceDescription* GetUtterance(size_t index) const
    {
        return &m_utterances[index];
    }
    
    void TraceLSTMPathes(const FunctionPtr& src, string &f_activation, string &g_activation, string &h_activation,
    RNNDirection &direction, Variable &initStateH, Variable &initStateC, Variable &peepholeCi, Variable &peepholeCo, Variable &peepholeCf,
    double &stabilizer_dh, double &stabilizer_dc, double &stabilizer_c);
    
    void DebugHUD_DoInterface(DebugHUD *hud)
{
    // 1. Show a simple window.
    // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
    {
        static float f = 0.0f;
        static int counter = 0;
        ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
        ImGui::ColorEdit3('clear color', hud->clearColor);      // Edit 3 floats representing a color
    }
    }
    
    
    {        ImGui::Render();
    }
    
    
    {    // Restore modified state
    al_set_blender(op, src, dst);
    al_set_clipping_rectangle(0, 0, al_get_display_width(g_Display), al_get_display_height(g_Display));
}
    
    struct ID3D10Device;
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of ImGui
    
    IMGUI_API bool        ImGui_ImplGlfwGL2_Init(GLFWwindow* window, bool install_callbacks);
IMGUI_API void        ImGui_ImplGlfwGL2_Shutdown();
IMGUI_API void        ImGui_ImplGlfwGL2_NewFrame();
IMGUI_API void        ImGui_ImplGlfwGL2_RenderDrawData(ImDrawData* draw_data);
    
            // Rendering
        g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui::Render();
        ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSdlGL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
        ImGui_ImplSdlGL2_NewFrame(window);
    }
    
        // Upload texture to graphics system
    GLint last_texture;
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
    glGenTextures(1, &g_FontTexture);
    glBindTexture(GL_TEXTURE_2D, g_FontTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplSdlGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplSdlGL2_CreateDeviceObjects();

    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
    
    {  return scope.Close(v);
}
    
    
    {};
    
    
    {  std::string res;
  slists.Get('k1', &res);
  ASSERT_EQ(res, 'v1|v2|v3');
}
    
      virtual void Prev() override;
    
    
    {}  // namespace rocksdb
    
      virtual bool Ref(Handle* handle) override { return cache_->Ref(handle); }
    
    	// NewClient
	printer->Print(vars, 'func New$Service$Client(cc *$grpc$.ClientConn) $Service$Client {\n');
	printer->Indent();
	printer->Print(vars, 'return &$ServiceUnexported$Client{cc}');
	printer->Outdent();
	printer->Print('\n}\n\n');
    
        vars['filename'] = file->filename();
    vars['filename_base'] = file->filename_without_ext();
    vars['message_header_ext'] = message_header_ext();
    vars['service_header_ext'] = service_header_ext();
    
      virtual grpc::string name() const = 0;
    
      // Returns a human readable error if any of the above functions fail.
  const std::string &GetLastError() { return lasterror_; }
    
      // Get and test the `Equipment` union (`equipped` field).
  assert(monster->equipped_type() == Equipment_Weapon);
  auto equipped = static_cast<const Weapon *>(monster->equipped());
  assert(equipped->name()->str() == 'Axe');
  assert(equipped->damage() == 5);
  (void)equipped;
    
    #include <iostream>
#include 'flatbuffers/code_generators.h'
#include 'flatbuffers/idl.h'
#include 'flatbuffers/util.h'
    
    // Begin the creator function signature.
static void BeginBuilderArgs(const StructDef &struct_def,
                             std::string *code_ptr) {
  std::string &code = *code_ptr;
    }