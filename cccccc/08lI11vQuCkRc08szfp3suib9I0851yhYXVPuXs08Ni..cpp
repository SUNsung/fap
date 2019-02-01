
        
        
    {    if (tmp.handle_data().is_set()) {
      input_handle_shapes_and_types[i].reset(
          new std::vector<std::pair<TensorShapeProto, DataType>>);
      auto& v = *input_handle_shapes_and_types[i];
      for (const auto& x : tmp.handle_data().shape_and_type()) {
        v.emplace_back(x.shape(), x.dtype());
      }
    }
  }
    
    // Calls the registered C++ shape inference function for <node> (a serialized
// NodeDef).
// Should not be called for shape functions that access input tensors; constant
// input tensor values are not made available, and so the inferred shapes will
// be less precise than they could be.
//
// Returns an error, or OK, in <out_status> according to whether the shape
// inference was successful.
//
// On success, returns a vector populated with the inferred output shapes (as
// serialized CppShapeInferenceResult protos) followed by a serialized
// CppShapeInferenceInputsNeeded proto.
//
// This is temporary code to be used during the migration
// from python shape inference functions to C++ shape inference functions.
std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status);
    
    void GenerateLowerCaseOpName(const string& str, string* result);
    
    
    {  if (debug) {
    const OpRegistrationData* op_reg_data;
    Status status = OpRegistry::Global()->LookUp(node->op(), &op_reg_data);
    if (!status.ok()) {
      os << '\tCouldn't find op registration for ' << node->op() << std::endl;
    } else if (!op_reg_data->shape_inference_fn) {
      os << '\tCouldn't find shape function for op ' << node->op() << std::endl;
    } else if (properties.HasInputProperties(node->name())) {
      const std::vector<OpInfo::TensorProperties>& props =
          properties.GetInputProperties(node->name());
      for (int i = 0; i < props.size(); ++i) {
        const OpInfo::TensorProperties& prop = props[i];
        if (prop.has_value()) {
          os << '\t'
             << 'input ' << i << ' (' << DataTypeString(prop.dtype())
             << ') has known value' << std::endl;
        }
      }
    }
  }
}
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/platform/mutex.h'
#include 'tensorflow/python/lib/core/bfloat16.h'
#include 'tensorflow/python/lib/core/ndarray_tensor_bridge.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {} // nw

    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    
#include 'base/basictypes.h'
    
    void MenuDelegate::ExecuteCommand(int command_id, int event_flags) {
  if (command_id < 0)
    return;
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
      gfx::Point* point = reinterpret_cast<gfx::Point*>(userdata);
  *x = point->x();
  *y = point->y();
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
    void MenuItem::SetIcon(const std::string& icon) {
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  is_modified_ = true;
  if (icon.empty()) {
    icon_ = gfx::Image();
    return;
  }
    }
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
    
    {
    {    std::string error_;
    std::unique_ptr<ui::ScopedClipboardWriter> scw_;
  };
}
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
            v_src0_p = vmovl_u8(vget_high_u8(v_src0));
        v_src1_p = vmovl_u8(vget_high_u8(v_src1));
        v_dst0f = vmlaq_f32(vmulq_f32(vcvtq_f32_u32(vmovl_u16(vget_low_u16(v_src1_p))), v_beta),
                            v_alpha, vcvtq_f32_u32(vmovl_u16(vget_low_u16(v_src0_p))));
        v_dst1f = vmlaq_f32(vmulq_f32(vcvtq_f32_u32(vmovl_u16(vget_high_u16(v_src1_p))), v_beta),
                            v_alpha, vcvtq_f32_u32(vmovl_u16(vget_high_u16(v_src0_p))));
        uint16x8_t v_dst1 = vcombine_u16(vmovn_u32(vcvtq_u32_f32(v_dst0f)),
                                         vmovn_u32(vcvtq_u32_f32(v_dst1f)));
    
    #define SPLIT_QUAD(sgn, bits, n) { \
                                     internal::prefetch(src + sj); \
                                     vec128 v_src = vld##n##q_##sgn##bits(src + sj); \
                                     FILL_LINES##n(VST1Q, sgn##bits) \
                                 }
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin = 0, size_t endMargin = 0);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, s32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vcvt.s32.f32 q12, q10                                  \n\t'
            'vst1.32 {d22-d23}, [%[dst1]]                           \n\t'
            'vst1.32 {d24-d25}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25'
        );
    }
})
#else
CVTS_FUNC(s16, s32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vst1q_s32(_dst + i + 0, vline1_s32);
        vst1q_s32(_dst + i + 4, vline2_s32);
    }
})
#endif
    
        uint32x4_t v_maxval4 = vdupq_n_u32(maxVal),
               v_minval4 = vdupq_n_u32(minVal);
    u64 mask = 0ul;
    
                vec128 v_src = vld3q(src + js), v_dst;
            v_src.val[0] = vrev64q(v_src.val[0]);
            v_src.val[1] = vrev64q(v_src.val[1]);
            v_src.val[2] = vrev64q(v_src.val[2]);
    
    inline float32x2_t vrsqrt_f32(float32x2_t val)
{
    float32x2_t e = vrsqrte_f32(val);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    return e;
}
    
            int16x8_t tnext4Old = vmovq_n_s16(0x0);
        int16x8_t tnext5Old = vmovq_n_s16(0x0);
        int16x8_t tnext1OldOld = vmovq_n_s16(0x0);
        int16x8_t tnext2OldOld = vmovq_n_s16(0x0);
        int16x8_t tnext3OldOld = vmovq_n_s16(0x0);
        int16x8_t tnext4OldOld = vmovq_n_s16(0x0);
        int16x8_t tnext5OldOld = vmovq_n_s16(0x0);
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
      // Fired after each iteration of tests finishes.
  virtual void OnTestIterationEnd(const UnitTest& unit_test,
                                  int iteration) = 0;
    
    // Binary predicate assertion macros.
#define EXPECT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_FATAL_FAILURE_)
    
    // This macro is used for implementing macros such as
// EXPECT_DEATH_IF_SUPPORTED and ASSERT_DEATH_IF_SUPPORTED on systems where
// death tests are not supported. Those macros must compile on such systems
// iff EXPECT_DEATH and ASSERT_DEATH compile with the same parameters on
// systems that support death tests. This allows one to write such a macro
// on a system that does not support death tests and be sure that it will
// compile on a death-test supporting system.
//
// Parameters:
//   statement -  A statement that a macro such as EXPECT_DEATH would test
//                for program termination. This macro has to make sure this
//                statement is compiled but not executed, to ensure that
//                EXPECT_DEATH_IF_SUPPORTED compiles with a certain
//                parameter iff EXPECT_DEATH compiles with it.
//   regex     -  A regex that a macro such as EXPECT_DEATH would use to test
//                the output of statement.  This parameter has to be
//                compiled but not evaluated by this macro, to ensure that
//                this macro only accepts expressions that a macro such as
//                EXPECT_DEATH would accept.
//   terminator - Must be an empty statement for EXPECT_DEATH_IF_SUPPORTED
//                and a return statement for ASSERT_DEATH_IF_SUPPORTED.
//                This ensures that ASSERT_DEATH_IF_SUPPORTED will not
//                compile inside functions where ASSERT_DEATH doesn't
//                compile.
//
//  The branch that has an always false condition is used to ensure that
//  statement and regex are compiled (and thus syntactically correct) but
//  never executed. The unreachable code macro protects the terminator
//  statement from generating an 'unreachable code' warning in case
//  statement unconditionally returns or throws. The Message constructor at
//  the end allows the syntax of streaming additional messages into the
//  macro, for compilational compatibility with EXPECT_DEATH/ASSERT_DEATH.
# define GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, terminator) \
    GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
    if (::testing::internal::AlwaysTrue()) { \
      GTEST_LOG_(WARNING) \
          << 'Death tests are not supported on this platform.\n' \
          << 'Statement '' #statement '' cannot be verified.'; \
    } else if (::testing::internal::AlwaysFalse()) { \
      ::testing::internal::RE::PartialMatch('.*', (regex)); \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
      terminator; \
    } else \
      ::testing::Message()
    
    #include <utility>  // For ::std::pair.
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      // Removes the head of the queue and returns it.  Returns NULL if
  // the queue is empty.
  E* Dequeue() {
    if (size_ == 0) {
      return NULL;
    }
    }
    
            // Performs additional preprocessing before calling the update method 
        // (gradient clipping and L2 regularization depending on the additional learning parameters).
        template <typename ElementType>
        void PreProcess(const NDArrayViewPtr& parameterValue, const NDArrayViewPtr& gradientValue, size_t actualMBSize) const;
    
    namespace CNTK
{
    class CompositeMinibatchSource final : public MinibatchSource
    {
        static const std::wstring PositionAttributeName;
        static const std::wstring DistributedAfterSampleCountAttributeName;
    }
    }
    
                    auto numColsPerSample = fullyDefinedSampleShape.SubShape(ShapeRowColSplitPoint(fullyDefinedSampleShape, isDataSparse, /*noDynamicAxes =*/ false)).TotalSize();
                std::vector<SparseIndexType> colStarts;
                std::vector<SparseIndexType> rowIndices;
                std::vector<char> nonZeroValues;
                for (size_t i = 0; i < numSequences; ++i)
                {
                    switch (dataType)
                    {
                    case DataType::Float:
                        AppendSparseSequenceData<float>(sequences[i], colStarts, rowIndices, nonZeroValues, maxSequenceLength * numColsPerSample);
                        break;
                    case DataType::Double:
                        AppendSparseSequenceData<double>(sequences[i], colStarts, rowIndices, nonZeroValues, maxSequenceLength * numColsPerSample);
                        break;
                    default:
                        NOT_IMPLEMENTED;
                    }
                }
    
    namespace CNTK
{
    class PackedValue final : public Value
    {
        template <typename T, typename ...CtorArgTypes>
        friend inline std::shared_ptr<T> MakeSharedObject(CtorArgTypes&& ...ctorArgs);
    }
    }
    
    bool DataReader::GetProposalObs(StreamMinibatchInputs* matrices, const size_t tidx, vector<size_t>& history)
{
    bool bRet = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        bRet &= m_dataReaders[m_ioNames[i]]->GetProposalObs(matrices, tidx, history);
    return bRet;
}
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
        virtual void /*ComputationNode::*/ BackpropTo(const size_t /*inputIndex*/, const FrameRange& fr) override
    {
        auto sliceInputGrad  = InputRef(0).GradientFor(fr);
        auto sliceOutputGrad =           GradientFor(fr);
    }
    
        // compute posterior probability of label y at position t
    virtual void /*ComputationNodeNonLooping::*/ ForwardPropNonLooping() override
    {
        DecideStartEndingOutputLab(InputRef(0).Value(), mStartLab, mEndLab);
        ForwardPropS(mAlpha, mBacktrace, Value(), InputRef(1).Value(),
                     InputRef(2).Value(), mStartLab, mEndLab);
    }
    
    
    {  static constexpr Err bad() {
    return Type::Bad;
  }
  static constexpr Err badder() {
    return Type::Badder;
  }
  static constexpr Err baddest() {
    return Type::Baddest;
  }
};
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    #include <glog/logging.h>
    
      /**
   * Returns a random uint32_t in [min, max) given a specific RNG.
   * If min == max, returns 0.
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static uint32_t rand32(uint32_t min, uint32_t max, RNG&& rng) {
    if (min == max) {
      return 0;
    }
    return std::uniform_int_distribution<uint32_t>(min, max - 1)(rng);
  }
    
      bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto newptr = get_newptr(n);
    PackedPtr oldptr, expectedptr;
    }