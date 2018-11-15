
        
        void absDiff(const Size2D &size,
             const u16 *src0Base, ptrdiff_t src0Stride,
             const u16 *src1Base, ptrdiff_t src1Stride,
             u16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u16>());
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
    
                int32x4_t v = vaddq_s32(v1, v2);
            int32x4_t w0 = vaddq_s32(v, v0);
            int32x4_t w1 = vaddq_s32(v, v3);
    
    
    {            vx = vx2;
            vy = vy2;
        }
        int16x8_t vabsx = vabsq_s16(vx);
        int16x8_t vabsy = vabsq_s16(vy);
    
        for (size_t i = 0u; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t sj = 0u, dj = 0u, j = 0u;
    }
    
    
    {
    {         vst1q_s32(_dst + i, vline1_s32);
         vst1q_s32(_dst + i + 4, vline2_s32);
         vst1q_s32(_dst + i + 8, vline3_s32);
         vst1q_s32(_dst + i + 12, vline4_s32);
     }
})
#endif
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
    IntSimdMatrixSSE::IntSimdMatrixSSE() {
#ifdef __SSE4_1__
  partial_funcs_ = {PartialMatrixDotVector1};
#endif  // __SSE4_1__
}
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
      // Check the blobs count for a seed region candidate.
  bool CheckSeedBlobsCount(ColPartition* part);
    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
     protected:
  /**
   * Sets up the internal data for iterating the blobs of a new word, then
   * moves the iterator to the given offset.
   */
  TESS_LOCAL void BeginWord(int offset);
    
    namespace tesseract {
  class BoolParam;
  class DoubleParam;
  class IntParam;
  class StringParam;
  class Tesseract;
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38>
struct Templates38 {
  typedef TemplateSel<T1> Head;
  typedef Templates37<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> Tail;
};
    
      // Asserts that s.c_string() returns NULL.
  //
  // <TechnicalDetails>
  //
  // If we write NULL instead of
  //
  //   static_cast<const char *>(NULL)
  //
  // in this assertion, it will generate a warning on gcc 3.4.  The
  // reason is that EXPECT_EQ needs to know the types of its
  // arguments in order to print them when it fails.  Since NULL is
  // #defined as 0, the compiler will use the formatter function for
  // int to print it.  However, gcc thinks that NULL should be used as
  // a pointer, not an int, and therefore complains.
  //
  // The root of the problem is C++'s lack of distinction between the
  // integer number 0 and the null pointer constant.  Unfortunately,
  // we have to live with this fact.
  //
  // </TechnicalDetails>
  EXPECT_STREQ(NULL, s.c_string());
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual DelayTime* reverse() const override;
    virtual DelayTime* clone() const override;
    
    /**
@brief Progress from a percentage to another percentage.
@since v0.99.1
*/
class CC_DLL ProgressFromTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with a duration, a 'from' percentage and a 'to' percentage.
     * @param duration Specify the duration of the ProgressFromTo action. It's a value in seconds.
     * @param fromPercentage Specify the source percentage.
     * @param toPercentage Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressFromTo action; otherwise, return nil.
     */
    static ProgressFromTo* create(float duration, float fromPercentage, float toPercentage);
    }
    
    
    {    for (auto& animFrame : _frames)
    {
        _totalDelayUnits += animFrame->getDelayUnits();
    }
    return true;
}
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    #endif // D_DHT_SETUP_H

    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createBucketRefreshTask()
{
  auto task = std::make_shared<DHTBucketRefreshTask>();
  setCommonProperty(task);
  return task;
}
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    void DHTTokenUpdateCommand::setTokenTracker(DHTTokenTracker* tokenTracker)
{
  tokenTracker_ = tokenTracker;
}
    
      virtual ~DHTUnknownMessage();
    
    DNSCache::CacheEntry::CacheEntry(const std::string& hostname, uint16_t port)
    : hostname_(hostname), port_(port)
{
}
    
    
    {    Executor::KeepAlive<Executor> ka2 = std::move(ka); // conversion
    EXPECT_FALSE(ka);
    EXPECT_TRUE(ka2);
    EXPECT_EQ(&exec, ka2.get());
    EXPECT_EQ(1, exec.refCount);
  }
    
    
    {  while (iters--) {
    for (int i = -100; i < 100; i++) {
      p = bigBuf.data();
      suspender.dismissing(
          [&] { format20Numbers(i, make_index_sequence<20>())(writeToBuf); });
    }
  }
}
    
    template <class RNG, class /* EnableIf */>
void Random::seed(RNG& rng) {
  detail::SeedData<RNG> sd;
  std::seed_seq s(std::begin(sd.seedData), std::end(sd.seedData));
  rng.seed(s);
}
    
    
    {    return FuncAndKeepAlive(std::move(f), this);
  }
    
      /**
   * 'The memLevel parameter specifies how much memory should be allocated for
   * the internal compression state. memLevel=1 uses minimum memory but is slow
   * and reduces compression ratio; memLevel=9 uses maximum memory for optimal
   * speed. The default value is 8.'
   */
  int memLevel;