
        
        // Asserts that a given statement causes the program to exit, with an
// integer exit status that satisfies predicate, and emitting error output
// that matches regex.
# define ASSERT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_FATAL_FAILURE_)
    
    INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
      // Returns the number of TestPartResult objects in the array.
  int size() const;
    
    // Type-parameterized tests are abstract test patterns parameterized
// by a type.  Compared with typed tests, type-parameterized tests
// allow you to define the test pattern without knowing what the type
// parameters are.  The defined pattern can be instantiated with
// different types any number of times, in any number of translation
// units.
//
// If you are designing an interface or concept, you can define a
// suite of type-parameterized tests to verify properties that any
// valid implementation of the interface/concept should have.  Then,
// each implementation can easily instantiate the test suite to verify
// that it conforms to the requirements, without having to write
// similar tests repeatedly.  Here's an example:
    
      // Destructor of TestCase.
  virtual ~TestCase();
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT2.
// Don't use this in your code.
#define GTEST_PRED_FORMAT2_(pred_format, v1, v2, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, v1, v2), \
                on_failure)
    
    // This template class represents an IEEE floating-point number
// (either single-precision or double-precision, depending on the
// template parameters).
//
// The purpose of this class is to do more sophisticated number
// comparison.  (Due to round-off error, etc, it's very unlikely that
// two floating-points will be equal exactly.  Hence a naive
// comparison by the == operation often doesn't work.)
//
// Format of IEEE floating-point:
//
//   The most-significant bit being the leftmost, an IEEE
//   floating-point looks like
//
//     sign_bit exponent_bits fraction_bits
//
//   Here, sign_bit is a single bit that designates the sign of the
//   number.
//
//   For float, there are 8 exponent bits and 23 fraction bits.
//
//   For double, there are 11 exponent bits and 52 fraction bits.
//
//   More details can be found at
//   http://en.wikipedia.org/wiki/IEEE_floating-point_standard.
//
// Template parameter:
//
//   RawType: the raw floating-point type (either float or double)
template <typename RawType>
class FloatingPoint {
 public:
  // Defines the unsigned integer type that has the same size as the
  // floating point number.
  typedef typename TypeWithSize<sizeof(RawType)>::UInt Bits;
    }
    
    #ifdef __GNUC__
// Ask the compiler to never inline a given function.
# define GTEST_NO_INLINE_ __attribute__((noinline))
#else
# define GTEST_NO_INLINE_
#endif
    
    // 6.1.3.3 Tuple helper classes.
    
    // Template lists of length 1, 2, 3, and so on.
    
    #include <algorithm>
    
    std::string GetDbFileContent(int argc, char** argv);
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
    class PythonGrpcGenerator : public grpc::protobuf::compiler::CodeGenerator {
 public:
  PythonGrpcGenerator(const GeneratorConfiguration& config);
  ~PythonGrpcGenerator();
    }
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
     */
    
    class CodegenTestMinimal : public ::testing::Test {};
    
     private:
  static Result Sample();
    
    grpc::string SummarizeService(
    const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  for (int i = 0; i < service->method_count(); ++i) {
    result.append(SummarizeMethod(service->method(i)));
  }
  return result;
}
    
    
    {    for (size_t i = 0; i < sorted_index_set.size(); ++i) {
      bst_uint cid = sorted_index_set[i];
      size_t dst_begin = page->offset[i];
      size_t src_begin = disk_offset_[cid];
      size_t num = disk_offset_[cid + 1] - disk_offset_[cid];
      for (size_t j = 0; j < num; ++j) {
        page->data[dst_begin + j] = SparseBatch::Entry(
            index_.data[src_begin + j] + min_index_, value_.data[src_begin + j]);
      }
    }
    return true;
  }
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    #if XGBOOST_CUSTOMIZE_GLOBAL_PRNG
/*!
 * \brief An customized random engine, used to be plugged in PRNG from other systems.
 *  The implementation of this library is not provided by xgboost core library.
 *  Instead the other library can implement this class, which will be used as GlobalRandomEngine
 *  If XGBOOST_RANDOM_CUSTOMIZE = 1, by default this is switched off.
 */
class CustomGlobalRandomEngine {
 public:
  /*! \brief The result type */
  typedef size_t result_type;
  /*! \brief The minimum of random numbers generated */
  inline static constexpr result_type min() {
    return 0;
  }
  /*! \brief The maximum random numbers generated */
  inline static constexpr result_type max() {
    return std::numeric_limits<size_t>::max();
  }
  /*!
   * \brief seed function, to be implemented
   * \param val The value of the seed.
   */
  void seed(result_type val);
  /*!
   * \return next random number.
   */
  result_type operator()();
};
    
    
    {  std::remove(tmp_file.c_str());
}

    
    TEST(Param, VectorStreamRead) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
    }
    
    template<>
inline XGBOOST_DEVICE float bst_gpair_internal<int64_t>::GetGrad() const {
  return grad_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE float bst_gpair_internal<int64_t>::GetHess() const {
  return hess_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE void bst_gpair_internal<int64_t>::SetGrad(float g) {
  grad_ = static_cast<int64_t>(std::round(g * 1e4));
}
template<>
inline XGBOOST_DEVICE void bst_gpair_internal<int64_t>::SetHess(float h) {
  hess_ = static_cast<int64_t>(std::round(h * 1e4));
}
    
    namespace xgboost {
namespace metric {
// tag the this file, used by force static link later.
DMLC_REGISTRY_FILE_TAG(elementwise_metric);
    }
    }
    
    class DNS {
  public:
   typedef std::vector<std::string> (*DNSFunc)(const std::string& host);
    }
    
    /*
 * baseevent.h
 *
 *  Created on: 2016年3月24日
 *      Author: caoshaokun
 */
    
    #include <vector>
#include <string>
    
    
size_t  SimpleShortPackLength(size_t _datalen) {
    return SimplePackLength<uint16_t>(_datalen);
}
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        void TestFun0();
    void TestFun2()  {__TestFun1(1);}