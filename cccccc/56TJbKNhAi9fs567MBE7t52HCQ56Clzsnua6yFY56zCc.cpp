
        
        //---------------------------------------------------------------------------------
// The following part are API Registration of Operators
// See also MXNET_REGISTER_SIMPLE_OP in operator_util.h for registering simple ops.
//---------------------------------------------------------------------------------
/*!
 * \brief Macro to register OperatorProperty
 *
 * \code
 * // example of registering a fully connected operator
 * REGISTER_OP_PROPERTY(FullyConnected, FullyConnectedOpProp)
 * .describe('Fully connected layer');
 *
 * \endcode
 */
#define MXNET_REGISTER_OP_PROPERTY(name, OperatorPropertyType)          \
  DMLC_REGISTRY_REGISTER(::mxnet::OperatorPropertyReg, OperatorPropertyReg, name) \
  .set_body([]() { return new OperatorPropertyType(); })                \
  .set_return_type('NDArray-or-Symbol') \
  .check_name()
    
    #include <caffe/proto/caffe.pb.h>
    
    #include <caffe/util/io.hpp>
namespace dmlc {
namespace parameter {
    }
    }
    
      inline void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    std::vector<std::pair<std::string, std::string> > kwargs_left;
    // init batch param, it could have similar param with
    kwargs_left = param_.InitAllowUnknown(kwargs);
    // Init space for out
    out_.inst_index = new unsigned[param_.batch_size];
    out_.batch_size = param_.batch_size;
    out_.data.clear();
    // init base iterator
    base_->Init(kwargs);
  }
    
    BENCHMARK_PARAM(BENCHFUN(insertFront), 16)
BENCHMARK_PARAM(BENCHFUN(insertFront), 128)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024)
BENCHMARK_PARAM(BENCHFUN(insertFront), 10240)
BENCHMARK_PARAM(BENCHFUN(insertFront), 102400)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024000)
    
      FunctionRef<int(int, std::vector<int> const&)> variant6 = of;
  EXPECT_EQ(100 + 6 * 20, variant6(20, {}));
  EXPECT_EQ(100 + 6 * 20, variant6(20, {1, 2, 3}));
  FunctionRef<int(int, std::vector<int> const&)> const cvariant6 = of;
  EXPECT_EQ(100 + 6 * 20, cvariant6(20, {}));
  EXPECT_EQ(100 + 6 * 20, cvariant6(20, {1, 2, 3}));
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    #include <folly/GLog.h>
    
    
    {} // namespace folly

    
      /**
   * Shortcut to get a secure random value of integral type.
   */
  template <class T>
  static typename std::enable_if<
      std::is_integral<T>::value && !std::is_same<T, bool>::value,
      T>::type
  secureRandom() {
    T val;
    secureRandom(&val, sizeof(val));
    return val;
  }
    
      void addWithPriority(Func f, int8_t priority) override {
    executor_->addWithPriority(wrapFunc(std::move(f)), priority);
  }