
        
        class BaseTest : public ::testing::Test {
  // You can inherit all the usual members for a non-parameterized test
  // fixture here.
};
    
    // Overload for std::pair.
template <typename T1, typename T2>
void PrintTo(const ::std::pair<T1, T2>& value, ::std::ostream* os) {
  *os << '(';
  // We cannot use UniversalPrint(value.first, os) here, as T1 may be
  // a reference type.  The same for printing value.second.
  UniversalPrinter<T1>::Print(value.first, os);
  *os << ', ';
  UniversalPrinter<T2>::Print(value.second, os);
  *os << ')';
}
    
     private:
  Type type_;
    
    // C-string Comparisons.  All tests treat NULL and any non-NULL string
// as different.  Two NULLs are equal.
//
//    * {ASSERT|EXPECT}_STREQ(s1, s2):     Tests that s1 == s2
//    * {ASSERT|EXPECT}_STRNE(s1, s2):     Tests that s1 != s2
//    * {ASSERT|EXPECT}_STRCASEEQ(s1, s2): Tests that s1 == s2, ignoring case
//    * {ASSERT|EXPECT}_STRCASENE(s1, s2): Tests that s1 != s2, ignoring case
//
// For wide or narrow string objects, you can use the
// {ASSERT|EXPECT}_??() macros.
//
// Don't depend on the order in which the arguments are evaluated,
// which is undefined.
//
// These macros evaluate their arguments exactly once.
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
    }
    
    namespace grpc {
namespace testing {
    }
    }
    
    #ifndef GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H
#define GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H
    
    TEST_F(CodegenTestMinimal, Build) {}
    
    /*
 * This implements a Metrics server defined in
 * src/proto/grpc/testing/metrics.proto. Any
 * test service can use this to export Metrics (TODO (sreek): Only Gauges for
 * now).
 *
 * Example:
 *    MetricsServiceImpl metricsImpl;
 *    ..
 *    // Create QpsGauge(s). Note: QpsGauges can be created even after calling
 *    // 'StartServer'.
 *    QpsGauge qps_gauge1 = metricsImpl.CreateQpsGauge('foo', is_present);
 *    // qps_gauge1 can now be used anywhere in the program by first making a
 *    // one-time call qps_gauge1.Reset() and then calling qps_gauge1.Incr()
 *    // every time to increment a query counter
 *
 *    ...
 *    // Create the metrics server
 *    std::unique_ptr<grpc::Server> server = metricsImpl.StartServer(port);
 *    server->Wait(); // Note: This is blocking.
 */
namespace grpc {
namespace testing {
    }
    }
    
    #include 'test/cpp/util/service_describer.h'
    
    #include 'grpc_tools/main.h'
    
    #define REGISTER_BINARY_LOGIC_OPERATOR_SCHEMA(OpName)                                                           \
    REGISTER_OPERATOR_SCHEMA(OpName)                                                                            \
        .Description('Returns the tensor resulted from performing the ''#OpName'' logical operation'            \
            'elementwise on the input tensors A and B. If broadcasting is enabled, the right-hand-side'         \
            'argument will be broadcasted to match the shape of left-hand-side argument. Refer to Add'          \
            ' for a detailed description of the broadcasting rules.')                                           \
        .Input('A', 'First operand.', 'T')                                                                      \
        .Input('B', 'Second operand. With broadcasting can be of smaller size than A. If broadcasting'          \
            'is disabled, it should be of the same size.', 'T')                                                 \
        .Output('C', 'Result, has same dimensions and A and type bool.', 'T')                                   \
        .TypeConstraint('T', { 'tensor(bool)' }, 'Constrain input and output types to bool tensor.')            \
        .Attr('axis', 'If set, defines the broadcast dimensions.',                                              \
            AttrType::AttributeProto_AttributeType_INT)                                                         \
        .Attr('broadcast', 'Pass 1 to enable broadcasting.',                                                    \
            AttrType::AttributeProto_AttributeType_INT);
    
    
    {    // copy mD to dense and compare
    Matrix<float> mE = Matrix<float>::Zeros(dim1, dim1, c_deviceIdZero);
    Matrix<float>::ScaleAndAdd(1, mD, mE);
    BOOST_CHECK(mE.IsEqualTo(mC, c_epsilonFloatE4));
}
    
    void GranularGPUDataTransferer::WaitForCopyCPUToGPU()
{
    PrepareDevice(m_deviceId);
    cudaEventSynchronize(m_assignCompleteEvent) || 'cudaEventSynchronize failed';
}
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    SEXP XGBoosterPredict_R(SEXP handle, SEXP dmat, SEXP option_mask, SEXP ntree_limit) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGBoosterPredict(R_ExternalPtrAddr(handle),
                            R_ExternalPtrAddr(dmat),
                            asInteger(option_mask),
                            asInteger(ntree_limit),
                            &olen, &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterBoostOneIter
 * Signature: (JJ[F[F)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterBoostOneIter
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jlong jdtrain, jfloatArray jgrad, jfloatArray jhess) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  DMatrixHandle dtrain = (DMatrixHandle) jdtrain;
  jfloat* grad = jenv->GetFloatArrayElements(jgrad, 0);
  jfloat* hess = jenv->GetFloatArrayElements(jhess, 0);
  bst_ulong len = (bst_ulong)jenv->GetArrayLength(jgrad);
  int ret = XGBoosterBoostOneIter(handle, dtrain, grad, hess, len);
  //release
  jenv->ReleaseFloatArrayElements(jgrad, grad, 0);
  jenv->ReleaseFloatArrayElements(jhess, hess, 0);
  return ret;
}
    
    TEST(Metric, AMS) {
  EXPECT_ANY_THROW(xgboost::Metric::Create('ams'));
  xgboost::Metric * metric = xgboost::Metric::Create('ams@0.5f');
  ASSERT_STREQ(metric->Name(), 'ams@0.5');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.311f, 0.001f);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.29710f, 0.001f);
    }
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
    
    {
    {XGBOOST_REGISTER_LINEAR_UPDATER(ShotgunUpdater, 'shotgun')
    .describe(
        'Update linear model according to shotgun coordinate descent '
        'algorithm.')
    .set_body([]() { return new ShotgunUpdater(); });
}  // namespace linear
}  // namespace xgboost

    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    void Quantize(coeff_t* v, int iquant) {
  *v = (*v * iquant + kBias) >> kDCTBits;
}
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
    
    {}  // namespace guetzli

    
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
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of ImGui
    
    IMGUI_API bool        ImGui_ImplGlfwGL3_Init(GLFWwindow* window, bool install_callbacks, const char* glsl_version = NULL);
IMGUI_API void        ImGui_ImplGlfwGL3_Shutdown();
IMGUI_API void        ImGui_ImplGlfwGL3_NewFrame();
IMGUI_API void        ImGui_ImplGlfwGL3_RenderDrawData(ImDrawData* draw_data);
    
    bool    ImGui_ImplDX12_Init(void* hwnd, int num_frames_in_flight,
                            ID3D12Device* device,
                            DXGI_FORMAT rtv_format,
                            D3D12_CPU_DESCRIPTOR_HANDLE font_srv_cpu_desc_handle,
                            D3D12_GPU_DESCRIPTOR_HANDLE font_srv_gpu_desc_handle)
{
    g_hWnd = (HWND)hwnd;
    g_pd3dDevice = device;
    g_RTVFormat = rtv_format;
    g_hFontSrvCpuDescHandle = font_srv_cpu_desc_handle;
    g_hFontSrvGpuDescHandle = font_srv_gpu_desc_handle;
    g_pFrameResources = new FrameResources [num_frames_in_flight];
    g_numFramesInFlight = num_frames_in_flight;
    g_frameIndex = UINT_MAX;
    }
    
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
        ImGui_ImplDX10_NewFrame();
    }
    
        CleanupDeviceD3D();
    DestroyWindow(hwnd);
    UnregisterClass(_T('ImGui Example'), wc.hInstance);
    
    HRESULT CreateDeviceD3D(HWND hWnd)
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
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
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
    
    #ifndef DUMPCRASHSTACK_H_
#define DUMPCRASHSTACK_H_
    
    #ifdef ANDROID
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    struct ServiceRegister;
    
    
#endif /* SCOP_JENV_H_ */
