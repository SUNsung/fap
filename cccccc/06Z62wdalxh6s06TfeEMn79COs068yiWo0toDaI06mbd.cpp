
        
        // This flag controls the style of death tests.  Valid values are 'threadsafe',
// meaning that the death test child process will re-execute the test binary
// from the start, running only a single death test, or 'fast',
// meaning that the child process will execute the test logic immediately
// after forking.
GTEST_DECLARE_string_(death_test_style);
    
      // Gets the summary of the failure message by omitting the stack
  // trace in it.
  static std::string ExtractSummary(const char* message);
    
    // This macro is for implementing ASSERT/EXPECT_DEBUG_DEATH when compiled in
// NDEBUG mode. In this case we need the statements to be executed, the regex is
// ignored, and the macro must accept a streamed message even though the message
// is never printed.
# define GTEST_EXECUTE_STATEMENT_(statement, regex) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
     GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } else \
    ::testing::Message()
    
    // If *pstr starts with the given prefix, modifies *pstr to be right
// past the prefix and returns true; otherwise leaves *pstr unchanged
// and returns false.  None of pstr, *pstr, and prefix can be NULL.
GTEST_API_ bool SkipPrefix(const char* prefix, const char** pstr);
    
    $for j [[
    
        virtual const ParamGeneratorInterface<T>* BaseGenerator() const {
      return base_;
    }
    virtual void Advance() {
      ++iterator_;
      value_.reset();
    }
    virtual ParamIteratorInterface<T>* Clone() const {
      return new Iterator(*this);
    }
    // We need to use cached value referenced by iterator_ because *iterator_
    // can return a temporary object (and of type other then T), so just
    // having 'return &*iterator_;' doesn't work.
    // value_ is updated here and not in Advance() because Advance()
    // can advance iterator_ beyond the end of the range, and we cannot
    // detect that fact. The client code, on the other hand, is
    // responsible for not calling Current() on an out-of-range iterator.
    virtual const T* Current() const {
      if (value_.get() == NULL)
        value_.reset(new T(*iterator_));
      return value_.get();
    }
    virtual bool Equals(const ParamIteratorInterface<T>& other) const {
      // Having the same base generator guarantees that the other
      // iterator is of the same type and we can downcast.
      GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
          << 'The program attempted to compare iterators '
          << 'from different generators.' << std::endl;
      return iterator_ ==
          CheckedDowncastToActualType<const Iterator>(&other)->iterator_;
    }
    
    // Downcasts the pointer of type Base to Derived.
// Derived must be a subclass of Base. The parameter MUST
// point to a class of type Derived, not any subclass of it.
// When RTTI is available, the function performs a runtime
// check to enforce this.
template <class Derived, class Base>
Derived* CheckedDowncastToActualType(Base* base) {
#if GTEST_HAS_RTTI
  GTEST_CHECK_(typeid(*base) == typeid(Derived));
  return dynamic_cast<Derived*>(base);  // NOLINT
#else
  return static_cast<Derived*>(base);  // Poor man's downcast.
#endif
}
    
      // Compares two wide C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike wcscasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL wide C string,
  // including the empty string.
  // NB: The implementations on different platforms slightly differ.
  // On windows, this method uses _wcsicmp which compares according to LC_CTYPE
  // environment variable. On GNU platform this method uses wcscasecmp
  // which compares according to LC_CTYPE category of the current locale.
  // On MacOS X, it uses towlower, which also uses LC_CTYPE category of the
  // current locale.
  static bool CaseInsensitiveWideCStringEquals(const wchar_t* lhs,
                                               const wchar_t* rhs);
    
    template <GTEST_10_TYPENAMES_(T), GTEST_10_TYPENAMES_(U)>
inline bool operator==(const GTEST_10_TUPLE_(T)& t,
                       const GTEST_10_TUPLE_(U)& u) {
  return gtest_internal::SameSizeTuplePrefixComparator<
      tuple_size<GTEST_10_TUPLE_(T) >::value,
      tuple_size<GTEST_10_TUPLE_(U) >::value>::Eq(t, u);
}
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TYPE_UTIL_H_

    
      void OCRTester(const char* imgname, const char* groundtruth, const char* tessdatadir, const char* lang) {
    //log.info() << tessdatadir << ' for language: ' << lang << std::endl;
    char *outText;
    std::locale loc('C'); // You can also use '' for the default system locale
    std::ifstream file(groundtruth);
    file.imbue(loc); // Use it for file input
    std::string gtText((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    ASSERT_FALSE(api->Init(tessdatadir, lang)) << 'Could not initialize tesseract.';
    Pix *image = pixRead(imgname);
    ASSERT_TRUE(image != nullptr) << 'Failed to read test image.';
    api->SetImage(image);
    outText = api->GetUTF8Text();
    EXPECT_EQ(gtText,outText) << 'Phototest.tif OCR does not match ground truth for ' << ::testing::PrintToString(lang);
    api->End();
    delete [] outText;
    pixDestroy(&image);
  }
    
    DetLineFit::~DetLineFit() {
}
    
    
    {}  // namespace tesseract
    
    
/**********************************************************************
 * QLSQ::remove
 *
 * Delete an element from the accumulator.
 **********************************************************************/
    
    
    {
    {    data_channel->gather(raw_tensors, *int_tensor, 0);
    for (std::size_t i = 0; i < tensors.size(); ++i)
      ASSERT_TENSOR_VALUE(int, *(tensors[i]), i)
  } else {
    data_channel->gather(raw_tensors, *int_tensor, 0);
  }
}
    
    template<> AT_API Half convert(float f);
template<> AT_API float convert(Half f);
template<> AT_API Half convert(double f);
template<> AT_API double convert(Half f);
template<> AT_API Half convert(int64_t f);
template<> AT_API int64_t convert(Half f);
    
      std::unique_ptr<GlooCache> _cache;
    
    #define THDPStorage TH_CONCAT_3(THDP,Real,Storage)
#define THDPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THDPStorageClass TH_CONCAT_3(THDP,Real,StorageClass)
#define THDPStorage_(NAME) TH_CONCAT_4(THDP,Real,Storage_,NAME)
    
    #undef THPStorage_
#undef THPStorage
#undef THPStorageBaseStr
#undef THPStorageStr
#undef THPStorageClass
#undef THPStorageType
    
    
void register_fd(int fd) {
  struct pollfd pfd = {0};
  pfd.fd = fd;
  pfd.events = POLLIN;
  pollfds.push_back(pfd);
}
    
    ByteArray::~ByteArray() {}
    
      std::string to_string() const;
    
    template <typename T, typename U>
struct is_any_of<T, std::tuple<U>> : std::is_same<T, U> {};
    
    /* Set of callbacks used to receive callbacks from bidirectional stream. */
typedef struct bidirectional_stream_callback {
  /* Invoked when the stream is ready for reading and writing.
   * Consumer may call bidirectional_stream_read() to start reading data.
   * Consumer may call bidirectional_stream_write() to start writing
   * data.
   */
  void (*on_stream_ready)(bidirectional_stream* stream);
    }
    
    #include <signal.h>
    
    namespace grpc_node_generator {
    }
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    #include <string>
    
    UsageTimer::Result UsageTimer::Sample() {
  Result r;
  r.wall = Now();
  get_resource_usage(&r.user, &r.system);
  r.total_cpu_time = 0;
  r.idle_cpu_time = 0;
  get_cpu_usage(&r.total_cpu_time, &r.idle_cpu_time);
  return r;
}
    
      static double Now();
    
    
    {
    {}  // namespace testing
}  // namespace grpc

    
    /**
 * \fn  std::shared_ptr<xgboost::DMatrix> CreateDMatrix(int rows, int columns, float sparsity, int seed);
 *
 * \brief Creates dmatrix with uniform random data between 0-1.
 *
 * \param rows      The rows.
 * \param columns   The columns.
 * \param sparsity  The sparsity.
 * \param seed      The seed.
 *
 * \return  The new d matrix.
 */
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitGetRank
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitGetRank
  (JNIEnv *jenv, jclass jcls, jintArray jout) {
  jint rank = RabitGetRank();
  jenv->SetIntArrayRegion(jout, 0, 1, &rank);
  return 0;
}
    
    
    {  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
}
    
    
    {  /*!
   * \brief Create a linear updater given name
   * \param name Name of the linear updater.
   */
  static LinearUpdater* Create(const std::string& name);
};
    
      void LazySumWeights(DMatrix *p_fmat) {
    if (!sum_weight_complete_) {
      auto &info = p_fmat->Info();
      for (size_t i = 0; i < info.num_row_; i++) {
        sum_instance_weight_ += info.GetWeight(i);
      }
      sum_weight_complete_ = true;
    }
  }
    
    // Used to encapsulate a particular instance of an opened database.
//
// This object should not be used directly in C++; it exists solely to provide
// a mapping from a JavaScript object to a C++ code that can use the RocksDB
// API.
class DBWrapper : public node::ObjectWrap {
  public:
    static void Init(Handle<Object> exports);
    }
    
    
int           XXH32_sizeofState();
XXH_errorcode XXH32_resetState(void* state, unsigned int seed);
    
      // Offset of the last record returned by ReadRecord.
  uint64_t last_record_offset_;
  // Offset of the first location past the end of buffer_.
  uint64_t end_of_buffer_offset_;
    
    namespace rocksdb {
JniCallback::JniCallback(JNIEnv* env, jobject jcallback_obj) {
  // Note: jcallback_obj may be accessed by multiple threads,
  // so we ref the jvm not the env
  const jint rs = env->GetJavaVM(&m_jvm);
  if(rs != JNI_OK) {
    // exception thrown
    return;
  }
    }
    }
    
    // We want to make sure that with a single writer and multiple
// concurrent readers (with no synchronization other than when a
// reader's iterator is created), the reader always observes all the
// data that was present in the skip list when the iterator was
// constructor.  Because insertions are happening concurrently, we may
// also observe new values that were inserted since the iterator was
// constructed, but we should never miss any values that were present
// at iterator construction time.
//
// We generate multi-part keys:
//     <key,gen,hash>
// where:
//     key is in range [0..K-1]
//     gen is a generation number for key
//     hash is hash(key,gen)
//
// The insertion code picks a random key, sets gen to be 1 + the last
// generation number inserted for that key, and sets hash to Hash(key,gen).
//
// At the beginning of a read, we snapshot the last inserted
// generation number for each key.  We then iterate, including random
// calls to Next() and Seek().  For every key we encounter, we
// check that it is either expected given the initial snapshot or has
// been concurrently added since the iterator started.
class ConcurrentTest {
 public:
  static const uint32_t K = 8;
    }
    
    
    {}  // namespace rocksdb
    
    InternalIterator* MergeIteratorBuilder::Finish() {
  InternalIterator* ret = nullptr;
  if (!use_merging_iter) {
    ret = first_iter;
    first_iter = nullptr;
  } else {
    ret = merge_iter;
    merge_iter = nullptr;
  }
  return ret;
}
    
    
    {  return _URC_NO_REASON;
}
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
    /* static */ Config * Config::create(void)
{
    return new Config();
}
    
    Value Node::getMinWidth(void) const
{
    return Value::fromYGValue(YGNodeStyleGetMinWidth(m_node));
}
    
     public:
    
    #include <cstdarg>
#include <stdio.h>
    
      // Creates a strong reference from a raw pointer, assuming that it points to a
  // freshly-created object. See the documentation for RefPtr for usage.
  static inline RefPtr<T> adoptRef(T* ptr) {
    return RefPtr<T>(ptr, ConstructionMode::Adopted);
  }
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    #include <fb/visibility.h>
    
    #pragma once