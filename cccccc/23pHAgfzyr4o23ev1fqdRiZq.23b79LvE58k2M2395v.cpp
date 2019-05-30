
        
        public:
    explicit SignVerifyMessageDialog(const PlatformStyle *platformStyle, QWidget *parent);
    ~SignVerifyMessageDialog();
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
    int secp256k1_ecdsa_recoverable_signature_convert(const secp256k1_context* ctx, secp256k1_ecdsa_signature* sig, const secp256k1_ecdsa_recoverable_signature* sigin) {
    secp256k1_scalar r, s;
    int recid;
    }
    
    static int recovery_test_nonce_function(unsigned char *nonce32, const unsigned char *msg32, const unsigned char *key32, const unsigned char *algo16, void *data, unsigned int counter) {
    (void) msg32;
    (void) key32;
    (void) algo16;
    (void) data;
    }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& fname,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(fname);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
    #include <caffe/layer.hpp>
#include <caffe/blob.hpp>
#include <caffe/layer_factory.hpp>
    
    // these gpu functions are defined in gradient_compression.cu
void Quantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                      const float threshold);
void Dequantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                        const float threshold);
    
      /*!
  * \brief Issues quantize operation to be scheduled by the engine
  * Compresses `from` into `to` and accumulates the quantization error
  * into 'residual', using the quantization of type `type_`
  * \param from the ndarray containing original data to be quantized
  * \param to the target ndarray which contains quantized data
  * \param residual the ndarray which accumulates quantization error
  * \param priority Priority of the action.
  */
  void Quantize(const mxnet::NDArray &from, mxnet::NDArray *to,
                mxnet::NDArray *residual, const int priority);
    
    
template<>
void EvalRandom<DEVICE, ExponentialDistribution>(
    const real_t &lambda,
    const real_t &dummy,  // this is to satisfy the SampleOp lambda signature
    const Resource &resource,
    TBlob *ret,
    RunContext ctx) {
  typedef cpu xpu;  // No support for gpu for this distribution.
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  switch (ret->type_flag_) {
  case mshadow::kFloat32:
    {
      mshadow::Random<xpu, float> *prnd = resource.get_random<xpu, float>(s);
      mshadow::Tensor<xpu, 2, float> tmp = ret->FlatTo2D<xpu, float>(s);
      prnd->SampleExponential(&tmp, float(lambda));  // NOLINT(*)
      break;
    }
  case mshadow::kFloat64:
    {
      mshadow::Random<xpu, double> *prnd = resource.get_random<xpu, double>(s);
      mshadow::Tensor<xpu, 2, double> tmp = ret->FlatTo2D<xpu, double>(s);
      prnd->SampleExponential(&tmp, double(lambda));  // NOLINT(*)
      break;
    }
  default:
    LOG(FATAL) << 'Random only support float32 and float64';
  }
}
    
    
    {    size_t const_loc_ptr = 0;
    for (int i = 0; i < args.size(); ++i) {
      if (args.type_codes[i] == kTVMNDArrayTypeCode) {
        const NDArray& nd =
            static_cast<NDArray*>(args.values[i].v_handle)[0];
        // We cannot set the value until
        type_codes_[i] = kArrayHandle;
        array_data_.push_back(nd);
        array_loc_.push_back(i);
        // check if there is read or mutate
        // by default assume we mutate the array.
        if (const_loc_ptr < const_loc.size() &&
            i == const_loc[const_loc_ptr]) {
          const_vars->push_back(nd.var());
          ++const_loc_ptr;
        } else {
          mutate_vars->push_back(nd.var());
        }
      } else {
        CHECK_LT(args.type_codes[i], kTVMType)
            << 'Only allow POD type in mxnet async call';
      }
    }
  }
    
    
    {  Stream<xpu> *stream = ctx.get_stream<xpu>();
  Tensor<xpu, 2, DType> out = out_data[0].get<xpu, 2, DType>(stream);
  std::vector<Tensor<xpu, 2, DType> > ts_arr(in_data.size());
  std::transform(in_data.begin(), in_data.end(), ts_arr.begin(),
                 [&stream](TBlob blob) -> Tensor<xpu, 2, DType> {
                   return blob.get<xpu, 2, DType>(stream);
                 });
  khatri_rao(out, ts_arr);
}
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    using namespace mshadow::expr;
    CHECK_EQ(out_grad.size(), 1U);
    CHECK_EQ(in_data.size(), 1U);
    CHECK_EQ(out_data.size(), 2U);
    CHECK_EQ(req.size(), 1U);
    CHECK_EQ(in_grad.size(), 1U);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> grad = out_grad[lrn_enum::kOut].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> data = in_data[lrn_enum::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> output_data = out_data[lrn_enum::kOut].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> input_grad = in_grad[lrn_enum::kData].get<gpu, 4, DType>(s);
    CHECK_EQ(s->dnn_handle_ownership_, mshadow::Stream<gpu>::OwnHandle);
    CUDNN_CALL(cudnnLRNCrossChannelBackward(s->dnn_handle_,
                                            lrn_desc_,
                                            CUDNN_LRN_CROSS_CHANNEL_DIM1,
                                            &alpha,
                                            shape_desc_,
                                            output_data.dptr_,
                                            shape_desc_,
                                            grad.dptr_,
                                            shape_desc_,
                                            data.dptr_,
                                            &beta,
                                            shape_desc_,
                                            input_grad.dptr_));
  }
    
    #include <algorithm>
#include <vector>
#include './spatial_transformer-inl.h'
namespace mxnet {
namespace op {
#if defined(__CUDACC__) && MXNET_USE_CUDNN == 1 && CUDNN_MAJOR >= 5
template<typename DType>
class CuDNNSpatialTransformerOp : public Operator {
 public:
  explicit CuDNNSpatialTransformerOp(SpatialTransformerParam param) {
    this->param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
    if (param_.sampler_type == st::kBilinear) {
      sampler_ = CUDNN_SAMPLER_BILINEAR;
    }
  }
    }
    }
    }
    
    template<typename xpu>
void NDArrayOp<xpu>::Forward(const OpContext &ctx,
                   const std::vector<TBlob> &in_data,
                   const std::vector<OpReqType> &req,
                   const std::vector<TBlob> &out_data,
                   const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }