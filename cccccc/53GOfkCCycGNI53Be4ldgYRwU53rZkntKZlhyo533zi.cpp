
        
          /// Get the execution count corresponding to \p Node from a profile, if one
  /// is available.
  ProfileCounter getExecutionCount(ASTNode Node);
    
      void collectMethodImplementations() {
    // Collect vtable method implementations.
    for (SILVTable &vTable : Module->getVTableList()) {
      for (const SILVTable::Entry &entry : vTable.getEntries()) {
        // We don't need to collect destructors because we mark them as alive
        // anyway.
        if (entry.Method.kind == SILDeclRef::Kind::Deallocator ||
            entry.Method.kind == SILDeclRef::Kind::IVarDestroyer) {
          continue;
        }
        SILFunction *F = entry.Implementation;
        auto *fd = getBase(cast<AbstractFunctionDecl>(entry.Method.getDecl()));
        MethodInfo *mi = getMethodInfo(fd, /*isWitnessTable*/ false);
        mi->addClassMethodImpl(F, vTable.getClass());
      }
    }
    }
    
    
    {  char *end;
  _set_errno(0);
  *result = _strtod_l(str, &end, getCLocale());
  if (*result == HUGE_VAL || *result == -HUGE_VAL || *result == 0.0 || *result == -0.0) {
    if (errno == ERANGE)
        end = nullptr;
  }
  return end;
}
    
    static int doDumpReflectionSections(ArrayRef<std::string> BinaryFilenames,
                                    StringRef Arch, ActionType Action,
                                    std::ostream &OS) {
  // Note: binaryOrError and objectOrError own the memory for our ObjectFile;
  // once they go out of scope, we can no longer do anything.
  std::vector<OwningBinary<Binary>> BinaryOwners;
  std::vector<std::unique_ptr<ObjectFile>> ObjectOwners;
  std::vector<const ObjectFile *> ObjectFiles;
    }
    
    /// The mangler for AST declarations.
class ASTMangler : public Mangler {
protected:
  CanGenericSignature CurGenericSignature;
  ModuleDecl *Mod = nullptr;
    }
    
    
    {}  // namespace caffe
#endif  // USE_HDF5

    
    #include 'gtest/gtest.h'
    
    TYPED_TEST(HDF5DataLayerTest, TestRead) {
  typedef typename TypeParam::Dtype Dtype;
  // Create LayerParameter with the known parameters.
  // The data file we are reading has 10 rows and 8 columns,
  // with values from 0 to 10*8 reshaped in row-major order.
  LayerParameter param;
  param.add_top('data');
  param.add_top('label');
  param.add_top('label2');
    }
    
    template <typename Dtype>
void ClipLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (propagate_down[0]) {
    const Dtype* bottom_data = bottom[0]->cpu_data();
    const Dtype* top_diff = top[0]->cpu_diff();
    Dtype* bottom_diff = bottom[0]->mutable_cpu_diff();
    const int count = bottom[0]->count();
    }
    }
    
    TYPED_TEST(CuDNNNeuronLayerTest, TestTanHGradientCuDNN) {
  LayerParameter layer_param;
  CuDNNTanHLayer<TypeParam> layer(layer_param);
  GradientChecker<TypeParam> checker(1e-2, 1e-3);
  checker.CheckGradientEltwise(&layer, this->blob_bottom_vec_,
      this->blob_top_vec_);
}
#endif
    
    #endif  // CAFFE_NET_HPP_

    
    template <typename Dtype>
void Net<Dtype>::BackwardFromTo(int start, int end) {
  CHECK_GE(end, 0);
  CHECK_LT(start, layers_.size());
  for (int i = start; i >= end; --i) {
    for (int c = 0; c < before_backward_.size(); ++c) {
      before_backward_[c]->run(i);
    }
    if (layer_need_backward_[i]) {
      layers_[i]->Backward(
          top_vecs_[i], bottom_need_backward_[i], bottom_vecs_[i]);
      if (debug_info_) { BackwardDebugInfo(i); }
    }
    for (int c = 0; c < after_backward_.size(); ++c) {
      after_backward_[c]->run(i);
    }
  }
}
    
    #include 'boost/algorithm/string.hpp'
#include 'caffe/solver.hpp'
#include 'caffe/util/format.hpp'
#include 'caffe/util/hdf5.hpp'
#include 'caffe/util/io.hpp'
#include 'caffe/util/upgrade_proto.hpp'
    
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
    
      inline const shared_ptr<SyncedMemory>& diff() const {
    CHECK(diff_);
    return diff_;
  }
    
    /**
 * @brief Fills a Blob with values @f$ x \sim N(0, \sigma^2) @f$ where
 *        @f$ \sigma^2 @f$ is set inversely proportional to number of incoming
 *        nodes, outgoing nodes, or their average.
 *
 * A Filler based on the paper [He, Zhang, Ren and Sun 2015]: Specifically
 * accounts for ReLU nonlinearities.
 *
 * Aside: for another perspective on the scaling factor, see the derivation of
 * [Saxe, McClelland, and Ganguli 2013 (v3)].
 *
 * It fills the incoming matrix by randomly sampling Gaussian data with std =
 * sqrt(2 / n) where n is the fan_in, fan_out, or their average, depending on
 * the variance_norm option. You should make sure the input blob has shape (num,
 * a, b, c) where a * b * c = fan_in and num * b * c = fan_out. Note that this
 * is currently not the case for inner product layers.
 */
template <typename Dtype>
class MSRAFiller : public Filler<Dtype> {
 public:
  explicit MSRAFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype std = sqrt(Dtype(2) / n);
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(0), std,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {}  // namespace grpc_impl

    
      void KeepSendingRequests() {
    gpr_log(GPR_INFO, 'Start sending requests.');
    while (!shutdown_) {
      ClientContext context;
      context.set_deadline(grpc_timeout_milliseconds_to_deadline(1000));
      EchoRequest request;
      request.set_message('test');
      EchoResponse response;
      {
        std::lock_guard<std::mutex> lock(stub_mutex_);
        Status status = stub_->Echo(&context, request, &response);
      }
    }
    gpr_log(GPR_INFO, 'Finish sending requests.');
  }
    
    
    {  std::string credentials_type_list('credentials types:');
  for (const string& type : credentials_types) {
    credentials_type_list.append(' ' + type);
  }
  gpr_log(GPR_INFO, '%s', credentials_type_list.c_str());
  return credentials_types;
}
    
    class GlobalConfigEnvString : public GlobalConfigEnv {
 public:
  constexpr GlobalConfigEnvString(char* name, const char* default_value)
      : GlobalConfigEnv(name), default_value_(default_value) {}
    }
    
    #include 'test/core/util/test_config.h'
    
      EXPECT_FALSE(IsConfigErrorCalled());
    
      std::shared_ptr<grpc::Channel> CreateChannelImpl(
      const string& target, const grpc::ChannelArguments& args) override {
    return CreateChannelWithInterceptors(
        target, args,
        std::vector<std::unique_ptr<
            experimental::ClientInterceptorFactoryInterface>>());
  }
    
      void SetUp() override {
    port_ = grpc_pick_unused_port_or_die();
    ref_desc_pool_ = protobuf::DescriptorPool::generated_pool();
    }
    
      void ResetStub() {
    string target = 'dns:localhost:' + to_string(port_);
    channel_ = grpc::CreateChannel(target, InsecureChannelCredentials());
    stub_ = grpc::testing::EchoTestService::NewStub(channel_);
  }
    
    void deletePrefResource() { delete getPrefFactory(); }
    
      DHTRegistry();
    
      int numRetry_;
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
    #include 'DHTNode.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'fmt.h'
#include 'util.h'
#include 'array_fun.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
          {
        auto iter = OpenTransactionLogIter(0);
        ExpectRecords(4, iter);
      }
    
      BlobCompactionContext context;
  blob_db_impl_->GetCompactionContext(&context);
    
    
    {  const char* Name() const override { return 'PutOperator'; }
};
    
    
    {}  // namespace rocksdb
    
    
    {  virtual std::string GetPrintableOptions() const = 0;
};
    
      // If non-NULL, use the specified filter policy to reduce disk reads.
  // Many applications will benefit from passing the result of
  // NewBloomFilterPolicy() here.
  //
  // Default: NULL
  const FilterPolicy* filter_policy;