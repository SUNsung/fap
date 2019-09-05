
        
        #ifndef TESSERACT_CCMAIN_OSDETECT_H_
#define TESSERACT_CCMAIN_OSDETECT_H_
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    
    {}  // namespace
    
    #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
    #ifndef NORMALIS_H
#define NORMALIS_H
    
      // Return whether this model is likely to agree with the other model on most
  // paragraphs they are marked.
  bool Comparable(const ParagraphModel &other) const;
    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram);
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
      ~UNICHARMAP();
    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {}  // namespace grpc_core

    
    
    {  GPR_ASSERT(nullptr == gpr_strdup(nullptr));
}
    
    
    {  value = GPR_GLOBAL_CONFIG_GET(string_var);
  EXPECT_EQ(0, strcmp(value.get(), 'Test'));
}
    
    typedef ::grpc_impl::ChannelArguments ChannelArguments;
    
          ClientContext cli_ctx;
      ServerContext srv_ctx;
      grpc::ServerAsyncResponseWriter<EchoResponse> response_writer(&srv_ctx);
    
    
#if defined(__clang__)
    #if !__has_extension(cxx_override_control)
        #define override
        #define final
    #endif
#elif defined(__GNUC__) && GNUC_VERSION < 40700
    #define override
    #define final
#endif
    
    TPTEST(RDBBtree, SindexInterruptionViaStoreDelete) {
    recreate_temporary_directory(base_path_t('.'));
    temp_file_t temp_file;
    }
    
    // Functions producing parameter generators.
//
// Google Test uses these generators to produce parameters for value-
// parameterized tests. When a parameterized test case is instantiated
// with a particular generator, Google Test creates and runs tests
// for each element in the sequence produced by the generator.
//
// In the following sample, tests from test case FooTest are instantiated
// each three times with parameter values 3, 5, and 8:
//
// class FooTest : public TestWithParam<int> { ... };
//
// TEST_P(FooTest, TestThis) {
// }
// TEST_P(FooTest, TestThat) {
// }
// INSTANTIATE_TEST_CASE_P(TestSequence, FooTest, Values(3, 5, 8));
//
    
    // Overload for std::pair.
template <typename T1, typename T2>
void PrintTo(const ::std::pair<T1, T2>& value, ::std::ostream* os) {
  *os << '(';
  // We cannot use UniversalPrint(value.first, os) here, as T1 may be
  // a reference type.  The same for printing value.second.
  UniversalPrinter<T1>::Print(value.first, os);
  *os << ', ';
  UniversalPrinter<T2>::Print(value.second, os);
  *os << ')';
}
    
    #endif  // GTEST_HAS_TYPED_TEST
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSaveModel
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSaveModel
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfname) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char*  fname = jenv->GetStringUTFChars(jfname, 0);
    }
    
    struct SquaredLogError {
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float label) {
    return label > -1;
  }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);  // ensure correct value for log1p
    return (std::log1p(predt) - std::log1p(label)) / (predt + 1);
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);
    float res = (-std::log1p(predt) + std::log1p(label) + 1) /
                std::pow(predt + 1, 2);
    res = fmaxf(res, 1e-6f);
    return res;
  }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() {
    return 'label must be greater than -1 for rmsle so that log(label + 1) can be valid.';
  }
  static const char* DefaultEvalMetric() { return 'rmsle'; }
};
    
    
    {
    {      if (size_to_read != 0) {
        CHECK_EQ(fi->Read(dmlc::BeginPtr(data_vec) + offset_vec[i],
                          size_to_read * sizeof(Entry)),
                 size_to_read * sizeof(Entry))
            << 'Invalid SparsePage file';
        curr_offset += size_to_read;
      }
      i = j;
    }
    // seek to end of record
    if (curr_offset != disk_offset_.back()) {
      fi->Seek(begin + disk_offset_.back() * sizeof(Entry));
    }
    return true;
  }
    
    namespace xgboost {
namespace common {
    }
    }
    
    
    {/*! \brief get next position of the tree given current pid */
inline int RegTree::GetNext(int pid, bst_float fvalue, bool is_unknown) const {
  bst_float split_value = (*this)[pid].SplitCond();
  if (is_unknown) {
    return (*this)[pid].DefaultChild();
  } else {
    if (fvalue < split_value) {
      return (*this)[pid].LeftChild();
    } else {
      return (*this)[pid].RightChild();
    }
  }
}
}  // namespace xgboost
#endif  // XGBOOST_TREE_MODEL_H_

    
      /**
   * \brief Initialise this object before use.
   *
   * \param num_col
   * \param colsample_bynode
   * \param colsample_bylevel
   * \param colsample_bytree
   * \param skip_index_0      (Optional) True to skip index 0.
   */
  void Init(int64_t num_col, float colsample_bynode, float colsample_bylevel,
            float colsample_bytree, bool skip_index_0 = false) {
    colsample_bylevel_ = colsample_bylevel;
    colsample_bytree_ = colsample_bytree;
    colsample_bynode_ = colsample_bynode;
    }
    
    
    {  EXPECT_TRUE(se1.NeedReplace(3, 1));
}

    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::CrossEntropyWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<CrossEntropyWithSoftmaxNode<ElemType>>(net.GetDeviceId(), nodeName), { label, prediction });
}
    
    
    {        m_outputLayerSize = outputLayerSize;
        m_layerSizes = layerSizes;
        m_applyMeanVarNorm = applyMeanVarNorm;
        m_trainCriterion = trainCriterion;
        m_evalCriterion = evalCriterion;
        m_addDropoutNodes = addDropoutNodes;
        m_needPrior = needPrior;
        m_nonLinearFunctions = nonLinearFunctions;
        m_uniformInit = uniformInit;
        m_initValueScale = initValueScale;
        if (m_layerSizes.size() < 2)
            InvalidArgument('A network should have at least two layers (one input and one output)');
    }
    
        // parallel training
    shared_ptr<Microsoft::MSR::CNTK::MPIWrapper> mpi;
    auto ensureMPIWrapperCleanup = MakeScopeExit(&MPIWrapper::DeleteInstance);
    // when running under MPI with more than one node, use 'true' as the default value for parallelTrain,
    // 'false' otherwise.
    bool paralleltrain = config(L'parallelTrain', (EnvironmentUtil::GetTotalNumberOfMPINodes() > 1));
    
                    auto firstInput = multNode->GetInputs()[0];
                auto secondInput = multNode->GetInputs()[1];
                l2->Bias = bias;
                l2->Node = firstInput;
    
        // this function is only for use by NDL (deprecated)
    void InitLearnableParameters(const ComputationNodeBasePtr& node,
                                 const wchar_t* initString, // 'uniform'|'gaussian'|'fixedValue'
                                 double initValue,          //  scale   | scale    | value
                                 unsigned long randomSeed = 0,
                                 bool initOnCPUOnly = false) const;
    // non-static version needed because it accesses m_randomSeedOffset
    // Legacy version that is for random only.
    void RandomInitLearnableParameters(const ComputationNodeBasePtr& node, const bool uniformInit, const unsigned long randomSeed, const double initValueScale, bool initOnCPUOnly = false) const;
    
        bool PushAndPullModel(const std::list<ComputationNodeBasePtr> & learnableNodes, size_t sampleSinceLastSynced) override { 
        return true;
    }
    
    protected:
    size_t capacity = 1;
    bool closed = false;
    std::list<Coroutine *> producer_queue;
    std::list<Coroutine *> consumer_queue;
    std::queue<void *> data_queue;
    
    
    {    return app.exec();
}

    
    
    {    ~lru_cache_test_class()
    {
        ++dtor_num;
    }
};
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
                if (ZEND_USER_CODE(*type))
            {
                if (0 > trace_get_long(traced_pid, function + offsetof(zend_op_array, filename), &l))
                {
                    return -__LINE__;
                }
    }