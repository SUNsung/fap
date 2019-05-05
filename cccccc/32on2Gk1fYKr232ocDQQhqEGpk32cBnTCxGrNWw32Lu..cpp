
        
        namespace testing {
namespace internal {
    }
    }
    
    
    {    linked_ptr_internal const* p = ptr;
    while (p->next_ != ptr) p = p->next_;
    p->next_ = this;
    next_ = ptr;
  }
    
        void ComputeCurrentValue() {
      if (!AtEnd())
        current_value_ = ParamType(*current1_, *current2_);
    }
    bool AtEnd() const {
      // We must report iterator past the end of the range when either of the
      // component iterators has reached the end of its range.
      return
          current1_ == end1_ ||
          current2_ == end2_;
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40>
struct Templates40 {
  typedef TemplateSel<T1> Head;
  typedef Templates39<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40> Tail;
};
    
    
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

    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
      // Constructs a MyString by cloning a 0-terminated C string.
  explicit MyString(const char* a_c_string) : c_string_(NULL) {
    Set(a_c_string);
  }
    
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
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
    #if MXNET_USE_OPENCV
#include <opencv2/opencv.hpp>
#include <vector>  // NOLINT(*)
#include <utility> // NOLINT(*)
#include <string> // NOLINT(*)
    
      virtual void BeforeFirst(void) {
    base_->BeforeFirst();
  }
    
    /*!
 * \file gradient_compression.h
 * \brief Gradient compression for kvstore
 * \author Rahul Huilgol
 */
    
       out = data / sqrt(data.shape[-1])
    
    
    {
    {.add_argument('data', 'Symbol or Symbol[]', 'Tensor or List of Tensors, the second input '
'will be used as crop_like shape reference')
.add_arguments(CropParam::__FIELDS__())
.set_key_var_num_args('num_args');
}  // namespace op
}  // namespace mxnet

    
    
    {
    {
    { private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 1U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[lrn_enum::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[lrn_enum::kOut].get<gpu, 4, DType>(s);
      unsigned lrn_n = param_.nsize;
      double alpha = param_.alpha;
      double beta = param_.beta;
      double lrn_k = param_.knorm;
      CHECK_EQ(data.shape_, out.shape_);
      CUDNN_CALL(cudnnCreateLRNDescriptor(&lrn_desc_));
      CUDNN_CALL(cudnnSetLRNDescriptor(lrn_desc_,
                                       lrn_n,
                                       alpha,
                                       beta,
                                       lrn_k));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&shape_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(shape_desc_,
                                            CUDNN_TENSOR_NCHW,
                                            dtype_,
                                            data.shape_[0],
                                            data.shape_[1],
                                            data.shape_[2],
                                            data.shape_[3]));
    }
  }
  bool init_cudnn_;
  LRNParam param_;
  cudnnDataType_t dtype_;
  cudnnLRNDescriptor_t lrn_desc_;
  cudnnTensorDescriptor_t shape_desc_;
};  // class CuDNNLocalResponseNormOp
}  // namespace op
}  // namespace mxnet
#endif  // MXNET_OPERATOR_CUDNN_LRN_INL_H_

    
    #include <algorithm>
#include <vector>
#include './spatial_transformer-inl.h'
namespace mxnet {
namespace op {
#if defined(__CUDACC__) && MXNET_USE_CUDNN == 1 && CUDNN_MAJOR >= 5
template<typename DType>
class CuDNNSpatialTransformerOp : public Operator {
 public:
  explicit CuDNNSpatialTransformerOp(SpatialTransformerParam param) {
    this->param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
    if (param_.sampler_type == st::kBilinear) {
      sampler_ = CUDNN_SAMPLER_BILINEAR;
    }
  }
    }
    }
    }
    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
    DMLC_REGISTER_PARAMETER(IdentityAttachKLSparseRegParam);
    
    
    {};
    
      xfer += iprot->readStructBegin(fname);
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
    class keychainItems : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};