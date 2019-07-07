
        
        namespace CAROTENE_NS {
    }
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #include <cstdlib>
#include <iostream>
    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
    #define CVTS_FUNC1(T1, SIMD_SIZE, CVTSINIT, CVTSROW)                             \
    void convertScale(const Size2D &_size,                                       \
                      const T1 * srcBase, ptrdiff_t srcStride,                   \
                      T1 * dstBase, ptrdiff_t dstStride,                         \
                      f64 alpha, f64 beta)                                       \
    {                                                                            \
        internal::assertSupportedConfiguration();                                \
        Size2D size(_size);                                                      \
        if (srcStride == dstStride &&                                            \
            srcStride == (ptrdiff_t)(size.width))                                \
        {                                                                        \
            size.width *= size.height;                                           \
            size.height = 1;                                                     \
        }                                                                        \
        const ptrdiff_t sstep = srcStride / sizeof(T1);                          \
        const ptrdiff_t dstep = dstStride / sizeof(T1);                          \
        const size_t w = size.width & ~(SIMD_SIZE-1);                            \
        if (size.width >= SIMD_SIZE)                                             \
        {                                                                        \
            const T1* _src = srcBase;                                            \
            T1* _dst = dstBase;                                                  \
            CVTSINIT                                                             \
            for (ptrdiff_t h = size.height; h--; _src += sstep, _dst += dstep )  \
                CVTSROW                                                          \
        }                                                                        \
        if(w < size.width)                                                       \
        {                                                                        \
            const T1* _src = srcBase;                                            \
            T1* _dst = dstBase;                                                  \
            for (ptrdiff_t h = size.height; h--; _src += sstep, _dst += dstep )  \
                for(size_t i = w; i < size.width; i++ )                          \
                    _dst[i] = internal::saturate_cast<T1>(_src[i]*alpha + beta); \
        }                                                                        \
    }
    
        ptrdiff_t width = (ptrdiff_t)size.width, height = (ptrdiff_t)size.height;
    static const vshrq_s32_func vshrq_s32_a[33] =
    {
        vshrq_s32<0>,
        vshrq_s32<1>,
        vshrq_s32<2>,
        vshrq_s32<3>,
        vshrq_s32<4>,
        vshrq_s32<5>,
        vshrq_s32<6>,
        vshrq_s32<7>,
        vshrq_s32<8>,
        vshrq_s32<9>,
        vshrq_s32<10>,
        vshrq_s32<11>,
        vshrq_s32<12>,
        vshrq_s32<13>,
        vshrq_s32<14>,
        vshrq_s32<15>,
        vshrq_s32<16>,
        vshrq_s32<17>,
        vshrq_s32<18>,
        vshrq_s32<19>,
        vshrq_s32<20>,
        vshrq_s32<21>,
        vshrq_s32<22>,
        vshrq_s32<23>,
        vshrq_s32<24>,
        vshrq_s32<25>,
        vshrq_s32<26>,
        vshrq_s32<27>,
        vshrq_s32<28>,
        vshrq_s32<29>,
        vshrq_s32<30>,
        vshrq_s32<31>,
        vshrq_s32<32>
    };
    vshrq_s32_func vshrq_s32_p = vshrq_s32_a[scale];
    
    // It is possible to accumulate up to 131071 schar multiplication results in sint32 without overflow
// We process 16 elements and accumulate two new elements per step. So we could handle 131071/2*16 elements
#define DOT_INT_BLOCKSIZE 131070*8
    f64 result = 0.0;
    for (size_t row = 0; row < size.height; ++row)
    {
        const s8 * src0 = internal::getRowPtr(src0Base, src0Stride, row);
        const s8 * src1 = internal::getRowPtr(src1Base, src1Stride, row);
    }
    
    void fillMinMaxLocs(const Size2D & size,
                    const s16 * srcBase, ptrdiff_t srcStride,
                    s16 minVal, size_t * minLocPtr, s32 & minLocCount, s32 minLocCapacity,
                    s16 maxVal, size_t * maxLocPtr, s32 & maxLocCount, s32 maxLocCapacity)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
                // calculate values for plain CPU part below if needed
            if (x + 8 >= bwidth)
            {
                ptrdiff_t x3 = x == width ? width - 1 : x;
                ptrdiff_t x4 = border == BORDER_MODE_CONSTANT ? x3 - 1 : std::max<ptrdiff_t>(x3 - 1, 0);
    }
    
    
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
    
    #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    class NwObjCallObjectMethodFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_

    
    INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
      // Appends the TestPartResult object to the TestPartResultArray
  // received in the constructor.
  //
  // This method is from the TestPartResultReporterInterface
  // interface.
  virtual void ReportTestPartResult(const TestPartResult& result);
 private:
  void Init();
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
#define GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
    
    // The compiler used in Symbian has a bug that prevents us from declaring the
// tuple template as a friend (it complains that tuple is redefined).  This
// hack bypasses the bug by declaring the members that should otherwise be
// private as public.
// Sun Studio versions < 12 also have the above bug.
#if defined(__SYMBIAN32__) || (defined(__SUNPRO_CC) && __SUNPRO_CC < 0x590)
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ public:
#else
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ \
    template <GTEST_10_TYPENAMES_(U)> friend class tuple; \
   private:
#endif
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    #include 'gtest/gtest.h'
    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
        for (int i = 0; i < 3; i++)
    {
        io.MouseDown[i] = g_MousePressed[i] || s3ePointerGetState((s3ePointerButton)i) != S3E_POINTER_STATE_UP;    // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        g_MousePressed[i] = false;
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    // About Desktop OpenGL function loaders:
//  Modern desktop OpenGL doesn't have a standard portable header file to load OpenGL function pointers.
//  Helper libraries are often used for this purpose! Here we are supporting a few common ones (gl3w, glew, glad).
//  You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    #include 'imgui_freetype.h'
#include 'imgui_internal.h'     // ImMin,ImMax,ImFontAtlasBuild*,
#include <stdint.h>
#include <ft2build.h>
#include FT_FREETYPE_H          // <freetype/freetype.h>
#include FT_MODULE_H            // <freetype/ftmodapi.h>
#include FT_GLYPH_H             // <freetype/ftglyph.h>
#include FT_SYNTHESIS_H         // <freetype/ftsynth.h>
    
        // create a JSON number from an anonymous enum
    enum { enum_value = 17 };
    json j_enum(enum_value);
    
    
    {  return Merge(column_family, key_slice, value_slice);
}
    
    class DB;
    
    #include 'rocksdb/env.h'
    
    #pragma once
    
      // Any internal progress/error information generated by the db will
  // be written to info_log if it is non-NULL, or to a file stored
  // in the same directory as the DB contents if info_log is NULL.
  // Default: NULL
  Logger* info_log;
    
    
    {}  // namespace rocksdb
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
      const auto mat = kernel.kernel_matrix() / (2.0 * 1.0 / std::pow(0.1, 4));
  const auto offset = kernel.offset_matrix();
    
      Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    // config detail: {'name': 'brake_on_off', 'enum': {0: 'BRAKE_ON_OFF_OFF', 1:
// 'BRAKE_ON_OFF_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 48, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Brake_rpt_6c::Brake_on_offType Brakerpt6c::brake_on_off(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 1);
    }
    
    
    {
    {
    {
    {  Headlight_rpt_77::Commanded_valueType ret =
      static_cast<Headlight_rpt_77::Commanded_valueType>(x);
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    // config detail: {'name': 'latitude_minutes', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 15,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'min'}
int Latlonheadingrpt82::latitude_minutes(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }