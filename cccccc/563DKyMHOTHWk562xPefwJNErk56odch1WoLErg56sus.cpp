
        
            /*
        Convert BGRX image to YCrCb
    */
    void bgrx2ycrcb(const Size2D &size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    u8 * dstBase, ptrdiff_t dstStride);
    
            size_t width;
        size_t height;
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vadd(v_src0, v_src1);
    }
    
        void operator() (const typename VecTraits<T>::vec64 & v_src0,
                     const typename VecTraits<T>::vec64 & v_src1,
                     typename VecTraits<T>::vec64 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vr;
        wideAdd(vmovl(v_src0), vmovl(v_src1), vr);
    }
    
    #include 'common.hpp'
#include 'saturate_cast.hpp'
    
                int32x2_t vnz1 = vreinterpret_s32_u32(vpmax_u32(vget_low_u32(vlx1), vget_high_u32(vlx1)));
            int32x2_t vnz2 = vreinterpret_s32_u32(vpmax_u32(vget_low_u32(vlx2), vget_high_u32(vlx2)));
    
            size_t i = 0;
        while(i + 4 <= size.width)
        {
            size_t lim = std::min(i + DOT_FLOAT_BLOCKSIZE, size.width) - 4;
            float32x4_t v_sum = vdupq_n_f32(0.0f);
    }
    
    inline float32x2_t vsqrt_f32(float32x2_t val)
{
    return vrecp_f32(vrsqrt_f32(val));
}
    
      // Print statistics.
  void print_scores(void) const;
  void print_scores(int orientation_id) const;
    
    #include 'tesseractclass.h'
#ifdef _OPENMP
#include <omp.h>
#endif  // _OPENMP
    
    
    {  bool rword_indicates_list_item;
  bool rword_likely_starts_idea;
  bool rword_likely_ends_idea;
};
    
      // Computes and returns the squared evaluation metric for a line fit.
  double EvaluateLineFit();
    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
      // Returns a pointer to the vector with all unichar ids that appear in the
  // 'correct' part of the ambiguity pair when the given unichar id appears
  // in the 'wrong' part of the ambiguity. E.g. if DangAmbigs file consist of
  // m->rn,rn->m,m->iii, UnicharAmbigsForAdaption() called with unichar id of
  // m will return a pointer to a vector with unichar ids of r,n,i.
  inline const UnicharIdVector *AmbigsForAdaption(
      UNICHAR_ID unichar_id) const {
    if (ambigs_for_adaption_.empty()) return nullptr;
    return ambigs_for_adaption_[unichar_id];
  }
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
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
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
    #define GTEST_TEST_THROW_(statement, expected_exception, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::ConstCharPtr gtest_msg = '') { \
    bool gtest_caught_expected = false; \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (expected_exception const&) { \
      gtest_caught_expected = true; \
    } \
    catch (...) { \
      gtest_msg.value = \
          'Expected: ' #statement ' throws an exception of type ' \
          #expected_exception '.\n  Actual: it throws a different type.'; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
    if (!gtest_caught_expected) { \
      gtest_msg.value = \
          'Expected: ' #statement ' throws an exception of type ' \
          #expected_exception '.\n  Actual: it throws nothing.'; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__): \
      fail(gtest_msg.value)
    
      template <GTEST_6_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_6_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    return *this;
  }
    
    #include <string.h>
    
    void ClippingRectangleNode::onAfterVisitScissor()
{
    if (_clippingEnabled)
    {
        glDisable(GL_SCISSOR_TEST);
    }
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    
    {    virtual int* getHorizontalKerningForTextUTF32(const std::u32string& text, int &outNumLetters) const = 0;
    
    CC_DEPRECATED_ATTRIBUTE inline int* getHorizontalKerningForTextUTF16(const std::u16string& text, int &outNumLetters) const
    {
        std::u32string utf32;
        StringUtils::UTF16ToUTF32(text, utf32);
        return getHorizontalKerningForTextUTF32(utf32, outNumLetters);
    }
    
    virtual int getFontMaxHeight() const { return 0; }
};
    
    // ============================================================================
// folly/test/GLogBenchmark.cpp                    relative  time/iter  iters/s
// ============================================================================
// skip_overhead                                               36.37ns   27.49M
// dev_null_log_overhead                                        2.61us  382.57K
// ============================================================================
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    #include <folly/GLog.h>
    
    #include <glog/logging.h>
    
    // Return the state size needed by RNG, expressed as a number of uint32_t
// integers. Specialized for all templates specified in the C++11 standard.
// For some (mersenne_twister_engine), this is exported as a state_size static
// data member; for others, the standard shows formulas.
    
    /*
 * Encode a single unicode code point into a UTF-8 byte sequence.
 *
 * Return value is undefined if `cp' is an invalid code point.
 */
std::string codePointToUtf8(char32_t cp);
    
    #include <folly/io/Cursor.h>
#include <folly/io/IOBuf.h>
#include <folly/lang/Bits.h>
    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}
    
    struct counted_shared_tag {};
template <template <typename> class Atom = std::atomic>
struct intrusive_shared_count {
  intrusive_shared_count() {
    counts.store(0);
  }
  void add_ref(uint64_t count = 1) {
    counts.fetch_add(count);
  }
    }