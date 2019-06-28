
        
          // Build a substitution map to replace the protocol's \c Self and the type
  // parameters of the requirement into a combined context that provides the
  // type parameters of the conformance context and the parameters of the
  // requirement.
  auto selfType = cast<GenericTypeParamType>(
      proto->getSelfInterfaceType()->getCanonicalType());
    
    
    {  assert(*BufferPtr == '\r');
  unsigned Bytes = 1;
  if (BufferPtr != BufferEnd && *BufferPtr == '\n')
    Bytes++;
  return Bytes;
}
    
    %{
    }
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    std::string Demangle::getNodeTreeAsString(NodePointer Root) {
  DemanglerPrinter Printer;
  printNode(Printer, Root, 0);
  return std::move(Printer).str();
}
    
    
    {  // let h = b = the number of basic code points in the input
  // copy them to the output in order...
  size_t h = 0;
  for (auto C : InputCodePoints) {
    if (C < 0x80) {
      ++h;
      OutPunycode.push_back(C);
    }
    if (!isValidUnicodeScalar(C)) {
      OutPunycode.clear();
      return false;
    }
  }
  size_t b = h;
  // ...followed by a delimiter if b > 0
  if (b > 0)
    OutPunycode.push_back(delimiter);
  
  while (h < InputCodePoints.size()) {
    // let m = the minimum code point >= n in the input
    uint32_t m = 0x10FFFF;
    for (auto codePoint : InputCodePoints) {
      if (codePoint >= n && codePoint < m)
        m = codePoint;
    }
    
    delta = delta + (m - n) * (h + 1);
    n = m;
    for (auto c : InputCodePoints) {
      if (c < n) ++delta;
      if (c == n) {
        int q = delta;
        for (int k = base; ; k += base) {
          int t = k <= bias ? tmin
                : k >= bias + tmax ? tmax
                : k - bias;
          
          if (q < t) break;
          OutPunycode.push_back(digit_value(t + ((q - t) % (base - t))));
          q = (q - t) / (base - t);
        }
        OutPunycode.push_back(digit_value(q));
        bias = adapt(delta, h + 1, h == b);
        delta = 0;
        ++h;
      }
    }
    ++delta; ++n;
  }
  return true;
}
    
      /// A place to keep alive any buffers that are loaded as part of setting up
  /// the frontend inputs.
  SmallVector<std::unique_ptr<llvm::MemoryBuffer>, 4> ConfigurationFileBuffers;
    
        /*
        Extract a single plane from 3 channel image
    */
    void extract3(const Size2D &size,
                  const u8 * srcBase, ptrdiff_t srcStride,
                  u8 * dstBase, ptrdiff_t dstStride,
                  u32 coi);
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vadd(v_src0, v_src1);
    }
    
    struct BitwiseAnd
{
    typedef u8 type;
    }
    
    namespace internal {
    }
    
    void makeOffsets(ptrdiff_t pixel[], ptrdiff_t row_stride)
{
    pixel[0] = 0 + row_stride * 3;
    pixel[1] = 1 + row_stride * 3;
    pixel[2] = 2 + row_stride * 2;
    pixel[3] = 3 + row_stride * 1;
    pixel[4] = 3 + row_stride * 0;
    pixel[5] = 3 + row_stride * -1;
    pixel[6] = 2 + row_stride * -2;
    pixel[7] = 1 + row_stride * -3;
    pixel[8] = 0 + row_stride * -3;
    pixel[9] = -1 + row_stride * -3;
    pixel[10] = -2 + row_stride * -2;
    pixel[11] = -3 + row_stride * -1;
    pixel[12] = -3 + row_stride * 0;
    pixel[13] = -3 + row_stride * 1;
    pixel[14] = -2 + row_stride * 2;
    pixel[15] = -1 + row_stride * 3;
}
    
    
    {}
    
    #ifndef CAROTENE_INTRINSICS_HPP
#define CAROTENE_INTRINSICS_HPP
    
    
    {
    {        for( ; x < cols; x++ )
        {
            s16 nextx;
            s16 prevx;
            // make border
            if (border == BORDER_MODE_REPLICATE || border == BORDER_MODE_REFLECT)
            {
                prevx = x == 0 ? v1[0] : v1[x-1];
                nextx = x == cols-1 ? v1[x] : v1[x+1];
            }
            else if (border == BORDER_MODE_REFLECT101)
            {
                prevx = x == 0 ? v1[1] : v1[x-1];
                nextx = x == cols-1 ? v1[x-1] : v1[x+1];
            }
            else //if (border == BORDER_MODE_CONSTANT)
            {
                prevx = x == 0 ? borderValue : v1[x-1];
                nextx = x == cols-1 ? borderValue : v1[x+1];
            }
            *(drow+x) = prevx + nextx - 4*v1[x] + v0[x] + v2[x];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)border;
    (void)borderValue;
#endif
}
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    namespace grpc {
    }
    
    #endif  // !GRPC_CUSTOM_DEFAULT_THREAD_POOL

    
    LoadRecordKey::LoadRecordKey(const grpc::string& client_ip_and_token,
                             grpc::string user_id)
    : user_id_(std::move(user_id)) {
  GPR_ASSERT(client_ip_and_token.size() >= 2);
  int ip_hex_size;
  GPR_ASSERT(sscanf(client_ip_and_token.substr(0, 2).c_str(), '%d',
                    &ip_hex_size) == 1);
  GPR_ASSERT(ip_hex_size == 0 || ip_hex_size == kIpv4AddressLength ||
             ip_hex_size == kIpv6AddressLength);
  size_t cur_pos = 2;
  client_ip_hex_ = client_ip_and_token.substr(cur_pos, ip_hex_size);
  cur_pos += ip_hex_size;
  if (client_ip_and_token.size() - cur_pos < kLbIdLength) {
    lb_id_ = kInvalidLbId;
    lb_tag_ = '';
  } else {
    lb_id_ = client_ip_and_token.substr(cur_pos, kLbIdLength);
    lb_tag_ = client_ip_and_token.substr(cur_pos + kLbIdLength);
  }
}
    
    // This is expected to be called when a binary op in the last say 1+2+ is changing to another one say 1+2* (+ changed to *)
// It needs to know by this change a Precedence inversion happened. i.e. previous op was lower or equal to its previous op, but the new
// one isn't. (Eg. 1*2* to 1*2^). It can add explicit brackets to ensure the precedence is inverted. (Eg. (1*2) ^)
void CHistoryCollector::ChangeLastBinOp(int nOpCode, bool fPrecInvToHigher)
{
    TruncateEquationSzFromIch(m_lastBinOpStartIndex);
    if (fPrecInvToHigher)
    {
        EnclosePrecInversionBrackets();
    }
    AddBinOpToHistory(nOpCode);
}
    
    namespace CalcEngine
{
    Number::Number() noexcept
        : Number(1, 0, { 0 })
    {
    }
    }
    
    void CCalcEngine::InitChopNumbers()
{
    // these rat numbers are set only once and then never change regardless of
    // base or precision changes
    assert(m_chopNumbers.size() >= 4);
    m_chopNumbers[0] = Rational{ rat_qword };
    m_chopNumbers[1] = Rational{ rat_dword };
    m_chopNumbers[2] = Rational{ rat_word };
    m_chopNumbers[3] = Rational{ rat_byte };
    }
    
    CUnaryCommand::CUnaryCommand(int command1, int command2)
{
    m_command = make_shared<CalculatorVector<int>>();
    m_command->Append(command1);
    m_command->Append(command2);
}
    
    using namespace CalculatorApp::Common::Automation;
using namespace Windows::Foundation::Metadata;
using namespace Windows::UI::Xaml::Automation;
using namespace Windows::UI::Xaml::Automation::Peers;
using namespace Windows::UI::Xaml::Controls;
    
    class CaffeDataIterWrapper : public PrefetcherIter {
 public:
  CaffeDataIterWrapper() : PrefetcherIter(NULL), next_time_(0) {}
  virtual ~CaffeDataIterWrapper() {
    IF_CHECK_TIMING(
      if (next_time_.load() > 0) {
        LOG(WARNING) << 'Caffe data loader was blocked for '
                     << next_time_.load()
                     << ' ms waiting for incoming data';
      }
    )
  }
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    // We need to init prefetcher args in order to get dtype
    this->param_.InitAllowUnknown(kwargs);
    if (!this->param_.dtype) this->param_.dtype = mshadow::kFloat32;
    switch (this->param_.dtype.value()) {
      case mshadow::kFloat32:
        this->loader_.reset(new CaffeDataIter<float>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat64:
        this->loader_.reset(new CaffeDataIter<double>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat16:
        LOG(FATAL) << 'float16 layer is not supported by caffe';
        return;
      default:
        LOG(FATAL) << 'Unsupported type ' << this->param_.dtype.value();
        return;
    }
    PrefetcherIter::Init(kwargs);
    this->param_.prefetch_buffer = 1;
  }
  virtual void BeforeFirst(void) {
    return PrefetcherIter::BeforeFirst();
  }
  virtual bool Next(void) {
    IF_CHECK_TIMING(
      const uint64_t start_time = GetTickCountMS();
    )
    const bool rc = PrefetcherIter::Next();
    IF_CHECK_TIMING(
      const uint64_t diff_time  = GetTickCountMS() - start_time;
      next_time_.fetch_add(diff_time);
    )
    return rc;
  }
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
    inline void Quantize2BitImpl(mshadow::Stream<mshadow::cpu> *s,
                             const std::vector<mxnet::TBlob> &inputs,
                             const float threshold) {
  Quantize2BitKernelLaunch(s, inputs, threshold);
}
    
    // relu
MXNET_OPERATOR_REGISTER_UNARY(_contrib_div_sqrt_dim)
.describe(R'code(Rescale the input by the square root of the channel dimension.
    
    namespace mxnet {
namespace op {
template<typename DType>
class CuDNNLocalResponseNormOp : public Operator {
 public:
  explicit CuDNNLocalResponseNormOp(LRNParam param) {
    param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
  }
    }
    }
    }
    
      for (auto& blob : in_data) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(0);
  }
  for (auto& blob : out_data) {
    NDArray* nd = new NDArray(blob, ndctx.dev_id);
    ptrs.push_back(reinterpret_cast<void*>(nd));
    ndvar.push_back(nd->var());
    tags.push_back(1);
  }
  std::sort(ndvar.begin(), ndvar.end());
  ndvar.resize(std::unique(ndvar.begin(), ndvar.end()) - ndvar.begin());
    
    
    { private:
  int size_;
  int dimension_;
};  // class ConcatOp
    
    
    {  static void setInitialized6(bool f) { data6_.initialized = f; }
};
    
    
    {} // namespace aria2

    
      virtual std::shared_ptr<DHTTask> createPeerLookupTask(
      const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
      const std::shared_ptr<PeerStorage>& peerStorage) CXX11_OVERRIDE;