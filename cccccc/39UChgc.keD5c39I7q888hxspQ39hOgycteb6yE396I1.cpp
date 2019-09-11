
        
        #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/compiler/xla/status.h'
#include 'tensorflow/stream_executor/stream_executor.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      const std::vector<std::unique_ptr<Thunk>>& thunks() const { return thunks_; }
    
    TF_CALL_double(REGISTER_DIAGOP_GPU);
TF_CALL_float(REGISTER_DIAGOP_GPU);
TF_CALL_int32(REGISTER_DIAGOP_GPU);
TF_CALL_int64(REGISTER_DIAGOP_GPU);
TF_CALL_complex64(REGISTER_DIAGOP_GPU);
TF_CALL_complex128(REGISTER_DIAGOP_GPU);
#undef REGISTER_DIAGOP_GPU
    
    // Depending on the target, we may be able to use dedicated TSD keys or
// thread_local variables. When dedicated TSD keys aren't available,
// wrap the target's API for thread-local data for things that don't want
// to use thread_local.
    
      static constexpr uint32_t isLetBit(bool isLet) {
    return isLet ? 0 : _SwiftKeyPathComponentHeader_StoredMutableFlag;
  }
    
        check(!value.empty(), 'string was empty on entrance');
    auto component = TypeImportComponent(value[0]);
    value = value.drop_front(1);
    
      PrimarySpecificPaths(StringRef OutputFilename = StringRef(),
                       StringRef MainInputFilenameForDebugInfo = StringRef(),
                       SupplementaryOutputPaths SupplementaryOutputs =
                           SupplementaryOutputPaths())
      : OutputFilename(OutputFilename),
        SupplementaryOutputs(SupplementaryOutputs),
        MainInputFilenameForDebugInfo(MainInputFilenameForDebugInfo) {}
    
    static inline void swift_unownedInit(UnownedReference *ref, HeapObject *value) {
  ref->Value = value;
  swift_unownedRetain(value);
}
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    ROTATE_ARGS
	movdqa	XTMP3, XTMP2	; XTMP3 = W[-2] {DDCC}
    mov	y0, e		; y0 = e
    ror	y0, (25-11)	; y0 = e >> (25-11)
    mov	y1, a		; y1 = a
	movdqa	X0,    XTMP2	; X0    = W[-2] {DDCC}
    ror	y1, (22-13)	; y1 = a >> (22-13)
    xor	y0, e		; y0 = e ^ (e >> (25-11))
    mov	y2, f		; y2 = f
    ror	y0, (11-6)	; y0 = (e >> (11-6)) ^ (e >> (25-6))
	psrlq	XTMP2, 17	; XTMP2 = W[-2] ror 17 {xDxC}
    xor	y1, a		; y1 = a ^ (a >> (22-13)
    xor	y2, g		; y2 = f^g
	psrlq	XTMP3, 19	; XTMP3 = W[-2] ror 19 {xDxC}
    xor	y0, e		; y0 = e ^ (e >> (11-6)) ^ (e >> (25-6))
    and	y2, e		; y2 = (f^g)&e
    ror	y1, (13-2)	; y1 = (a >> (13-2)) ^ (a >> (22-2))
	psrld	X0,    10	; X0 = W[-2] >> 10 {DDCC}
    xor	y1, a		; y1 = a ^ (a >> (13-2)) ^ (a >> (22-2))
    ror	y0, 6		; y0 = S1 = (e>>6) & (e>>11) ^ (e>>25)
    xor	y2, g		; y2 = CH = ((f^g)&e)^g
	pxor	XTMP2, XTMP3
    ror	y1, 2		; y1 = S0 = (a>>2) ^ (a>>13) ^ (a>>22)
    add	y2, y0		; y2 = S1 + CH
    add	y2, [rsp + _XFER + 3*4]	; y2 = k + w + S1 + CH
	pxor	X0, XTMP2	; X0 = s1 {xDxC}
    mov	y0, a		; y0 = a
    add	h, y2		; h = h + S1 + CH + k + w
    mov	y2, a		; y2 = a
	pshufb	X0, SHUF_DC00	; X0 = s1 {DC00}
    or	y0, c		; y0 = a|c
    add	d, h		; d = d + h + S1 + CH + k + w
    and	y2, c		; y2 = a&c
	paddd	X0, XTMP0	; X0 = {W[3], W[2], W[1], W[0]}
    and	y0, b		; y0 = (a|c)&b
    add	h, y1		; h = h + S1 + CH + k + w + S0
    or	y0, y2		; y0 = MAJ = (a|c)&b)|(a&c)
    add	h, y0		; h = h + S1 + CH + k + w + S0 + MAJ
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    #ifndef IMFGENERICOUTPUTFILE_H_
#define IMFGENERICOUTPUTFILE_H_
    
    	    if (i.channel().xSampling != 1)
	    {
		THROW (IEX_NAMESPACE::ArgExc, 'The x subsampling factor for the '
				    '\'' << i.name() << '\' channel '
				    'is not 1.');
	    }	
    
        IMF_EXPORT
    Attribute &			operator [] (const std::string &name);
    IMF_EXPORT
    const Attribute &		operator [] (const std::string &name) const;
    
        
    //---------------------------------------------------------------
    // Check if SSE optimization is enabled
    //
    // Call after setFrameBuffer() to query whether optimized file decoding
    // is available - decode times will be faster if returns true
    //
    // Optimization depends on:
    //   the file type (only scanline data is supported),
    //   the framebuffer channels (RGB/RGBA mono or stereo)
    //   the framebuffer channel types (all channels half-float format only)
    //   the file channels (RGB/RGBA mono or stereo)
    //   the file channel types (all channel half-float format only)
    //   whether SSE2 instruction support was detected at compile time
    //
    // Calling isOptimizationEnabled before setFrameBuffer will throw an exception
    //
    //---------------------------------------------------------------
    
    IMF_EXPORT
    bool                isOptimizationEnabled () const;
    
    
    
    
    // Reads all boxes from the string. Otherwise, as ReadAllBoxes.
// continue_on_failure allows reading to continue even if an invalid box is
// encountered and will return true if it succeeds in reading some boxes.
// It otherwise gives up and returns false on encountering an invalid box.
bool ReadMemBoxes(int target_page, bool skip_blanks, const char* box_data,
                  bool continue_on_failure,
                  GenericVector<TBOX>* boxes,
                  GenericVector<STRING>* texts,
                  GenericVector<STRING>* box_texts,
                  GenericVector<int>* pages);
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
      // Setup the normalization transformation parameters.
  // The normalizations applied to a blob are as follows:
  // 1. An optional block layout rotation that was applied during layout
  // analysis to make the textlines horizontal.
  // 2. A normalization transformation (LocalNormTransform):
  // Subtract the 'origin'
  // Apply an x,y scaling.
  // Apply an optional rotation.
  // Add back a final translation.
  // The origin is in the block-rotated space, and is usually something like
  // the x-middle of the word at the baseline.
  // 3. Zero or more further normalization transformations that are applied
  // in sequence, with a similar pattern to the first normalization transform.
  //
  // A DENORM holds the parameters of a single normalization, and can execute
  // both the LocalNormTransform (a forwards normalization), and the
  // LocalDenormTransform which is an inverse transform or de-normalization.
  // A DENORM may point to a predecessor DENORM, which is actually the earlier
  // normalization, so the full normalization sequence involves executing all
  // predecessors first and then the transform in 'this'.
  // Let x be image co-ordinates and that we have normalization classes A, B, C
  // where we first apply A then B then C to get normalized x':
  // x' = CBAx
  // Then the backwards (to original coordinates) would be:
  // x = A^-1 B^-1 C^-1 x'
  // and A = B->predecessor_ and B = C->predecessor_
  // NormTransform executes all predecessors recursively, and then this.
  // NormTransform would be used to transform an image-based feature to
  // normalized space for use in a classifier
  // DenormTransform inverts this and then all predecessors. It can be
  // used to get back to the original image coordinates from normalized space.
  // The LocalNormTransform member executes just the transformation
  // in 'this' without the layout rotation or any predecessors. It would be
  // used to run each successive normalization, eg the word normalization,
  // and later the character normalization.
    
    #endif  // TESSERACT_CCMAIN_OTSUTHR_H_

    
      /* Initial reject modes (pre NN_ACCEPT) */
  R_POOR_MATCH,         // TEMP Ray's original heuristic (Not used)
  R_NOT_TESS_ACCEPTED,  // TEMP Tess didn't accept WERD
  R_CONTAINS_BLANKS,    // TEMP Tess failed on other chs in WERD
  R_BAD_PERMUTER,       // POTENTIAL Bad permuter for WERD
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
      // Visual debugger classifies the given sample, displays the results and
  // solicits user input to display other classifications. Returns when
  // the user has finished with debugging the sample.
  // Probably doesn't need to be overridden if the subclass provides
  // DisplayClassifyAs.
  virtual void DebugDisplay(const TrainingSample& sample, Pix* page_pix,
                            UNICHAR_ID unichar_id);
    
    #include 'WebMDemuxer.hpp'
    
    
# if defined(OC_CLZ32)
/**
 * OC_ILOGNZ_32 - Integer binary logarithm of a non-zero 32-bit value.
 * @_v: A non-zero 32-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_32() instead.
 */
#  define OC_ILOGNZ_32(_v) (OC_CLZ32_OFFS-OC_CLZ32(_v))
/**
 * OC_ILOG_32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_32(_v)   (OC_ILOGNZ_32(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_32(_v) (oc_ilog32(_v))
#  define OC_ILOG_32(_v)   (oc_ilog32(_v))
# endif
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
    #if defined(MBEDTLS_SSL_TLS_C) && ( !defined(MBEDTLS_CIPHER_C) ||     \
    !defined(MBEDTLS_MD_C) )
#error 'MBEDTLS_SSL_TLS_C defined, but not all prerequisites'
#endif
    
    /**
 * Fill in a mbed TLS certificate, based on the given PKCS11 helper certificate.
 *
 * \param cert          X.509 certificate to fill
 * \param pkcs11h_cert  PKCS #11 helper certificate
 *
 * \return              0 on success.
 */
int mbedtls_pkcs11_x509_cert_bind( mbedtls_x509_crt *cert, pkcs11h_certificate_t pkcs11h_cert );
    
    
    {    // TODO: Save application state and stop any background activity
}
    
    
    {    float posX = 0;
    auto lastChild = Children->GetAt(Children->Size - 1);
    float lastChildWidth = 0;
    if (Children->Size > 2 && ShouldPrioritizeLastItem())
    {
        lastChildWidth = lastChild->DesiredSize.Width;
    }
    for (auto item : Children)
    {
        auto widthAvailable = finalSize.Width - posX;
        if (item != lastChild)
        {
            widthAvailable -= lastChildWidth;
        }
        float itemWidth = item->DesiredSize.Width;
        if (widthAvailable > 0 && itemWidth <= widthAvailable)
        {
            // stack the items horizontally (left to right)
            item->Arrange(Rect(posX, 0, itemWidth, finalSize.Height));
            AutomationProperties::SetAccessibilityView(item, ::AccessibilityView::Content);
            posX += item->RenderSize.Width;
        }
        else
        {
            // Not display the item
            item->Arrange(Rect(0, 0, 0, 0));
            AutomationProperties::SetAccessibilityView(item, ::AccessibilityView::Raw);
        }
    }
    return finalSize;
}

    
        Number const& Rational::P() const
    {
        return m_p;
    }
    
    inline constexpr auto IDS_ERRORS_FIRST = 99;
    
    // DIVNUM(b) is the rational equivalent of thisterm /= b where thisterm is
// a rational and b is a number, NOTE this is a mixed type operation for
// efficiency reasons.
#define DIVNUM(b) mulnumx(&(thisterm->pq), b);
    
    using namespace std;
    
    void CCalcEngine::LoadEngineStrings(CalculationManager::IResourceProvider& resourceProvider)
{
    for (const auto& sid : g_sids)
    {
        auto locKey = wstring{ sid };
        auto locString = resourceProvider.GetCEngineString(locKey);
        if (!locString.empty())
        {
            s_engineStrings[locKey] = locString;
        }
    }
}
    
        struct HISTORYITEM
    {
        HISTORYITEMVECTOR historyItemVector;
    };
    
            bool IsNegative()
        {
            return m_isNegative;
        }
        void IsNegative(bool isNegative)
        {
            m_isNegative = isNegative;
        }
    
    LiveRegionHost::LiveRegionHost()
    : m_host(nullptr)
{
}
    
    SEXP XGDMatrixCreateFromFile_R(SEXP fname, SEXP silent) {
  SEXP ret;
  R_API_BEGIN();
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromFile(CHAR(asChar(fname)), asInteger(silent), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*!
 * \brief perform numerically safe logsum
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline float LogSum(Iterator begin, Iterator end) {
  float mx = *begin;
  for (Iterator it = begin; it != end; ++it) {
    mx = std::max(mx, *it);
  }
  float sum = 0.0f;
  for (Iterator it = begin; it != end; ++it) {
    sum += std::exp(*it - mx);
  }
  return mx + std::log(sum);
}
    
    DMLC_REGISTRY_FILE_TAG(sparse_page_raw_format);
    
    #ifdef __CUDACC__
  __device__ void AtomicWriteSymbol
    (CompressedByteT* buffer, uint64_t symbol, size_t offset) {
    size_t ibit_start = offset * symbol_bits_;
    size_t ibit_end = (offset + 1) * symbol_bits_ - 1;
    size_t ibyte_start = ibit_start / 8, ibyte_end = ibit_end / 8;
    }
    
    
    {   private:
    /*!
     * \brief a union value of value and flag
     *  when flag == -1, this indicate the value is missing
     */
    union Entry {
      bst_float fvalue;
      int flag;
    };
    std::vector<Entry> data_;
  };
  /*!
   * \brief get the leaf index
   * \param feat dense feature vector, if the feature is missing the field is set to NaN
   * \param root_id starting root index of the instance
   * \return the leaf index of the given feature
   */
  int GetLeafIndex(const FVec& feat, unsigned root_id = 0) const;
  /*!
   * \brief calculate the feature contributions (https://arxiv.org/abs/1706.06060) for the tree
   * \param feat dense feature vector, if the feature is missing the field is set to NaN
   * \param root_id starting root index of the instance
   * \param out_contribs output vector to hold the contributions
   * \param condition fix one feature to either off (-1) on (1) or not fixed (0 default)
   * \param condition_feature the index of the feature to fix
   */
  void CalculateContributions(const RegTree::FVec& feat, unsigned root_id,
                              bst_float* out_contribs, int condition = 0,
                              unsigned condition_feature = 0) const;
  /*!
   * \brief Recursive function that computes the feature attributions for a single tree.
   * \param feat dense feature vector, if the feature is missing the field is set to NaN
   * \param phi dense output vector of feature attributions
   * \param node_index the index of the current node in the tree
   * \param unique_depth how many unique features are above the current node in the tree
   * \param parent_unique_path a vector of statistics about our current path through the tree
   * \param parent_zero_fraction what fraction of the parent path weight is coming as 0 (integrated)
   * \param parent_one_fraction what fraction of the parent path weight is coming as 1 (fixed)
   * \param parent_feature_index what feature the parent node used to split
   * \param condition fix one feature to either off (-1) on (1) or not fixed (0 default)
   * \param condition_feature the index of the feature to fix
   * \param condition_fraction what fraction of the current weight matches our conditioning feature
   */
  void TreeShap(const RegTree::FVec& feat, bst_float* phi, unsigned node_index,
                unsigned unique_depth, PathElement* parent_unique_path,
                bst_float parent_zero_fraction, bst_float parent_one_fraction,
                int parent_feature_index, int condition,
                unsigned condition_feature, bst_float condition_fraction) const;
    
    
    {
    {}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_RANDOM_H_

    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
    
    {
    {}  // namespace metric
}  // namespace xgboost
    
    
    {  inline void SetPrune(const WQSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType begin = src.data[0].rmax;
    const RType range = src.data[src.size - 1].rmin - src.data[0].rmax;
    const size_t n = maxsize - 1;
    data[0] = src.data[0];
    this->size = 1;
    // lastidx is used to avoid duplicated records
    size_t i = 1, lastidx = 0;
    for (size_t k = 1; k < n; ++k) {
      RType dx2 =  2 * ((k * range) / n + begin);
      // find first i such that  d < (rmax[i+1] + rmin[i+1]) / 2
      while (i < src.size - 1
             && dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
      CHECK(i != src.size - 1);
      if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
        if (i != lastidx) {
          data[size++] = src.data[i]; lastidx = i;
        }
      } else {
        if (i + 1 != lastidx) {
          data[size++] = src.data[i + 1]; lastidx = i + 1;
        }
      }
    }
    if (lastidx != src.size - 1) {
      data[size++] = src.data[src.size - 1];
    }
  }
  /*!
   * \brief set current summary to be merged summary of sa and sb
   * \param sa first input summary to be merged
   * \param sb second input summary to be merged
   */
  inline void SetCombine(const WQSummary &sa,
                         const WQSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0);
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    // extended rmin value
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      // duplicated value entry
      if (a->value == b->value) {
        *dst = Entry(a->rmin + b->rmin,
                     a->rmax + b->rmax,
                     a->wmin + b->wmin, a->value);
        aprev_rmin = a->RMinNext();
        bprev_rmin = b->RMinNext();
        ++dst; ++a; ++b;
      } else if (a->value < b->value) {
        *dst = Entry(a->rmin + bprev_rmin,
                     a->rmax + b->RMaxPrev(),
                     a->wmin, a->value);
        aprev_rmin = a->RMinNext();
        ++dst; ++a;
      } else {
        *dst = Entry(b->rmin + aprev_rmin,
                     b->rmax + a->RMaxPrev(),
                     b->wmin, b->value);
        bprev_rmin = b->RMinNext();
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType brmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(a->rmin + bprev_rmin, a->rmax + brmax, a->wmin, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType armax = (a_end - 1)->rmax;
      do {
        *dst = Entry(b->rmin + aprev_rmin, b->rmax + armax, b->wmin, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    this->size = dst - data;
    const RType tol = 10;
    RType err_mingap, err_maxgap, err_wgap;
    this->FixError(&err_mingap, &err_maxgap, &err_wgap);
    if (err_mingap > tol || err_maxgap > tol || err_wgap > tol) {
      LOG(INFO) << 'mingap=' << err_mingap
                << ', maxgap=' << err_maxgap
                << ', wgap=' << err_wgap;
    }
    CHECK(size <= sa.size + sb.size) << 'bug in combine';
  }
  // helper function to print the current content of sketch
  inline void Print() const {
    for (size_t i = 0; i < this->size; ++i) {
      LOG(CONSOLE) << '[' << i << '] rmin=' << data[i].rmin
                   << ', rmax=' << data[i].rmax
                   << ', wmin=' << data[i].wmin
                   << ', v=' << data[i].value;
    }
  }
  // try to fix rounding error
  // and re-establish invariance
  inline void FixError(RType *err_mingap,
                       RType *err_maxgap,
                       RType *err_wgap) const {
    *err_mingap = 0;
    *err_maxgap = 0;
    *err_wgap = 0;
    RType prev_rmin = 0, prev_rmax = 0;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin < prev_rmin) {
        data[i].rmin = prev_rmin;
        *err_mingap = std::max(*err_mingap, prev_rmin - data[i].rmin);
      } else {
        prev_rmin = data[i].rmin;
      }
      if (data[i].rmax < prev_rmax) {
        data[i].rmax = prev_rmax;
        *err_maxgap = std::max(*err_maxgap, prev_rmax - data[i].rmax);
      }
      RType rmin_next = data[i].RMinNext();
      if (data[i].rmax < rmin_next) {
        data[i].rmax = rmin_next;
        *err_wgap = std::max(*err_wgap, data[i].rmax - rmin_next);
      }
      prev_rmax = data[i].rmax;
    }
  }
  // check consistency of the summary
  inline bool Check(const char *msg) const {
    const float tol = 10.0f;
    for (size_t i = 0; i < this->size; ++i) {
      if (data[i].rmin + data[i].wmin > data[i].rmax + tol ||
          data[i].rmin < -1e-6f || data[i].rmax < -1e-6f) {
        LOG(INFO) << '---------- WQSummary::Check did not pass ----------';
        this->Print();
        return false;
      }
    }
    return true;
  }
};
    
      /*
   * Add an object that occupies an index but can't be located by name.
   */
  void addUnnamed(const T& t);
    
    char *string_html_decode(const char *input, int &len,
                         bool decode_double_quote, bool decode_single_quote,
                         const char *charset_hint, bool all,
                         bool xhp /* = false */) {
  assert(input);
    }
    
    void cgDivInt(IRLS& env, const IRInstruction* inst) {
  auto const d = dstLoc(env, inst, 0).reg();
  auto const dividend = srcLoc(env, inst, 0).reg();
  auto const divisor  = srcLoc(env, inst, 1).reg();
  auto& v = vmain(env);
    }
    
    /*
 * Find a function which always uniquely maps to the given name in the context
 * of the given unit. A function so returned can be used directly in the TC as
 * it will not change.
 *
 * This generally includes persistent functions, but can also include
 * non-persistent functions in certain situations. Note that even if the
 * function is immutable, the unit it is defined in may need loading. In that
 * case, the function is safe to use, but you have to emit code to ensure the
 * unit is loaded first.
 */
struct ImmutableFuncLookup {
  const Func* func;
  // Does any use of this function require a check to ensure its unit is loaded?
  bool needsUnitLoad;
};
    
      // This essentially inlines Class::classofNonIFace
  auto const lhs = srcLoc(env, inst, 0).reg();
  auto const rhsTmp = v.makeReg();
  auto const rhsLen = v.makeReg();
  auto const sfVecLen = v.makeReg();
  if (sizeof(Class::veclen_t) == 2) {
    v << loadw{rhs[Class::classVecLenOff()], rhsTmp};
    v << movzwq{rhsTmp, rhsLen};
    v << cmpwm{rhsTmp, lhs[Class::classVecLenOff()], sfVecLen};
  } else if (sizeof(Class::veclen_t) == 4) {
    v << loadl{rhs[Class::classVecLenOff()], rhsTmp};
    v << movzlq{rhsTmp, rhsLen};
    v << cmplm{rhsTmp, lhs[Class::classVecLenOff()], sfVecLen};
  } else {
    not_implemented();
  }