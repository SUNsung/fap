
        
        namespace HPHP { namespace HHBBC {
    }
    }
    
      bool operator==(SrcLoc o) const {
    return start == o.start && past == o.past;
  }
    
    #include 'hphp/runtime/base/ini-setting.h'
#include 'hphp/runtime/base/array-iterator.h'
#include 'hphp/util/logger.h'
    
    /*!
 * \brief DataBatch of NDArray, returned by Iterator
 */
struct DataBatch {
  /*! \brief content of dense data, if this DataBatch is dense */
  std::vector<NDArray> data;
  /*! \brief index of image data */
  std::vector<uint64_t> index;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
  /*! \brief num of example padded to batch */
  int num_batch_padd;
};  // struct DataBatch
    
    /*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT0)(const OutputGrad& out_grad,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param out_value the value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT1)(const OutputGrad& out_grad,
                                    const OutputValue& out_value,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes input value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param in_data0 the input value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT2)(const OutputGrad& out_grad,
                                    const Input0& in_data0,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Binary function that takes lhs, rhs and save result to ret.
 *  The result container is pre-allocated with the correct shape.
 * \param lhs The left operand
 * \param rhs The right operand
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryFunction)(const TBlob& lhs,
                               const TBlob& rhs,
                               const EnvArguments& env,
                               TBlob* ret,
                               OpReqType req,
                               RunContext ctx);
    
    #endif  // PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_

    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
    
    {
    {}  // namespace engine
}  // namespace mxnet
    
    template<typename AttrType, typename FInfer>
bool ApplyOpInferAttr(const nnvm::Graph& g,
                      const FInfer& finfer,
                      const NodeAttrs& attrs,
                      const uint32_t nid,
                      std::vector<AttrType>* in_attrs,
                      std::vector<AttrType>* out_attrs,
                      DispatchMode* dispatch_mode) {
  return finfer(attrs, in_attrs, out_attrs);
}
    
    bool Follow::isDone() const
{
    return ( !_followedNode->isRunning() );
}
    
        for (ssize_t i = 1; i < reverse->count(); ++i)
    {
        Vec2 current = reverse->getControlPointAtIndex(i);
        current = -current;
        Vec2 abs = current + p;
        reverse->replaceControlPoint(abs, i);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    Waves3D* Waves3D::create(float duration, const Size& gridSize, unsigned int waves, float amplitude)
{
    Waves3D *action = new (std::nothrow) Waves3D();
    }
    
    CallFunc::~CallFunc()
{
    CC_SAFE_RELEASE(_selectorTarget);
}
    
    SkewTo* SkewTo::reverse() const
{
    CCASSERT(false, 'reverse() not supported in SkewTo');
    return nullptr;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
    void WavesTiles3D::update(float time)
{
    for (int i = 0; i < _gridSize.width; i++ )
    {
        for (int j = 0; j < _gridSize.height; j++ )
        {
            Quad3 coords = getOriginalTile(Vec2(i, j));
    }
    }
    }
    
    
    {    return true;
}
    
    
    {// end of sprite_nodes group
/// @}
    
    AnimationCache::AnimationCache()
{
}
    
    //---- Pack colors to BGRA8 instead of RGBA8 (to avoid converting from one to another)
//#define IMGUI_USE_BGRA_PACKED_COLOR
    
    static void stb__write(unsigned char v)
{
    fputc(v, stb__outfile);
    ++stb__outbytes;
}
    
    // This is where your app communicate with Dear ImGui. Access via ImGui::GetIO().
// Read 'Programmer guide' section in .cpp file for general usage.
struct ImGuiIO
{
    //------------------------------------------------------------------
    // Configuration (fill once)            // Default value:
    //------------------------------------------------------------------
    }
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    #include 'imgui.h'
#include 'imgui_impl_sdl.h'
#include 'imgui_impl_opengl2.h'
#include <stdio.h>
#include <SDL.h>
#include <SDL_opengl.h>
    
    
    {		err = vkResetFences(g_Device, 1, &fd->Fence);
        check_vk_result(err);
    }
    {
        err = vkResetCommandPool(g_Device, fd->CommandPool, 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(fd->CommandBuffer, &info);
        check_vk_result(err);
    }
    {
        VkRenderPassBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
        info.renderPass = wd->RenderPass;
		info.framebuffer = wd->Framebuffer[wd->FrameIndex];
        info.renderArea.extent.width = wd->Width;
        info.renderArea.extent.height = wd->Height;
        info.clearValueCount = 1;
        info.pClearValues = &wd->ClearValue;
        vkCmdBeginRenderPass(fd->CommandBuffer, &info, VK_SUBPASS_CONTENTS_INLINE);
    }
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {}  // namespace
    
    
    {}  // namespace guetzli
    
    
    {}  // namespace guetzli
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    #include <assert.h>
#include <string.h>
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    // Updates ac_histogram with the counts of the AC symbols that will be added by
// a sequential jpeg encoder for this block. Every symbol is counted twice so
// that we can add a fake symbol at the end with count 1 to be the last (least
// frequent) symbol with the all 1 code.
void UpdateACHistogramForDCTBlock(const coeff_t* coeffs,
                                  JpegHistogram* ac_histogram) {
  int r = 0;
  for (int k = 1; k < 64; ++k) {
    coeff_t coeff = coeffs[kJPEGNaturalOrder[k]];
    if (coeff == 0) {
      r++;
      continue;
    }
    while (r > 15) {
      ac_histogram->Add(0xf0);
      r -= 16;
    }
    int nbits = Log2FloorNonZero(std::abs(coeff)) + 1;
    int symbol = (r << 4) + nbits;
    ac_histogram->Add(symbol);
    r = 0;
  }
  if (r > 0) {
    ac_histogram->Add(0);
  }
}
    
    /**
 * @class CanFrame
 * @brief The class which defines the information to send and receive.
 */
struct CanFrame {
  /// Message id
  uint32_t id;
  /// Message length
  uint8_t len;
  /// Message content
  uint8_t data[8];
  /// Time stamp
  struct timeval timestamp;
    }
    
      /**
   * @brief Create a pointer to a specified brand of CAN client. The brand is
   *        set in the parameter.
   * @param parameter The parameter to create the CAN client.
   * @return A pointer to the created CAN client.
   */
  std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
    
    /**
 * @class EsdCanClient
 * @brief The class which defines a ESD CAN client which inherits CanClient.
 */
class EsdCanClient : public CanClient {
 public:
  /**
   * @brief Initialize the ESD CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &parameter) override;
    }
    
    TEST(EsdCanClientTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::ESD_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

    
      // bind socket to network interface
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    TEST(CanReceiverTest, ReceiveOne) {
  can::FakeCanClient can_client;
  MessageManager<::apollo::canbus::ChassisDetail> pm;
  CanReceiver<::apollo::canbus::ChassisDetail> receiver;
    }
    
    #include 'gtest/gtest.h'
    
      /*
   * @brief update the data
   */
  virtual void UpdateData(uint8_t *data);
    
    std::string Byte::byte_to_binary(const uint8_t value) {
  return std::bitset<8 * sizeof(uint8_t)>(value).to_string();
}
    
      /**
  * @brief module start function
  * @return start status
  */
  apollo::common::Status Start() override;