
        
          // Run shape inference.
  tensorflow::shape_inference::InferenceContext c(
      graph_def_version, &node, op_reg_data->op_def, input_shapes,
      input_tensors, input_tensor_as_shapes_protos,
      input_handle_shapes_and_types);
  TF_RETURN_IF_ERROR(c.construction_status());
    
    // Names that corresponds to a single input parameter.
class ParamNames {
 public:
  // Create param based on Arg.
  ParamNames(const string& name, const string& rename_to) : name_(name) {
    rename_to_ = AvoidPythonReserved(rename_to);
  }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Exposes the family of FFT routines as pre-canned high performance calls for
// use in conjunction with the StreamExecutor abstraction.
//
// Note that this interface is optionally supported by platforms; see
// StreamExecutor::SupportsFft() for details.
//
// This abstraction makes it simple to entrain FFT operations on GPU data into
// a Stream -- users typically will not use this API directly, but will use the
// Stream builder methods to entrain these operations 'under the hood'. For
// example:
//
//  DeviceMemory<std::complex<float>> x =
//    stream_exec->AllocateArray<std::complex<float>>(1024);
//  DeviceMemory<std::complex<float>> y =
//    stream_exec->AllocateArray<std::complex<float>>(1024);
//  // ... populate x and y ...
//  Stream stream{stream_exec};
//  std::unique_ptr<Plan> plan =
//     stream_exec.AsFft()->Create1dPlan(&stream, 1024, Type::kC2CForward);
//  stream
//    .Init()
//    .ThenFft(plan.get(), x, &y);
//  SE_CHECK_OK(stream.BlockHostUntilDone());
//
// By using stream operations in this manner the user can easily intermix custom
// kernel launches (via StreamExecutor::ThenLaunch()) with these pre-canned FFT
// routines.
    
    // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
      void AcquireLoad(ThreadState* thread) {
    int dummy;
    port::AtomicPointer ap(&dummy);
    int count = 0;
    void *ptr = nullptr;
    thread->stats.AddMessage('(each op is 1000 loads)');
    while (count < 100000) {
      for (int i = 0; i < 1000; i++) {
        ptr = ap.Acquire_Load();
      }
      count++;
      thread->stats.FinishedSingleOp();
    }
    if (ptr == nullptr) exit(1); // Disable unused variable warning.
  }
    
      if (!env_->FileExists(CurrentFileName(dbname_))) {
    if (options_.create_if_missing) {
      s = NewDB();
      if (!s.ok()) {
        return s;
      }
    } else {
      return Status::InvalidArgument(
          dbname_, 'does not exist (create_if_missing is false)');
    }
  } else {
    if (options_.error_if_exists) {
      return Status::InvalidArgument(
          dbname_, 'exists (error_if_exists is true)');
    }
  }
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
    Status Writer::AddRecord(const Slice& slice) {
  const char* ptr = slice.data();
  size_t left = slice.size();
    }
    
    
    {  // Check that introducing an older log file does not cause it to be re-read.
  Close();
  MakeLogFile(old_log+1, 2000, 'hello', 'stale write');
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
}
    
    
    {
    {    // Compare against model iterator
    for (std::set<Key>::reverse_iterator model_iter = keys.rbegin();
         model_iter != keys.rend();
         ++model_iter) {
      ASSERT_TRUE(iter.Valid());
      ASSERT_EQ(*model_iter, iter.key());
      iter.Prev();
    }
    ASSERT_TRUE(!iter.Valid());
  }
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
    
    /*! \brief collection of rowset */
class RowSetCollection {
 public:
  /*! \brief data structure to store an instance set, a subset of
   *  rows (instances) associated with a particular node in a decision
   *  tree. */
  struct Elem {
    const size_t* begin{nullptr};
    const size_t* end{nullptr};
    int node_id{-1};
      // id of node associated with this instance set; -1 means uninitialized
    Elem()
         = default;
    Elem(const size_t* begin,
         const size_t* end,
         int node_id)
        : begin(begin), end(end), node_id(node_id) {}
    }
    }
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
      std::vector<std::string> DumpModel(const FeatureMap& fmap, bool with_stats,
                                     std::string format) const {
    std::vector<std::string> dump;
    for (const auto & tree : trees) {
      dump.push_back(tree->DumpModel(fmap, with_stats, format));
    }
    return dump;
  }
  void CommitModel(std::vector<std::unique_ptr<RegTree> >&& new_trees,
                   int bst_group) {
    for (auto & new_tree : new_trees) {
      trees.push_back(std::move(new_tree));
      tree_info.push_back(bst_group);
    }
    param.num_trees += static_cast<int>(new_trees.size());
  }
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
      // convert constructor
  {
    Span<DerivedClass> derived;
    Span<BaseClass> base { derived };
    ASSERT_EQ(base.size(), derived.size());
    ASSERT_EQ(base.data(), derived.data());
  }
    
    
    {Status startDistributed() {
  if (!FLAGS_disable_distributed) {
    Dispatcher::addService(std::make_shared<DistributedRunner>());
    return Status(0, 'OK');
  } else {
    return Status(1, 'Distributed query service not enabled.');
  }
}
} // namespace osquery

    
        while (waiting_ != 0) {
      /* spinlock */
    }
    
      /**
   * @brief Subscribe to this publisher.
   *
   * @details If successful the publisher will start forwarding events to the
   * provided ev2::Subscription.
   */
  virtual ExpectedSuccess<Error> subscribe(
      std::shared_ptr<Subscription> subscription) = 0;
    
      /**
   * @brief Retrieve the subscriber name.
   *
   * @returns A const reference to the subscriber name with the lifetime of the
   * ev2::Subscription object.
   */
  const std::string& subscriber() const;
  /**
   * @brief Retrieve the publisher type.
   *
   * @returns A const reference to std::type_index of the subscriber with the
   * lifetime of the ev2::Subscription.
   */
  const std::type_index& pubType() const;
    
      TestSubscription sub('test');
    
    class NullPublisher : public ev2::Publisher {
 public:
  explicit NullPublisher(const std::string& name);
  ~NullPublisher() = default;
    }
    
    /**
 * @brief Deserialize a RowTyped object from JSON object.
 *
 * @param obj the input JSON value (should be an object).
 * @param r [output] the output Row structure.
 *
 * @return Status indicating the success or failure of the operation.
 */
Status deserializeRow(const rapidjson::Value& obj, RowTyped& r);
    
    class ExtensionClient : virtual public ExtensionIf {
 public:
  ExtensionClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ExtensionClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ping(ExtensionStatus& _return);
  void send_ping();
  void recv_ping(ExtensionStatus& _return);
  void call(ExtensionResponse& _return, const std::string& registry, const std::string& item, const ExtensionPluginRequest& request);
  void send_call(const std::string& registry, const std::string& item, const ExtensionPluginRequest& request);
  void recv_call(ExtensionResponse& _return);
  void shutdown();
  void send_shutdown();
  void recv_shutdown();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};
    
    #include 'common.h'
    
    
    {  void deserialize(const std::string& filename);
};
    
      virtual void startup() = 0;
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    class DHTTask;
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
    namespace aria2 {
    }
    
    // Three Way Quick Sort
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
    private:
    void __inorderTraversal(TreeNode* node, vector<int> &res){
    }
    
    #include <iostream>
#include <vector>
#include <stack>
    
            TreeNode* p = root;
        while(p != NULL || !stack.empty()){
            if(p != NULL){
                stack.push(p);
                output.push(p);
                p = p->right;
            }
            else{
                p = stack.top();
                stack.pop();
                p = p->left;
            }
        }