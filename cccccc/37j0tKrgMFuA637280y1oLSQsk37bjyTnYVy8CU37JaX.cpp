
        
          if (auto *CD = dyn_cast<ClassDecl>(NTD))
    if (auto superclass = CD->getSuperclass())
      useConformancesFromType(superclass->getCanonicalType(genericSig));
    
        paramType->addChild(totalInput, Dem);
    parameters->addChild(paramType, Dem);
    
      /// Tail-allocated SILVTable entries.
  Entry Entries[1];
    
        virtual ~Holder() { }
    
      /// Emit the default witness table for a resilient protocol.
  void emitDefaultWitnessTable(ProtocolDecl *protocol);
    
    
    {}  // namespace caffe
    
    TYPED_TEST(NeuronLayerTest, TestDropoutGradientTest) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter layer_param;
  layer_param.set_phase(TEST);
  DropoutLayer<Dtype> layer(layer_param);
  GradientChecker<Dtype> checker(1e-2, 1e-3);
  checker.CheckGradientEltwise(&layer, this->blob_bottom_vec_,
      this->blob_top_vec_);
}
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  // Figure out the dimensions
  const int axis = bottom[0]->CanonicalAxisIndex(
      this->layer_param_.inner_product_param().axis());
  const int new_K = bottom[0]->count(axis);
  CHECK_EQ(K_, new_K)
      << 'Input size incompatible with inner product parameters.';
  // The first 'axis' dimensions are independent inner products; the total
  // number of these is M_, the product over these dimensions.
  M_ = bottom[0]->count(0, axis);
  // The top shape will be the bottom shape with the flattened axes dropped,
  // and replaced by a single axis with dimension num_output (N_).
  vector<int> top_shape = bottom[0]->shape();
  top_shape.resize(axis + 1);
  top_shape[axis] = N_;
  top[0]->Reshape(top_shape);
  // Set up the bias multiplier
  if (bias_term_) {
    vector<int> bias_shape(1, M_);
    bias_multiplier_.Reshape(bias_shape);
    caffe_set(M_, Dtype(1), bias_multiplier_.mutable_cpu_data());
  }
}
    
     protected:
  string SnapshotFilename(const string& extension);
  string SnapshotToBinaryProto();
  string SnapshotToHDF5();
  // The test routine
  void TestAll();
  void Test(const int test_net_id = 0);
  virtual void SnapshotSolverState(const string& model_filename) = 0;
  virtual void RestoreSolverStateFromHDF5(const string& state_file) = 0;
  virtual void RestoreSolverStateFromBinaryProto(const string& state_file) = 0;
  void DisplayOutputBlobs(const int net_id);
  void UpdateSmoothedLoss(Dtype loss, int start_iter, int average_loss);
    
    using caffe::Datum;
using boost::scoped_ptr;
using std::string;
namespace db = caffe::db;
    
      /* Load the network. */
  net_.reset(new Net<float>(model_file, TEST));
  net_->CopyTrainedLayersFrom(trained_file);
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
            backfill_debug_key(w.key, strprintf('upsert %' PRIu64, timestamp.longtime));
    
    void check_keys_are_present(store_t *store,
        sindex_name_t sindex_name) {
    for (int i = 0; i < MAX_RETRIES_FOR_SINDEX_POSTCONSTRUCT; ++i) {
        try {
            _check_keys_are_present(store, sindex_name);
            return;
        } catch (const sindex_not_ready_exc_t&) { }
        /* Unfortunately we don't have an easy way right now to tell if the
         * sindex has actually been postconstructed so we just need to
         * check by polling. */
        nap(500);
    }
    ADD_FAILURE() << 'Sindex still not available after many tries.';
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31>
internal::ValueArray31<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23,
    T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31) {
  return internal::ValueArray31<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24,
      v25, v26, v27, v28, v29, v30, v31);
}
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    bool NcclComm::IsSupported()
{
    return m_ncclComm != nullptr;
}
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::Atan(const ComputationNodePtr a, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<AtanNode<ElemType>>(net.GetDeviceId(), nodeName), { a });
}
    
    
    {    // Clear - clear out everything in the structure
    // NOTE: this deletes the network and the NDLScript, use with care!
    void Clear()
    {
        cn.reset();
        delete ndl;
        ndl = nullptr;
        ClearLastNodes();
    }
};
    
    
    {                pastValue = builder.PastValue(NULL, m_defaultHiddenActivity, m_layerSizes[1], 1);
                // unless there is a good algorithm to detect loops, use this explicit setup
                output = ApplyNonlinearFunction(
                    builder.Plus(
                        builder.Times(u, input), builder.Times(w, pastValue)),
                    0);
                pastValue->AttachInputs({ output });
                recur_idx++;
            }
            else
            {
                output = SimpleNetworkBuilder<ElemType>::ApplyNonlinearFunction(builder.Plus(builder.Times(u, input), b), 0);
                // TODO: Why the ^^ namespace?
                // output = builder.Times(u, input);
            }
    
            Matrix<ElemType> mat(numRows, numCols, m_deviceId);
    
        // -----------------------------------------------------------------------
    // network editing
    // -----------------------------------------------------------------------
    
             virtual bool OnArrivingAtSyncPoint(
            const std::list<ComputationNodeBasePtr>& LearnableNodes,        /* input/output: */
            std::list<MatrixBasePtr>& smoothedGradients,                     /* input/output: under some setup, it will reset to zero*/
            size_t  samplesSinceLastSync                                    /* input:  samples processed since last sync on this worker only */
             )
         {
             Timer syncPointTimer; 
             syncPointTimer.Start();
             bool read2Sync=UpdateWorkerStatus(MAWorkerStatus::DataProcessing);
             syncPointTimer.Stop();
             m_perfReporter.OnArriveAtSyncPoint(syncPointTimer.ElapsedSeconds(),read2Sync);
    }
    
        // enable tracing. Nodes listed here get their m_traceNodeValueXXX flags set
    std::vector<std::wstring> m_traceNodeNamesReal;
    std::vector<std::wstring> m_traceNodeNamesCategory;
    std::vector<std::wstring> m_traceNodeNamesSparse;
    
    
    {        if (m_useAsyncAggregation)
        {
            m_bufferedGradHeader = DistGradHeader::Create(numEvalNodes);
            m_bufferedGradHeader->Clear();
        }
        m_initialized = true;
    }
    
        // Aggregate accumulator sums.
    bool samplesProcessed = distGradAgg->AggregateGradients(accumulatorValues, gradHeader.get(), /*resetState =*/false);
    if (!samplesProcessed)
        RuntimeError('Couldn't aggregate accumulator values.');
    
    struct NormalizedInstruction;
struct RegionContext;
    
    // When you already have the memory mapped in, remap them it to use huge pages,
// and try to interleave across all enabled numa nodes.  Return the number of
// pages that are actually backed by hugetlb pages (the rest may be implemented
// as transparent huge pages).
//
// Beware this function wipes out data on existing pages.
int remap_interleaved_2m_pages(void* addr, size_t pages);
    
    
    {  // Make sure the thread is gone after hphp_process_exit().  The node
  // is intentionally leaked.
  new InitFiniNode(
    [] { folly::Singleton<HostHealthMonitor>::try_get()->waitForEnd(); },
    InitFiniNode::When::ProcessExit
  );
}
    
    
    { private:
  Mutex m_mutex;
  pthread_cond_t m_cond;
};
    
    #include 'hphp/runtime/ext/extension.h'
#include 'hphp/runtime/vm/native-data.h'
    
    
    {  static void merge_result(
    result_type& workerResult,
    DArrayInit& outResArr,
    const HPHP::String& path
  ) {
    try {
      if (workerResult.hasValue() && !workerResult.value().value.empty()) {
        outResArr.set(
          path,
          Variant::attach(
            HHVM_FN(json_decode)(
              String(workerResult.value().value),
              true,
              512,
              k_JSON_FB_LOOSE | k_JSON_FB_DARRAYS_AND_VARRAYS
            )
          )
        );
      }
      else {
        outResArr.set(path, uninit_null());
      }
    }
    catch (std::runtime_error& e) {
      FTRACE(1, 'Error during json conversion {}: {}\n', path, e.what());
    }
  };
};
    
      static ArrayData* ToShape(ArrayData*, bool);