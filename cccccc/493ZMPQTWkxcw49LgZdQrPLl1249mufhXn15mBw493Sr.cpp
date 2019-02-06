
        
        // Calls the registered C++ shape inference function for <node> (a serialized
// NodeDef).
// Should not be called for shape functions that access input tensors; constant
// input tensor values are not made available, and so the inferred shapes will
// be less precise than they could be.
//
// Returns an error, or OK, in <out_status> according to whether the shape
// inference was successful.
//
// On success, returns a vector populated with the inferred output shapes (as
// serialized CppShapeInferenceResult protos) followed by a serialized
// CppShapeInferenceInputsNeeded proto.
//
// This is temporary code to be used during the migration
// from python shape inference functions to C++ shape inference functions.
std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status);
    
      void Compute(OpKernelContext* context) override {
    // Output a scalar string.
    Tensor* output_tensor = nullptr;
    OP_REQUIRES_OK(context,
                   context->allocate_output(0, TensorShape(), &output_tensor));
    auto output = output_tensor->scalar<string>();
    }
    
    REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_

    
    struct TFTensorDeleter {
  void operator()(TF_Tensor* p) const { TF_DeleteTensor(p); }
};
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
      // Acquire the per-Entry mutex without holding the map mutex. Initializing
  // an Executor may be expensive, so we want to allow concurrent
  // initialization of different entries.
  mutex_lock lock{entry->configurations_mutex};
  for (const auto& iter : entry->configurations) {
    if (iter.first.plugin_config == config.plugin_config &&
        iter.first.device_options == config.device_options) {
      VLOG(2) << 'hit in cache';
      return iter.second.get();
    }
  }
    
    
    {  SE_DISALLOW_COPY_AND_ASSIGN(ExecutorCache);
};
    
      CorruptionTest() {
    tiny_cache_ = NewLRUCache(100);
    options_.env = &env_;
    options_.block_cache = tiny_cache_;
    dbname_ = test::TmpDir() + '/corruption_test';
    DestroyDB(dbname_, options_);
    }
    
        std::string extra;
    if (bytes_ > 0) {
      // Rate is computed on actual elapsed time, not the sum of per-thread
      // elapsed times.
      double elapsed = (finish_ - start_) * 1e-6;
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / elapsed);
      extra = rate;
    }
    AppendWithSpace(&extra, message_);
    
      // Unlock while reading from files and memtables
  {
    mutex_.Unlock();
    // First look in the memtable, then in the immutable memtable (if any).
    LookupKey lkey(key, snapshot);
    if (mem->Get(lkey, value, &s)) {
      // Done
    } else if (imm != nullptr && imm->Get(lkey, value, &s)) {
      // Done
    } else {
      s = current->Get(options, lkey, value, &stats);
      have_stat_update = true;
    }
    mutex_.Lock();
  }
    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
      void SetFrom(const ParsedInternalKey& p) {
    rep_.clear();
    AppendInternalKey(&rep_, p);
  }
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    
    {    // Some corruption was detected.  'size' is the approximate number
    // of bytes dropped due to the corruption.
    virtual void Corruption(size_t bytes, const Status& status) = 0;
  };
    
      Status WriteDescriptor() {
    std::string tmp = TempFileName(dbname_, 1);
    WritableFile* file;
    Status status = env_->NewWritableFile(tmp, &file);
    if (!status.ok()) {
      return status;
    }
    }
    
    
    {        // Advance to next key in the valid key space
        if (key(pos) < key(current)) {
          pos = MakeKey(key(pos) + 1, 0);
        } else {
          pos = MakeKey(key(pos), gen(pos) + 1);
        }
      }
    
        const auto query_duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            code_profiler_data_end.getWallTime() -
            code_profiler_data_->getWallTime());
    
      /// The name of the scheduled query.
  std::string name;
    
    class ExtensionProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<ExtensionIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ExtensionProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_call(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_shutdown(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ExtensionProcessor(::apache::thrift::stdcxx::shared_ptr<ExtensionIf> iface) :
    iface_(iface) {
    processMap_['ping'] = &ExtensionProcessor::process_ping;
    processMap_['call'] = &ExtensionProcessor::process_call;
    processMap_['shutdown'] = &ExtensionProcessor::process_shutdown;
  }
    }
    
    using namespace  ::osquery::extensions;
    
    
    {};
    
    
namespace osquery {
namespace tables {
    }
    }
    
    Status WriteBatchBase::DeleteRange(const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(begin_key_slice, end_key_slice);
}
    
    std::vector<CompressionType> GetSupportedCompressions();
    
    
    {}  // namespace rocksdb
#endif  // !ROCKSDB_LITE

    
    // Database with TTL support.
//
// USE-CASES:
// This API should be used to open the db when key-values inserted are
//  meant to be removed from the db in a non-strict 'ttl' amount of time
//  Therefore, this guarantees that key-values inserted will remain in the
//  db for >= ttl amount of time and the db will make efforts to remove the
//  key-values as soon as possible after ttl seconds of their insertion.
//
// BEHAVIOUR:
// TTL is accepted in seconds
// (int32_t)Timestamp(creation) is suffixed to values in Put internally
// Expired TTL values deleted in compaction only:(Timestamp+ttl<time_now)
// Get/Iterator may return expired entries(compaction not run on them yet)
// Different TTL may be used during different Opens
// Example: Open1 at t=0 with ttl=4 and insert k1,k2, close at t=2
//          Open2 at t=3 with ttl=5. Now k1,k2 should be deleted at t>=5
// read_only=true opens in the usual read-only mode. Compactions will not be
//  triggered(neither manual nor automatic), so no expired entries removed
//
// CONSTRAINTS:
// Not specifying/passing or non-positive TTL behaves like TTL = infinity
//
// !!!WARNING!!!:
// Calling DB::Open directly to re-open a db created by this API will get
//  corrupt values(timestamp suffixed) and no ttl effect will be there
//  during the second Open, so use this API consistently to open the db
// Be careful when passing ttl with a small positive value because the
//  whole database may be deleted in a small amount of time
    
        // create an object from std::multimap
    std::multimap<std::string, bool> c_mmap
    {
        {'one', true}, {'two', true}, {'three', false}, {'three', true}
    };
    json j_mmap(c_mmap); // only one entry for key 'three' is used
    
        // print values
    std::cout << object << '\n';
    std::cout << null << '\n';