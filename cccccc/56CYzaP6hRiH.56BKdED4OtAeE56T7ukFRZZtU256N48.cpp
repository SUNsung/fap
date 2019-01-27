
    {  // Moving to a message on the arena should lead to a copy.
  *message2_on_arena = std::move(message1);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(message1);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, value);
  printer->Print(
    ' * <code>$def$</code>\n'
    ' */\n',
    'def', EscapeJavadoc(FirstLineOf(value->DebugString())));
}
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
      string error_msg;
  CodeGeneratorResponse response;
    
        NDMask::NDMask(const NDShape& shape, Matrix<char>* matrix)
        : m_device(AsDeviceDescriptor(matrix->GetDeviceId())), m_maskShape(shape)
    {
        m_matrixView = std::shared_ptr<Matrix<char>>(matrix, [](Matrix<char>* ptr) { delete ptr; });
    }
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
    static inline size_t rand(const size_t begin, const size_t end)
{
    const size_t randno = ::rand() * RAND_MAX + ::rand(); // BUGBUG: still only covers 32-bit range
    return begin + randno % (end - begin);
}
    
        ImGuiIO &io = ImGui::GetIO();
    
    
    {    return frameCtxt;
}
    
    #include 'imgui.h'
#include 'imgui_impl_dx11.h'
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            glBindBuffer(GL_ARRAY_BUFFER, g_VboHandle);
        glBufferData(GL_ARRAY_BUFFER, (GLsizeiptr)cmd_list->VtxBuffer.Size * sizeof(ImDrawVert), (const GLvoid*)cmd_list->VtxBuffer.Data, GL_STREAM_DRAW);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
    /** @class Speed
 * @brief Changes the speed of an action, making it take longer (speed>1)
 * or shorter (speed<1) time.
 * Useful to simulate 'slow motion' or 'fast forward' effect.
 * @warning This action can't be Sequenceable because it is not an IntervalAction.
 */
class CC_DLL Speed : public Action
{
public:
    /** Create the action and set the speed.
     *
     * @param action An action.
     * @param speed The action speed.
     */
    static Speed* create(ActionInterval* action, float speed);
    /** Return the speed.
     *
     * @return The action speed.
     */
    float getSpeed() const { return _speed; }
    /** Alter the speed of the inner function in runtime. 
     *
     * @param speed Alter the speed of the inner function in runtime.
     */
    void setSpeed(float speed) { _speed = speed; }
    }
    
    class Node;
    
        if (action && action->initWithDuration(duration, gridSize, waves, amplitude))
    {
        action->autorelease();
        return action;
    }
    
        //
    // Overrides
    //
    virtual ScaleTo* clone() const override;
    virtual ScaleTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ScaleTo() {}
    virtual ~ScaleTo() {}
    
    // remove
    
    /** @class ActionManager
 @brief ActionManager is a singleton that manages all the actions.
 Normally you won't need to use this singleton directly. 99% of the cases you will use the Node interface,
 which uses this singleton.
 But there are some cases where you might need to use this singleton.
 Examples:
    - When you want to run an action where the target is different from a Node. 
    - When you want to pause / resume the actions.
 
 @since v0.8
 */
class CC_DLL ActionManager : public Ref
{
public:
    /**
     * @js ctor
     */
    ActionManager();
    }
    
    protected:
    void calculateMaxItems();
    void updateBlendFunc();
    void updateOpacityModifyRGB();
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
      sender.AddMessage(1, &mpd);
  EXPECT_EQ(sender.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(sender.IsRunning());
  EXPECT_TRUE(sender.enable_log());
    
      Byte t1(bytes + 3);
  uint32_t t = t0.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    using apollo::drivers::canbus::Byte;
    
    double ObjectGeneralInfo60B::lateral_vel(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 5);
  int32_t x = t0.get_byte(0, 6);
    }
    
    int ObjectListStatus60A::num_of_objects(const std::uint8_t* bytes,
                                        int32_t length) const {
  Byte t0(bytes);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  bool ret = (x == 0x1);
  return ret;
}
    
    unsigned int BaseMapMatrix::GetBinarySize() const { return 0; }
    
    
    {  for (auto& lon : lon_trajectories) {
    for (auto& lat : lat_trajectories) {
      trajectory_pair_pqueue_.emplace(lon, lat);
    }
  }
}
    
      MatrixXd offset_golden = MatrixXd::Zero(10, 1);
  offset_golden(0, 0) = -2.0 * 1.0 *
                            (init_derivative + init_second_derivative * 0.1) /
                            std::pow(0.1, 5) -
                        6.0 * 1.0 * init_derivative / std::pow(0.1, 5);
  offset_golden(1, 0) = 2.0 * 1.0 * init_derivative / std::pow(0.1, 5);
    
    #include 'gtest/gtest.h'