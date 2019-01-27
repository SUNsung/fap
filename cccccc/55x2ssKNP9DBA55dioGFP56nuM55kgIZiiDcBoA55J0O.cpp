
        
            void convertScale(const Size2D &_size,
                      const f32 * srcBase, ptrdiff_t srcStride,
                      s16 * dstBase, ptrdiff_t dstStride,
                      f64 alpha, f64 beta);
    
            size_t width;
        size_t height;
    
                v_srclo = vget_low_s16(v_src1);
            v_srchi = vget_high_s16(v_src1);
            v_dst1 = vcombine_s16(vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srclo, v_srclo), shift), vget_low_s16(v_dst1))),
                                  vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srchi, v_srchi), shift), vget_high_s16(v_dst1))));
    
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
    
        for (size_t i = 0u; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t sj = 0u, dj = 0u;
    }
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
                for (; j < size.width; j++)
            {
                dst[j] = internal::saturate_cast<u8>((src[j] >> shift));
            }
        }
        else // CONVERT_POLICY_WRAP
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src + j);
                int16x8_t v_src0 = vshrq_n_s16(vld1q_s16(src + j), shift),
                          v_src1 = vshrq_n_s16(vld1q_s16(src + j + 8), shift);
                int8x16_t v_dst = vcombine_s8(vmovn_s16(v_src0),
                                              vmovn_s16(v_src1));
                vst1q_u8(dst + j, vreinterpretq_u8_s8(v_dst));
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src = vshrq_n_s16(vld1q_s16(src + j), shift);
                vst1_u8(dst + j, vreinterpret_u8_s8(vmovn_s16(v_src)));
            }
    
                    v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t0_16s), kernelBase[5]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t1_16s), kernelBase[4]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t2_16s), kernelBase[3]);
    
    
    {        for (; i < size.width; i++)
            result += (src[i] != 0)?1:0;
        if (result < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
    }
    return result;
#else
    (void)_size;
    (void)srcBase;
    (void)srcStride;
    
            result += (double)vget_lane_s64(vadd_s64(vget_low_s64(ws), vget_high_s64(ws)), 0);
    
    #ifdef CAROTENE_NEON
    
    #include 'common.hpp'
    
    
    {} // namespace CAROTENE_NS

    
    // Soft limit on number of level-0 files.  We slow down writes at this point.
static const int kL0_SlowdownWritesTrigger = 8;
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    #include <ctype.h>
#include <stdio.h>
#include 'db/filename.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string TableFileName(const std::string& dbname, uint64_t number);
    
      fname = InfoLogFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kInfoLogFile, type);
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Skip to start of first block that can contain the initial record
  if (block_start_location > 0) {
    Status skip_status = file_->Skip(block_start_location);
    if (!skip_status.ok()) {
      ReportDrop(block_start_location, skip_status);
      return false;
    }
  }
    
          if (force_error_) {
        force_error_ = false;
        returned_partial_ = true;
        return Status::Corruption('read error');
      }
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    template<typename Key, class Comparator>
inline void SkipList<Key,Comparator>::Iterator::Prev() {
  // Instead of using explicit 'prev' links, we just search for the
  // last node that falls before key.
  assert(Valid());
  node_ = list_->FindLessThan(node_->key);
  if (node_ == list_->head_) {
    node_ = nullptr;
  }
}
    
    SEXP XGBoosterLoadModelFromRaw_R(SEXP handle, SEXP raw) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterLoadModelFromBuffer(R_ExternalPtrAddr(handle),
                                          RAW(raw),
                                          length(raw)));
  R_API_END();
  return R_NilValue;
}
    
      // Compute the Score for a node with the given stats
  virtual bst_float ComputeScore(bst_uint parentid,
                                const GradStats &stats,
                                bst_float weight) const = 0;
    
    TEST(SpanIter, Ref) {
  int status = 1;
  TestIterRef{&status}();
  ASSERT_EQ(status, 1);
}