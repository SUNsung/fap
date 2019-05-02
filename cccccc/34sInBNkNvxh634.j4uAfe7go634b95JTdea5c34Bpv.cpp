
        
        #include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
      // Thread local context for Caffe. Moved to common.cpp instead of
  // including boost/thread.hpp to avoid a boost/NVCC issues (#1009, #1010)
  // on OSX. Also fails on Linux with CUDA 7.0.18.
  static Caffe& Get();
    
    /**
 * @brief Get a specific filler from the specification given in FillerParameter.
 *
 * Ideally this would be replaced by a factory pattern, but we will leave it
 * this way for now.
 */
template <typename Dtype>
Filler<Dtype>* GetFiller(const FillerParameter& param) {
  const std::string& type = param.type();
  if (type == 'constant') {
    return new ConstantFiller<Dtype>(param);
  } else if (type == 'gaussian') {
    return new GaussianFiller<Dtype>(param);
  } else if (type == 'positive_unitball') {
    return new PositiveUnitballFiller<Dtype>(param);
  } else if (type == 'uniform') {
    return new UniformFiller<Dtype>(param);
  } else if (type == 'xavier') {
    return new XavierFiller<Dtype>(param);
  } else if (type == 'msra') {
    return new MSRAFiller<Dtype>(param);
  } else if (type == 'bilinear') {
    return new BilinearFiller<Dtype>(param);
  } else {
    CHECK(false) << 'Unknown filler name: ' << param.type();
  }
  return (Filler<Dtype>*)(NULL);
}
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    // The tests from the instantiation above will have these names:
//
//    * AnotherInstantiationName/FooTest.DoesBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.DoesBlah/1 for 'dog'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/1 for 'dog'
//
// Please note that INSTANTIATE_TEST_CASE_P will instantiate all tests
// in the given test case, whether their definitions come before or
// AFTER the INSTANTIATE_TEST_CASE_P statement.
//
// Please also note that generator expressions (including parameters to the
// generators) are evaluated in InitGoogleTest(), after main() has started.
// This allows the user on one hand, to adjust generator parameters in order
// to dynamically determine a set of tests to run and on the other hand,
// give the user a chance to inspect the generated tests with Google Test
// reflection API before RUN_ALL_TESTS() is executed.
//
// You can see samples/sample7_unittest.cc and samples/sample8_unittest.cc
// for more examples.
//
// In the future, we plan to publish the API for defining new parameter
// generators. But for now this interface remains part of the internal
// implementation and is subject to change.
//
//
// A parameterized test fixture must be derived from testing::Test and from
// testing::WithParamInterface<T>, where T is the type of the parameter
// values. Inheriting from TestWithParam<T> satisfies that requirement because
// TestWithParam<T> inherits from both Test and WithParamInterface. In more
// complicated hierarchies, however, it is occasionally useful to inherit
// separately from Test and WithParamInterface. For example:
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
      // Gets the last element of the queue, or NULL if the queue is empty.
  QueueNode<E>* Last() { return last_; }
  const QueueNode<E>* Last() const { return last_; }
    
    int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  folly::runBenchmarks();
  return 0;
}

    
    template <class RNG, class /* EnableIf */>
auto Random::create() -> RNG {
  detail::SeedData<RNG> sd;
  std::seed_seq s(std::begin(sd.seedData), std::end(sd.seedData));
  return RNG(s);
}
    
    using UTF8StringPiece = UTF8Range<const char*>;
    
    struct Options {
  /**
   * ZLIB: default option -- write a zlib wrapper as documented in RFC 1950.
   *
   * GZIP: write a simple gzip header and trailer around the compressed data
   * instead of a zlib wrapper.
   *
   * RAW: deflate will generate raw deflate data with no zlib header or
   * trailer, and will not compute a check value.
   *
   * AUTO: enable automatic header detection for decoding gzip or zlib data.
   * For deflation, ZLIB will be used.
   */
  enum class Format { ZLIB, GZIP, RAW, AUTO };
    }
    
      std::vector<size_t> cpus;
    
      std::shared_ptr<T> get() const {
    folly::hazptr_local<1> hazptr;
    auto slots = hazptr[0].get_protected(slots_);
    if (!slots) {
      return nullptr;
    }
    return (slots->slots_)[AccessSpreader<>::current(kNumSlots)];
  }
    
    // basically shared_ptr, but only supports make_counted, and provides
// access to add_ref / release_ref with a count.  Alias not supported.
template <typename T, template <typename> class Atom = std::atomic>
class counted_ptr : public counted_ptr_base<Atom> {
 public:
  T* p_;
  counted_ptr() : p_(nullptr) {}
  counted_ptr(counted_shared_tag, T* p) : p_(p) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
    }
    
    #include <folly/detail/RangeCommon.h>
    
            /**
         * Add your initializationOnThread description here.
         * This is equivalent to the constructor, but it is run in the thread where this function will operate
         */
        void initializationOnThread();
    
    namespace op
{
    template<typename T>
    struct Rectangle
    {
        T x;
        T y;
        T width;
        T height;
    }
    }
    
        OP_API std::vector<cv::Mat> loadData(const std::vector<std::string>& cvMatNames,
                                         const std::string& fileNameNoExtension, const DataFormat dataFormat);