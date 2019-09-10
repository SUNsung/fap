
        
        //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {
    {    switch (i) {
    case 0:
      break;
    case 5:
      str->append(wh[2 * k + 1]);
      break;
    case 9:
      str->append(wh[2 * k + 0]);
      str->append(wh[ 2 * k + 2]);
      break;
    case 4:
      str->append(wh[2 * k + 0]);
      str->append(wh[2 * k + 1]);
      break;
    default:
      if (i > 5) {
       str->append(wh[2 * k + 1]);
       i -= 5;
      }
      for (j = 0; j < i; j++) {
       str->append(wh[2 * k + 0]);
      }
    }
       
    divisor = divisor / 10;
  }
}
    
    void PopplerCache::put(PopplerCacheKey *key, PopplerCacheItem *item)
{
  int movingStartIndex = lastValidCacheIndex + 1;
  if (lastValidCacheIndex == cacheSize - 1) {
    delete keys[lastValidCacheIndex];
    delete items[lastValidCacheIndex];
    movingStartIndex = cacheSize - 1;
  } else {
    lastValidCacheIndex++;
  }
  for (int i = movingStartIndex; i > 0; i--) {
    keys[i] = keys[i - 1];
    items[i] = items[i - 1];
  }
  keys[0] = key;
  items[0] = item;
}
    
      // Destructor.
  ~ProfileData() {}
    
      // Create authorization data for the specified owner and user
  // passwords.  If the security handler doesn't support 'batch' mode,
  // this function should return NULL.
  virtual void *makeAuthData(GooString *ownerPassword,
			     GooString *userPassword) = 0;
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
    bool DHTRoutingTable::addGoodNode(const std::shared_ptr<DHTNode>& node)
{
  return addNode(node, true);
}
    
    std::pair<std::vector<std::unique_ptr<Command>>,
          std::vector<std::unique_ptr<Command>>>
DHTSetup::setup(DownloadEngine* e, int family)
{
  std::vector<std::unique_ptr<Command>> tempCommands;
  std::vector<std::unique_ptr<Command>> tempRoutineCommands;
  if ((family != AF_INET && family != AF_INET6) ||
      (family == AF_INET && DHTRegistry::isInitialized()) ||
      (family == AF_INET6 && DHTRegistry::isInitialized6())) {
    return {};
  }
  try {
    // load routing table and localnode id here
    std::shared_ptr<DHTNode> localNode;
    }
    }
    
      virtual std::shared_ptr<DHTTask> createPeerLookupTask(
      const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
      const std::shared_ptr<PeerStorage>& peerStorage) CXX11_OVERRIDE;
    
    #include 'common.h'
    
    public:
  DHTTaskQueueImpl();
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
        template<typename ElemType>
    class BlockMomentumSGD : public IMASGD<ElemType>
    {
        typedef IMASGD<ElemType> Base;
        using Base::m_pMPI;
        using Base::m_deviceId;
        using Base::DownCast;
    
     protected:
        bool m_resetSGDMomentumAfterAggregation; 
        bool m_useNesterovMomentum;
        double m_blockLearningRate; 
        double m_blockMomentumAsTimeConstantPerWorker; 
        size_t m_syncPeriodPerWorker; 
        map < wstring, shared_ptr<Matrix<ElemType>>>     m_prevParameters;       // parameters at the last model aggregation point
        map < wstring, shared_ptr<Matrix<ElemType>>>    m_blockLevelSmoothedGradient; 
    }
    
        ComputationNetworkPtr net;
    
            bool uniformInit = config('uniformInit', 'true');
        bool applyMeanVarNorm = config('applyMeanVarNorm', 'false');
        bool needPrior = config('needPrior', 'false');
    
        // if node name is not found, dump all nodes
    // otherwise dump just that node
    // This function is called from MEL, i.e. must be prepared to operate on an uncompiled network (only m_nameToNodeMap is valid).
    void DumpNodeInfoToFile(const std::wstring& nodeName, const bool printValues, const bool printMetadata, const std::wstring outputFile, const std::wstring& nodeNameInRegEx = L'')
    {
        if (nodeNameInRegEx.empty())
        {
            if (NodeNameExists(nodeName))
            {
                File fstream(outputFile,
                             FileOptions::fileOptionsText | FileOptions::fileOptionsWrite);
    }
    }
    }
    
    // StartEvaluateMinibatchLoop - Prepare network for Evaluate() calls.
// outputNodeName - name of node that will be evaluated
template <typename ElemType>
void CNTKEval<ElemType>::StartEvaluateMinibatchLoop(const std::wstring& outputNodeName)
{
    this->m_net->StartEvaluateMinibatchLoop(this->m_net->GetNodeFromName(outputNodeName));
}
    
    
    {    // for FSAdaGrad:
    double targetAdagradAvDenom = 1;
    size_t varianceTimeConstant = 2 * 3600 * 100; // originally was: 2h of speech
};
    
    // We accumulate criteria in this struct.
// Criteria are accumulated together with their counts (counts depend on sequence lengths, and different criteria may have different sequence lengths).
struct CriterionAccumulatorBase
{
    CriterionAccumulatorBase() {};
    virtual ~CriterionAccumulatorBase() {};
    virtual const CriterionAccumulatorBase& Add(size_t i, size_t numSamplesInMinibatch) = 0;
    virtual const CriterionAccumulatorBase& Assign(size_t i, size_t numSamplesInMinibatch) = 0;
    virtual EpochCriterion GetCriterion(size_t i) const = 0;
};
    
      // called by generated code
  int scan(ScannerToken *token, Location *loc) {
    return m_scanner.getNextToken(*token, *loc);
  }
  void setRuleLocation(Location *loc) {
    m_loc = *loc;
  }
  virtual void fatal(const Location* /*loc*/, const char* /*msg*/) {}
  virtual void parseFatal(const Location* /*loc*/, const char* /*msg*/) {}
    
      template<class SerDe>
  typename std::enable_if<!SerDe::deserializing>::type
  serde(SerDe& sd) const {
    sd(map());
  }
    
          tmp = get_node(fault->children, 'faultactor');
      if (tmp != nullptr && tmp->children != nullptr) {
        Variant zv =
          master_to_zval(get_conversion(dataTypeToSoap(KindOfString)), tmp);
        faultactor = zv.toString();
      }
    
    // Get a huge page from NUMA node `node`, and return the mapped address
// specified by `addr` or nullptr on failure.  If `addr` is nullptr, the system
// will choose a proper address.  If the address range [addr, addr+1G) already
// contains address in the process address space, nullptr is returned and the
// mapping won't be changed.  If `node` is -1, any NUMA node is OK.
void* mmap_1g(void* addr, int node, bool map_fixed);
    
    namespace {
bool Enabled;
int32_t UpdateFreq;
    }
    
      void wait();
  bool wait(long seconds); // false if timed out
  bool wait(long seconds, long long nanosecs); // false if timed out
  void notify();
  void notifyAll();
    
    int64_t ProxygenTransport::pushResource(const char *host, const char *path,
                                        uint8_t priority,
                                        const Array &promiseHeaders,
                                        const Array &responseHeaders,
                                        const void *data, int size,
                                        bool eom) {
  if (!supportsServerPush()) {
    return 0;
  }
    }
    
    /*
 * Recursively register {allocation, rootAPCHandle} with APCGCManager
 * for all allocations in ad
 */
void SetArray::RegisterUncountedAllocations(ArrayData* in,
                                        APCHandle* rootAPCHandle) {
  assertx(in->isUncounted());
  auto const ad = asSet(in);
    }
    
    const char* kSchemaPlaceholder = '%{schema}';
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    struct InlineReturnTarget {
  /*
   * Block that will serve as a branch target for returning to the caller.
   */
  Block* callerTarget;
    }
    
    namespace tables {
    }
    
      // Nice ourselves if using a watchdog and the level is not too permissive.
  if (!FLAGS_disable_watchdog && FLAGS_watchdog_level >= 0) {
    // Set CPU scheduling I/O limits.
    // On windows these values are inherited so no further calls are needed.
    setToBackgroundPriority();
    }
    
      /**
   * @brief Creates a new extension process.
   *
   * Launches a new extension with various options. Any double quotes in the
   * extension name will be stripped away.
   */
  static std::shared_ptr<PlatformProcess> launchExtension(
      const std::string& exec_path,
      const std::string& extensions_socket,
      const std::string& extensions_timeout,
      const std::string& extensions_interval,
      bool verbose = false);
    
    /**
 * @brief Get the relative identifier (RID) from a security identifier (SID).
 *
 * @returns the RID represented as an unsigned long integer.
 */
DWORD getRidFromSid(PSID sidPtr);
    
    
    {  if (!NT_SUCCESS(ret)) {
    return Status::failure('NtQueryInformationProcess failed for ' +
                           std::to_string(pid) + ' with ' +
                           std::to_string(ret));
  }
  auto ustr = reinterpret_cast<PUNICODE_STRING>(cmdline.data());
  out = wstringToString(ustr->Buffer);
  return Status::success();
}
    
    class InterfaceDetailsTest : public testing::Test {
  protected:
    void SetUp() override {
      setUpEnvironment();
    }
};
    
    #include <osquery/dispatcher.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/utils/status/status.h>
    
    #include <osquery/carver/carver.h>
#include <osquery/config/tests/test_utils.h>
#include <osquery/database.h>
#include <osquery/filesystem/fileops.h>
#include <osquery/hashing/hashing.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/system.h>
#include <osquery/utils/json/json.h>
    
    fs::path const& getTestConfigDirectory() {
    static auto const path = getConfDirPathImpl();
    return path;
}
    
    class InMemoryDatabase final : public Database {
 public:
  explicit InMemoryDatabase(std::string name) : Database(std::move(name)){};
  ~InMemoryDatabase() override {}
    }
    
      options.log_file_time_to_roll = 0;
  options.keep_log_file_num = 10;
  options.max_log_file_size = 1024 * 1024 * 1;
    
      bool read(T& item) {
    for (auto& q : queues_) {
      if (q.readIfNotEmpty(item)) {
        return true;
      }
    }
    return false;
  }
    
    
    {
    {  std::atomic<ssize_t> keepAliveCounter_{1};
  KeepAlive<Executor> executor_;
  int8_t priority_;
};
} // namespace folly

    
      while (true) {
    // With the lock held, grab a pointer to the current queue, then increment
    // the ioThreadCounter index so that other threads will write into the
    // other queue as we process this one.
    std::vector<std::string>* ioQueue;
    size_t numDiscarded;
    {
      auto data = data_.lock();
      ioQueue = data->getCurrentQueue();
      while (ioQueue->empty() && !(data->flags & FLAG_STOP)) {
        // Wait for a message or one of the above flags to be set.
        messageReady_.wait(data.getUniqueLock());
      }
    }
    }
    
    
    {    std::vector<std::string>* getCurrentQueue() {
      return &queues[ioThreadCounter & 0x1];
    }
  };
    
    TEST(AsyncLogWriterDeathTest, cleanupWarning) {
  bool flag;
  expectedMessage = &flag;
    }
    
      // Insert big chunk once more, should trigger new block allocation
  arena.allocate(bigChunkSize);
  bytesUsed += bigChunkSize;
  EXPECT_EQ(arena.bytesUsed(), bytesUsed);
  EXPECT_TRUE(arena.totalSize() >= 2 * blockSize);
  EXPECT_TRUE(arena.totalSize() <= 3 * blockSize);
    
        slowGet = true;
    cobThread = std::thread([] { updatesCob(); });
    /* sleep override */ std::this_thread::sleep_for(std::chrono::seconds{1});
    EXPECT_EQ(4, getCallsStart);
    EXPECT_EQ(3, getCallsFinish);
    
    template <typename Sem>
void test_wake_policy() {
  constexpr auto const nthreads = 16ull;
  constexpr auto const rounds = 1ull << 4;
    }
    
      unsigned nextThreadId_;
  /* step_ keeps count of shared accesses that correspond to user
   * synchronization steps (atomic accesses for now).
   * The reason for keeping track of this here and not just with
   * auxiliary data is to provide users with warning signs (e.g.,
   * skipped steps) if they inadvertently forget to set up aux
   * functions for some shared accesses. */
  uint64_t step_;