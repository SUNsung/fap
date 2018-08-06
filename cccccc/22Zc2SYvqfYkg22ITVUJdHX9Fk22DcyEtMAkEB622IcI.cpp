
        
        void ComputeJacobians(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                      const IntrinsicParams& param,  InputArray omc, InputArray Tc,
                      const int& check_cond, const double& thresh_cond, Mat& JJ2_inv, Mat& ex3);
    
    CV_EXPORTS_W void compare(InputArray src1, Scalar src2, OutputArray dst, int cmpop);
    
    const uchar g_Saturate8u[] =
{
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
     32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
     48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,
     80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,
     96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255
};
    
    #endif  // CAFFE_ABSVAL_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    namespace caffe {
    }
    
    /**
 * @brief Compute elementwise operations, such as product and sum,
 *        along multiple input Blobs.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EltwiseLayer : public Layer<Dtype> {
 public:
  explicit EltwiseLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    // DirectX
#include <d3d9.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {    // Create Command Buffers
    VkResult err;
    for (int i = 0; i < IMGUI_VK_QUEUED_FRAMES; i++)
    {
        ImGui_ImplVulkanH_FrameData* fd = &wd->Frames[i];
        {
            VkCommandPoolCreateInfo info = {};
            info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
            info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
            info.queueFamilyIndex = queue_family;
            err = vkCreateCommandPool(device, &info, allocator, &fd->CommandPool);
            check_vk_result(err);
        }
        {
            VkCommandBufferAllocateInfo info = {};
            info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
            info.commandPool = fd->CommandPool;
            info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
            info.commandBufferCount = 1;
            err = vkAllocateCommandBuffers(device, &info, &fd->CommandBuffer);
            check_vk_result(err);
        }
        {
            VkFenceCreateInfo info = {};
            info.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
            info.flags = VK_FENCE_CREATE_SIGNALED_BIT;
            err = vkCreateFence(device, &info, allocator, &fd->Fence);
            check_vk_result(err);
        }
        {
            VkSemaphoreCreateInfo info = {};
            info.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
            err = vkCreateSemaphore(device, &info, allocator, &fd->ImageAcquiredSemaphore);
            check_vk_result(err);
            err = vkCreateSemaphore(device, &info, allocator, &fd->RenderCompleteSemaphore);
            check_vk_result(err);
        }
    }
}
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    // kIDCTMatrix[8*x+u] = alpha(u)*cos((2*x+1)*u*M_PI/16)*sqrt(2), with fixed 13
// bit precision, where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
// Some coefficients are off by +-1 to mimick libjpeg's behaviour.
static const int kIDCTMatrix[kDCTBlockSize] = {
  8192,  11363,  10703,   9633,   8192,   6437,   4433,   2260,
  8192,   9633,   4433,  -2259,  -8192, -11362, -10704,  -6436,
  8192,   6437,  -4433, -11362,  -8192,   2261,  10704,   9633,
  8192,   2260, -10703,  -6436,   8192,   9633,  -4433, -11363,
  8192,  -2260, -10703,   6436,   8192,  -9633,  -4433,  11363,
  8192,  -6437,  -4433,  11362,  -8192,  -2261,  10704,  -9633,
  8192,  -9633,   4433,   2259,  -8192,  11362, -10704,   6436,
  8192, -11363,  10703,  -9633,   8192,  -6437,   4433,  -2260,
};
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    #include <stdint.h>
#include <vector>
    
    TEST_F(OrderingTest, ordering) {
  EXPECT_EQ(-1, int(ordering::lt));
  EXPECT_EQ(0, int(ordering::eq));
  EXPECT_EQ(+1, int(ordering::gt));
}
    
      size_t size() override {
    return queue_.size();
  }
    
      std::shared_ptr<T> get() const {
    return slots_[AccessSpreader<>::current(kNumSlots)];
  }
    
      Future<Unit> getFuture() {
    return promise_.getFuture();
  }
    
      std::lock_guard<std::mutex> entry_lock(mutex_);
  if (state_.load(std::memory_order_acquire) == SingletonHolderState::Living) {
    return;
  }
  if (state_.load(std::memory_order_acquire) ==
        SingletonHolderState::NotRegistered) {
    detail::singletonWarnCreateUnregisteredAndAbort(type());
  }
    
    /**
 * Define various MALLOCX_* macros normally provided by jemalloc.  We define
 * them so that we don't have to include jemalloc.h, in case the program is
 * built without jemalloc support.
 */
#if (defined(USE_JEMALLOC) || defined(FOLLY_USE_JEMALLOC)) && !FOLLY_SANITIZE
// We have JEMalloc, so use it.
# include <jemalloc/jemalloc.h>
#else
# ifndef MALLOCX_LG_ALIGN
#  define MALLOCX_LG_ALIGN(la) (la)
# endif
# ifndef MALLOCX_ZERO
#  define MALLOCX_ZERO (static_cast<int>(0x40))
# endif
#endif
    
    class hazptr_mb {
 public:
  static void light();
  static void heavy();
};
    
    TEST(SysAllocator, bad_alloc) {
  using Alloc = SysAllocator<float>;
  Alloc const alloc;
  std::vector<float, Alloc> nums(alloc);
  if (!kIsSanitize) {
    EXPECT_THROW(nums.reserve(kTooBig), std::bad_alloc);
  }
}
    
      // The previous statement can be simplified in C++14:
  //  auto future =
  //      promise.getFuture().then([int_ptr = std::move(int_ptr)]() mutable {
  //        ++*int_ptr;
  //        return std::move(int_ptr);
  //      });
    
      if (m_a.cols() != m_b.rows() || m_b.cols() != m_d.cols() ||
      m_c.rows() != m_d.rows() || m_a.cols() != m_c.cols()) {
    AERROR << 'ContinuousToDiscrete: matrix dimensions mismatch';
    return false;
  }
    
      ts = 1;
    
    double Box2d::DistanceTo(const LineSegment2d &line_segment) const {
  if (line_segment.length() <= kMathEpsilon) {
    return DistanceTo(line_segment.start());
  }
  const double ref_x1 = line_segment.start().x() - center_.x();
  const double ref_y1 = line_segment.start().y() - center_.y();
  double x1 = ref_x1 * cos_heading_ + ref_y1 * sin_heading_;
  double y1 = ref_x1 * sin_heading_ - ref_y1 * cos_heading_;
  double box_x = half_length_;
  double box_y = half_width_;
  int gx1 = (x1 >= box_x ? 1 : (x1 <= -box_x ? -1 : 0));
  int gy1 = (y1 >= box_y ? 1 : (y1 <= -box_y ? -1 : 0));
  if (gx1 == 0 && gy1 == 0) {
    return 0.0;
  }
  const double ref_x2 = line_segment.end().x() - center_.x();
  const double ref_y2 = line_segment.end().y() - center_.y();
  double x2 = ref_x2 * cos_heading_ + ref_y2 * sin_heading_;
  double y2 = ref_x2 * sin_heading_ - ref_y2 * cos_heading_;
  int gx2 = (x2 >= box_x ? 1 : (x2 <= -box_x ? -1 : 0));
  int gy2 = (y2 >= box_y ? 1 : (y2 <= -box_y ? -1 : 0));
  if (gx2 == 0 && gy2 == 0) {
    return 0.0;
  }
  if (gx1 < 0 || (gx1 == 0 && gx2 < 0)) {
    x1 = -x1;
    gx1 = -gx1;
    x2 = -x2;
    gx2 = -gx2;
  }
  if (gy1 < 0 || (gy1 == 0 && gy2 < 0)) {
    y1 = -y1;
    gy1 = -gy1;
    y2 = -y2;
    gy2 = -gy2;
  }
  if (gx1 < gy1 || (gx1 == gy1 && gx2 < gy2)) {
    std::swap(x1, y1);
    std::swap(gx1, gy1);
    std::swap(x2, y2);
    std::swap(gx2, gy2);
    std::swap(box_x, box_y);
  }
  if (gx1 == 1 && gy1 == 1) {
    switch (gx2 * 3 + gy2) {
      case 4:
        return PtSegDistance(box_x, box_y, x1, y1, x2, y2,
                             line_segment.length());
      case 3:
        return (x1 > x2) ? (x2 - box_x)
                         : PtSegDistance(box_x, box_y, x1, y1, x2, y2,
                                         line_segment.length());
      case 2:
        return (x1 > x2) ? PtSegDistance(box_x, -box_y, x1, y1, x2, y2,
                                         line_segment.length())
                         : PtSegDistance(box_x, box_y, x1, y1, x2, y2,
                                         line_segment.length());
      case -1:
        return CrossProd({x1, y1}, {x2, y2}, {box_x, -box_y}) >= 0.0
                   ? 0.0
                   : PtSegDistance(box_x, -box_y, x1, y1, x2, y2,
                                   line_segment.length());
      case -4:
        return CrossProd({x1, y1}, {x2, y2}, {box_x, -box_y}) <= 0.0
                   ? PtSegDistance(box_x, -box_y, x1, y1, x2, y2,
                                   line_segment.length())
                   : (CrossProd({x1, y1}, {x2, y2}, {-box_x, box_y}) <= 0.0
                          ? 0.0
                          : PtSegDistance(-box_x, box_y, x1, y1, x2, y2,
                                          line_segment.length()));
    }
  } else {
    switch (gx2 * 3 + gy2) {
      case 4:
        return (x1 < x2) ? (x1 - box_x)
                         : PtSegDistance(box_x, box_y, x1, y1, x2, y2,
                                         line_segment.length());
      case 3:
        return std::min(x1, x2) - box_x;
      case 1:
      case -2:
        return CrossProd({x1, y1}, {x2, y2}, {box_x, box_y}) <= 0.0
                   ? 0.0
                   : PtSegDistance(box_x, box_y, x1, y1, x2, y2,
                                   line_segment.length());
      case -3:
        return 0.0;
    }
  }
  CHECK(0) << 'unimplemented state: ' << gx1 << ' ' << gy1 << ' ' << gx2 << ' '
           << gy2;
  return 0.0;
}
    
    TEST_F(DecisionTest, green_flash) {
  std::vector<int> color_list = {3, 3, 3, 0, 3, 0, 3, 3, 0, 3,
                                 0, 3, 0, 3, 0, 0, 0, 0, 0, 3};
  do_test(reviser_, color_list, GREEN);
}
    
    class Dreamview : public apollo::common::ApolloApp {
 public:
  std::string Name() const override;
  apollo::common::Status Init() override;
  apollo::common::Status Start() override;
  void Stop() override;
  virtual ~Dreamview() = default;
    }
    
    PathObstacle *PathDecision::AddPathObstacle(const PathObstacle &path_obstacle) {
  std::lock_guard<std::mutex> lock(obstacle_mutex_);
  return path_obstacles_.Add(path_obstacle.Id(), path_obstacle);
}
    
      /**
   * @brief Override function Plan in parent class Planner.
   * @param planning_init_point The trajectory point where planning starts.
   * @param frame Current planning frame.
   * @param reference_line_info The computed reference line.
   * @return OK if planning succeeds; error otherwise.
   */
  apollo::common::Status PlanOnReferenceLine(
      const common::TrajectoryPoint& planning_init_point, Frame* frame,
      ReferenceLineInfo* reference_line_info) override;
  /**
   * @brief Read the recorded trajectory file.
   * @param filename The name of the trajectory file.
   */
  void ReadTrajectoryFile(const std::string& filename);
    
        decision.mutable_nudge()->set_type(ObjectNudge::LEFT_NUDGE);
    path_obstacle.AddLateralDecision('test_left_nudge', decision);
    
    struct Layout
{
    double left;
    double right;
    }
    
        void setMinWidth(double minWidth);
    void setMinWidthPercent(double minWidth);
    void setMinHeight(double minHeight);
    void setMinHeightPercent(double minHeight);
    
    struct Size
{
    double width;
    double height;
    }
    
        method(getAlignContent);
    method(getAlignItems);
    method(getAlignSelf);
    method(getFlexDirection);
    method(getFlexWrap);
    method(getJustifyContent);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    namespace facebook {
    }