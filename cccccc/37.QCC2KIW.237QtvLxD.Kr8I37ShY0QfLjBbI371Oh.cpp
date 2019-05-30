
        
        ```
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    REGISTER_CUDA_OPERATOR(LC3D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC3DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    
    {	b2PolyNode(b2Vec2& pos);
	b2PolyNode();
	void AddConnection(b2PolyNode& toMe);
	void RemoveConnection(b2PolyNode& fromMe);
	void RemoveConnectionByIndex(int32 index);
	bool IsConnectedTo(b2PolyNode& me);
	b2PolyNode* GetRightestConnection(b2PolyNode* incoming);
	b2PolyNode* GetRightestConnection(b2Vec2& incomingDir);
};
    
    #include 'b2Glue.h'
    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
    
    {#if defined (__cplusplus)
}
#endif
    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS'
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.*/
    
    void silk_decode_pitch(
    opus_int16                  lagIndex,           /* I                                                                */
    opus_int8                   contourIndex,       /* O                                                                */
    opus_int                    pitch_lags[],       /* O    4 pitch values                                              */
    const opus_int              Fs_kHz,             /* I    sampling frequency (kHz)                                    */
    const opus_int              nb_subfr            /* I    number of sub frames                                        */
);
    
        Rational result{ prat };
    destroyrat(prat);
    
    #include <algorithm>
#include 'Header Files/Number.h'
    
    void CCalcEngine::SettingsChanged()
{
    wchar_t lastDec = m_decimalSeparator;
    wstring decStr = m_resourceProvider->GetCEngineString(L'sDecimal');
    m_decimalSeparator = decStr.empty() ? DEFAULT_DEC_SEPARATOR : decStr.at(0);
    // Until it can be removed, continue to set ratpak decimal here
    SetDecimalSeparator(m_decimalSeparator);
    }
    
    
    {    AutomationProperties::SetName(m_host, announcement->Announcement);
    AutomationPeer ^ peer = FrameworkElementAutomationPeer::FromElement(m_host);
    if (peer != nullptr)
    {
        peer->RaiseAutomationEvent(AutomationEvents::LiveRegionChanged);
    }
}

    
    namespace xgboost {
namespace obj {
    }
    }
    
          ASSERT_TRUE(input == output);
    
    TEST(SparseColumn, Test) {
  auto dmat = CreateDMatrix(100, 1, 0.85);
  GHistIndexMatrix gmat;
  gmat.Init((*dmat).get(), 256);
  ColumnMatrix column_matrix;
  column_matrix.Init(gmat, 0.5);
  auto col = column_matrix.GetColumn(0);
  ASSERT_EQ(col.Size(), gmat.index.size());
  for (auto i = 0ull; i < col.Size(); i++) {
    EXPECT_EQ(gmat.index[gmat.row_ptr[col.GetRowIdx(i)]],
              col.GetGlobalBinIdx(i));
  }
  delete dmat;
}
    
      /*!
   * \brief feature contributions to individual predictions; the output will be a vector
   *         of length (nfeats + 1) * num_output_group * nsample, arranged in that order
   * \param dmat feature matrix
   * \param out_contribs output vector to hold the contributions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees
   * \param approximate use a faster (inconsistent) approximation of SHAP values
   * \param condition condition on the condition_feature (0=no, -1=cond off, 1=cond on).
   * \param condition_feature feature to condition on (i.e. fix) during calculations
   */
  virtual void PredictContribution(DMatrix* dmat,
                           std::vector<bst_float>* out_contribs,
                           unsigned ntree_limit = 0, bool approximate = false,
                           int condition = 0, unsigned condition_feature = 0) = 0;
    
    #include '../../src/common/host_device_vector.h'
    
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
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    #include 'imgui.h'
#include 'imgui_impl_win32.h'
#include 'imgui_impl_dx10.h'
#include <d3d10_1.h>
#include <d3d10.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
        // Show the window
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);
    
        // Poll and handle events (inputs, window resize, etc.)
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
    // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
    // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
    // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        ImGui_ImplSDL2_ProcessEvent(&event);
        // Capture events here, based on io.WantCaptureMouse and io.WantCaptureKeyboard
    }
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }
    }
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    
    {  int ret = x;
  return ret;
}
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
    -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     2, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    -2,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    -1,  2, -1,  0,  0,  0,  0,  0,  0,  0,
     1, -2,  1,  0,  0,  0,  0,  0,  0,  0,
     0, -1,  2, -1,  0,  0,  0,  0,  0,  0,
     0,  1, -2,  1,  0,  0,  0,  0,  0,  0,
     0,  0, -1,  2, -1,  0,  0,  0,  0,  0,
     0,  0,  1, -2,  1,  0,  0,  0,  0,  0,
     0,  0,  0, -1,  2, -1,  0,  0,  0,  0,
     0,  0,  0,  1, -2,  1,  0,  0,  0,  0,
     0,  0,  0,  0, -1,  2, -1,  0,  0,  0,
     0,  0,  0,  0,  1, -2,  1,  0,  0,  0,
     0,  0,  0,  0,  0, -1,  2, -1,  0,  0,
     0,  0,  0,  0,  0,  1, -2,  1,  0,  0,
     0,  0,  0,  0,  0,  0, -1,  2, -1,  0,
     0,  0,  0,  0,  0,  0,  1, -2,  1,  0,
     0,  0,  0,  0,  0,  0,  0, -1,  2, -1,
     0,  0,  0,  0,  0,  0,  0,  1, -2,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
    namespace apollo {
namespace planning {
    }
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    void Accelrpt68::Parse(const std::uint8_t* bytes, int32_t length,
                       ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_accel_rpt_68()->set_manual_input(
      manual_input(bytes, length));
  chassis->mutable_gem()->mutable_accel_rpt_68()->set_commanded_value(
      commanded_value(bytes, length));
  chassis->mutable_gem()->mutable_accel_rpt_68()->set_output_value(
      output_value(bytes, length));
}
    
    #include 'gtest/gtest.h'
    
      Byte t2(bytes + 6);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
    TEST(Brake61Test, General) {
  int32_t length = 8;
  ChassisDetail chassis_detail;
  uint8_t bytes[8] = {0x01, 0x02, 0x03, 0x04, 0x11, 0x12, 0x13, 0x14};
    }
    
    
    {
    {
    {
    {  Headlight_rpt_77::Commanded_valueType ret =
      static_cast<Headlight_rpt_77::Commanded_valueType>(x);
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo
