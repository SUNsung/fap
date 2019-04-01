
        
        #include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
      const Dtype* cpu_data() const;
  void set_cpu_data(Dtype* data);
  const int* gpu_shape() const;
  const Dtype* gpu_data() const;
  void set_gpu_data(Dtype* data);
  const Dtype* cpu_diff() const;
  const Dtype* gpu_diff() const;
  Dtype* mutable_cpu_data();
  Dtype* mutable_gpu_data();
  Dtype* mutable_cpu_diff();
  Dtype* mutable_gpu_diff();
  void Update();
  void FromProto(const BlobProto& proto, bool reshape = true);
  void ToProto(BlobProto* proto, bool write_diff = false) const;
    
      // This random number generator facade hides boost and CUDA rng
  // implementation from one another (for cross-platform compatibility).
  class RNG {
   public:
    RNG();
    explicit RNG(unsigned int seed);
    explicit RNG(const RNG&);
    RNG& operator=(const RNG&);
    void* generator();
   private:
    class Generator;
    shared_ptr<Generator> generator_;
  };
    
    A common use case is with the DeconvolutionLayer acting as upsampling.
You can upsample a feature map with shape of (B, C, H, W) by any integer factor
using the following proto.
\code
layer {
  name: 'upsample', type: 'Deconvolution'
  bottom: '{{bottom_name}}' top: '{{top_name}}'
  convolution_param {
    kernel_size: {{2 * factor - factor % 2}} stride: {{factor}}
    num_output: {{C}} group: {{C}}
    pad: {{ceil((factor - 1) / 2.)}}
    weight_filler: { type: 'bilinear' } bias_term: false
  }
  param { lr_mult: 0 decay_mult: 0 }
}
\endcode
Please use this by replacing `{{}}` with your values. By specifying
`num_output: {{C}} group: {{C}}`, it behaves as
channel-wise convolution. The filter shape of this deconvolution layer will be
(C, 1, K, K) where K is `kernel_size`, and this filler will set a (K, K)
interpolation kernel for every channel of the filter identically. The resulting
shape of the top feature map will be (B, C, factor * H, factor * W).
Note that the learning rate and the
weight decay are set to 0 in order to keep coefficient values of bilinear
interpolation unchanged during training. If you apply this to an image, this
operation is equivalent to the following call in Python with Scikit.Image.
\code{.py}
out = skimage.transform.rescale(img, factor, mode='constant', cval=0)
\endcode
 */
template <typename Dtype>
class BilinearFiller : public Filler<Dtype> {
 public:
  explicit BilinearFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK_EQ(blob->num_axes(), 4) << 'Blob must be 4 dim.';
    CHECK_EQ(blob->width(), blob->height()) << 'Filter must be square';
    Dtype* data = blob->mutable_cpu_data();
    int f = ceil(blob->width() / 2.);
    Dtype c = (blob->width() - 1) / (2. * f);
    for (int i = 0; i < blob->count(); ++i) {
      Dtype x = i % blob->width();
      Dtype y = (i / blob->width()) % blob->height();
      data[i] = (1 - fabs(x / f - c)) * (1 - fabs(y / f - c));
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      /**
   * @brief Returns the scalar loss associated with a top blob at a given index.
   */
  inline Dtype loss(const int top_index) const {
    return (loss_.size() > top_index) ? loss_[top_index] : Dtype(0);
  }
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
    #endif  // CAFFE_DATA_LAYERS_HPP_

    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Convolves the input image with a bank of learned filters,
 *        and (optionally) adds biases.
 *
 *   Caffe convolves by reduction to matrix multiplication. This achieves
 *   high-throughput and generality of input and filter dimensions but comes at
 *   the cost of memory for matrices. This makes use of efficiency in BLAS.
 *
 *   The input is 'im2col' transformed to a channel K' x H x W data matrix
 *   for multiplication with the N x K' x H x W filter matrix to yield a
 *   N' x H x W output matrix that is then 'col2im' restored. K' is the
 *   input channel * kernel height * kernel width dimension of the unrolled
 *   inputs so that the im2col matrix has a column for each input region to
 *   be filtered. col2im restores the output spatial structure by rolling up
 *   the output channel N' columns of the output matrix.
 */
template <typename Dtype>
class ConvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  /**
   * @param param provides ConvolutionParameter convolution_param,
   *    with ConvolutionLayer options:
   *  - num_output. The number of filters.
   *  - kernel_size / kernel_h / kernel_w. The filter dimensions, given by
   *  kernel_size for square filters or kernel_h and kernel_w for rectangular
   *  filters.
   *  - stride / stride_h / stride_w (\b optional, default 1). The filter
   *  stride, given by stride_size for equal dimensions or stride_h and stride_w
   *  for different strides. By default the convolution is dense with stride 1.
   *  - pad / pad_h / pad_w (\b optional, default 0). The zero-padding for
   *  convolution, given by pad for equal dimensions or pad_h and pad_w for
   *  different padding. Input padding is computed implicitly instead of
   *  actually padding.
   *  - dilation (\b optional, default 1). The filter
   *  dilation, given by dilation_size for equal dimensions for different
   *  dilation. By default the convolution has dilation 1.
   *  - group (\b optional, default 1). The number of filter groups. Group
   *  convolution is a method for reducing parameterization by selectively
   *  connecting input and output channels. The input and output channel dimensions must be divisible
   *  by the number of groups. For group @f$ \geq 1 @f$, the
   *  convolutional filters' input and output channels are separated s.t. each
   *  group takes 1 / group of the input channels and makes 1 / group of the
   *  output channels. Concretely 4 input channels, 8 output channels, and
   *  2 groups separate input channels 1-2 and output channels 1-4 into the
   *  first group and input channels 3-4 and output channels 5-8 into the second
   *  group.
   *  - bias_term (\b optional, default true). Whether to have a bias.
   *  - engine: convolution has CAFFE (matrix multiplication) and CUDNN (library
   *    kernels + stream parallelism) engines.
   */
  explicit ConvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    class ScriptDetector {
 public:
  ScriptDetector(const GenericVector<int>* allowed_scripts,
                 OSResults* osr, tesseract::Tesseract* tess);
  void detect_blob(BLOB_CHOICE_LIST* scores);
  bool must_stop(int orientation);
 private:
  OSResults* osr_;
  static const char* korean_script_;
  static const char* japanese_script_;
  static const char* fraktur_script_;
  int korean_id_;
  int japanese_id_;
  int katakana_id_;
  int hiragana_id_;
  int han_id_;
  int hangul_id_;
  int latin_id_;
  int fraktur_id_;
  tesseract::Tesseract* tess_;
  const GenericVector<int>* allowed_scripts_;
};
    
      // Factory to build a BoxWord from a TWERD using the DENORMs on each blob to
  // switch back to original image coordinates.
  static BoxWord* CopyFromNormalized(TWERD* tessword);
    
    
    {      result = dir + add.dir;    //let = do the work
      return result;
    }
    DIR128 & operator+= (        //same as +
    const DIR128 & add) {
      *this = dir + add.dir;     //let = do the work
      return *this;
    }
    int8_t get_dir() const {  //access function
      return dir;
    }
    
        int32_t length() const {  //map length
      return len;
    }
    
    // A collection of utility functions for arrays of UNICHAR_IDs that are
// terminated by INVALID_UNICHAR_ID.
class UnicharIdArrayUtils {
 public:
  // Compares two arrays of unichar ids. Returns -1 if the length of array1 is
  // less than length of array2, if any array1[i] is less than array2[i].
  // Returns 0 if the arrays are equal, 1 otherwise.
  // The function assumes that the arrays are terminated by INVALID_UNICHAR_ID.
  static inline int compare(const UNICHAR_ID *ptr1, const UNICHAR_ID *ptr2) {
    for (;;) {
      const UNICHAR_ID val1 = *ptr1++;
      const UNICHAR_ID val2 = *ptr2++;
      if (val1 != val2) {
        if (val1 == INVALID_UNICHAR_ID) return -1;
        if (val2 == INVALID_UNICHAR_ID) return 1;
        if (val1 < val2) return -1;
        return 1;
      }
      if (val1 == INVALID_UNICHAR_ID) return 0;
    }
  }
    }
    
    #include 'errcode.h'
    
    
    {  // We declare (but don't implement) this to prevent the compiler
  // from implementing the assignment operator.
  void operator=(const Message&);
};
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27>
internal::ValueArray27<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26,
    T27> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26, T27 v27) {
  return internal::ValueArray27<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14,
      v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
}
    
    
    {    linked_ptr_internal const* p = ptr;
    while (p->next_ != ptr) p = p->next_;
    p->next_ = this;
    next_ = ptr;
  }
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
        static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
        static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
        static_cast<T>(v36_)};
    return ValuesIn(array);
  }
    
    #ifdef __BORLANDC__
// string.h is not guaranteed to provide strcpy on C++ Builder.
# include <mem.h>
#endif
    
    #ifndef GTEST_SAMPLES_SAMPLE3_INL_H_
#define GTEST_SAMPLES_SAMPLE3_INL_H_
    
    class CensusChannelData : public ChannelData {
 public:
  grpc_error* Init(grpc_channel_element* elem,
                   grpc_channel_element_args* args) override;
};
    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H */

    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    
    {  void ThreadFunc();
  static void ReapThreads(std::list<DynamicThread*>* tlist);
};
    
    #ifndef GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
#define GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
    
    #endif  // GPR_APPLE

    
    uint64_t FiletimeToInt(const FILETIME& ft) {
  ULARGE_INTEGER i;
  i.LowPart = ft.dwLowDateTime;
  i.HighPart = ft.dwHighDateTime;
  return i.QuadPart;
}
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
    
    {      if (contents_.size() < n) {
        n = contents_.size();
        returned_partial_ = true;
      }
      *result = Slice(contents_.data(), n);
      contents_.remove_prefix(n);
      return Status::OK();
    }
    
      Status EmitPhysicalRecord(RecordType type, const char* ptr, size_t length);
    
    class Env;
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    
  bool ReadProtoFromTextContent(const std::string& text,
                                ::google::protobuf::Message* proto) const {
    bool success = google::protobuf::TextFormat::ParseFromString(text, proto);
    return success;
  }
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(req[bs::kOut], kWriteTo);
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 2U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    }
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    
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

    
    /*! \brief interface of objective function */
class ObjFunction {
 public:
  /*! \brief virtual destructor */
  virtual ~ObjFunction() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Configure the objective with the specified parameters.
   * \param args arguments to the objective function.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief Get gradient over each of predictions, given existing information.
   * \param preds prediction of current round
   * \param info information about labels, weights, groups in rank
   * \param iteration current iteration number.
   * \param out_gpair output of get gradient, saves gradient and second order gradient in
   */
  virtual void GetGradient(const HostDeviceVector<bst_float>& preds,
                           const MetaInfo& info,
                           int iteration,
                           HostDeviceVector<GradientPair>* out_gpair) = 0;
    }
    
    namespace xgboost {
namespace obj {
    }
    }
    
      void GetGradient(const HostDeviceVector<bst_float>& preds,
                   const MetaInfo& info,
                   int iter,
                   HostDeviceVector<GradientPair>* out_gpair) override {
    CHECK_EQ(preds.Size(), info.labels_.Size()) << 'label size predict size not match';
    const auto& preds_h = preds.HostVector();
    out_gpair->Resize(preds_h.size());
    std::vector<GradientPair>& gpair = out_gpair->HostVector();
    // quick consistency when group is not available
    std::vector<unsigned> tgptr(2, 0); tgptr[1] = static_cast<unsigned>(info.labels_.Size());
    const std::vector<unsigned> &gptr = info.group_ptr_.size() == 0 ? tgptr : info.group_ptr_;
    CHECK(gptr.size() != 0 && gptr.back() == info.labels_.Size())
        << 'group structure not consistent with #rows';
    }
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
    #pragma once
    
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
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
        // if we didn't get all the way, add the rest to literals
    if (q-start < length)
        q = start+length;
    
    #define DX12_ENABLE_DEBUG_LAYER     0
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
    int main()
{
    // create a JSON value
    const json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }
    
    
    {    std::cout << null << '\n';
    std::cout << *res2.first << ' ' << std::boolalpha << res2.second << '\n';
}

    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    #include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');
    
    
    {  MatrixXd bd_golden(20, 1);
  bd_golden << -0.03, -0.03, -0.02, -0.04, -0.02, -0.04, -0.02, -0.04, -0.02,
      -0.04, -0.02, -0.04, -0.02, -0.04, -0.02, -0.04, -0.02, -0.04, -0.02,
      -0.04;
  EXPECT_EQ(bd.rows(), 20);
  EXPECT_EQ(bd.cols(), 1);
  for (uint32_t i = 0; i < bd.rows(); ++i) {
    EXPECT_DOUBLE_EQ(bd(i, 0), bd_golden(i, 0));
  }
}
    
      const auto mat = kernel.kernel_matrix();
  const auto offset = kernel.offset_matrix();
    
    
    {  acc.Parse(bytes, length, &chassis_detail);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().commanded_value(),
                   0.772);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().output_value(), 4.37);
}