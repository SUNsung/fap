class PyDescriptorDatabase : public DescriptorDatabase {
 public:
  explicit PyDescriptorDatabase(PyObject* py_database);
  ~PyDescriptorDatabase();
    }
    
    TEST(AnyTest, TestPackAndUnpack) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(submessage);
    }
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EnumGenerator);
};
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    void RepeatedMessageFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.Add(other.$name$_);\n');
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
        // helper function to initialize and check BlockMomentumSGD related parameters
    void InitializeAndCheckBlockMomentumSGDParameters();
    // only true when the user specify LearningRatePerMB and the number of parallel utterances in Reader > 1
    // bool m_needToNormalizeLRByParallUtterance;          // TODO: should go away
    // bool m_needToNormalizeMomentumByParallUtterance;
    
                shared_ptr<ComputationNode<ElemType>> runMeanNode = static_pointer_cast<ComputationNode<ElemType>>(runMeanParameterPtr);
            shared_ptr<ComputationNode<ElemType>> runStdNode  = static_pointer_cast<ComputationNode<ElemType>>(runStdParameterPtr);
    
    template class NDLUtil<float>;
template class NDLUtil<double>;
    
    template <typename ElemType>
class MELScript : public ConfigParser
{
private:
    typedef shared_ptr<ComputationNode<ElemType>> ComputationNodePtr;
    typedef std::map<std::string, NetNdl<ElemType>, nocase_compare> MapNameToNetNdl;
    }
    
    class float4
{
    __m128 v; // value
private:
    // return the low 'float'
    float f0() const
    {
        float f;
        _mm_store_ss(&f, v);
        return f;
    }
    // construct from a __m128, assuming it is a f32 vector (needed for directly returning __m128 below)
    float4(const __m128& v)
        : v(v)
    {
    }
    // return as a __m128 --should this be a reference?
    operator __m128() const
    {
        return v;
    }
    // assign a __m128 (needed for using nested float4 objects inside this class, e.g. sum())
    float4& operator=(const __m128& other)
    {
        v = other;
        return *this;
    }
    }
    
    namespace {
    }
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
      int width() const { return width_; }
  int height() const { return height_; }
  int factor_x() const { return factor_x_; }
  int factor_y() const { return factor_y_; }
  int width_in_blocks() const { return width_in_blocks_; }
  int height_in_blocks() const { return height_in_blocks_; }
  const coeff_t* coeffs() const { return &coeffs_[0]; }
  const int* quant() const { return &quant_[0]; }
  bool IsAllZero() const;
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
      /// Hold on to the returned shared_ptr until the end of the test
  static std::shared_ptr<StrictMock<MockClock>> setup() {
    auto rv = std::make_shared<StrictMock<MockClock>>();
    s_mockClockInstance = rv;
    return rv;
  }
    
    #pragma once
    
      explicit ScopeGuardImpl(const FunctionType& fn) noexcept(
      std::is_nothrow_copy_constructible<FunctionType>::value)
      : ScopeGuardImpl(
            fn,
            makeFailsafe(std::is_nothrow_copy_constructible<FunctionType>{},
                         &fn)) {}
    
    template <typename Fn>
void DynamicParser::parse(
    const folly::dynamic& k, const folly::dynamic& v, Fn fn) {
  auto guard = stack_.push(k, v);  // User code can nest parser calls.
  wrapError(nullptr, [&]() { detail::invokeForKeyValue(fn, k, v); });
}
    
        std::cout << globalOptions_;
    
    void DebugHUD_InitDefaults( DebugHUD *hud )
{
    hud->show_demo_window = true;
    hud->show_another_window = true;
    hud->rotation_speed = 15.0f;
    
    hud->cubeColor1[0] = 0.4f;
    hud->cubeColor1[1] = 0.4f;
    hud->cubeColor1[2] = 1.0f;
    hud->cubeColor1[3] = 1.0f;
    
    hud->cubeColor2[0] = 1.0f;
    hud->cubeColor2[1] = 0.4f;
    hud->cubeColor2[2] = 0.4f;
    hud->cubeColor2[3] = 1.0f;
    
    hud->clearColor[0] = 0.45f;
    hud->clearColor[1] = 0.55f;
    hud->clearColor[2] = 0.60f;
    hud->clearColor[3] = 1.00f;
}
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the sdl_opengl3_example/ folder**
// See imgui_impl_sdl.cpp for details.
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    // Implemented features:
//  [X] User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.