
        
        
    {PyObject* NewMessageOneofsByName(const Descriptor* descriptor);
PyObject* NewMessageOneofsSeq(const Descriptor* descriptor);
}  // namespace message_descriptor
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedPrimitiveFieldGenerator);
};
    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateNonNestedInitializationCode(io::Printer* printer);
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    
    {}  // namespace caffe
    
    #include <vector>
    
     protected:
  /// @copydoc ContrastiveLossLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
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
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    #endif  // CAFFE_ELTWISE_LAYER_HPP_

    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29>
internal::ValueArray29<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26, T27 v27, T28 v28, T29 v29) {
  return internal::ValueArray29<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12,
      v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26,
      v27, v28, v29);
}
    
    #if !GTEST_OS_SYMBIAN
# include <utility>
#endif
    
    // Used to print an STL-style container when the user doesn't define
// a PrintTo() for it.
template <typename C>
void DefaultPrintTo(IsContainer /* dummy */,
                    false_type /* is not a pointer */,
                    const C& container, ::std::ostream* os) {
  const size_t kMaxCount = 32;  // The maximum number of elements to print.
  *os << '{';
  size_t count = 0;
  for (typename C::const_iterator it = container.begin();
       it != container.end(); ++it, ++count) {
    if (count > 0) {
      *os << ',';
      if (count == kMaxCount) {  // Enough has been printed.
        *os << ' ...';
        break;
      }
    }
    *os << ' ';
    // We cannot call PrintTo(*it, os) here as PrintTo() doesn't
    // handle *it being a native array.
    internal::UniversalPrint(*it, os);
  }
    }
    }
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
    // Type and function utilities for implementing parameterized tests.
// This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently Google Test supports at most $n arguments in Values,
// and at most $maxtuple arguments in Combine. Please contact
// googletestframework@googlegroups.com if you need more.
// Please note that the number of arguments to Combine is limited
// by the maximum arity of the implementation of tr1::tuple which is
// currently set at $maxtuple.
    
    // isspace(int ch) and friends accept an unsigned char or EOF.  char
// may be signed, depending on the compiler (or compiler flags).
// Therefore we need to cast a char to unsigned char before calling
// isspace(), etc.
    
    #include <algorithm>
    
    
    {
    {    // Adds the leak checker to the end of the test event listener list,
    // after the default text output printer and the default XML report
    // generator.
    //
    // The order is important - it ensures that failures generated in the
    // leak checker's OnTestEnd() method are processed by the text and XML
    // printers *before* their OnTestEnd() methods are called, such that
    // they are attributed to the right test. Remember that a listener
    // receives an OnXyzStart event *after* listeners preceding it in the
    // list received that event, and receives an OnXyzEnd event *before*
    // listeners preceding it.
    //
    // We don't need to worry about deleting the new listener later, as
    // Google Test will do it.
    listeners.Append(new LeakChecker);
  }
  return RUN_ALL_TESTS();
}

    
      class MatchGroundTruth : public QuickTest ,
      public ::testing::WithParamInterface<const char*> {
  };
  
  TEST_P(MatchGroundTruth, FastPhototestOCR) {
    OCRTester(TESTING_DIR '/phototest.tif',
              TESTING_DIR '/phototest.txt',
              TESSDATA_DIR '_fast', GetParam());
  }
  
  INSTANTIATE_TEST_CASE_P( EngLatinDevaArabLang, MatchGroundTruth, 
                        ::testing::Values('eng', 'script/Latin', 'script/Devanagari', 'script/Arabic') );
    
      // Expects the appropriate results from the compressed_  unicharset_.
  void ExpectCorrect(const string& lang) {
    // Count the number of times each code is used in each element of
    // RecodedCharID.
    RecodedCharID zeros;
    for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) zeros.Set(i, 0);
    int code_range = compressed_.code_range();
    std::vector<RecodedCharID> times_seen(code_range, zeros);
    for (int u = 0; u <= unicharset_.size(); ++u) {
      if (u != UNICHAR_SPACE && u != null_char_ &&
          (u == unicharset_.size() || (unicharset_.has_special_codes() &&
                                       u < SPECIAL_UNICHAR_CODES_COUNT))) {
        continue;  // Not used so not encoded.
      }
      RecodedCharID code;
      int len = compressed_.EncodeUnichar(u, &code);
      // Check round-trip encoding.
      int unichar_id;
      GenericVector<UNICHAR_ID> normed_ids;
      if (u == null_char_ || u == unicharset_.size()) {
        unichar_id = null_char_;
      } else {
        unichar_id = u;
      }
      EXPECT_EQ(unichar_id, compressed_.DecodeUnichar(code));
      // Check that the codes are valid.
      for (int i = 0; i < len; ++i) {
        int code_val = code(i);
        EXPECT_GE(code_val, 0);
        EXPECT_LT(code_val, code_range);
        times_seen[code_val].Set(i, times_seen[code_val](i) + 1);
      }
    }
    // Check that each code is used in at least one position.
    for (int c = 0; c < code_range; ++c) {
      int num_used = 0;
      for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) {
        if (times_seen[c](i) != 0) ++num_used;
      }
      EXPECT_GE(num_used, 1) << 'c=' << c << '/' << code_range;
    }
    // Check that GetNextCodes/GetFinalCodes lists match the times_seen,
    // and create valid codes.
    RecodedCharID code;
    CheckCodeExtensions(code, times_seen);
    // Finally, we achieved all that using a codebook < 10% of the size of
    // the original unicharset, for CK or Indic, and 20% with J, but just
    // no bigger for all others.
    if (IsCJKLang(lang) || IsIndicLang(lang)) {
      EXPECT_LT(code_range, unicharset_.size() / (lang == 'jpn' ? 5 : 10));
    } else {
      EXPECT_LE(code_range, unicharset_.size() + 1);
    }
    LOG(INFO) << 'Compressed unicharset of ' << unicharset_.size() << ' to '
              << code_range;
  }
  // Checks for extensions of the current code that either finish a code, or
  // extend it and checks those extensions recursively.
  void CheckCodeExtensions(const RecodedCharID& code,
                           const std::vector<RecodedCharID>& times_seen) {
    RecodedCharID extended = code;
    int length = code.length();
    const GenericVector<int>* final_codes = compressed_.GetFinalCodes(code);
    if (final_codes != nullptr) {
      for (int i = 0; i < final_codes->size(); ++i) {
        int ending = (*final_codes)[i];
        EXPECT_GT(times_seen[ending](length), 0);
        extended.Set(length, ending);
        int unichar_id = compressed_.DecodeUnichar(extended);
        EXPECT_NE(INVALID_UNICHAR_ID, unichar_id);
      }
    }
    const GenericVector<int>* next_codes = compressed_.GetNextCodes(code);
    if (next_codes != nullptr) {
      for (int i = 0; i < next_codes->size(); ++i) {
        int extension = (*next_codes)[i];
        EXPECT_GT(times_seen[extension](length), 0);
        extended.Set(length, extension);
        CheckCodeExtensions(extended, times_seen);
      }
    }
  }
    
    // dims=[5, 4, 3, 2]->[4, 3, 5, 2]
TEST_F(MatrixTest, RotatingTranspose_0_2) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 0, 2, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][24, 25][48, 49][72, 73][96, 97]]
  //                 [[2, 3][26, 27][50, 51][74, 75][98, 99]]
  //                 [[4, 5][28, 29][52, 53][76, 77][100, 101]]]
  //                [[[6, 7]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(24, m(1, 0));
  EXPECT_EQ(25, m(1, 1));
  EXPECT_EQ(96, m(4, 0));
  EXPECT_EQ(97, m(4, 1));
  EXPECT_EQ(2, m(5, 0));
  EXPECT_EQ(6, m(15, 0));
}
    
    // C++ Implementation of the Softmax (output) class from lstm.py.
class FullyConnected : public Network {
 public:
  FullyConnected(const STRING& name, int ni, int no, NetworkType type);
  virtual ~FullyConnected();
    }
    
      AppendString(tsv.get());
    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
      // Process all the words on this page.
  TBOX tbox;  // tesseract-identified box
  TBOX bbox;  // box from the box file
  bool keep_going;
  int line_number = 0;
  int examined_words = 0;
  do {
    keep_going = read_t(&page_res_it, &tbox);
    keep_going &= ReadNextBox(applybox_page, &line_number, box_file, &label,
                              &bbox);
    // Align bottom left points of the TBOXes.
    while (keep_going &&
           !NearlyEqual<int>(tbox.bottom(), bbox.bottom(), kMaxBoxEdgeDiff)) {
      if (bbox.bottom() < tbox.bottom()) {
        page_res_it.forward();
        keep_going = read_t(&page_res_it, &tbox);
      } else {
        keep_going = ReadNextBox(applybox_page, &line_number, box_file, &label,
                                 &bbox);
      }
    }
    while (keep_going &&
           !NearlyEqual<int>(tbox.left(), bbox.left(), kMaxBoxEdgeDiff)) {
      if (bbox.left() > tbox.left()) {
        page_res_it.forward();
        keep_going = read_t(&page_res_it, &tbox);
      } else {
        keep_going = ReadNextBox(applybox_page, &line_number, box_file, &label,
                                 &bbox);
      }
    }
    // OCR the word if top right points of the TBOXes are similar.
    if (keep_going &&
        NearlyEqual<int>(tbox.right(), bbox.right(), kMaxBoxEdgeDiff) &&
        NearlyEqual<int>(tbox.top(), bbox.top(), kMaxBoxEdgeDiff)) {
        ambigs_classify_and_output(label.string(), &page_res_it, output_file);
        examined_words++;
    }
    page_res_it.forward();
  } while (keep_going);
    
            // Operator name.
        std::string m_name;
        int m_sinceVersion = 1;
        std::string m_domain = '';
    
    namespace ONNXIR
{
    namespace Utils
    {
        class TensorUtils
        {
        public:
#define DEFINE_UNPACK_TENSOR(T, Type, fieldName, fieldSize)                                                                    \
    static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/T* p_data, int64_t p_expected_size)           \
    {                                                                                                                          \
        if (Type != p_tensor.data_type()                                                                                       \
            || nullptr == p_data)                                                                                              \
        {                                                                                                                      \
            return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::INVALID_ARGUMENT);                        \
        }                                                                                                                      \
        if (p_tensor.has_raw_data())                                                                                           \
        {                                                                                                                      \
            if (p_tensor.raw_data().size() != (p_expected_size) * sizeof(T))                                                   \
                return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::FAIL,                                 \
                                               'UnpackTensor: the pre-allocate size does not match the raw data size');        \
            UnpackTensorWithRawData(p_tensor, p_data);                                                                         \
            return Common::Status::OK();                                                                                       \
        }                                                                                                                      \
        if (p_tensor.fieldSize() != p_expected_size)                                                                           \
            return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::FAIL,                                     \
                                            'UnpackTensor: the pre-allocate size does not match the size in proto');           \
        for (auto elem : p_tensor.fieldName())                                                                                 \
        {                                                                                                                      \
            *p_data++ = static_cast<T>(elem);                                                                                  \
        }                                                                                                                      \
        return Common::Status::OK();                                                                                           \
    }
    }
    }
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(PRelu)
        .Description('PRelu takes input data (Tensor<T>) and slope tensor as input, '
            'and produces one output data (Tensor<T>) where the function '
            '`f(x) = slope * x for x < 0`, `f(x) = x for x >= 0`., is applied to the '
            'data tensor elementwise.')
        .Input('X', 'Input tensor', 'T')
        .Input('Slope', 'Slope tensor. If `Slope` is of size 1, the value is shared'
            'across different channels', 'T')
        .Output('Y', 'The PRelu value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
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
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorInputX() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Input('X',
                'The input sequences packed (and potentially padded) into one 3-D '
                'tensor with the shape of `[seq_length, batch_size, input_size]`.', 'T');
            schema.TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
                'Constrain input and output types to float tensors.');
        };
    }
    
    
    REGISTER_OPERATOR_SCHEMA(TreeEnsembleRegressor)
        .SetDomain(c_mlDomain)
        .Input('X', 'Input N,F', 'T')
        .Output('Y', 'NxE floats', 'tensor(float)')
        .Description(R'DOC(
            Tree Ensemble regressor.  Returns the regressed values for each input in N.
            All args with nodes_ are fields of a tuple of tree nodes, and
            it is assumed they are the same length, and an index i will decode the
            tuple across these inputs.  Each node id can appear only once
            for each tree id.
            All fields prefixed with target_ are tuples of votes at the leaves.
            A leaf may have multiple votes, where each vote is weighted by
            the associated target_weights index.
            All trees must have their node ids start at 0 and increment by 1.
            Mode enum is BRANCH_LEQ, BRANCH_LT, BRANCH_GTE, BRANCH_GT, BRANCH_EQ, BRANCH_NEQ, LEAF
            )DOC')
        .TypeConstraint('T', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .Attr('nodes_treeids', 'tree id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_nodeids', 'node id for this node, node ids may restart at zero for each tree (but not required).', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_featureids', 'feature id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_values', 'thresholds to do the splitting on for this node.', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_hitrates', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_modes', 'enum of behavior for this node.  enum 'BRANCH_LEQ', 'BRANCH_LT', 'BRANCH_GTE', 'BRANCH_GT', 'BRANCH_EQ', 'BRANCH_NEQ', 'LEAF'', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('nodes_truenodeids', 'child node if expression is true', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_falsenodeids', 'child node if expression is false', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_missing_value_tracks_true', 'for each node, decide if the value is missing (nan) then use true branch, this field can be left unset and will assume false for all nodes', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_treeids', 'tree that this node is in', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_nodeids', 'node id that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_ids', 'index of the class list that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_weights', 'the weight for the class in target_id', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('n_targets', 'number of regression targets', AttrType::AttributeProto_AttributeType_INT)
        .Attr('post_transform', 'post eval transform for score, enum 'NONE', 'SOFTMAX', 'LOGISTIC', 'SOFTMAX_ZERO', 'PROBIT'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('aggregate_function', 'post eval transform for score,  enum 'AVERAGE', 'SUM', 'MIN', 'MAX'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('base_values', 'base values for regression, added to final score, size must be the same as n_outputs or can be left unassigned (assumed 0)', AttrType::AttributeProto_AttributeType_FLOATS);
    
    FunctionPtr CreateRNN(const ONNXIR::Node *node, const std::vector<Variable> &inputs, const std::string &direction,
    const std::vector<string> &activations, const std::vector<float> &activation_alpha, const std::vector<float> &activation_beta);
    
        // unlink from all node-group sets
    for (auto groupIter : GetAllNodeGroups())
    {
        auto search = std::find(groupIter->begin(), groupIter->end(), nodeToDelete);
        if (search != groupIter->end())
            groupIter->erase(search);
    }
    
        // element accessors
    template <typename T>
    T& operator[](size_t index)
    {
        return *(T*) GetElement(index);
    }
    template <typename T>
    T* GetElement(size_t index) const
    {
        return (T*) (GetElement(index));
    }
    virtual void* GetElement(size_t index) const
    {
        return (char*) m_elementBuffer + index * GetElementSize();
    }
    virtual char* EnsureElements(size_t element, size_t bytesRequested = 0);
    
    BOOST_FIXTURE_TEST_CASE(CPUMatrixDenseTimesSparseAsSparse, RandomSeedFixture)
{
#if 0
// TODO commented temporarily since 'IsEqualTo' is not yet implemented
                    Matrix<float> mAdense(CPUDEVICE);
                    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
    void GPUDataTransferer::CopyGPUToCPUAsync(void* gpuBuffer, size_t totalSize, void* cpuBuffer)
{
    m_inner->CopyGPUToCPUAsync(gpuBuffer, 1, totalSize, cpuBuffer);
    m_inner->RecordGPUToCPUCopy();
}
    
      // Delete the specified 'file' from the specified 'level'.
  void DeleteFile(int level, uint64_t file) {
    deleted_files_.insert(std::make_pair(level, file));
  }
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    
    {  // Check that deleting works.
  ASSERT_TRUE(!env_->DeleteFile('/dir/non_existent').ok());
  ASSERT_OK(env_->DeleteFile('/dir/g'));
  ASSERT_TRUE(!env_->FileExists('/dir/g'));
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(0, children.size());
  ASSERT_OK(env_->DeleteDir('/dir'));
}
    
    namespace leveldb {
    }
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    const double Histogram::kBucketLimit[kNumBuckets] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 25, 30, 35, 40, 45,
  50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200, 250, 300, 350, 400, 450,
  500, 600, 700, 800, 900, 1000, 1200, 1400, 1600, 1800, 2000, 2500, 3000,
  3500, 4000, 4500, 5000, 6000, 7000, 8000, 9000, 10000, 12000, 14000,
  16000, 18000, 20000, 25000, 30000, 35000, 40000, 45000, 50000, 60000,
  70000, 80000, 90000, 100000, 120000, 140000, 160000, 180000, 200000,
  250000, 300000, 350000, 400000, 450000, 500000, 600000, 700000, 800000,
  900000, 1000000, 1200000, 1400000, 1600000, 1800000, 2000000, 2500000,
  3000000, 3500000, 4000000, 4500000, 5000000, 6000000, 7000000, 8000000,
  9000000, 10000000, 12000000, 14000000, 16000000, 18000000, 20000000,
  25000000, 30000000, 35000000, 40000000, 45000000, 50000000, 60000000,
  70000000, 80000000, 90000000, 100000000, 120000000, 140000000, 160000000,
  180000000, 200000000, 250000000, 300000000, 350000000, 400000000,
  450000000, 500000000, 600000000, 700000000, 800000000, 900000000,
  1000000000, 1200000000, 1400000000, 1600000000, 1800000000, 2000000000,
  2500000000.0, 3000000000.0, 3500000000.0, 4000000000.0, 4500000000.0,
  5000000000.0, 6000000000.0, 7000000000.0, 8000000000.0, 9000000000.0,
  1e200,
};
    
      uint64_t Size(const Slice& start, const Slice& limit) {
    Range r(start, limit);
    uint64_t size;
    db_->GetApproximateSizes(&r, 1, &size);
    return size;
  }
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
      // Return true iff no entries have been added since the last Reset()
  bool empty() const {
    return buffer_.empty();
  }
    
     private:
  friend class EventFactory;
  friend class EventPublisherPlugin;
    
    #include <map>
#include <functional>
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
    std::string platformStrerr(int errnum) {
  std::vector<char> buffer;
  buffer.assign(MAX_BUFFER_SIZE, '\0');
    }
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    #include <string>
    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
    void AnnounceList::moveToCompletedAllowedTier()
{
  auto itr = find_wrap_if(std::begin(tiers_), std::end(tiers_), currentTier_,
                          FindCompletedAllowedTier());
  setCurrentTier(std::move(itr));
}
    
      ~AnnounceTier();
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    std::unique_ptr<AuthConfig> AuthConfig::create(std::string user,
                                               std::string password)
{
  if (user.empty()) {
    return nullptr;
  }
  else {
    return make_unique<AuthConfig>(std::move(user), std::move(password));
  }
}
    
    
    {}  // namespace fuzzer
    
    #endif

    
    
    {} // namespace fuzzer
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = ::NAME;                                                         \
  CheckFnPtr((void *)::NAME, #NAME, WARN);
    }
    
    void ListFilesInDirRecursive(const std::string &Dir, long *Epoch,
                             std::vector<std::string> *V, bool TopDir) {
  auto E = GetEpoch(Dir);
  if (Epoch)
    if (E && *Epoch >= E) return;
    }
    
    // Parse the given Ref string from the position Offset, to exactly match the given
// string Patt.
// Returns number of characters considered if successful.
static size_t ParseCustomString(const std::string &Ref, size_t Offset,
                                const char *Patt) {
  size_t Len = strlen(Patt);
  if (Offset + Len > Ref.size())
    return 0;
  return Ref.compare(Offset, Len, Patt) == 0 ? Len : 0;
}
    
      /// Creates a cross-over of two pieces of Data, returns its size.
  size_t CrossOver(const uint8_t *Data1, size_t Size1, const uint8_t *Data2,
                   size_t Size2, uint8_t *Out, size_t MaxOutSize);
    
    #ifndef LLVM_FUZZER_OPTIONS_H
#define LLVM_FUZZER_OPTIONS_H
    
    #endif  // LLVM_FUZZER_SHA1_H

    
    void TracePC::PrintModuleInfo() {
  Printf('INFO: Loaded %zd modules (%zd guards): ', NumModules, NumGuards);
  for (size_t i = 0; i < NumModules; i++)
    Printf('[%p, %p), ', Modules[i].Start, Modules[i].Stop);
  Printf('\n');
}
    
    // There is no header for this on macOS so declare here
extern 'C' char **environ;