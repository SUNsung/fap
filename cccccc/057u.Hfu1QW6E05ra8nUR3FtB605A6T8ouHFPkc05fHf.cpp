
        
        #endif  // ATOM_BROWSER_UI_DRAG_UTIL_H_

    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
    #endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
      // Sent when user image is updated.
  NOTIFICATION_LOGIN_USER_IMAGE_CHANGED,
    
     private:
  // The following methods are implemented by platform-specific implementations
  // of this class.
  //
  // Start/StopListening are called when transitioning between zero and nonzero
  // registered accelerators. StartListening will be called after
  // RegisterAcceleratorImpl and StopListening will be called after
  // UnregisterAcceleratorImpl.
  //
  // For RegisterAcceleratorImpl, implementations return false if registration
  // did not complete successfully.
  virtual void StartListening() = 0;
  virtual void StopListening() = 0;
  virtual bool RegisterAcceleratorImpl(const ui::Accelerator& accelerator) = 0;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) = 0;
    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
      // Return the parent NativeView of the observed WebContents.
  gfx::NativeView GetParentView();
    
    bool TtsPlatformImpl::LoadBuiltInTtsExtension(
    content::BrowserContext* browser_context) {
  return false;
}
    
    void RepeatedEnumFieldGenerator::GenerateCloningCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = other.$name$_.Clone();\n');
}
    
    class RepeatedMessageFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedMessageFieldGenerator(const FieldDescriptor* descriptor,
                                int fieldOrdinal,
                                const Options *options);
  ~RepeatedMessageFieldGenerator();
    }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    class GeneratorFactory {
 public:
  GeneratorFactory();
  virtual ~GeneratorFactory();
    }
    
    XGB_DLL int XGDMatrixGetUIntInfo(const DMatrixHandle handle,
                                 const char *field,
                                 xgboost::bst_ulong *out_len,
                                 const unsigned **out_dptr) {
  API_BEGIN();
  CHECK_HANDLE();
  const MetaInfo& info = static_cast<std::shared_ptr<DMatrix>*>(handle)->get()->Info();
  const std::vector<unsigned>* vec = nullptr;
  if (!std::strcmp(field, 'root_index')) {
    vec = &info.root_index_;
    *out_len = static_cast<xgboost::bst_ulong>(vec->size());
    *out_dptr = dmlc::BeginPtr(*vec);
  } else {
    LOG(FATAL) << 'Unknown uint field name ' << field;
  }
  API_END();
}
    
    class SimpleDMatrix : public DMatrix {
 public:
  explicit SimpleDMatrix(std::unique_ptr<DataSource>&& source)
      : source_(std::move(source)) {}
    }
    
      size_t GetColSize(size_t cidx) const override {
    return col_size_[cidx];
  }
    
    // simple implementation that just takes the source data in a big block
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
    }
    
        // Create the blending setup
    {
        D3D10_BLEND_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.AlphaToCoverageEnable = false;
        desc.BlendEnable[0] = true;
        desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
        desc.DestBlend = D3D10_BLEND_INV_SRC_ALPHA;
        desc.BlendOp = D3D10_BLEND_OP_ADD;
        desc.SrcBlendAlpha = D3D10_BLEND_INV_SRC_ALPHA;
        desc.DestBlendAlpha = D3D10_BLEND_ZERO;
        desc.BlendOpAlpha = D3D10_BLEND_OP_ADD;
        desc.RenderTargetWriteMask[0] = D3D10_COLOR_WRITE_ENABLE_ALL;
        g_pd3dDevice->CreateBlendState(&desc, &g_pBlendState);
    }
    
    
    {        // Create texture view
        D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
        ZeroMemory(&srvDesc, sizeof(srvDesc));
        srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        srvDesc.Texture2D.MipLevels = desc.MipLevels;
        srvDesc.Texture2D.MostDetailedMip = 0;
        g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, &g_pFontTextureView);
        pTexture->Release();
    }
    
    DEFINE_FIND_STATIC_METHOD(KXlog_setConsoleLogOpen, KXlog, 'setConsoleLogOpen', '(Z)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_setConsoleLogOpen
  (JNIEnv *env, jclass, jboolean _is_open) {
	appender_set_console_log((bool)_is_open);
}
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
      private:
    void __StartupCreater();
    void __FirstGetCreater(const std::string& _servicename);
    void __Creater(std::vector<ServiceRegister>& _vec);
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
        void TestFun0();
    void TestFun2()  {__TestFun1(1);}
    
    // convert return from local_ref<T>
template <typename T>
struct Convert<local_ref<T>> {
  typedef JniType<T> jniType;
  // No automatic synthesis of local_ref
  static jniType toJniRet(local_ref<jniType> t) {
    return t.release();
  }
  static jniType toCall(local_ref<jniType> t) {
    return t.get();
  }
};
    
    using namespace ::testing;
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
    template<typename... ARGS>
inline void logd(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_DEBUG, tag, msg, args...);
}