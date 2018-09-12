
        
          bool visitSILFunctionType(SILFunctionType *ty) {
    for (auto param : ty->getParameters())
      if (doIt(param.getType()))
        return true;
    for (auto result : ty->getResults())
      if (doIt(result.getType()))
        return true;
    if (ty->hasErrorResult())
      if (doIt(ty->getErrorResult().getType()))
        return true;
    return false;
  }
    
      Begin -= needed;
    
        void thresholdToZeroInv(const Size2D &size,
                            const s32 *srcBase, ptrdiff_t srcStride,
                            s32 *dstBase, ptrdiff_t dstStride,
                            s32 threshold);
    
                v_srclo = vget_low_s16(v_src1);
            v_srchi = vget_high_s16(v_src1);
            v_dst1 = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst1))),
                                  vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst1))));
    
        f32 alpha, beta, gamma;
    float32x4_t valpha, vbeta, vgamma;
    wAdd(f32 _alpha, f32 _beta, f32 _gamma):
        alpha(_alpha), beta(_beta), gamma(_gamma)
    {
        valpha = vdupq_n_f32(_alpha);
        vbeta = vdupq_n_f32(_beta);
        vgamma = vdupq_n_f32(_gamma + 0.5);
    }
    
    #ifdef CAROTENE_NEON
namespace {
struct RowFilter3x3Canny
{
    inline RowFilter3x3Canny(const ptrdiff_t borderxl, const ptrdiff_t borderxr)
    {
        vfmask = vreinterpret_u8_u64(vmov_n_u64(borderxl ? 0x0000FFffFFffFFffULL : 0x0100FFffFFffFFffULL));
        vtmask = vreinterpret_u8_u64(vmov_n_u64(borderxr ? 0x0707060504030201ULL : 0x0706050403020100ULL));
        lookLeft = offsetk - borderxl;
        lookRight = offsetk - borderxr;
    }
    }
    }
    
    template<typename T>
struct OpCmpGT
{
    typedef T type;
    }
    
    
    {
    {}}
    
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
    
                vst1_u8((u8 *)&mask, vmovn_u16(vcombine_u16(vmovn_u32(v_mask0), vmovn_u32(v_mask1))));
    
    namespace CAROTENE_NS {
    }
    
            const s32* ln0 = idx_rm2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm2) : tmp;
        const s32* ln1 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const s32* ln2 = internal::getRowPtr(srcBase, srcStride, i);
        const s32* ln3 = idx_rp1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp1) : tmp;
        const s32* ln4 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
            uint32x4_t el8shr01l =  vaddl_u16(vget_low_u16(el8shr0), vget_low_u16(el8shr1));
        uint32x4_t el8shr01h =  vaddl_u16(vget_high_u16(el8shr0), vget_high_u16(el8shr1));
    
    
    {  DEBUG('manager done');
  return 0;
}

    
    Github Link:
- https://github.com/pytorch/pytorch/blob/master/caffe2/operators/exp_op.cc
    
    namespace caffe2 {
std::vector<TensorShape> FCShapeInference(
    const OperatorDef& def,
    const vector<TensorShape>& in,
    bool pretransposed_weight) {
  vector<TensorShape> out(1);
  ArgumentHelper helper(def);
    }
    }
    
    REGISTER_CPU_OPERATOR(
    MergeSingleMapFeatureTensors,
    MergeSingleMapFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleMapFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with map features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 4 && n % 4 == 0; })
    .NumOutputs(5)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_keys', '.keys')
    .Input(2, 'in1_values', '.values')
    .Input(3, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_keys', '.values.keys')
    .Output(4, 'out_values_values', '.values.values')
    .Arg('feature_ids', 'feature ids');
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
      FlexibleTopKOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws) {}
    
    ```
    
    
    {
    {    const float* Xdata = X.template data<float>();
    float* Ydata = Y->template mutable_data<float>();
    for (int i = 0; i < X.size(); ++i) {
      Ydata[i] = std::floor(Xdata[i]);
    }
    return true;
  }
};
    
      InternalIterator* input_;
  const Comparator* cmp_;
  MergeHelper* merge_helper_;
  const std::vector<SequenceNumber>* snapshots_;
  const SequenceNumber earliest_write_conflict_snapshot_;
  const SnapshotChecker* const snapshot_checker_;
  Env* env_;
  bool report_detailed_time_;
  bool expect_valid_internal_key_;
  RangeDelAggregator* range_del_agg_;
  std::unique_ptr<CompactionProxy> compaction_;
  const CompactionFilter* compaction_filter_;
  const std::atomic<bool>* shutting_down_;
  const SequenceNumber preserve_deletes_seqnum_;
  bool bottommost_level_;
  bool valid_ = false;
  bool visible_at_tip_;
  SequenceNumber earliest_snapshot_;
  SequenceNumber latest_snapshot_;
  bool ignore_snapshots_;
    
      cfilter_count = 0;
  ASSERT_OK(db_->CompactRange(CompactRangeOptions(), nullptr, nullptr));
  // The filter should delete 40 records.
  ASSERT_EQ(40U, cfilter_count);
    
      mutex_.Lock();
    
      ASSERT_TRUE(controller.IsStopped());
  stop_token_1.reset();
  ASSERT_TRUE(controller.IsStopped());
  stop_token_2.reset();
  ASSERT_FALSE(controller.IsStopped());
    
     public:
  EncryptedRandomRWFile(RandomRWFile* f, BlockAccessCipherStream* s, size_t prefixLength)
    : file_(f), stream_(s), prefixLength_(prefixLength) {}
    
      TEST_KILL_RANDOM('PosixMmapFile::Append:1', rocksdb_kill_odds);
  void* ptr = mmap(nullptr, map_size_, PROT_READ | PROT_WRITE, MAP_SHARED, fd_,
                   file_offset_);
  if (ptr == MAP_FAILED) {
    return Status::IOError('MMap failed on ' + filename_);
  }
  TEST_KILL_RANDOM('PosixMmapFile::Append:2', rocksdb_kill_odds);
    
    #include <atomic>
#include 'env/io_posix.h'
#include 'monitoring/iostats_context_imp.h'
#include 'rocksdb/env.h'
#include 'util/sync_point.h'
    
    BENCHMARK_DRAW_LINE();
    
      ForEach<int> fe{s.begin(), s.end()};
    
    template <class RNG, class /* EnableIf */>
auto Random::create() -> RNG {
  detail::SeedData<RNG> sd;
  std::seed_seq s(std::begin(sd.seedData), std::end(sd.seedData));
  return RNG(s);
}
    
    #pragma once
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
    #pragma once
    
    #include <zlib.h>
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};