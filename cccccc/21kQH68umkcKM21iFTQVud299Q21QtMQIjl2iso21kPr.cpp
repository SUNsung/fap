void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
        // deriv of m w.r.t. s2
    //Hs2 = [0 ; s(1)^2 ; s(1) ; 0 ; s(3) ; 2 * s(2) * s(3) ; 3 * s(2)^2 ; ...
    //         0 ; 0 ; 0 ; 1 ; s(3)^2 ; 0 ; 0 ; 2 * s(2) ; 0 ; ...
    //         s(1) * s(3) ; s(1) * 2 * s(2) ; 0 ; 0];
    
    
    {
    {        double startWeight = cvtest::randReal(rng);
        CV_Assert(arr.type() == CV_64FC2);
        arr.at<Point2d>(modifiedPointIndex) = startWeight * arr.at<Point2d>(startPointIndex) + (1.0 - startWeight) * arr.at<Point2d>(endPointIndex);
    }
}
    
    #include 'opencv2/core/bufferpool.hpp'
    
    #  define ASSERT_DEBUG_DEATH(statement, regex) \
  ASSERT_DEATH(statement, regex)
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
internal::ValueArray6<T1, T2, T3, T4, T5, T6> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6) {
  return internal::ValueArray6<T1, T2, T3, T4, T5, T6>(v1, v2, v3, v4, v5, v6);
}
    
    // Then, use the TEST_P macro to define as many parameterized tests
// for this fixture as you want. The _P suffix is for 'parameterized'
// or 'pattern', whichever you prefer to think.
    
    template <typename T>
class TypeWithoutFormatter<T, kConvertibleToInteger> {
 public:
  // Since T has no << operator or PrintTo() but can be implicitly
  // converted to BiggestInt, we print it as a BiggestInt.
  //
  // Most likely T is an enum type (either named or unnamed), in which
  // case printing it as an integer is the desired behavior.  In case
  // T is not an enum, printing it as an integer is the best we can do
  // given that it has no user-defined printer.
  static void PrintValue(const T& value, ::std::ostream* os) {
    const internal::BiggestInt kBigInt = value;
    *os << kBigInt;
  }
};
    
      // Opaque implementation object.  This field is never changed once
  // the object is constructed.  We don't mark it as const here, as
  // doing so will cause a warning in the constructor of UnitTest.
  // Mutable state in *impl_ is protected by mutex_.
  internal::UnitTestImpl* impl_;
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
    // Adds reference to a type if it is not a reference type,
// otherwise leaves it unchanged.  This is the same as
// tr1::add_reference, which is not widely available yet.
template <typename T>
struct AddReference { typedef T& type; };  // NOLINT
template <typename T>
struct AddReference<T&> { typedef T& type; };  // NOLINT
    
      // Does nothing if the current thread holds the mutex. Otherwise, crashes
  // with high probability.
  void AssertHeld() const {
    GTEST_CHECK_(has_owner_ && pthread_equal(owner_, pthread_self()))
        << 'The current thread is not holding the mutex @' << this;
  }
    
    // The TypeList template makes it possible to use either a single type
// or a Types<...> list in TYPED_TEST_CASE() and
// INSTANTIATE_TYPED_TEST_CASE_P().
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    
    {    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << 'Leaked ' << difference << ' unit(s) of Water!';
  }
    
        // insert the node in the network
    AddNodeToNet(newNode);
    
    using namespace std;
    
    // ParseCommandLine - parse the command line parameters
// argc - count of arguments
// argv - array of argument parameters
// config - config to return
std::string ConfigParameters::ParseCommandLine(int argc, wchar_t* argv[], ConfigParameters& config)
{
    config.SetName(std::string('global'));
    }
    
    
    {    virtual void Init(const ConfigParameters& writerConfig) = 0;
    virtual void Init(const ScriptableObjects::IConfigRecord& writerConfig) = 0;
    virtual void Destroy() = 0;
protected: public: // BUGBUG: This is accessed by a wrapper class.
    virtual ~IDataWriter() { }
public:
    virtual void GetSections(std::map<std::wstring, SectionType, nocase_compare>& sections) = 0;
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized) = 0;
    virtual void SaveMapping(std::wstring saveId, const std::map<LabelIdType, LabelType>& labelMapping) = 0;
    virtual bool SupportMultiUtterances() const = 0;
};
typedef std::shared_ptr<IDataWriter> IDataWriterPtr;
    
    // ---------------------------------------------------------------------------
// hardcoded_array -- wraps a fixed-size C array together with its size.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// Can be constructed with a size parameter--it will be checked against the
// hard-coded size.
// Can also be constructed with an initialization parameter (typ. 0).
// ---------------------------------------------------------------------------
    
    // customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
    #include <xgboost/tree_updater.h>
#include <string>
#include <memory>
#include './param.h'
#include '../common/sync.h'
#include '../common/io.h'
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }