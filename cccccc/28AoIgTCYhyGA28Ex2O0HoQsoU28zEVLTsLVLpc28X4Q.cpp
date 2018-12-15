
        
            f32 alpha, beta, gamma;
    float32x4_t valpha, vbeta, vgamma;
    wAdd(f32 _alpha, f32 _beta, f32 _gamma):
        alpha(_alpha), beta(_beta), gamma(_gamma)
    {
        valpha = vdupq_n_f32(_alpha);
        vbeta = vdupq_n_f32(_beta);
        vgamma = vdupq_n_f32(_gamma + 0.5);
    }
    
        ptrdiff_t idx_l = internal::borderInterpolate(-1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r = internal::borderInterpolate(size.width, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    
    
    {        if (!m[-1])         CANNY_PUSH(m - 1);
        if (!m[1])          CANNY_PUSH(m + 1);
        if (!m[-mapstep-1]) CANNY_PUSH(m - mapstep - 1);
        if (!m[-mapstep])   CANNY_PUSH(m - mapstep);
        if (!m[-mapstep+1]) CANNY_PUSH(m - mapstep + 1);
        if (!m[mapstep-1])  CANNY_PUSH(m + mapstep - 1);
        if (!m[mapstep])    CANNY_PUSH(m + mapstep);
        if (!m[mapstep+1])  CANNY_PUSH(m + mapstep + 1);
    }
    
        for (size_t i = 0u; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t sj = 0u, dj = 0u;
    }
    
    #define MERGE_QUAD(sgn, bits, n) { \
                                     vec128 v_dst; \
                                     /*FILL_LINES##n(PREF, sgn##bits) \
                                     FILL_LINES##n(VLD1Q, sgn##bits)*/ \
                                     FILL_LINES##n(PRLD, sgn##bits) \
                                     vst##n##q_##sgn##bits(dst + dj, v_dst); \
                                 }
    
    #include <carotene/functions.hpp>
#include 'saturate_cast.hpp'
    
    template <int shift>
void rshiftConst(const Size2D &size,
                 const s16 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 CONVERT_POLICY cpolicy)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
                    int16x8_t t0_16s = vreinterpretq_s16_u16(vmovl_u8(t0));
                int16x8_t t1_16s = vreinterpretq_s16_u16(vmovl_u8(t1));
                int16x8_t t2_16s = vreinterpretq_s16_u16(vmovl_u8(t2));
    
    #include 'gtest/internal/gtest-port.h'
    
    #if !GTEST_OS_SYMBIAN
# include <utility>
#endif
    
    // 4-ary predicate assertion macros.
#define EXPECT_PRED_FORMAT4(pred_format, v1, v2, v3, v4) \
  GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED4(pred, v1, v2, v3, v4) \
  GTEST_PRED4_(pred, v1, v2, v3, v4, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT4(pred_format, v1, v2, v3, v4) \
  GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED4(pred, v1, v2, v3, v4) \
  GTEST_PRED4_(pred, v1, v2, v3, v4, GTEST_FATAL_FAILURE_)
    
    // Helper macro for defining tests.
#define GTEST_TEST_(test_case_name, test_name, parent_class, parent_id)\
class GTEST_TEST_CLASS_NAME_(test_case_name, test_name) : public parent_class {\
 public:\
  GTEST_TEST_CLASS_NAME_(test_case_name, test_name)() {}\
 private:\
  virtual void TestBody();\
  static ::testing::TestInfo* const test_info_ GTEST_ATTRIBUTE_UNUSED_;\
  GTEST_DISALLOW_COPY_AND_ASSIGN_(\
      GTEST_TEST_CLASS_NAME_(test_case_name, test_name));\
};\
\
::testing::TestInfo* const GTEST_TEST_CLASS_NAME_(test_case_name, test_name)\
  ::test_info_ =\
    ::testing::internal::MakeAndRegisterTestInfo(\
        #test_case_name, #test_name, NULL, NULL, \
        (parent_id), \
        parent_class::SetUpTestCase, \
        parent_class::TearDownTestCase, \
        new ::testing::internal::TestFactoryImpl<\
            GTEST_TEST_CLASS_NAME_(test_case_name, test_name)>);\
void GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::TestBody()
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    template <GTEST_7_TYPENAMES_(T)>
inline GTEST_7_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4, const T5& f5, const T6& f6) {
  return GTEST_7_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6);
}
    
    
// We don't want to require the users to write TemplatesN<...> directly,
// as that would require them to count the length.  Templates<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Templates<list>
// will appear as Templates<list, NoneT, NoneT, ..., NoneT> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Templates<T1, ..., TN>, and Google Test will translate
// that to TemplatesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Templates template.
template <GTEST_TEMPLATE_ T1 = NoneT, GTEST_TEMPLATE_ T2 = NoneT,
    GTEST_TEMPLATE_ T3 = NoneT, GTEST_TEMPLATE_ T4 = NoneT,
    GTEST_TEMPLATE_ T5 = NoneT, GTEST_TEMPLATE_ T6 = NoneT,
    GTEST_TEMPLATE_ T7 = NoneT, GTEST_TEMPLATE_ T8 = NoneT,
    GTEST_TEMPLATE_ T9 = NoneT, GTEST_TEMPLATE_ T10 = NoneT,
    GTEST_TEMPLATE_ T11 = NoneT, GTEST_TEMPLATE_ T12 = NoneT,
    GTEST_TEMPLATE_ T13 = NoneT, GTEST_TEMPLATE_ T14 = NoneT,
    GTEST_TEMPLATE_ T15 = NoneT, GTEST_TEMPLATE_ T16 = NoneT,
    GTEST_TEMPLATE_ T17 = NoneT, GTEST_TEMPLATE_ T18 = NoneT,
    GTEST_TEMPLATE_ T19 = NoneT, GTEST_TEMPLATE_ T20 = NoneT,
    GTEST_TEMPLATE_ T21 = NoneT, GTEST_TEMPLATE_ T22 = NoneT,
    GTEST_TEMPLATE_ T23 = NoneT, GTEST_TEMPLATE_ T24 = NoneT,
    GTEST_TEMPLATE_ T25 = NoneT, GTEST_TEMPLATE_ T26 = NoneT,
    GTEST_TEMPLATE_ T27 = NoneT, GTEST_TEMPLATE_ T28 = NoneT,
    GTEST_TEMPLATE_ T29 = NoneT, GTEST_TEMPLATE_ T30 = NoneT,
    GTEST_TEMPLATE_ T31 = NoneT, GTEST_TEMPLATE_ T32 = NoneT,
    GTEST_TEMPLATE_ T33 = NoneT, GTEST_TEMPLATE_ T34 = NoneT,
    GTEST_TEMPLATE_ T35 = NoneT, GTEST_TEMPLATE_ T36 = NoneT,
    GTEST_TEMPLATE_ T37 = NoneT, GTEST_TEMPLATE_ T38 = NoneT,
    GTEST_TEMPLATE_ T39 = NoneT, GTEST_TEMPLATE_ T40 = NoneT,
    GTEST_TEMPLATE_ T41 = NoneT, GTEST_TEMPLATE_ T42 = NoneT,
    GTEST_TEMPLATE_ T43 = NoneT, GTEST_TEMPLATE_ T44 = NoneT,
    GTEST_TEMPLATE_ T45 = NoneT, GTEST_TEMPLATE_ T46 = NoneT,
    GTEST_TEMPLATE_ T47 = NoneT, GTEST_TEMPLATE_ T48 = NoneT,
    GTEST_TEMPLATE_ T49 = NoneT, GTEST_TEMPLATE_ T50 = NoneT>
struct Templates {
  typedef Templates50<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
      T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27,
      T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41,
      T42, T43, T44, T45, T46, T47, T48, T49, T50> type;
};
    
    void ConstraintBullet::setup(btTypedConstraint *p_constraint) {
	constraint = p_constraint;
	constraint->setUserConstraintPtr(this);
}
    
    /**
	@author AndreaCatania
*/
    
    #ifndef PIN_JOINT_BULLET_H
#define PIN_JOINT_BULLET_H
    
    public:
	_FORCE_INLINE_ void set_self(const RID &p_self) { self = p_self; }
	_FORCE_INLINE_ RID get_self() const { return self; }
    
    	ClassDB::register_virtual_class<CSGShape>();
	ClassDB::register_virtual_class<CSGPrimitive>();
	ClassDB::register_class<CSGMesh>();
	ClassDB::register_class<CSGSphere>();
	ClassDB::register_class<CSGBox>();
	ClassDB::register_class<CSGCylinder>();
	ClassDB::register_class<CSGTorus>();
	ClassDB::register_class<CSGPolygon>();
	ClassDB::register_class<CSGCombiner>();
    
    
    {	alloc_mutex = Mutex::create();
}
    
    
    {	ADD_SIGNAL(MethodInfo('peer_connected', PropertyInfo(Variant::INT, 'id')));
	ADD_SIGNAL(MethodInfo('peer_disconnected', PropertyInfo(Variant::INT, 'id')));
	ADD_SIGNAL(MethodInfo('server_disconnected'));
	ADD_SIGNAL(MethodInfo('connection_succeeded'));
	ADD_SIGNAL(MethodInfo('connection_failed'));
}
    
    Thread::ID Thread::_main_thread_id = 0;
    
    uint32_t
RuleBasedCollator::setVariableTop(const UChar *varTop, int32_t len, UErrorCode &errorCode) {
    if(U_FAILURE(errorCode)) { return 0; }
    if(varTop == NULL && len !=0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    if(len < 0) { len = u_strlen(varTop); }
    if(len == 0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    UBool numeric = settings->isNumeric();
    int64_t ce1, ce2;
    if(settings->dontCheckFCD()) {
        UTF16CollationIterator ci(data, numeric, varTop, varTop, varTop + len);
        ce1 = ci.nextCE(errorCode);
        ce2 = ci.nextCE(errorCode);
    } else {
        FCDUTF16CollationIterator ci(data, numeric, varTop, varTop, varTop + len);
        ce1 = ci.nextCE(errorCode);
        ce2 = ci.nextCE(errorCode);
    }
    if(ce1 == Collation::NO_CE || ce2 != Collation::NO_CE) {
        errorCode = U_CE_NOT_FOUND_ERROR;
        return 0;
    }
    setVariableTop((uint32_t)(ce1 >> 32), errorCode);
    return settings->variableTop;
}
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        DecimalFormat *fmtToAdopt,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            fmtToAdopt,
            new MarkupStyle(beginMarkup, endMarkup),
            status);
}
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    #include 'utypeinfo.h'  // for 'typeid' to work
    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_BEGIN
    
    #endif

    
    class PluralRules;
    
    // -------------------------------------
    
    
    {    // Always emit at least '0'
    if (digits == 0) {
        return appendTo.append((UChar) 0x30);
    }
    return appendTo.append(gDigits, ((smallPositiveValue  + 1) << 2) - digits, digits);
}
    
    
    {
    {        currentNumberFormat->setMinimumIntegerDigits(minDigits);
        currentNumberFormat->setMaximumIntegerDigits(maxDigits);
        currentNumberFormat->format(value, appendTo, pos);  // 3rd arg is there to speed up processing
    }
}
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const UnicodeString &keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
    }
    
    /**
 * Implement UnicodeMatcher
 */
UBool StringMatcher::matchesIndexValue(uint8_t v) const {
    if (pattern.length() == 0) {
        return TRUE;
    }
    UChar32 c = pattern.char32At(0);
    const UnicodeMatcher *m = data->lookupMatcher(c);
    return (m == 0) ? ((c & 0xFF) == v) : m->matchesIndexValue(v);
}
    
        /**
     * Implement UnicodeMatcher
     */
    virtual void addMatchSetTo(UnicodeSet& toUnionTo) const;
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_WIN32_FUNCTIONS                     // [Win32] Won't use and link with any Win32 function.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
        glfwDestroyWindow(window);
    glfwTerminate();
    
    struct GLFWwindow;
    
    // Visual Studio warnings
#ifdef _MSC_VER
#pragma warning (disable: 4127) // condition expression is constant
#endif
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    
    {  void deserialize(const std::string& filename);
};
    
      std::shared_ptr<DHTNode> localNode_;
    
    #include 'common.h'
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
    namespace aria2 {
    }
    
    class DHTTask;
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    #include <cstring>