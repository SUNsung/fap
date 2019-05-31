
        
        #define IMPL_ADDWEIGHTED(type)                                \
void addWeighted(const Size2D &size,                          \
                 const type * src0Base, ptrdiff_t src0Stride, \
                 const type * src1Base, ptrdiff_t src1Stride, \
                 type * dstBase, ptrdiff_t dstStride,         \
                 f32 alpha, f32 beta, f32 gamma)              \
{                                                             \
    internal::assertSupportedConfiguration();                 \
    wAdd<type> wgtAdd(alpha,                                  \
                      beta,                                   \
                      gamma);                                 \
    internal::vtransform(size,                                \
                         src0Base, src0Stride,                \
                         src1Base, src1Stride,                \
                         dstBase, dstStride,                  \
                         wgtAdd);                             \
}
    
        if (borderType == BORDER_MODE_CONSTANT)
        for (s32 k = 0; k < cn; ++k)
        {
            lanea[-cn+k] = borderValue;
            lanea[colsn+k] = borderValue;
            laneA[-cn+k] = borderValue;
            laneA[colsn+k] = borderValue;
            laneb[-cn+k] = borderValue;
            laneb[colsn+k] = borderValue;
            laneB[-cn+k] = borderValue;
            laneB[colsn+k] = borderValue;
        }
    
    #define IMPL_CMPOP(op, type)                              \
void cmp##op(const Size2D &size,                          \
             const type * src0Base, ptrdiff_t src0Stride, \
             const type * src1Base, ptrdiff_t src1Stride, \
                       u8 *dstBase, ptrdiff_t dstStride)  \
{                                                         \
    internal::assertSupportedConfiguration();             \
    vcompare(size,                                        \
             src0Base, src0Stride,                        \
             src1Base, src1Stride,                        \
             dstBase, dstStride,                          \
             OpCmp##op<type>());                          \
}
    
    
    {            vst1q_s16(dst + j, vshlq_n_s16(v_dst0, shift));
            vst1q_s16(dst + j + 8, vshlq_n_s16(v_dst1, shift));
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_dst = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            vst1q_s16(dst + j, vshlq_n_s16(v_dst, shift));
        }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
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
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vadd.f32 q10, q8, q1                                     \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                             \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                             \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(s16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
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
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
    void convolution(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 BORDER_MODE border, u8 borderValue,
                 const Size2D & ksize, s16 * kernelBase, u32 scale)
{
    internal::assertSupportedConfiguration(isConvolutionSupported(size, ksize, border));
#ifdef CAROTENE_NEON
    const uint8x8_t v_zero_u8 = vdup_n_u8(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    const int32x4_t v_zero_s32 = vdupq_n_s32(0);
    }
    
        for(i = 3; i < (ptrdiff_t)size.height-2; i++)
    {
        const u8* ptr = internal::getRowPtr(srcBase, srcStride, i) + 3;
        u8* curr = buf[(i - 3)%3];
        ptrdiff_t* cornerpos = cpbuf[(i - 3)%3];
        memset(curr, 0, size.width);
        ptrdiff_t ncorners = 0;
    }
    
    template <typename T>
void flip3(const Size2D & size,
           const void * srcBase, ptrdiff_t srcStride,
           void * dstBase, ptrdiff_t dstStride,
           FLIP_MODE flipMode)
{
    using namespace internal;
    }
    
    #include <arm_neon.h>
    
            // do vertical convolution
        ptrdiff_t x = 0;
        const ptrdiff_t bcols = y + 3 < rows ? cols : (cols - 8);
        for( ; x <= bcols; x += 8 )
        {
            internal::prefetch(v0 + x);
            internal::prefetch(v1 + x);
            internal::prefetch(v2 + x);
            internal::prefetch(v3 + x);
            internal::prefetch(v4 + x);
    }
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipOutputStream is compatible with command line
// gzip or java.util.zip.GzipOutputStream
//
// Reads data on standard input and writes compressed gzip stream to standard
// output.
    
    using google::protobuf::util::GogoDataStripper;
    
            explicit Rational(PRAT prat) noexcept;
        PRAT ToPRAT() const;
    
        /* Now branch off to do other commands and functions.                 */
    switch (wParam)
    {
    case IDC_CLEAR: /* Total clear.                                       */
    {
        if (!m_bChangeOp)
        {
            // A special goody we are doing to preserve the history, if all was done was serious of unary operations last
            CheckAndAddLastBinOpToHistory(false);
        }
    }
    }
    
    
    {    AutomationProperties::SetName(m_host, announcement->Announcement);
    AutomationPeer ^ peer = FrameworkElementAutomationPeer::FromElement(m_host);
    if (peer != nullptr)
    {
        peer->RaiseAutomationEvent(AutomationEvents::LiveRegionChanged);
    }
}

    
    
    {}

    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
    #include 'hphp/runtime/base/glob-stream-wrapper.h'
    
    #include 'hphp/runtime/base/file.h'
    
    #include 'hphp/util/perf-event.h'
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
    
    void clearThreadLocalIO();
void setThreadLocalIO(FILE* in, FILE* out, FILE* err);
    
      // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // print values
    std::cout << object << '\n';
    std::cout << null << '\n';
    
    
    {    {
      MutexLock l(shared->GetMutex());
      shared->IncDone();
      if (shared->AllDone()) {
        shared->GetCondVar()->SignalAll();
      }
    }
  }
    
    CompactionPressureToken::~CompactionPressureToken() {
  controller_->total_compaction_pressure_--;
  assert(controller_->total_compaction_pressure_ >= 0);
}
    
    
    {  rocksdb::WriteOptions wopts;
  db->Merge(wopts, '0', 'bad');  // This is filtered out
  db->Merge(wopts, '1', 'data1');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '1', 'data2');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '3', 'data3');
  db->CompactRange(rocksdb::CompactRangeOptions(), nullptr, nullptr);
  fprintf(stderr, 'filter.count_ = %d\n', filter.count_);
  assert(filter.count_ == 0);
  fprintf(stderr, 'filter.merge_count_ = %d\n', filter.merge_count_);
  assert(filter.merge_count_ == 6);
}

    
    #include <cstdio>
#include <string>
    
    #include 'rocksdb/db.h'
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
      // Is cache storing uncompressed data ?
  //
  // True if the cache is configured to store uncompressed data else false
  virtual bool IsCompressed() = 0;
    
      /**
   * Returns a secure random uint64_t in [min, max). If min == max, returns 0.
   */
  static uint64_t secureRand64(uint64_t min, uint64_t max) {
    SecureRNG<uint64_t> srng;
    return rand64(min, max, srng);
  }
    
    namespace folly {
    }
    
      void add(Func f) override {
    executor_->add(wrapFunc(std::move(f)));
  }
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
      while (true) {
    auto cpu = cpus.size();
    std::vector<size_t> levels;
    for (size_t index = 0;; ++index) {
      auto dir =
          sformat('/sys/devices/system/cpu/cpu{}/cache/index{}/', cpu, index);
      auto cacheType = mapping(dir + 'type');
      auto equivStr = mapping(dir + 'shared_cpu_list');
      if (cacheType.size() == 0 || equivStr.size() == 0) {
        // no more caches
        break;
      }
      if (cacheType[0] == 'I') {
        // cacheType in { 'Data', 'Instruction', 'Unified' }. skip icache
        continue;
      }
      auto equiv = parseLeadingNumber(equivStr);
      auto level = levels.size();
      levels.push_back(equiv);
    }
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
  }
    
    TEST_F(SparseByteSetTest, each_random) {
  mt19937 rng;
  uniform_int_distribution<uint16_t> dist{lims::min(), lims::max()};
  set<uint8_t> added;
  while (added.size() <= lims::max()) {
    auto c = uint8_t(dist(rng));
    EXPECT_EQ(added.count(c), s.contains(c));
    EXPECT_EQ(!added.count(c), s.add(c));
    added.insert(c);
    EXPECT_TRUE(added.count(c)); // sanity
    EXPECT_TRUE(s.contains(c));
  }
}

    
      static void prepare() noexcept {
    instance().tasksLock.lock();
    while (true) {
      auto& tasks = instance().tasks;
      auto task = tasks.rbegin();
      for (; task != tasks.rend(); ++task) {
        if (!task->prepare()) {
          break;
        }
      }
      if (task == tasks.rend()) {
        return;
      }
      for (auto untask = tasks.rbegin(); untask != task; ++untask) {
        untask->parent();
      }
    }
  }
    
    #pragma once
    
    #include <folly/container/SparseByteSet.h>