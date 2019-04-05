
        
          if (conformanceSig) {
    for (auto &rawReq : conformanceSig->getRequirements()) {
      if (auto req = rawReq.subst(conformanceToSyntheticTypeFn,
                                  conformanceToSyntheticConformanceFn))
        builder.addRequirement(*req, source, nullptr);
    }
  }
    
    
    {  return true;
}

    
    
    {  cache_t *cache_out = nullptr;
  cache_create(NameBuf.c_str(), &Attrs, &cache_out);
  assert(cache_out);
  return cache_out;
}
    
    /// Find the last preposition in the given word.
static ReverseWordIterator findLastPreposition(ReverseWordIterator first,
                                               ReverseWordIterator last,
                                               bool recursive = false) {
  // Find the last preposition.
  auto result =
    std::find_if(first, last,
                 [](StringRef word) {
                   return getPartOfSpeech(word) == PartOfSpeech::Preposition;
                 });
    }
    
    % for start_code_point, end_code_point, value in break_table.property_value_ranges:
%   if start_code_point == 0:
  if (C <= ${end_code_point})
%   else:
  if (C >= ${start_code_point} && C <= ${end_code_point})
%   end
    return GraphemeClusterBreakProperty::${value};
% end
    
    // Import As Member -- attempt to import C global functions and variables as
// members on types or instances.
    
    void ModuleWrapJobAction::anchor() {}
    
      /// If provided, and if the user has not already explicitly specified a
  /// linker to use via the '-fuse-ld=' option, this linker will be passed to
  /// the compiler invocation via '-fuse-ld='. Return an empty string to not
  /// specify any specific linker (the '-fuse-ld=' option will not be
  /// specified).
  ///
  /// The default behavior is to use the gold linker on ARM architectures,
  /// and to not provide a specific linker otherwise.
  virtual std::string getDefaultLinker() const;
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    static void secp256k1_sha256_write(secp256k1_sha256_t *hash, const unsigned char *data, size_t len) {
    size_t bufsize = hash->bytes & 0x3F;
    hash->bytes += len;
    while (bufsize + len >= 64) {
        /* Fill the buffer, and process it. */
        memcpy(((unsigned char*)hash->buf) + bufsize, data, 64 - bufsize);
        data += 64 - bufsize;
        len -= 64 - bufsize;
        secp256k1_sha256_transform(hash->s, hash->buf);
        bufsize = 0;
    }
    if (len) {
        /* Fill the buffer with what remains. */
        memcpy(((unsigned char*)hash->buf) + bufsize, data, len);
    }
}
    
        secp256k1_context_set_error_callback(tctx, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(tctx, counting_illegal_callback_fn, &ecount);
    CHECK(secp256k1_ec_pubkey_create(tctx, &point, s_one) == 1);
    
    
    {    /* Serialize/parse compact and verify/recover. */
    extra[0] = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[0], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign(ctx, &signature[0], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[4], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[1], message, privkey, NULL, extra) == 1);
    extra[31] = 1;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[2], message, privkey, NULL, extra) == 1);
    extra[31] = 0;
    extra[0] = 1;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[3], message, privkey, NULL, extra) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(ctx, sig, &recid, &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(memcmp(&signature[4], &signature[0], 64) == 0);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 1);
    memset(&rsignature[4], 0, sizeof(rsignature[4]));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 1);
    /* Parse compact (with recovery id) and recover. */
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recover(ctx, &recpubkey, &rsignature[4], message) == 1);
    CHECK(memcmp(&pubkey, &recpubkey, sizeof(pubkey)) == 0);
    /* Serialize/destroy/parse signature and verify again. */
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(ctx, sig, &recid, &rsignature[4]) == 1);
    sig[secp256k1_rand_bits(6)] += 1 + secp256k1_rand_int(255);
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 0);
    /* Recover again */
    CHECK(secp256k1_ecdsa_recover(ctx, &recpubkey, &rsignature[4], message) == 0 ||
          memcmp(&pubkey, &recpubkey, sizeof(pubkey)) != 0);
}
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    // private
int GzipOutputStream::Deflate(int flush) {
  int error = Z_OK;
  do {
    if ((sub_data_ == NULL) || (zcontext_.avail_out == 0)) {
      bool ok = sub_stream_->Next(&sub_data_, &sub_data_size_);
      if (!ok) {
        sub_data_ = NULL;
        sub_data_size_ = 0;
        return Z_BUF_ERROR;
      }
      GOOGLE_CHECK_GT(sub_data_size_, 0);
      zcontext_.next_out = static_cast<Bytef*>(sub_data_);
      zcontext_.avail_out = sub_data_size_;
    }
    error = deflate(&zcontext_, flush);
  } while (error == Z_OK && zcontext_.avail_out == 0);
  if ((flush == Z_FULL_FLUSH) || (flush == Z_FINISH)) {
    // Notify lower layer of data.
    sub_stream_->BackUp(zcontext_.avail_out);
    // We don't own the buffer anymore.
    sub_data_ = NULL;
    sub_data_size_ = 0;
  }
  return error;
}
    
    TEST(StatusOr, TestPointerCopyCtorStatusOKConverting) {
  Derived derived;
  StatusOr<Derived*> original(&derived);
  StatusOr<Base2*>   copy(original);
  EXPECT_EQ(original.status(), copy.status());
  EXPECT_EQ(static_cast<const Base2*>(original.ValueOrDie()),
            copy.ValueOrDie());
}
    
    TEST(StructurallyValidTest, InvalidUTF8String) {
  const string invalid_str('abcd\xA0\xB0\xA0\xB0\xA0\xB0 - xyz789');
  EXPECT_FALSE(IsStructurallyValidUTF8(invalid_str.data(),
                                       invalid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_FALSE(IsStructurallyValidUTF8(invalid_str.data() + i,
                                         invalid_str.size() - i));
  }
}
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipInputStream is compatible with command line
// gunzip or java.util.zip.GzipInputStream
//
// Reads gzip stream on standard input and writes decompressed data to standard
// output.
    
    #ifdef _WIN32
#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif
#endif
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
      /**
   * Called by SetUp to initialize the weights associated with any top blobs in
   * the loss function. Store non-zero loss weights in the diff blob.
   */
  inline void SetLossWeights(const vector<Blob<Dtype>*>& top) {
    const int num_loss_weights = layer_param_.loss_weight_size();
    if (num_loss_weights) {
      CHECK_EQ(top.size(), num_loss_weights) << 'loss_weight must be '
          'unspecified or specified once per top blob.';
      for (int top_id = 0; top_id < top.size(); ++top_id) {
        const Dtype loss_weight = layer_param_.loss_weight(top_id);
        if (loss_weight == Dtype(0)) { continue; }
        this->set_loss(top_id, loss_weight);
        const int count = top[top_id]->count();
        Dtype* loss_multiplier = top[top_id]->mutable_cpu_diff();
        caffe_set(count, loss_weight, loss_multiplier);
      }
    }
  }
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    
    {}  // namespace caffe
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
    namespace caffe {
    }
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace grpc
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
      const protobuf::Descriptor* desc =
      descriptor_pool_->FindMessageTypeByName(request->containing_type());
  if (desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Type not found.');
  }
    
    #include 'unicode/scientificnumberformatter.h'
#include 'unicode/dcfmtsym.h'
#include 'unicode/fpositer.h'
#include 'unicode/utf16.h'
#include 'unicode/uniset.h'
#include 'decfmtst.h'
#include 'unicode/decimfmt.h'
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
    #include 'unicode/unistr.h'
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_BEGIN
    
        /**
     * Replace characters in 'text' from 'start' to 'limit' with the
     * output text of this object.  Update the 'cursor' parameter to
     * give the cursor position and return the length of the
     * replacement text.
     *
     * @param text the text to be matched
     * @param start inclusive start index of text to be replaced
     * @param limit exclusive end index of text to be replaced;
     * must be greater than or equal to start
     * @param cursor output parameter for the cursor position.
     * Not all replacer objects will update this, but in a complete
     * tree of replacer objects, representing the entire output side
     * of a transliteration rule, at least one must update it.
     * @return the number of 16-bit code units in the text replacing
     * the characters at offsets start..(limit-1) in text
     */
    virtual int32_t replace(Replaceable& text,
                            int32_t start,
                            int32_t limit,
                            int32_t& cursor);