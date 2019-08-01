
        
          bool DoPoolBackward(Stream* stream,
                      const dnn::PoolingDescriptor& pooling_dimensions,
                      const dnn::BatchDescriptor& input_dimensions,
                      const DeviceMemory<Eigen::half>& input_data,
                      const dnn::BatchDescriptor& output_dimensions,
                      const DeviceMemory<Eigen::half>& output_data,
                      const DeviceMemory<Eigen::half>& input_diff_data,
                      DeviceMemory<Eigen::half>* output_diff_data,
                      ScratchAllocator* workspace_allocator = nullptr) override;
    
    #if GOOGLE_CUDA || TENSORFLOW_USE_ROCM
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Applies provided delegate to the underlying TFLite Interpreter.
  TfLiteStatus ApplyCustomDelegate(Interpreter::TfLiteDelegatePtr delegate);
    
      // Set input data.
  uint8_t input_tensor[kTotalElements];
  SetValues(input_tensor, static_cast<uint8_t>(2));
  std::vector<void*> inputs;
  inputs.push_back(input_tensor);
  stage.SetInputs(inputs);
    
    #include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/platform/types.h'
    
    #define DECLARE_GPU_SPECS_INDEX(T, Index)    \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 0); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 1); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 2); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 3); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 4); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 5); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 6); \
  DECLARE_GPU_SPECS_INDEX_NDIM(T, Index, 7);
    
    #define DEFINE_GPU_SPECS_INDEX(T, Index)    \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 0); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 1); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 2); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 3); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 4); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 5); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 6); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 7);
    
    #endif  // TENSORFLOW_COMPILER_XLA_DEBUG_OPTIONS_FLAGS_H_

    
    void ConvertSparseToDenseOperator(const Model& model,
                                  const SparseToDenseOperator& src_op,
                                  const char* op_name,
                                  GraphDef* tensorflow_graph) {
  tensorflow::NodeDef* sparse_to_dense_op = tensorflow_graph->add_node();
  sparse_to_dense_op->set_op(op_name);
  sparse_to_dense_op->set_name(src_op.outputs[0]);
  CHECK_EQ(src_op.inputs.size(), 4);
  for (int i = 0; i < 4; ++i) {
    *sparse_to_dense_op->add_input() = src_op.inputs[i];
  }
  const tensorflow::DataType data_type =
      GetTensorFlowDataType(model, src_op.inputs[3]);
  (*sparse_to_dense_op->mutable_attr())['T'].set_type(data_type);
  const tensorflow::DataType index_type =
      GetTensorFlowDataType(model, src_op.inputs[0]);
  (*sparse_to_dense_op->mutable_attr())['Tindices'].set_type(index_type);
  (*sparse_to_dense_op->mutable_attr())['Tindices'].set_b(
      src_op.validate_indices);
}
    
    bool Converter<Dictionary>::FromV8(v8::Isolate* isolate,
                                   v8::Local<v8::Value> val,
                                   Dictionary* out) {
  if (!val->IsObject() || val->IsFunction())
    return false;
  *out = Dictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
    Arguments::~Arguments() {}
    
      int Length() const { return info_->Length(); }
    
      WrappableBase* object;
  {
    // Don't continue if the constructor throws an exception.
    v8::TryCatch try_catch(isolate);
    object = internal::InvokeFactory(args, factory);
    if (try_catch.HasCaught()) {
      try_catch.ReThrow();
      return;
    }
  }
    
    template <>
struct Converter<Promise> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate, Promise val);
  // TODO(MarshallOfSound): Implement FromV8 to allow promise chaining
  //                        in native land
  // static bool FromV8(v8::Isolate* isolate,
  //                    v8::Local<v8::Value> val,
  //                    Promise* out);
};
    
      found = dict->FindKey('width');
  int width = found ? found->GetInt() : 800;
    
    
    {  return args[0];
}
    
      if (IsSameChromeInstance(pid))
    return true;
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
      Pix* pix() const {
    return pix_;
  }
  void set_pix(Pix* pix) {
    pix_ = pix;
  }
  bool inverse() const {
    return inverse_;
  }
  void set_inverse(bool value) {
    inverse_ = value;
  }
  const DENORM* RootDenorm() const {
    if (predecessor_ != nullptr)
      return predecessor_->RootDenorm();
    return this;
  }
  const DENORM* predecessor() const {
    return predecessor_;
  }
  // Accessors - perhaps should not be needed.
  float x_scale() const {
    return x_scale_;
  }
  float y_scale() const {
    return y_scale_;
  }
  const BLOCK* block() const {
    return block_;
  }
  void set_block(const BLOCK* block) {
    block_ = block;
  }
    
      for (int i = 0; i < top_size; ++i) {
    hdf_blobs_[i] = shared_ptr<Blob<Dtype> >(new Blob<Dtype>());
    // Allow reshape here, as we are loading data not params
    hdf5_load_nd_dataset(file_id, this->layer_param_.top(i).c_str(),
        MIN_DATA_DIM, MAX_DATA_DIM, hdf_blobs_[i].get(), true);
  }
    
    // Get LRN layer according to engine
template <typename Dtype>
shared_ptr<Layer<Dtype> > GetLRNLayer(const LayerParameter& param) {
  LRNParameter_Engine engine = param.lrn_param().engine();
    }
    
    #include 'caffe/layers/clip_layer.hpp'
    
    TYPED_TEST(NeuronLayerTest, TestReLUWithNegativeSlope) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter layer_param;
  CHECK(google::protobuf::TextFormat::ParseFromString(
      'relu_param { negative_slope: 0.01 }', &layer_param));
  ReLULayer<Dtype> layer(layer_param);
  layer.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
  layer.Forward(this->blob_bottom_vec_, this->blob_top_vec_);
  // Now, check values
  const Dtype* bottom_data = this->blob_bottom_->cpu_data();
  const Dtype* top_data = this->blob_top_->cpu_data();
  for (int i = 0; i < this->blob_bottom_->count(); ++i) {
    if (top_data[i] >= 0) {
      EXPECT_FLOAT_EQ(top_data[i], bottom_data[i]);
    } else {
      EXPECT_FLOAT_EQ(top_data[i], bottom_data[i] * 0.01);
    }
  }
}
    
    
    {  /* Compute the global mean pixel value and create a mean image
   * filled with this value. */
  cv::Scalar channel_mean = cv::mean(mean);
  mean_ = cv::Mat(input_geometry_, mean.type(), channel_mean);
}
    
      FLAGS_alsologtostderr = 1;
    
    
    {  int kernel_h_, kernel_w_;
  int stride_h_, stride_w_;
  int pad_h_, pad_w_;
  int channels_;
  int height_, width_;
  int pooled_height_, pooled_width_;
  bool global_pooling_;
  PoolingParameter_RoundMode round_mode_;
  Blob<Dtype> rand_idx_;
  Blob<int> max_idx_;
};
    
      // Getters for boost rng, curand, and cublas handles
  inline static RNG& rng_stream() {
    if (!Get().random_generator_) {
      Get().random_generator_.reset(new RNG());
    }
    return *(Get().random_generator_);
  }
#ifndef CPU_ONLY
  inline static cublasHandle_t cublas_handle() { return Get().cublas_handle_; }
  inline static curandGenerator_t curand_generator() {
    return Get().curand_generator_;
  }
#endif
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
    /// <summary>
/// Invoked when Navigation to a certain page fails
/// </summary>
/// <param name='sender'>The Frame which failed navigation</param>
/// <param name='e'>Details about the navigation failure</param>
void App::OnNavigationFailed(Platform::Object ^ sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^ e)
{
    throw ref new FailureException('Failed to load Page ' + e->SourcePageType.Name);
}

    
        /// <summary>
    /// Calculate the remainder after division, the sign of a result will match the sign of lhs.
    /// </summary>
    /// <remarks>
    /// This function has the same behavior as the standard C/C++ operator '%', to calculate the modulus after division instead, use <see
    /// cref='Rational::operator%'/> instead.
    /// </remarks>
    Rational operator%(Rational lhs, Rational const& rhs)
    {
        lhs %= rhs;
        return lhs;
    }
    
    // returns a new rat structure with the natural log of x->p/x->q
extern void lograt(_Inout_ PRAT* px, int32_t precision);
    
    
    {
    {
    {            CalculatorApp::NetworkManager ^ m_networkManager;
            CalculatorApp::NetworkAccessBehavior m_networkAccessBehavior;
            Windows::Foundation::EventRegistrationToken m_networkBehaviorToken;
            bool m_meteredOverrideSet;
        };
    }
}

    
    void CCalcEngine::InitChopNumbers()
{
    // these rat numbers are set only once and then never change regardless of
    // base or precision changes
    assert(m_chopNumbers.size() >= 4);
    m_chopNumbers[0] = Rational{ rat_qword };
    m_chopNumbers[1] = Rational{ rat_dword };
    m_chopNumbers[2] = Rational{ rat_word };
    m_chopNumbers[3] = Rational{ rat_byte };
    }
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            ImGui_ImplDX12_InvalidateDeviceObjects();
            CleanupRenderTarget();
            ResizeSwapChain(hWnd, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam));
            CreateRenderTarget();
            ImGui_ImplDX12_CreateDeviceObjects();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

    
    
    {    // Render command lists
    // (Because we merged all buffers into a single one, we maintain our own offset into them)
    int global_vtx_offset = 0;
    int global_idx_offset = 0;
    ImVec2 clip_off = draw_data->DisplayPos;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback != NULL)
            {
                // User callback, registered via ImDrawList::AddCallback()
                // (ImDrawCallback_ResetRenderState is a special callback value used by the user to request the renderer to reset render state.)
                if (pcmd->UserCallback == ImDrawCallback_ResetRenderState)
                    ImGui_ImplDX12_SetupRenderState(draw_data, ctx, fr);
                else
                    pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                // Apply Scissor, Bind texture, Draw
                const D3D12_RECT r = { (LONG)(pcmd->ClipRect.x - clip_off.x), (LONG)(pcmd->ClipRect.y - clip_off.y), (LONG)(pcmd->ClipRect.z - clip_off.x), (LONG)(pcmd->ClipRect.w - clip_off.y) };
                ctx->SetGraphicsRootDescriptorTable(1, *(D3D12_GPU_DESCRIPTOR_HANDLE*)&pcmd->TextureId);
                ctx->RSSetScissorRects(1, &r);
                ctx->DrawIndexedInstanced(pcmd->ElemCount, 1, pcmd->IdxOffset + global_idx_offset, pcmd->VtxOffset + global_vtx_offset, 0);
            }
        }
        global_idx_offset += cmd_list->IdxBuffer.Size;
        global_vtx_offset += cmd_list->VtxBuffer.Size;
    }
}
    
        // Backup the DX9 transform (DX9 documentation suggests that it is included in the StateBlock but it doesn't appear to)
    D3DMATRIX last_world, last_view, last_projection;
    g_pd3dDevice->GetTransform(D3DTS_WORLD, &last_world);
    g_pd3dDevice->GetTransform(D3DTS_VIEW, &last_view);
    g_pd3dDevice->GetTransform(D3DTS_PROJECTION, &last_projection);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();

    
    
    {
    {        // If none of the requested image formats could be found, use the first available
        return avail_format[0];
    }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui