
        
          bool DoBatchNormalizationForward(
      Stream* stream, const DeviceMemory<Eigen::half>& x,
      const DeviceMemory<float>& scale, const DeviceMemory<float>& offset,
      const DeviceMemory<float>& estimated_mean,
      const DeviceMemory<float>& estimated_variance,
      const DeviceMemory<float>& side_input, const dnn::BatchDescriptor& x_desc,
      const dnn::BatchDescriptor& scale_offset_desc, const double epsilon,
      dnn::ActivationMode activation_mode, DeviceMemory<Eigen::half>* y,
      DeviceMemory<float>* batch_mean, DeviceMemory<float>* batch_var,
      DeviceMemory<float>* saved_mean, DeviceMemory<float>* saved_inv_var,
      bool is_training, ScratchAllocator* reserve_space_allocator,
      ScratchAllocator* workspace_allocator,
      std::function<const DeviceMemory<float>&()> var_to_inv_var,
      std::function<void()> inv_var_to_var) override;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_TESTING_SPLIT_H_
#define TENSORFLOW_LITE_TESTING_SPLIT_H_
    
    #include 'tensorflow/core/kernels/matrix_band_part_op.h'
    
    template <typename Scalar>
struct EyeFunctor<GPUDevice, Scalar> {
  void operator()(const GPUDevice& device,
                  typename TTypes<Scalar, 3>::Tensor matrix_batch) {
    const int batch_size = matrix_batch.dimension(0);
    const int m = matrix_batch.dimension(1);
    const int n = matrix_batch.dimension(2);
    GpuLaunchConfig config = GetGpuLaunchConfig(batch_size * m * n, device);
    TF_CHECK_OK(GpuLaunchKernel(EyeKernel<Scalar>, config.block_count,
                                config.thread_per_block, 0, device.stream(),
                                config.virtual_thread_count, batch_size, m, n,
                                matrix_batch.data()));
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Read-only view of a TfliteModelInfo. TfliteInferenceStage retains
  // ownership.
  // Only available after Init is done.
  const TfLiteModelInfo* GetModelInfo() const { return &model_info_; }
    
    // Registration of the GPU implementations.
#define REGISTER_MATRIX_DIAG_GPU(type)                                     \
  REGISTER_KERNEL_BUILDER(                                                 \
      Name('MatrixDiag').Device(DEVICE_GPU).TypeConstraint<type>('T'),     \
      MatrixDiagOp<GPUDevice, type>);                                      \
  REGISTER_KERNEL_BUILDER(Name('MatrixDiagV2')                             \
                              .Device(DEVICE_GPU)                          \
                              .TypeConstraint<type>('T')                   \
                              .HostMemory('k')                             \
                              .HostMemory('num_rows')                      \
                              .HostMemory('num_cols')                      \
                              .HostMemory('padding_value'),                \
                          MatrixDiagOp<GPUDevice, type>);                  \
  REGISTER_KERNEL_BUILDER(                                                 \
      Name('MatrixDiagPart').Device(DEVICE_GPU).TypeConstraint<type>('T'), \
      MatrixDiagPartOp<GPUDevice, type>);                                  \
  REGISTER_KERNEL_BUILDER(Name('MatrixDiagPartV2')                         \
                              .Device(DEVICE_GPU)                          \
                              .TypeConstraint<type>('T')                   \
                              .HostMemory('k')                             \
                              .HostMemory('padding_value'),                \
                          MatrixDiagPartOp<GPUDevice, type>);
    
    template <typename Device, typename T>
struct MatrixDiagPart {
  EIGEN_ALWAYS_INLINE static void Compute(
      OpKernelContext* context, const Device& device,
      typename TTypes<T, 3>::ConstTensor& input,
      typename TTypes<T>::Tensor& output_original, const Eigen::Index d_lower,
      const Eigen::Index d_upper, const Eigen::Index max_diag_len,
      const T padding);
};
    
      for (int i = 0; i < error_stats_.size(); ++i) {
    AccuracyMetrics* diff = inference_profiler_metrics->add_output_errors();
    diff->set_avg_value(error_stats_[i].avg());
    diff->set_std_deviation(error_stats_[i].std_deviation());
    diff->set_min_value(error_stats_[i].min());
    // Avoiding the small positive values contained in max() even when avg() ==
    // 0.
    if (error_stats_[i].avg() != 0) {
      diff->set_max_value(error_stats_[i].max());
    } else {
      diff->set_max_value(0);
    }
  }
    
    TF_CALL_int32(DEFINE_GPU_SPECS);
TF_CALL_int64(DEFINE_GPU_SPECS);
TF_CALL_GPU_NUMBER_TYPES(DEFINE_GPU_SPECS);
TF_CALL_complex64(DEFINE_GPU_SPECS);
TF_CALL_complex128(DEFINE_GPU_SPECS);
    
    // By default compiler fuel is global; if you run two compiler threads, they
// will consume from the same fuel pool.
//
// Calling this function changes the behavior of fuel for the current thread:
// From this point onward, it will use a private fuel pool.  The thread-local
// fuel pool is initialized to the values the global fuel pool had at process
// startup.
//
// You may call this function twice in the same thread to reset its fuel pool
// back to the intitial state.
void ResetThreadLocalFuel();
    
    #include 'caffe/blob.hpp'
    
    
    {
    {
    {      CHECK(blob_dims == blob->shape()) << 'Cannot load blob from hdf5; shape '
            << 'mismatch. Source shape is ' << source_shape_string
            << ' target shape is ' << blob->shape_string();
    }
  }
}
    
      /**
   * @brief For an already initialized net, implicitly copies (i.e., using no
   *        additional memory) the pre-trained layers from another Net.
   */
  void ShareTrainedLayersWith(const Net* other);
  // For an already initialized net, CopyTrainedLayersFrom() copies the already
  // trained layers from another net parameter instance.
  /**
   * @brief For an already initialized net, copies the pre-trained layers from
   *        another Net.
   */
  void CopyTrainedLayersFrom(const NetParameter& param);
  void CopyTrainedLayersFrom(const string& trained_filename);
  void CopyTrainedLayersFromBinaryProto(const string& trained_filename);
  void CopyTrainedLayersFromHDF5(const string& trained_filename);
  /// @brief Writes the net to a proto.
  void ToProto(NetParameter* param, bool write_diff = false) const;
  /// @brief Writes the net to an HDF5 file.
  void ToHDF5(const string& filename, bool write_diff = false) const;
    
    using std::min;
using std::max;
    
        for (int i = 0; i < callbacks_.size(); ++i) {
      callbacks_[i]->on_start();
    }
    const bool display = param_.display() && iter_ % param_.display() == 0;
    net_->set_debug_info(display && param_.debug_info());
    // accumulate the loss and gradient
    Dtype loss = 0;
    for (int i = 0; i < param_.iter_size(); ++i) {
      loss += net_->ForwardBackward();
    }
    loss /= param_.iter_size();
    // average the loss across iterations for smoothed reporting
    UpdateSmoothedLoss(loss, start_iter, average_loss);
    if (display) {
      float lapse = iteration_timer_.Seconds();
      float per_s = (iter_ - iterations_last_) / (lapse ? lapse : 1);
      LOG_IF(INFO, Caffe::root_solver()) << 'Iteration ' << iter_
          << ' (' << per_s << ' iter/s, ' << lapse << 's/'
          << param_.display() << ' iters), loss = ' << smoothed_loss_;
      iteration_timer_.Start();
      iterations_last_ = iter_;
      const vector<Blob<Dtype>*>& result = net_->output_blobs();
      int score_index = 0;
      for (int j = 0; j < result.size(); ++j) {
        const Dtype* result_vec = result[j]->cpu_data();
        const string& output_name =
            net_->blob_names()[net_->output_blob_indices()[j]];
        const Dtype loss_weight =
            net_->blob_loss_weights()[net_->output_blob_indices()[j]];
        for (int k = 0; k < result[j]->count(); ++k) {
          ostringstream loss_msg_stream;
          if (loss_weight) {
            loss_msg_stream << ' (* ' << loss_weight
                            << ' = ' << loss_weight * result_vec[k] << ' loss)';
          }
          LOG_IF(INFO, Caffe::root_solver()) << '    Train net output #'
              << score_index++ << ': ' << output_name << ' = '
              << result_vec[k] << loss_msg_stream.str();
        }
      }
    }
    for (int i = 0; i < callbacks_.size(); ++i) {
      callbacks_[i]->on_gradients_ready();
    }
    ApplyUpdate();
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {    auto* server_rpc_info = call_->server_rpc_info();
    if (server_rpc_info == nullptr ||
        server_rpc_info->interceptors_.size() == 0) {
      return true;
    }
    RunServerInterceptors();
    return false;
  }
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    static void iomgr_platform_init(void) {
  winsock_init();
  grpc_iocp_init();
  grpc_pollset_global_init();
  grpc_wsa_socket_flags_init();
}
    
    static void async_connect_unlock_and_cleanup(async_connect* ac,
                                             grpc_winsocket* socket) {
  int done = (--ac->refs == 0);
  gpr_mu_unlock(&ac->mu);
  if (done) {
    grpc_channel_args_destroy(ac->channel_args);
    gpr_mu_destroy(&ac->mu);
    gpr_free(ac->addr_name);
    gpr_free(ac);
  }
  if (socket != NULL) grpc_winsocket_destroy(socket);
}
    
    #define GPR_GLOBAL_CONFIG_DEFINE_STRING(name, default_value, help)         \
  static char g_env_str_##name[] = #name;                                  \
  static ::grpc_core::GlobalConfigEnvString g_env_##name(g_env_str_##name, \
                                                         default_value);   \
  ::grpc_core::UniquePtr<char> gpr_global_config_get_##name() {            \
    return g_env_##name.Get();                                             \
  }                                                                        \
  void gpr_global_config_set_##name(const char* value) {                   \
    g_env_##name.Set(value);                                               \
  }
    
    namespace grpc {
    }
    
    namespace grpc {
    }
    
    #include 'src/proto/grpc/testing/duplicate/echo_duplicate.grpc.pb.h'
#include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'src/proto/grpc/testing/echo_mock.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
    
    
    {}  // namespace
    
      void ResetStub() {
    string target = 'dns:localhost:' + to_string(port_);
    std::shared_ptr<Channel> channel =
        grpc::CreateChannel(target, InsecureChannelCredentials());
    stub_ = grpc::testing::EchoTestService::NewStub(channel);
    desc_db_.reset(new ProtoReflectionDescriptorDatabase(channel));
    desc_pool_.reset(new protobuf::DescriptorPool(desc_db_.get()));
  }
    
    #include 'hphp/runtime/vm/jit/phys-reg.h'
#include 'hphp/runtime/vm/jit/vasm.h'
#include 'hphp/runtime/vm/jit/vasm-emit.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-print.h'
#include 'hphp/runtime/vm/jit/vasm-text.h'
#include 'hphp/runtime/vm/jit/vasm-unit.h'
    
    bool is_aligned(TCA frontier, Alignment alignment) {
  return jit::is_aligned<AlignImpl>(frontier, alignment);
}
    
    int64_t BZ2File::readImpl(char * buf, int64_t length) {
  if (length == 0) {
    return 0;
  }
  assertx(m_bzFile);
  int len = BZ2_bzread(m_bzFile, buf, length);
  /* Sometimes libbz2 will return fewer bytes than requested, and set bzerror
   * to BZ_STREAM_END, but it's not actually EOF, and you can keep reading from
   * the file - so, only set EOF after a failed read. This matches PHP5.
   */
  if (len <= 0) {
    setEof(true);
    if (len < 0) {
      return 0;
    }
  }
  return len;
}
    
    struct StandardExtension final : Extension {
  StandardExtension() : Extension('standard') {}
    }
    
    ///////////////////////////////////////////////////////////////////////////////
// stream sockets: ext_socket has better implementation of socket functions
    
    bool ZipFile::closeImpl() {
  bool ret = true;
  *s_pcloseRet = 0;
  if (!isClosed()) {
    if (m_gzFile) {
      *s_pcloseRet = gzclose(m_gzFile);
      ret = (*s_pcloseRet == 0);
      m_gzFile = nullptr;
    }
    setIsClosed(true);
    if (m_innerFile) {
      m_innerFile->close();
    }
    if (m_tempFile) {
      m_tempFile->close();
      m_tempFile.reset();
    }
  }
  File::closeImpl();
  return ret;
}
    
      Array arr;
  EXPECT_TRUE(arr.empty());
  EXPECT_TRUE(arr.size() == 0);
  EXPECT_TRUE(arr.length() == 0);
  EXPECT_TRUE(arr.isNull());
  EXPECT_TRUE(arr.isPHPArray());
  EXPECT_FALSE(arr.isHackArray());
    
    #include 'common.h'
    
    void DHTRoutingTableSerializer::setLocalNode(
    const std::shared_ptr<DHTNode>& localNode)
{
  localNode_ = localNode;
}
    
    
    {} // namespace aria2
    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
    
    { private:
  Heap& heap_;
};
    
    void StressScavengeObserver::RequestedGCDone() {
  double current_percent =
      heap_.new_space()->Size() * 100.0 / heap_.new_space()->Capacity();
  limit_percentage_ = NextLimit(static_cast<int>(current_percent));
    }
    
    
void Assembler::bind_to(Label* L, int pos) {
  EnsureSpace ensure_space(this);
  DCHECK(0 <= pos && pos <= pc_offset());  // must have a valid binding position
  while (L->is_linked()) {
    Displacement disp = disp_at(L);
    int fixup_pos = L->pos();
    if (disp.type() == Displacement::CODE_ABSOLUTE) {
      long_at_put(fixup_pos, reinterpret_cast<int>(buffer_start_ + pos));
      internal_reference_positions_.push_back(fixup_pos);
    } else if (disp.type() == Displacement::CODE_RELATIVE) {
      // Relative to Code heap object pointer.
      long_at_put(fixup_pos, pos + Code::kHeaderSize - kHeapObjectTag);
    } else {
      if (disp.type() == Displacement::UNCONDITIONAL_JUMP) {
        DCHECK_EQ(byte_at(fixup_pos - 1), 0xE9);  // jmp expected
      }
      // Relative address, relative to point after address.
      int imm32 = pos - (fixup_pos + sizeof(int32_t));
      long_at_put(fixup_pos, imm32);
    }
    disp.next(L);
  }
  while (L->is_near_linked()) {
    int fixup_pos = L->near_link_pos();
    int offset_to_next =
        static_cast<int>(*reinterpret_cast<int8_t*>(addr_at(fixup_pos)));
    DCHECK_LE(offset_to_next, 0);
    // Relative address, relative to point after address.
    int disp = pos - fixup_pos - sizeof(int8_t);
    CHECK(0 <= disp && disp <= 127);
    set_byte_at(fixup_pos, disp);
    if (offset_to_next < 0) {
      L->link_to(fixup_pos + offset_to_next, Label::kNear);
    } else {
      L->UnuseNear();
    }
  }
    }
    
    class ExitFrameConstants : public TypedFrameConstants {
 public:
  static constexpr int kSPOffset = TYPED_FRAME_PUSHED_VALUE_OFFSET(0);
  static constexpr int kCodeOffset = TYPED_FRAME_PUSHED_VALUE_OFFSET(1);
  DEFINE_TYPED_FRAME_SIZES(2);
    }
    
    void CallInterfaceDescriptor::DefaultInitializePlatformSpecific(
    CallInterfaceDescriptorData* data, int register_parameter_count) {
  constexpr Register default_stub_registers[] = {eax, ecx, edx, edi};
  STATIC_ASSERT(arraysize(default_stub_registers) == kMaxBuiltinRegisterParams);
  CHECK_LE(static_cast<size_t>(register_parameter_count),
           arraysize(default_stub_registers));
  data->InitializePlatformSpecific(register_parameter_count,
                                   default_stub_registers);
}
    
    void TurboAssembler::ShlPair_cl(Register high, Register low) {
  shld_cl(high, low);
  shl_cl(low);
  Label done;
  test(ecx, Immediate(0x20));
  j(equal, &done, Label::kNear);
  mov(high, low);
  xor_(low, low);
  bind(&done);
}
    
    
    {        // Perform a floating point operation.
        var_float_lhs.Bind(SmiToFloat64(lhs));
        var_float_rhs.Bind(LoadHeapNumberValue(rhs));
        Goto(&do_float_operation);
      }
    
    #if GTEST_HAS_SEH && !GTEST_OS_WINDOWS_MOBILE
// On Windows Mobile global exception handlers are not supported.
LONG WINAPI ExitWithExceptionCode(
    struct _EXCEPTION_POINTERS* exception_pointers) {
  exit(exception_pointers->ExceptionRecord->ExceptionCode);
}
#endif
    
      if (strcmp(flag, 'repeat') == 0) {
    cout << GTEST_FLAG(repeat);
    return;
  }
    
    //
// Unit test for gtest_prod.h.
    
    
    {}  // namespace
