
        
        // Two predicate classes that can be used in {ASSERT,EXPECT}_EXIT*:
    
    // Base cases.
template <>
struct TuplePrefixPrinter<0> {
  template <typename Tuple>
  static void PrintPrefixTo(const Tuple&, ::std::ostream*) {}
    }
    
    // A macro for testing Google Test assertions or code that's expected to
// generate Google Test non-fatal failures.  It asserts that the given
// statement will cause exactly one non-fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_NONFATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// 'statement' is allowed to reference local variables and members of
// the current object.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  If we do that, the code won't compile when the user gives
// EXPECT_NONFATAL_FAILURE() a statement that contains a macro that
// expands to code containing an unprotected comma.  The
// AcceptsMacroThatExpandsToUnprotectedComma test in gtest_unittest.cc
// catches that.
//
// For the same reason, we have to write
//   if (::testing::internal::AlwaysTrue()) { statement; }
// instead of
//   GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
// to avoid an MSVC warning on unreachable code.
#define EXPECT_NONFATAL_FAILURE(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // This flag enables using colors in terminal output. Available values are
// 'yes' to enable colors, 'no' (disable colors), or 'auto' (the default)
// to let Google Test decide.
GTEST_DECLARE_string_(color);
    
    // TypeParameterizedTest<Fixture, TestSel, Types>::Register()
// registers a list of type-parameterized tests with Google Test.  The
// return value is insignificant - we just need to return something
// such that we can call this function in a namespace scope.
//
// Implementation note: The GTEST_TEMPLATE_ macro declares a template
// template parameter.  It's defined in gtest-type-util.h.
template <GTEST_TEMPLATE_ Fixture, class TestSel, typename Types>
class TypeParameterizedTest {
 public:
  // 'index' is the index of the test in the type list 'Types'
  // specified in INSTANTIATE_TYPED_TEST_CASE_P(Prefix, TestCase,
  // Types).  Valid values for 'index' are [0, N - 1] where N is the
  // length of Types.
  static bool Register(const char* prefix, const char* case_name,
                       const char* test_names, int index) {
    typedef typename Types::Head Type;
    typedef Fixture<Type> FixtureClass;
    typedef typename GTEST_BIND_(TestSel, Type) TestClass;
    }
    }
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_)};
    return ValuesIn(array);
  }
    
    template <$for j, [[class Generator$j]]>
class CartesianProductHolder$i {
 public:
CartesianProductHolder$i($for j, [[const Generator$j& g$j]])
      : $for j, [[g$(j)_(g$j)]] {}
  template <$for j, [[typename T$j]]>
  operator ParamGenerator< ::std::tr1::tuple<$for j, [[T$j]]> >() const {
    return ParamGenerator< ::std::tr1::tuple<$for j, [[T$j]]> >(
        new CartesianProductGenerator$i<$for j, [[T$j]]>(
$for j,[[
    }
    }
    
    // The prime table interface.
class PrimeTable {
 public:
  virtual ~PrimeTable() {}
    }
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    #endif  // GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H

    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    std::vector<grpc::string_ref> SecureAuthContext::GetPeerIdentity() const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter = grpc_auth_context_peer_identity(ctx_);
  std::vector<grpc::string_ref> identity;
  const grpc_auth_property* property = nullptr;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    identity.push_back(
        grpc::string_ref(property->value, property->value_length));
  }
  return identity;
}
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    #ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
    SlowTimer::~SlowTimer() {
  int64_t msec = getTime();
  if (msec >= m_msThreshold && m_msThreshold != 0) {
    Logger::Error('SlowTimer [%' PRId64 'ms] at %s: %s',
                  msec, m_location.c_str(), m_info.c_str());
  }
}
    
    #endif
#endif

    
    //////////////////////////////////////////////////////////////////////
    
      void byte(const uint8_t byte) {
    assertCanEmit(sz::byte);
    *dest() = byte;
    m_frontier += sz::byte;
  }
  void word(const uint16_t word) {
    assertCanEmit(sz::word);
    *(uint16_t*)dest() = word;
    m_frontier += sz::word;
  }
  void dword(const uint32_t dword) {
    assertCanEmit(sz::dword);
    *(uint32_t*)dest() = dword;
    m_frontier += sz::dword;
  }
  void qword(const uint64_t qword) {
    assertCanEmit(sz::qword);
    *(uint64_t*)dest() = qword;
    m_frontier += sz::qword;
  }
    
    auto const test_array_packed_value3 = folly::lazy([] {
  auto ar = make_packed_array(
    1,
    2,
    3,
    4,
    5
  );
  return ArrayData::GetScalarArray(std::move(ar));
});
    
      /**
   * Write to file with specified format and arguments.
   */
  int64_t printf(const String& format, const Array& args);
    
    #include 'hphp/runtime/server/transport.h'
#include 'hphp/runtime/base/string-buffer.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/req-vector.h'
#include <curl/curl.h>
    
    Variant ini_get(unsigned char& p) {
  return p;
}
    
    void ShowErrorAndExit(DWORD ec, const wchar_t * func, int line)
{
	wchar_t * buffer;
	if (FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, ec, 0, (LPWSTR)&buffer, 0, NULL) == 0)
	{
		buffer = L'Unknown error. FormatMessage failed.';
	}
    }
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }
    
        MetaInfo info = src->Info();
    size_t bytes_write = 0;
    double tstart = dmlc::GetTime();
    auto iter = src->RowIterator();
    
      double double2[2] = {1.0, 2.0};
  EXPECT_EQ(info.GetRoot(1), 0)
    << 'When no root_index is given, was expecting default value 0';
  info.SetInfo('root_index', double2, xgboost::kDouble, 2);
  EXPECT_EQ(info.GetRoot(1), 2.0f);
    
    // extend our decision path with a fraction of one and zero extensions
inline void ExtendPath(PathElement *unique_path, unsigned unique_depth,
                       bst_float zero_fraction, bst_float one_fraction, int feature_index) {
  unique_path[unique_depth].feature_index = feature_index;
  unique_path[unique_depth].zero_fraction = zero_fraction;
  unique_path[unique_depth].one_fraction = one_fraction;
  unique_path[unique_depth].pweight = (unique_depth == 0 ? 1.0f : 0.0f);
  for (int i = unique_depth - 1; i >= 0; i--) {
    unique_path[i+1].pweight += one_fraction * unique_path[i].pweight * (i + 1)
                                / static_cast<bst_float>(unique_depth + 1);
    unique_path[i].pweight = zero_fraction * unique_path[i].pweight * (unique_depth - i)
                             / static_cast<bst_float>(unique_depth + 1);
  }
}
    
      // gather the histogram data
  rabit::SerializeReducer<WXQSketch::SummaryContainer> sreducer;
  std::vector<WXQSketch::SummaryContainer> summary_array;
  summary_array.resize(sketchs.size());
  for (size_t i = 0; i < sketchs.size(); ++i) {
    WXQSketch::SummaryContainer out;
    sketchs[i].GetSummary(&out);
    summary_array[i].Reserve(max_num_bins * kFactor);
    summary_array[i].SetPrune(out, max_num_bins * kFactor);
  }
  size_t nbytes = WXQSketch::SummaryContainer::CalcMemCost(max_num_bins * kFactor);
  sreducer.Allreduce(dmlc::BeginPtr(summary_array), nbytes, summary_array.size());
    
      dmlc::DataIter<SparsePage>* ColIterator() override;
    
        if (!p_fmat->HaveColAccess(false)) {
      monitor_.Start('InitColAccess');
      std::vector<bool> enabled(p_fmat->Info().num_col_, true);
      p_fmat->InitColAccess(param_.max_row_perbatch, false);
      monitor_.Stop('InitColAccess');
    }
    
    
    {    // configure predictor
    predictor_ = std::unique_ptr<Predictor>(Predictor::Create(tparam_.predictor));
    predictor_->Init(cfg, cache_);
    monitor_.Init('GBTree', tparam_.debug_verbose);
  }
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    #ifndef ROCKSDB_LITE
// This creates MemTableReps that are backed by an std::vector. On iteration,
// the vector is sorted. This is useful for workloads where iteration is very
// rare and writes are generally not issued after reads begin.
//
// Parameters:
//   count: Passed to the constructor of the underlying std::vector of each
//     VectorRep. On initialization, the underlying array will be at least count
//     bytes reserved for usage.
class VectorRepFactory : public MemTableRepFactory {
  const size_t count_;
    }
    
      if(env->ExceptionCheck()) {
    // exception thrown from CallLongMethod
    env->ExceptionDescribe();  // print out exception to stderr
    releaseJniEnv(attached_thread);
    return nullptr;
  }
    
      auto marker_iter = markers_.find(point);
  if (marker_iter != markers_.end()) {
    for (auto& marked_point : marker_iter->second) {
      marked_thread_id_.emplace(marked_point, thread_id);
    }
  }