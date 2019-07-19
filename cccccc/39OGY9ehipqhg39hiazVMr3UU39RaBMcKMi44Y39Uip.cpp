
        
            /** Return a field of the currently selected entry as a QString. Does nothing if nothing
        is selected.
       @param[in] column  Data column to extract from the model
       @see  TransactionView::copyLabel, TransactionView::copyAmount, TransactionView::copyAddress
     */
    QList<QModelIndex> getEntryData(QAbstractItemView *view, int column);
    
    #endif // BITCOIN_QT_PLATFORMSTYLE_H
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 0));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 1));
    CHECK(secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 2));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 3));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    
        UniValue obj2(UniValue::VOBJ);
    BOOST_CHECK(obj2.pushKV('cat1', 9000));
    BOOST_CHECK(obj2.pushKV('cat2', 12345));
    
    #endif // BITCOIN_BECH32_H

    
    
    {  if (ok) {
    if (miter->Valid() != dbiter->Valid()) {
      fprintf(stderr, 'step %d: Mismatch at end of iterators: %d vs. %d\n',
              step, miter->Valid(), dbiter->Valid());
      ok = false;
    }
  }
  fprintf(stderr, '%d entries compared: ok=%d\n', count, ok);
  delete miter;
  delete dbiter;
  return ok;
}
    
    #endif  // STORAGE_LEVELDB_DB_DBFORMAT_H_

    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
        Mat displacement_field(Size(dst_frame1.cols / (1 << OF_scale), dst_frame1.rows / (1 << OF_scale)),
                           CV_32FC2);
    randn(displacement_field, 0.0, sigma);
    resize(displacement_field, displacement_field, dst_frame2.size(), 0.0, 0.0, INTER_CUBIC);
    for (int i = 0; i < displacement_field.rows; i++)
        for (int j = 0; j < displacement_field.cols; j++)
            displacement_field.at<Vec2f>(i, j) += Vec2f((float)j, (float)i);
    
    
    {    for (int i = 0; i < n; ++i)
       Xdr::read <StreamIO> (is, _value[i]);
}
    
    // attributes used in headers are TypedAttributes
class Attribute;
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    #include 'ImfGenericOutputFile.h'
    
    
void
hufBuildEncTable
    (Int64*	frq,	// io: input frequencies [HUF_ENCSIZE], output table
     int*	im,	//  o: min frq index
     int*	iM)	//  o: max frq index
{
    //
    // This function assumes that when it is called, array frq
    // indicates the frequency of all possible symbols in the data
    // that are to be Huffman-encoded.  (frq[i] contains the number
    // of occurrences of symbol i in the data.)
    //
    // The loop below does three things:
    //
    // 1) Finds the minimum and maximum indices that point
    //    to non-zero entries in frq:
    //
    //     frq[im] != 0, and frq[i] == 0 for all i < im
    //     frq[iM] != 0, and frq[i] == 0 for all i > iM
    //
    // 2) Fills array fHeap with pointers to all non-zero
    //    entries in frq.
    //
    // 3) Initializes array hlink such that hlink[i] == i
    //    for all array entries.
    //
    }
    
    
void
InputPart::rawPixelDataToBuffer (int scanLine, char *pixelData, int &pixelDataSize) const
{
    file->rawPixelDataToBuffer(scanLine, pixelData, pixelDataSize);
}
    
    
    {    InputStreamMutex()
    {
        is = 0;
        currentPosition = 0;
    }
};
    
      if (!return_list) {
    return Item(pself, from);
  }
    
    static PyObject* GetData(PyUnknownFieldRef* self, void *closure) {
  const UnknownField* field = GetUnknownField(self);
  if (field == NULL) {
    return NULL;
  }
  PyObject* data = NULL;
  switch (field->type()) {
    case UnknownField::TYPE_VARINT:
      data = PyInt_FromLong(field->varint());
      break;
    case UnknownField::TYPE_FIXED32:
      data = PyInt_FromLong(field->fixed32());
      break;
    case UnknownField::TYPE_FIXED64:
      data = PyInt_FromLong(field->fixed64());
      break;
    case UnknownField::TYPE_LENGTH_DELIMITED:
      data = PyBytes_FromStringAndSize(field->length_delimited().data(),
                                       field->GetLengthDelimitedSize());
      break;
    case UnknownField::TYPE_GROUP:
      data = PyUnknownFields_FromUnknownFieldSet(
          self->parent, field->group());
      break;
  }
  return data;
}
    
    void AnyMetadata::PackFrom(const Message& message) {
  PackFrom(message, kTypeGoogleApisComPrefix);
}
    
    // Defined in this file.
class CodeGenerator;
class GeneratorContext;
    
      // Generate non-inline methods related to the enum, such as IsValidValue().
  // Goes in the .cc file. EnumDescriptors are stored in an array, idx is
  // the index in this array that corresponds with this enum.
  void GenerateMethods(int idx, io::Printer* printer);
    
    void ExtensionGenerator::GenerateDefinition(io::Printer* printer) {
  // If we are building for lite with implicit weak fields, we want to skip over
  // any custom options (i.e. extensions of messages from descriptor.proto).
  // This prevents the creation of any unnecessary linker references to the
  // descriptor messages.
  if (options_.lite_implicit_weak_fields &&
      descriptor_->containing_type()->file()->name() ==
          'net/proto2/proto/descriptor.proto') {
    return;
  }
    }
    
    TEST(GENERATED_MESSAGE_TEST_NAME, TestConflictingMessageNames) {
  protobuf_unittest::NULL_ message;
  message.set_int_(123);
  EXPECT_EQ(message.int_(), 123);
}
    
        if (pb_h != NULL && pb_h_info != NULL) {
      GOOGLE_CHECK_OK(
          File::GetContents(output_base + '.pb.h', pb_h, true));
      if (!atu::DecodeMetadata(output_base + '.pb.h.meta', pb_h_info)) {
        return false;
      }
    }
    
      Tensor<xpu, 2, DType> wmat = in_data[fullc::kWeight].get<xpu, 2, DType>(s);
  Tensor<xpu, 2, DType> data, out;
  if (!param.flatten) {
    data = in_data[fullc::kData].get_with_shape<xpu, 2, DType>(
        Shape2(ishape.ProdShape(0, ishape.ndim()-1), ishape[ishape.ndim()-1]), s);
    out = out_data[fullc::kOut].get_with_shape<xpu, 2, DType>(
        Shape2(oshape.ProdShape(0, oshape.ndim()-1), oshape[oshape.ndim()-1]), s);
  } else {
    data = in_data[fullc::kData].get_with_shape<xpu, 2, DType>(
        Shape2(ishape[0], ishape.ProdShape(1, ishape.ndim())), s);
    out = out_data[fullc::kOut].get_with_shape<xpu, 2, DType>(
        Shape2(oshape[0], oshape.ProdShape(1, oshape.ndim())), s);
  }
    
    int MXProfileDurationStart(ProfileHandle duration_handle) {
  mxnet::IgnoreProfileCallScope ignore;
  API_BEGIN();
    CHECK_NOTNULL(duration_handle);
    static_cast<profiler::ProfileDuration *>(duration_handle)->start();
  API_END();
}
    
    template<typename xpu>
void L2NormComputeImpl(mshadow::Stream<xpu> *s,
                       const TBlob& input,
                       const OpReqType req,
                       const TBlob& output) {
  MSHADOW_REAL_TYPE_SWITCH(output.type_flag_, DType, {
    // assign_req switch exits immediately for null req
    MXNET_ASSIGN_REQ_SWITCH(req, Req, {
      mshadow::Tensor<xpu, 1, DType> out = output.get_with_shape<xpu, 1, DType>(
        mshadow::Shape1(output.shape_.Size()), s);
      mshadow::Tensor<xpu, 1, DType> in = input.get_with_shape<xpu, 1, DType>(
        mshadow::Shape1(input.shape_.Size()), s);
      mshadow::VectorDot(out, in, in);
      DType* out_data = output.dptr<DType>();
      using namespace mxnet_op;
      Kernel<op_with_req<mshadow_op::square_root, Req>, xpu>::Launch(
        s, output.Size(), out_data, out_data);
    });
  });
}
    
    template <typename DType>
inline DType im2col_bilinear_cpu(const DType* data,
                                 const index_t height,
                                 const index_t width,
                                 DType h, DType w) {
  index_t h_low = floor(h);
  index_t w_low = floor(w);
  index_t h_high;
  index_t w_high;
    }
    
    template<typename DType, typename Rand>
void ShuffleND(DType* const out, const index_t size, const index_t first_axis_len,
                Rand* const prnd, const OpContext& ctx) {
  // Fisher-Yates shuffling
  using namespace mxnet_op;
  const index_t stride = size / first_axis_len;
  auto rand_n = [prnd](index_t n) {
    std::uniform_int_distribution<index_t> dist(0, n - 1);
    return dist(*prnd);
  };
  CHECK_GT(first_axis_len, 0U);
  const size_t stride_bytes = sizeof(DType) * stride;
  Tensor<cpu, 1, char> buf =
    ctx.requested[1].get_space_typed<cpu, 1, char>(Shape1(stride_bytes), ctx.get_stream<cpu>());
  for (index_t i = first_axis_len - 1; i > 0; --i) {
    const index_t j = rand_n(i + 1);
    if (i != j) {
      std::memcpy(buf.dptr_, out + stride * i, stride_bytes);
      std::memcpy(out + stride * i, out + stride * j, stride_bytes);
      std::memcpy(out + stride * j, buf.dptr_, stride_bytes);
    }
  }
}
    
    template <typename DType>
static void MKLDNNRNNForward(bool state_outputs,
                             const int L,
                             const int D,
                             const int T,
                             const int N,
                             const int I,
                             const int H,
                             DType* x_ptr,
                             DType* hx_ptr,
                             DType* cx_ptr,
                             DType* w_ptr,
                             DType* b_ptr,
                             DType* y_ptr,
                             DType* hy_ptr,
                             DType* cy_ptr,
                             std::vector<mkldnn::memory> *concat_weight_memory,
                             std::vector<mkldnn::memory> *concat_iter_memory,
                             std::vector<mkldnn::memory> *x_memory,
                             std::vector<mkldnn::memory> *hcx_memory,
                             std::vector<mkldnn::memory> *wx_memory,
                             std::vector<mkldnn::memory> *wh_memory,
                             std::vector<mkldnn::memory> *bias_memory,
                             std::vector<mkldnn::memory> *y_memory,
                             std::vector<mkldnn::memory> *hcy_memory,
                             std::vector<primitive> *rnn_forward_prim,
                             bool *has_cache,
                             int dtype,
                             bool is_train,
                             int mode) {
  int ngates = 0, nstates = 0;
  GetMKLDNNRNNAlgo(mode, &ngates, &nstates);
  const int b_size = 2 * H * ngates * D;
  const int cell_size = N * H * D;
  //  First layer
  int w_size = (I + H) * H * ngates * D;
  auto cpu_engine = CpuEngine::Get()->get_engine();
  auto null_memory_ = null_memory(cpu_engine);
  DType* tmpNull = NULL;
  // when D = 1 and I == H, L layers can be fused together
  if (D == 1 && I == H) {
    MKLDNNRNNForwardUnidi(state_outputs, L, T, N, I, H, x_ptr, &null_memory_,
        hx_ptr, cx_ptr, w_ptr, b_ptr, y_ptr, hy_ptr, cy_ptr, concat_weight_memory,
        concat_iter_memory, x_memory, hcx_memory, wx_memory, wh_memory,
        bias_memory, y_memory, hcy_memory, rnn_forward_prim,
        0, has_cache, dtype, is_train, mode);
  } else {
    auto user_src_layer_memory_l = null_memory_;
    if (D == 2) {
      MKLDNNRNNForwardSingleLayerBi(state_outputs, T, N, I, H, x_ptr, &user_src_layer_memory_l,
          hx_ptr, cx_ptr, w_ptr, b_ptr, y_ptr, hy_ptr, cy_ptr, concat_weight_memory,
          concat_iter_memory, x_memory, hcx_memory, wx_memory, wh_memory,
          bias_memory, y_memory, hcy_memory, rnn_forward_prim,
          0, has_cache, 0, dtype, is_train, mode);
    } else {
      MKLDNNRNNForwardUnidi(state_outputs, 1, T, N, I, H, x_ptr, &user_src_layer_memory_l,
          hx_ptr, cx_ptr, w_ptr, b_ptr, y_ptr, hy_ptr, cy_ptr, concat_weight_memory,
          concat_iter_memory, x_memory, hcx_memory, wx_memory, wh_memory,
          bias_memory, y_memory, hcy_memory, rnn_forward_prim,
          0, has_cache, dtype, is_train, mode);
    }
    if (L > 1) {
      user_src_layer_memory_l = (*y_memory)[0];
      //  go to next L - 1 layers.
      //  If D = 2, do it layer by layer. If D = 1, fused L - 1 layers
      w_ptr += w_size;
      b_ptr += b_size;
      if (D == 2) {
        w_size = (H * D + H) * H * ngates * D;
        for (int l = 0; l < L - 1; l++) {
          if (state_outputs) {
            hy_ptr += cell_size;
            if (mode == rnn_enum::kLstm) {
              cy_ptr += cell_size;
            }
          }
          hx_ptr += cell_size;
          if (mode == rnn_enum::kLstm) {
            cx_ptr += cell_size;
          }
          MKLDNNRNNForwardSingleLayerBi(state_outputs, T, N, D * H, H, tmpNull,
              &user_src_layer_memory_l, hx_ptr, cx_ptr, w_ptr, b_ptr, y_ptr, hy_ptr,
              cy_ptr, concat_weight_memory, concat_iter_memory, x_memory,
              hcx_memory, wx_memory, wh_memory, bias_memory,
              y_memory, hcy_memory, rnn_forward_prim,
              1, has_cache, l + 1, dtype, is_train, mode);
          user_src_layer_memory_l = (*y_memory)[1];
          w_ptr += w_size;
          b_ptr += b_size;
        }
      }
      if (D == 1) {
        if (state_outputs) {
          hy_ptr += cell_size;
          if (mode == rnn_enum::kLstm) {
            cy_ptr += cell_size;
          }
        }
        w_size = (H + H) * H * ngates;
        MKLDNNRNNForwardUnidi(state_outputs, L - 1, T, N, H, H, tmpNull, &user_src_layer_memory_l,
            hx_ptr, cx_ptr, w_ptr, b_ptr, y_ptr, hy_ptr, cy_ptr, concat_weight_memory,
            concat_iter_memory, x_memory, hcx_memory, wx_memory,
            wh_memory, bias_memory, y_memory, hcy_memory,
            rnn_forward_prim, 1, has_cache, dtype, is_train, mode);
      }
    }
  }
  *has_cache = true;
}
    
    
    {  DType* wx_l = wx;
  DType* wh_l = wh;
  DType* bx_l = bx;
  DType* bh_l = bh;
  Tensor<cpu, 3, DType> hx(hx_ptr, Shape3(D * L, N, H));
  DType* hy_l = hy_ptr;
  for (int l = 0; l < L; l++) {
    Tensor<cpu, 2, DType> x_l(y_l, Shape2(T * N, I));
    if ((L + l) % 2) {
      y_l = y_ptr;
    } else {
      y_l = y_tmp;
    }
    Tensor<cpu, 2, DType> hx_l = hx[D * l];
    GruForwardInferenceSingleLayer<DType>(ws2, tmp_buf, state_outputs, D, T, N, I, H,
                                        x_l, hx_l, wx_l, wh_l, bx_l, bh_l, y_l, hy_l);
    hy_l = hy_l + D * N * H;
    bx_l = bx_l + 3 * H * D * 2;
    bh_l = bh_l + 3 * H * D * 2;
    wx_l = wx_l + I * H * 3 * D + H * H * 3 * D;
    if (l == 0) {
      I = D * H;
    }
    wh_l = wx_l + I * 3 * H;
  }
}
    
        static void Clear(const nnvm::NodePtr& node) {
      if (node == nullptr || node->info.empty()) return;
      AGInfo& info = Get(node);
      if (info.grad_req != kNullOp) return;
      node->info.clear();
    }
    
      if (*outputs == nullptr) {
    ret->ret_handles.clear();
    ret->ret_handles.reserve(*num_outputs);
    for (int i = 0; i < *num_outputs; ++i) {
      ret->ret_handles.push_back(ndoutputs[i]);
    }
    *outputs = dmlc::BeginPtr(ret->ret_handles);
  }
    
    template<typename AttrType, typename FInfer>
bool ApplyOpInferAttr(const nnvm::Graph& g,
                      const FInfer& finfer,
                      const NodeAttrs& attrs,
                      const uint32_t nid,
                      std::vector<AttrType>* in_attrs,
                      std::vector<AttrType>* out_attrs,
                      DispatchMode* dispatch_mode) {
  return finfer(attrs, in_attrs, out_attrs);
}
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        size_t rank = DetermineElementwiseTensorRank();
        auto result =             ValueTensorFor(rank, fr);
        auto input0 = InputRef(0).ValueTensorFor(rank, fr.AllowBroadcast());
        auto input1 = InputRef(1).ValueTensorFor(rank, fr.AllowBroadcast());
        result.AssignSumOf(input0, input1);
    }
    
    // ++ operator for this enum, so loops work
NDLPass& operator++(NDLPass& ndlPass);
    
            ComputationNodePtr input, w, b, u, e, pastValue, output, label, prior;
        ComputationNodePtr Wxo, Who, Wco, bo, Wxi, Whi, Wci, bi;
        ComputationNodePtr clslogpostprob;
        ComputationNodePtr clsweight;
    
        // parse a 'key=value' pair and insert in the ConfigDictionary
    std::string::size_type ParseValue(const std::string& stringParse,
                                      std::string::size_type tokenStart,
                                      std::string::size_type tokenEnd)
    {
        // skip leading spaces
        tokenStart = stringParse.find_first_not_of(' \t', tokenStart);
        auto keyEnd = stringParse.find_first_of('=' OPENBRACES, tokenStart);
        std::string value;
    }
    
        // ////////////////////////////////////////////////////////////////////////
    //    specify arc connections
    // ////////////////////////////////////////////////////////////////////////
    for (auto x = arcs.begin(); x != arcs.end(); x++)
    {
        ComputationNodeBasePtr src = (*x).first;
        ComputationNodeBasePtr des = (*x).second;
    }
    
        // dump all nodes in the network to file
    void DumpAllNodesToFile(const bool printValues,
                            const bool printMetadata,
                            const std::wstring outputFile)
    {
        File fstream(outputFile,
                     FileOptions::fileOptionsText | FileOptions::fileOptionsWrite);
    }
    
    #include 'Basics.h'
#include 'ComputationNode.h'
#include 'ComputationNetwork.h'
#include 'TrainingNodes.h'      // for NCEEvalMode
#include 'ConvolutionalNodes.h' // for PoolKind
#include 'ScriptableObjects.h'
#include 'TensorShape.h'
#include <string>
    
    template <>
std::shared_ptr<IDistGradAggregator<half>> GetSimpleDistGradAggregator<half>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce)
{
    if (Globals::UseV2Aggregator())
        return std::make_shared<V2SimpleDistGradAggregator<half>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            ::CNTK::MPICommunicator(packThresholdSizeInBytes, useFP16AllReduce));
    else
        RuntimeError('SGD - half not supported when useV2Aggregator is false!');
}
    
        // Update output values of accumulator nodes.
    for (auto& accumulatorNode : allEpochAccumulatorNodes)
    {
        auto node = dynamic_pointer_cast<EpochAccumulatorNode<ElemType>>(accumulatorNode);
        node->SetNumberOfSamples(gradHeader->numSamples);
        node->BeginForwardProp();
        node->CopyAccumulatorToValue();
        node->EndForwardProp();
        node->BumpEvalTimeStamp();
    }