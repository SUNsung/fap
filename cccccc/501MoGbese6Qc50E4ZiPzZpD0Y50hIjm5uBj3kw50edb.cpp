
        
        SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    void run_recovery_tests(void) {
    int i;
    for (i = 0; i < count; i++) {
        test_ecdsa_recovery_api();
    }
    for (i = 0; i < 64*count; i++) {
        test_ecdsa_recovery_end_to_end();
    }
    test_ecdsa_recovery_edge_cases();
}
    
    bool ParseInt64(const std::string& str, int64_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtoll will not set errno if valid
    long long int n = strtoll(str.c_str(), &endp, 10);
    if(out) *out = (int64_t)n;
    // Note that strtoll returns a *long long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int64_t*.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int64_t>::min() &&
        n <= std::numeric_limits<int64_t>::max();
}
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    
    {  // Compactions should not cause us to create a situation where
  // a file overlaps too much data at the next level.
  ASSERT_LE(dbfull()->TEST_MaxNextLevelOverlappingBytes(), 20*1048576);
  dbfull()->TEST_CompactRange(0, NULL, NULL);
  ASSERT_LE(dbfull()->TEST_MaxNextLevelOverlappingBytes(), 20*1048576);
  dbfull()->TEST_CompactRange(1, NULL, NULL);
  ASSERT_LE(dbfull()->TEST_MaxNextLevelOverlappingBytes(), 20*1048576);
}
    
    // A wrapper around WritableFile which informs another Env whenever this file
// is written to or sync'ed.
class TestWritableFile : public WritableFile {
 public:
  TestWritableFile(const FileState& state,
                   WritableFile* f,
                   FaultInjectionTestEnv* env);
  virtual ~TestWritableFile();
  virtual Status Append(const Slice& data);
  virtual Status Close();
  virtual Status Flush();
  virtual Status Sync();
    }
    
          case kLastType:
        if (!in_fragmented_record) {
          ReportCorruption(fragment.size(),
                           'missing start of fragmented record(2)');
        } else {
          scratch->append(fragment.data(), fragment.size());
          *record = Slice(*scratch);
          last_record_offset_ = prospective_record_offset;
          return true;
        }
        break;
    
    
    {}  // namespace leveldb
    
      // Creates a SnapshotImpl and appends it to the end of the list.
  SnapshotImpl* New(SequenceNumber sequence_number) {
    assert(empty() || newest()->sequence_number_ <= sequence_number);
    }
    
      // Lock the specified file.  Used to prevent concurrent access to
  // the same db by multiple processes.  On failure, stores nullptr in
  // *lock and returns non-OK.
  //
  // On success, stores a pointer to the object that represents the
  // acquired lock in *lock and returns OK.  The caller should call
  // UnlockFile(*lock) to release the lock.  If the process exits,
  // the lock will be automatically released.
  //
  // If somebody else already holds the lock, finishes immediately
  // with a failure.  I.e., this call does not wait for existing locks
  // to go away.
  //
  // May create the named file if it does not already exist.
  virtual Status LockFile(const std::string& fname, FileLock** lock) = 0;
    
    class Comparator;
class Iterator;
    
    
    {            for (auto& pBaseNode : learnableNodes)
            {
                if (!pBaseNode->IsParameterUpdateRequired())
                {
                    continue;
                }
                wstring name = pBaseNode->NodeName();
                // 2 block gradient aggregation 
                auto pNode = DownCast(pBaseNode);
                // 2.1. get current model  
                Matrix<ElemType>& prevWeight = *m_prevParameters[name];               // prev model value 
                Matrix<ElemType>& currentWeight = pNode->Value();                        // current model 
                // 2.1.2. subtract it from the previous model                   
                Matrix<ElemType>  blockGrad(prevWeight.DeepClone());            
                blockGrad -= currentWeight;                                              // matW becomes local block gradient (of one worker)
                // 2.1.3. send block gradient over MPI nodes; 
                unique_ptr<ElemType[]> px(blockGrad.CopyToArray());
                size_t    nx = blockGrad.GetNumElements();
                // 2.1.4. inplace sum 
                commTimer.Restart();
                m_pMPI->AllReduce(px.get(), nx);
                commTimer.Stop();
                secondsOnCommunication += (float)commTimer.ElapsedSeconds();
                // 2.1.5. global block gradient
                blockGrad.SetValue(blockGrad.GetNumRows(),
                                   blockGrad.GetNumCols(),
                                   blockGrad.GetDeviceId(),
                                   px.get()
                                   ); 
                // 2.2. model update 
                {
                    // alias for better readability 
                    Matrix<ElemType>& smoothedGradientUpdate = *m_blockLevelSmoothedGradient[name];       // smoothed gradient                   
                    // 2.2.1 update block level smoothed gradient; 
                    // This is essentially a first-order infinite impulse response (IIR) filter with the gain (1 - blockMomentum)*m_blockLearningRate:
                    // smoothedGradientUpdate(t)=blockMomentum * smoothedGradients(t-1) + (1 - blockMomentum)*m_blockLearningRate*blockGrad(t)
                    Matrix<ElemType>::ScaleAndAdd((ElemType)((1 - blockMomentum)*m_blockLearningRate), blockGrad, (ElemType)blockMomentum, smoothedGradientUpdate); 
                    // 2.2.2 update parameters; 
                    currentWeight.SetValue(prevWeight);
                    currentWeight -= smoothedGradientUpdate;
                    // 2.2.3 Nesterov Momentum 
                    // A Nesterov momentum here is to do a partial weight update before calculating the gradient, i.e., 
                    // (step 1) w(t) <-- w(t) - \eta* v(t) 
                    // (step 2) g(t+1) <-- forwardbackward on minibatches with initial model as w(t)
                    // (step 3) v(t+1) <-- \eta*v(t) + (1-\eta)*learningRate*g(t+1)
                    // (step 4) w(t+1) <-- w(t)-v(t)
                    // (step 5) t      <-- t+1
                    // without step 1, this becomes stanard momentum
                    if (m_useNesterovMomentum)
                    {
                        Matrix<ElemType>::ScaleAndAdd((ElemType)-blockMomentum, smoothedGradientUpdate, currentWeight);
                    }
                    // 2.2.4 update bookkeeping
                    prevWeight.SetValue(currentWeight);
                }
            }
            //----------------------------------------
            // 3. reset SGD momentum if necessary 
            //----------------------------------------
            if (m_resetSGDMomentumAfterAggregation)
            {
                for (auto sg : smoothedGradients)
                {
                    auto x = dynamic_pointer_cast<Matrix<ElemType>>(sg);
                    if (x != nullptr)
                        x->SetValue((ElemType)0);
                }
            }
        }
    
    // ++ operator for this enum, so loops work
NDLPass& operator++(NDLPass& ndlPass)
{
    assert(ndlPass != ndlPassMax);
    ndlPass = static_cast<NDLPass>(ndlPass + 1);
    return ndlPass;
}
    
        // these are the file names for word 2 class mapping and class to word index mapping
    // these are used for class-based language modeling
    string m_cls2index;
    string m_word2class;
    int m_nbrCls;    // number of classes
    int m_vocabSize; // vocabulary size
    int nce_noises;
    
        // parallel training
    shared_ptr<Microsoft::MSR::CNTK::MPIWrapper> mpi;
    auto ensureMPIWrapperCleanup = MakeScopeExit(&MPIWrapper::DeleteInstance);
    // when running under MPI with more than one node, use 'true' as the default value for parallelTrain,
    // 'false' otherwise.
    bool paralleltrain = config(L'parallelTrain', (EnvironmentUtil::GetTotalNumberOfMPINodes() > 1));
    
        // parse at the file level, can be overridden for 'section of file' behavior
    virtual void FileParse(const std::string& stringParse)
    {
        Parse(stringParse);
    }
    
        ComputationNetwork::BumpEvalTimeStamp(m_inputNodes);
    this->m_net->ForwardProp(m_outputNodes);
    
    template std::shared_ptr<IDistGradAggregator<double>> GetSimpleDistGradAggregator<double>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
        // change element with key 'the bad'
    object.at('the bad') = 'il cattivo';
    
    using json = nlohmann::json;
    
      // Helper function to return the carve directory
  boost::filesystem::path getCarveDir() {
    return carveDir_;
  }
    
      fpack.platform_ = 'posix';
  if (isPlatform(PlatformType::TYPE_POSIX) ||
      isPlatform(PlatformType::TYPE_LINUX) ||
      isPlatform(PlatformType::TYPE_OSX) ||
      isPlatform(PlatformType::TYPE_FREEBSD)) {
    EXPECT_TRUE(fpack.checkPlatform());
  } else {
    EXPECT_FALSE(fpack.checkPlatform());
  }
    
    std::map<std::string, std::string> getTestConfigMap(const std::string& file) {
  std::string content;
  auto const filepath = getTestConfigDirectory() / file;
  auto status = readFile(filepath, content);
  EXPECT_TRUE(status.ok())
      << 'Could not read file: ' << boost::io::quoted(filepath.string())
      << ', because: ' << status.what();
  std::map<std::string, std::string> config;
  config['awesome'] = content;
  return config;
}
    
    
    {} // namespace osquery

    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};
    
    
    {
    {    // Set the flag info from the internal info kept by Gflags, except for
    // the stored description. Gflag keeps an 'unknown' value if the flag
    // was declared without a definition.
    flags[flag.name] = {flag.type,
                        instance().flags_.at(flag.name).description,
                        flag.default_value,
                        flag.current_value,
                        instance().flags_.at(flag.name)};
  }
  for (const auto& flag : instance().custom_) {
    flags[flag.first] = {'string', '', '', flag.second, {}};
  }
  return flags;
}
    
    
    {}
    
     protected:
  /**
   * @brief Initialize the logger with the name of the binary and any status
   * logs generated between program launch and logger start.
   *
   * The logger initialization is called once CLI flags have been parsed, the
   * registry items are constructed, extension routes broadcasted and extension
   * plugins discovered (as a logger may be an extension plugin) and the config
   * has been loaded (which may include additional CLI flag-options).
   *
   * All of these actions may have generated VERBOSE, INFO, WARNING, or ERROR
   * logs. The internal logging facility, Glog, collects these intermediate
   * status logs and a customized log sink buffers them until the active
   * osquery logger's `init` method is called.
   *
   * @param binary_name The string name of the process (argv[0]).
   * @param log The set of status (INFO, WARNING, ERROR) logs generated before
   * the logger's `init` method was called.
   */
  virtual void init(const std::string& binary_name,
                    const std::vector<StatusLogLine>& log) = 0;
    
    #include 'plugin.h'
    
    /**
 * @brief The request part of a plugin (registry item's) call.
 *
 * To use a plugin use Registry::call with a request and response.
 * The request portion is usually simple and normally includes an 'action'
 * key where the value is the action you want to perform on the plugin.
 * Refer to the registry's documentation for the actions supported by
 * each of its plugins.
 */
using PluginRequest = std::map<std::string, std::string>;
    
    GTEST_TEST(InMemoryDatabaseTest, test_keys_search) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_1', 1).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_2', 2).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_3', 3).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_1', 4).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_2', 5).isError());
  auto result_all = db->getKeys(kPersistentSettings);
  EXPECT_TRUE(result_all);
  EXPECT_EQ((*result_all).size(), 5);
  auto result_some = db->getKeys(kPersistentSettings, 'key');
  EXPECT_TRUE(result_some);
  EXPECT_EQ((*result_some).size(), 3);
}
    
    TEST_F(RocksdbDatabaseTest, test_open) {
  auto path = randomDBPath();
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  auto result = db->open();
  EXPECT_TRUE(result);
  db->close();
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    CC_CONSTRUCTOR_ACCESS:
    FadeOutBLTiles() {}
    virtual ~FadeOutBLTiles() {}
    
    /**
@brief The delegate class for ActionTween.
@details If you want to use ActionTween on a node.
        You should implement the node follow these steps:
        1. The node should be inherit from ActionTweenDelegate.
        2. Override the virtual method updateTweenAction in the node.
    
        /**
    @brief Enable/Disable the clipping.
    @param enabled Pass true to enable clipping. Pass false to disable clipping.
    */
    void setClippingEnabled(bool enabled) {
        _clippingEnabled = enabled;
    }
    
    static bool sendComponentEventToJS(Component* node, int action)
{
    auto scriptEngine = ScriptEngineManager::getInstance()->getScriptEngine();
    
    if (scriptEngine->isCalledFromScript())
    {
        scriptEngine->setCalledFromScript(false);
    }
    else
    {
        BasicScriptData data(node,(void*)&action);
        ScriptEvent scriptEvent(kComponentEvent,(void*)&data);
        if (scriptEngine->sendEvent(&scriptEvent))
            return true;
    }
    
    return false;
}
    
        bool isEnabled() const { return _enabled; }
    virtual void setEnabled(bool enabled);
    
    const std::string& getName() const { return _name; }
    virtual void setName(const std::string& name) { _name = name; }
    
    Node* getOwner() const { return _owner; }
    virtual void setOwner(Node *owner);
    
    
#include '2d/CCComponentContainer.h'
#include '2d/CCComponent.h'
#include '2d/CCNode.h'