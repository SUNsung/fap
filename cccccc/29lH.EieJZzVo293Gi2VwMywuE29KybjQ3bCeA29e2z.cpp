
        
          // MinTopBlobs==1 guarantees at least one top blob
  CHECK_GE(hdf_blobs_[0]->num_axes(), 1) << 'Input must have at least 1 axis.';
  const int num = hdf_blobs_[0]->shape(0);
  for (int i = 1; i < top_size; ++i) {
    CHECK_EQ(hdf_blobs_[i]->shape(0), num);
  }
  // Default to identity permutation.
  data_permutation_.clear();
  data_permutation_.resize(hdf_blobs_[0]->shape(0));
  for (int i = 0; i < hdf_blobs_[0]->shape(0); i++)
    data_permutation_[i] = i;
    
    namespace caffe {
    }
    
    // Verifies format of data stored in HDF5 file and reshapes blob accordingly.
template <typename Dtype>
void hdf5_load_nd_dataset_helper(
    hid_t file_id, const char* dataset_name_, int min_dim, int max_dim,
    Blob<Dtype>* blob, bool reshape) {
  // Verify that the dataset exists.
  CHECK(H5LTfind_dataset(file_id, dataset_name_))
      << 'Failed to find HDF5 dataset ' << dataset_name_;
  // Verify that the number of dimensions is in the accepted range.
  herr_t status;
  int ndims;
  status = H5LTget_dataset_ndims(file_id, dataset_name_, &ndims);
  CHECK_GE(status, 0) << 'Failed to get dataset ndims for ' << dataset_name_;
  CHECK_GE(ndims, min_dim);
  CHECK_LE(ndims, max_dim);
    }
    
      Dtype min = this->layer_param_.clip_param().min();
  Dtype max = this->layer_param_.clip_param().max();
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  const int num_output = this->layer_param_.inner_product_param().num_output();
  bias_term_ = this->layer_param_.inner_product_param().bias_term();
  transpose_ = this->layer_param_.inner_product_param().transpose();
  N_ = num_output;
  const int axis = bottom[0]->CanonicalAxisIndex(
      this->layer_param_.inner_product_param().axis());
  // Dimensions starting from 'axis' are 'flattened' into a single
  // length K_ vector. For example, if bottom[0]'s shape is (N, C, H, W),
  // and axis == 1, N inner products with dimension CHW are performed.
  K_ = bottom[0]->count(axis);
  // Check if we need to set up the weights
  if (this->blobs_.size() > 0) {
    LOG(INFO) << 'Skipping parameter initialization';
  } else {
    if (bias_term_) {
      this->blobs_.resize(2);
    } else {
      this->blobs_.resize(1);
    }
    // Initialize the weights
    vector<int> weight_shape(2);
    if (transpose_) {
      weight_shape[0] = K_;
      weight_shape[1] = N_;
    } else {
      weight_shape[0] = N_;
      weight_shape[1] = K_;
    }
    this->blobs_[0].reset(new Blob<Dtype>(weight_shape));
    // fill the weights
    shared_ptr<Filler<Dtype> > weight_filler(GetFiller<Dtype>(
        this->layer_param_.inner_product_param().weight_filler()));
    weight_filler->Fill(this->blobs_[0].get());
    // If necessary, initialize and fill the bias term
    if (bias_term_) {
      vector<int> bias_shape(1, N_);
      this->blobs_[1].reset(new Blob<Dtype>(bias_shape));
      shared_ptr<Filler<Dtype> > bias_filler(GetFiller<Dtype>(
          this->layer_param_.inner_product_param().bias_filler()));
      bias_filler->Fill(this->blobs_[1].get());
    }
  }  // parameter initialization
  this->param_propagate_down_.resize(this->blobs_.size(), true);
}
    
    void Net_SetInputArrays(Net<Dtype>* net, bp::object data_obj,
    bp::object labels_obj) {
  // check that this network has an input MemoryDataLayer
  shared_ptr<MemoryDataLayer<Dtype> > md_layer =
    boost::dynamic_pointer_cast<MemoryDataLayer<Dtype> >(net->layers()[0]);
  if (!md_layer) {
    throw std::runtime_error('set_input_arrays may only be called if the'
        ' first layer is a MemoryDataLayer');
  }
    }
    
    template <typename Dtype>
void Net<Dtype>::BackwardDebugInfo(const int layer_id) {
  const vector<Blob<Dtype>*>& bottom_vec = bottom_vecs_[layer_id];
  for (int bottom_id = 0; bottom_id < bottom_vec.size(); ++bottom_id) {
    if (!bottom_need_backward_[layer_id][bottom_id]) { continue; }
    const Blob<Dtype>& blob = *bottom_vec[bottom_id];
    const string& blob_name = blob_names_[bottom_id_vecs_[layer_id][bottom_id]];
    const Dtype diff_abs_val_mean = blob.asum_diff() / blob.count();
    LOG_IF(INFO, Caffe::root_solver())
        << '    [Backward] '
        << 'Layer ' << layer_names_[layer_id]
        << ', bottom blob ' << blob_name
        << ' diff: ' << diff_abs_val_mean;
  }
  for (int param_id = 0; param_id < layers_[layer_id]->blobs().size();
       ++param_id) {
    if (!layers_[layer_id]->param_propagate_down(param_id)) { continue; }
    const Blob<Dtype>& blob = *layers_[layer_id]->blobs()[param_id];
    const Dtype diff_abs_val_mean = blob.asum_diff() / blob.count();
    LOG_IF(INFO, Caffe::root_solver())
        << '    [Backward] '
        << 'Layer ' << layer_names_[layer_id]
        << ', param blob ' << param_id
        << ' diff: ' << diff_abs_val_mean;
  }
}
    
    template<typename Dtype>
SolverAction::Enum Solver<Dtype>::GetRequestedAction() {
  if (action_request_function_) {
    // If the external request function has been set, call it.
    return action_request_function_();
  }
  return SolverAction::NONE;
}
    
      /* The format of the mean file is planar 32-bit float BGR or grayscale. */
  std::vector<cv::Mat> channels;
  float* data = mean_blob.mutable_cpu_data();
  for (int i = 0; i < num_channels_; ++i) {
    /* Extract an individual channel. */
    cv::Mat channel(mean_blob.height(), mean_blob.width(), CV_32FC1, data);
    channels.push_back(channel);
    data += mean_blob.height() * mean_blob.width();
  }
    
    /// @brief Fills a Blob with constant or randomly-generated data.
template <typename Dtype>
class Filler {
 public:
  explicit Filler(const FillerParameter& param) : filler_param_(param) {}
  virtual ~Filler() {}
  virtual void Fill(Blob<Dtype>* blob) = 0;
 protected:
  FillerParameter filler_param_;
};  // class Filler
    
    void CCalcEngine::DisplayAnnounceBinaryOperator()
{
    // If m_pCalcDisplay is null, this is not a high priority function
    // and should not be the reason we crash.
    if (m_pCalcDisplay != nullptr)
    {
        m_pCalcDisplay->BinaryOperatorReceived();
    }
}
    
    unsigned int CalculatorHistory::AddToHistory(
    _In_ shared_ptr<CalculatorVector<pair<wstring, int>>> const& tokens,
    _In_ shared_ptr<CalculatorVector<shared_ptr<IExpressionCommand>>> const& commands,
    _In_ wstring_view result)
{
    unsigned int addedIndex;
    wstring generatedExpression;
    shared_ptr<HISTORYITEM> spHistoryItem = make_shared<HISTORYITEM>();
    }
    
                // IObservableVector<Object^>
            event Windows::Foundation::Collections::VectorChangedEventHandler<Platform::Object^>^ VectorChanged
        {
            virtual WF::EventRegistrationToken add(Windows::Foundation::Collections::VectorChangedEventHandler<Platform::Object^>^ handler) = Windows::Foundation::Collections::IObservableVector<Platform::Object^>::VectorChanged::add
            {
                return m_vectorChanged += handler;
            }
            virtual void remove(WF::EventRegistrationToken token) = Windows::Foundation::Collections::IObservableVector<Platform::Object^>::VectorChanged::remove
            {
                m_vectorChanged -= token;
            }
        }
    
    NarratorAnnouncement::NarratorAnnouncement(
    String ^ announcement,
    String ^ activityId,
    AutomationNotificationKind kind,
    AutomationNotificationProcessing processing)
    : m_announcement(announcement)
    , m_activityId(activityId)
    , m_kind(kind)
    , m_processing(processing)
{
}
    
    template<typename xpu>
inline void MomentsBackward(const nnvm::NodeAttrs& attrs,
                            const OpContext& ctx,
                            const std::vector<TBlob>& inputs,
                            const std::vector<OpReqType>& req,
                            const std::vector<TBlob>& outputs) {
  using namespace mshadow;
  using namespace mshadow_op;
  using namespace mxnet_op;
    }
    
    Example:
    
    NNVM_REGISTER_OP(multi_all_finite)
.describe(R'code(Check if all the float numbers in all the arrays are finite (used for AMP)
)code' ADD_FILELINE)
.set_num_inputs([](const nnvm::NodeAttrs& attrs) {
    const MultiAllFiniteParam& param = dmlc::get<MultiAllFiniteParam>(attrs.parsed);
    return static_cast<uint32_t>(param.num_arrays);
  })
.set_num_outputs(1)
.set_attr_parser(ParamParser<MultiAllFiniteParam>)
.set_attr<mxnet::FInferShape>('FInferShape',
  [](const nnvm::NodeAttrs& attrs,
     std::vector<TShape> *in_attrs,
     std::vector<TShape> *out_attrs) {
    (*out_attrs)[0] = TShape({1});
    return true;
  })
.set_attr<nnvm::FInferType>('FInferType',
  [](const nnvm::NodeAttrs& attrs,
     std::vector<int> *in_attrs,
     std::vector<int> *out_attrs) {
    (*out_attrs)[0] = mshadow::kFloat32;
    return true;
  })
.set_attr<nnvm::FListInputNames>('FListInputNames',
  [](const NodeAttrs& attrs) {
    uint32_t num_args = dmlc::get<MultiAllFiniteParam>(attrs.parsed).num_arrays;
    std::vector<std::string> ret;
    for (uint32_t i = 0; i < num_args; ++i) {
      ret.push_back(std::string('array_') + std::to_string(i));
    }
    return ret;
  })
.add_argument('data', 'NDArray-or-Symbol[]', 'Arrays')
.add_arguments(MultiAllFiniteParam::__FIELDS__())
.set_attr<FCompute>('FCompute<cpu>', MultiAllFiniteCPU);
    
    // dequantize unsigned int8 to float32
struct dequantize_unsigned {
  template<typename DstDType, typename SrcDType>
  MSHADOW_XINLINE static void Map(int i, DstDType *out, const SrcDType *in,
                                  const float *imin_range, const float *imax_range,
                                  const float imin_limit, const float imax_limit) {
    const float scale = (*imax_range - *imin_range) / (imax_limit - imin_limit);
    out[i] = static_cast<DstDType>(in[i] * scale + *imin_range);
  }
};
    
    void GPUPooledRoundedStorageManager::Alloc(Storage::Handle* handle) {
  // Set dptr to nullptr when handle size is 0.
  if (handle->size == 0) {
    handle->dptr = nullptr;
    return;
  }
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file l2_normalization_op-inl.h
 * \brief instance l2 Normalization op
*/
#ifndef MXNET_OPERATOR_L2_NORMALIZATION_INL_H_
#define MXNET_OPERATOR_L2_NORMALIZATION_INL_H_
    
    
    {}  // namespace

    
    TEST_F(ExtensionsCallbackRealTest, TextDiacriticSensitiveAndCaseSensitiveTrue) {
    ASSERT_OK(dbtests::createIndex(&_opCtx,
                                   _nss.ns(),
                                   BSON('a'
                                        << 'text'),
                                   false));  // isUnique
    }
    
    UnicodeString &ScientificNumberFormatter::SuperscriptStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets &staticSets,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    FieldPosition fp;
    int32_t copyFromOffset = 0;
    while (fpi.next(fp)) {
        switch (fp.getField()) {
        case UNUM_EXPONENT_SYMBOL_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(preExponent);
            break;
        case UNUM_EXPONENT_SIGN_FIELD:
            {
                int32_t beginIndex = fp.getBeginIndex();
                int32_t endIndex = fp.getEndIndex();
                UChar32 aChar = original.char32At(beginIndex);
                if (staticSets.fMinusSigns->contains(aChar)) {
                    appendTo.append(
                            original,
                            copyFromOffset,
                            beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptMinusSign);
                } else if (staticSets.fPlusSigns->contains(aChar)) {
                    appendTo.append(
                           original,
                           copyFromOffset,
                           beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptPlusSign);
                } else {
                    status = U_INVALID_CHAR_FOUND;
                    return appendTo;
                }
                copyFromOffset = endIndex;
            }
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            if (!copyAsSuperscript(
                    original,
                    fp.getBeginIndex(),
                    fp.getEndIndex(),
                    appendTo,
                    status)) {
              return appendTo;
            }
            copyFromOffset = fp.getEndIndex();
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    #ifndef __SCRIPTSET_H__
#define __SCRIPTSET_H__
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6,   // Styling: Should we slant the font, emulating italic style?
        Monochrome      = 1 << 7    // Disable anti-aliasing. Combine this with MonoHinting for best results!
    };
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    // Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();

    
    void    ImGui_ImplOpenGL2_NewFrame()
{
    if (!g_FontTexture)
        ImGui_ImplOpenGL2_CreateDeviceObjects();
}
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    
    {
    {
    {      case AlignContext::Dead:
        if (bytes > 2) {
          a.ud2();
          bytes -= 2;
        }
        if (bytes > 0) {
          a.emitInt3s(bytes);
        }
        return;
    }
    not_reached();
  }
};
    
    ///////////////////////////////////////////////////////////////////////////////
    
    int64_t HHVM_FUNCTION(stream_set_write_buffer,
                      const Resource& stream,
                      int buffer);
    
      for (size_t i = 0; i < numBCs; i++) {
    if ((bcMap[i].aStart       <= addr && bcMap[i+1].aStart       > addr) ||
        (bcMap[i].acoldStart   <= addr && bcMap[i+1].acoldStart   > addr) ||
        (bcMap[i].afrozenStart <= addr && bcMap[i+1].afrozenStart > addr)) {
      auto* unit = g_repo->getUnit(bcMap[i].sha1);
      always_assert(unit);
      return {true, (ExtOpcode)unit->getOp(bcMap[i].bcStart)};
    }
  }
    
      // Copy out in network byte order.
  void nbo(void* blob) const {
    for (auto i = 0; i < kQNumWords; i++) {
      reinterpret_cast<uint32_t*>(blob)[i] = htonl(q.at(i));
    }
  }