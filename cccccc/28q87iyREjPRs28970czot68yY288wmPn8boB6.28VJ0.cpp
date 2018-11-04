
        
          int width = 35;
  int width_narrow = 15;
  int width_wide = 20;
  os << std::setw(width + 1) << 'Op,';
  os << std::setw(width_narrow + 1) << 'Count,';
  os << std::setw(width_wide + 1) << 'Measured time (ns),';
  os << std::setw(width_narrow + 2) << 'Time percent,';
  os << std::setw(width_narrow + 2) << 'Acc percent,';
  os << std::setw(width_wide + 1) << 'Analytical upper,';
  os << std::setw(width_wide + 1) << 'Analytical lower,';
  os << std::setw(width_narrow + 2) << 'Overall eff';
  os << std::setw(width_narrow + 2) << 'Compute eff';
  os << std::setw(width_narrow + 2) << 'Memory eff' << std::endl;
  float acc_percent = 0;
  for (const auto& op : ops_) {
    double percent = static_cast<double>(op.time) /
                     static_cast<double>(total_time_measured_serialized_);
    double eff =
        static_cast<double>(op.time_upper) / static_cast<double>(op.time);
    double compute_eff =
        static_cast<double>(op.compute_time) / static_cast<double>(op.time);
    double memory_eff =
        static_cast<double>(op.memory_time) / static_cast<double>(op.time);
    os << std::setw(width) << op.name << ',';
    os << std::setw(width_narrow) << op.count << ',';
    os << std::setw(width_wide) << op.time << ',';
    os << std::setw(width_narrow) << std::setprecision(2) << percent * 100
       << '%,';
    acc_percent += percent;
    os << std::setw(width_narrow) << std::setprecision(2) << acc_percent * 100
       << '%,';
    os << std::setw(width_wide) << op.time_upper << ',';
    os << std::setw(width_wide) << op.time_lower << ',';
    os << std::setw(width_narrow) << std::setprecision(2) << eff * 100 << '%,';
    os << std::setw(width_narrow) << std::setprecision(2) << compute_eff * 100
       << '%,';
    os << std::setw(width_narrow) << std::setprecision(2) << memory_eff * 100
       << '%,';
    os << std::endl;
  }
  os << std::endl;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    template <typename InType, typename OutType, typename Functor>
void BinaryUFunc(char** args, npy_intp* dimensions, npy_intp* steps,
                 void* data) {
  const char* i0 = args[0];
  const char* i1 = args[1];
  char* o = args[2];
  for (npy_intp k = 0; k < *dimensions; k++) {
    InType x = *reinterpret_cast<const InType*>(i0);
    InType y = *reinterpret_cast<const InType*>(i1);
    *reinterpret_cast<OutType*>(o) = Functor()(x, y);
    i0 += steps[0];
    i1 += steps[1];
    o += steps[2];
  }
}
    
    // Returns the id number of the bfloat16 numpy type.
int Bfloat16NumpyType();
    
    Status TF_TensorToPyArray(Safe_TF_TensorPtr tensor, PyObject** out_ndarray);
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class Diagnostician {
 public:
  // Logs diagnostic information when CUDA appears to be misconfigured (e.g. is
  // not initializing).
  //
  // Note: if we're running on a machine that has no GPUs, we don't want to
  // produce very much log spew beyond saying, 'looks like there's no CUDA
  // kernel
  // module running'.
  //
  // Note: we use non-Google-File:: API here because we may be called before
  // InitGoogle has completed.
  static void LogDiagnosticInformation();
    }
    
    #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/format.hpp'
#include 'caffe/util/math_functions.hpp'
    
      /**
   * @brief Set the data_ shared_ptr to point to the SyncedMemory holding the
   *        data_ of Blob other -- useful in Layer%s which simply perform a copy
   *        in their Forward pass.
   *
   * This deallocates the SyncedMemory holding this Blob's data_, as
   * shared_ptr calls its destructor when reset with the '=' operator.
   */
  void ShareData(const Blob& other);
  /**
   * @brief Set the diff_ shared_ptr to point to the SyncedMemory holding the
   *        diff_ of Blob other -- useful in Layer%s which simply perform a copy
   *        in their Forward pass.
   *
   * This deallocates the SyncedMemory holding this Blob's diff_, as
   * shared_ptr calls its destructor when reset with the '=' operator.
   */
  void ShareDiff(const Blob& other);
    
    /**
 * @brief Normalizes the input to have 0-mean and/or unit (1) variance across
 *        the batch.
 *
 * This layer computes Batch Normalization as described in [1]. For each channel
 * in the data (i.e. axis 1), it subtracts the mean and divides by the variance,
 * where both statistics are computed across both spatial dimensions and across
 * the different examples in the batch.
 *
 * By default, during training time, the network is computing global
 * mean/variance statistics via a running average, which is then used at test
 * time to allow deterministic outputs for each input. You can manually toggle
 * whether the network is accumulating or using the statistics via the
 * use_global_stats option. For reference, these statistics are kept in the
 * layer's three blobs: (0) mean, (1) variance, and (2) moving average factor.
 *
 * Note that the original paper also included a per-channel learned bias and
 * scaling factor. To implement this in Caffe, define a `ScaleLayer` configured
 * with `bias_term: true` after each `BatchNormLayer` to handle both the bias
 * and scaling factor.
 *
 * [1] S. Ioffe and C. Szegedy, 'Batch Normalization: Accelerating Deep Network
 *     Training by Reducing Internal Covariate Shift.' arXiv preprint
 *     arXiv:1502.03167 (2015).
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class BatchNormLayer : public Layer<Dtype> {
 public:
  explicit BatchNormLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
};
#endif
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    
    {    if (g_pBlendState) { g_pBlendState->Release(); g_pBlendState = NULL; }
    if (g_pDepthStencilState) { g_pDepthStencilState->Release(); g_pDepthStencilState = NULL; }
    if (g_pRasterizerState) { g_pRasterizerState->Release(); g_pRasterizerState = NULL; }
    if (g_pPixelShader) { g_pPixelShader->Release(); g_pPixelShader = NULL; }
    if (g_pPixelShaderBlob) { g_pPixelShaderBlob->Release(); g_pPixelShaderBlob = NULL; }
    if (g_pVertexConstantBuffer) { g_pVertexConstantBuffer->Release(); g_pVertexConstantBuffer = NULL; }
    if (g_pInputLayout) { g_pInputLayout->Release(); g_pInputLayout = NULL; }
    if (g_pVertexShader) { g_pVertexShader->Release(); g_pVertexShader = NULL; }
    if (g_pVertexShaderBlob) { g_pVertexShaderBlob->Release(); g_pVertexShaderBlob = NULL; }
}
    
        // Setup display size (every frame to accommodate for window resizing)
    int w = IwGxGetScreenWidth(), h = IwGxGetScreenHeight();
    io.DisplaySize = ImVec2((float)w, (float)h);
     // For retina display or other situations where window coordinates are different from framebuffer coordinates. User storage only, presently not used by ImGui.
    io.DisplayFramebufferScale = g_scale;
    
    // OpenGL2 Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
// Note that this implementation is little overcomplicated because we are saving/setting up/restoring every OpenGL state explicitly, in order to be able to run within any OpenGL engine that doesn't do so. 
void ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized, scale coordinates for retina displays (screen coordinates != framebuffer coordinates)
    ImGuiIO& io = ImGui::GetIO();
    int fb_width = (int)(draw_data->DisplaySize.x * io.DisplayFramebufferScale.x);
    int fb_height = (int)(draw_data->DisplaySize.y * io.DisplayFramebufferScale.y);
    if (fb_width == 0 || fb_height == 0)
        return;
    draw_data->ScaleClipRects(io.DisplayFramebufferScale);
    }
    
    
    {    (void)mods; // Modifiers are not reliable across systems
    io.KeyCtrl = io.KeysDown[GLFW_KEY_LEFT_CONTROL] || io.KeysDown[GLFW_KEY_RIGHT_CONTROL];
    io.KeyShift = io.KeysDown[GLFW_KEY_LEFT_SHIFT] || io.KeysDown[GLFW_KEY_RIGHT_SHIFT];
    io.KeyAlt = io.KeysDown[GLFW_KEY_LEFT_ALT] || io.KeysDown[GLFW_KEY_RIGHT_ALT];
    io.KeySuper = io.KeysDown[GLFW_KEY_LEFT_SUPER] || io.KeysDown[GLFW_KEY_RIGHT_SUPER];
}
    
    
    {    ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (io.MouseDrawCursor || imgui_cursor == ImGuiMouseCursor_None)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        SDL_ShowCursor(SDL_FALSE);
    }
    else
    {
        // Show OS mouse cursor
        SDL_SetCursor(g_MouseCursors[imgui_cursor] ? g_MouseCursors[imgui_cursor] : g_MouseCursors[ImGuiMouseCursor_Arrow]);
        SDL_ShowCursor(SDL_TRUE);
    }
}
    
    int ImFontAtlas::AddCustomRectFontGlyph(ImFont* font, ImWchar id, int width, int height, float advance_x, const ImVec2& offset)
{
    IM_ASSERT(font != NULL);
    IM_ASSERT(width > 0 && width <= 0xFFFF);
    IM_ASSERT(height > 0 && height <= 0xFFFF);
    CustomRect r;
    r.ID = id;
    r.Width = (unsigned short)width;
    r.Height = (unsigned short)height;
    r.GlyphAdvanceX = advance_x;
    r.GlyphOffset = offset;
    r.Font = font;
    CustomRects.push_back(r);
    return CustomRects.Size - 1; // Return index
}
    
    int DHTRoutingTable::getNumBucket() const { return numBucket_; }
    
    #include 'common.h'
    
    class DownloadEngine;
class Command;
    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() = 0;
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before_store(order);
        BOOST_ATOMIC_DETAIL_ARM_STORE8(&storage, v);
        base_type::fence_after_store(order);
    }
    
    using atomics::atomic_thread_fence;
using atomics::atomic_signal_fence;