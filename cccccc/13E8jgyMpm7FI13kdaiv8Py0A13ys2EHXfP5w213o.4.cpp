
        
        namespace xla {
namespace gpu {
    }
    }
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    REGISTER_XLA_OP(Name('ScatterNd').CompileTimeConstantInput('shape'),
                ScatterNdOp);
    
    
    {}  // namespace mate
    
    
    {  DISALLOW_COPY_AND_ASSIGN(GlobalShortcut);
};
    
    #include 'shell/browser/api/event_emitter.h'
    
    // KSI: This function is possibly stupid: it's nonsensical to talk about the entire
// cache being snapshotted -- we want some subtree to be snapshotted, at least.
// However, if you quickly release the superblock, you'll release any snapshotting of
// secondary index nodes that you could not possibly access.
void get_btree_superblock_and_txn_for_reading(
        cache_conn_t *cache_conn,
        cache_snapshotted_t snapshotted,
        scoped_ptr_t<real_superblock_t> *got_superblock_out,
        scoped_ptr_t<txn_t> *txn_out) {
    txn_t *txn = new txn_t(cache_conn, read_access_t::read);
    txn_out->init(txn);
    }
    
        for (const auto &pair : name_changes) {
        secondary_index_t definition;
        bool success = get_secondary_index(
            &sindex_block, sindex_name_t(pair.first), &definition);
        guarantee(success);
        success = delete_secondary_index(&sindex_block, sindex_name_t(pair.first));
        guarantee(success);
    }
    
    // Like ASSERT_DEATH, but continues on to successive tests in the
// test case, if any:
# define EXPECT_DEATH(statement, regex) \
    EXPECT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
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
    
    // When this flag is specified, tests' order is randomized on every iteration.
GTEST_DECLARE_bool_(shuffle);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28>
class ValueArray28 {
 public:
  ValueArray28(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
      v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12),
      v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18),
      v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24),
      v25_(v25), v26_(v26), v27_(v27), v28_(v28) {}
    }
    
    template <GTEST_1_TYPENAMES_(T)>
class GTEST_1_TUPLE_(T) {
 public:
  template <int k> friend class gtest_internal::Get;
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28>
struct Templates28 {
  typedef TemplateSel<T1> Head;
  typedef Templates27<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27,
      T28> Tail;
};
    
    TEST(AutoCompactTest, ReadHalf) { DoReads(kCount / 2); }
    
      // Return an iterator that yields the contents of the memtable.
  //
  // The caller must ensure that the underlying MemTable remains live
  // while the returned iterator is live.  The keys returned by this
  // iterator are internal keys encoded by AppendInternalKey in the
  // db/format.{h,cc} module.
  Iterator* NewIterator();
    
    template <typename Key, class Comparator>
void SkipList<Key, Comparator>::Insert(const Key& key) {
  // TODO(opt): We can use a barrier-free variant of FindGreaterOrEqual()
  // here since Insert() is externally synchronized.
  Node* prev[kMaxHeight];
  Node* x = FindGreaterOrEqual(key, prev);
    }
    
    #include 'db/dbformat.h'
#include 'leveldb/cache.h'
#include 'leveldb/table.h'
#include 'port/port.h'
    
      // Number of keys between restart points for delta encoding of keys.
  // This parameter can be changed dynamically.  Most clients should
  // leave this parameter alone.
  int block_restart_interval = 16;
    
    
    {}  // namespace leveldb
    
    class Block {
 public:
  // Initialize the block with the specified contents.
  explicit Block(const BlockContents& contents);
    }
    
    static const int kVerbose = 1;
    
    TEST(CacheTest, NewId) {
  uint64_t a = cache_->NewId();
  uint64_t b = cache_->NewId();
  ASSERT_NE(a, b);
}
    
        // Finish and check for builder errors
    s = builder->Finish();
    if (s.ok()) {
      meta->file_size = builder->FileSize();
      assert(meta->file_size > 0);
    }
    delete builder;
    
                Platform::String ^ GetEnglishValueFromLocalizedDigits(const std::wstring& localizedString) const
            {
                if (m_resolvedName == L'en-US')
                {
                    return ref new Platform::String(localizedString.c_str());
                }
    }
    
    void CHistoryCollector::AddOpenBraceToHistory()
{
    AddCommand(std::make_shared<CParentheses>(IDC_OPENP));
    int ichOpndStart = IchAddSzToEquationSz(CCalcEngine::OpCodeToString(IDC_OPENP), -1);
    PushLastOpndStart(ichOpndStart);
    }
    
    
    {
    {        m_maxDecimalValueStrings[i] = maxVal.ToString(10, FMT_FLOAT, m_precision);
    }
}
    
    
    {
    {    private:
        bool m_hasExponent;
        bool m_hasDecimal;
        size_t m_decPtIndex;
        wchar_t m_decSymbol;
        CalcNumSec m_base;
        CalcNumSec m_exponent;
    };
}

    
        res = ncclAllReduce(inputbuffer, outputbuffer, count, s_ncclTypeLookup.Lookup(dtype), ncclRedOpFromMpiOp(op), m_ncclComm, m_stream);
    
        template <typename classType>
    static void ForwardPropImpl(classType& c, const FrameRange& fr, bool allowBroadcast)
    {
        size_t rank = c.DetermineElementwiseTensorRank();
        auto result =             c.ValueTensorFor(rank, fr);
        auto input0 = c.InputRef(0).ValueTensorFor(rank, allowBroadcast ? fr.AllowBroadcast() : fr);
        auto input1 = c.InputRef(1).ValueTensorFor(rank, allowBroadcast ? fr.AllowBroadcast() : fr);
        result.AssignElementwiseProductOf(input0, input1);
    }
    
    // -----------------------------------------------------------------------
// Wrapped<T> -- wraps non-class primitive C++ type into a class, like 'double'.
// (It can also be used for class types, but better use BoxOf<> below directly.)
// -----------------------------------------------------------------------
    
                }
            else if (parameter.size() == 7)
            {
                int id = 2; // skip weightNode and inputValueNode
    
        virtual ComputationNetworkPtr BuildNetworkFromDescription(ComputationNetwork* = nullptr)
    {
        if (m_net->GetTotalNumberOfNodes() < 1) // not built yet
            LoadNetworkFromConfig(m_networkConfig);
        else
            m_net->ResetEvalTimeStamps();
        return m_net;
    }
    
    // copy constructor, creates a new disconnected copy of this node
// doesn't copy everything, so use for macro expansion only (it's private)
// copyMe - node to copy
template <typename ElemType>
NDLNode<ElemType>::NDLNode(const NDLNode<ElemType>& copyMe)
{
    m_name        = copyMe.m_name;        // value on the left of the equals
    m_value       = copyMe.m_value;       // value on the right of the equals (CN node name, or value)
    m_parent      = copyMe.m_parent;      // parent script
    m_type        = copyMe.m_type;        // type of node
    m_paramString = copyMe.m_paramString; // parameter of a function/array
    m_paramMacro  = copyMe.m_paramMacro;  // parameter of a macro (the variables used in the macro definition)
    // don't copy over m_parameters, they will be reparsed after the copy
    }
    
    bool ComputationNetwork::IsTypicalCriterionNode(ComputationNodeBasePtr nodePtr)
{
    // TODO: just use return!
    if (nodePtr->OperationName() == OperationNameOf(SquareErrorNode) ||
        nodePtr->OperationName() == OperationNameOf(LogisticNode) ||
        nodePtr->OperationName() == OperationNameOf(CrossEntropyWithSoftmaxNode) ||
        nodePtr->OperationName() == OperationNameOf(SequenceWithSoftmaxNode) ||
        nodePtr->OperationName() == OperationNameOf(LatticeSequenceWithSoftmaxNode) ||
        nodePtr->OperationName() == OperationNameOf(CrossEntropyNode) ||
        nodePtr->OperationName() == OperationNameOf(ClassBasedCrossEntropyWithSoftmaxNode) ||
        nodePtr->OperationName() == OperationNameOf(ClassificationErrorNode) ||
        nodePtr->OperationName() == OperationNameOf(ForwardBackwardNode) ||
#ifdef COMING_SOON
        nodePtr->OperationName() == OperationNameOf(CRFNode) ||
#endif
        nodePtr->OperationName() == OperationNameOf(DummyCriterionNode))
        return true;
    }
    
    public:
    // -----------------------------------------------------------------------
    // evaluation: traversal
    // These three functions create and cache traversal orders of the network.
    // -----------------------------------------------------------------------
    
        template <class InputNodeType>
    shared_ptr<ComputationNode<ElemType>> CreateCastNode(const std::wstring& nodeName);
    
    
    {    // call the evaluator
    SimpleOutputWriter<ElemType> eval(this->m_net);
    eval.WriteOutput(*m_writer, outNodeNames);
}
    
        inline void transpose(ElemType *src, ElemType *dst, const int N, const int M)
    {
        for (auto n = 0; n < N*M; n++) {
            auto i = n / N;
            auto j = n%N;
            dst[n] = src[M*j + i];
        }
    }
    
    #endif // D_DHT_RESPONSE_MESSAGE_H

    
    void DHTRoutingTable::getClosestKNodes(
    std::vector<std::shared_ptr<DHTNode>>& nodes,
    const unsigned char* key) const
{
  dht::findClosestKNodes(nodes, root_.get(), key);
}
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
      void setRoutingTable(DHTRoutingTable* routingTable);
    
    DNSCache::DNSCache(const DNSCache& c) = default;
    
        CacheEntry(const std::string& hostname, uint16_t port);
    CacheEntry(const CacheEntry& c);
    ~CacheEntry();
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    largestOutputKeyPrefix
 * Signature: (J)[B
 */
jbyteArray Java_org_rocksdb_CompactionJobStats_largestOutputKeyPrefix(
    JNIEnv* env, jclass, jlong jhandle) {
  auto* compact_job_stats =
      reinterpret_cast<rocksdb::CompactionJobStats*>(jhandle);
  return rocksdb::JniUtil::copyBytes(env,
      compact_job_stats->largest_output_key_prefix);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setSizeRatio
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setSizeRatio(
    JNIEnv*, jobject, jlong jhandle, jint jsize_ratio) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->size_ratio = static_cast<unsigned int>(jsize_ratio);
}
    
      jobject jusage_by_type = rocksdb::HashMapJni::construct(
      env, static_cast<uint32_t>(usage_by_type.size()));
  if (jusage_by_type == nullptr) {
    // exception occurred
    return nullptr;
  }
  const rocksdb::HashMapJni::FnMapKV<const rocksdb::MemoryUtil::UsageType, const uint64_t, jobject, jobject>
      fn_map_kv =
      [env](const std::pair<rocksdb::MemoryUtil::UsageType, uint64_t>& pair) {
        // Construct key
        const jobject jusage_type =
            rocksdb::ByteJni::valueOf(env, rocksdb::MemoryUsageTypeJni::toJavaMemoryUsageType(pair.first));
        if (jusage_type == nullptr) {
          // an error occurred
          return std::unique_ptr<std::pair<jobject, jobject>>(nullptr);
        }
        // Construct value
        const jobject jusage_value =
            rocksdb::LongJni::valueOf(env, pair.second);
        if (jusage_value == nullptr) {
          // an error occurred
          return std::unique_ptr<std::pair<jobject, jobject>>(nullptr);
        }
        // Construct and return pointer to pair of jobjects
        return std::unique_ptr<std::pair<jobject, jobject>>(
            new std::pair<jobject, jobject>(jusage_type,
                                            jusage_value));
      };
    
    /*
 * Class:     org_rocksdb_ThreadStatus
 * Method:    microsToStringNative
 * Signature: (J)Ljava/lang/String;
 */
jstring Java_org_rocksdb_ThreadStatus_microsToStringNative(
    JNIEnv* env, jclass, jlong jmicros) {
  auto str =
      rocksdb::ThreadStatus::MicrosToString(static_cast<uint64_t>(jmicros));
  return rocksdb::JniUtil::toJavaString(env, &str, true);
}
    
    namespace rocksdb {
TraceWriterJniCallback::TraceWriterJniCallback(
    JNIEnv* env, jobject jtrace_writer)
    : JniCallback(env, jtrace_writer) {
  m_jwrite_proxy_methodid =
      AbstractTraceWriterJni::getWriteProxyMethodId(env);
  if(m_jwrite_proxy_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    #include <jni.h>
#include <memory>
    
    /*
 * Class:     org_rocksdb_TransactionDB
 * Method:    open
 * Signature: (JJLjava/lang/String;)J
 */
jlong Java_org_rocksdb_TransactionDB_open__JJLjava_lang_String_2(
    JNIEnv* env, jclass, jlong joptions_handle,
    jlong jtxn_db_options_handle, jstring jdb_path) {
  auto* options = reinterpret_cast<rocksdb::Options*>(joptions_handle);
  auto* txn_db_options =
      reinterpret_cast<rocksdb::TransactionDBOptions*>(jtxn_db_options_handle);
  rocksdb::TransactionDB* tdb = nullptr;
  const char* db_path = env->GetStringUTFChars(jdb_path, nullptr);
  if (db_path == nullptr) {
    // exception thrown: OutOfMemoryError
    return 0;
  }
  rocksdb::Status s =
      rocksdb::TransactionDB::Open(*options, *txn_db_options, db_path, &tdb);
  env->ReleaseStringUTFChars(jdb_path, db_path);
    }