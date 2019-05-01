
        
            enum BORDER_MODE
    {
        BORDER_MODE_UNDEFINED,
        BORDER_MODE_CONSTANT,
        BORDER_MODE_REPLICATE,
        BORDER_MODE_REFLECT,
        BORDER_MODE_REFLECT101,
        BORDER_MODE_WRAP
    };
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = internal::saturate_cast<T>(src0[0] >= src1[0] ? (s64)src0[0] - src1[0] : (s64)src1[0] - src0[0]);
    }
};
    
    template <>
inline void NormCanny<true>(const ptrdiff_t colscn, s16* _dx, s16* _dy, s32* _norm)
{
    ptrdiff_t j = 0;
    if (colscn >= 8)
    {
        int16x8_t vx = vld1q_s16(_dx);
        int16x8_t vy = vld1q_s16(_dy);
    }
    }
    
    #define FILL_LINES2(macro,type) \
            macro##_LINE(type,0) \
            macro##_LINE(type,1)
#define FILL_LINES3(macro,type) \
            FILL_LINES2(macro,type) \
            macro##_LINE(type,2)
#define FILL_LINES4(macro,type) \
            FILL_LINES3(macro,type) \
            macro##_LINE(type,3)
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVT_FUNC(s16, u16, 8,
     register int16x8_t vZero asm ('q4') = vmovq_n_s16(0);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.16 {d0-d1}, [%[src]]                              \n\t'
             'vmax.s16 q1, q0, q4                                    \n\t'
             'vst1.16 {d2-d3}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst] 'r' (_dst + i + 0),
               'w' (vZero)
             : 'd0','d1','d2','d3'
         );
     }
})
#else
CVT_FUNC(s16, u16, 8,
     int16x4_t vZero = vmov_n_s16(0);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int16x8_t vline_s16 = vld1q_s16(_src + i);
    }
    }
    
            for ( ; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            uint16x8_t v_src0 = vld1q_u16(src + j), v_src1 = vld1q_u16(src + j + 8);
    }
    
    namespace CAROTENE_NS {
    }
    
      // These two overloads allow streaming a wide C string to a Message
  // using the UTF-8 encoding.
  Message& operator <<(const wchar_t* wide_c_str);
  Message& operator <<(wchar_t* wide_c_str);
    
    #if GTEST_HAS_STD_WSTRING
GTEST_API_ void PrintWideStringTo(const ::std::wstring&s, ::std::ostream* os);
inline void PrintTo(const ::std::wstring& s, ::std::ostream* os) {
  PrintWideStringTo(s, os);
}
#endif  // GTEST_HAS_STD_WSTRING
    
      // Returns true iff the test part fatally failed.
  bool fatally_failed() const { return type_ == kFatalFailure; }
    
      // Given directory = 'dir', relative_path = 'test.xml',
  // returns 'dir/test.xml'.
  // On Windows, uses \ as the separator rather than /.
  static FilePath ConcatPaths(const FilePath& directory,
                              const FilePath& relative_path);
    
    // Helper macro for defining tests.
#define GTEST_TEST_(test_case_name, test_name, parent_class, parent_id)\
class GTEST_TEST_CLASS_NAME_(test_case_name, test_name) : public parent_class {\
 public:\
  GTEST_TEST_CLASS_NAME_(test_case_name, test_name)() {}\
 private:\
  virtual void TestBody();\
  static ::testing::TestInfo* const test_info_ GTEST_ATTRIBUTE_UNUSED_;\
  GTEST_DISALLOW_COPY_AND_ASSIGN_(\
      GTEST_TEST_CLASS_NAME_(test_case_name, test_name));\
};\
\
::testing::TestInfo* const GTEST_TEST_CLASS_NAME_(test_case_name, test_name)\
  ::test_info_ =\
    ::testing::internal::MakeAndRegisterTestInfo(\
        #test_case_name, #test_name, NULL, NULL, \
        (parent_id), \
        parent_class::SetUpTestCase, \
        parent_class::TearDownTestCase, \
        new ::testing::internal::TestFactoryImpl<\
            GTEST_TEST_CLASS_NAME_(test_case_name, test_name)>);\
void GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::TestBody()
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_

    
    ]]
    
      // Try to divide n by every odd number i, starting from 3
  for (int i = 3; ; i += 2) {
    // We only have to try i up to the squre root of n
    if (i > n/i) break;
    }
    
    TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    
    {  E element_;
  QueueNode* next_;
};
    
    AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    // TODO: This may not be needed. Check to see if opencensus requires
// a trailing server response.
// RpcServerStatsEncoding encapsulates the logic for encoding and decoding of
// rpc server stats messages. Rpc server stats consists of a uint64_t time
// value (server latency in nanoseconds).
class RpcServerStatsEncoding {
 public:
  // Size of encoded RPC server stats.
  static constexpr size_t kRpcServerStatsSize = 10;
  // Error value.
  static constexpr size_t kEncodeDecodeFailure = 0;
    }
    
      // Add the full names of registered services
  void SetServiceList(const std::vector<grpc::string>* services);
    
    uint64_t PerBalancerStore::GetNumCallsInProgressForReport() {
  GPR_ASSERT(!suspended_);
  last_reported_num_calls_in_progress_ = num_calls_in_progress_;
  return num_calls_in_progress_;
}
    
    #endif  // GRPC_INTERNAL_CPP_UTIL_CORE_STATS_H

    
    namespace grpc {
    }
    
    INarratorAnnouncementHost^ NarratorAnnouncementHostFactory::GetHostProducer()
{
    for (INarratorAnnouncementHost^ host : NarratorAnnouncementHostFactory::s_hosts)
    {
        if (host->IsHostAvailable())
        {
            return host;
        }
    }
    }
    
            return std::make_shared<CBinaryCommand>(DeserializeBinary());
        break;
    
            static void UpdateFontFamilyAndSize(Windows::UI::Xaml::DependencyObject^ target);
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    
    {    msgPattern.parseSelectStyle(newPattern, NULL, status);
    if (U_FAILURE(status)) {
        msgPattern.clear();
    }
}
    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    #endif

    
        if (fSharedNumberFormatters != NULL) {
        freeSharedNumberFormatters(fSharedNumberFormatters);
        fSharedNumberFormatters = NULL;
    }
    if (other.fSharedNumberFormatters != NULL) {
        fSharedNumberFormatters = allocSharedNumberFormatters();
        if (fSharedNumberFormatters) {
            for (int32_t i = 0; i < UDAT_FIELD_COUNT; ++i) {
                SharedObject::copyPtr(
                        other.fSharedNumberFormatters[i],
                        fSharedNumberFormatters[i]);
            }
        }
    }
    
    SimpleDateFormatStaticSets::SimpleDateFormatStaticSets(UErrorCode &status)
: fDateIgnorables(NULL),
  fTimeIgnorables(NULL),
  fOtherIgnorables(NULL)
{
    fDateIgnorables  = new UnicodeSet(UNICODE_STRING('[-,./[:whitespace:]]', 20), status);
    fTimeIgnorables  = new UnicodeSet(UNICODE_STRING('[-.:[:whitespace:]]', 19),  status);
    fOtherIgnorables = new UnicodeSet(UNICODE_STRING('[:whitespace:]', 14),       status);
    }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
        /**
     * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
     * and return the pointer.
     * @return the UnicodeReplacer pointer.
     */
    virtual UnicodeReplacer* toReplacer() const;