
        
        // Extracts the value of a PyBfloat16 object.
bfloat16 PyBfloat16_Bfloat16(PyObject* object) {
  return reinterpret_cast<PyBfloat16*>(object)->value;
}
    
    
    {}  // namespace tensorflow
    
    // Actually dereferences cached numpy arrays. REQUIRES being called while
// holding the GIL.
void ClearDecrefCache() {
  std::vector<void*> cache_copy;
  {
    mutex_lock ml(*DelayedDecrefLock());
    cache_copy.swap(*DecrefCache());
  }
  for (void* obj : cache_copy) {
    Py_DECREF(reinterpret_cast<PyObject*>(obj));
  }
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
      static const unsigned kMask = 0xf;  // Mask of all available flags.
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include <algorithm>
    
        void operator() (const uint8x8_t & _v_src0, const uint8x8_t & _v_src1,
                     uint8x8_t & v_dst) const
    {
        uint16x8_t v_src0 = vmovl_u8(_v_src0), v_src1 = vmovl_u8(_v_src1);
    }
    
            //left&right borders
        if (borderType != BORDER_MODE_CONSTANT)
            for (s32 k = 0; k < cn; ++k)
            {
                lanea[-cn+k] = lanea[idx_l + k];
                lanea[colsn+k] = lanea[idx_r + k];
                laneb[-cn+k] = laneb[idx_l + k];
                laneb[colsn+k] = laneb[idx_r + k];
            }
    
    
    {        for (; i < size.width; ++i)
            result += s32(src0[i]) * s32(src1[i]);
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
        v0k8 = vextq_s16(d8_15, d16_23, 5);
    ak8 = vminq_s16(ak8, v0k8);
    bk8 = vmaxq_s16(bk8, v0k8);
    
    #include <dmlc/registry.h>
#include <xgboost/base.h>
#include <xgboost/data.h>
#include <functional>
#include <string>
#include <utility>
#include <vector>
#include '../../src/gbm/gblinear_model.h'
#include '../../src/common/host_device_vector.h'
    
    // Forward declarations
namespace xgboost {
class TreeUpdater;
}
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    #endif  // DMLC_ENABLE_STD_THREAD

    
    
    {
    {}  // namespace tree
}  // namespace xgboost
    
    
    {  // default copy constructor
  {
    Span<float> s0 (arr);
    Span<float> s1 (s0);
    ASSERT_EQ(s0.size(), s1.size());
    ASSERT_EQ(s0.data(), s1.data());
  }
}
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    #pragma once
    
        // Render command lists
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        const int nVert = cmd_list->VtxBuffer.Size;
        CIwFVec2* pVertStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwFVec2* pUVStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwColour* pColStream = IW_GX_ALLOC(CIwColour, nVert);
    }
    
    static bool show_demo_window = true;
static bool show_another_window = false;
static ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
        // Initialize OpenGL loader
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
    bool err = gl3wInit() != 0;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
    bool err = glewInit() != GLEW_OK;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
    bool err = gladLoadGL() == 0;
#else
    bool err = false; // If you use IMGUI_IMPL_OPENGL_LOADER_CUSTOM, your loader is likely to requires some form of initialization.
#endif
    if (err)
    {
        fprintf(stderr, 'Failed to initialize OpenGL loader!\n');
        return 1;
    }
    
            // Rendering
        FrameContext* frameCtxt = WaitForNextFrameResources();
        UINT backBufferIdx = g_pSwapChain->GetCurrentBackBufferIndex();
        frameCtxt->CommandAllocator->Reset();
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    // DirectX data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGIFactory*            g_pFactory = NULL;
static ID3D11Buffer*            g_pVB = NULL;
static ID3D11Buffer*            g_pIB = NULL;
static ID3D10Blob*              g_pVertexShaderBlob = NULL;
static ID3D11VertexShader*      g_pVertexShader = NULL;
static ID3D11InputLayout*       g_pInputLayout = NULL;
static ID3D11Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob*              g_pPixelShaderBlob = NULL;
static ID3D11PixelShader*       g_pPixelShader = NULL;
static ID3D11SamplerState*      g_pFontSampler = NULL;
static ID3D11ShaderResourceView*g_pFontTextureView = NULL;
static ID3D11RasterizerState*   g_pRasterizerState = NULL;
static ID3D11BlendState*        g_pBlendState = NULL;
static ID3D11DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
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
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
    void DHTRoutingTable::setTaskFactory(DHTTaskFactory* taskFactory)
{
  taskFactory_ = taskFactory;
}
    
    #include 'TimeA2.h'
    
    class DHTNode;
    
    
    {  virtual bool finished() = 0;
};
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    
    {} // namespace aria2

    
    
    {} // namespace aria2

    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    using json = nlohmann::json;
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }