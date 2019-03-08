
        
        #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    bool CacheImpl::remove(const void *Key) {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
    
    
      if (clangDiag.getID() == clang::diag::err_module_not_built &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    SourceLoc loc = DiagLoc;
    if (clangDiag.getLocation().isValid())
      loc = resolveSourceLocation(clangDiag.getSourceManager(),
                                  clangDiag.getLocation());
    }
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    #define TEGRA_CVT2PYUVTOBGR(src_data, src_step, dst_data, dst_step, dst_width, dst_height, dcn, swapBlue, uIdx) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
        dcn == 3 ? \
            uIdx == 0 ? \
                (swapBlue ? \
                    CAROTENE_NS::yuv420i2rgb(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                             src_data, src_step, \
                                             src_data + src_step * dst_height, src_step, \
                                             dst_data, dst_step) : \
                    CAROTENE_NS::yuv420i2bgr(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                             src_data, src_step, \
                                             src_data + src_step * dst_height, src_step, \
                                             dst_data, dst_step)), \
                CV_HAL_ERROR_OK : \
            uIdx == 1 ? \
                (swapBlue ? \
                    CAROTENE_NS::yuv420sp2rgb(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                              src_data, src_step, \
                                              src_data + src_step * dst_height, src_step, \
                                              dst_data, dst_step) : \
                    CAROTENE_NS::yuv420sp2bgr(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                              src_data, src_step, \
                                              src_data + src_step * dst_height, src_step, \
                                              dst_data, dst_step)), \
                CV_HAL_ERROR_OK : \
            CV_HAL_ERROR_NOT_IMPLEMENTED : \
        dcn == 4 ? \
            uIdx == 0 ? \
                (swapBlue ? \
                    CAROTENE_NS::yuv420i2rgbx(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                              src_data, src_step, \
                                              src_data + src_step * dst_height, src_step, \
                                              dst_data, dst_step) : \
                    CAROTENE_NS::yuv420i2bgrx(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                              src_data, src_step, \
                                              src_data + src_step * dst_height, src_step, \
                                              dst_data, dst_step)), \
                CV_HAL_ERROR_OK : \
            uIdx == 1 ? \
                (swapBlue ? \
                    CAROTENE_NS::yuv420sp2rgbx(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                               src_data, src_step, \
                                               src_data + src_step * dst_height, src_step, \
                                               dst_data, dst_step) : \
                    CAROTENE_NS::yuv420sp2bgrx(CAROTENE_NS::Size2D(dst_width, dst_height), \
                                               src_data, src_step, \
                                               src_data + src_step * dst_height, src_step, \
                                               dst_data, dst_step)), \
                CV_HAL_ERROR_OK : \
            CV_HAL_ERROR_NOT_IMPLEMENTED : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
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
    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const s16 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s16, s8, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src1]]                             \n\t'
             'vld1.8 {d2-d3}, [%[src2]]                             \n\t'
             'vqmovn.s16 d4, q0                                     \n\t'
             'vqmovn.s16 d5, q1                                     \n\t'
             'vst1.8 {d4-d5}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i),
               [src2] 'r' (_src + i + 8),
               [dst] 'r' (_dst + i + 0)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s16, s8, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         int16x8_t vline1_s16 = vld1q_s16(_src + i);
         int16x8_t vline2_s16 = vld1q_s16(_src + i + 8);
    }
    }
    
            for ( ; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            int16x8_t v_src0 = vld1q_s16(src + j), v_src1 = vld1q_s16(src + j + 8);
    }
    
    void flip(const Size2D &size,
          const u8 * srcBase, ptrdiff_t srcStride,
          u8 * dstBase, ptrdiff_t dstStride,
          FLIP_MODE flipMode, u32 elemSize)
{
    internal::assertSupportedConfiguration(isFlipSupported(flipMode, elemSize));
#ifdef CAROTENE_NEON
    }
    
    template <typename T, int elsize> struct vtail
{
    static inline void inRange(const T *, const T *, const T *,
                               u8 *, size_t &, size_t)
    {
        //do nothing since there couldn't be enough data
    }
};
template <typename T> struct vtail<T, 2>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1(dst + x, internal::vmovn(vd));
            x+=8;
        }
    }
};
template <typename T> struct vtail<T, 1>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<T>::vec64 vec64;
        typedef typename internal::VecTraits<T>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1q(dst + x, vd);
            x+=16;
        }
        if( x + 8 < width)
        {
             vec64  vs = internal::vld1( src + x);
             vec64 vr1 = internal::vld1(rng1 + x);
             vec64 vr2 = internal::vld1(rng2 + x);
            uvec64  vd = internal::vand(internal::vcge(vs, vr1), internal::vcge(vr2, vs));
            internal::vst1(dst + x, vd);
            x+=8;
        }
    }
};
    
      InternalKey begin_storage, end_storage;
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
std::string TempFileName(const std::string& dbname, uint64_t number);
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
          case kFirstType:
        if (in_fragmented_record) {
          // Handle bug in earlier versions of log::Writer where
          // it could emit an empty kFirstType record at the tail end
          // of a block followed by a kFullType or kFirstType record
          // at the beginning of the next block.
          if (!scratch->empty()) {
            ReportCorruption(scratch->size(), 'partial record without end(2)');
          }
        }
        prospective_record_offset = physical_record_offset;
        scratch->assign(fragment.data(), fragment.size());
        in_fragmented_record = true;
        break;
    
    #ifndef STORAGE_LEVELDB_DB_MEMTABLE_H_
#define STORAGE_LEVELDB_DB_MEMTABLE_H_
    
      ~Repairer() {
    delete table_cache_;
    if (owns_info_log_) {
      delete options_.info_log;
    }
    if (owns_cache_) {
      delete options_.block_cache;
    }
  }