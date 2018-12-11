
        
        TegraBinaryOp_Invoker(cmpEQ, cmpEQ)
TegraBinaryOp_Invoker(cmpNE, cmpNE)
TegraBinaryOp_Invoker(cmpGT, cmpGT)
TegraBinaryOp_Invoker(cmpGE, cmpGE)
TegraGenOp_Invoker(cmpLT, cmpGT, 2, 1, 0, RANGE_DATA(ST, src2_data, src2_step), src2_step, \
                                          RANGE_DATA(ST, src1_data, src1_step), src1_step, \
                                          RANGE_DATA(DT, dst1_data, dst1_step), dst1_step)
TegraGenOp_Invoker(cmpLE, cmpGE, 2, 1, 0, RANGE_DATA(ST, src2_data, src2_step), src2_step, \
                                          RANGE_DATA(ST, src1_data, src1_step), src1_step, \
                                          RANGE_DATA(DT, dst1_data, dst1_step), dst1_step)
#define TEGRA_CMP(type, src1, sz1, src2, sz2, dst, sz, w, h, op) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
        ((op) == cv::CMP_EQ) ? \
        parallel_for_(Range(0, h), \
        TegraGenOp_cmpEQ_Invoker<const type, CAROTENE_NS::u8>(src1, sz1, src2, sz2, dst, sz, w, h), \
        (w * h) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        ((op) == cv::CMP_NE) ? \
        parallel_for_(Range(0, h), \
        TegraGenOp_cmpNE_Invoker<const type, CAROTENE_NS::u8>(src1, sz1, src2, sz2, dst, sz, w, h), \
        (w * h) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        ((op) == cv::CMP_GT) ? \
        parallel_for_(Range(0, h), \
        TegraGenOp_cmpGT_Invoker<const type, CAROTENE_NS::u8>(src1, sz1, src2, sz2, dst, sz, w, h), \
        (w * h) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        ((op) == cv::CMP_GE) ? \
        parallel_for_(Range(0, h), \
        TegraGenOp_cmpGE_Invoker<const type, CAROTENE_NS::u8>(src1, sz1, src2, sz2, dst, sz, w, h), \
        (w * h) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        ((op) == cv::CMP_LT) ? \
        parallel_for_(Range(0, h), \
        TegraGenOp_cmpLT_Invoker<const type, CAROTENE_NS::u8>(src1, sz1, src2, sz2, dst, sz, w, h), \
        (w * h) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        ((op) == cv::CMP_LE) ? \
        parallel_for_(Range(0, h), \
        TegraGenOp_cmpLE_Invoker<const type, CAROTENE_NS::u8>(src1, sz1, src2, sz2, dst, sz, w, h), \
        (w * h) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void convertScale(const Size2D &_size,
                      const f32 * srcBase, ptrdiff_t srcStride,
                      u16 * dstBase, ptrdiff_t dstStride,
                      f64 alpha, f64 beta);
    
        enum FLIP_MODE
    {
        FLIP_HORIZONTAL_MODE = 1,
        FLIP_VERTICAL_MODE = 2,
        FLIP_BOTH_MODE = FLIP_HORIZONTAL_MODE | FLIP_VERTICAL_MODE
    };
    
    void absDiff(const Size2D &size,
             const f32 * src0Base, ptrdiff_t src0Stride,
             const f32 * src1Base, ptrdiff_t src1Stride,
             f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<f32>());
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
    
                int16x4_t v_srclo = vget_low_s16(v_src0), v_srchi = vget_high_s16(v_src0);
            v_dst0 = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst0))),
                                  vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst0))));
    
        uint16x8_t tprev = vdupq_n_u16(0x0);
    uint16x8_t tcurr = tprev;
    uint16x8_t tnext = tprev;
    uint16x8_t t0, t1, t2;
    if(cn == 1)
    {
        for( size_t y = 0; y < size.height; y++ )
        {
            const u8* srow0;
            const u8* srow1 = internal::getRowPtr(srcBase, srcStride, y);
            const u8* srow2;
            u8* drow = internal::getRowPtr(dstBase, dstStride, y);
            if (borderType == BORDER_MODE_REFLECT101) {
                srow0 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 1);
                srow2 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-2);
            } else  if (borderType == BORDER_MODE_CONSTANT) {
                srow0 = y > 0 ? internal::getRowPtr(srcBase, srcStride, y-1) : tmp;
                srow2 =  y < size.height-1 ? internal::getRowPtr(srcBase, srcStride, y+1) : tmp;
            } else { // BORDER_MODE_REFLECT || BORDER_MODE_REPLICATE
                srow0 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
                srow2 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-1);
            }
    }
    }
    
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
                // calculate values for plain CPU part below if needed
            if (x + 8 >= bwidth)
            {
                ptrdiff_t x3 = x == width ? width - 1 : x;
                ptrdiff_t x4 = border == BORDER_MODE_CONSTANT ? x3 - 1 : std::max<ptrdiff_t>(x3 - 1, 0);
    }
    
    // Values() allows generating tests from explicitly specified list of
// parameters.
//
// Synopsis:
// Values(T v1, T v2, ..., T vN)
//   - returns a generator producing sequences with elements v1, v2, ..., vN.
//
// For example, this instantiates tests from test case BarTest each
// with values 'one', 'two', and 'three':
//
// INSTANTIATE_TEST_CASE_P(NumSequence, BarTest, Values('one', 'two', 'three'));
//
// This instantiates tests from test case BazTest each with values 1, 2, 3.5.
// The exact type of values will depend on the type of parameter in BazTest.
//
// INSTANTIATE_TEST_CASE_P(FloatingNumbers, BazTest, Values(1, 2, 3.5));
//
// Currently, Values() supports from 1 to $n parameters.
//
$range i 1..n
$for i [[
$range j 1..i
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
    // Ternary predicate assertion macros.
#define EXPECT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_FATAL_FAILURE_)
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    
#endif  // GTEST_SAMPLES_SAMPLE2_H_

    
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
    
      // Clears the queue.
  void Clear() {
    if (size_ > 0) {
      // 1. Deletes every node.
      QueueNode<E>* node = head_;
      QueueNode<E>* next = node->next();
      for (; ;) {
        delete node;
        node = next;
        if (node == NULL) break;
        next = node->next();
      }
    }
    }
    
    #include 'collision_object_bullet.h'
    
    /**
	@author AndreaCatania
*/
    
    class RigidBodyBullet;
class btTypedConstraint;
    
    #include 'dvector.h'
    
    /*
 * Before using the parallel module, you can configure these to change
 * how much parallelism is used.
 */
extern size_t num_threads;
extern size_t work_chunk;
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
    template<class T> static T variant_init(T v) {
    return v;
}
static int64_t variant_init(uint32_t v) {
    return v;
}
    
    struct FileStreamWrapper final : Stream::Wrapper {
  static req::ptr<MemFile> openFromCache(const String& filename,
                                         const String& mode);
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  int access(const String& path, int mode) override {
    return ::access(File::TranslatePath(path).data(), mode);
  }
  int stat(const String& path, struct stat* buf) override {
    return ::stat(File::TranslatePath(path).data(), buf);
  }
  int lstat(const String& path, struct stat* buf) override {
    return ::lstat(File::TranslatePath(path).data(), buf);
  }
  int unlink(const String& path) override;
  int rename(const String& oldname, const String& newname) override;
  int mkdir(const String& path, int mode, int options) override;
  int rmdir(const String& path, int /*options*/) override {
    ERROR_RAISE_WARNING(::rmdir(File::TranslatePath(path).data()));
    return ret;
  }
  bool isNormalFileStream() const override { return true; }
    }
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}