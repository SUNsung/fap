
        
        class TestRandomAccessFile : public RandomAccessFile {
  // The file contents is 10 bytes of all A's
  Status Read(uint64 offset, size_t n, StringPiece* result,
              char* scratch) const override {
    Status s;
    for (int i = 0; i < n; ++i) {
      if (offset + i >= 10) {
        n = i;
        s = errors::OutOfRange('EOF');
        break;
      }
      scratch[i] = 'A';
    }
    *result = StringPiece(scratch, n);
    return s;
  }
};
    
    #include <string>
    
      double SmoothnessConstant() const final { return gamma; }
    
      // A separate index mapping name to Node*, for use by FeedInputs,
  // FetchOutputs, and PruneForTargets
  NameIndex name_index;
  name_index.reserve(g->num_nodes());
  for (Node* n : g->nodes()) {
    name_index[n->name()] = n;
  }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
    leveldb_env_t* leveldb_create_default_env() {
  leveldb_env_t* result = new leveldb_env_t;
  result->rep = Env::Default();
  result->is_default = true;
  return result;
}
    
    namespace leveldb {
    }
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    TEST(FindFileTest, Single) {
  Add('p', 'q');
  ASSERT_EQ(0, Find('a'));
  ASSERT_EQ(0, Find('p'));
  ASSERT_EQ(0, Find('p1'));
  ASSERT_EQ(0, Find('q'));
  ASSERT_EQ(1, Find('q1'));
  ASSERT_EQ(1, Find('z'));
    }
    
      // The name of the comparator.  Used to check for comparator
  // mismatches (i.e., a DB created with one comparator is
  // accessed using a different comparator.
  //
  // The client of this package should switch to a new name whenever
  // the comparator implementation changes in a way that will cause
  // the relative ordering of any two keys to change.
  //
  // Names starting with 'leveldb.' are reserved and should not be used
  // by any clients of this package.
  virtual const char* Name() const = 0;
    
    // modelParallelSGD can be combined with dataParallelSGD/modelAveragingSGD/blockMomentumSGD 
// but dataParallelSGD/modelAveragingSGD/blockMomentumSGD are mutually exclusive (at least at the moment)
// we assign the lower 8 bits to the enumerate data parallelization methods 
// and next 8 bits to model parallelization methods
enum class ParallelizationMethod : int
{
    none = 0,
    dataParallelSGD = 1,
    modelAveragingSGD = 2,
    blockMomentumSGD = 3,
    dataParallelASGD = 4,
    modelParallelSGD = (1 << 8) // Currently unsupported
};
    
    #include <vector>
    
    function<ComputationNetworkPtr(DEVICEID_TYPE)> GetCreateNetworkFn(const ScriptableObjects::IConfigRecord& config)
{
    // createNetwork() is a BrainScript lambda that creates the model
    // We create a C++ wrapper around it, which we then pass to Train().
    auto createNetworkConfigLambda = config[L'createNetwork'].AsPtr<ScriptableObjects::ConfigLambda>();
    return [createNetworkConfigLambda](DEVICEID_TYPE /*deviceId*/)
    {
        // execute the lambda
        vector<ScriptableObjects::ConfigValuePtr> args; // this lambda has no arguments
        ScriptableObjects::ConfigLambda::NamedParams namedArgs;
        let netValue = createNetworkConfigLambda->Apply(move(args), move(namedArgs), L'BuildNetworkFromDescription');
        // typecast the result to the desired type
        return netValue.AsPtr<ComputationNetwork>();
    };
}
    
    
    {    // write dbn file
    net->SaveToDbnFile<ElemType>(net, dbnModelPath);
}
    
    
    {    return std::equal(s1.begin(), s1.end(), s2.begin(), [](const TElement& a, const TElement& b)
    {
        return std::tolower(a) == std::tolower(b);
    });
}
    
    #include 'ComputationNode.h'
#include 'InputAndParamNodes.h'
#include 'ComputationNetworkBuilder.h' // TODO: We should only pull in NewComputationNodeFromConfig(). Nodes should not know about network at large.
#include 'TensorShape.h'
    
        void Dump(const std::string& _processname);
    const std::vector<std::string>& StackList() const;
    
        void Lock(int64_t _timelock);  // ms
    void Lock();
    void Unlock();
    bool IsLocking();
    
    template <class T>
inline void SimplePack(const void* _data, size_t _datalen, AutoBuffer& _outbuf) {
    _outbuf.Write(hton(SimplePackLength<T>(_datalen)));
    _outbuf.Write(_data, _datalen);
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class Test_Spy_Sample {
  public:
    Test_Spy_Sample();
    ~Test_Spy_Sample();
    }
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);
    
    jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const AutoBuffer& ab);
jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const void* _buffer, size_t _length);
void JNU_FreeJbyteArray(JNIEnv* _env, jbyteArray bytes);
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT