
        
        #endif

    
    #ifdef CAROTENE_NEON
#include <arm_neon.h>
#include 'intrinsics.hpp'
#endif
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(u16, s8, 16,
    register uint8x16_t v127 asm ('q4') = vmovq_n_u8(127);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d0-d1}, [%[src1]]                             \n\t'
            'vqmovn.u16 d4, q0                                     \n\t'
            'vld1.8 {d2-d3}, [%[src2]]                             \n\t'
            'vqmovn.u16 d5, q1                                     \n\t'
            'vmin.u8 q3, q2, q4                                    \n\t'
            'vst1.8 {d6-d7}, [%[dst]]                              \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [src2] 'r' (_src + i + 8),
              [dst] 'r' (_dst + i + 0),
              'w' (v127)
            : 'd0','d1','d2','d3','d4','d5','d6','d7'
         );
    }
})
#else
CVT_FUNC(u16, s8, 16,
    uint8x8_t v127 = vmov_n_u8(127);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline1_u16 = vld1q_u16(_src + i);
        uint16x8_t vline2_u16 = vld1q_u16(_src + i + 8);
    }
    }
    
    template <typename T>
inline void inRangeCheck(const Size2D &_size,
                         const T * srcBase, ptrdiff_t srcStride,
                         const T * rng1Base, ptrdiff_t rng1Stride,
                         const T * rng2Base, ptrdiff_t rng2Stride,
                         u8 * dstBase, ptrdiff_t dstStride)
{
    typedef typename internal::VecTraits<T>::vec128 vec128;
    typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
    }
    
            s16 prevx = 0, currx = 0, nextx = 0;
        ptrdiff_t x = 0;
        const ptrdiff_t bwidth = y + 2 < height ? width : (width - 8);
    
      // localnode
  // 8bytes reserved
  WRITE_CHECK(fp, zero, 8);
  // 20bytes localnode ID
  WRITE_CHECK(fp, localNode_->getID(), DHT_ID_LENGTH);
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
      virtual void startup() = 0;
    
    DHTTaskQueueImpl::DHTTaskQueueImpl()
    : periodicTaskQueue1_(NUM_CONCURRENT_TASK),
      periodicTaskQueue2_(NUM_CONCURRENT_TASK),
      immediateTaskQueue_(NUM_CONCURRENT_TASK)
{
}
    
    #endif // D_DHT_TASK_QUEUE_IMPL_H
