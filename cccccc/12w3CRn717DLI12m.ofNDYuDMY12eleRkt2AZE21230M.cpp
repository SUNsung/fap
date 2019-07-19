
        
                    rdb_get(key, store.get_sindex_slice(sindex_uuid),
                    sindex_super_block.get(), &response, nullptr);
    
        insert_rows(0, (TOTAL_KEYS_TO_INSERT * 9) / 10, &store);
    
    template <$for j, [[typename Generator$j]]>
internal::CartesianProductHolder$i<$for j, [[Generator$j]]> Combine(
    $for j, [[const Generator$j& g$j]]) {
  return internal::CartesianProductHolder$i<$for j, [[Generator$j]]>(
      $for j, [[g$j]]);
}
    
    // Google Test - The Google C++ Testing Framework
//
// This file implements a universal value printer that can print a
// value of any type T:
//
//   void ::testing::internal::UniversalPrinter<T>::Print(value, ostream_ptr);
//
// A user can teach this function how to print a class type T by
// defining either operator<<() or PrintTo() in the namespace that
// defines T.  More specifically, the FIRST defined function in the
// following list will be used (assuming T is defined in namespace
// foo):
//
//   1. foo::PrintTo(const T&, ostream*)
//   2. operator<<(ostream&, const T&) defined in either foo or the
//      global namespace.
//
// If none of the above is defined, it will print the debug string of
// the value if it is a protocol buffer, or print the raw bytes in the
// value otherwise.
//
// To aid debugging: when T is a reference type, the address of the
// value is also printed; when T is a (const) char pointer, both the
// pointer value and the NUL-terminated string it points to are
// printed.
//
// We also provide some convenient wrappers:
//
//   // Prints a value to a string.  For a (const or not) char
//   // pointer, the NUL-terminated string (but not the pointer) is
//   // printed.
//   std::string ::testing::PrintToString(const T& value);
//
//   // Prints a value tersely: for a reference type, the referenced
//   // value (but not the address) is printed; for a (const or not) char
//   // pointer, the NUL-terminated string (but not the pointer) is
//   // printed.
//   void ::testing::internal::UniversalTersePrint(const T& value, ostream*);
//
//   // Prints value using the type inferred by the compiler.  The difference
//   // from UniversalTersePrint() is that this function prints both the
//   // pointer and the NUL-terminated string for a (const or not) char pointer.
//   void ::testing::internal::UniversalPrint(const T& value, ostream*);
//
//   // Prints the fields of a tuple tersely to a string vector, one
//   // element for each field. Tuple support must be enabled in
//   // gtest-port.h.
//   std::vector<string> UniversalTersePrintTupleFieldsToStrings(
//       const Tuple& value);
//
// Known limitation:
//
// The print primitives print the elements of an STL-style container
// using the compiler-inferred type of *iter where iter is a
// const_iterator of the container.  When const_iterator is an input
// iterator but not a forward iterator, this inferred type may not
// match value_type, and the print output may be incorrect.  In
// practice, this is rarely a problem as for most containers
// const_iterator is a forward iterator.  We'll fix this if there's an
// actual need for it.  Note that this fix cannot rely on value_type
// being defined as many user-defined container types don't have
// value_type.
    
      // Gets the elapsed time, in milliseconds.
  TimeInMillis elapsed_time() const;
    
      static void set_last_death_test_message(const std::string& message);
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const ValueArray47& other);
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32>
struct Templates32 {
  typedef TemplateSel<T1> Head;
  typedef Templates31<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32> Tail;
};
    
    #include <cstddef>
#include <vector>
    
    ModifierNode::ModifyResult PopNode::updateExistingElement(
    mutablebson::Element* element, std::shared_ptr<FieldRef> elementPath) const {
    invariant(element->ok());
    uassert(ErrorCodes::TypeMismatch,
            str::stream() << 'Path '' << elementPath->dottedField()
                          << '' contains an element of non-array type ''
                          << typeName(element->getType())
                          << ''',
            element->getType() == BSONType::Array);
    }
    
    Status PushNode::init(BSONElement modExpr, const boost::intrusive_ptr<ExpressionContext>& expCtx) {
    invariant(modExpr.ok());
    }
    
            BSONObj collation;
        BSONElement collationElement;
        auto status =
            bsonExtractTypedField(cmdObj, 'collation', BSONType::Object, &collationElement);
        if (status.isOK()) {
            collation = collationElement.Obj();
        } else if (status != ErrorCodes::NoSuchKey) {
            uassertStatusOK(status);
        }
    
        // Wait until the parallel operation initializes its cursor.
    const auto startTime = clock->now();
    while (!queryCursor && (clock->now() - startTime < parallelWaitTimeoutMS)) {
        sleepFor(Milliseconds(10));
    }
    ASSERT(queryCursor);
    
    
    {}  // namespace CountTests

    
    class UpdateDate2 : public Base {
public:
    void run() {
        BSONObj o;
        {
            BSONObjBuilder b;
            b.appendTimestamp('a');
            b.appendTimestamp('b');
            b.append('_id', 1);
            o = b.obj();
        }
    }
    }
    
    //
// Check that expected results are returned with exclusive bounds
//
class QueryStageCountScanExclusiveBounds : public CountBase {
public:
    void run() {
        dbtests::WriteContextForTests ctx(&_opCtx, ns());
    }
    }
    
    // V2 allows mixed precision
template shared_ptr<ComputationNode<float>> ComputationNetworkBuilder<float>::TypedCreateLearnableParameter<float>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<double>> ComputationNetworkBuilder<float>::TypedCreateLearnableParameter<double>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<half>> ComputationNetworkBuilder<float>::TypedCreateLearnableParameter<half>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<float>> ComputationNetworkBuilder<double>::TypedCreateLearnableParameter<float>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<double>> ComputationNetworkBuilder<double>::TypedCreateLearnableParameter<double>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<half>> ComputationNetworkBuilder<double>::TypedCreateLearnableParameter<half>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<float>> ComputationNetworkBuilder<half>::TypedCreateLearnableParameter<float>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<double>> ComputationNetworkBuilder<half>::TypedCreateLearnableParameter<double>(const std::wstring& paramName, const TensorShape& tensorShape);
template shared_ptr<ComputationNode<half>> ComputationNetworkBuilder<half>::TypedCreateLearnableParameter<half>(const std::wstring& paramName, const TensorShape& tensorShape);
    
        // --- properties
    
        public:
        BlockMomentumSGD(const MPIWrapperPtr& pMPI, size_t reportFreq, DEVICEID_TYPE devID, 
                        bool useNestrovMomentum, bool resetSGDM, 
                        double blockLearningRate, 
                        double blockMomentumAsTimeConstant, size_t syncPeriod)
            :IMASGD<ElemType>(pMPI, reportFreq, devID)
        {
            m_syncPeriodPerWorker = syncPeriod / pMPI->NumNodesInUse();
            m_blockMomentumAsTimeConstantPerWorker = blockMomentumAsTimeConstant / pMPI->NumNodesInUse(); 
            m_useNesterovMomentum = useNestrovMomentum;
            m_resetSGDMomentumAfterAggregation = resetSGDM; 
            m_blockLearningRate = blockLearningRate;
        }
    
            bool m_resetSGDMomentumAfterAggregation;
        bool m_useNesterovMomentum;
        double m_blockLearningRate;
        double m_blockMomentumAsTimeConstantPerWorker;
        size_t m_syncPeriodPerWorker;
        ::CNTK::DistributedCommunicatorPtr m_communicator;
        bool m_someWorkerHasFinished;
    
        if (layerType == 'perceptron') // complete network
    {
        m_net->RenameNode(output, L'HLast');
    }
    
        wstring origModelFileName = config(L'origModelFileName', L'');
    wstring refNodeName = config(L'refNodeName', L'');
    
        // legacy parameters that have changed spelling
    if (config.Find(L'DoneFile')) // variables follow camel case (start with lower-case letters)
        InvalidArgument('Legacy spelling of 'DoneFile' no longer allowed. Use 'doneFile'.');
    
                // get the count
            auto countStr = stringParse.substr(tokenStart, tokenLength);
            Trim(countStr);
    
    
    {    m_inputValues[rootNode] = move(inputs);
    m_learnableParameters[rootNode] = move(learnableParameters);
}
    
    public:
    ComputationNetworkBuilder(ComputationNetwork& net)
        : net(net)
    {
    }
    
                float totalThroughput = secondsSinceLastReport > 0 ? (float)totalSamplesProcessedSinceLastReport / ((float)secondsSinceLastReport * 1000.0f) : 0.0f ; 
            float throughputPerWorker = totalThroughput / m_numWorkers; 
    
    
    {        if (showSyncPerfStats)
        {
            aggregationTimer.Stop();
            double gradientAggregationTime = aggregationTimer.ElapsedSeconds();
            fprintf(stderr, 'Actual gradient aggregation time: %.6g\n', gradientAggregationTime);
        }
    }
    
        // Allocate the input values layer
    Values<float> inputBuffer(1);
    inputBuffer[0].m_buffer = { 2 };
    
      static void setInitialized(bool f) { data_.initialized = f; }
    
    #include 'DHTNode.h'
#include 'DHTBucket.h'
#include 'DHTBucketTree.h'
#include 'DHTTaskQueue.h'
#include 'DHTTaskFactory.h'
#include 'DHTTask.h'
#include 'util.h'
#include 'LogFactory.h'
#include 'Logger.h'
#include 'fmt.h'
    
    
    {  const int clen = bittorrent::getCompactLength(family_);
  // nodes
  for (std::vector<std::shared_ptr<DHTNode>>::const_iterator i = nodes_.begin(),
                                                             eoi = nodes_.end();
       i != eoi; ++i) {
    const std::shared_ptr<DHTNode>& node = *i;
    // Write IP address + port in Compact IP-address/port info form.
    unsigned char compactPeer[COMPACT_LEN_IPV6];
    int compactlen = bittorrent::packcompact(compactPeer, node->getIPAddress(),
                                             node->getPort());
    if (compactlen != clen) {
      memset(compactPeer, 0, clen);
    }
    uint8_t clen1 = clen;
    // 1byte compact peer format length
    WRITE_CHECK(fp, &clen1, sizeof(clen1));
    // 7bytes reserved
    WRITE_CHECK(fp, zero, 7);
    // clen bytes compact peer
    WRITE_CHECK(fp, compactPeer, static_cast<size_t>(clen));
    // 24-clen bytes reserved
    WRITE_CHECK(fp, zero, static_cast<size_t>(24 - clen));
    // 20bytes: node ID
    WRITE_CHECK(fp, node->getID(), DHT_ID_LENGTH);
    // 4bytes reserved
    WRITE_CHECK(fp, zero, 4);
  }
  if (fp.close() == EOF) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  if (!File(filenameTemp).renameTo(filename)) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  A2_LOG_INFO('DHT routing table was saved successfully');
}
    
    public:
  DHTRoutingTableSerializer(int family);
    
    #include 'common.h'
    
    class DHTTaskExecutor {
private:
  int numConcurrent_;
  std::vector<std::shared_ptr<DHTTask>> execTasks_;
  std::deque<std::shared_ptr<DHTTask>> queue_;
    }
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
      virtual void
  addPeriodicTask2(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    
    {  void updateTokenSecret();
};