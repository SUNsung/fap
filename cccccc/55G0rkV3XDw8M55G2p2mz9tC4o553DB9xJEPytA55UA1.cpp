
        
          if (!wasInline) delete[] oldBegin;
    
    #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
    /// Classify a potential CF typedef.
CFPointeeInfo
CFPointeeInfo::classifyTypedef(const clang::TypedefNameDecl *typedefDecl) {
  clang::QualType type = typedefDecl->getUnderlyingType();
    }
    
      // FIXME: Map over source ranges in the diagnostic.
  auto emitDiag = [&ctx, this](clang::FullSourceLoc clangNoteLoc,
                      clang::DiagnosticsEngine::Level clangDiagLevel,
                      StringRef message) {
    decltype(diag::error_from_clang) diagKind;
    switch (clangDiagLevel) {
    case clang::DiagnosticsEngine::Ignored:
      return;
    case clang::DiagnosticsEngine::Note:
      diagKind = diag::note_from_clang;
      break;
    case clang::DiagnosticsEngine::Remark:
      // FIXME: We don't handle remarks yet.
      return;
    case clang::DiagnosticsEngine::Warning:
      diagKind = diag::warning_from_clang;
      break;
    case clang::DiagnosticsEngine::Error:
    case clang::DiagnosticsEngine::Fatal:
      // FIXME: What happens after a fatal error in the importer?
      diagKind = diag::error_from_clang;
      break;
    }
    }
    
    // Objective-C types.
MAP_TYPE('BOOL', ObjCBool, 8, 'ObjectiveC', 'ObjCBool', false, DoNothing)
MAP_TYPE('SEL',  ObjCSel, 0, 'ObjectiveC', 'Selector', false, DoNothing)
MAP_STDLIB_TYPE('Class', ObjCClass, 0, 'AnyClass', false, DoNothing)
MAP_STDLIB_TYPE(
  Impl.SwiftContext.getSwiftName(KnownFoundationEntity::NSInteger),
  SignedWord, 0, 'Int', false, DefineOnly)
    
           allowSubmatrix || allowInplace || iterations != 1 ||
       !CAROTENE_NS::isSupportedConfiguration())
        return CV_HAL_ERROR_NOT_IMPLEMENTED;
    
    
    {        inline size_t total() const
        {
            return width * height;
        }
    };
    
            vst1q_s16(dsty + j, dy);
        vst1q_s16(dstx + j, dx);
        vst1q_s32(mag + j + 4, normh);
        vst1q_s32(mag + j, norml);
    }
    if (j != width)
    {
        j = width - 8;
        goto ColFilter3x3CannyL1Loop;
    }
}
template <>
inline void ColFilter3x3Canny<true>(const s16* src0, const s16* src1, const s16* src2, s16* dstx, s16* dsty, s32* mag, ptrdiff_t width)
{
    ptrdiff_t j = 0;
    for (; j <= width - 8; j += 8)
    {
        ColFilter3x3CannyL2Loop:
        int16x8_t line0x = vld1q_s16(src0 + j);
        int16x8_t line1x = vld1q_s16(src1 + j);
        int16x8_t line2x = vld1q_s16(src2 + j);
        int16x8_t line0y = vld1q_s16(src0 + j + width);
        int16x8_t line2y = vld1q_s16(src2 + j + width);
    
                uint8x16x4_t v_src = vld4q_u8(src + sj);
            vst1q_u8(dst + dj, v_src.val[coi]);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s32, s8, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vcvt.f32.s32 q4, q2                                     \n\t'
            'vcvt.f32.s32 q5, q3                                     \n\t'
            'vmul.f32 q6, q4, q0                                     \n\t'
            'vmul.f32 q7, q5, q0                                     \n\t'
            'vadd.f32 q8, q6, q1                                     \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vcvt.s32.f32 q10, q8                                    \n\t'
            'vcvt.s32.f32 q11, q9                                    \n\t'
            'vqmovn.s32 d24, q10                                     \n\t'
            'vqmovn.s32 d25, q11                                     \n\t'
            'vqmovn.s16  d26, q12                                    \n\t'
            'vst1.8 {d26}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26'
        );
    }
})
#else
CVTS_FUNC(s32, s8, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int32x4_t vline1_s32 = vld1q_s32(_src + i + 0);
        int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        int8x8_t vRes = vqmovn_s16(vcombine_s16(vRes1, vRes2));
        vst1_s8(_dst + i, vRes);
    }
})
#endif
    
            for ( ; x < width; ++x)
        {
            // make extrapolation for the last elements
            if (x + 1 >= width)
            {
                if (border == BORDER_MODE_CONSTANT)
                {
                    nextx[0] = borderValue;
                    nextx[1] = borderValue;
                    nextx[2] = borderValue;
                }
                else if (border == BORDER_MODE_REPLICATE)
                {
                    nextx[0] = srow0[x];
                    nextx[1] = srow1[x];
                    nextx[2] = srow2[x];
                }
            }
            else
            {
                nextx[0] = srow0 ? srow0[x + 1] : borderValue;
                nextx[1] =         srow1[x + 1]              ;
                nextx[2] = srow2 ? srow2[x + 1] : borderValue;
            }
    }
    
    s32 countNonZero(const Size2D &_size,
                 const s32 * srcBase, ptrdiff_t srcStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    size_t roiw4 = size.width & ~3u;
    s32 result = 0;
    for(size_t k = 0; k < size.height; ++k)
    {
        const u32* src = (const u32*)internal::getRowPtr( srcBase,  srcStride, k);
        u32 i = 0;
    }
    }
    
            uint32x4_t el4h = vaddq_u32(el8shr01l, el8shr01h);
    
    // calculate reciprocal value
    
    // ValuesIn() function allows generation of tests with parameters coming from
// a container.
//
// Synopsis:
// ValuesIn(const T (&array)[N])
//   - returns a generator producing sequences with elements from
//     a C-style array.
// ValuesIn(const Container& container)
//   - returns a generator producing sequences with elements from
//     an STL-style container.
// ValuesIn(Iterator begin, Iterator end)
//   - returns a generator producing sequences with elements from
//     a range [begin, end) defined by a pair of STL-style iterators. These
//     iterators can also be plain C pointers.
//
// Please note that ValuesIn copies the values from the containers
// passed in and keeps them to generate tests in RUN_ALL_TESTS().
//
// Examples:
//
// This instantiates tests from test case StringTest
// each with C-string values of 'foo', 'bar', and 'baz':
//
// const char* strings[] = {'foo', 'bar', 'baz'};
// INSTANTIATE_TEST_CASE_P(StringSequence, SrtingTest, ValuesIn(strings));
//
// This instantiates tests from test case StlStringTest
// each with STL strings with values 'a' and 'b':
//
// ::std::vector< ::std::string> GetParameterStrings() {
//   ::std::vector< ::std::string> v;
//   v.push_back('a');
//   v.push_back('b');
//   return v;
// }
//
// INSTANTIATE_TEST_CASE_P(CharSequence,
//                         StlStringTest,
//                         ValuesIn(GetParameterStrings()));
//
//
// This will also instantiate tests from CharTest
// each with parameter values 'a' and 'b':
//
// ::std::list<char> GetParameterChars() {
//   ::std::list<char> list;
//   list.push_back('a');
//   list.push_back('b');
//   return list;
// }
// ::std::list<char> l = GetParameterChars();
// INSTANTIATE_TEST_CASE_P(CharSequence2,
//                         CharTest,
//                         ValuesIn(l.begin(), l.end()));
//
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end) {
  typedef typename ::testing::internal::IteratorTraits<ForwardIterator>
      ::value_type ParamType;
  return internal::ParamGenerator<ParamType>(
      new internal::ValuesInIteratorRangeGenerator<ParamType>(begin, end));
}
    
    // A unique type used as the default value for the arguments of class
// template Types.  This allows us to simulate variadic templates
// (e.g. Types<int>, Type<int, double>, and etc), which C++ doesn't
// support directly.
struct None {};
    
    
    {    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << 'Leaked ' << difference << ' unit(s) of Water!';
  }
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    #include 'sample2.h'
    
            for (auto i = 0; i < parameters.size(); i++)
        {
            const auto& parameter = parameters.at(i);
            const auto& uid = parameter.Uid();
            const NDArrayView& checkpointedValue = getSmoothedGradValue(i, parameter).Value<NDArrayView>();
    }
    
    namespace CNTK
{
    class ProgressWriter::Impl
    {
    public:
        Impl(size_t updateWriteFrequency, size_t firstUpdatesToWrite)
            : m_frequency(updateWriteFrequency), m_firstN(firstUpdatesToWrite),
            m_totalUpdates(0), m_totalSummaries(0)
        {
            Reset();
        }
    }
    }
    
                m_trainingSampleCountVar = findTrainingSampleCountVarRetVal.first;
            if (GetTraceLevel() >= TraceLevel::Info)
                fprintf(stderr, 'Info: Trainer loss Function '%S' output does not have a batch axis; the first Variable '%S' with a batch axis found in the graph underlying the scalar '
                                'loss Function will be used to determine minibatch training sample count.\n', m_lossFunction->AsString().c_str(), m_trainingSampleCountVar.AsString().c_str());
    
    public:
    // this constructor is always run (all other constructors call this one)
    LearnableParameter(DEVICEID_TYPE deviceId, const wstring& name) :
        Base(deviceId, name)
    {
        SetLearningRateMultiplier(1.0f); // enable normal learning by default
        MarkValueNonSharable();
        m_initString = L'fromValue'; // default init is with 0; typically overwritten
        m_initValue = 0;
        m_regMultiplier = 1.0f; // enable reg in update by default
    }
    LearnableParameter(DEVICEID_TYPE deviceId, const wstring& name, const TensorShape& shape) :
        LearnableParameter(deviceId, name)
    {
        InitShape(shape);
        LazyInitParameters();
    }
    LearnableParameter(DEVICEID_TYPE deviceId, const wstring& name, size_t rows, size_t cols) :
        LearnableParameter(deviceId, name, TensorShape(rows, cols))
    {
    }
    LearnableParameter(const ScriptableObjects::IConfigRecordPtr configp);
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        // Create and grow vertex/index buffers if needed
    if (!g_pVB || g_VertexBufferSize < draw_data->TotalVtxCount)
    {
        if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
        g_VertexBufferSize = draw_data->TotalVtxCount + 5000;
        D3D12_HEAP_PROPERTIES props;
        memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
        props.Type = D3D12_HEAP_TYPE_UPLOAD;
        props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
        props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
        D3D12_RESOURCE_DESC desc;
        memset(&desc, 0, sizeof(D3D12_RESOURCE_DESC));
        desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        desc.Width = g_VertexBufferSize * sizeof(ImDrawVert);
        desc.Height = 1;
        desc.DepthOrArraySize = 1;
        desc.MipLevels = 1;
        desc.Format = DXGI_FORMAT_UNKNOWN;
        desc.SampleDesc.Count = 1;
        desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        desc.Flags = D3D12_RESOURCE_FLAG_NONE;
        if (g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&g_pVB)) < 0)
            return;
        frameResources->VB = g_pVB;
        frameResources->VertexBufferSize = g_VertexBufferSize;
    }
    if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D12_HEAP_PROPERTIES props;
        memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
        props.Type = D3D12_HEAP_TYPE_UPLOAD;
        props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
        props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
        D3D12_RESOURCE_DESC desc;
        memset(&desc, 0, sizeof(D3D12_RESOURCE_DESC));
        desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        desc.Width = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.Height = 1;
        desc.DepthOrArraySize = 1;
        desc.MipLevels = 1;
        desc.Format = DXGI_FORMAT_UNKNOWN;
        desc.SampleDesc.Count = 1;
        desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        desc.Flags = D3D12_RESOURCE_FLAG_NONE;
        if (g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&g_pIB)) < 0)
            return;
        frameResources->IB = g_pIB;
        frameResources->IndexBufferSize = g_IndexBufferSize;
    }
    
    int32 ImGui_Marmalade_KeyCallback(void* system_data, void* user_data)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardEvent* e = (s3eKeyboardEvent*)system_data;
    if (e->m_Pressed == 1)
        io.KeysDown[e->m_Key] = true;
    if (e->m_Pressed == 0)
        io.KeysDown[e->m_Key] = false;
    }
    
        // Read keyboard modifiers inputs
    io.KeyCtrl = (::GetKeyState(VK_CONTROL) & 0x8000) != 0;
    io.KeyShift = (::GetKeyState(VK_SHIFT) & 0x8000) != 0;
    io.KeyAlt = (::GetKeyState(VK_MENU) & 0x8000) != 0;
    io.KeySuper = false;
    // io.KeysDown[], io.MousePos, io.MouseDown[], io.MouseWheel: filled by the WndProc handler below.
    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    bool ImGui::InputDouble(const char* label, double* v, double step, double step_fast, const char* format, ImGuiInputTextFlags extra_flags)
{
    extra_flags |= ImGuiInputTextFlags_CharsScientific;
    return InputScalar(label, ImGuiDataType_Double, (void*)v, (void*)(step>0.0 ? &step : NULL), (void*)(step_fast>0.0 ? &step_fast : NULL), format, extra_flags);
}
    
    int main(int argc, char** argv)
{ 
    // Create GLUT window
    glutInit(&argc, argv);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_MULTISAMPLE);
    glutInitWindowSize(1280, 720);
    glutCreateWindow('Dear ImGui FreeGLUT+OpenGL2 Example');
    }
    
    #include 'modules/drivers/canbus/can_client/esd/esd_can_client.h'
    
    #include <string>
#include <vector>
#include 'esd_can/include/ntcan.h'
#include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    #include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
    
      /**
   * @brief get mutable protocol data by message id
   * @param message_id the id of the message
   * @return a pointer to the protocol data
   */
  ProtocolData<SensorType> *GetMutableProtocolDataById(
      const uint32_t message_id);
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
      /**
   * @brief Reset the lower 4 bits as the lower 4 bits of a specified one-byte
   *        unsigned integer.
   * @param value The one-byte unsigned integer whose lower 4 bits are used to
   *        set this Byte's lower 4 bits.
   */
  void set_value_low_4_bits(const uint8_t value);
    
    /**
 * @file
 */
    
    #include 'modules/common/adapters/adapter_manager.h'
#include 'modules/common/adapters/proto/adapter_config.pb.h'
#include 'modules/common/apollo_app.h'
#include 'modules/common/macro.h'
#include 'modules/common/monitor_log/monitor_log_buffer.h'
#include 'modules/common/time/time.h'
#include 'modules/common/util/util.h'
#include 'modules/control/proto/control_cmd.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/can_client/can_client_factory.h'
#include 'modules/drivers/canbus/can_comm/can_receiver.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
#include 'modules/drivers/canbus/sensor_gflags.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
#include 'modules/drivers/canbus/proto/sensor_canbus_conf.pb.h'
    
    DECLARE_string(adapter_config_filename);
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    #include <stddef.h>
#include <stdint.h>
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    #include 'guetzli/jpeg_data.h'
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    namespace {
    }
    
    bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg) {
  return ReadJpeg(reinterpret_cast<const uint8_t*>(data.data()),
                  static_cast<const size_t>(data.size()),
                  mode, jpg);
}