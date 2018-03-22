
        
        
    { private:
  DebugOptions debug_options_;
};
    
      // Runs the optimized version of the graph on the cluster, measure
  // the runtimes of each operation, and annotated the CostGraphDef
  // with the corresponding measurements.
  // Returns the average latency for the whole graph.
  Status PredictCosts(const GraphDef& optimized_graph, CostGraphDef* cost_graph,
                      Costs* overall_cost) const override;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    TEST_F(NodeDefBuilderTest, Simple) {
  Op(OpDefBuilder('Simple').Input('a: int32').Output('out: float'));
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        const string file_format =
        str_util::Lowercase(file_format_tensor.scalar<string>()());
    const int32 samples_per_second =
        samples_per_second_tensor.scalar<int32>()();
    const int32 bits_per_second = bits_per_second_tensor.scalar<int32>()();
    
    void ConcurrentSteps(const Options* opts, int session_index) {
  // Creates a session.
  SessionOptions options;
  std::unique_ptr<Session> session(NewSession(options));
  GraphDef def = CreateGraphDef();
  if (options.target.empty()) {
    graph::SetDefaultDevice(opts->use_gpu ? '/device:GPU:0' : '/cpu:0', &def);
  }
    }
    
    void Classifier::Preprocess(const cv::Mat& img,
                            std::vector<cv::Mat>* input_channels) {
  /* Convert the input image to the input image format of the network. */
  cv::Mat sample;
  if (img.channels() == 3 && num_channels_ == 1)
    cv::cvtColor(img, sample, cv::COLOR_BGR2GRAY);
  else if (img.channels() == 4 && num_channels_ == 1)
    cv::cvtColor(img, sample, cv::COLOR_BGRA2GRAY);
  else if (img.channels() == 4 && num_channels_ == 3)
    cv::cvtColor(img, sample, cv::COLOR_BGRA2BGR);
  else if (img.channels() == 1 && num_channels_ == 3)
    cv::cvtColor(img, sample, cv::COLOR_GRAY2BGR);
  else
    sample = img;
    }
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    
    {}  // namespace caffe
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    bool EncodeScan(const JPEGData& jpg,
                const std::vector<HuffmanCodeTable>& dc_huff_table,
                const std::vector<HuffmanCodeTable>& ac_huff_table,
                JPEGOutput out) {
  coeff_t last_dc_coeff[kMaxComponents] = { 0 };
  BitWriter bw(1 << 17);
  for (int mcu_y = 0; mcu_y < jpg.MCU_rows; ++mcu_y) {
    for (int mcu_x = 0; mcu_x < jpg.MCU_cols; ++mcu_x) {
      // Encode one MCU
      for (size_t i = 0; i < jpg.components.size(); ++i) {
        const JPEGComponent& c = jpg.components[i];
        int nblocks_y = c.v_samp_factor;
        int nblocks_x = c.h_samp_factor;
        for (int iy = 0; iy < nblocks_y; ++iy) {
          for (int ix = 0; ix < nblocks_x; ++ix) {
            int block_y = mcu_y * nblocks_y + iy;
            int block_x = mcu_x * nblocks_x + ix;
            int block_idx = block_y * c.width_in_blocks + block_x;
            const coeff_t* coeffs = &c.coeffs[block_idx << 6];
            EncodeDCTBlockSequential(coeffs, dc_huff_table[i], ac_huff_table[i],
                                     &last_dc_coeff[i], &bw);
          }
        }
      }
      if (bw.pos > (1 << 16)) {
        if (!JPEGWrite(out, bw.data.get(), bw.pos)) {
          return false;
        }
        bw.pos = 0;
      }
    }
  }
  bw.JumpToByteBoundary();
  return !bw.overflow && JPEGWrite(out, bw.data.get(), bw.pos);
}
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    #include 'guetzli/jpeg_data.h'
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    static  stb_uint stb__hashsize = 32768;
    
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
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    // Implemented features:
//  [X] User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    void ImGui_Marmalade_NewFrame()
{
    if (!g_FontTexture)
        ImGui_Marmalade_CreateDeviceObjects();
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    
    {    g_fence->SetEventOnCompletion(fenceValue, g_fenceEvent);
    WaitForSingleObject(g_fenceEvent, INFINITE);
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
    
    static uint32_t                 g_FrameIndex = 0;
static VkCommandPool            g_CommandPool[IMGUI_VK_QUEUED_FRAMES];
static VkCommandBuffer          g_CommandBuffer[IMGUI_VK_QUEUED_FRAMES];
static VkFence                  g_Fence[IMGUI_VK_QUEUED_FRAMES];
static VkSemaphore              g_PresentCompleteSemaphore[IMGUI_VK_QUEUED_FRAMES];
static VkSemaphore              g_RenderCompleteSemaphore[IMGUI_VK_QUEUED_FRAMES];