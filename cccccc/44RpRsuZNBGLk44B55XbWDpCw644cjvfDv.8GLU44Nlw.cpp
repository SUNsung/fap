
        
        int secp256k1_ecdsa_recoverable_signature_serialize_compact(const secp256k1_context* ctx, unsigned char *output64, int *recid, const secp256k1_ecdsa_recoverable_signature* sig) {
    secp256k1_scalar r, s;
    }
    
        /* Check bad contexts and NULLs for recovery */
    ecount = 0;
    CHECK(secp256k1_ecdsa_recover(none, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recover(sign, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(vrfy, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, NULL, &recsig, message) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, NULL, message) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, NULL) == 0);
    CHECK(ecount == 5);
    
    #include <stdint.h>
#include <string>
#include <vector>
    
      uint64_t Size(const Slice& start, const Slice& limit) {
    Range r(start, limit);
    uint64_t size;
    db_->GetApproximateSizes(&r, 1, &size);
    return size;
  }
    
    
    {}  // namespace leveldb

    
    #define TEGRA_ABSDIFF(src1, sz1, src2, sz2, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::absDiff(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        uint16x8_t v_src0_p = vmovl_u8(vget_low_u8(v_src0));
        uint16x8_t v_src1_p = vmovl_u8(vget_low_u8(v_src1));
        float32x4_t v_dst0f = vmlaq_f32(vmulq_f32(vcvtq_f32_u32(vmovl_u16(vget_low_u16(v_src1_p))), v_beta),
                                        v_alpha, vcvtq_f32_u32(vmovl_u16(vget_low_u16(v_src0_p))));
        float32x4_t v_dst1f = vmlaq_f32(vmulq_f32(vcvtq_f32_u32(vmovl_u16(vget_high_u16(v_src1_p))), v_beta),
                                        v_alpha, vcvtq_f32_u32(vmovl_u16(vget_high_u16(v_src0_p))));
        uint16x8_t v_dst0 = vcombine_u16(vmovn_u32(vcvtq_u32_f32(v_dst0f)),
                                         vmovn_u32(vcvtq_u32_f32(v_dst1f)));
    }
    
    
    {
    {
    {            // make shift
            prevx = currx;
            currx = nextx;
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)border;
    (void)borderValue;
#endif
}
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
        for (size_t i = 0; i < size.height; ++i)
    {
        const s16 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, u16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vcvt.s32.f32 q12, q10                                  \n\t'
            'vqmovun.s32 d26, q11                                   \n\t'
            'vqmovun.s32 d27, q12                                   \n\t'
            'vst1.16 {d26-d27}, [%[dst]]                            \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27'
        );
    }
})
#else
CVTS_FUNC(s16, u16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        uint16x4_t vRes1 = vqmovun_s32(vline1_s32);
        uint16x4_t vRes2 = vqmovun_s32(vline2_s32);
        vst1q_u16(_dst + i, vcombine_u16(vRes1, vRes2));
    }
})
#endif
    
                prevx[1] = currx[1];
            currx[1] = nextx[1];
    
    namespace {
    }
    
            for ( ; x < width; ++x)
        {
            // make extrapolation for the last elements
            if (x + 1 >= width)
            {
                if (border == BORDER_MODE_CONSTANT)
                    nextx = borderValue * 3;
                else if (border == BORDER_MODE_REPLICATE)
                    nextx = srow2[x] + srow1[x] + srow0[x];
            }
            else
            {
                nextx = (srow2 ? srow2[x + 1] : borderValue) +
                                 srow1[x + 1] +
                        (srow0 ? srow0[x + 1] : borderValue);
            }
    }
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file image_augmenter.h
 * \brief Interface of opencv based image augmenter
 */
#ifndef MXNET_IO_IMAGE_AUGMENTER_H_
#define MXNET_IO_IMAGE_AUGMENTER_H_
    
    KVStore* KVStore::Create(const char *type_name) {
  std::string tname = type_name;
  std::transform(tname.begin(), tname.end(), tname.begin(), ::tolower);
  KVStore* kv = nullptr;
  bool use_device_comm = false;
  auto has = [tname](const std::string& pattern) {
    return tname.find(pattern) != std::string::npos;
  };
  if (has('device')) {
    use_device_comm = true;
  }
    }
    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
    
    {    Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid = in_data[bs::kGrid].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid_tmp = out_data[bs::kTmp].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
    // grid_tmp : (batch, h, w, 2)
    grid_tmp = transpose(grid, Shape4(0, 2, 3, 1));
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    CHECK_EQ(grid_tmp.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid_tmp.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    
    {
    {
    {  bool init_cudnn_;
  cudnnDataType_t dtype_;
  cudnnSpatialTransformerDescriptor_t st_desc_;
  cudnnTensorDescriptor_t in_desc_;
  cudnnTensorDescriptor_t out_desc_;
  cudnnSamplerType_t sampler_;
  #if CUDNN_MAJOR >= 5
  cudnnTensorFormat_t format_;
  #endif
  SpatialTransformerParam param_;
};
#endif  // __CUDACC__ && CUDNN
}  // namespace op
}  // namespace mxnet
    
    template<typename xpu>
void NDArrayOp<xpu>::Forward(const OpContext &ctx,
                   const std::vector<TBlob> &in_data,
                   const std::vector<OpReqType> &req,
                   const std::vector<TBlob> &out_data,
                   const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }
    
    
    {
    {            if (dataShape.SubShape(dataShape.Rank() - maskShape.Rank()) != maskShape)
                InvalidArgument('Invalid Value object: data and mask are incompatible. The %s dimensions of the data with shape '%S' '
                                'do not match the dimensions of the mask with shape '%S'', 
                                Internal::IsReversingTensorShapesInErrorMessagesEnabled() ? 'leading' : 'trailing',
                                dataShape.AsString().c_str(), maskShape.AsString().c_str());
        }
    }
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        assert(m_handle == NULL);
        m_handle = ::CreateMutexA(NULL /*security attr*/, FALSE /*bInitialOwner*/, m_name.c_str());
        if (m_handle == NULL)
        {
            if (!wait)
                return false;   // can't lock due to access permissions: lock already exists, consider not available
            else
                RuntimeError('Acquire: Failed to create named mutex %s: %d.', m_name.c_str(), GetLastError());
        }
    }
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    
    {private:
    long long m_start;
    long long m_end;
};
    
    
#if 1
        // support for legacy models when the mean and variance vectors were stored as column vectors (N,1)
        // This code will copy the shape of Input(0) (source) to Input(1) and Input(2) (target) if:
        //   1. The source is a 3-tensor with shape 1x1xM
        //   2. The target is a vector (i.e., a 2-tensor with shape Nx1)
        //   3. Both targets have the same number of elements
        //   4. The number of elements in the target (N) is the same as the number of elements in the source (M)
        // Note: This is somewhat ugly [Jasha Droppo].
    
    
    {        // is this the right place?  it was not called after bp.
        m_queryUrls.clear();
        m_urlSorter.clear();
        m_logWeights.clear();
    }
    
                // check with expected values
            if (!ISCLOSE(Input(1)->Gradient()(0, 0), 2, EPSILON)    // bi
                || !ISCLOSE(Input(1)->Gradient()(0, 1), 2, EPSILON) // Wxi
                || !ISCLOSE(Input(1)->Gradient()(1, 0), 2, EPSILON) // Whi
                || !ISCLOSE(Input(1)->Gradient()(2, 1), 2, EPSILON) // Wci
                )
                throw('LSTMNode gradient error on input gates');
    
    // -----------------------------------------------------------------------
// EpochAccumulatorNode calculates mean values of all samples used in forward pass.
// -----------------------------------------------------------------------
    
        void OptimizedMemoryAllocation()
    {
        // MatrixPool is not templated, so we call both float and double versions here 
        OptimizedMemoryAllocationFunc<float>(); 
        OptimizedMemoryAllocationFunc<double>();
        OptimizedMemoryAllocationFunc<half>();
        return; 
    }
    
                    // Peek ahead in the compiled pattern, to the URX_LOOP_C that
                //   must follow.  It's operand is the stack location
                //   that holds the starting input index for the match of this .*
                int32_t loopcOp = (int32_t)pat[fp->fPatIdx];
                U_ASSERT(URX_TYPE(loopcOp) == URX_LOOP_C);
                int32_t stackLoc = URX_VAL(loopcOp);
                U_ASSERT(stackLoc >= 0 && stackLoc < fFrameSize);
                fp->fExtra[stackLoc] = fp->fInputIdx;
                fp->fInputIdx = ix;
    
    #include 'unicode/utypes.h'
    
    class UTF16NFDIterator : public NFDIterator {
public:
    UTF16NFDIterator(const UChar *text, const UChar *textLimit) : s(text), limit(textLimit) {}
protected:
    virtual UChar32 nextRawCodePoint() {
        if(s == limit) { return U_SENTINEL; }
        UChar32 c = *s++;
        if(limit == NULL && c == 0) {
            s = NULL;
            return U_SENTINEL;
        }
        UChar trail;
        if(U16_IS_LEAD(c) && s != limit && U16_IS_TRAIL(trail = *s)) {
            ++s;
            c = U16_GET_SUPPLEMENTARY(c, trail);
        }
        return c;
    }
    }
    
    U_NAMESPACE_BEGIN
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
    SimpleDateFormatStaticSets::SimpleDateFormatStaticSets(UErrorCode &status)
: fDateIgnorables(NULL),
  fTimeIgnorables(NULL),
  fOtherIgnorables(NULL)
{
    fDateIgnorables  = new UnicodeSet(UNICODE_STRING('[-,./[:whitespace:]]', 20), status);
    fTimeIgnorables  = new UnicodeSet(UNICODE_STRING('[-.:[:whitespace:]]', 19),  status);
    fOtherIgnorables = new UnicodeSet(UNICODE_STRING('[:whitespace:]', 14),       status);
    }
    
    static const UChar gZero[] = { 0x7A, 0x65, 0x72, 0x6F };
static const UChar gOne[] = { 0x6F, 0x6E, 0x65 };
static const UChar gTwo[] = { 0x74, 0x77, 0x6F };
static const UChar gFew[] = { 0x66, 0x65, 0x77 };
static const UChar gMany[] = { 0x6D, 0x61, 0x6E, 0x79 };
static const UChar gOther[] = { 0x6F, 0x74, 0x68, 0x65, 0x72 };
    
    
    {    /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword
     */
    static int32_t indexFromString(const UnicodeString &keyword, UErrorCode &errorCode);
};
    
     public:
    
    /**
 * Construct a StringReplacer that sets the emits the given output
 * text and sets the cursor to the given position.
 * @param theOutput text that will replace input text when the
 * replace() method is called.  May contain stand-in characters
 * that represent nested replacers.
 * @param theCursorPos cursor position that will be returned by
 * the replace() method
 * @param theData transliterator context object that translates
 * stand-in characters to UnicodeReplacer objects
 */
StringReplacer::StringReplacer(const UnicodeString& theOutput,
                               int32_t theCursorPos,
                               const TransliterationRuleData* theData) {
    output = theOutput;
    cursorPos = theCursorPos;
    hasCursor = TRUE;
    data = theData;
    isComplex = TRUE;
}
    
        // create (integer) JSON numbers
    json j_short(n_short);
    json j_int(n_int);
    json j_long(n_long);
    json j_int_least32_t(n_int_least32_t);
    json j_uint8_t(n_uint8_t);