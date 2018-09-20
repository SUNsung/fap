
        
        #endif  // PYTHON_PROTO2_PYTHON_IMPL
#endif  // PYTHON_PROTO2_CPP_IMPL_V2
#endif  // PYTHON_PROTO2_CPP_IMPL_V1
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    class FieldGeneratorBase;
    
    void MessageFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'if ($has_property_check$) {\n'
    '  output.WriteRawTag($tag_bytes$);\n'
    '  output.WriteMessage($property_name$);\n'
    '}\n');
}
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MessageFieldGenerator);
};
    
      printer->Print(
    '/// <summary>Holder for reflection information generated from $file_name$</summary>\n'
    '$access_level$ static partial class $reflection_class_name$ {\n'
    '\n',
    'file_name', file_->name(),
    'access_level', class_access_level(),
    'reflection_class_name', reflectionClassname_);
  printer->Indent();
}
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vorrq_u8(v_src0, v_src1);
    }
    
    #define  VROW_LINE(type, n) const type * src##n = internal::getRowPtr(src##n##Base, src##n##Stride, i);
#define  PREF_LINE(type, n) internal::prefetch(src##n + sj);
#define VLD1Q_LINE(type, n) v_dst.val[n] = vld1q_##type(src##n + sj);
#define  PRLD_LINE(type, n) internal::prefetch(src##n + sj); v_dst.val[n] = vld1q_##type(src##n + sj);
#define  VLD1_LINE(type, n) v_dst.val[n] = vld1_##type(src##n + sj);
#define   SLD_LINE(type, n) dst[dj + n] = src##n[sj];
    
    #endif
    
    
    {    if (!parametersSupported) {
        std::cerr << 'internal error: attempted to use a function with unsupported parameters' << std::endl;
        std::abort();
    }
}
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
                    for (; j < roiw16; j += 16)
                {
                    internal::prefetch(src + j);
                    int16x8_t v_src0 = vld1q_s16(src + j), v_src1 = vld1q_s16(src + j + 8);
                    uint8x16_t v_dst = vcombine_u8(vmovn_u16(vcltq_s16(v_src0, v_zero)),
                                                   vmovn_u16(vcltq_s16(v_src1, v_zero)));
                    vst1q_u8(dst + j, v_dst);
                }
                for (; j < roiw8; j += 8)
                {
                    int16x8_t v_src = vld1q_s16(src + j);
                    vst1_u8(dst + j, vmovn_u16(vcltq_s16(v_src, v_zero)));
                }
    
            x -= 8;
        if (x == width)
            --x;
    
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
    
                vsuml = vaddw_u16(vsuml, vget_low_u16(el8));
            vsumh = vaddw_u16(vsumh, el4h);
    
      // Sets the coordinates of the current macro-block for the purpose of
  // CompareBlock() calls.
  virtual void SwitchBlock(int block_x, int block_y,
                           int factor_x, int factor_y) = 0;
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    
    {    if (memstream.eof()) png_error(png_ptr, 'unexpected end of data');
    if (memstream.fail()) png_error(png_ptr, 'read from memory error');
  });
    
    bool JPEGData::Is420() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 2 &&
          max_v_samp_factor == 2 &&
          components[0].h_samp_factor == 2 &&
          components[0].v_samp_factor == 2 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    
    {}  // namespace guetzli

    
    namespace guetzli {
    }