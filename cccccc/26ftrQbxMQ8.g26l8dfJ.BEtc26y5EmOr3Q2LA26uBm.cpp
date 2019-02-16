
        
        bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
    bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv);
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
    namespace atom {
    }
    
    #include 'atom/browser/net/about_protocol_handler.h'
    
     private:
  ~URLRequestAboutJob() override;
  void StartAsync();
    
    
    {    return;
  }
    
    
    {  cache_t *cache_out = nullptr;
  cache_create(NameBuf.c_str(), &Attrs, &cache_out);
  assert(cache_out);
  return cache_out;
}
    
      static IAMResult infer(ASTContext &, clang::Sema &, const clang::NamedDecl *,
                         IAMOptions = IAMOptions::getDefault());
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    // Section 6.2: Decoding procedure
    
    void GeneratorContext::ListParsedFiles(
    std::vector<const FileDescriptor*>* output) {
  GOOGLE_LOG(FATAL) << 'This GeneratorContext does not support ListParsedFiles';
}
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    namespace {
// A suffix that will be appended to the file's outer class name if the name
// conflicts with some other types defined in the file.
const char* kOuterClassNameSuffix = 'OuterClass';
    }
    
    void SharedCodeGenerator::GenerateDescriptors(io::Printer* printer) {
  // Embed the descriptor.  We simply serialize the entire FileDescriptorProto
  // and embed it as a string literal, which is parsed and built into real
  // descriptors at initialization time.  We unfortunately have to put it in
  // a string literal, not a byte array, because apparently using a literal
  // byte array causes the Java compiler to generate *instructions* to
  // initialize each and every byte of the array, e.g. as if you typed:
  //   b[0] = 123; b[1] = 456; b[2] = 789;
  // This makes huge bytecode files and can easily hit the compiler's internal
  // code size limits (error 'code to large').  String literals are apparently
  // embedded raw, which is what we want.
  FileDescriptorProto file_proto;
  file_->CopyTo(&file_proto);
    }
    
      input_buffer_length_ = options.buffer_size;
  input_buffer_ = operator new(input_buffer_length_);
  GOOGLE_CHECK(input_buffer_ != NULL);
    
    // ----------------------------------------------------------------------
// NoLocaleStrtod()
//   This code will make you cry.
// ----------------------------------------------------------------------
    
    // -------------------------------------------------------------------
// Helper methods that consume characters.
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    // gflags 2.1 issue: namespace google was changed to gflags without warning.
// Luckily we will be able to use GFLAGS_GFLAGS_H_ to detect if it is version
// 2.1. If yes, we will add a temporary solution to redirect the namespace.
// TODO(Yangqing): Once gflags solves the problem in a more elegant way, let's
// remove the following hack.
#ifndef GFLAGS_GFLAGS_H_
namespace gflags = google;
#endif  // GFLAGS_GFLAGS_H_
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    #include 'caffe/blob.hpp'
#include 'caffe/data_transformer.hpp'
#include 'caffe/internal_thread.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/blocking_queue.hpp'
    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    
    {}  // namespace caffe
    
    // To write value-parameterized tests, first you should define a fixture
// class. It is usually derived from testing::TestWithParam<T> (see below for
// another inheritance scheme that's sometimes useful in more complicated
// class hierarchies), where the type of your parameter values.
// TestWithParam<T> is itself derived from testing::Test. T can be any
// copyable type. If it's a raw pointer, you are responsible for managing the
// lifespan of the pointed values.
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
      // Returns the number of TestPartResult objects in the array.
  int size() const;
    
    // The variables defined in the type-parameterized test macros are
// static as typically these macros are used in a .h file that can be
// #included in multiple translation units linked together.
# define TYPED_TEST_CASE_P(CaseName) \
  static ::testing::internal::TypedTestCasePState \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName)
    
    // Returns a newly created InternalRunDeathTestFlag object with fields
// initialized from the GTEST_FLAG(internal_run_death_test) flag if
// the flag is specified; otherwise returns NULL.
InternalRunDeathTestFlag* ParseInternalRunDeathTestFlag();
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    #include 'gtest/gtest.h'
    
      // Adds an element to the end of the queue.  A copy of the element is
  // created using the copy constructor, and then stored in the queue.
  // Changes made to the element in the queue doesn't affect the source
  // object, and vice versa.
  void Enqueue(const E& element) {
    QueueNode<E>* new_node = new QueueNode<E>(element);
    }
    
    
    {		*a_ppaucEncodingBits = image.GetEncodingBits();
		*a_puiEncodingBitsBytes = image.GetEncodingBitsBytes();
		*a_puiExtendedWidth = image.GetExtendedWidth();
		*a_puiExtendedHeight = image.GetExtendedHeight();
		*a_piEncodingTime_ms = image.GetEncodingTimeMs();
	}
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		const char * GetEncodingModeName(void);
    
    #   define DIVSCALAR(x,k) \
        (x) = S_MUL(  x, (TWID_MAX-((k)>>1))/(k)+1 )
    
    void opus_fft_neon(const kiss_fft_state *st,
                   const kiss_fft_cpx *fin,
                   kiss_fft_cpx *fout);
    
    
/** 16x32 multiply, followed by a 15-bit shift right and 32-bit add.
    b must fit in 31 bits.
    Result fits in 32 bits. */
#undef MAC16_32_Q15
static OPUS_INLINE opus_val32 MAC16_32_Q15_armv5e(opus_val32 c, opus_val16 a,
 opus_val32 b)
{
  int res;
  __asm__(
      '#MAC16_32_Q15\n\t'
      'smlawb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(b<<1), 'r'(a), 'r'(c)
  );
  return res;
}
#define MAC16_32_Q15(c, a, b) (MAC16_32_Q15_armv5e(c, a, b))
    
    #define MULT16_16_Q15(a, b) MULT16_16_Q15_(a, b, __FILE__, __LINE__)
static OPUS_INLINE short MULT16_16_Q15_(int a, int b, char *file, int line)
{
   opus_int64 res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'MULT16_16_Q15: inputs are not short: %d %d in %s: line %d\n', a, b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = ((opus_int64)a)*b;
   res >>= 15;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'MULT16_16_Q15: output is not short: %d in %s: line %d\n', (int)res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=1;
   return res;
}
    
    /* Approximation of 128 * log2() (exact inverse of approx 2^() below) */
/* Convert input to a log scale    */
opus_int32 silk_lin2log(
    const opus_int32            inLin               /* I  input in linear scale                                         */
);
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    
    {    static bool IsVariable(const nnvm::NodePtr& node) {
      AGInfo& info = Get(node);
      return info.grad_req != kNullOp && info.outputs.size() == 1
             && info.out_grads.size() == 1;
    }
  };
  /*! \brief whether operator recording is on. */
  bool is_training() const {
    return is_train_;
  }
  /*! \brief turn on or turn off operator recording for autograd. */
  bool set_is_training(bool is_train) {
      bool old = is_train_;
      is_train_ = is_train;
      return old;
  }
  /*! \brief whether operator recording is on. */
  bool is_recording() const {
    return is_recording_;
  }
  /*! \brief turn on or turn off operator recording for autograd. */
  bool set_is_recording(bool is_recording) {
      bool old = is_recording_;
      is_recording_ = is_recording;
      return old;
  }
  /*! \brief to record operator, return corresponding node. */
  void RecordOp(nnvm::NodeAttrs&& attrs,
                const std::vector<NDArray*>& inputs,
                const std::vector<NDArray*>& outputs,
                const OpStatePtr& state = OpStatePtr(),
                std::vector<bool>* p_save_inputs = nullptr,
                std::vector<bool>* p_save_outputs = nullptr);
  /*! \brief */
  OpStatePtr Invoke(const Context& default_ctx,
                    const nnvm::NodeAttrs& attrs,
                    const std::vector<NDArray*>& inputs,
                    const std::vector<NDArray*>& outputs);
  /*! \brief */
  OpStatePtr InvokeOp(const Context& ctx,
                      const nnvm::NodeAttrs& attrs,
                      const std::vector<NDArray*>& inputs,
                      const std::vector<NDArray*>& outputs,
                      const std::vector<OpReqType>& req,
                      const DispatchMode dispatch_mode,
                      OpStatePtr state = OpStatePtr());
  /*! \brief mark variables for computing gradients. */
  void MarkVariables(const std::vector<NDArray*>& variables,
                     const std::vector<mx_uint>& grad_reqs,
                     const std::vector<NDArray*>& gradients);
  /*! \brief compute the gradient of outputs w.r.t variables. */
  std::vector<NDArray*> Backward(const std::vector<NDArray*>& outputs,
                                 const std::vector<NDArray*>& ograds,
                                 const std::vector<NDArray*>& variables,
                                 bool is_train, bool retain_graph,
                                 bool create_graph);
  /*! \return AutogradRuntime singleton */
  static Imperative* Get();
    
    #ifndef MXNET_RTC_H_
#define MXNET_RTC_H_
#include './base.h'
#if MXNET_USE_CUDA && MXNET_ENABLE_CUDA_RTC
#include <nvrtc.h>
#include <cuda.h>
    
      /**
   * /brief Customize set method for LayerParameter
   * /tparam value string of caffe's layer configuration
   * */
  virtual void Set(void *head, const std::string &value) const {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    MXNET_REGISTER_OP_PROPERTY(CaffeLoss, CaffeLossProp)
.describe('Caffe loss layer')
.add_arguments(CaffeLossParam::__FIELDS__());
    
    #include '../common/utils.h'
    
    class TBlobContainer : public TBlob {
 public:
  TBlobContainer(void)
    : TBlob(), tensor_container_(nullptr) {}
  ~TBlobContainer() {
    if (tensor_container_) {
      release();
    }
  }
  void resize(const TShape &shape, int type_flag) {
    if (tensor_container_) {
      CHECK_EQ(this->type_flag_, type_flag);
      this->shape_ = shape;
      resize();
    } else {
      this->type_flag_ = type_flag;
      this->shape_ = shape;
      create();
    }
  }
    }
    
    
    {
    {
    { private:
  /*! \brief base iterator */
  IIterator<DataInst> *base_;
  /*! \brief data shape */
  std::vector<TShape> shape_;
  /*! \brief unit size */
  std::vector<size_t> unit_size_;
  // initialize the data holder by using from the first batch.
  inline void InitData(const DataInst& first_batch) {
    shape_.resize(first_batch.data.size());
    data_.resize(first_batch.data.size());
    unit_size_.resize(first_batch.data.size());
    for (size_t i = 0; i < first_batch.data.size(); ++i) {
      TShape src_shape = first_batch.data[i].shape_;
      int src_type_flag = first_batch.data[i].type_flag_;
      // init object attributes
      std::vector<index_t> shape_vec;
      shape_vec.push_back(param_.batch_size);
      for (index_t dim = 0; dim < src_shape.ndim(); ++dim) {
        shape_vec.push_back(src_shape[dim]);
      }
      TShape dst_shape(shape_vec.begin(), shape_vec.end());
      shape_[i] = dst_shape;
      data_[i].resize(mshadow::Shape1(dst_shape.Size()), src_type_flag);
      unit_size_[i] = src_shape.Size();
      out_.data.push_back(TBlob(data_[i].dptr_, dst_shape, cpu::kDevMask, src_type_flag, 0));
    }
  }
};  // class BatchLoader
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_ITER_BATCHLOADER_H_

    
      >>> data_iter.reset()
  # To restart the iterator for the second pass of the data
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost