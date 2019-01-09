
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    // Get RenderView from current js context (only works under window context).
content::RenderView* GetCurrentRenderView();
content::RenderView* GetEnteredRenderView();
    
    
    {  focus_manager_ = NULL;
}
    
    
    {  if (menu_)
    menu_->UpdateStates();
}
    
    
    {  return true;
}
    
        protected:
      ~NwScreenGetScreensFunction() override {}
      DECLARE_EXTENSION_FUNCTION('nw.Screen.getScreens', UNKNOWN)
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33>
internal::ValueArray33<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6,
    T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23,
    T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31,
    T32 v32, T33 v33) {
  return internal::ValueArray33<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33>(v1, v2, v3, v4, v5, v6, v7, v8,
      v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23,
      v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
}
    
    // We print a protobuf using its ShortDebugString() when the string
// doesn't exceed this many characters; otherwise we print it using
// DebugString() for better readability.
const size_t kProtobufOneLinerMaxLength = 50;
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
      // Gets the summary of the failure message by omitting the stack
  // trace in it.
  static std::string ExtractSummary(const char* message);
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT4.
// Don't use this in your code.
#define GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, v1, v2, v3, v4), \
                on_failure)
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47>
class ValueArray47 {
 public:
  ValueArray47(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
      T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47) : v1_(v1), v2_(v2),
      v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
      v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
      v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
      v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
      v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34),
      v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39), v40_(v40),
      v41_(v41), v42_(v42), v43_(v43), v44_(v44), v45_(v45), v46_(v46),
      v47_(v47) {}
    }
    
    #include <algorithm>
    
      // Try to divide n by every odd number i, starting from 3
  for (int i = 3; ; i += 2) {
    // We only have to try i up to the squre root of n
    if (i > n/i) break;
    }
    
    			image.m_bVerboseOutput = a_bVerboseOutput;
			image.Encode(a_format, a_eErrMetric, a_fEffort, a_uiJobs, a_uiMaxJobs);
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		// the alpha mix for a 4x4 block of pixels
		enum class SourceAlphaMix
		{
			UNKNOWN,
			//
			OPAQUE,			// all 1.0
			TRANSPARENT,	// all 0.0 or NAN
			TRANSLUCENT		// not all opaque or transparent
		};
    
    			float fLuma2 = a_frgbaDecodedColor.fR*0.2126f +
							a_frgbaDecodedColor.fG*0.7152f +
							a_frgbaDecodedColor.fB*0.0722f;
			float fChromaR2 = 0.5f * ((a_frgbaDecodedColor.fR - fLuma2) * (1.0f / (1.0f - 0.2126f)));
			float fChromaB2 = 0.5f * ((a_frgbaDecodedColor.fB - fLuma2) * (1.0f / (1.0f - 0.0722f)));
    
    #   define S_MUL(a,b) ( (a)*(b) )
#define C_MUL(m,a,b) \
    do{ (m).r = (a).r*(b).r - (a).i*(b).i;\
        (m).i = (a).r*(b).i + (a).i*(b).r; }while(0)
#define C_MULC(m,a,b) \
    do{ (m).r = (a).r*(b).r + (a).i*(b).i;\
        (m).i = (a).i*(b).r - (a).r*(b).i; }while(0)
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    static OPUS_INLINE short MULT16_16_P13(int a, int b)
{
   opus_int64 res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'MULT16_16_P13: inputs are not short: %d %d\n', a, b);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = ((opus_int64)a)*b;
   res += 4096;
   if (!VERIFY_INT(res))
   {
      fprintf (stderr, 'MULT16_16_P13: overflow: %d*%d=%d\n', a, b, (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res >>= 13;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'MULT16_16_P13: output is not short: %d*%d=%d\n', a, b, (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=4;
   return res;
}
static OPUS_INLINE short MULT16_16_P14(int a, int b)
{
   opus_int64 res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'MULT16_16_P14: inputs are not short: %d %d\n', a, b);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = ((opus_int64)a)*b;
   res += 8192;
   if (!VERIFY_INT(res))
   {
      fprintf (stderr, 'MULT16_16_P14: overflow: %d*%d=%d\n', a, b, (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res >>= 14;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'MULT16_16_P14: output is not short: %d*%d=%d\n', a, b, (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=4;
   return res;
}
static OPUS_INLINE short MULT16_16_P15(int a, int b)
{
   opus_int64 res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'MULT16_16_P15: inputs are not short: %d %d\n', a, b);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = ((opus_int64)a)*b;
   res += 16384;
   if (!VERIFY_INT(res))
   {
      fprintf (stderr, 'MULT16_16_P15: overflow: %d*%d=%d\n', a, b, (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res >>= 15;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'MULT16_16_P15: output is not short: %d*%d=%d\n', a, b, (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=2;
   return res;
}
    
    /* Compute Normalized Line Spectral Frequencies (NLSFs) from whitening filter coefficients      */
/* If not all roots are found, the a_Q16 coefficients are bandwidth expanded until convergence. */
void silk_A2NLSF(
    opus_int16                  *NLSF,              /* O    Normalized Line Spectral Frequencies in Q15 (0..2^15-1) [d] */
    opus_int32                  *a_Q16,             /* I/O  Monic whitening filter coefficients in Q16 [d]              */
    const opus_int              d                   /* I    Filter order (must be even)                                 */
);
    
    
    {  // Write must fail because of corrupted table
  std::string tmp1, tmp2;
  Status s = db_->Put(WriteOptions(), Key(5, &tmp1), Value(5, &tmp2));
  ASSERT_TRUE(!s.ok()) << 'write did not fail in corrupted paranoid db';
}
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    Status Writer::AddRecord(const Slice& slice) {
  const char* ptr = slice.data();
  size_t left = slice.size();
    }
    
    template<typename Key, class Comparator>
typename SkipList<Key,Comparator>::Node*
SkipList<Key,Comparator>::FindLessThan(const Key& key) const {
  Node* x = head_;
  int level = GetMaxHeight() - 1;
  while (true) {
    assert(x == head_ || compare_(x->key, key) < 0);
    Node* next = x->Next(level);
    if (next == nullptr || compare_(next->key, key) >= 0) {
      if (level == 0) {
        return x;
      } else {
        // Switch to next list
        level--;
      }
    } else {
      x = next;
    }
  }
}
    
    struct Comparator {
  int operator()(const Key& a, const Key& b) const {
    if (a < b) {
      return -1;
    } else if (a > b) {
      return +1;
    } else {
      return 0;
    }
  }
};
    
        SnapshotImpl* snapshot = new SnapshotImpl(sequence_number);
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    /*!
 * \brief Macro to register gradient booster.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_GBM(GBTree, 'gbtree')
 * .describe('Boosting tree ensembles.')
 * .set_body([]() {
 *     return new GradientBooster<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_GBM(UniqueId, Name)                            \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::GradientBoosterReg &          \
  __make_ ## GradientBoosterReg ## _ ## UniqueId ## __ =                \
      ::dmlc::Registry< ::xgboost::GradientBoosterReg>::Get()->__REGISTER__(Name)
    
            *j = json::parse(*f);
    
    typedef void(AbortHandlerT)();
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
      // Only add label to mean/stddev if it is same for all runs
  Run rms;
  big_o.report_label = reports[0].report_label;
  rms.benchmark_name = benchmark_name + '_RMS';
  rms.report_label = big_o.report_label;
  rms.iterations = 0;
  rms.real_accumulated_time = result_real.rms / multiplier;
  rms.cpu_accumulated_time = result_cpu.rms / multiplier;
  rms.report_rms = true;
  rms.complexity = result_cpu.complexity;
  // don't forget to keep the time unit, or we won't be able to
  // recover the correct value.
  rms.time_unit = reports[0].time_unit;
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
    inline LogType& GetErrorLogInstance() {
  static LogType log(&std::clog);
  return log;
}
    
    #define REQUIRES(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(requires_capability(__VA_ARGS__))
    
    template <class RNG, typename = void>
struct StateSize {
  // A sane default.
  using type = std::integral_constant<size_t, 512>;
};
    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
    
    { private:
  const KeepAlive<> executor_;
};
    
      ~atomic_shared_ptr() {
    store(SharedPtr(nullptr));
  }
  void operator=(SharedPtr desired) /* noexcept */ {
    store(std::move(desired));
  }
  void operator=(const atomic_shared_ptr<T>&) = delete;
    
    template <template <typename> class Atom = std::atomic>
class counted_ptr_internals : public counted_ptr_base<Atom> {
 public:
  template <typename T, typename... Args>
  static counted_ptr<T, Atom> make_ptr(Args&&... args) {
    return make_counted<Atom, T>(std::forward<Args...>(args...));
  }
  template <typename T>
  using CountedPtr = counted_ptr<T, Atom>;
  typedef void counted_base;
    }