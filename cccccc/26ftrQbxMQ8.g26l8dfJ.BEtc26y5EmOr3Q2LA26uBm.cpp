
        
        class BaseTest : public ::testing::Test {
  // You can inherit all the usual members for a non-parameterized test
  // fixture here.
};
    
      // Runs TearDownTestCase() for this TestCase.  This wrapper is
  // needed for catching exceptions thrown from TearDownTestCase().
  void RunTearDownTestCase() { (*tear_down_tc_)(); }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_
    
    // This class provides implementation of TeastFactoryBase interface.
// It is used in TEST and TEST_F macros.
template <class TestClass>
class TestFactoryImpl : public TestFactoryBase {
 public:
  virtual Test* CreateTest() { return new TestClass; }
};
    
    // A function to convert T* into linked_ptr<T>
// Doing e.g. make_linked_ptr(new FooBarBaz<type>(arg)) is a shorter notation
// for linked_ptr<FooBarBaz<type> >(new FooBarBaz<type>(arg))
template <typename T>
linked_ptr<T> make_linked_ptr(T* ptr) {
  return linked_ptr<T>(ptr);
}
    
    // This should fail when the --check_for_leaks command line flag is
// specified.
TEST(ListenersTest, LeaksWater) {
  Water* water = new Water;
  EXPECT_TRUE(water != NULL);
}
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    // Tests the copy c'tor.
TEST(MyString, CopyConstructor) {
  const MyString s1(kHelloString);
  const MyString s2 = s1;
  EXPECT_EQ(0, strcmp(s2.c_string(), kHelloString));
}
    
            for (const auto& key : requiredKeys)
        {
            if (!dict.Contains(key))
            {
                 LogicError('Required key '%ls' is not found in the dictionary (%s).',
                            key.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
            }
        }
    
            static bool IsUDF(const Dictionary& dict);
    
        const NDShape& Variable::Shape() const
    {
        return m_dataFields->m_shape; 
    }
    
    #pragma once
    
    bool DataReader::SetNetOutput(
    const std::vector<std::vector<std::pair<wstring, size_t>>>& uttInfo,
    const MatrixBase& outputs,
    const MBLayoutPtr pMBLayout)
{
    bool ans = false;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        ans = (m_dataReaders[m_ioNames[i]]->SetNetOutput(uttInfo, outputs, pMBLayout) || ans);
    return ans;
}
    
    
    {    virtual void /*ComputationNode::*/ BackpropTo(const size_t /*inputIndex*/, const FrameRange&)
    {
        LogicError('%ls is a leaf node. BackpropTo() should never be called.', NodeDescription().c_str());
    }
};
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
          ASSERT_TRUE(input == output);
    
    SEXP XGBoosterUpdateOneIter_R(SEXP handle, SEXP iter, SEXP dtrain) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterUpdateOneIter(R_ExternalPtrAddr(handle),
                                  asInteger(iter),
                                  R_ExternalPtrAddr(dtrain)));
  R_API_END();
  return R_NilValue;
}
    
    #include <xgboost/logging.h>
#include 'src/common/random.h'
#include './xgboost_R.h'
    
    void    ImGui_ImplOpenGL2_NewFrame()
{
    if (!g_FontTexture)
        ImGui_ImplOpenGL2_CreateDeviceObjects();
}
    
    
    {    // Restore modified Allegro state
    al_set_blender(last_blender_op, last_blender_src, last_blender_dst);
    al_set_clipping_rectangle(last_clip_x, last_clip_y, last_clip_w, last_clip_h);
    al_use_transform(&last_transform);
    al_use_projection_transform(&last_projection_transform);
}
    
    void ImGui_ImplFreeGLUT_ReshapeFunc(int w, int h)
{
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize = ImVec2((float)w, (float)h);
}
    
    bool ImGui::InputTextMultiline(const char* label, std::string* str, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    // Implemented features:
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Clipboard support.
//  [X] Platform: Keyboard arrays indexed using SDL_SCANCODE_* codes, e.g. ImGui::IsKeyPressed(SDL_SCANCODE_SPACE).
// Missing features:
//  [ ] Platform: SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
//  [ ] Platform: Gamepad support (need to use SDL_GameController API to fill the io.NavInputs[] value when ImGuiConfigFlags_NavEnableGamepad is set).
    
            // Draw selection
        if (edit_state.StbState.select_start != edit_state.StbState.select_end)
        {
            const ImWchar* text_selected_begin = text_begin + ImMin(edit_state.StbState.select_start, edit_state.StbState.select_end);
            const ImWchar* text_selected_end = text_begin + ImMax(edit_state.StbState.select_start, edit_state.StbState.select_end);
    }
    
    #pragma once
    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    
    {  /**
   * @brief CanFrame string including essential information about the message.
   * @return The info string.
   */
  std::string CanFrameString() const {
    std::stringstream output_stream('');
    output_stream << 'id:0x' << Byte::byte_to_hex(id)
                  << ',len:' << static_cast<int>(len) << ',data:';
    for (uint8_t i = 0; i < len; ++i) {
      output_stream << Byte::byte_to_hex(data[i]);
    }
    output_stream << ',';
    return output_stream.str();
  }
};
    
    ErrorCode FakeCanClient::Receive(std::vector<CanFrame> *const frames,
                                 int32_t *const frame_num) {
  if (frame_num == nullptr || frames == nullptr) {
    AERROR << 'frames or frame_num pointer is null';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  frames->resize(*frame_num);
  const int MOCK_LEN = 8;
  for (size_t i = 0; i < frames->size(); ++i) {
    for (int j = 0; j < MOCK_LEN; ++j) {
      (*frames)[i].data[j] = j;
    }
    (*frames)[i].id = i;
    (*frames)[i].len = MOCK_LEN;
    ADEBUG << (*frames)[i].CanFrameString() << 'frame_num[' << i << ']';
  }
  usleep(USLEEP_INTERVAL);
  ++recv_counter_;
  return ErrorCode::OK;
}
    
    
    {  SocketCanClientRaw socket_can_client;
  EXPECT_TRUE(socket_can_client.Init(param));
  EXPECT_EQ(socket_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(socket_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(socket_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(socket_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  socket_can_client.Stop();
}
    
    template <typename SensorType>
::apollo::common::ErrorCode CanReceiver<SensorType>::Init(
    CanClient *can_client, MessageManager<SensorType> *pt_manager,
    bool enable_log) {
  can_client_ = can_client;
  pt_manager_ = pt_manager;
  enable_log_ = enable_log;
  if (can_client_ == nullptr) {
    AERROR << 'Invalid can client.';
    return ::apollo::common::ErrorCode::CANBUS_ERROR;
  }
  if (pt_manager_ == nullptr) {
    AERROR << 'Invalid protocol manager.';
    return ::apollo::common::ErrorCode::CANBUS_ERROR;
  }
  is_init_ = true;
  return ::apollo::common::ErrorCode::OK;
}
    
    class MockProtocolData : public ProtocolData<::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID = 0x111;
  MockProtocolData() {}
};
    
    
    {  if (data_trigger_running_) {
    data_trigger_running_ = false;
    if (thread_ != nullptr && thread_->joinable()) {
      sensor_message_manager_->GetMutableCVar()->notify_all();
      thread_->join();
    }
    thread_.reset();
  }
  AINFO << 'Data trigger stopped [ok].';
}
    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');