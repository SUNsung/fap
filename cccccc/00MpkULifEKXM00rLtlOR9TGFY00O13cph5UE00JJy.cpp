void ProtoFromShapeHandle(tensorflow::shape_inference::ShapeHandle s,
                          tensorflow::shape_inference::InferenceContext* c,
                          TensorShapeProto* out) {
  if (c->RankKnown(s)) {
    const int32 rank = c->Rank(s);
    for (int i = 0; i < rank; ++i) {
      shape_inference::DimensionHandle d = c->Dim(s, i);
      auto* out_dim = out->add_dim();
      if (c->ValueKnown(d)) {
        out_dim->set_size(c->Value(d));
      } else {
        out_dim->set_size(-1);
      }
    }
  } else {
    out->set_unknown_rank(true);
  }
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    int NPyBfloat16_Fill(void* buffer_raw, npy_intp length, void* ignored) {
  bfloat16* const buffer = reinterpret_cast<bfloat16*>(buffer_raw);
  const float start(buffer[0]);
  const float delta = static_cast<float>(buffer[1]) - start;
  for (npy_intp i = 2; i < length; ++i) {
    buffer[i] = static_cast<bfloat16>(start + i * delta);
  }
  return 0;
}
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
#define TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL.
void DelayedNumpyDecref(void* data, size_t len, void* obj) {
  mutex_lock ml(*DelayedDecrefLock());
  DecrefCache()->push_back(obj);
}
    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    StreamExecutor *stream_exec)
    : ScopedActivateExecutorContext(ExtractCudaExecutor(stream_exec)) {}
    
      // Returns whether ECC is enabled for the given CUdevice via
  // cuDeviceGetattribute with CU_DEVICE_ATTRIBUTE_ECC_ENABLED.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__DEVICE.html#group__CUDA__DEVICE_1g9c3e1414f0ad901d3278a4d6645fc266
  static bool IsEccEnabled(CUdevice device, bool *result);
    
      TemporaryFile() {
    path = tmppath();
  }
    
      const auto& X = in[0];
  const auto& W = in[1];
  const auto& b = in[2];
  auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  const int M = size_to_dim_(canonical_axis, GetDimsVector(in[0]));
  const int K = size_from_dim_(canonical_axis, GetDimsVector(in[0]));
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    #ifndef CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
#define CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
    
    
    {  bool RunOnDevice() override {
    for (Blob* output : OperatorBase::Outputs()) {
      output->Reset();
    }
    return true;
  }
};
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchWorker(
    const std::string& exec_path, int argc /* unused */, char** argv) {
  auto worker_pid = ::fork();
  if (worker_pid < 0) {
    return std::shared_ptr<PlatformProcess>();
  } else if (worker_pid == 0) {
    setEnvVar('OSQUERY_WORKER', std::to_string(::getpid()).c_str());
    ::execve(exec_path.c_str(), argv, ::environ);
    }
    }
    
    void Initializer::platformTeardown() {
  // Before we shutdown, we must insure to free the COM libs in windows
  ::CoUninitialize();
}
    
      /**
   * @brief Scratch space for reading INotify responses.
   *
   * We place this here, and include a mutex to do heap/lazy allocation of the
   * near-3k buffer when the publisher loads. This reduces the need to stack
   * allocate a local buffer every 200mils and also improves the eventless-case.
   *
   * Allocated during setUp, removed in tearDown, protected by scratch_mutex_.
   */
  char* scratch_{nullptr};
    
      // Now there are two subscriptions (one sans callback).
  pub->fire(ec, 0);
  EXPECT_EQ(kBellHathTolled, 2);
    
    #define stb__nc(b,d)  ((d) <= window && ((b) > 9 || stb_not_crap(b,d)))
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 + GLSL 150
    const char* glsl_version = '#version 150';
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // Required on Mac
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // 3.0+ only
#endif
    
            // Rendering
        ImGui::Render();
        g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());
    
        if (DX12_ENABLE_DEBUG_LAYER)
    {
        ID3D12Debug* dx12Debug = NULL;
        if (SUCCEEDED(D3D12GetDebugInterface(IID_PPV_ARGS(&dx12Debug))))
        {
            dx12Debug->EnableDebugLayer();
            dx12Debug->Release();
        }
    }
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
      virtual void SetUp() {
    send_time_ = 0;
    recv_time_ = 0;
    send_succ_count_ = 0;
    recv_succ_count_ = 0;
    send_err_count_ = 0;
    recv_err_count_ = 0;
    param_.set_brand(CANCardParameter::ESD_CAN);
    param_.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    send_client_ = std::unique_ptr<FakeCanClient>(new FakeCanClient());
    send_client_->Init(param_);
    send_client_->Start();
    recv_client_ = std::unique_ptr<FakeCanClient>(new FakeCanClient());
    recv_client_->Init(param_);
    recv_client_->Start();
  }
    
    #include 'modules/drivers/canbus/can_client/hermes_can/hermes_can_client.h'
#include 'gtest/gtest.h'
    
    
    {  is_started_ = true;
  return ErrorCode::OK;
}
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    TEST(FunctionRef, Simple) {
  int x = 1000;
  auto lambda = [&x](int v) { return x += v; };
    }
    
    
    {} // namespace folly
    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_empty', 0, arguments));
  EXPECT_TRUE(arguments.empty());
}