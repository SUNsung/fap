
        
         private:
  friend struct base::DefaultSingletonTraits<GlobalMenuBarRegistrarX11>;
    
    v8::Local<v8::Value> Converter<Promise>::ToV8(v8::Isolate* isolate,
                                              Promise val) {
  return val.GetHandle();
}
    
    template <typename P1, typename P2, typename P3, typename P4>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2, P3, P4)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  typename CallbackParamTraits<P3>::LocalType a3;
  typename CallbackParamTraits<P4>::LocalType a4;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2) ||
      !GetNextArgument(args, 0, false, &a3) ||
      !GetNextArgument(args, 0, false, &a4))
    return nullptr;
  return callback.Run(a1, a2, a3, a4);
}
    
    #include 'native_mate/dictionary.h'
#include 'native_mate/scoped_persistent.h'
    
    namespace mate {
    }
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
    namespace {
  // Quasi-lexicographic order: string length first, then string data.
  // Since we don't care about the actual length, we can use this, which
  // lets us ignore the string data a larger proportion of the time.
  struct SortByLengthComparator {
    bool operator()(StringRef lhs, StringRef rhs) const {
      return (lhs.size() < rhs.size() ||
              (lhs.size() == rhs.size() && lhs < rhs));
    }
  };
} // end anonymous namespace
    
      // If this is a getter/setter, the other accessor
  const clang::FunctionDecl *pairedAccessor = nullptr;
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
    bool Punycode::decodePunycodeUTF8(StringRef InputPunycode,
                                  std::string &OutUTF8) {
  std::vector<uint32_t> OutCodePoints;
  if (!decodePunycode(InputPunycode, OutCodePoints))
    return false;
    }
    
      /// A place to keep alive any buffers that are loaded as part of setting up
  /// the frontend inputs.
  SmallVector<std::unique_ptr<llvm::MemoryBuffer>, 4> ConfigurationFileBuffers;
    
    /// Sort a set of paths in an order that's (comparatively) stable against
/// variation in filesystem prefix: lexicographic comparison of the
/// byte-reversals of each path. Used for emitting external dependencies.
std::vector<std::string>
reversePathSortedFilenames(const llvm::ArrayRef<std::string> paths);
    
    namespace
{
static bool ParsePrechecks(const std::string& str)
{
    if (str.empty()) // No empty string allowed
        return false;
    if (str.size() >= 1 && (json_isspace(str[0]) || json_isspace(str[str.size()-1]))) // No padding allowed
        return false;
    if (str.size() != strlen(str.c_str())) // No embedded NUL characters allowed
        return false;
    return true;
}
    }
    
        UniValue v3;
    BOOST_CHECK(v3.setNumStr('32482348723847471234'));
    BOOST_CHECK_THROW(v3.get_int64(), std::runtime_error);
    BOOST_CHECK(v3.setNumStr('1000'));
    BOOST_CHECK_EQUAL(v3.get_int64(), 1000);
    
    /** Encode a Bech32 string. Returns the empty string in case of failure. */
std::string Encode(const std::string& hrp, const std::vector<uint8_t>& values);
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
    Status FaultInjectionTestEnv::NewAppendableFile(const std::string& fname,
                                                WritableFile** result) {
  WritableFile* actual_writable_file;
  Status s = target()->NewAppendableFile(fname, &actual_writable_file);
  if (s.ok()) {
    FileState state(fname);
    state.pos_ = 0;
    {
      MutexLock l(&mutex_);
      if (db_file_state_.count(fname) == 0) {
        new_files_since_last_dir_sync_.insert(fname);
      } else {
        state = db_file_state_[fname];
      }
    }
    *result = new TestWritableFile(state, actual_writable_file, this);
  }
  return s;
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
    // objective for lambda rank
class LambdaRankObj : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
    }
    
      dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/metainfo.binary';
  dmlc::Stream* fs = dmlc::Stream::Create(tmp_file.c_str(), 'w');
  info.SaveBinary(fs);
  delete fs;
    
    // tress
#include '../src/tree/split_evaluator.cc'
#include '../src/tree/tree_model.cc'
#include '../src/tree/tree_updater.cc'
#include '../src/tree/updater_colmaker.cc'
#include '../src/tree/updater_quantile_hist.cc'
#include '../src/tree/updater_prune.cc'
#include '../src/tree/updater_refresh.cc'
#include '../src/tree/updater_sync.cc'
#include '../src/tree/updater_histmaker.cc'
#include '../src/tree/updater_skmaker.cc'
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
      Transform<>::Init(TestTransformRange<bst_float>{},
	                Range{0, static_cast<Range::DifferenceType>(size)},
	                TRANSFORM_GPU_RANGE)
      .Eval(&out_vec, &in_vec);
  std::vector<bst_float> res = out_vec.HostVector();
    
    
    {
    {#ifndef XGBOOST_USE_CUDA
  EXPECT_EQ(GPUSet::AllVisible(), GPUSet::Empty());
#endif
}
}  // namespace xgboost

    
    TEST(Metric, DeclareUnifiedTest(Error)) {
  auto lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  xgboost::Metric * metric = xgboost::Metric::Create('error', &lparam);
  metric->Configure({});
  ASSERT_STREQ(metric->Name(), 'error');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
    }
    
        if (tparam_.seed_per_iteration || rabit::IsDistributed()) {
      common::GlobalRandom().seed(tparam_.seed * kRandSeedMagic + iter);
    }
    // this->PerformTreeMethodHeuristic(train);
    this->CheckDataSplitMode();
    this->ConfigurationWithKnownData(train);
    
    
    {    std::vector<int32_t> accepted_features; // for node 3
    for (int32_t f = 0; f < 8; ++f) {
      if (eval->CheckFeatureConstraint(3, f)) {
        accepted_features.emplace_back(f);
      }
    }
    std::vector<int32_t> solutions{4, 5};
    ASSERT_EQ(accepted_features.size(), solutions.size());
    for (int32_t f = 0; f < accepted_features.size(); ++f) {
      ASSERT_EQ(accepted_features[f], solutions[f]);
    }
  }
    
            virtual const std::unordered_set<StreamInformation>& StreamInfos() override { return m_streamInfos; }
    
    
    {            Reset();
        }
    
        /*virtual*/ Value::~Value()
    {
    }
    
    // This constructor helps with BrainScript integration
template<class ElemType>
OptimizedRNNStackNode<ElemType>::OptimizedRNNStackNode(const ScriptableObjects::IConfigRecordPtr configp)
    : Base(configp->Get(L'deviceId'), L'<placeholder>'), 
    m_rnnAttributes(configp->Get(L'bidirectional'), configp->Get(L'numLayers'), configp->Get(L'hiddenDims'), configp->Get(L'recurrentOp'), configp->Get(L'axis')),
    m_BackwardDataCalledYet(false)
{
    AttachInputsFromConfig(configp, this->GetExpectedNumInputs());
}
    
    #include 'rocksdb/db.h'
    
    // PersistentCache
//
// Persistent cache interface for caching IO pages on a persistent medium. The
// cache interface is specifically designed for persistent read cache.
class PersistentCache {
 public:
  typedef std::vector<std::map<std::string, double>> StatsType;
    }
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }
    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;