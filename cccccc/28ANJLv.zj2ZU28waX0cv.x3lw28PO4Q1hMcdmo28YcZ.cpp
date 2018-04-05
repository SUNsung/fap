
        
        namespace cv
{
    }
    
            // Version: 3.1
        SAMPLER_2D_RECT                  = 0x8B63,
        SAMPLER_2D_RECT_SHADOW           = 0x8B64,
        SAMPLER_BUFFER                   = 0x8DC2,
        INT_SAMPLER_2D_RECT              = 0x8DCD,
        INT_SAMPLER_BUFFER               = 0x8DD0,
        UNSIGNED_INT_SAMPLER_2D_RECT     = 0x8DD5,
        UNSIGNED_INT_SAMPLER_BUFFER      = 0x8DD8,
        TEXTURE_BUFFER                   = 0x8C2A,
        MAX_TEXTURE_BUFFER_SIZE          = 0x8C2B,
        TEXTURE_BINDING_BUFFER           = 0x8C2C,
        TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D,
        TEXTURE_RECTANGLE                = 0x84F5,
        TEXTURE_BINDING_RECTANGLE        = 0x84F6,
        PROXY_TEXTURE_RECTANGLE          = 0x84F7,
        MAX_RECTANGLE_TEXTURE_SIZE       = 0x84F8,
        RED_SNORM                        = 0x8F90,
        RG_SNORM                         = 0x8F91,
        RGB_SNORM                        = 0x8F92,
        RGBA_SNORM                       = 0x8F93,
        R8_SNORM                         = 0x8F94,
        RG8_SNORM                        = 0x8F95,
        RGB8_SNORM                       = 0x8F96,
        RGBA8_SNORM                      = 0x8F97,
        R16_SNORM                        = 0x8F98,
        RG16_SNORM                       = 0x8F99,
        RGB16_SNORM                      = 0x8F9A,
        RGBA16_SNORM                     = 0x8F9B,
        SIGNED_NORMALIZED                = 0x8F9C,
        PRIMITIVE_RESTART                = 0x8F9D,
        PRIMITIVE_RESTART_INDEX          = 0x8F9E,
    
    #  define ASSERT_DEBUG_DEATH(statement, regex) \
  GTEST_EXECUTE_STATEMENT_(statement, regex)
    
      // Streams a pointer value to this object.
  //
  // This function is an overload of the previous one.  When you
  // stream a pointer to a Message, this definition will be used as it
  // is more specialized.  (The C++ Standard, section
  // [temp.func.order].)  If you stream a non-pointer, then the
  // previous definition will be used.
  //
  // The reason for this overload is that streaming a NULL pointer to
  // ostream is undefined behavior.  Depending on the compiler, you
  // may get '0', '(nil)', '(null)', or an access violation.  To
  // ensure consistent result across compilers, we always treat NULL
  // as '(null)'.
  template <typename T>
  inline Message& operator <<(T* const& pointer) {  // NOLINT
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
    return *this;
  }
#endif  // GTEST_OS_SYMBIAN
    
    INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
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
    
    // This header implements typed tests and type-parameterized tests.
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
    #ifdef __BORLANDC__
// string.h is not guaranteed to provide strcpy on C++ Builder.
# include <mem.h>
#endif
    
    
    {    return -1;
  }
    
    
    {  return result;
}
    
    void QLSQ::clear() {  // initialize
  a = 0.0;
  b = 0.0;
  c = 0.0;
  n = 0;                           // No elements.
  sigx = 0.0;                      // Zero accumulators.
  sigy = 0.0;
  sigxx = 0.0;
  sigxy = 0.0;
  sigyy = 0.0;
  sigxxx = 0.0;
  sigxxy = 0.0;
  sigxxxx = 0.0;
}
    
    class QRSequenceGenerator {
 public:
  // Object is initalized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
      // Sets the report string to a combined human and machine-readable report
  // string of the error rates.
  // Returns false if there is no data, leaving report unchanged, unless
  // even_if_empty is true.
  static bool ReportString(bool even_if_empty, const Counts& counts,
                           STRING* report);
    
    // Initialize the table to the given size of feature space.
void IntFeatureDist::Init(const IntFeatureMap* feature_map) {
  size_ = feature_map->sparse_size();
  Clear();
  feature_map_ = feature_map;
  features_ = new bool[size_];
  features_delta_one_ = new bool[size_];
  features_delta_two_ = new bool[size_];
  memset(features_, false, size_ * sizeof(features_[0]));
  memset(features_delta_one_, false, size_ * sizeof(features_delta_one_[0]));
  memset(features_delta_two_, false, size_ * sizeof(features_delta_two_[0]));
  total_feature_weight_ = 0.0;
}
    
    class EnvPosixTest {
 public:
  Env* env_;
  EnvPosixTest() : env_(Env::Default()) { }
    }
    
    
    {      if (contents_.size() < n) {
        n = contents_.size();
        returned_partial_ = true;
      }
      *result = Slice(contents_.data(), n);
      contents_.remove_prefix(n);
      return Status::OK();
    }
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    namespace leveldb {
    }
    
    // A internal wrapper class with an interface similar to Iterator that
// caches the valid() and key() results for an underlying iterator.
// This can help avoid virtual function calls and also gives better
// cache locality.
class IteratorWrapper {
 public:
  IteratorWrapper(): iter_(NULL), valid_(false) { }
  explicit IteratorWrapper(Iterator* iter): iter_(NULL) {
    Set(iter);
  }
  ~IteratorWrapper() { delete iter_; }
  Iterator* iter() const { return iter_; }
    }
    
    char* EncodeVarint64(char* dst, uint64_t v) {
  static const int B = 128;
  unsigned char* ptr = reinterpret_cast<unsigned char*>(dst);
  while (v >= B) {
    *(ptr++) = (v & (B-1)) | B;
    v >>= 7;
  }
  *(ptr++) = static_cast<unsigned char>(v);
  return reinterpret_cast<char*>(ptr);
}
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}
