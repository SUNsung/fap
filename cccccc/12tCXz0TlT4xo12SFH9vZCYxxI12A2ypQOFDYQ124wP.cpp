
        
        #endif // BITCOIN_QT_NETWORKSTYLE_H

    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
        s_one[31] = 1;
    /* Check against pubkey creation when the basepoint is the generator */
    for (i = 0; i < 100; ++i) {
        secp256k1_sha256_t sha;
        unsigned char s_b32[32];
        unsigned char output_ecdh[32];
        unsigned char output_ser[32];
        unsigned char point_ser[33];
        size_t point_ser_len = sizeof(point_ser);
        secp256k1_scalar s;
    }
    
    static void secp256k1_ecdsa_recoverable_signature_save(secp256k1_ecdsa_recoverable_signature* sig, const secp256k1_scalar* r, const secp256k1_scalar* s, int recid) {
    if (sizeof(secp256k1_scalar) == 32) {
        memcpy(&sig->data[0], r, 32);
        memcpy(&sig->data[32], s, 32);
    } else {
        secp256k1_scalar_get_b32(&sig->data[0], r);
        secp256k1_scalar_get_b32(&sig->data[32], s);
    }
    sig->data[64] = recid;
}
    
    
//------------------------------------------------------------------------------
// Primary API functions
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    
    {
    {        if (bytes <= 64) {
            if (bytes < 64) {
                for (i = 0;i < bytes;++i) ctarget[i] = c[i];
            }
            input[12] = j12;
            input[13] = j13;
            return;
        }
        bytes -= 64;
        c += 64;
    }
}

    
    ; shuffle xDxC -> DC00
_SHUF_DC00:              ddq 0x0b0a090803020100FFFFFFFFFFFFFFFF
*/
    
    #include <stdio.h>
#include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/coding.h'
    
    struct leveldb_filterpolicy_t : public FilterPolicy {
  virtual ~leveldb_filterpolicy_t() { (*destructor_)(state_); }
    }
    
      // Make multiple inputs so we need to compact.
  for (int i = 0; i < 2; i++) {
    Build(10);
    dbi->TEST_CompactMemTable();
    Corrupt(kTableFile, 100, 1);
    env_.SleepForMicroseconds(100000);
  }
  dbi->CompactRange(nullptr, nullptr);
    
    
    {}  // namespace leveldb
    
      // Position at the first key in the source.  The iterator is Valid()
  // after this call iff the source is not empty.
  virtual void SeekToFirst() = 0;
    
      // Leveldb will write up to this amount of bytes to a file before
  // switching to a new one.
  // Most clients should leave this parameter alone.  However if your
  // filesystem is more efficient with larger files, you could
  // consider increasing the value.  The downside will be longer
  // compactions and hence longer latency/performance hiccups.
  // Another reason to increase this parameter might be when you are
  // initially populating a large database.
  size_t max_file_size = 2 * 1024 * 1024;
    
      // Add key,value to the table being constructed.
  // REQUIRES: key is after any previously added key according to comparator.
  // REQUIRES: Finish(), Abandon() have not been called
  void Add(const Slice& key, const Slice& value);
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_BUILDER_H_

    
    
    {  const FilterPolicy* policy_;
  std::string keys_;             // Flattened key contents
  std::vector<size_t> start_;    // Starting index in keys_ of each key
  std::string result_;           // Filter data computed so far
  std::vector<Slice> tmp_keys_;  // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
};
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
        // this returns the map directly (read-only) and will lazily initialize it for a given seed
    const std::vector<INDEXTYPE>& operator()(size_t seed) // throw()
    {
        // if wrong seed then lazily recache the sequence
        if (seed != currentseed && randomizationrange != randomizeDisable)
        {
            // test for numeric overflow
            if (map.size() - 1 != (INDEXTYPE)(map.size() - 1))
                RuntimeError('RandomOrdering: INDEXTYPE has too few bits for this corpus');
            // 0, 1, 2...
            foreach_index (t, map)
                map[t] = (INDEXTYPE) t;
    }
    }
    
    public:
    // constructor
    // This constructs a new model from an existing one by:
    //  - iterating over all nodes
    //  - trying a sequence of edit functions until one made an edit
    //    This is like pattern matching: The first edit function that matches will return an updated node.
    //  - assemble a new network that consists of the old network with edits applied
    // Note that the old model is not edited in-place; instead a new copy is made that shares
    // unchanged nodes with the original one.
    ComputationNetworkWithEdits(const IConfigRecordPtr configp) :
        ComputationNetwork()
    {
        // get config parameters
        let& config = *configp;
        SetTraceLevel(config[L'traceLevel']);
        let& net = config[L'inputModel'].AsRef<ComputationNetwork>();
        let editFunctions = ScriptableObjects::ConfigArray::FlattenedVectorFrom<ConfigLambda>(config[L'editFunctions']);
        let additionalRoots = ScriptableObjects::ConfigArray::FlattenedVectorFrom<ComputationNodeBasePtr>(config[L'additionalRoots']);
    }
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      // Put key-value
  s = db->Put(WriteOptions(), 'key1', 'value');
  assert(s.ok());
  std::string value;
  // get value
  s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.ok());
  assert(value == 'value');
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
    namespace rocksdb {
    }
    
      OptimisticTransactionDB(const OptimisticTransactionDB&) = delete;
  void operator=(const OptimisticTransactionDB&) = delete;
    
            int setContext(redisAsyncContext * ac) {
            if (ac->ev.data != NULL) {
                return REDIS_ERR;
            }
            m_ctx = ac;
            m_ctx->ev.data = this;
            m_ctx->ev.addRead = RedisQtAddRead;
            m_ctx->ev.delRead = RedisQtDelRead;
            m_ctx->ev.addWrite = RedisQtAddWrite;
            m_ctx->ev.delWrite = RedisQtDelWrite;
            m_ctx->ev.cleanup = RedisQtCleanup;
            return REDIS_OK;
        }
    
        signals:
        void finished();
    
    #include 'swoole.h'
#include 'coroutine.h'
    
            size_t size = cache_list.size();
        if (size == cache_capacity && size > 0)
        {
            auto del = cache_list.back();
            cache_map.erase(del.first);
            cache_list.pop_back();
        }
    
    static pid_t create_server()
{
    pid_t pid;
    swoole_shell_exec('php server/tcp.php', &pid, 1);
    sleep(1); // wait 1s
    return pid;
}
    
    TEST(coroutine_base, yield_resume)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        long cid = Coroutine::get_current_cid();
        Coroutine *co = Coroutine::get_by_cid(cid);
        co->yield();
        *(long *) arg = Coroutine::get_current_cid();
    }, &_cid);
    }
    
    static int thread_onTask(swThreadPool *pool, void *task, int task_len)
{
    sw_atomic_long_t *n = (sw_atomic_long_t *) task;
    sw_atomic_fetch_add(n, 1);
    if (*n == N - 1)
    {
        write(_pipe, (void*) n, sizeof(long));
    }
    return SW_OK;
}
    
    }
TEST(os_signal, swSignalfd_set)
{
    int ret;
    sigset_t curset;
    
    
    {    return 0;
}
