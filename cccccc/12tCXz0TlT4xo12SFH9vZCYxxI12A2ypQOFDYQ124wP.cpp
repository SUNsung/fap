
        
        /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    #endif // BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H

    
    #endif // BITCOIN_REVERSELOCK_H

    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    /* Given a BlockIndex with the provided nbits,
 * verify that the expected difficulty results.
 */
static void TestDifficulty(uint32_t nbits, double expected_difficulty)
{
    CBlockIndex* block_index = CreateBlockIndexWithNbits(nbits);
    double difficulty = GetDifficulty(block_index);
    delete block_index;
    }
    
      // After identify the math blocks, we do one more scanning on all text
  // partitions, and check if any of them is the satellite of:
  // math blocks: here a p is the satellite of q if:
  // 1. q is the nearest vertical neighbor of p, and
  // 2. y_gap(p, q) is less than a threshold, and
  // 3. x_overlap(p, q) is over a threshold.
  // Note that p can be the satellites of two blocks: its top neighbor and
  // bottom neighbor.
  void ProcessMathBlockSatelliteParts();
    
    
    {  /** Pointer to the page_res owned by the API. */
  PAGE_RES* page_res_;
  /** Pointer to the Tesseract object owned by the API. */
  Tesseract* tesseract_;
  /**
   * The iterator to the page_res_. Owned by this ResultIterator.
   * A pointer just to avoid dragging in Tesseract includes.
   */
  PAGE_RES_IT* it_;
  /**
   * The current input WERD being iterated. If there is an output from OCR,
   * then word_ is nullptr. Owned by the API
   */
  WERD* word_;
  /** The length of the current word_. */
  int word_length_;
  /** The current blob index within the word. */
  int blob_index_;
  /**
   * Iterator to the blobs within the word. If nullptr, then we are iterating
   * OCR results in the box_word.
   * Owned by this ResultIterator.
   */
  C_BLOB_IT* cblob_it_;
  /** Control over what to include in bounding boxes. */
  bool include_upper_dots_;
  bool include_lower_dots_;
  /** Parameters saved from the Thresholder. Needed to rebuild coordinates.*/
  int scale_;
  int scaled_yres_;
  int rect_left_;
  int rect_top_;
  int rect_width_;
  int rect_height_;
};
    
     private:
  // Gets the up to the first 3 prefixes from s (split by _).
  // For example, tesseract_foo_bar will be split into tesseract,foo and bar.
  void GetPrefixes(const char* s, STRING* level_one,
                   STRING* level_two, STRING* level_three);
    
    namespace tesseract {
    }
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    namespace grpc {
    }
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    #include 'absl/strings/string_view.h'
#include 'absl/time/time.h'
#include 'src/cpp/ext/filters/census/channel_filter.h'
#include 'src/cpp/ext/filters/census/context.h'
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
    // TODO: This may not be needed. Check to see if opencensus requires
// a trailing server response.
// RpcServerStatsEncoding encapsulates the logic for encoding and decoding of
// rpc server stats messages. Rpc server stats consists of a uint64_t time
// value (server latency in nanoseconds).
class RpcServerStatsEncoding {
 public:
  // Size of encoded RPC server stats.
  static constexpr size_t kRpcServerStatsSize = 10;
  // Error value.
  static constexpr size_t kEncodeDecodeFailure = 0;
    }
    
     private:
  Status ListService(ServerContext* context,
                     reflection::v1alpha::ListServiceResponse* response);
    
        static AGInfo& Get(const nnvm::NodePtr& node) {
      return dmlc::get<AGInfo>(node->info);
    }
    
    #include 'caffe_common.h'
#include 'caffe_stream.h'
#include 'caffe_fieldentry.h'
#include 'caffe_blob.h'
#include '../../src/io/inst_vector.h'
#include '../../src/io/iter_prefetcher.h'
    
        caffeOp_->Backward(top_, flags_, bot_);
    
    
    { private:
  /*! \brief Concurrency for thread pool */
  static constexpr std::size_t kNumWorkingThreads = 16;
  /*! \brief Maximum number of GPUs */
  static constexpr std::size_t kMaxNumGpus = 16;
  /*!\brief number of streams allocated for each GPU */
  static constexpr std::size_t kNumStreamsPerGpu = 16;
  /*!
   * \brief Streams.
   */
  std::unique_ptr<StreamManager<kMaxNumGpus, kNumStreamsPerGpu>> streams_;
  /*!
   * \brief Task queues.
   */
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue_;
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> io_task_queue_;
  /*!
   * \brief Thread pools.
   */
  std::unique_ptr<ThreadPool> thread_pool_;
  std::unique_ptr<ThreadPool> io_thread_pool_;
  /*!
   * \brief Worker.
   * \param task_queue Queue to work on.
   *
   * The method to pass to thread pool to parallelize.
   */
  void ThreadWorker(std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue,
                    const std::shared_ptr<dmlc::ManualEvent>& ready_event) {
    OprBlock* opr_block;
    ready_event->signal();
    while (task_queue->Pop(&opr_block)) {
      DoExecute(opr_block);
    }
  }
  /*!
   * \brief Execute an operation.
   * \param opr_block The operator block.
   */
  void DoExecute(OprBlock* opr_block) {
    assert(opr_block->wait.load() == 0);
    if (opr_block->ctx.dev_mask() == gpu::kDevMask) {
      #if MXNET_USE_CUDA
      CUDA_CALL(cudaSetDevice(opr_block->ctx.dev_id));
      #else   // MXNET_USE_CUDA
      LOG(FATAL) << 'Please compile with CUDA enabled';
      #endif  // MXNET_USE_CUDA
    }
    bool is_copy = (opr_block->opr->prop == FnProperty::kCopyFromGPU ||
                    opr_block->opr->prop == FnProperty::kCopyToGPU);
    auto&& rctx = is_copy
        ? streams_->GetIORunContext(opr_block->ctx)
        : streams_->GetRunContext(opr_block->ctx);
    this->ExecuteOprBlock(rctx, opr_block);
  }
  /*!
   * \brief Push the operation to the queue.
   * \param opr_block The operator block.
   */
  void DoPushToQueue(OprBlock* opr_block) {
    switch (opr_block->opr->prop) {
      case FnProperty::kCopyFromGPU:
      case FnProperty::kCopyToGPU: {
        io_task_queue_->Push(opr_block);
        break;
      }
      default: {
        task_queue_->Push(opr_block);
        break;
      }
    }
  }
};
    
    
    {    while (base_->Next()) {
      const DataInst& d = base_->Value();
      out_.inst_index[top] = d.index;
      if (data_.size() == 0) {
        this->InitData(d);
      }
      for (size_t i = 0; i < d.data.size(); ++i) {
        CHECK_EQ(unit_size_[i], d.data[i].Size());
        MSHADOW_TYPE_SWITCH(data_[i].type_flag_, DType, {
            mshadow::Copy(
              data_[i].get<cpu, 1, DType>().Slice(top * unit_size_[i],
                                                  (top + 1) * unit_size_[i]),
              d.data[i].get_with_shape<cpu, 1, DType>(mshadow::Shape1(unit_size_[i])));
          });
      }
      if (++top >= param_.batch_size) {
        return true;
      }
    }
    if (top != 0) {
      if (param_.round_batch != 0) {
        num_overflow_ = 0;
        base_->BeforeFirst();
        for (; top < param_.batch_size; ++top, ++num_overflow_) {
          CHECK(base_->Next()) << 'number of input must be bigger than batch size';
          const DataInst& d = base_->Value();
          out_.inst_index[top] = d.index;
          // copy data
          for (size_t i = 0; i < d.data.size(); ++i) {
            CHECK_EQ(unit_size_[i], d.data[i].Size());
            MSHADOW_TYPE_SWITCH(data_[i].type_flag_, DType, {
                mshadow::Copy(
                  data_[i].get<cpu, 1, DType>().Slice(top * unit_size_[i],
                                                      (top + 1) * unit_size_[i]),
                  d.data[i].get_with_shape<cpu, 1, DType>(mshadow::Shape1(unit_size_[i])));
              });
          }
        }
        out_.num_batch_padd = num_overflow_;
      } else {
        out_.num_batch_padd = param_.batch_size - top;
      }
      return true;
    }
    return false;
  }
  virtual const TBlobBatch &Value(void) const {
    return out_;
  }
    
            static bool IsUDF(const FunctionPtr& f);
    
        Variable Variable::NonCompositePreservingCopy() const
    {
        Variable copy = *this;
        copy.m_outputComposite = nullptr;
        return copy;
    }
    
    // ===================================================================
// CloneFunctionConfigLambda -- lambda to produce a clone of a network
//  - creates a BrainScript function that carbon-copies a subsection of an existing network
//  - the copy can be shallow or deep, where a deep copy gets its own copy of LearnableParameters
//     - a shallow copy (parameters='shared') is a copy of all nodes that depend on the specified input(s),
//       while all other nodes are shared from the original network section
//     - a deep copy (parameters='lernable' or 'constant') also copies all reachable LearnableParameters and their dependents
//     - Input() nodes not listed as `inputNodes` are always shared
//  - the source network may be a different network, e.g. loaded with BS.Network.Load()
//  - a deep copy can be read-only (parameters='constant')
//     - Note: multiple uses of the lambda will not share read-only parameters. This is trickier to implement that one might expect.
//  - example use cases:
//     - adaptation (KL): a frozen read-only copy of the starting model is used as a KL-regularizer
//     - adaptation (DLR): an injected input transform is trained while the network is fixed
//     - image: lower layers of ImageNet networks serve as immutable feature extractors for another image task
//     - DSSM: applying the same network subsection to two inputs
// Usage:
//    f = CloneFunction (inputNodes, outputNodes, parameters='lernable' /*|'constant'|'shared'*/)
// Parameters:
//  - inputNodes:  single node or array of nodes that will become parameters of the function.
//                 Commonly, this list will include all Input()s that the outputNode(s) depend on.
//  - outputNodes: single node or dictionary of nodes that the function will emit
// Example:
//    # create a BS function by copying a piece of network
//    net = CloneFunction (network.features, network.logP)
//    # apply the copy to a new input
//    out = net (myFeatures)
//    # This will create a copy of the subsection from network.features to network.logP
//    # where all links to network.features get replaced by links to myFeatures.
// Example with multiple input and output nodes:
//    # create a BS function by copying a piece of network
//    # This specific example converts a network back into a BrainScript function.
//    # It passes two input nodes --> the BS function will have 2 inputs;
//    # and it passes a record of output nodes --> the BS function will return a record with the same member names
//    network = BS.Network.Load ('some.dnn')
//    net = CloneFunction ((network.features:network.labels), [ ce = network.ce ; errs = network.errs ])
//    # create a network from the BS function
//    features = Input (13)
//    labels = Input (42)
//    out = net (features, labels)
//    criterionNodes = (out.ce)
//    evaluationNodes = (out.errs)
// A specific example: Adapting a network, while using the original network as a regularizer (KLD)
//    # load network
//    network = BS.Network.Load ('some.dnn')
//    # create a trainable clone and a read-only reference clone
//    adaptNet = CloneFunction (network.features, [ z = network.z ], readOnly=false)
//    # create a read-only clone
//    refNet = CloneFunction (network.features, [ z = network.z ], readOnly=true)
//    # create the main network
//    features = Input (42)
//    labels = Input (9000)
//    z = adaptNet (features).z
//    zRef = refNet (features).z
//    # training criterion
//    refWeight = 0.9
//    kldLabels = labels * (1-refWeight) + Softmax (zRef) * refWeight  # interpolate with ref output
//    ce = CrossEntropyWithSoftmax (z, kldLabels)
//    errs = ClassificationError (z, labels)
//    criterionNodes = (ce)
//    evaluationNodes = (errs)
// ===================================================================
    
    private:
    // init parameters for deferred initialization (which happens in Validate())
    std::wstring m_initString; // if non-empty then deferred initialization is needed. Gets cleared upon completion of deferred init.
    unsigned long m_randomSeed;
    ElemType m_initValueScale;
    size_t m_initFilterRank;
    int m_initOutputRank;
    bool m_initOnCPUOnly;
    ElemType m_initValue;