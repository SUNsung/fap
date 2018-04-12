
        
        // Like ASSERT_EXIT, but continues on to successive tests in the
// test case, if any:
# define EXPECT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_NONFATAL_FAILURE_)
    
    // Converts a streamable value to an std::string.  A NULL pointer is
// converted to '(null)'.  When the input value is a ::string,
// ::std::string, ::wstring, or ::std::wstring object, each NUL
// character in it is replaced with '\\0'.
template <typename T>
std::string StreamableToString(const T& streamable) {
  return (Message() << streamable).GetString();
}
    
      // Returns the number of TestPartResult objects in the array.
  int size() const;
    
    // The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, class TestSel>
class TypeParameterizedTest<Fixture, TestSel, Types0> {
 public:
  static bool Register(const char* /*prefix*/, const char* /*case_name*/,
                       const char* /*test_names*/, int /*index*/) {
    return true;
  }
};
    
    # if GTEST_HAS_COMBINE
// INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Generates values from the Cartesian product of values produced
// by the argument generators.
//
$range i 2..maxtuple
$for i [[
$range j 1..i
$range k 2..i
    
      iterator begin() const { return iterator(impl_->Begin()); }
  iterator end() const { return iterator(impl_->End()); }
    
    typedef GTestMutexLock MutexLock;
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44>
struct Templates44 {
  typedef TemplateSel<T1> Head;
  typedef Templates43<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44> Tail;
};
    
     private:
  void CalculatePrimesUpTo(int max) {
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;
    }
    
    
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
    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    // Returns true if there were enough points at the last call to Fit or
// ConstrainedFit for the fitted points to be used on a badly fitted line.
bool DetLineFit::SufficientPointsForIndependentFit() const {
  return distances_.size() >= kMinPointsForErrorCount;
}
    
    
/**********************************************************************
 * LLSQ::remove
 *
 * Delete an element from the acculuator.
 **********************************************************************/
    
    class DENORM {
 public:
  DENORM();
    }
    
      // Decrement the count for t.
  // Return whether we knew about the given pointer.
  bool Free(T *t) {
    if (t == NULL) return false;
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (cache_[i].object == t) {
        --cache_[i].count;
        mu_.Unlock();
        return true;
      }
    }
    mu_.Unlock();
    return false;
  }
    
    #endif  // TESSERACT_CCUTIL_QRSEQUENCE_H_

    
    FLOAT32 NormalizedAngleFrom(FPOINT *Point1, FPOINT *Point2, FLOAT32 FullScale);
#endif

    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    Vlabel Vunit::makeBlock(AreaIndex area, uint64_t weight) {
  auto i = blocks.size();
  blocks.emplace_back(area, weight);
  return Vlabel{i};
}
    
      /*
   * Allocate a block of data to hold n objects of type T.
   *
   * Any instructions with VdataPtr members that point inside the buffer
   * returned by allocData() will automatically be fixed up during a relocation
   * pass immediately before final code emission.
   */
  template<typename T>
  T* allocData(size_t n = 1) {
    auto const size = sizeof(T) * n;
    dataBlocks.emplace_back();
    }
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
      bool contains(ConstCodeAddress start, ConstCodeAddress end) const {
    return start <= end &&
           start >= m_base && end <= (m_base + m_size);
  }
    
      Instr imm = Assembler::ImmPCRelAddress(target - this);
    
    #include <memory>
    
    /* Opaque object representing a Bidirectional stream creating engine. Created
 * and configured outside of this API to facilitate sharing with other
 * components */
typedef struct stream_engine {
  void* obj;
  void* annotation;
} stream_engine;
    
    namespace grpc {
namespace testing {
    }
    }
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
    }
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
    namespace grpc {
    }
    
    #include 'Basics.h'
#include 'DataReader.h'
#include 'ComputationNetwork.h'
#include 'MPIWrapper.h'
#include 'SpecialPurposeNodes.h'        // for SequenceWithSoftmaxNode
#include <string>
#include <map>
#include <set>
    
            // Map from attribute name to attribute.
        // This allows attribute adding and removing.
        NodeAttributes m_attributes;
    
            // Get attributes.
        const std::vector<Attribute>& GetAttributes() const;
    
            std::string Status::ToString() const
        {
            if (m_state == nullptr)
            {
                return std::string('OK');
            }
    }
    
                static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/std::string* p_data, int64_t p_expected_size);
            static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/bool* p_data, int64_t p_expected_size);
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(ParametericSoftplus)
        .Description('Softplus takes input data (Tensor<T>) and parametric tensors, '
            'producing one output data (Tensor<T>) where the function, '
            'y = alpha * log(1 + exp(beta * x), is applied to the tensor elementwise.')
        .Input('X', 'Input tensor, typically 1-D.', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Alpha tensor. If `alpha` is of size 1, '
            'the value is shared across different channels.',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0))
        .Attr('beta', 'Beta tensor. If `beta` is of size 1, '
            'the value is shared across different channels.',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0));
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorInputInitialH() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Input('initial_h',
                'Optional initial value of the hidden. If not specified - assumed '
                'to be 0. It has shape `[num_directions, batch_size, hidden_size]`.', 'T', true /*optional*/);
        };
    }
    
        // Report duplicates.
    size_t numberOfDuplicates = 0;
    for (const auto& u : duplicates)
    {
        if (m_verbosity)
        {
            fprintf(stderr, 'ID '%zu':\n', u.first);
            for (const auto& k : u.second)
                fprintf(stderr, 'Key '%s'\n', k.c_str());
        }
    }
    
        void InitHeader(SectionType type, std::string description, SectionData dataType = sectionDataFloat, WORD elementSize = sizeof(float));
    bool ValidateHeader(bool writing = false) const; // ensure header is sane, if not, throw an exception
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
        page->offset.clear();
    page->offset.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      page->offset.push_back(
          page->offset.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    page->data.resize(page->offset.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
    void SparsePage::Writer::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    /*!
 * \brief base class of element-wise evaluation
 * \tparam Derived the name of subclass
 */
template<typename Derived>
struct EvalEWiseBase : public Metric {
  bst_float Eval(const std::vector<bst_float>& preds,
                 const MetaInfo& info,
                 bool distributed) const override {
    CHECK_NE(info.labels.size(), 0U) << 'label set cannot be empty';
    CHECK_EQ(preds.size(), info.labels.size())
        << 'label and prediction size not match, '
        << 'hint: use merror or mlogloss for multi-class classification';
    const omp_ulong ndata = static_cast<omp_ulong>(info.labels.size());
    double sum = 0.0, wsum = 0.0;
    #pragma omp parallel for reduction(+: sum, wsum) schedule(static)
    for (omp_ulong i = 0; i < ndata; ++i) {
      const bst_float wt = info.GetWeight(i);
      sum += static_cast<const Derived*>(this)->EvalRow(info.labels[i], preds[i]) * wt;
      wsum += wt;
    }
    double dat[2]; dat[0] = sum, dat[1] = wsum;
    if (distributed) {
      rabit::Allreduce<rabit::op::Sum>(dat, 2);
    }
    return Derived::GetFinal(dat[0], dat[1]);
  }
  /*!
   * \brief to be implemented by subclass,
   *   get evaluation result from one row
   * \param label label of current instance
   * \param pred prediction value of current instance
   */
  inline bst_float EvalRow(bst_float label, bst_float pred) const;
  /*!
   * \brief to be overridden by subclass, final transformation
   * \param esum the sum statistics returned by EvalRow
   * \param wsum sum of weight
   */
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return esum / wsum;
  }
};
    
    void ImGui_ImplA5_InvalidateDeviceObjects()
{
    if (g_Texture)
    {
        al_destroy_bitmap(g_Texture);
        ImGui::GetIO().Fonts->TexID = NULL;
        g_Texture = NULL;
    }
    if (g_MouseCursorInvisible)
    {
        al_destroy_mouse_cursor(g_MouseCursorInvisible);
        g_MouseCursorInvisible = NULL;
    }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL3_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL3_CreateDeviceObjects();
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    //---- Define constructor and implicit cast operators to convert back<>forth from your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    // Implemented features:
//  [X] User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    void    ImGui_ImplSdlGL2_InvalidateDeviceObjects()
{
    if (g_FontTexture)
    {
        glDeleteTextures(1, &g_FontTexture);
        ImGui::GetIO().Fonts->TexID = 0;
        g_FontTexture = 0;
    }
}
    
            if (ImGui::TreeNode('Filtered Text Input'))
        {
            static char buf1[64] = ''; ImGui::InputText('default', buf1, 64);
            static char buf2[64] = ''; ImGui::InputText('decimal', buf2, 64, ImGuiInputTextFlags_CharsDecimal);
            static char buf3[64] = ''; ImGui::InputText('hexadecimal', buf3, 64, ImGuiInputTextFlags_CharsHexadecimal | ImGuiInputTextFlags_CharsUppercase);
            static char buf4[64] = ''; ImGui::InputText('uppercase', buf4, 64, ImGuiInputTextFlags_CharsUppercase);
            static char buf5[64] = ''; ImGui::InputText('no blank', buf5, 64, ImGuiInputTextFlags_CharsNoBlank);
            struct TextFilters { static int FilterImGuiLetters(ImGuiTextEditCallbackData* data) { if (data->EventChar < 256 && strchr('imgui', (char)data->EventChar)) return 0; return 1; } };
            static char buf6[64] = ''; ImGui::InputText('\'imgui\' letters', buf6, 64, ImGuiInputTextFlags_CallbackCharFilter, TextFilters::FilterImGuiLetters);
    }
    
        void        (*SetObjectField)(JNIEnv*, jobject, jfieldID, jobject);
    void        (*SetBooleanField)(JNIEnv*, jobject, jfieldID, jboolean);
    void        (*SetByteField)(JNIEnv*, jobject, jfieldID, jbyte);
    void        (*SetCharField)(JNIEnv*, jobject, jfieldID, jchar);
    void        (*SetShortField)(JNIEnv*, jobject, jfieldID, jshort);
    void        (*SetIntField)(JNIEnv*, jobject, jfieldID, jint);
    void        (*SetLongField)(JNIEnv*, jobject, jfieldID, jlong);
    void        (*SetFloatField)(JNIEnv*, jobject, jfieldID, jfloat);
    void        (*SetDoubleField)(JNIEnv*, jobject, jfieldID, jdouble);
    
    namespace {
    }
    
    TEST_F(YogaTest_HadOverflowTests, children_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 15);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    #include <yoga/Yoga.h>
    
     private:
    
    #pragma once
    
    NBIND_CLASS(Size)
{
    construct<>();
    construct<double, double>();
}
    
    #else
# define ALOGV(...) ((void)0)
# define ALOGD(...) ((void)0)
# define ALOGI(...) ((void)0)
# define ALOGW(...) ((void)0)
# define ALOGE(...) ((void)0)
# define ALOGF(...) ((void)0)
#endif

    
    #include <fb/visibility.h>
    
    #endif  // NET_GRPC_COMPILER_JAVA_GENERATOR_H_

    
      virtual grpc::string name() const = 0;
    
    
    {  printf('The FlatBuffer has been parsed from JSON successfully.\n');
}

    
    FileExistsFunction SetFileExistsFunction(
    FileExistsFunction file_exists_function) {
  FileExistsFunction previous_function = g_file_exists_function;
  g_file_exists_function =
      file_exists_function ? file_exists_function : FileExistsRaw;
  return previous_function;
}
    
      T *GetMutableRoot() { return flatbuffers::GetMutableRoot<T>(mutable_data()); }