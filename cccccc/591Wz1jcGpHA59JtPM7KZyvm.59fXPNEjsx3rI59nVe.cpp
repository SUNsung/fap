
    {}  // namespace nwapi
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
        ~ClipboardWriter() {
      scw_.reset();
    }
    
        typedef int8_t   s8;
    typedef uint8_t  u8;
    typedef int16_t  s16;
    typedef uint16_t u16;
    typedef int32_t  s32;
    typedef uint32_t u32;
    typedef float    f32;
    typedef int64_t  s64;
    typedef uint64_t u64;
    typedef double   f64;
    
    void bitwiseXor(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseXor());
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
    
    
    {
    {        for (; dj < size.width; sj += 3, ++dj)
        {
            dst[dj] = src[sj + coi];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)coi;
#endif
}
    
            for( ; x < roiw_base; x += step_base )
        {
            internal::prefetch(src0 + x);
            internal::prefetch(src1 + x);
    }
    
    namespace internal {
    }
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVT_FUNC(s8, u16, 16,
     register uint8x16_t zero0 asm ('q1') = vmovq_n_u8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src]]                              \n\t'
             'vmax.s8 q0, q1                                        \n\t'
             'vst2.8 {d0,d2}, [%[dst1]]                             \n\t'
             'vst2.8 {d1,d3}, [%[dst2]]                             \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst1] 'r' (_dst + i + 0),
               [dst2] 'r' (_dst + i + 8),
               'w' (zero0)
             : 'd0','d1'
         );
     }
})
#else
CVT_FUNC(s8, u16, 16,
     int8x16x2_t vline_s8;
     vline_s8.val[1] = vmovq_n_s8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         vline_s8.val[0] = vld1q_s8(_src + i);
         vline_s8.val[0] = vmaxq_s8(vline_s8.val[0], vline_s8.val[1]);
         vst2q_s8((int8_t*)(_dst + i), vline_s8);
     }
})
#endif
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
CVTS_FUNC1(s8, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s8 q3, d4                                       \n\t'
            'vmovl.s8 q4, d5                                       \n\t'
            'vmovl.s16 q5, d6                                      \n\t'
            'vmovl.s16 q6, d7                                      \n\t'
            'vmovl.s16 q7, d8                                      \n\t'
            'vmovl.s16 q8, d9                                      \n\t'
            'vcvt.f32.s32 q9, q5                                   \n\t'
            'vcvt.f32.s32 q10, q6                                  \n\t'
            'vcvt.f32.s32 q11, q7                                  \n\t'
            'vcvt.f32.s32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vqmovn.s32 d22, q7                                    \n\t'
            'vqmovn.s32 d23, q8                                    \n\t'
            'vqmovn.s32 d24, q9                                    \n\t'
            'vqmovn.s32 d25, q10                                   \n\t'
            'vqmovn.s16 d26, q11                                   \n\t'
            'vqmovn.s16 d27, q12                                   \n\t'
            'vst1.8 {d26-d27}, [%[dst1]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC1(s8, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        int8x16_t vline = vld1q_s8(_src + i);
        int16x8_t vline1_s16 = vmovl_s8(vget_low_s8 (vline));
        int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline));
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline1_s16));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
        int32x4_t vline3_s32 = vmovl_s16(vget_low_s16 (vline2_s16));
        int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
        float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vline3_s32 = vcvtq_s32_f32(vline3_f32);
        vline4_s32 = vcvtq_s32_f32(vline4_f32);
        int16x8_t vRes1_s16 = vcombine_s16(vqmovn_s32(vline1_s32), vqmovn_s32(vline2_s32));
        int16x8_t vRes2_s16 = vcombine_s16(vqmovn_s32(vline3_s32), vqmovn_s32(vline4_s32));
        vst1q_s8(_dst + i, vcombine_s8(vqmovn_s16(vRes1_s16), vqmovn_s16(vRes2_s16)));
    }
})
#endif
    
    
    {        for (; i < size.width; ++i)
            result += src0[i] * src1[i];
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
    
    {} // namespace CAROTENE_NS

    
    #endif

    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    #endif  // CAFFE_LAYER_FACTORY_H_

    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    /**
 * @brief Computes a sum of two input Blobs, with the shape of the latter Blob
 *        'broadcast' to match the shape of the former. Equivalent to tiling
 *        the latter Blob, then computing the elementwise sum.
 *
 * The second input may be omitted, in which case it's learned as a parameter
 * of the layer. Note: in case bias and scaling are desired, both operations can
 * be handled by `ScaleLayer` configured with `bias_term: true`.
 */
template <typename Dtype>
class BiasLayer : public Layer<Dtype> {
 public:
  explicit BiasLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    
    {  int size_;
  Dtype alpha_, beta_, k_;
};
#endif
    
    
    {
    {}}
    
    struct SrcPos {
  bool operator==(SrcPos o) const {
    return line == o.line && col == o.col;
  }
  bool operator!=(SrcPos o) const { return !(*this == o); }
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
      virtual void PredictBatch(DMatrix* dmat, HostDeviceVector<bst_float>* out_preds,
                            const gbm::GBTreeModel& model, int tree_begin,
                            unsigned ntree_limit = 0) = 0;
    
    
    {
    {
    {  // base margin
  bst_float base_margin;
  // model parameter
  GBTreeModelParam param;
  /*! \brief vector of trees stored in the model */
  std::vector<std::unique_ptr<RegTree> > trees;
  /*! \brief for the update process, a place to keep the initial trees */
  std::vector<std::unique_ptr<RegTree> > trees_to_update;
  /*! \brief some information indicator of the tree, reserved */
  std::vector<int> tree_info;
};
}  // namespace gbm
}  // namespace xgboost

    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
      virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats) const;
    
      ~DHTSetup();
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    
    {} // namespace aria2

    
    public:
  DHTTaskQueueImpl();
    
    bool DNSCache::CacheEntry::add(const std::string& addr)
{
  for (std::vector<AddrEntry>::const_iterator i = addrEntries_.begin(),
                                              eoi = addrEntries_.end();
       i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return false;
    }
  }
  addrEntries_.push_back(AddrEntry(addr));
  return true;
}