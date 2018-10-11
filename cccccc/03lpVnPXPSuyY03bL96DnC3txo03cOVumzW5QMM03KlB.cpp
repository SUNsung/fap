
        
        void absDiff(const Size2D &size,
             const u8 *src0Base, ptrdiff_t src0Stride,
             const u8 *src1Base, ptrdiff_t src1Stride,
             u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u8>());
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
    
            u8* _map = map + mapstep*i + 1;
        _map[-1] = _map[size.width] = 1;
    
    #define SPLIT(sgn,bits,n) void split##n(const Size2D &_size,                                            \
                                    const sgn##bits * srcBase, ptrdiff_t srcStride                      \
                                    FILL_LINES##n(FARG, sgn##bits) )                                    \
{                                                                                                       \
    internal::assertSupportedConfiguration();                                                           \
    Size2D size(_size);                                                                                 \
    if (CONTDST##n                                                                                      \
        dst0Stride == (ptrdiff_t)(size.width))                                                          \
    {                                                                                                   \
        size.width *= size.height;                                                                      \
        size.height = 1;                                                                                \
    }                                                                                                   \
    typedef internal::VecTraits<sgn##bits, n>::vec128 vec128;                                           \
    size_t roiw16 = size.width >= (16/sizeof(sgn##bits)-1) ? size.width - (16/sizeof(sgn##bits)-1) : 0; \
    typedef internal::VecTraits<sgn##bits, n>::vec64 vec64;                                             \
    size_t roiw8 = size.width >= (8/sizeof(sgn##bits)-1) ? size.width - (8/sizeof(sgn##bits)-1) : 0;    \
                                                                                                        \
    for (size_t i = 0u; i < size.height; ++i)                                                           \
    {                                                                                                   \
        const sgn##bits * src = internal::getRowPtr(srcBase, srcStride, i);                             \
        FILL_LINES##n(VROW, sgn##bits)                                                                  \
        size_t sj = 0u, dj = 0u;                                                                        \
                                                                                                        \
        for (; dj < roiw16; sj += MUL##n(16)/sizeof(sgn##bits), dj += 16/sizeof(sgn##bits))             \
            SPLIT_QUAD(sgn, bits, n)                                                                    \
                                                                                                        \
        if (dj < roiw8)                                                                                 \
        {                                                                                               \
            vec64 v_src = vld##n##_##sgn##bits(src + sj);                                               \
            FILL_LINES##n(VST1, sgn##bits)                                                              \
            sj += MUL##n(8)/sizeof(sgn##bits);                                                          \
            dj += 8/sizeof(sgn##bits);                                                                  \
        }                                                                                               \
                                                                                                        \
        for (; dj < size.width; sj += n, ++dj)                                                          \
        {                                                                                               \
            FILL_LINES##n(SST, sgn##bits)                                                               \
        }                                                                                               \
    }                                                                                                   \
}
    
                {
                // combine 3 'shifted' vectors
                t0 = vext_u8(tprev[1], tcurr[1], 7);
                t1 = tcurr[1];
                t2 = vext_u8(tcurr[1], tnext[1], 1);
    }
    
            float32x4_t vc0 = vmovq_n_f32(0);
        int32x4_t vs = vmovq_n_s32(0);
    
    #include <cstring>
    
      // These two overloads allow streaming a wide C string to a Message
  // using the UTF-8 encoding.
  Message& operator <<(const wchar_t* wide_c_str);
  Message& operator <<(wchar_t* wide_c_str);
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7, typename Generator8>
internal::CartesianProductHolder8<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7, Generator8> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7, const Generator8& g8) {
  return internal::CartesianProductHolder8<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7, Generator8>(
      g1, g2, g3, g4, g5, g6, g7, g8);
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_SPI_H_
#define GTEST_INCLUDE_GTEST_GTEST_SPI_H_
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
    // A function to convert T* into linked_ptr<T>
// Doing e.g. make_linked_ptr(new FooBarBaz<type>(arg)) is a shorter notation
// for linked_ptr<FooBarBaz<type> >(new FooBarBaz<type>(arg))
template <typename T>
linked_ptr<T> make_linked_ptr(T* ptr) {
  return linked_ptr<T>(ptr);
}
    
      template <GTEST_6_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_6_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    return *this;
  }
    
    // The following family of struct and struct templates are used to
// represent template lists.  In particular, TemplatesN<T1, T2, ...,
// TN> represents a list of N templates (T1, T2, ..., and TN).  Except
// for Templates0, every struct in the family has two member types:
// Head for the selector of the first template in the list, and Tail
// for the rest of the list.
    
    template <typename T>
struct TypeList {
  typedef Types1<T> type;
};
    
            template <typename ElemType>
        void Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const;
    
            if (bufferSizeInBytes < (viewShape.TotalSize() * sizeof(V1ElemType)))
            InvalidArgument('Size (%d) of the specified buffer for creating the NDArrayView is smaller than the specified view shape '%S'.',
                            (int)bufferSizeInBytes, viewShape.AsString().c_str());
    
        /*virtual*/ ValuePtr Value::Alias(bool readOnly/* = false*/) const
    {
        // TODO: Check if this is a derived type and throw an exception in that case
        return MakeSharedObject<Value>(Data()->Alias(readOnly), (Mask() != nullptr) ? Mask()->Alias() : nullptr);
    }
    
    
    {
    {
    {}}}
