
        
        #define TEGRA_RECIP(src2, sz2, dst, sz, w, h, scale) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::reciprocal(CAROTENE_NS::Size2D(w, h), \
                            src2, sz2, \
                            dst, sz, \
                            scale, \
                            CAROTENE_NS::CONVERT_POLICY_SATURATE), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        enum COLOR_SPACE
    {
        COLOR_SPACE_BT601,
        COLOR_SPACE_BT709
    };
    
    namespace {
    }
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
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
    
                // do vertical convolution
            size_t x = 0;
            const size_t bcols = y + 2 < size.height ? colsn : (colsn - 8);
            for( ; x <= bcols; x += 8 )
            {
                internal::prefetch(srow0 + x);
                internal::prefetch(srow1 + x);
                internal::prefetch(srow2 + x);
    }
    
    #define MERGE_QUAD(sgn, bits, n) { \
                                     vec128 v_dst; \
                                     /*FILL_LINES##n(PREF, sgn##bits) \
                                     FILL_LINES##n(VLD1Q, sgn##bits)*/ \
                                     FILL_LINES##n(PRLD, sgn##bits) \
                                     vst##n##q_##sgn##bits(dst + dj, v_dst); \
                                 }
    
    void convolution(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 BORDER_MODE border, u8 borderValue,
                 const Size2D & ksize, s16 * kernelBase, u32 scale)
{
    internal::assertSupportedConfiguration(isConvolutionSupported(size, ksize, border));
#ifdef CAROTENE_NEON
    const uint8x8_t v_zero_u8 = vdup_n_u8(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    const int32x4_t v_zero_s32 = vdupq_n_s32(0);
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
    
                vsuml = vaddw_u16(vsuml, vget_low_u16(el8));
            vsumh = vaddw_u16(vsumh, el4h);
    
    <summary> <b>Example</b> </summary>
    
    #endif // CAFFE2_OPERATORS_JSD_OP_H_

    
    REGISTER_CUDA_OPERATOR(LC1D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC1DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    // The variables defined in the type-parameterized test macros are
// static as typically these macros are used in a .h file that can be
// #included in multiple translation units linked together.
# define TYPED_TEST_CASE_P(CaseName) \
  static ::testing::internal::TypedTestCasePState \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName)
    
    // In describing the results of death tests, these terms are used with
// the corresponding definitions:
//
// exit status:  The integer exit information in the format specified
//               by wait(2)
// exit code:    The integer code passed to exit(3), _exit(2), or
//               returned from main()
class GTEST_API_ DeathTest {
 public:
  // Create returns false if there was an error determining the
  // appropriate action to take for the current death test; for example,
  // if the gtest_death_test_style flag is set to an invalid value.
  // The LastMessage method will return a more detailed message in that
  // case.  Otherwise, the DeathTest pointer pointed to by the 'test'
  // argument is set.  If the death test should be skipped, the pointer
  // is set to NULL; otherwise, it is set to the address of a new concrete
  // DeathTest object that controls the execution of the current test.
  static bool Create(const char* statement, const RE* regex,
                     const char* file, int line, DeathTest** test);
  DeathTest();
  virtual ~DeathTest() { }
    }
    
    #include 'gtest/internal/gtest-string.h'
    
    // MSVC 8.0, Sun C++, and IBM XL C++ have a bug which causes the above
// definition to fail to remove the const in 'const int[3]' and 'const
// char[3][4]'.  The following specialization works around the bug.
template <typename T, size_t N>
struct RemoveConst<const T[N]> {
  typedef typename RemoveConst<T>::type type[N];
};
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    ]]
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      static int allocated() { return allocated_; }
    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
     private:
  // Creates a node with a given element value.  The next pointer is
  // set to NULL.
  explicit QueueNode(const E& an_element) : element_(an_element), next_(NULL) {}
    
        NDArrayView::NDArrayView(CNTK::DataType dataType, const NDShape& viewShape, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const void* nonZeroValues, size_t numNonZeroValues, const DeviceDescriptor& device, bool readOnly/* = false*/)
        : NDArrayView(dataType, device, StorageFormat::SparseCSC, viewShape, false, AllocateTensorView(dataType, StorageFormat::SparseCSC, viewShape, device, numNonZeroValues * DataTypeSize(dataType)))
    {
        if ((colStarts == nullptr) || (rowIndices == nullptr) || (nonZeroValues == nullptr) || (numNonZeroValues == 0) || (numNonZeroValues > viewShape.TotalSize()))
            InvalidArgument('Invalid sparse CSC format data specified for construction of NDArrayView with shape '%S'; '
                            'either one of the specified buffers is null or the count (%d) of non-zero values is invalid.',
                            viewShape.AsString().c_str(), (int)numNonZeroValues);
        switch (dataType)
        {
            case DataType::Float:
            {
                auto sparseMatrix = GetWritableMatrix<float>(1);
                sparseMatrix->SetMatrixFromCSCFormat(colStarts, rowIndices, (const float*)nonZeroValues, numNonZeroValues, sparseMatrix->GetNumRows(), sparseMatrix->GetNumCols());
                break;
            }
            case DataType::Double:
            {
                auto sparseMatrix = GetWritableMatrix<double>(1);
                sparseMatrix->SetMatrixFromCSCFormat(colStarts, rowIndices, (const double*)nonZeroValues, numNonZeroValues, sparseMatrix->GetNumRows(), sparseMatrix->GetNumCols());
                break;
            }
            case DataType::Float16:
            {
                auto sparseMatrix = GetWritableMatrix<half>(1);
                sparseMatrix->SetMatrixFromCSCFormat(colStarts, rowIndices, (const half*)nonZeroValues, numNonZeroValues, sparseMatrix->GetNumRows(), sparseMatrix->GetNumCols());
                break;
            }
            case DataType::Int8:
            {
                auto sparseMatrix = GetWritableMatrix<char>(1);
                sparseMatrix->SetMatrixFromCSCFormat(colStarts, rowIndices, (const char*)nonZeroValues, numNonZeroValues,
                    sparseMatrix->GetNumRows(), sparseMatrix->GetNumCols());
                break;
            }
            case DataType::Int16:
            {
                auto sparseMatrix = GetWritableMatrix<short>(1);
                sparseMatrix->SetMatrixFromCSCFormat(colStarts, rowIndices, (const short*)nonZeroValues, numNonZeroValues,
                    sparseMatrix->GetNumRows(), sparseMatrix->GetNumCols());
                break;
            }
            default:
                LogicError('Unsupported DataType %s', DataTypeName(dataType));
                break;
        }
        m_isReadOnly = readOnly;
    }
    
        /*static*/ Variable Variable::Deserialize(const Dictionary& dict, const CNTK::DeviceDescriptor& device)
    {
        static const vector<std::wstring> s_requiredDictionaryKeys = { typeKey, uidKey, kindKey, dataTypeKey, dynamicAxisKey, isSparseKey, needsGradientKey, shapeKey };
    }
    
        // firstSeq - first sequence of samples
    // secondSeq - second sequence of samples
    // numParallelSequences - number of parallel sequences in the minibatch
    // subPen - substitution penalty
    // delPen - deletion penalty
    // insPen - insertion penalty
    // squashInputs - whether to merge sequences of identical samples.
    // tokensToIgnore - list of samples to ignore during edit distance evaluation
    ElemType ComputeEditDistanceError(Matrix<ElemType>& firstSeq, const Matrix<ElemType> & secondSeq, MBLayoutPtr pMBLayout, 
        float subPen, float delPen, float insPen, bool squashInputs, const vector<size_t>& tokensToIgnore)
    {
        std::vector<int> firstSeqVec, secondSeqVec;
    }
    
    // Default limit for the size of the back track stack, to avoid system
//    failures causedby heap exhaustion.  Units are in 32 bit words, not bytes.
// This value puts ICU's limits higher than most other regexp implementations,
//    which use recursion rather than the heap, and take more storage per
//    backtrack point.
//
static const int32_t DEFAULT_BACKTRACK_STACK_CAPACITY = 8000000;
    
        char resultLocale[ULOC_FULLNAME_CAPACITY + 1];
    int32_t length = ucol_getFunctionalEquivalent(resultLocale, ULOC_FULLNAME_CAPACITY,
                                                  'collation', locale,
                                                  NULL, &errorCode);
    if(U_FAILURE(errorCode)) { return 0; }
    if(length == 0) {
        uprv_strcpy(resultLocale, 'root');
    } else {
        resultLocale[length] = 0;
    }
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    
    {        // Create a TimeZoneRule for initial time
        if (firstStdStart < firstDstStart) {
            initialRule = new InitialTimeZoneRule(tzid+UnicodeString(DST_STR), getRawOffset(), dstRule->getDSTSavings());
            firstTransition = new TimeZoneTransition(firstStdStart, *initialRule, *stdRule);
        } else {
            initialRule = new InitialTimeZoneRule(tzid+UnicodeString(STD_STR), getRawOffset(), 0);
            firstTransition = new TimeZoneTransition(firstDstStart, *initialRule, *dstRule);
        }
        // Check for null pointers.
        if (initialRule == NULL || firstTransition == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
        
    } else {
        // Create a TimeZoneRule for initial time
        initialRule = new InitialTimeZoneRule(tzid, getRawOffset(), 0);
        // Check for null pointer.
        if (initialRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
    }
    
    class UnicodeString;
    
    #if !UCONFIG_NO_FORMATTING
    
        if (hasCursor) {
        // Adjust the cursor for positions outside the key.  These
        // refer to code points rather than code units.  If cursorPos
        // is within the output string, then use newStart, which has
        // already been set above.
        if (cursorPos < 0) {
            newStart = start;
            int32_t n = cursorPos;
            // Outside the output string, cursorPos counts code points
            while (n < 0 && newStart > 0) {
                newStart -= U16_LENGTH(text.char32At(newStart-1));
                ++n;
            }
            newStart += n;
        } else if (cursorPos > output.length()) {
            newStart = start + outLen;
            int32_t n = cursorPos - output.length();
            // Outside the output string, cursorPos counts code points
            while (n > 0 && newStart < text.length()) {
                newStart += U16_LENGTH(text.char32At(newStart));
                --n;
            }
            newStart += n;
        } else {
            // Cursor is within output string.  It has been set up above
            // to be relative to start.
            newStart += start;
        }
    }