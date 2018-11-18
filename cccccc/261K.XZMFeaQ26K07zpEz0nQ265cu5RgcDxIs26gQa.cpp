
        
        #undef cv_hal_resize
#define cv_hal_resize TEGRA_RESIZE
//warpAffine/warpPerspective disabled due to rounding accuracy issue
//#undef cv_hal_warpAffine
//#define cv_hal_warpAffine TEGRA_WARPAFFINE
//#undef cv_hal_warpPerspective
//#define cv_hal_warpPerspective TEGRA_WARPPERSPECTIVE
    
        /*
        Convert YUV420i image to BGRX
    */
    void yuv420i2bgrx(const Size2D &size,
                      const u8 *  yBase, ptrdiff_t  yStride,
                      const u8 * uvBase, ptrdiff_t uvStride,
                      u8 * dstBase, ptrdiff_t dstStride);
    
    SPLIT4ALPHA(u,8)
    
    #define COMBINE64(sgn,n) void combine##n(const Size2D &_size                                                \
                                               FILL_LINES##n(FARG, sgn##64),                                \
                                               sgn##64 * dstBase, ptrdiff_t dstStride)                      \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    Size2D size(_size);                                                                                     \
    if (CONTSRC##n                                                                                          \
        dstStride == (ptrdiff_t)(size.width))                                                               \
    {                                                                                                       \
        size.width *= size.height;                                                                          \
        size.height = 1;                                                                                    \
    }                                                                                                       \
    typedef internal::VecTraits<sgn##64, n>::vec64 vec64;                                                   \
                                                                                                            \
    for (size_t i = 0u; i < size.height; ++i)                                                               \
    {                                                                                                       \
        FILL_LINES##n(VROW, sgn##64)                                                                        \
        sgn##64 * dst = internal::getRowPtr(dstBase, dstStride, i);                                         \
        size_t sj = 0u, dj = 0u;                                                                            \
                                                                                                            \
        for (; sj < size.width; ++sj, dj += n)                                                              \
        {                                                                                                   \
            vec64 v_dst;                                                                                    \
            FILL_LINES##n(VLD1, sgn##64)                                                                    \
            vst##n##_##sgn##64(dst + dj, v_dst);                                                            \
            /*FILL_LINES##n(SLD, sgn##64)*/                                                                 \
        }                                                                                                   \
    }                                                                                                       \
}
    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
                s32 val = 0;
            for (s32 _y = 0; _y < 3; ++_y)
                val += prevx[_y] * kernelBase[(2 - _y) * 3 + 2] +
                       currx[_y] * kernelBase[(2 - _y) * 3 + 1] +
                       nextx[_y] * kernelBase[(2 - _y) * 3 + 0];
    
                for( ; i <= lim; i += 4 )
            {
                internal::prefetch(src0 + i);
                internal::prefetch(src1 + i);
                v_sum = vmlaq_f32(v_sum, vld1q_f32(src0 + i), vld1q_f32(src1 + i));
            }
    
    u8 cornerScore(const u8* ptr, const ptrdiff_t pixel[])
{
    const s32 K = 8, N = 16 + K + 1;
    s32 k, v = ptr[0];
    s16 d[(N + 7) & ~7];
    for( k = 0; k < N; k++ )
        d[k] = (s16)(v - ptr[pixel[k]]);
    }
    
        minLocCapacity <<= 1;
    maxLocCapacity <<= 1;
    
        u32 step_base = 16 / sizeof(T), step_tail = 8 / sizeof(T);
    size_t roiw_base = size.width >= (step_base - 1) ? size.width - step_base + 1 : 0;
    size_t roiw_tail = size.width >= (step_tail - 1) ? size.width - step_tail + 1 : 0;
    
    // calculate reciprocal value
    
    #if !defined(__SSE4_1__)
// This code can't compile with '-msse4.1', so use dummy stubs.
    
    #include <cstdint>      // for int32_t
    
      // Factory makes and returns an IntSimdMatrix (sub)class of the best
  // available type for the current architecture.
  static IntSimdMatrix* GetFastestMultiplier();
    
    #include <cstdint>  // for int16_t
    
      /**
   * Returns the type of the current block. See apitypes.h for
   * PolyBlockType.
   */
  PolyBlockType BlockType() const;
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }