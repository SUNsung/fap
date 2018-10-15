
        
        
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
            if (s[0] < 0 || s[1] < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
        result += (s[0] += s[1]);
        if (s[0] < 0 || result < 0)
        {
            return 0x7fFFffFF;
        }
    
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
    
        v0k8 = vextq_s16(d8_15, d16_23, 3);
    ak8 = vminq_s16(ak8, v0k8);
    bk8 = vmaxq_s16(bk8, v0k8);
    
            uint8x8_t vsrc = vld1_u8(src + j);
    
    // Used to print a pointer that is neither a char pointer nor a member
// pointer, when the user doesn't define PrintTo() for it.  (A member
// variable pointer or member function pointer doesn't really point to
// a location in the address space.  Their representation is
// implementation-defined.  Therefore they will be printed as raw
// bytes.)
template <typename T>
void DefaultPrintTo(IsNotContainer /* dummy */,
                    true_type /* is a pointer */,
                    T* p, ::std::ostream* os) {
  if (p == NULL) {
    *os << 'NULL';
  } else {
    // C++ doesn't allow casting from a function pointer to any object
    // pointer.
    //
    // IsTrue() silences warnings: 'Condition is always true',
    // 'unreachable code'.
    if (IsTrue(ImplicitlyConvertible<T*, const void*>::value)) {
      // T is not a function type.  We just call << to print p,
      // relying on ADL to pick up user-defined << for their pointer
      // types, if any.
      *os << p;
    } else {
      // T is a function type, so '*os << p' doesn't do what we want
      // (it just prints p as bool).  We want to print p as a const
      // void*.  However, we cannot cast it to const void* directly,
      // even using reinterpret_cast, as earlier versions of gcc
      // (e.g. 3.4.5) cannot compile the cast when p is a function
      // pointer.  Casting to UInt64 first solves the problem.
      *os << reinterpret_cast<const void*>(
          reinterpret_cast<internal::UInt64>(p));
    }
  }
}
    
    #endif  // GTEST_HAS_TYPED_TEST
    
    namespace testing {
namespace internal {
    }
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29>
struct Templates29 {
  typedef TemplateSel<T1> Head;
  typedef Templates28<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29> Tail;
};
    
    
    {# endif  // GTEST_HAS_RTTI
}
    
    
    {    return true;
  }
    
    
    {}  // namespace tesseract.
    
    #else  // !defined(__SSE4_1__)
// Non-Android code here
    
    #ifndef TESSERACT_ARCH_DOTPRODUCTSSE_H_
#define TESSERACT_ARCH_DOTPRODUCTSSE_H_
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Computes the base C++ implementation, if there are no partial_funcs_.
  // NOTE: The size of the input vector (u) must be padded using
  // RoundInputs above.
  // The input will be over-read to the extent of the padding. There are no
  // alignment requirements.
  void MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                       const GenericVector<double>& scales, const int8_t* u,
                       double* v) const;
    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
      // Writing direction
  bool is_vertical_text = (block->classify_rotation().x() == 0.0);
  bool right_to_left = block->right_to_left();
  *writing_direction =
      is_vertical_text
          ? WRITING_DIRECTION_TOP_TO_BOTTOM
          : (right_to_left
                ? WRITING_DIRECTION_RIGHT_TO_LEFT
                : WRITING_DIRECTION_LEFT_TO_RIGHT);
    
    
    {  ScrollView* sv_window_;
};
    
    #pragma once
    
    static void stb_out2(stb_uint v) { stb_out(v >> 8); stb_out(v); }
static void stb_out3(stb_uint v) { stb_out(v >> 16); stb_out(v >> 8); stb_out(v); }
static void stb_out4(stb_uint v) { stb_out(v >> 24); stb_out(v >> 16); stb_out(v >> 8 ); stb_out(v); }
    
    int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    // Render function
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX11_RenderDrawData(ImDrawData* draw_data)
{
    ID3D11DeviceContext* ctx = g_pd3dDeviceContext;
    }
    
    void ImGui_ImplDX9_Shutdown()
{
    ImGui_ImplDX9_InvalidateDeviceObjects();
    g_pd3dDevice = NULL;
}
    
            const float ascent = font_face.Info.Ascender;
        const float descent = font_face.Info.Descender;
        ImFontAtlasBuildSetupFont(atlas, dst_font, &cfg, ascent, descent);
        const float font_off_x = cfg.GlyphOffset.x;
        const float font_off_y = cfg.GlyphOffset.y + (float)(int)(dst_font->Ascent + 0.5f);
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        storage_type value = const_cast< storage_type& >(storage);
        while (!BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE128(&storage, v, &value)) {}
    }
    
    
    {} // namespace atomics