
        
        
    {  // Moving to a message on the arena should lead to a copy.
  *message2_on_arena = std::move(message1);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(message1);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    namespace google {
namespace protobuf {
namespace util {
namespace error {
inline string CodeEnumToString(error::Code code) {
  switch (code) {
    case OK:
      return 'OK';
    case CANCELLED:
      return 'CANCELLED';
    case UNKNOWN:
      return 'UNKNOWN';
    case INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case NOT_FOUND:
      return 'NOT_FOUND';
    case ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case ABORTED:
      return 'ABORTED';
    case OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case INTERNAL:
      return 'INTERNAL';
    case UNAVAILABLE:
      return 'UNAVAILABLE';
    case DATA_LOSS:
      return 'DATA_LOSS';
  }
    }
    }
    }
    }
    }
    
    
    {
    {    reflection->MutableUnknownFields(message)->Clear();
  }
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) = 0;
};
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
    REGISTER_CPU_OPERATOR(GatherRangesToDense, GatherRangesToDenseOp<CPUContext>);
NO_GRADIENT(GatherRangesToDense);
    
    OPERATOR_SCHEMA(GivenTensorStringFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(
        FillerTensorInference<TensorProto_DataType_STRING>);
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
#include 'caffe2/utils/math.h'
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'Dear ImGui GLFW+OpenGL2 example', NULL, NULL);
    if (window == NULL)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    }
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX10 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
        //
    // convert 'absolutes' to 'diffs'
    //
    Vec2 p = copyConfig->getControlPointAtIndex(0);
    for (ssize_t i = 1; i < copyConfig->count(); ++i)
    {
        Vec2 current = copyConfig->getControlPointAtIndex(i);
        Vec2 diff = current - p;
        copyConfig->replaceControlPoint(diff, i);
    }
    
    // DeccelAmplitude
    
    
Ripple3D* Ripple3D::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Ripple3D();
    a->initWithDuration(_duration, _gridSize, _position, _radius, _waves, _amplitude);
    a->autorelease();
    return a;
}
    
        /** 
    @brief Initializes an action with duration and grid size.
    @param gridSize Specify the grid size of the FlipX3D action.
    @param duration Specify the duration of the FlipX3D action. It's a value in seconds.
    @return If the initialization success, return true; otherwise, return false.
    */
    virtual bool initWithSize(const Size& gridSize, float duration);
    
        /** Removes all actions matching at least one bit in flags and the target.
     *
     * @param flags     The flag field to match the actions' flags based on bitwise AND.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeActionsByFlags(unsigned int flags, Node *target);
    
     @code
     // scaleA and scaleB are equivalents
     auto scaleA = ScaleTo::create(2, 3);                 // (duration, to)
     auto scaleB = ActionTween::create(2, 'scale', 1, 3); // (duration, key, from, to)
 @endcode