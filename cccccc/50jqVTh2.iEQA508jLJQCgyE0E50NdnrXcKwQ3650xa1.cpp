
        
        // Internal macro for implementing {EXPECT|ASSERT}_PRED3.  Don't use
// this in your code.
#define GTEST_PRED3_(pred, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred3Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3), on_failure)
    
    // Removes const from a type if it is a const type, otherwise leaves
// it unchanged.  This is the same as tr1::remove_const, which is not
// widely available yet.
template <typename T>
struct RemoveConst { typedef T type; };  // NOLINT
template <typename T>
struct RemoveConst<const T> { typedef T type; };  // NOLINT
    
    // We use our own TR1 tuple if we aren't sure the user has an
// implementation of it already.  At this time, libstdc++ 4.0.0+ and
// MSVC 2010 are the only mainstream standard libraries that come
// with a TR1 tuple implementation.  NVIDIA's CUDA NVCC compiler
// pretends to be GCC by defining __GNUC__ and friends, but cannot
// compile GCC's tuple implementation.  MSVC 2008 (9.0) provides TR1
// tuple in a 323 MB Feature Pack download, which we cannot assume the
// user has.  QNX's QCC compiler is a modified GCC but it doesn't
// support TR1 tuple.  libc++ only provides std::tuple, in C++11 mode,
// and it can be used with some compilers that define __GNUC__.
# if (defined(__GNUC__) && !defined(__CUDACC__) && (GTEST_GCC_VER_ >= 40000) \
      && !GTEST_OS_QNX && !defined(_LIBCPP_VERSION)) || _MSC_VER >= 1600
#  define GTEST_ENV_HAS_TR1_TUPLE_ 1
# endif
    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_) {}
    
    TEST_F(UnicharcompressTest, DoesKannada) {
  LOG(INFO) << 'Testing kan';
  LoadUnicharset('kan.unicharset');
  ExpectCorrect('kan');
  SerializeAndUndo();
  ExpectCorrect('kan');
}
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    template <class R, class P1, class P2, class P3>
inline typename _TessFunctionResultCallback_3_0<false,R,P1,P2,P3>::base*
NewPermanentTessCallback(R (*function)(P1,P2,P3), typename Identity<P1>::type p1, typename Identity<P2>::type p2, typename Identity<P3>::type p3) {
  return new _TessFunctionResultCallback_3_0<false,R,P1,P2,P3>(function, p1, p2, p3);
}
    
    const char *kUTF8LineSeparator = '\u2028';  // '\xe2\x80\xa8';
const char *kUTF8ParagraphSeparator = '\u2029';  // '\xe2\x80\xa9';
const char *kLRM = '\u200E';  // Left-to-Right Mark
const char *kRLM = '\u200F';  // Right-to-Left Mark
const char *kRLE = '\u202A';  // Right-to-Left Embedding
const char *kPDF = '\u202C';  // Pop Directional Formatting
    
    // Helper to expand a box in one of the 4 directions by the given pad,
// provided it does not expand into any cell with a zero noise density.
// If that is not possible, try expanding all round by a small constant.
static TBOX AttemptBoxExpansion(const TBOX& box, const IntGrid& noise_density,
                                int pad) {
  TBOX expanded_box(box);
  expanded_box.set_right(box.right() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_left(box.left() - pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_top(box.top() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_bottom(box.bottom() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.pad(kNoisePadding, kNoisePadding);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  return box;
}
    
    
    {  // Max entry in noise_density_ before the cell is declared noisy.
  int max_noise_count_;
  // Completed noise density map, which we keep around to use for secondary
  // noise detection.
  IntGrid* noise_density_;
};
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    UsageTimer::Result UsageTimer::Sample() {
  Result r;
  r.wall = Now();
  get_resource_usage(&r.user, &r.system);
  r.total_cpu_time = 0;
  r.idle_cpu_time = 0;
  get_cpu_usage(&r.total_cpu_time, &r.idle_cpu_time);
  return r;
}
    
    
    {  const Result start_;
};
    
    #include 'grpc_tools/main.h'