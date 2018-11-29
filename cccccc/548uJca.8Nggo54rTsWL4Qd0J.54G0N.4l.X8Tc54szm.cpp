
        
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
    
            //horizontal convolution (2 lines from previous iteration)
        if (i > 0)
        {
            f32* dstb = internal::getRowPtr(dstBase, dstStride, i-1);
            x = 0;
            for (; x <= colsn - 4; x += 4)
            {
                internal::prefetch(laneA + x + cn);
                internal::prefetch(laneB + x + cn);
box3x3f32_horiz:
                float32x4_t lane0a = vld1q_f32(laneA + x - cn);
                float32x4_t lane2a = vld1q_f32(laneA + x + cn);
                float32x4_t lane1a = vld1q_f32(laneA + x);
    }
    }
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1(dst + x, internal::vmovn(v_dst));
            x+=8;
        }
    }
};
template <typename Op> struct vtail<Op, 1>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<type>::vec64 vec64;
        typedef typename internal::VecTraits<type>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(f32, u8, 8,
    register float32x4_t vmult asm ('q0') = vdupq_n_f32((float)(1 << 16));
    register uint32x4_t  vmask asm ('q1') = vdupq_n_u32(1<<16);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vcvt.u32.f32 q6, q4                                     \n\t'
            'vcvt.u32.f32 q7, q5                                     \n\t'
            'vbic q8, q1, q6                                         \n\t'
            'vbic q9, q1, q7                                         \n\t'
            'vshr.u32 q10, q8, #16                                   \n\t'
            'vshr.u32 q11, q9, #16                                   \n\t'
            'vqsub.u32 q12, q6, q10                                  \n\t'
            'vqsub.u32 q13, q7, q11                                  \n\t'
            'vqrshrn.u32 d28, q12, #16                               \n\t'
            'vqrshrn.u32 d29, q13, #16                               \n\t'
            'vqmovn.u16 d30, q14                                     \n\t'
            'vst1.8 {d30}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w' (vmult), 'w' (vmask)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30'
        );
     }
})
#else
CVT_FUNC(f32, u8, 8,
    float32x4_t vmult = vdupq_n_f32((float)(1 << 16));
    uint32x4_t  vmask = vdupq_n_u32(1<<16);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, s16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u16 q3, d4                                       \n\t'
            'vmovl.u16 q4, d5                                       \n\t'
            'vcvt.f32.u32 q5, q3                                    \n\t'
            'vcvt.f32.u32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vcvt.s32.f32 q12, q10                                  \n\t'
            'vqmovn.s32 d26, q11                                    \n\t'
            'vqmovn.s32 d27, q12                                    \n\t'
            'vst1.16 {d26-d27}, [%[dst]]                            \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
              'w' (vshift), 'w' (vscale)
            : 'd6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27'
        );
    }
})
#else
CVTS_FUNC(u16, s16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        vst1q_s16(_dst + i, vcombine_s16(vRes1, vRes2));
    }
})
#endif
    
    f64 dotProduct(const Size2D &_size,
               const f32 * src0Base, ptrdiff_t src0Stride,
               const f32 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width * sizeof(f32)))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
    namespace CAROTENE_NS {
    }
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    #endif  // CAFFE_BATCHNORM_LAYER_HPP_

    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
      void RecordBackgroundError(const Status& s);
    
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
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
      scratch->clear();
  record->clear();
  bool in_fragmented_record = false;
  // Record offset of the logical record that we're reading
  // 0 is a dummy value to make compilers happy
  uint64_t prospective_record_offset = 0;
    
        // Advance to the first entry with a key >= target
    void Seek(const Key& target);
    
    
    {  SkipList<Key, Comparator>::Iterator iter(&list);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToFirst();
  ASSERT_TRUE(!iter.Valid());
  iter.Seek(100);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToLast();
  ASSERT_TRUE(!iter.Valid());
}
    
    DECLARE_bool(disable_decorators);
DECLARE_bool(decorations_top_level);
    
      auto val2 = splayValue(100, 10);
  EXPECT_GE(val2, 90U);
  EXPECT_LE(val2, 110U);
    
      Row r3;
  std::string msg2 = '0A001F9100000000FE80000000000000022522FFFEB03684000000';
  parseSockAddr(msg2, r3, unix_socket);
  ASSERT_FALSE(r3['remote_address'].empty());
  EXPECT_EQ(r3['remote_address'], 'fe80:0000:0000:0000:0225:22ff:feb0:3684');
  EXPECT_EQ(r3['remote_port'], '8081');
    
      void addMonitor(const std::string& path,
                  uint32_t mask,
                  bool recursive,
                  bool add_watch) {
    auto sc = event_pub_->createSubscriptionContext();
    event_pub_->addMonitor(path, sc, mask, recursive, add_watch);
  }
    
      EXPECT_TRUE(sub->contextBellHathTolled);
    
        for (int n = 0; n < 50; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
            D3D12_TEXTURE_COPY_LOCATION dstLocation = {};
        dstLocation.pResource = pTexture;
        dstLocation.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
        dstLocation.SubresourceIndex = 0;
    
    #include 'imgui.h'
#include 'imgui_impl_dx9.h'
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);