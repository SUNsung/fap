
        
        //Constructor automatically fixes orientation to ccw
b2Triangle::b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3){
	x = new float32[3];
	y = new float32[3];
	float32 dx1 = x2-x1;
	float32 dx2 = x3-x1;
	float32 dy1 = y2-y1;
	float32 dy2 = y3-y1;
	float32 cross = dx1*dy2-dx2*dy1;
	bool ccw = (cross>0);
	if (ccw){
		x[0] = x1; x[1] = x2; x[2] = x3;
		y[0] = y1; y[1] = y2; y[2] = y3;
	} else{
		x[0] = x1; x[1] = x3; x[2] = x2;
		y[0] = y1; y[1] = y3; y[2] = y2;
	}
}
    
b2Triangle::b2Triangle(){
	x = new float32[3];
	y = new float32[3];
}
    
    
    {			totalEncodingTime += image.GetEncodingTimeMs();
			}
    
    	struct RawImage
	{
		int uiExtendedWidth;
		int uiExtendedHeight;
		unsigned int uiEncodingBitsBytes;
		std::shared_ptr<unsigned char> paucEncodingBits;
	};
    
    		m_pimageSource = a_pimageSource;
		m_uiSourceH = a_uiSourceH;
		m_uiSourceV = a_uiSourceV;
		m_errormetric = a_errormetric;
    
    		void SetSourcePixels(void);
    
    			if (fDecodedLength < 0.5f)
			{
				return 1.0f;
			}
			else if (fDecodedLength == 0.0f)
			{
				fDecodedX = 1.0f;
				fDecodedY = 0.0f;
				fDecodedZ = 0.0f;
			}
			else
			{
				fDecodedX /= fDecodedLength;
				fDecodedY /= fDecodedLength;
				fDecodedZ /= fDecodedLength;
			}
    
    
    {	};
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    /** 16x16 multiply-add where the result fits in 32 bits */
#undef MAC16_16
static OPUS_INLINE opus_val32 MAC16_16_armv5e(opus_val32 c, opus_val16 a,
 opus_val16 b)
{
  int res;
  __asm__(
      '#MAC16_16\n\t'
      'smlabb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b), 'r'(c)
  );
  return res;
}
#define MAC16_16(c, a, b) (MAC16_16_armv5e(c, a, b))
    
    /** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#if OPUS_FAST_INT64
#define MULT16_32_Q15(a,b) ((opus_val32)SHR((opus_int64)((opus_val16)(a))*(b),15))
#else
#define MULT16_32_Q15(a,b) ADD32(SHL(MULT16_16((a),SHR((b),16)),1), SHR(MULT16_16SU((a),((b)&0x0000ffff)),15))
#endif
    
    AuthPropertyIterator::AuthPropertyIterator()
    : property_(nullptr), ctx_(nullptr), index_(0), name_(nullptr) {}
    
     private:
  // Parses the next field from the incoming buffer and stores the parsed value
  // in a GrpcTraceContext struct.  If it does not recognize the field ID it
  // will return 0, otherwise it returns the number of bytes read.
  static size_t ParseField(absl::string_view buf, GrpcTraceContext* tc) {
    // TODO: Add support for multi-byte field IDs.
    if (buf.empty()) {
      return 0;
    }
    // Field ID is always the first byte in a field.
    uint32_t field_id = buf[0];
    size_t bytes_read = kFieldIdSize;
    switch (field_id) {
      case kTraceIdField:
        bytes_read += kTraceIdSize;
        if (bytes_read > buf.size()) {
          return 0;
        }
        memcpy(tc->trace_id, &buf[kFieldIdSize],
               opencensus::trace::TraceId::kSize);
        break;
      case kSpanIdField:
        bytes_read += kSpanIdSize;
        if (bytes_read > buf.size()) {
          return 0;
        }
        memcpy(tc->span_id, &buf[kFieldIdSize],
               opencensus::trace::SpanId::kSize);
        break;
      case kTraceOptionsField:
        bytes_read += kTraceOptionsSize;
        if (bytes_read > buf.size()) {
          return 0;
        }
        memcpy(tc->trace_options, &buf[kFieldIdSize],
               opencensus::trace::TraceOptions::kSize);
        break;
      default:  // Invalid field ID
        return 0;
    }
    }
    
    #include 'absl/strings/string_view.h'
#include 'absl/time/clock.h'
#include 'absl/time/time.h'
#include 'include/grpc/grpc_security.h'
#include 'src/cpp/ext/filters/census/channel_filter.h'
#include 'src/cpp/ext/filters/census/context.h'
    
      protobuf::FileDescriptorProto file_desc_proto;
  grpc::string data;
  file_desc->CopyTo(&file_desc_proto);
  file_desc_proto.SerializeToString(&data);
  response->mutable_file_descriptor_response()->add_file_descriptor_proto(data);
    
      void FillFileDescriptorResponse(
      const protobuf::FileDescriptor* file_desc,
      reflection::v1alpha::ServerReflectionResponse* response,
      std::unordered_set<grpc::string>* seen_files);
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, int value) {
  class IntOption final : public ServerBuilderOption {
   public:
    IntOption(const grpc::string& name, int value)
        : name_(name), value_(value) {}
    }
    }
    
    void CoreStatsToProto(const grpc_stats_data& core, grpc::core::Stats* proto);
void ProtoToCoreStats(const grpc::core::Stats& proto, grpc_stats_data* core);
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
      for (auto& e : idx.outputs()) {
    ++ref_count[idx.entry_id(e)];
  }
  for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    for (auto &e : idx[nid].inputs) {
      ++ref_count[idx.entry_id(e)];
    }
  }
    
      ~PrefetcherIter() {
    while (recycle_queue_.size() != 0) {
      DataBatch *batch = recycle_queue_.front();
      recycle_queue_.pop();
      delete batch;
    }
    delete out_;
    iter.Destroy();
  }
    
    
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
    
      void Init(const TVMArgs& args,
            const std::vector<int>& const_loc,
            std::vector<Engine::VarHandle>* const_vars,
            std::vector<Engine::VarHandle>* mutate_vars) {
    values_.clear();
    type_codes_.clear();
    values_.insert(values_.end(), args.values, args.values + args.size());
    type_codes_.insert(
        type_codes_.end(), args.type_codes, args.type_codes + args.size());
    }
    
    /*!
 * \brief Moore-Penrose pseudoinverse of the Khatri-Rao product
 *
 * Given input matrices A_1, ..., A_n, of shape (l_1, k), ..., (l_n, k) respectively, the pseudoinverse of the Khatri-Rao product is
 *
 *   pinv(A_1 khatri-rao A_2 khatri-rao ... khatri-rao A_n) =
 *     ((A_1^T A_1) hadamard-dot ... hadamard-dot (A_n^T A_n))
 *     (A_1 khatri-rao ... khatri-rao A_n)^T
 *
 * As the first term of the r.h.s is a square matrix, the result is always of the same shape as the transpose of the Khatri-Rao product of the input matrices. The input argument ts_arr could contain the original input matrices, or transposed ones.
 *
 * \param out result matrix
 * \param ts_arr vector of input matrices
 * \param input_transposed if every input matrices is transposed
 */
template <typename DType>
inline void inv_khatri_rao
  (Tensor<cpu, 2, DType> out,
  const std::vector<Tensor<cpu, 2, DType> > &ts_arr,
  bool input_transposed = false) {
  CHECK_GE(ts_arr.size(), 1) << 'Input tensor array must be non-empty';
    }
    
    Operator* CropProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
      ~CuDNNSpatialTransformerOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroySpatialTransformerDescriptor(st_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(in_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(out_desc_));
    }
  }
    
    namespace mxnet {
namespace op {
template<>
Context NDArrayOp<cpu>::get_ctx() {
  return Context::CPU();
}
    }
    }
    
    
    {        if (fPattern->fFlags & UREGEX_UNIX_LINES) {
            for (;;) {
                c = inputBuf[startPos-1];
                if (c == 0x0a) {
                    MatchChunkAt(startPos, FALSE, status);
                    if (U_FAILURE(status)) {
                        return FALSE;
                    }
                    if (fMatch) {
                        return TRUE;
                    }
                }
                if (startPos >= testLen) {
                    fMatch = FALSE;
                    fHitEnd = TRUE;
                    return FALSE;
                }
                U16_FWD_1(inputBuf, startPos, fActiveLimit);
                // Note that it's perfectly OK for a pattern to have a zero-length
                //   match at the end of a string, so we must make sure that the loop
                //   runs with startPos == testLen the last time through.
                if  (findProgressInterrupt(startPos, status))
                    return FALSE;
            }
        } else {
            for (;;) {
                c = inputBuf[startPos-1];
                if (isLineTerminator(c)) {
                    if (c == 0x0d && startPos < fActiveLimit && inputBuf[startPos] == 0x0a) {
                        startPos++;
                    }
                    MatchChunkAt(startPos, FALSE, status);
                    if (U_FAILURE(status)) {
                        return FALSE;
                    }
                    if (fMatch) {
                        return TRUE;
                    }
                }
                if (startPos >= testLen) {
                    fMatch = FALSE;
                    fHitEnd = TRUE;
                    return FALSE;
                }
                U16_FWD_1(inputBuf, startPos, fActiveLimit);
                // Note that it's perfectly OK for a pattern to have a zero-length
                //   match at the end of a string, so we must make sure that the loop
                //   runs with startPos == testLen the last time through.
                if  (findProgressInterrupt(startPos, status))
                    return FALSE;
            }
        }
    }
    
    Transliterator* RemoveTransliterator::clone(void) const {
    Transliterator* result = new RemoveTransliterator();
    if (result != NULL && getFilter() != 0) {
        result->adoptFilter((UnicodeFilter*)(getFilter()->clone()));
    }
    return result;
}
    
        case URX_ONECHAR:
    case URX_ONECHAR_I:
        if (val < 0x20) {
            printf('%#x', val);
        } else {
            printf(''%s'', CStr(UnicodeString(val))());
        }
        break;
    
    U_NAMESPACE_BEGIN
    
        UBool operator == (const ScriptSet &other) const;
    ScriptSet & operator = (const ScriptSet &other);
    
    U_NAMESPACE_BEGIN
    
    
    {private:
    int32_t fMax;
    int32_t fMin;
};
    
        // check that we are still in range
    if ( (start > text.length()) ||
         (start < 0) ||
         (patLoc < 0) ||
         (patLoc > fPattern.length())) {
        // out of range, don't advance location in text
        return start;
    }
    
    U_NAMESPACE_BEGIN
    
    uint8_t *CollationKey::reallocate(int32_t newCapacity, int32_t length) {
    uint8_t *newBytes = static_cast<uint8_t *>(uprv_malloc(newCapacity));
    if(newBytes == NULL) { return NULL; }
    if(length > 0) {
        uprv_memcpy(newBytes, getBytes(), length);
    }
    if(fFlagAndLength < 0) { uprv_free(fUnion.fFields.fBytes); }
    fUnion.fFields.fBytes = newBytes;
    fUnion.fFields.fCapacity = newCapacity;
    fFlagAndLength |= 0x80000000;
    return newBytes;
}
    
    #endif  // !UCONFIG_NO_FORMATTING

    
    
    {    return rule;
}
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    DHTRoutingTable::DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode)
    : localNode_(localNode),
      root_(make_unique<DHTBucketTreeNode>(
          std::make_shared<DHTBucket>(localNode_))),
      numBucket_(1),
      taskQueue_{nullptr},
      taskFactory_{nullptr}
{
}
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
      char zero[18];
  memset(zero, 0, sizeof(zero));
    
    #include 'DHTTask.h'
#include 'Logger.h'
#include 'LogFactory.h'
#include 'a2functional.h'
#include 'fmt.h'
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
      virtual void
  addPeriodicTask1(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    DHTTokenUpdateCommand::~DHTTokenUpdateCommand() = default;
    
        void markBad(const std::string& addr);