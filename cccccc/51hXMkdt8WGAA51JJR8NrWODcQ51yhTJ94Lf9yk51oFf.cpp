
        
        
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
    #endif  // GTEST_HAS_DEATH_TEST
    
      // Take over ownership of a raw pointer.  This should happen as soon as
  // possible after the object is created.
  explicit linked_ptr(T* ptr = NULL) { capture(ptr); }
  ~linked_ptr() { depart(); }
    
    template <class Generator1, class Generator2, class Generator3,
    class Generator4>
class CartesianProductHolder4 {
 public:
CartesianProductHolder4(const Generator1& g1, const Generator2& g2,
    const Generator3& g3, const Generator4& g4)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4) {}
  template <typename T1, typename T2, typename T3, typename T4>
  operator ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4> >() const {
    return ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4> >(
        new CartesianProductGenerator4<T1, T2, T3, T4>(
        static_cast<ParamGenerator<T1> >(g1_),
        static_cast<ParamGenerator<T2> >(g2_),
        static_cast<ParamGenerator<T3> >(g3_),
        static_cast<ParamGenerator<T4> >(g4_)));
  }
    }
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_PARAM_UTIL_H_

    
    // Implementation #1 calculates the primes on-the-fly.
class OnTheFlyPrimeTable : public PrimeTable {
 public:
  virtual bool IsPrime(int n) const {
    if (n <= 1) return false;
    }
    }
    
            void DecimateLattices(
            LatticePtr decimatedLattices,         /* output: lattices after decimation*/
            BoundariesPtr decimatedBoundaryPtr,   /* output: boundary after decimation*/
            ExtrauttMapPtr decimatedExtraMapPtr,  /* output: extramap after decimation*/
            UidPtr decimatedUidPtr,               /* output: Uid after decimation*/
            const Lattice lattices,               /* input: lattices to be decimated */
            const Boundaries boundaries,          /* input: boundary to be decimated */
            const ExtrauttMap extraMaps,          /* input: extra map to be decimated */
            const Uid uids,                       /* input: uid to be decimated*/
            pair<size_t, size_t> parallelSeqRange /* input: what parallel sequence range we are looking at */
            )
        {
            size_t parallelSeqStId = parallelSeqRange.first;
            size_t parallelSeqEnId = parallelSeqRange.second;
    }
    
        // fetch entire object into the cache
    // Does this really make sense?? Should be rather done during computation.
    void prefetch() const
    {
        const msra::math::float4 *p2 = (msra::math::float4 *) this->p;
        size_t numfloat4s = cols() * colstride / 4;
        const msra::math::float4 *q = p2 + numfloat4s;
        const size_t cacherowbytes = 64; // or what?
        const size_t cacherowfloat4s = cacherowbytes / sizeof(*p2);
        for (; p2 < q; p2 += cacherowfloat4s)
            msra::math::float4::prefetch(p2);
    }
    
    // If the Tracing flag is set, print out a timestamp with no new line at the end
#define PREPENDTS(stream) \
    do \
    { \
        if (ProgressTracing::GetTimestampingFlag()) \
        { \
            char mbstr[30]; \
            fprintf(stream, '%s: ', ProgressTracing::Timestamp(mbstr));  \
        } \
    } while(0)
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    void ImGui_ImplFreeGLUT_InstallFuncs()
{
    glutReshapeFunc(ImGui_ImplFreeGLUT_ReshapeFunc);
    glutMotionFunc(ImGui_ImplFreeGLUT_MotionFunc);
    glutPassiveMotionFunc(ImGui_ImplFreeGLUT_MotionFunc);
    glutMouseFunc(ImGui_ImplFreeGLUT_MouseFunc);
    glutMouseWheelFunc(ImGui_ImplFreeGLUT_MouseWheelFunc);
    glutKeyboardFunc(ImGui_ImplFreeGLUT_KeyboardFunc);
    glutKeyboardUpFunc(ImGui_ImplFreeGLUT_KeyboardUpFunc);
    glutSpecialFunc(ImGui_ImplFreeGLUT_SpecialFunc);
    glutSpecialUpFunc(ImGui_ImplFreeGLUT_SpecialUpFunc);
}
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    static void ImGui_ImplSDL2_UpdateMouseCursor()
{
    ImGuiIO& io = ImGui::GetIO();
    if (io.ConfigFlags & ImGuiConfigFlags_NoMouseCursorChange)
        return;
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    #include 'guetzli/output_image.h'
    
    namespace guetzli {
    }
    
    #pragma once
    
      BlockingQueueAddResult add(T item) override {
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queue_.write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queue_.blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
      if (UNLIKELY(!tk)) {
    return makeFuture<Unit>(FutureNoTimekeeper());
  }
    
    FOLLY_ALWAYS_INLINE int __builtin_ffsll(long long x) {
  unsigned long index;
  return int(_BitScanForward64(&index, (unsigned long long)x) ? index + 1 : 0);
}
    
    TEST(SysAllocator, vector) {
  using Alloc = SysAllocator<float>;
  Alloc const alloc;
  std::vector<float, Alloc> nums(alloc);
  nums.push_back(3.);
  nums.push_back(5.);
  EXPECT_THAT(nums, testing::ElementsAreArray({3., 5.}));
}
    
    #include <folly/futures/Future.h>
#include <folly/portability/GTest.h>