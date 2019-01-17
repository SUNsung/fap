
        
        #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    
    { private:
  CensusContext context_;
  // Metadata elements for tracing and census stats data.
  grpc_linked_mdelem stats_bin_;
  grpc_linked_mdelem tracing_bin_;
  // Client method.
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // The recv trailing metadata callbacks.
  grpc_metadata_batch* recv_trailing_metadata_;
  grpc_closure* initial_on_done_recv_trailing_metadata_;
  grpc_closure on_done_recv_trailing_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  // Start time (for measuring latency).
  absl::Time start_time_;
  // Server elapsed time in nanoseconds.
  uint64_t elapsed_time_;
  // The received message--may be null.
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  // Number of messages in this RPC.
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference when adding trace context
  // metatdata to outgoing message.
  char tracing_buf_[kMaxTraceContextLen];
};
    
    // client hour
const ViewDescriptor& ClientSentBytesPerRpcHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/client/sent_bytes_per_rpc/hour')
          .set_measure(kRpcClientSentBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    
    {   private:
    DynamicThreadPool* pool_;
    grpc_core::Thread thd_;
    void ThreadFunc();
  };
  std::mutex mu_;
  std::condition_variable cv_;
  std::condition_variable shutdown_cv_;
  bool shutdown_;
  std::queue<std::function<void()>> callbacks_;
  int reserve_threads_;
  int nthreads_;
  int threads_waiting_;
  std::list<DynamicThread*> dead_threads_;
    
    namespace CNTK
{
    class CompositeMinibatchSource final : public MinibatchSource
    {
        static const std::wstring PositionAttributeName;
        static const std::wstring DistributedAfterSampleCountAttributeName;
    }
    }
    
            if (!learnerParametersNotPartOfModel.empty())
            InvalidArgument('Trainer ctor: %d of the learner parameters '%S' are not part of the model specified', 
                            (int)learnerParametersNotPartOfModel.size(), NamedListString(learnerParametersNotPartOfModel).c_str());
    
            static const size_t s_serializationVersion = 0;
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        mode_t mask = umask(0);
    }
    
    
    {protected:
    std::string m_callStack;
};
    
    class Clock
{
public:
    static long long GetTimeStamp();
    static long long GetTicksPerSecond();
};
    
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
    
            if (Input(1)->HasMBLayout())
        {
            // infer rows1 as rows0
            Input(1)->ValidateInferInputDimsFrom(TensorShape(rows0));
            SetDims(TensorShape(rows0), true);
        }
        else // multiplying two straight matrices
        {
            size_t cols1 = Input(1)->GetAsMatrixNumCols();
            // infer rows1 as rows0
            Input(1)->ValidateInferInputDimsFrom(TensorShape(rows0, cols1));
            SetDims(TensorShape(rows0, cols1), false);
        }
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
          CompressedIterator<int> ci(buffer.data(), alphabet_size);
      std::vector<int> output(input.size());
      for (int i = 0; i < input.size(); i++) {
        output[i] = ci[i];
      }
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
        Span<float const> cs (arr, arr + 16);
    ASSERT_EQ (cs.size(), 16);
    ASSERT_EQ (cs.data(), arr);
    ASSERT_EQ (cs.data() + cs.size(), arr + 16);
    
        /** Get the value of a controlPoint at a given index.
     *
     * @js NA
     * @param index Get the point in index.
     * @return A Vec2.
     */
    const Vec2& getControlPointAtIndex(ssize_t index) const;
    
        //
    // Overrides
    //
    virtual ScaleTo* clone() const override;
    virtual ScaleTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ScaleTo() {}
    virtual ~ScaleTo() {}
    
                // Y
            coords.bl.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.br.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.tl.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.tr.y += ( rand() % (_randrange*2) ) - _randrange;
    
    /**
@brief TurnOffTiles action.
@details Turn off the target node with many tiles in random order.
 */
class CC_DLL TurnOffTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of TurnOffTiles action; otherwise, return nil.
    */
    static TurnOffTiles* create(float duration, const Size& gridSize);
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of TurnOffTiles action; otherwise, return nil.
    */
    static TurnOffTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
    http://www.cocos2d-x.org
    
    TEST(FunctionRef, Traits) {
  static_assert(std::is_literal_type<FunctionRef<int(int)>>::value, '');
// Some earlier versions of libstdc++ lack these traits. Frustrating that
// the value of __GLIBCXX__ doesn't increase with version, but rather reflects
// release date, so some larger values of __GLIBCXX__ lack the traits while
// some smaller values have them. Can't figure out how to reliably test for the
// presence or absence of the traits. :-(
#if !defined(__GLIBCXX__) || __GNUC__ >= 5
  static_assert(
      std::is_trivially_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_trivially_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
#endif
  static_assert(
      std::is_nothrow_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_nothrow_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
}
    
    // ============================================================================
// folly/test/GLogBenchmark.cpp                    relative  time/iter  iters/s
// ============================================================================
// skip_overhead                                               36.37ns   27.49M
// dev_null_log_overhead                                        2.61us  382.57K
// ============================================================================
    
      result_type operator()();
    
     public:
  explicit VirtualExecutor(KeepAlive<> executor)
      : executor_(std::move(executor)) {
    assert(!isKeepAliveDummy(executor_));
  }
    
    #include <folly/PackedSyncPtr.h>
#include <folly/concurrency/detail/AtomicSharedPtr-detail.h>
#include <folly/synchronization/AtomicStruct.h>
#include <folly/synchronization/detail/AtomicUtils.h>
#include <atomic>
#include <thread>
    
      template <typename T>
  static counted_base* get_counted_base(const counted_ptr<T, Atom>& bar) {
    return bar.p_;
  }
    
    template< bool Signed >
struct gcc_dcas_x86_64
{
    typedef typename make_storage_type< 16u, Signed >::type storage_type;
    typedef typename make_storage_type< 16u, Signed >::aligned aligned_storage_type;
    }
    
        static BOOST_FORCEINLINE storage_type fetch_sub(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        typedef typename make_signed< storage_type >::type signed_storage_type;
        return Derived::fetch_add(storage, static_cast< storage_type >(-static_cast< signed_storage_type >(v)), order);
    }
    
    #ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};
    
    #endif // BOOST_ATOMIC_FENCES_HPP_INCLUDED_
