
        
        
    {  return false;
}
    
      uv_loop_t* loop_;
    
    #include 'atom/browser/native_window_views.h'
    
      // The window used for processing events.
  HWND window_;
#endif
    
     protected:
  RenderProcessPreferences(
      v8::Isolate* isolate,
      const atom::RenderProcessPreferences::Predicate& predicate);
  ~RenderProcessPreferences() override;
    
    #include 'atom/common/api/api_messages.h'
#include 'atom/common/native_mate_converters/string16_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/web_contents.h'
#include 'native_mate/object_template_builder.h'
    
    void SavePageHandler::OnDownloadCreated(content::DownloadManager* manager,
                                        download::DownloadItem* item) {
  // OnDownloadCreated is invoked during WebContents::SavePage, so the |item|
  // here is the one stated by WebContents::SavePage.
  item->AddObserver(this);
}
    
    namespace base {
class SupportsUserData;
}
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
    
    {} // namespace
    
    void add(const Size2D &size,
         const u16 * src0Base, ptrdiff_t src0Stride,
         const u16 * src1Base, ptrdiff_t src1Stride,
         u16 * dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<u16, u32>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u16, u32>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    void bitwiseOr(const Size2D &size,
               const u8 *src0Base, ptrdiff_t src0Stride,
               const u8 *src1Base, ptrdiff_t src1Stride,
               u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseOr());
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
    
    template <>
int32x4_t vshrq_s32<0>(int32x4_t value)
{
    return value;
}
    
    void fillMinMaxLocs(const Size2D & size,
                    const s32 * srcBase, ptrdiff_t srcStride,
                    s32 minVal, size_t * minLocPtr, s32 & minLocCount, s32 minLocCapacity,
                    s32 maxVal, size_t * maxLocPtr, s32 & maxLocCount, s32 maxLocCapacity)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
                v = vmlaq_s32(v, v2, vc6s32);
            v = vmlaq_s32(v, v13, vc4s32);
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
      // Iterate over the blobs inside to_block, and set the blobs that we want to
  // process to BSTT_NONE. (By default, they should be BSTT_SKIP). The function
  // returns 0 upon success.
  int LabelSpecialText(TO_BLOCK* to_block);
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    
    {  int32_t local_cost_;    // Cost of this point on its own.
  int32_t total_cost_;    // Sum of all costs in best path to here.
                        // During cost calculations local_cost is excluded.
  int32_t total_steps_;   // Number of steps in best path to here.
  const DPPoint* best_prev_;  // Pointer to prev point in best path from here.
  // Information for computing the variance part of the cost.
  int32_t n_;             // Number of steps in best path to here for variance.
  int32_t sig_x_;         // Sum of step sizes for computing variance.
  int64_t sig_xsq_;       // Sum of squares of steps for computing variance.
};
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    // The tests from the instantiation above will have these names:
//
//    * AnotherInstantiationName/FooTest.DoesBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.DoesBlah/1 for 'dog'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/1 for 'dog'
//
// Please note that INSTANTIATE_TEST_CASE_P will instantiate all tests
// in the given test case, whether their definitions come before or
// AFTER the INSTANTIATE_TEST_CASE_P statement.
//
// Please also note that generator expressions (including parameters to the
// generators) are evaluated in InitGoogleTest(), after main() has started.
// This allows the user on one hand, to adjust generator parameters in order
// to dynamically determine a set of tests to run and on the other hand,
// give the user a chance to inspect the generated tests with Google Test
// reflection API before RUN_ALL_TESTS() is executed.
//
// You can see samples/sample7_unittest.cc and samples/sample8_unittest.cc
// for more examples.
//
// In the future, we plan to publish the API for defining new parameter
// generators. But for now this interface remains part of the internal
// implementation and is subject to change.
//
//
// A parameterized test fixture must be derived from testing::Test and from
// testing::WithParamInterface<T>, where T is the type of the parameter
// values. Inheriting from TestWithParam<T> satisfies that requirement because
// TestWithParam<T> inherits from both Test and WithParamInterface. In more
// complicated hierarchies, however, it is occasionally useful to inherit
// separately from Test and WithParamInterface. For example:
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
    // A concrete DeathTestFactory implementation for normal use.
class DefaultDeathTestFactory : public DeathTestFactory {
 public:
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test);
};
    
    // Protects copying of all linked_ptr objects.
GTEST_API_ GTEST_DECLARE_STATIC_MUTEX_(g_linked_ptr_mutex);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
class ValueArray17 {
 public:
  ValueArray17(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
      T17 v17) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17) {}
    }
    
    template <GTEST_10_TYPENAMES_(T)>
struct TupleElement<true, 6, GTEST_10_TUPLE_(T) > {
  typedef T6 type;
};
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43>
struct Types43 {
  typedef T1 Head;
  typedef Types42<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43> Tail;
};
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    
    {
    {
    {			}
			if (decomposed[i].IsUsable()){
				decomposed[i].AddTo(*toAdd);
				
				bd->CreateFixture((const b2FixtureDef*)toAdd);
			} else if (B2_POLYGON_REPORT_ERRORS){
				printf('Didn't add unusable polygon.  Dumping vertices:\n');
				decomposed[i].print();
			}
Skip:
			;
        }
		delete[] pdarray;
        delete[] decomposed;
		return;// pdarray; //needs to be deleted after body is created
}
    
    #include 'EtcErrorMetric.h'
    
    #ifdef OPUS_ARM_PRESUME_AARCH64_NEON_INTR
#include 'arm/fixed_arm64.h'
#elif OPUS_ARM_INLINE_EDSP
#include 'arm/fixed_armv5e.h'
#elif defined (OPUS_ARM_INLINE_ASM)
#include 'arm/fixed_armv4.h'
#elif defined (BFIN_ASM)
#include 'fixed_bfin.h'
#elif defined (TI_C5X_ASM)
#include 'fixed_c5x.h'
#elif defined (TI_C6X_ASM)
#include 'fixed_c6x.h'
#endif
    
    #if !defined(OPUS_HAVE_RTCD)
#define OVERRIDE_OPUS_FFT (1)
    
    /** 16x16 multiplication where the result fits in 32 bits */
#undef MULT16_16
static OPUS_INLINE opus_val32 MULT16_16_armv5e(opus_val16 a, opus_val16 b)
{
  int res;
  __asm__(
      '#MULT16_16\n\t'
      'smulbb %0, %1, %2;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define MULT16_16(a, b) (MULT16_16_armv5e(a, b))