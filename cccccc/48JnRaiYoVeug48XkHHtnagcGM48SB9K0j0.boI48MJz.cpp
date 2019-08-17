
        
        
    {}  // namespace api
    
    namespace api {
    }
    
    #include <map>
#include <string>
    
      // DesktopMediaListObserver overrides.
  void OnSourceAdded(DesktopMediaList* list, int index) override;
  void OnSourceRemoved(DesktopMediaList* list, int index) override;
  void OnSourceMoved(DesktopMediaList* list,
                     int old_index,
                     int new_index) override;
  void OnSourceNameChanged(DesktopMediaList* list, int index) override;
  void OnSourceThumbnailChanged(DesktopMediaList* list, int index) override;
  void OnSourceUnchanged(DesktopMediaList* list) override;
  bool ShouldScheduleNextRefresh(DesktopMediaList* list) override;
    
    namespace api {
    }
    
    // Setters
void Notification::SetTitle(const base::string16& new_title) {
  title_ = new_title;
}
    
      // Prop Setters
  void SetTitle(const base::string16& new_title);
  void SetSubtitle(const base::string16& new_subtitle);
  void SetBody(const base::string16& new_body);
  void SetSilent(bool new_silent);
  void SetHasReply(bool new_has_reply);
  void SetReplyPlaceholder(const base::string16& new_reply_placeholder);
  void SetSound(const base::string16& sound);
  void SetActions(const std::vector<electron::NotificationAction>& actions);
  void SetCloseButtonText(const base::string16& text);
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
     private:
  void UpdatePowerSaveBlocker();
  int Start(device::mojom::WakeLockType type);
  bool Stop(int id);
  bool IsStarted(int id);
    
      // DefaultFieldComparator's default float comparison mode is EXACT.
  ASSERT_EQ(DefaultFieldComparator::EXACT, comparator_.float_comparison());
  EXPECT_EQ(
      FieldComparator::DIFFERENT,
      comparator_.Compare(message_1_, message_2_, field_float, -1, -1, NULL));
  EXPECT_EQ(
      FieldComparator::DIFFERENT,
      comparator_.Compare(message_1_, message_2_, field_double, -1, -1, NULL));
    
      TestUtil::SetAllFields(&msg1);
  TestUtil::SetAllFields(&msg2);
    
    
    {
    {
    {
    {}  // namespace
}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    #include 'hdf5.h'
#include 'hdf5_hl.h'
    
      // Verify that the data format is what we expect: float or double.
  std::vector<hsize_t> dims(ndims);
  H5T_class_t class_;
  status = H5LTget_dataset_info(
      file_id, dataset_name_, dims.data(), &class_, NULL);
  CHECK_GE(status, 0) << 'Failed to get dataset info for ' << dataset_name_;
  switch (class_) {
  case H5T_FLOAT:
    { LOG_FIRST_N(INFO, 1) << 'Datatype class: H5T_FLOAT'; }
    break;
  case H5T_INTEGER:
    { LOG_FIRST_N(INFO, 1) << 'Datatype class: H5T_INTEGER'; }
    break;
  case H5T_TIME:
    LOG(FATAL) << 'Unsupported datatype class: H5T_TIME';
  case H5T_STRING:
    LOG(FATAL) << 'Unsupported datatype class: H5T_STRING';
  case H5T_BITFIELD:
    LOG(FATAL) << 'Unsupported datatype class: H5T_BITFIELD';
  case H5T_OPAQUE:
    LOG(FATAL) << 'Unsupported datatype class: H5T_OPAQUE';
  case H5T_COMPOUND:
    LOG(FATAL) << 'Unsupported datatype class: H5T_COMPOUND';
  case H5T_REFERENCE:
    LOG(FATAL) << 'Unsupported datatype class: H5T_REFERENCE';
  case H5T_ENUM:
    LOG(FATAL) << 'Unsupported datatype class: H5T_ENUM';
  case H5T_VLEN:
    LOG(FATAL) << 'Unsupported datatype class: H5T_VLEN';
  case H5T_ARRAY:
    LOG(FATAL) << 'Unsupported datatype class: H5T_ARRAY';
  default:
    LOG(FATAL) << 'Datatype class unknown';
  }
    
    TYPED_TEST(NeuronLayerTest, TestPReLUGradientChannelShared) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter layer_param;
  layer_param.mutable_prelu_param()->set_channel_shared(true);
  PReLULayer<Dtype> layer(layer_param);
  layer.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
  GradientChecker<Dtype> checker(1e-2, 1e-3, 1701, 0., 0.01);
  checker.CheckGradientExhaustive(&layer, this->blob_bottom_vec_,
      this->blob_top_vec_);
}
    
    
    {  // Since boost 1.53 boost.python will convert str and bytes
  // to std::string but will convert std::string to str. Here we
  // force a bytes object to be returned. When this object
  // is passed back to the NCCL constructor boost.python will
  // correctly convert the bytes to std::string automatically
  PyObject* py_uid = PyBytes_FromString(uid.c_str());
  return bp::object(bp::handle<>(py_uid));
#else
  // automatic conversion is correct for python 2.
  return bp::object(uid);
#endif
}
#endif
    
    // TODO(Yangqing): Is there a faster way to do pooling in the channel-first
// case?
template <typename Dtype>
void PoolingLayer<Dtype>::Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  const Dtype* bottom_data = bottom[0]->cpu_data();
  Dtype* top_data = top[0]->mutable_cpu_data();
  const int top_count = top[0]->count();
  // We'll output the mask to top[1] if it's of size >1.
  const bool use_top_mask = top.size() > 1;
  int* mask = NULL;  // suppress warnings about uninitialized variables
  Dtype* top_mask = NULL;
  // Different pooling methods. We explicitly do the switch outside the for
  // loop to save time, although this results in more code.
  switch (this->layer_param_.pooling_param().pool()) {
  case PoolingParameter_PoolMethod_MAX:
    // Initialize
    if (use_top_mask) {
      top_mask = top[1]->mutable_cpu_data();
      caffe_set(top_count, Dtype(-1), top_mask);
    } else {
      mask = max_idx_.mutable_cpu_data();
      caffe_set(top_count, -1, mask);
    }
    caffe_set(top_count, Dtype(-FLT_MAX), top_data);
    // The main loop
    for (int n = 0; n < bottom[0]->num(); ++n) {
      for (int c = 0; c < channels_; ++c) {
        for (int ph = 0; ph < pooled_height_; ++ph) {
          for (int pw = 0; pw < pooled_width_; ++pw) {
            int hstart = ph * stride_h_ - pad_h_;
            int wstart = pw * stride_w_ - pad_w_;
            int hend = min(hstart + kernel_h_, height_);
            int wend = min(wstart + kernel_w_, width_);
            hstart = max(hstart, 0);
            wstart = max(wstart, 0);
            const int pool_index = ph * pooled_width_ + pw;
            for (int h = hstart; h < hend; ++h) {
              for (int w = wstart; w < wend; ++w) {
                const int index = h * width_ + w;
                if (bottom_data[index] > top_data[pool_index]) {
                  top_data[pool_index] = bottom_data[index];
                  if (use_top_mask) {
                    top_mask[pool_index] = static_cast<Dtype>(index);
                  } else {
                    mask[pool_index] = index;
                  }
                }
              }
            }
          }
        }
        // compute offset
        bottom_data += bottom[0]->offset(0, 1);
        top_data += top[0]->offset(0, 1);
        if (use_top_mask) {
          top_mask += top[0]->offset(0, 1);
        } else {
          mask += top[0]->offset(0, 1);
        }
      }
    }
    break;
  case PoolingParameter_PoolMethod_AVE:
    for (int i = 0; i < top_count; ++i) {
      top_data[i] = 0;
    }
    // The main loop
    for (int n = 0; n < bottom[0]->num(); ++n) {
      for (int c = 0; c < channels_; ++c) {
        for (int ph = 0; ph < pooled_height_; ++ph) {
          for (int pw = 0; pw < pooled_width_; ++pw) {
            int hstart = ph * stride_h_ - pad_h_;
            int wstart = pw * stride_w_ - pad_w_;
            int hend = min(hstart + kernel_h_, height_ + pad_h_);
            int wend = min(wstart + kernel_w_, width_ + pad_w_);
            int pool_size = (hend - hstart) * (wend - wstart);
            hstart = max(hstart, 0);
            wstart = max(wstart, 0);
            hend = min(hend, height_);
            wend = min(wend, width_);
            for (int h = hstart; h < hend; ++h) {
              for (int w = wstart; w < wend; ++w) {
                top_data[ph * pooled_width_ + pw] +=
                    bottom_data[h * width_ + w];
              }
            }
            top_data[ph * pooled_width_ + pw] /= pool_size;
          }
        }
        // compute offset
        bottom_data += bottom[0]->offset(0, 1);
        top_data += top[0]->offset(0, 1);
      }
    }
    break;
  case PoolingParameter_PoolMethod_STOCHASTIC:
    NOT_IMPLEMENTED;
    break;
  default:
    LOG(FATAL) << 'Unknown pooling method.';
  }
}
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_path, const string& db_backend) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
        m_bError = true; /* Set error flag.  Only cleared with CLEAR or CENTR. */
    
    class CParentheses final : public IParenthesisCommand
{
public:
    CParentheses(_In_ int command);
    int GetCommand() const override;
    CalculationManager::CommandType GetCommandType() const override;
    void Accept(_In_ ISerializeCommandVisitor& commandVisitor) override;
    }
    
        DUPNUM(n2, num_one);
    
    PRAT ln_ten = nullptr;
PRAT ln_two = nullptr;
PRAT rat_zero = nullptr;
PRAT rat_one = nullptr;
PRAT rat_neg_one = nullptr;
PRAT rat_two = nullptr;
PRAT rat_six = nullptr;
PRAT rat_half = nullptr;
PRAT rat_ten = nullptr;
PRAT pt_eight_five = nullptr;
PRAT pi = nullptr;
PRAT pi_over_two = nullptr;
PRAT two_pi = nullptr;
PRAT one_pt_five_pi = nullptr;
PRAT e_to_one_half = nullptr;
PRAT rat_exp = nullptr;
PRAT rad_to_deg = nullptr;
PRAT rad_to_grad = nullptr;
PRAT rat_qword = nullptr;
PRAT rat_dword = nullptr; // unsigned max ui32
PRAT rat_word = nullptr;
PRAT rat_byte = nullptr;
PRAT rat_360 = nullptr;
PRAT rat_400 = nullptr;
PRAT rat_180 = nullptr;
PRAT rat_200 = nullptr;
PRAT rat_nRadix = nullptr;
PRAT rat_smallest = nullptr;
PRAT rat_negsmallest = nullptr;
PRAT rat_max_exp = nullptr;
PRAT rat_min_exp = nullptr;
PRAT rat_max_fact = nullptr;
PRAT rat_min_fact = nullptr;
PRAT rat_min_i32 = nullptr; // min signed i32
PRAT rat_max_i32 = nullptr; // max signed i32
    
    //-----------------------------------------------------------------------------
//
//  FUNCTION: cosrat, _cosrat
//
//  ARGUMENTS:  x PRAT representation of number to take the cosine of
//
//  RETURN: cosine of x in PRAT form.
//
//  EXPLANATION: This uses Taylor series
//
//    n
//   ___    2j   j
//   \  ]  X   -1
//    \   ---------
//    /    (2j)!
//   /__]
//   j=0
//          or,
//    n
//   ___                                                 2
//   \  ]                                              -X
//    \   thisterm  ; where thisterm   = thisterm  * ---------
//    /           j                 j+1          j   (2j)*(2j+1)
//   /__]
//   j=0
//
//   thisterm  = 1 ;  and stop when thisterm < precision used.
//           0                              n
//
//-----------------------------------------------------------------------------
    
    namespace CalculatorApp::Common::Automation
{
    // This class exists so that the app can run on RS2 and use LiveRegions
    // to host notifications on those builds.
    // When the app switches to min version RS3, this class can be removed
    // and the app will switch to using the Notification API.
    // TODO - MSFT 12735088
public
    ref class LiveRegionHost sealed : public INarratorAnnouncementHost
    {
    public:
        LiveRegionHost();
    }
    }
    
    
    {    return 0;
}
    
    static int stb_compress_inner(stb_uchar *input, stb_uint length)
{
    int literals = 0;
    stb_uint len,i;
    }
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    struct alignas(16) Landmark {
  // @brief object type, required
  VisualLandmarkType type = VisualLandmarkType::RoadArrow;
  // @brief probability for each type, required
  std::vector<float> type_probs;
    }
    
      // @brief convex hull of the object, required
  PointCloud<PointD> polygon;
    
    double TrackObjectDistance::s_lidar2lidar_association_center_dist_threshold_ =
    10.0;
double TrackObjectDistance::s_lidar2radar_association_center_dist_threshold_ =
    10.0;
double TrackObjectDistance::s_radar2radar_association_center_dist_threshold_ =
    10.0;
size_t
    TrackObjectDistance::s_lidar2camera_projection_downsample_target_pts_num_ =
        100;
size_t TrackObjectDistance::s_lidar2camera_projection_vertices_check_pts_num_ =
    20;
    
    namespace apollo {
namespace perception {
namespace fusion {
    }
    }
    }
    
    namespace apollo {
namespace perception {
namespace lidar {
    }
    }
    }