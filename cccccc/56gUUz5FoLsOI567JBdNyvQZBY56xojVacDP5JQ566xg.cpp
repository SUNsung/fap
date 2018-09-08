
        
        void absDiff(const Size2D &size,
             const s8 *src0Base, ptrdiff_t src0Stride,
             const s8 *src1Base, ptrdiff_t src1Stride,
             s8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s8>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, i);
        const s16 * src1 = internal::getRowPtr(src1Base, src1Stride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vorrq_u8(v_src0, v_src1);
    }
    
            NormCanny<L2gradient>(size.width*cn, _dx, _dy, _norm);
    
    #define SPLIT_QUAD(sgn, bits, n) { \
                                     internal::prefetch(src + sj); \
                                     vec128 v_src = vld##n##q_##sgn##bits(src + sj); \
                                     FILL_LINES##n(VST1Q, sgn##bits) \
                                 }
    
    template <typename Op>
void vcompare(Size2D size,
              const typename Op::type * src0Base, ptrdiff_t src0Stride,
              const typename Op::type * src1Base, ptrdiff_t src1Stride,
              u8 * dstBase, ptrdiff_t dstStride, const Op & op)
{
    typedef typename Op::type type;
    typedef typename internal::VecTraits<type>::vec128 vec128;
    typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s32, u16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                             \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                             \n\t'
            'vcvt.f32.s32 q4, q2                                    \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vmul.f32 q6, q4, q0                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vadd.f32 q8, q6, q1                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vcvt.s32.f32 q10, q8                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vqmovun.s32 d24, q10                                   \n\t'
            'vqmovun.s32 d25, q11                                   \n\t'
            'vst1.16 {d24-d25}, [%[dst]]                            \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25'
        );
    }
})
#else
CVTS_FUNC(s32, u16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int32x4_t vline1_s32 = vld1q_s32(_src + i + 0);
        int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
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
    
    s32 countNonZero(const Size2D &_size,
                 const u16 * srcBase, ptrdiff_t srcStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    size_t roiw8 = size.width & ~7u;
    s32 result = 0;
    for(size_t k = 0; k < size.height; ++k)
    {
        const u16* src = internal::getRowPtr( srcBase,  srcStride, k);
        size_t i = 0;
    }
    }
    
    
    {
    {
    {                    for( k = 0; k < N; k++ )
                    {
                        s32 x = ptr[pixel[k]];
                        if(x > vt)
                        {
                            if( ++count > K )
                            {
                                cornerpos[ncorners++] = j;
                                if(nonmax_suppression)
                                    curr[j] = cornerScore(ptr, pixel);
                                break;
                            }
                        }
                        else
                            count = 0;
                    }
                }
            }
        }
    
    
    {            if (mask)
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
    namespace CAROTENE_NS {
    }
    
    
    {
    {OPERATOR_SCHEMA(ExtendTensor)
    .NumInputs(2)
    .NumOutputs(1)
    .EnforceInplace({{0, 0}})
    .SetDoc(R'DOC(
Extend input 0 if necessary based on max element in input 1.
Input 0 must be the same as output, that is, it is required to be in-place.
Input 0 may have to be re-allocated in order for accommodate to the new size.
Currently, an exponential growth ratio is used in order to ensure amortized
constant time complexity.
All except the outer-most dimension must be the same between input 0 and 1.
)DOC')
    .Input(0, 'tensor', 'The tensor to be extended.')
    .Input(
        1,
        'new_indices',
        'The size of tensor will be extended based on max element in '
        'new_indices.')
    .Output(
        0,
        'extended_tensor',
        'Same as input 0, representing the mutated tensor.');
}
} // namespace

    
    
    {  vector<int> y_shape(in[0].dims().begin(), in[0].dims().end());
  CAFFE_ENFORCE_LE(canonical_axis + 1, y_shape.size());
  y_shape.resize(canonical_axis + 1);
  y_shape[canonical_axis] = N;
  out[0] = CreateTensorShape(y_shape, in[0].data_type());
  return out;
}
    
    //for variant
template <>
struct GetTypeInfo<Variant> {
	static const Variant::Type VARIANT_TYPE = Variant::NIL;
	static inline PropertyInfo get_class_info() {
		return PropertyInfo(Variant::NIL, String(), PROPERTY_HINT_NONE, String(), PROPERTY_USAGE_DEFAULT | PROPERTY_USAGE_NIL_IS_VARIANT);
	}
};
    
    	Set<StringName> used_name_defines;
	Set<StringName> used_flag_pointers;
	Set<StringName> used_rmode_defines;
	Set<StringName> internal_functions;
    
    #include 'os/semaphore.h'
    
    struct DirAccessWindowsPrivate;
    
    	static DWORD WINAPI thread_callback(LPVOID userdata);
    
    #endif  // MXNET_GRAPH_ATTR_TYPES_H_

    
    
    {  DMLC_DECLARE_PARAMETER(CaffeDataParam) {
    DMLC_DECLARE_FIELD(prototxt).set_default('layer{}')
      .describe('Caffe's layer parameter');
    DMLC_DECLARE_FIELD(flat).set_default(false)
      .describe('Augmentation Param: Whether to flat the data into 1D.');
    DMLC_DECLARE_FIELD(num_examples).set_lower_bound(1).set_default(10000)
      .describe('Number of examples in the epoch.');
  }
};
    
      /*brief Set up caffeop to infer output shape*/
  bool InferShape(std::vector<TShape> *in_shape,
                  std::vector<TShape> *out_shape,
                  std::vector<TShape> *aux_shape) const override {
    using namespace mshadow;
    using ::caffe::Blob;
    using std::vector;
    if (caffeOp_ == NULL)
      caffeOp_ = caffe::LayerRegistry<float>::CreateLayer(param_.prototxt);
    }
    
    DMLC_REGISTER_PARAMETER(CaffeOpParam);
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
            if (extent.size() > rank)
            InvalidArgument('NDArrayView::SliceView: Dimensionality (%d) of the specified slice extent exceeds the rank (%d) of this NDArrayView.', (int)extent.size(), (int)rank);
    
                if ((oldOutputRank != SentinelValueForInferParamInitRank) && (oldOutputRank != outputRank))
                InvalidArgument('Output rank of a non-uniform random initialier cannot be overridden if it has been already specified!');
    
    
template <class ConfigRecordType>
void DataReader::InitFromConfig(const ConfigRecordType& /*config*/)
{
    RuntimeError('Init shouldn't be called, use constructor');
    // not implemented, calls the underlying class instead
}
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
        // request matrices needed to do node function value evaluation
    virtual void RequestMatricesBeforeForwardProp(MatrixPool& matrixPool)
    {
        Base::RequestMatricesBeforeForwardProp(matrixPool);
        RequestMatrixFromPool(m_urlGain0, matrixPool);
        RequestMatrixFromPool(m_urlGain1, matrixPool);
        RequestMatrixFromPool(m_urlDiscount0, matrixPool);
        RequestMatrixFromPool(m_urlDiscount1, matrixPool);
    }