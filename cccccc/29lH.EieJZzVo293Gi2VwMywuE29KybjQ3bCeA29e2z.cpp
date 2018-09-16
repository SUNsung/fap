
        
        PlatformKind swift::targetPlatform(LangOptions &LangOpts) {
  if (LangOpts.Target.isMacOSX()) {
    return (LangOpts.EnableAppExtensionRestrictions
                ? PlatformKind::OSXApplicationExtension
                : PlatformKind::OSX);
  }
    }
    
    using namespace swift;
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
      static ProcessId Pid = 0;
    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}
    
    /** @brief Fills a Blob with values @f$ x \in [0, 1] @f$
 *         such that @f$ \forall i \sum_j x_{ij} = 1 @f$.
 */
template <typename Dtype>
class PositiveUnitballFiller : public Filler<Dtype> {
 public:
  explicit PositiveUnitballFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    DCHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), 0, 1, blob->mutable_cpu_data());
    // We expect the filler to not be called very frequently, so we will
    // just use a simple implementation
    int dim = blob->count() / blob->shape(0);
    CHECK(dim);
    for (int i = 0; i < blob->shape(0); ++i) {
      Dtype sum = 0;
      for (int j = 0; j < dim; ++j) {
        sum += data[i * dim + j];
      }
      for (int j = 0; j < dim; ++j) {
        data[i * dim + j] /= sum;
      }
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      /**
   * @brief Returns the exact number of bottom blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of bottom blobs.
   */
  virtual inline int ExactNumBottomBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of bottom blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of bottom blobs.
   */
  virtual inline int MinBottomBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of bottom blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of bottom blobs.
   */
  virtual inline int MaxBottomBlobs() const { return -1; }
  /**
   * @brief Returns the exact number of top blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of top blobs.
   */
  virtual inline int ExactNumTopBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of top blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of top blobs.
   */
  virtual inline int MinTopBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of top blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of top blobs.
   */
  virtual inline int MaxTopBlobs() const { return -1; }
  /**
   * @brief Returns true if the layer requires an equal number of bottom and
   *        top blobs.
   *
   * This method should be overridden to return true if your layer expects an
   * equal number of bottom and top blobs.
   */
  virtual inline bool EqualNumBottomTopBlobs() const { return false; }
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Abstract base class that factors out the BLAS code common to
 *        ConvolutionLayer and DeconvolutionLayer.
 */
template <typename Dtype>
class BaseConvolutionLayer : public Layer<Dtype> {
 public:
  explicit BaseConvolutionLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/data_transformer.hpp'
#include 'caffe/internal_thread.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/blocking_queue.hpp'
    
    
    {}  // namespace caffe
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_CUDNN_DECONV_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    #include <vector>
    
      SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
    
    std::shared_ptr<ChannelCredentials> InsecureChannelCredentials() {
  return std::shared_ptr<ChannelCredentials>(
      new InsecureChannelCredentialsImpl());
}
    
    
    { private:
  grpc_call_credentials* const c_creds_;
};
    
    #include <grpcpp/alarm.h>
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    size_t ServerStatsDeserialize(const char* buf, size_t buf_size,
                              uint64_t* server_elapsed_time) {
  return RpcServerStatsEncoding::Decode(absl::string_view(buf, buf_size),
                                        server_elapsed_time);
}
    
    void FilterInitialMetadata(grpc_metadata_batch* b,
                           ServerMetadataElements* sml) {
  if (b->idx.named.path != nullptr) {
    sml->path = grpc_slice_ref_internal(GRPC_MDVALUE(b->idx.named.path->md));
  }
  if (b->idx.named.grpc_trace_bin != nullptr) {
    sml->tracing_slice =
        grpc_slice_ref_internal(GRPC_MDVALUE(b->idx.named.grpc_trace_bin->md));
    grpc_metadata_batch_remove(b, b->idx.named.grpc_trace_bin);
  }
  if (b->idx.named.grpc_tags_bin != nullptr) {
    sml->census_proto =
        grpc_slice_ref_internal(GRPC_MDVALUE(b->idx.named.grpc_tags_bin->md));
    grpc_metadata_batch_remove(b, b->idx.named.grpc_tags_bin);
  }
}
    
    DEFINE_bool(populate_cache, false, 'Populate cache before operations');
DEFINE_int32(insert_percent, 40,
             'Ratio of insert to total workload (expressed as a percentage)');
DEFINE_int32(lookup_percent, 50,
             'Ratio of lookup to total workload (expressed as a percentage)');
DEFINE_int32(erase_percent, 10,
             'Ratio of erase to total workload (expressed as a percentage)');
    
      // State
  //
  // Points to a copy of the current compaction iterator output (current_key_)
  // if valid_.
  Slice key_;
  // Points to the value in the underlying iterator that corresponds to the
  // current output.
  Slice value_;
  // The status is OK unless compaction iterator encounters a merge operand
  // while not having a merge operator defined.
  Status status_;
  // Stores the user key, sequence number and type of the current compaction
  // iterator output (or current key in the underlying iterator during
  // NextFromInput()).
  ParsedInternalKey ikey_;
  // Stores whether ikey_.user_key is valid. If set to false, the user key is
  // not compared against the current key in the underlying iterator.
  bool has_current_user_key_ = false;
  bool at_next_ = false;  // If false, the iterator
  // Holds a copy of the current compaction iterator output (or current key in
  // the underlying iterator during NextFromInput()).
  IterKey current_key_;
  Slice current_user_key_;
  SequenceNumber current_user_key_sequence_;
  SequenceNumber current_user_key_snapshot_;
    
    #ifndef ROCKSDB_LITE
    
    #include <inttypes.h>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
    
    #include 'rocksdb/slice.h'
#include 'rocksdb/status.h'
    
      virtual Status RenameFile(const std::string& src,
                            const std::string& target) override;
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = db->Put(write_options, 'xyz', 'zzz');