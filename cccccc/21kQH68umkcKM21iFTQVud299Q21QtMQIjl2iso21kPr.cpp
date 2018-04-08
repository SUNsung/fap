
        
        // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    namespace python {
    }
    
    TEST(AnyTest, TestPackAndUnpack) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(submessage);
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SourceGeneratorBase);
};
    
    // Saves the COM marker segment as a string to *jpg.
bool ProcessCOM(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  std::string com_str(reinterpret_cast<const char*>(
      &data[*pos - 2]), marker_len);
  *pos += marker_len - 2;
  jpg->com_data.push_back(com_str);
  return true;
}
    
      // Cluster DC histograms.
  size_t num_dc_histo = ncomps;
  int dc_histo_indexes[kMaxComponents];
  std::vector<uint8_t> depths(ncomps * JpegHistogram::kSize);
  ClusterHistograms(&histograms[0], &num_dc_histo, dc_histo_indexes,
                    &depths[0]);
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    void ComputeBlockIDCT(const coeff_t* block, uint8_t* out) {
  coeff_t colidcts[kDCTBlockSize];
  const int kColScale = 11;
  const int kColRound = 1 << (kColScale - 1);
  for (int x = 0; x < 8; ++x) {
    int colbuf[8] = { 0 };
    Compute1dIDCT(&block[x], 8, colbuf);
    for (int y = 0; y < 8; ++y) {
      colidcts[8 * y + x] = (colbuf[y] + kColRound) >> kColScale;
    }
  }
  const int kRowScale = 18;
  const int kRowRound = 257 << (kRowScale - 1);  // includes offset by 128
  for (int y = 0; y < 8; ++y) {
    const int rowidx = 8 * y;
    int rowbuf[8] = { 0 };
    Compute1dIDCT(&colidcts[rowidx], 1, rowbuf);
    for (int x = 0; x < 8; ++x) {
      out[rowidx + x] =
          std::max(0, std::min(255, (rowbuf[x] + kRowRound) >> kRowScale));
    }
  }
}
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {    __DelOlderTouchTime(now);
    touch_times_.push_back(now);
    return true;
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #include <vector>
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif

    
    jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const AutoBuffer& ab);
jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const void* _buffer, size_t _length);
void JNU_FreeJbyteArray(JNIEnv* _env, jbyteArray bytes);
    
    class ScopeJEnv {
  public:
    ScopeJEnv(JavaVM* jvm, jint _capacity = 16);
    ~ScopeJEnv();
    }
    
        // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
    if (hud->show_another_window)
    {
        ImGui::Begin('Another Window', &hud->show_another_window);
        ImGui::Text('Hello from another window!');
        ImGui::ColorEdit3('Cube 1 Color', hud->cubeColor1);
        ImGui::ColorEdit3('Cube 2 Color', hud->cubeColor2);
        ImGui::SliderFloat('Rotation Speed', &hud->rotation_speed, 0.0f, 200.0f);
        if (ImGui::Button('Close Me'))
            hud->show_another_window = false;
        ImGui::End();
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);
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
        ImGui_ImplDX9_NewFrame();
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL3_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL3_CreateDeviceObjects();
    
                    FT_Glyph ft_glyph = NULL;
                FT_BitmapGlyph ft_glyph_bitmap = NULL; // NB: will point to bitmap within FT_Glyph
                GlyphInfo glyph_info;
                if (!font_face.CalcGlyphInfo(codepoint, glyph_info, ft_glyph, ft_glyph_bitmap))
                    continue;
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
        // Copy and convert all vertices into a single contiguous buffer
    D3D11_MAPPED_SUBRESOURCE vtx_resource, idx_resource;
    if (ctx->Map(g_pVB, 0, D3D11_MAP_WRITE_DISCARD, 0, &vtx_resource) != S_OK)
        return;
    if (ctx->Map(g_pIB, 0, D3D11_MAP_WRITE_DISCARD, 0, &idx_resource) != S_OK)
        return;
    ImDrawVert* vtx_dst = (ImDrawVert*)vtx_resource.pData;
    ImDrawIdx* idx_dst = (ImDrawIdx*)idx_resource.pData;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        memcpy(vtx_dst, cmd_list->VtxBuffer.Data, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        vtx_dst += cmd_list->VtxBuffer.Size;
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    ctx->Unmap(g_pVB, 0);
    ctx->Unmap(g_pIB, 0);
    
        // Store our identifier
    io.Fonts->TexID = (void *)g_FontTexture;
    
    #include <cctype>
#include <cstring>
    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    
    {  // Update the effective log level
  LogLevel newEffectiveLevel;
  if (inherit) {
    newEffectiveLevel = std::min(level, parent_->getEffectiveLevel());
  } else {
    newEffectiveLevel = level;
  }
  updateEffectiveLevel(newEffectiveLevel);
}
    
    #include <folly/Optional.h>
#include <folly/experimental/logging/LogLevel.h>
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }
    
    
    {} // namespace folly
