
        
            typedef ptrdiff_t  stride_t;
    
    void add(const Size2D &size,
         const u16 * src0Base, ptrdiff_t src0Stride,
         const u16 * src1Base, ptrdiff_t src1Stride,
         u16 * dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<u16, u32>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u16, u32>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    #define IMPL_ADDWEIGHTED(type)                                \
void addWeighted(const Size2D &,                              \
                 const type *, ptrdiff_t,                     \
                 const type *, ptrdiff_t,                     \
                 type *, ptrdiff_t,                           \
                 f32, f32, f32)                               \
{                                                             \
    internal::assertSupportedConfiguration();                 \
}
    
        inline void operator()(const u8* src, s16* dstx, s16* dsty, ptrdiff_t width)
    {
        uint8x8_t l = vtbl1_u8(vld1_u8(src - lookLeft), vfmask);
        ptrdiff_t i = 0;
        for (; i < width - 8 + lookRight; i += 8)
        {
            internal::prefetch(src + i);
            uint8x8_t l18u = vld1_u8(src + i + 1);
    }
    }
    
    #include 'common.hpp'
    
                    if( d & 2 )
                {
                    s32 vt = v + threshold, count = 0;
    }
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vSum_4_8, vc4u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vSum_5_9, vc4u16);
                vSum_0_4 = vmlaq_u16(vSum_0_4, vLane2.val[0], vc6u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vLane2.val[1], vc6u16);
    
        uint8x8_t vsub;
    uint16x8_t tprev = v_zero, tcurr = v_zero, tnext = v_zero;
    uint16x8_t t0 = v_zero, t1 = v_zero, t2 = v_zero;
    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    // A rather hackish helper structure which can take any kind of parameter input
// (defined by ParamType) and do a couple of common operations on them, like
// comparisond or getting its value. It is used in the context of the
// ParamsEditor as a bridge from the internal tesseract parameters to the
// ones displayed by the ScrollView server.
class ParamContent : public ELIST_LINK {
 public:
  // Compare two VC objects by their name.
  static int Compare(const void* v1, const void* v2);
    }
    
    #include 'blread.h'
#include <cstdio>       // for fclose, fopen, FILE
#include 'host.h'       // for TRUE
#include 'ocrblock.h'   // for BLOCK_IT, BLOCK, BLOCK_LIST (ptr only)
#include 'scanutils.h'  // for tfscanf
    
    // Deletes all the boxes stored in BoxWord.
void BoxWord::DeleteAllBoxes() {
  length_ = 0;
  boxes_.clear();
  bbox_ = TBOX();
}
    
    	if (cfgRoot.length() == 0) // '/c [path]' was NOT specified
	{
		swprintf_s(commandStr, L'%s \'%%V\'', baseCommandStr);
	}
	else {
		std::copy(cfgRoot.begin(), cfgRoot.end(), userConfigDirPath);
		userConfigDirPath[cfgRoot.length()] = 0;
		swprintf_s(commandStr, L'%s /c \'%s\' \'%%V\'', baseCommandStr, userConfigDirPath);
	}
    
    /*! \brief define unsigned long for openmp loop */
using omp_ulong = dmlc::omp_ulong;  // NOLINT
/*! \brief define unsigned int for openmp loop */
using bst_omp_uint = dmlc::omp_uint;  // NOLINT
    
    #if DMLC_ENABLE_STD_THREAD
/*!
 * \brief A threaded writer to write sparse batch page to sharded files.
 */
class SparsePageWriter {
 public:
  /*!
   * \brief constructor
   * \param name_shards name of shard files.
   * \param format_shards format of each shard.
   * \param extra_buffer_capacity Extra buffer capacity before block.
   */
  explicit SparsePageWriter(
      const std::vector<std::string>& name_shards,
      const std::vector<std::string>& format_shards,
      size_t extra_buffer_capacity);
  /*! \brief destructor, will close the files automatically */
  ~SparsePageWriter();
  /*!
   * \brief Push a write job to the writer.
   * This function won't block,
   * writing is done by another thread inside writer.
   * \param page The page to be written
   */
  void PushWrite(std::shared_ptr<SparsePage>&& page);
  /*!
   * \brief Allocate a page to store results.
   *  This function can block when the writer is too slow and buffer pages
   *  have not yet been recycled.
   * \param out_page Used to store the allocated pages.
   */
  void Alloc(std::shared_ptr<SparsePage>* out_page);
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
    
      // Computes the score (negative loss) resulting from performing this split
  virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats,
                                      bst_float left_weight,
                                      bst_float right_weight) const = 0;
    
        for (size_t i = 0; i < symbol_bits_; i++) {
      size_t byte_idx = ((offset + 1) * symbol_bits_ - (i + 1)) / bits_per_byte;
      byte_idx += detail::kPadding;
      size_t bit_idx =
          ((bits_per_byte + i) - ((offset + 1) * symbol_bits_)) % bits_per_byte;
    }
    
      inline static void LimitSizeLevel
    (size_t maxn, double eps, size_t* out_nlevel, size_t* out_limit_size) {
    size_t& nlevel = *out_nlevel;
    size_t& limit_size = *out_limit_size;
    nlevel = 1;
    while (true) {
      limit_size = static_cast<size_t>(ceil(nlevel / eps)) + 1;
      size_t n = (1ULL << nlevel);
      if (n * limit_size >= maxn) break;
      ++nlevel;
    }
    // check invariant
    size_t n = (1ULL << nlevel);
    CHECK(n * limit_size >= maxn) << 'invalid init parameter';
    CHECK(nlevel <= limit_size * eps) << 'invalid init parameter';
  }
    
    // PersistentCache
//
// Persistent cache interface for caching IO pages on a persistent medium. The
// cache interface is specifically designed for persistent read cache.
class PersistentCache {
 public:
  typedef std::vector<std::map<std::string, double>> StatsType;
    }