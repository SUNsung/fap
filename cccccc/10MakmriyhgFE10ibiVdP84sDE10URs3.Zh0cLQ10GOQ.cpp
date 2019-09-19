
        
        // Wraps operations to the global DescriptorPool which contains information
// about all messages and fields.
//
// There is normally one pool per process. We make it a Python object only
// because it contains many Python references.
//
// 'Methods' that interacts with this DescriptorPool are in the cdescriptor_pool
// namespace.
typedef struct PyDescriptorPool {
  PyObject_HEAD
    }
    
     private:
  void GenerateHeader(const GeneratorOptions& options,
                      const FileDescriptor* file, io::Printer* printer) const;
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
    
    { private:
  StringPiece data_;
  int block_size_;
};
    
    class Proto3DataStripper : public DataStripper {
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) {
    return field->type() == FieldDescriptor::TYPE_GROUP ||
           field->is_extension();
  }
};
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      GogoDataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }
    
    template <typename Dtype>
void HDF5OutputLayer<Dtype>::SaveBlobs() {
  // TODO: no limit on the number of blobs
  LOG(INFO) << 'Saving HDF5 file ' << file_name_;
  CHECK_EQ(data_blob_.num(), label_blob_.num()) <<
      'data blob and label blob must have the same batch size';
  hdf5_save_nd_dataset(file_id_, HDF5_DATA_DATASET_NAME, data_blob_);
  hdf5_save_nd_dataset(file_id_, HDF5_DATA_LABEL_NAME, label_blob_);
  LOG(INFO) << 'Successfully saved ' << data_blob_.num() << ' rows';
}
    
    // Verifies format of data stored in HDF5 file and reshapes blob accordingly.
template <typename Dtype>
void hdf5_load_nd_dataset_helper(
    hid_t file_id, const char* dataset_name_, int min_dim, int max_dim,
    Blob<Dtype>* blob, bool reshape) {
  // Verify that the dataset exists.
  CHECK(H5LTfind_dataset(file_id, dataset_name_))
      << 'Failed to find HDF5 dataset ' << dataset_name_;
  // Verify that the number of dimensions is in the accepted range.
  herr_t status;
  int ndims;
  status = H5LTget_dataset_ndims(file_id, dataset_name_, &ndims);
  CHECK_GE(status, 0) << 'Failed to get dataset ndims for ' << dataset_name_;
  CHECK_GE(ndims, min_dim);
  CHECK_LE(ndims, max_dim);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \max(min, \min(max, x))
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    // Load weights from the caffemodel(s) specified in 'weights' solver parameter
// into the train and test nets.
template <typename Dtype>
void LoadNetWeights(shared_ptr<Net<Dtype> > net,
    const std::string& model_list) {
  std::vector<std::string> model_names;
  boost::split(model_names, model_list, boost::is_any_of(','));
  for (int i = 0; i < model_names.size(); ++i) {
    boost::trim(model_names[i]);
    LOG(INFO) << 'Finetuning from ' << model_names[i];
    net->CopyTrainedLayersFrom(model_names[i]);
  }
}
    
    
    {}  // namespace caffe

    
      /* This operation will write the separate BGR planes directly to the
   * input layer of the network because it is wrapped by the cv::Mat
   * objects in input_channels. */
  cv::split(sample_normalized, *input_channels);
    
    #endif  // CAFFE_POOLING_LAYER_HPP_

    
      const Dtype* cpu_data() const;
  void set_cpu_data(Dtype* data);
  const int* gpu_shape() const;
  const Dtype* gpu_data() const;
  void set_gpu_data(Dtype* data);
  const Dtype* cpu_diff() const;
  const Dtype* gpu_diff() const;
  Dtype* mutable_cpu_data();
  Dtype* mutable_gpu_data();
  Dtype* mutable_cpu_diff();
  Dtype* mutable_gpu_diff();
  void Update();
  void FromProto(const BlobProto& proto, bool reshape = true);
  void ToProto(BlobProto* proto, bool write_diff = false) const;
    
        glfwDestroyWindow(window);
    glfwTerminate();
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClass(wc.lpszClassName, wc.hInstance);
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        desc.NumDescriptors = NUM_BACK_BUFFERS;
        desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        desc.NodeMask = 1;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dRtvDescHeap)) != S_OK)
            return false;
    }
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
    
        // the following call will not add an object, because there is already
    // a value stored at key 'B'
    auto res2 = null.emplace('B', 'c');
    
    class InteractionPredictor : public SequencePredictor {
 public:
  /**
   * @brief Constructor
   */
  InteractionPredictor();
    }
    
    class GraphSegmentorTest : public testing::Test {
 protected:
  void SetUp() {
    edges_ = new Edge[10];
    edges_[0].w = 6.f;
    edges_[0].a = 1;
    edges_[0].b = 2;
    edges_[1].w = 1.f;
    edges_[1].a = 1;
    edges_[1].b = 3;
    edges_[2].w = 5.f;
    edges_[2].a = 1;
    edges_[2].b = 4;
    edges_[3].w = 5.f;
    edges_[3].a = 3;
    edges_[3].b = 2;
    edges_[4].w = 5.f;
    edges_[4].a = 3;
    edges_[4].b = 4;
    edges_[5].w = 3.f;
    edges_[5].a = 5;
    edges_[5].b = 2;
    edges_[6].w = 6.f;
    edges_[6].a = 3;
    edges_[6].b = 5;
    edges_[7].w = 4.f;
    edges_[7].a = 3;
    edges_[7].b = 0;
    edges_[8].w = 2.f;
    edges_[8].a = 4;
    edges_[8].b = 0;
    edges_[9].w = 6.f;
    edges_[9].a = 5;
    edges_[9].b = 0;
  }
    }
    
      std::string config_module_path =
      GetAbsolutePath(work_root_, FLAGS_config_manager_path);
  AINFO << 'WORK_ROOT: ' << work_root_
        << ' config_root_path: ' << config_module_path;
    
      EXPECT_TRUE(apollo::cyber::OK());
  uint64_t seq = 5;
  msgChat->set_timestamp(Time::Now().ToNanosecond());
  msgChat->set_lidar_timestamp(Time::Now().ToNanosecond());
  msgChat->set_seq(seq++);
  msgChat->set_content('Hello, apollo!');
    
      void WaitForFinish() {
    if (thread_send_ != nullptr && thread_send_->joinable()) {
      thread_send_->join();
      thread_send_.reset();
      AINFO << 'Send thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
    if (thread_recv_ != nullptr && thread_recv_->joinable()) {
      thread_recv_->join();
      thread_recv_.reset();
      AINFO << 'Recv thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
  }
    
    /**
 * @brief Normalize angle to [-PI, PI).
 * @param angle the original value of the angle.
 * @return The normalized value of the angle.
 */
double NormalizeAngle(const double angle);
    
      // Init object template
  object_template_manager_ = ObjectTemplateManager::Instance();
    
    #include 'modules/planning/scenarios/park/valet_parking/valet_parking_scenario.h'
#include 'modules/planning/scenarios/stage.h'
    
    TEST_F(DistanceApproachIPOPTInterfaceTest, eval_f) {
  int n = 1274;
  double obj_value = 0.0;
  double x[1274];
  std::fill_n(x, n, 1.2);
  bool res = ptop_->eval_f(n, x, true, obj_value);
  EXPECT_DOUBLE_EQ(obj_value, 1443.3600000000008) << 'eval_f: ' << obj_value;
  EXPECT_TRUE(res);
}
    
      Status UnlockFile(FileLock* lock) override {
    PERF_TIMER_GUARD(env_unlock_file_nanos);
    return EnvWrapper::UnlockFile(lock);
  }
    
    // A merge operator that mimics Put semantics
// Since this merge-operator will not be used in production,
// it is implemented as a non-associative merge operator to illustrate the
// new interface and for testing purposes. (That is, we inherit from
// the MergeOperator class rather than the AssociativeMergeOperator
// which would be simpler in this case).
//
// From the client-perspective, semantics are the same.
class PutOperator : public MergeOperator {
 public:
  bool FullMerge(const Slice& /*key*/, const Slice* /*existing_value*/,
                 const std::deque<std::string>& operand_sequence,
                 std::string* new_value, Logger* /*logger*/) const override {
    // Put basically only looks at the current/latest value
    assert(!operand_sequence.empty());
    assert(new_value != nullptr);
    new_value->assign(operand_sequence.back());
    return true;
  }
    }
    
      MyFilter filter;
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/db.h'
    
    #pragma once
#ifndef ROCKSDB_LITE