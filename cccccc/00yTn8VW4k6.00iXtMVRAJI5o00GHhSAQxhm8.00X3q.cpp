
        
        /** @file
 * @deprecated Use @ref cudev instead.
 */
    
    #undef cv_hal_QR32f
#define cv_hal_QR32f lapack_QR32f
#undef cv_hal_QR64f
#define cv_hal_QR64f lapack_QR64f
    
    // EXPECT_DEBUG_DEATH asserts that the given statements die in debug mode.
// The death testing framework causes this to have interesting semantics,
// since the sideeffects of the call are only visible in opt mode, and not
// in debug mode.
//
// In practice, this can be used to test functions that utilize the
// LOG(DFATAL) macro using the following style:
//
// int DieInDebugOr12(int* sideeffect) {
//   if (sideeffect) {
//     *sideeffect = 12;
//   }
//   LOG(DFATAL) << 'death';
//   return 12;
// }
//
// TEST(TestCase, TestDieOr12WorksInDgbAndOpt) {
//   int sideeffect = 0;
//   // Only asserts in dbg.
//   EXPECT_DEBUG_DEATH(DieInDebugOr12(&sideeffect), 'death');
//
// #ifdef NDEBUG
//   // opt-mode has sideeffect visible.
//   EXPECT_EQ(12, sideeffect);
// #else
//   // dbg-mode no visible sideeffect.
//   EXPECT_EQ(0, sideeffect);
// #endif
// }
//
// This will assert that DieInDebugReturn12InOpt() crashes in debug
// mode, usually due to a DCHECK or LOG(DFATAL), but returns the
// appropriate fallback value (12 in this case) in opt mode. If you
// need to test that a function has appropriate side-effects in opt
// mode, include assertions against the side-effects.  A general
// pattern for this is:
//
// EXPECT_DEBUG_DEATH({
//   // Side-effects here will have an effect after this statement in
//   // opt mode, but none in debug mode.
//   EXPECT_EQ(12, DieInDebugOr12(&sideeffect));
// }, 'death');
//
# ifdef NDEBUG
    
    #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
      // Assumes one of the above roles.
  virtual TestRole AssumeRole() = 0;
    
    template<typename T> inline
bool operator==(T* ptr, const linked_ptr<T>& x) {
  return ptr == x.get();
}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24>
class ValueArray24 {
 public:
  ValueArray24(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24) : v1_(v1),
      v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
      v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
      v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21),
      v22_(v22), v23_(v23), v24_(v24) {}
    }
    
     private:
  void CalculatePrimesUpTo(int max) {
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;
    }
    
      // Sets up the network for training. Initializes weights using weights of
  // scale `range` picked according to the random number generator `randomizer`.
  int InitWeights(float range, TRand* randomizer) override;
  // Recursively searches the network for softmaxes with old_no outputs,
  // and remaps their outputs according to code_map. See network.h for details.
  int RemapOutputs(int old_no, const std::vector<int>& code_map) override;
    
      /**
   * Moves the iterator to point to the start of the page to begin an
   * iteration.
   */
  virtual void Begin();
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values) {
  int num_channels = pixGetDepth(src_pix) / 8;
  // Of all channels with no good hi_value, keep the best so we can always
  // produce at least one answer.
  PERF_COUNT_START('OtsuThreshold')
  int best_hi_value = 1;
  int best_hi_index = 0;
  bool any_good_hivalue = false;
  double best_hi_dist = 0.0;
  *thresholds = new int[num_channels];
  *hi_values = new int[num_channels];
    }
    
    
    {  pos = c_outline->start_pos (); //start of loop
  length = c_outline->pathlength ();
  stepindex = 0;
  epindex = 0;
  prevdir = -1;
  count = 0;
  int prev_stepindex = 0;
  do {
    dir = c_outline->step_dir (stepindex);
    vec = c_outline->step (stepindex);
    if (stepindex < length - 1
    && c_outline->step_dir (stepindex + 1) - dir == -32) {
      dir += 128 - 16;
      vec += c_outline->step (stepindex + 1);
      stepinc = 2;
    }
    else
      stepinc = 1;
    if (count == 0) {
      prevdir = dir;
      prev_vec = vec;
    }
    if (prevdir.get_dir () != dir.get_dir ()) {
      edgepts[epindex].pos.x = pos.x ();
      edgepts[epindex].pos.y = pos.y ();
      prev_vec *= count;
      edgepts[epindex].vec.x = prev_vec.x ();
      edgepts[epindex].vec.y = prev_vec.y ();
      pos += prev_vec;
      edgepts[epindex].flags[RUNLENGTH] = count;
      edgepts[epindex].prev = &edgepts[epindex - 1];
      edgepts[epindex].flags[FLAGS] = 0;
      edgepts[epindex].next = &edgepts[epindex + 1];
      prevdir += 64;
      epdir = (DIR128) 0 - prevdir;
      epdir >>= 4;
      epdir &= 7;
      edgepts[epindex].flags[DIR] = epdir;
      edgepts[epindex].src_outline = c_outline;
      edgepts[epindex].start_step = prev_stepindex;
      edgepts[epindex].step_count = stepindex - prev_stepindex;
      epindex++;
      prevdir = dir;
      prev_vec = vec;
      count = 1;
      prev_stepindex = stepindex;
    }
    else
      count++;
    stepindex += stepinc;
  }
  while (stepindex < length);
  edgepts[epindex].pos.x = pos.x ();
  edgepts[epindex].pos.y = pos.y ();
  prev_vec *= count;
  edgepts[epindex].vec.x = prev_vec.x ();
  edgepts[epindex].vec.y = prev_vec.y ();
  pos += prev_vec;
  edgepts[epindex].flags[RUNLENGTH] = count;
  edgepts[epindex].flags[FLAGS] = 0;
  edgepts[epindex].src_outline = c_outline;
  edgepts[epindex].start_step = prev_stepindex;
  edgepts[epindex].step_count = stepindex - prev_stepindex;
  edgepts[epindex].prev = &edgepts[epindex - 1];
  edgepts[epindex].next = &edgepts[0];
  prevdir += 64;
  epdir = (DIR128) 0 - prevdir;
  epdir >>= 4;
  epdir &= 7;
  edgepts[epindex].flags[DIR] = epdir;
  edgepts[0].prev = &edgepts[epindex];
  ASSERT_HOST (pos.x () == c_outline->start_pos ().x ()
    && pos.y () == c_outline->start_pos ().y ());
  return &edgepts[0];
}
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    namespace {
    }
    
      /*
   * Allocate a block of data to hold n objects of type T.
   *
   * Any instructions with VdataPtr members that point inside the buffer
   * returned by allocData() will automatically be fixed up during a relocation
   * pass immediately before final code emission.
   */
  template<typename T>
  T* allocData(size_t n = 1) {
    auto const size = sizeof(T) * n;
    dataBlocks.emplace_back();
    }
    
      mpz_init(gmpReturn);
  if (!mpz_invert(gmpReturn, gmpDataA, gmpDataB)) {
    mpz_clear(gmpDataA);
    mpz_clear(gmpDataB);
    mpz_clear(gmpReturn);
    return false;
  }
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
    struct SGDParams : public ScriptableObjects::Object
{
    template <class ConfigRecord> // (needed for default value of m_gradientBits)
    SGDParams(const ConfigRecord& configSGD, size_t sizeofElemType);
    }
    
        InvalidateCompiledNetwork();
    
    BOOST_FIXTURE_TEST_CASE(CPUMatrixDenseTimesSparse, RandomSeedFixture)
{
    Matrix<float> mAdense(CPUDEVICE);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    
    {public:
    inline hardcoded_array() throw()
    {
    }
    inline hardcoded_array(size_t n) throw()
    {
        check_size(n);
    } // we can instantiate with a size parameter--just checks the size
    inline hardcoded_array(size_t n, const _T& val) throw()
    {
        check_size(n);
        for (size_t i = 0; i < n; i++)
            data[i] = val;
    }
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return _N;
    }
};

    
    TEST(Metric, RMSE) {
  xgboost::Metric * metric = xgboost::Metric::Create('rmse');
  ASSERT_STREQ(metric->Name(), 'rmse');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.6403f, 0.001f);
}
    
    SEXP XGBoosterGetAttr_R(SEXP handle, SEXP name) {
  SEXP out;
  R_API_BEGIN();
  int success;
  const char *val;
  CHECK_CALL(XGBoosterGetAttr(R_ExternalPtrAddr(handle),
                              CHAR(asChar(name)),
                              &val,
                              &success));
  if (success) {
    out = PROTECT(allocVector(STRSXP, 1));
    SET_STRING_ELT(out, 0, mkChar(val));
  } else {
    out = PROTECT(R_NilValue);
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
    #if DMLC_ENABLE_STD_THREAD
#include '../src/data/sparse_page_source.cc'
#include '../src/data/sparse_page_dmatrix.cc'
#include '../src/data/sparse_page_writer.cc'
#endif
    
      void PredictLeaf(DMatrix *p_fmat,
                   std::vector<bst_float> *out_preds,
                   unsigned ntree_limit) override {
    LOG(FATAL) << 'gblinear does not support prediction of leaf index';
  }
    
    #include <string>
    
    namespace aria2 {
    }
    
    AbstractProxyRequestCommand::~AbstractProxyRequestCommand() = default;
    
    namespace aria2 {
    }
    
    AdaptiveFileAllocationIterator::~AdaptiveFileAllocationIterator() = default;
    
      virtual ~AdaptiveFileAllocationIterator();
    
    AnnounceTier::~AnnounceTier() = default;
    
      virtual ~AppleTLSContext();
    
    void configureAsyncNameResolverMan(AsyncNameResolverMan* asyncNameResolverMan,
                                   Option* option);
    
    #endif

    
    using namespace fuzzer;
    
    namespace fuzzer {
    }
    
    size_t MutationDispatcher::Mutate_InsertRepeatedBytes(uint8_t *Data,
                                                      size_t Size,
                                                      size_t MaxSize) {
  const size_t kMinBytesToInsert = 3;
  if (Size + kMinBytesToInsert >= MaxSize) return 0;
  size_t MaxBytesToInsert = std::min(MaxSize - Size, (size_t)128);
  size_t N = Rand(MaxBytesToInsert - kMinBytesToInsert + 1) + kMinBytesToInsert;
  assert(Size + N <= MaxSize && N);
  size_t Idx = Rand(Size + 1);
  // Insert new values at Data[Idx].
  memmove(Data + Idx + N, Data + Idx, Size - Idx);
  // Give preference to 0x00 and 0xff.
  uint8_t Byte = Rand.RandBool() ? Rand(256) : (Rand.RandBool() ? 0 : 255);
  for (size_t i = 0; i < N; i++)
    Data[Idx + i] = Byte;
  return Size + N;
}
    
    namespace fuzzer {
    }
    
    
/* header */