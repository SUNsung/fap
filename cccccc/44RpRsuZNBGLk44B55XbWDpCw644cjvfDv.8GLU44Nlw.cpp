
        
        
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
      desired_output_for_decode = 'ABCD__EfghI_j';
  expected = string('\x64\x80\xC5\xA1\x0', 5);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    
    {  string comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    comments = BuildCommentsString(location, true);
  } else {
    comments = '';
  }
  variables_['comments'] = comments;
}
    
     protected:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor,
                                  const Options& options);
  virtual ~RepeatedPrimitiveFieldGenerator();
    
    inline bool CodedInputStream::InternalReadStringInline(string* buffer,
                                                       int size) {
  if (size < 0) return false;  // security: size is often user-supplied
    }
    
    // Run a command that returns a util::Status.  If the called code returns an
// error status, return that status up out of this method too.
//
// Example:
//   RETURN_IF_ERROR(DoThings(4));
#define RETURN_IF_ERROR(expr) \
  do { \
    /* Using _status below to avoid capture problems if expr is 'status'. */ \
    const ::google::protobuf::util::Status _status = (expr); \
    if (GOOGLE_PREDICT_FALSE(!_status.ok())) return _status; \
  } while (0)
    
    TEST(Status, GenericCodes) {
  EXPECT_EQ(util::error::OK, util::Status::OK.error_code());
  EXPECT_EQ(util::error::CANCELLED, util::Status::CANCELLED.error_code());
  EXPECT_EQ(util::error::UNKNOWN, util::Status::UNKNOWN.error_code());
}
    
    
    {
    {        double startWeight = cvtest::randReal(rng);
        CV_Assert(arr.type() == CV_64FC2);
        arr.at<Point2d>(modifiedPointIndex) = startWeight * arr.at<Point2d>(startPointIndex) + (1.0 - startWeight) * arr.at<Point2d>(endPointIndex);
    }
}
    
    namespace cv
{
CV_EXPORTS_W void add(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    }
    
    // GL type for 'half' precision (s10e5) float data in host memory
#ifndef GL_ARB_half_float_pixel
    typedef unsigned short GLhalfARB;
#endif
#ifndef GL_NV_half_float
    typedef unsigned short GLhalfNV;
#endif
    
    #ifndef __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__
#define __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    /**
 * @brief Exponential Linear Unit non-linearity @f$
 *        y = \left\{
 *        \begin{array}{lr}
 *            x                  & \mathrm{if} \; x > 0 \\
 *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
 *        \end{array} \right.
 *      @f$.  
 */
template <typename Dtype>
class ELULayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ELUParameter elu_param,
   *     with ELULayer options:
   *   - alpha (\b optional, default 1).
   *     the value @f$ \alpha @f$ by which controls saturation for negative inputs.
   */
  explicit ELULayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    
    {}  // namespace caffe
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_1 @f$
   *   -# ...
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_K @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the selector blob
   * @param top output Blob vector (length 1+)
   *   -# @f$ (S \times C \times H \times W) @f$ ()
   *        the filtered output @f$ x_1 @f$
   *        where S is the number of items
   *        that haven't been filtered
   *      @f$ (S \times C \times H \times W) @f$
   *        the filtered output @f$ x_K @f$
   *        where S is the number of items
   *        that haven't been filtered
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top);
    
    #include 'hphp/util/compatibility.h'
    
    #include <string>
#include <atomic>
#include <set>
#include <deque>
    
    #include <stdlib.h>
#include <string.h>
    
      bool contains(ConstCodeAddress addr) const {
    return addr >= m_base && addr < (m_base + m_size);
  }
    
    Type typeMod(Type t1, Type t2) {
  if (auto t = eval_const(t1, t2, cellMod)) return *t;
  return TInitPrim;
}
    
      struct CompareBundles {
    explicit CompareBundles(CufIter* cufIter) : m_cufIter(cufIter) { }
    bool operator()(const HandlerBundle& hb);
   private:
    CufIter* m_cufIter;
  };
    
    typedef unsigned short ushort;
typedef unsigned short uint16;
    
    /*! \brief storge type inference function for elemwise operators.
 *         It infers output stypes the same as input stypes when input stypes are the same
 *  \tparam cpu_only whether fcompute_ex can only be dispatched on cpu context
 *  \tparam rsp whether row sparse stype is supported
 *  \tparam rsp whether csr stype is supported
 */
template<bool cpu_only, bool rsp, bool csr>
inline bool ElemwiseStorageAttr(const nnvm::NodeAttrs& attrs,
                                const int dev_mask,
                                DispatchMode* dispatch_mode,
                                std::vector<int> *in_attrs,
                                std::vector<int> *out_attrs) {
  using namespace common;
  bool dispatched = false;
  const bool invalid_ctx = cpu_only && dev_mask != mshadow::cpu::kDevMask;
  const auto dispatch_ex = invalid_ctx ? DispatchMode::kFComputeFallback :
                                         DispatchMode::kFComputeEx;
  if (!dispatched && common::ContainsOnlyStorage(*in_attrs, kDefaultStorage)) {
    // dns, dns ... -> dns
    dispatched = storage_type_assign(out_attrs, kDefaultStorage,
                                     dispatch_mode, DispatchMode::kFCompute);
  }
  if (!dispatched && rsp && ContainsOnlyStorage(*in_attrs, kRowSparseStorage)) {
    // rsp, rsp, ... -> rsp
    dispatched = storage_type_assign(out_attrs, kRowSparseStorage,
                                     dispatch_mode, dispatch_ex);
  }
  if (!dispatched && csr && common::ContainsOnlyStorage(*in_attrs, kCSRStorage)) {
    // csr, csr, ... -> csr
    dispatched = storage_type_assign(out_attrs, kCSRStorage,
                                     dispatch_mode, dispatch_ex);
  }
  if (!dispatched && in_attrs->size() == 3U && in_attrs->at(0) == kDefaultStorage &&
      in_attrs->at(1) == kCSRStorage && in_attrs->at(2) == kDefaultStorage) {
    dispatched = storage_type_assign(out_attrs, kDefaultStorage,
                                     dispatch_mode, dispatch_ex);
  }
  if (!dispatched && in_attrs->size() > 4U && ContainsStorageType(*in_attrs, kDefaultStorage)) {
    // *, dense, * -> dense
    dispatched = storage_type_assign(out_attrs, kDefaultStorage,
                                     dispatch_mode, dispatch_ex);
  }
  if (!dispatched) {
    dispatch_fallback(out_attrs, dispatch_mode);
  }
  if (static_cast<DispatchMode>(*dispatch_mode) == DispatchMode::kFComputeFallback) {
    LogStorageFallback(attrs, dev_mask, in_attrs, out_attrs);
  }
  return true;
}
    
    #include <gtest/gtest.h>
#include <mxnet/tensor_blob.h>
#include '../../src/operator/nn/activation-inl.h'
#include '../include/test_op_runner.h'
#include '../include/test_core_op.h'
    
      if (name[0] == '_') {
    name_ = std::string('mx.nd.internal.') + (name.c_str() + 1);
  } else {
    name_ = std::string('mx.nd.') + name;
  }
  for (size_t i = 0; i < name_.length(); ++i) {
    if (name_[i] == '_') name_[i] = '.';
  }
    
    #include <boost/asio/detail/config.hpp>
#include <cstddef>
#include <boost/asio/async_result.hpp>
#include <boost/asio/buffered_read_stream_fwd.hpp>
#include <boost/asio/buffer.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_resize_guard.hpp>
#include <boost/asio/detail/buffered_stream_storage.hpp>
#include <boost/asio/detail/noncopyable.hpp>
#include <boost/asio/detail/type_traits.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/io_service.hpp>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_ARRAY_FWD_HPP

    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      static bool all_empty(const Buffers& buffer_sequence)
  {
    typename Buffers::const_iterator iter = buffer_sequence.begin();
    typename Buffers::const_iterator end = buffer_sequence.end();
    std::size_t i = 0;
    for (; iter != end && i < max_buffers; ++iter, ++i)
      if (boost::asio::buffer_size(Buffer(*iter)) > 0)
        return false;
    return true;
  }
    
    #include <boost/asio/detail/push_options.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
      int timeout = block ? get_timeout() : 0;
  lock.unlock();