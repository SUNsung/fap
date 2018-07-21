
        
        
    {
    {}  // namespace gtl
}  // namespace tensorflow
    
    TEST_F(OperatorTest, BuiltinSparseToDense) {
  SparseToDenseOperator op;
  op.validate_indices = false;
  std::unique_ptr<toco::SparseToDenseOperator> output_toco_op =
      SerializeAndDeserialize(
          GetOperator('SPARSE_TO_DENSE', OperatorType::kSparseToDense), op);
  EXPECT_EQ(op.validate_indices, output_toco_op->validate_indices);
}
    
      int called = 0;
  partial_run_mgr.PartialRunDone(
      step_id, [&called](Status status) { called++; }, Status::OK());
  partial_run_mgr.ExecutorDone(step_id, Status::OK());
    
    namespace tensorflow {
    }
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    REGISTER_KERNEL_BUILDER(Name('TextLineReader').Device(DEVICE_CPU),
                        TextLineReaderOp);
REGISTER_KERNEL_BUILDER(Name('TextLineReaderV2').Device(DEVICE_CPU),
                        TextLineReaderOp);
    
    The input audio has one row of the tensor for each channel in the audio file.
Each channel contains audio samples starting at the beginning of the audio and
having `1/samples_per_second` time between them. The output file will contain
all of the audio channels contained in the tensor.
    
    
    {}  // namespace
    
    void THDTensor_(geometric)(THDTensor *self, THDGenerator *_generator, double p) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorGeometric, self, _generator, p),
    THDState::s_current_worker
  );
}
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    TEST(CRC, Mask) {
  uint32_t crc = Value('foo', 3);
  ASSERT_NE(crc, Mask(crc));
  ASSERT_NE(crc, Mask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Unmask(Mask(Mask(crc)))));
}
    
    
    {
}  // namespace leveldb

    
    #include 'util/hash.h'
#include 'util/testharness.h'
    
    class Histogram {
 public:
  Histogram() { }
  ~Histogram() { }
    }
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
      // No copying allowed
  Block(const Block&);
  void operator=(const Block&);
    
        stb_uchar **chash;
    chash = (stb_uchar**) malloc(stb__hashsize * sizeof(stb_uchar*));
    if (chash == NULL) return 0; // failure
    for (i=0; i < stb__hashsize; ++i)
        chash[i] = NULL;
    
    // About GLSL version:
// The 'glsl_version' initialization parameter defaults to '#version 150' if NULL.
// Only override if your GL version doesn't handle this GLSL version. Keep NULL if unsure!
    
        VkMemoryRequirements req;
    vkGetBufferMemoryRequirements(g_Device, buffer, &req);
    g_BufferMemoryAlignment = (g_BufferMemoryAlignment > req.alignment) ? g_BufferMemoryAlignment : req.alignment;
    VkMemoryAllocateInfo alloc_info = {};
    alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    alloc_info.allocationSize = req.size;
    alloc_info.memoryTypeIndex = ImGui_ImplVulkan_MemoryType(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT, req.memoryTypeBits);
    err = vkAllocateMemory(g_Device, &alloc_info, g_Allocator, &buffer_memory);
    check_vk_result(err);
    
    #include 'imgui.h'
#include 'imgui_impl_glfw.h'
#include 'imgui_impl_opengl2.h'
#include <stdio.h>
#include <GLFW/glfw3.h>
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
        // Create window with graphics context
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('ImGui SDL2+OpenGL3 example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    gl3wInit();
    
            // Rendering
        ImGui::Render();
        g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());
    
    /**
 * Get current exceptions being handled.  front() is the most recent exception.
 * There should be at most one unless rethrowing.
 */
std::vector<ExceptionInfo> getCurrentExceptions();
    
      BlockingQueueAddResult addWithPriority(T item, int8_t priority) override {
    int mid = getNumPriorities() / 2;
    size_t queue = priority < 0
        ? std::max(0, mid + priority)
        : std::min(getNumPriorities() - 1, mid + priority);
    CHECK_LT(queue, queues_.size());
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queues_[queue].write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queues_[queue].blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
    
    {    auto oldslots = slots_.exchange(newslots.release());
    if (oldslots) {
      oldslots->retire();
    }
  }
    
    template <typename DigestT, typename ClockT>
BufferedSlidingWindow<DigestT, ClockT>::BufferedSlidingWindow(
    size_t nBuckets,
    typename ClockT::duration bufferDuration,
    size_t bufferSize,
    size_t digestSize)
    : BufferedStat<DigestT, ClockT>(bufferDuration, bufferSize, digestSize),
      slidingWindow_([=]() { return DigestT(digestSize); }, nBuckets) {}
    
    template <typename T>
void SingletonHolder<T>::destroyInstance() {
  state_ = SingletonHolderState::Dead;
  instance_.reset();
  instance_copy_.reset();
  if (destroy_baton_) {
    constexpr std::chrono::seconds kDestroyWaitTime{5};
    auto last_reference_released =
        destroy_baton_->try_wait_for(kDestroyWaitTime);
    if (last_reference_released) {
      teardown_(instance_ptr_);
    } else {
      print_destructor_stack_trace_->store(true);
      detail::singletonWarnDestroyInstanceLeak(type(), instance_ptr_);
    }
  }
}
    
    #include <folly/portability/Windows.h>
    
    /** hazptr_mb */
    
    #include 'modules/planning/tasks/traffic_decider/traffic_decider.h'
    
      EXPECT_TRUE(res);
    
    namespace apollo {
namespace planning {
    }
    }
    
    #include 'modules/perception/obstacle/camera/common/projector.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_detector.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_tracker.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_transformer.h'
    
    #endif  // MODULES_PERCEPTION_OBSTACLE_CAMERA_INTERFACE_BASE_TRANSFORMER_H_

    
      // @brief Get Adjusted camera-to-car extrinsics
  // Return false if no valid objects in scene
  bool GetAdjustedExtrinsics(Eigen::Matrix<double, 4, 4>* extrinsics) override;
    
    
    {
    {    path_time_obstacle_map_[obstacle->Id()].mutable_bottom_right()->CopyFrom(
        SetPathTimePoint(obstacle->Id(), sl_boundary.start_s(), relative_time));
    path_time_obstacle_map_[obstacle->Id()].mutable_upper_right()->CopyFrom(
        SetPathTimePoint(obstacle->Id(), sl_boundary.end_s(), relative_time));
    relative_time += FLAGS_trajectory_time_resolution;
  }
}
    
    
    {
    {    AINFO << 'Lidar to ' << camera_names_[i] << ' transform: ';
    AINFO << camera_coeffient.camera_extrinsic;
  }
  camera_coeffient_.resize(camera_names_.size());
  camera_coeffient_[kLongFocusIdx] = camera_coeffients['camera_25mm_focus'];
  camera_coeffient_[kShortFocusIdx] = camera_coeffients['camera_6mm_focus'];
  // auto &short_focus_camera_coeffient = camera_coeffients['camera_6mm_focus'];
  // auto &long_focus_camera_coeffient = camera_coeffients['camera_25mm_focus'];
  camera_coeffient_[kLongFocusIdx].camera_extrinsic =
      camera_coeffient_[kLongFocusIdx].camera_extrinsic *
      camera_coeffient_[kShortFocusIdx].camera_extrinsic;
  AINFO << 'Lidar to long(25mm): ';
  AINFO << camera_coeffient_[kLongFocusIdx].camera_extrinsic;
  return true;
}
    
    namespace apollo {
namespace perception {
namespace traffic_light {
// @brief 2 Camera Projection project the Light into the image.
class MultiCamerasProjection {
 public:
  MultiCamerasProjection() = default;
    }
    }
    }
    }
    
    bool UnityRecognize::RecognizeStatus(const Image &image,
                                     const RecognizeOption &option,
                                     std::vector<LightPtr> *lights) {
  cv::Mat ros_image = image.mat();
  cv::Rect cbox;
  cbox = cv::Rect(0, 0, ros_image.cols, ros_image.rows);
  classify_night_->SetCropBox(cbox);
  classify_day_->SetCropBox(cbox);
  std::vector<LightPtr> candidate(1);
  for (LightPtr light : *lights) {
    if (light->region.is_detected) {
      candidate[0] = light;
      if (light->region.detect_class_id == QUADRATE_CLASS) {
        AINFO << 'Recognize Use Night Model!';
        classify_night_->Perform(ros_image, &candidate);
      } else if (light->region.detect_class_id == VERTICAL_CLASS) {
        AINFO << 'Recognize Use Day Model!';
        classify_day_->Perform(ros_image, &candidate);
      } else {
        AINFO << 'Not support yet!';
      }
    } else {
      light->status.color = UNKNOWN_COLOR;
      light->status.confidence = 0;
      AINFO << 'Unknown Detection Class: ' << light->region.detect_class_id
            << '. region.is_detected: ' << light->region.is_detected
            << '. Not perform recognition.';
    }
  }
  return true;
}
    
    /**
 * @class RTKReplayPlanner
 * @brief RTKReplayPlanner is a derived class of Planner.
 *        It reads a recorded trajectory from a trajectory file and
 *        outputs proper segment of the trajectory according to vehicle
 * position.
 */
class RTKReplayPlanner : public Planner {
 public:
  /**
   * @brief Constructor
   */
  RTKReplayPlanner();
    }