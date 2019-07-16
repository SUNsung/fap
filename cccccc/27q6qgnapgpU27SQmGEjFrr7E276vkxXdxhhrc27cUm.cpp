
        
        static UIdent KindImportModuleClang('source.lang.swift.import.module.clang');
static UIdent KindImportModuleSwift('source.lang.swift.import.module.swift');
    
      /// Retrieve the declaration of Foundation.NSError.
  ClassDecl *getNSErrorDecl() const;
  /// Retrieve the declaration of Foundation.NSNumber.
  ClassDecl *getNSNumberDecl() const;
  /// Retrieve the declaration of Foundation.NSValue.
  ClassDecl *getNSValueDecl() const;
    
    
    {  char *OrigFn = *OrigFnPtr;
  auto origKey =
      (uintptr_t)SWIFT_THREAD_GETSPECIFIC(SWIFT_COMPATIBILITY_50_TLS_KEY);
  auto newKey = origKey | 0x1;
  SWIFT_THREAD_SETSPECIFIC(SWIFT_COMPATIBILITY_50_TLS_KEY, (void *)newKey);
  return OrigFn;
}
    
    enum : unsigned {
  /// Number of words reserved in generic metadata patterns.
  NumGenericMetadataPrivateDataWords = 16,
};
    
    
    {#undef case_setIfNonEmpty
#undef check
    }
    
    class CustomAttr;
class NominalTypeDecl;
struct PropertyWrapperBackingPropertyInfo;
struct PropertyWrapperTypeInfo;
class Type;
class VarDecl;
class TypeAliasDecl;
class Type;
    
    
    {    for (auto const s : succs(code.back())) {
      FTRACE(4, '  -> {}\n', s);
      auto& succ_state = env.block_states[s];
      if (merge_into(succ_state, state)) workQ.push(env.block_to_rpo[s]);
    }
  } while (!workQ.empty());
    
      void emitNop(int n) {
    if (n == 0) return;
    static const uint8_t nops[][9] = {
      { },
      { 0x90 },
      { 0x66, 0x90 },
      { 0x0f, 0x1f, 0x00 },
      { 0x0f, 0x1f, 0x40, 0x00 },
      { 0x0f, 0x1f, 0x44, 0x00, 0x00 },
      { 0x66, 0x0f, 0x1f, 0x44, 0x00, 0x00 },
      { 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00 },
      { 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
      { 0x66, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
    };
    // While n >= 9, emit 9 byte NOPs
    while (n >= 9) {
      bytes(9, nops[9]);
      n -= 9;
    }
    bytes(n, nops[n]);
  }
    
          for (;;) {
        switch (inc_len) {
        case 0:
          goto quit_loop_4;
        case 1:
          if (*bptr == delimiter_char) {
            goto quit_loop_4;
          }
          break;
        default:
          break;
        }
        bptr += inc_len;
        inc_len = (bptr < limit ? 1 : 0);
      }
    
    req::ptr<File> PhpStreamWrapper::openFD(const char *sFD) {
  if (is_cli_mode()) {
    raise_warning('Direct access to file descriptors is not '
                  'available via remote unix server execution');
    return nullptr;
  }
  if (RuntimeOption::ServerExecutionMode()) {
    raise_warning('Direct access to file descriptors '
                  'is only available from command-line');
    return nullptr;
  }
    }
    
    bool BZ2File::closeImpl() {
  if (!isClosed()) {
    if (m_bzFile) {
      BZ2_bzclose(m_bzFile);
      m_bzFile = nullptr;
    }
    setIsClosed(true);
    if (m_innerFile) {
      m_innerFile->close();
    }
  }
  File::closeImpl();
  return true;
}
    
      void requestInit() override {
    requestInitMath();
    requestInitOptions();
  }
 private:
  void loadClosure();
    
    bool ZipFile::open(const String& filename, const String& mode) {
  assertx(m_gzFile == nullptr);
    }
    
    #include <memory>
    
    TEST(Type, ArrOfArr) {
  auto const t1 = arr_mapn(TSStr, arr_mapn(TInt, TSStr));
  auto const t2 = arr_mapn(TSStr, TArr);
  auto const t3 = arr_mapn(TSStr, arr_packedn(TSStr));
  auto const t4 = arr_mapn(TSStr, arr_mapn(TSStr, TSStr));
  EXPECT_TRUE(t1.subtypeOf(t2));
  EXPECT_TRUE(t1.couldBe(t3));
  EXPECT_FALSE(t1.subtypeOf(t3));
  EXPECT_TRUE(t3.subtypeOf(t1));
  EXPECT_TRUE(t3.subtypeOf(t2));
  EXPECT_FALSE(t1.couldBe(t4));
  EXPECT_FALSE(t4.couldBe(t3));
  EXPECT_TRUE(t4.subtypeOf(t2));
}
    
    
    {
    {
    {
    {
    {
    {
    {              std::string codepoint(start, closebrace - start);
              char *end = nullptr;
              int32_t uchar = strtol(codepoint.c_str(), &end, 16);
              if ((end && *end) || (uchar > 0x10FFFF)) {
                throw fatal(
                  'Invalid UTF-8 codepoint escape sequence: '
                  'Codepoint too large');
              }
              if (uchar <= 0x0007F) {
                output += (char)uchar;
              } else if (uchar <= 0x007FF) {
                output += (char)(0xC0 | ( uchar >> 6         ));
                output += (char)(0x80 | ( uchar        & 0x3F));
              } else if (uchar <= 0x00FFFF) {
                output += (char)(0xE0 | ( uchar >> 12        ));
                output += (char)(0x80 | ((uchar >>  6) & 0x3F));
                output += (char)(0x80 | ( uchar        & 0x3F));
              } else if (uchar <= 0x10FFFF) {
                output += (char)(0xF0 | ( uchar >> 18        ));
                output += (char)(0x80 | ((uchar >> 12) & 0x3F));
                output += (char)(0x80 | ((uchar >>  6) & 0x3F));
                output += (char)(0x80 | ( uchar        & 0x3F));
              } else {
                not_reached();
                assert(false);
              }
              i += codepoint.size() + 2 /* strlen('{}') */;
              break;
            }
            default: {
              // check for an octal
              if ('0' <= str[i] && str[i] <= '7') {
                std::string soct;
                soct += str[i]; // 0th octal digit
                if ('0' <= str[i+1] && str[i+1] <= '7') {
                  soct += str[++i];   // 1st octal digit
                  if ('0' <= str[i+1] && str[i+1] <= '7') {
                    soct += str[++i]; // 2nd octal digit
                  }
                }
                output += strtol(soct.c_str(), nullptr, 8);
              } else {
                output += ch;
                output += str[i];
              }
              break;
            }
          }
        } else {
          output += ch;
        }
      } else {
        output += ch;
      }
    }
  }
  return output;
}
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
    
    {
    {    PrefPtr prefEntryPointHost = family == AF_INET ? PREF_DHT_ENTRY_POINT_HOST
                                                   : PREF_DHT_ENTRY_POINT_HOST6;
    if (!e->getOption()->get(prefEntryPointHost).empty()) {
      {
        PrefPtr prefEntryPointPort = family == AF_INET
                                         ? PREF_DHT_ENTRY_POINT_PORT
                                         : PREF_DHT_ENTRY_POINT_PORT6;
        std::pair<std::string, uint16_t> addr(
            e->getOption()->get(prefEntryPointHost),
            e->getOption()->getAsInt(prefEntryPointPort));
        std::vector<std::pair<std::string, uint16_t>> entryPoints;
        entryPoints.push_back(addr);
        auto command = make_unique<DHTEntryPointNameResolveCommand>(
            e->newCUID(), e, family, entryPoints);
        command->setBootstrapEnabled(true);
        command->setTaskQueue(taskQueue.get());
        command->setTaskFactory(taskFactory.get());
        command->setRoutingTable(routingTable.get());
        command->setLocalNode(localNode);
        tempCommands.push_back(std::move(command));
      }
    }
    else {
      A2_LOG_INFO('No DHT entry point specified.');
    }
    {
      auto command = make_unique<DHTInteractionCommand>(e->newCUID(), e);
      command->setMessageDispatcher(dispatcher.get());
      command->setMessageReceiver(receiver.get());
      command->setTaskQueue(taskQueue.get());
      command->setReadCheckSocket(connection->getSocket());
      command->setConnection(std::move(connection));
      command->setUDPTrackerClient(udpTrackerClient);
      tempRoutineCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTTokenUpdateCommand>(
          e->newCUID(), e, DHT_TOKEN_UPDATE_INTERVAL);
      command->setTokenTracker(tokenTracker.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTBucketRefreshCommand>(
          e->newCUID(), e, DHT_BUCKET_REFRESH_CHECK_INTERVAL);
      command->setTaskQueue(taskQueue.get());
      command->setRoutingTable(routingTable.get());
      command->setTaskFactory(taskFactory.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTPeerAnnounceCommand>(
          e->newCUID(), e, DHT_PEER_ANNOUNCE_CHECK_INTERVAL);
      command->setPeerAnnounceStorage(peerAnnounceStorage.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command =
          make_unique<DHTAutoSaveCommand>(e->newCUID(), e, family, 30_min);
      command->setLocalNode(localNode);
      command->setRoutingTable(routingTable.get());
      tempCommands.push_back(std::move(command));
    }
    // add deserialized nodes to routing table
    auto& desnodes = deserializer.getNodes();
    for (auto& node : desnodes) {
      routingTable->addNode(node);
    }
    if (!desnodes.empty()) {
      auto task = std::static_pointer_cast<DHTBucketRefreshTask>(
          taskFactory->createBucketRefreshTask());
      task->setForceRefresh(true);
      taskQueue->addPeriodicTask1(task);
    }
    // assign them into DHTRegistry
    if (family == AF_INET) {
      DHTRegistry::getMutableData().localNode = localNode;
      DHTRegistry::getMutableData().routingTable = std::move(routingTable);
      DHTRegistry::getMutableData().taskQueue = std::move(taskQueue);
      DHTRegistry::getMutableData().taskFactory = std::move(taskFactory);
      DHTRegistry::getMutableData().peerAnnounceStorage =
          std::move(peerAnnounceStorage);
      DHTRegistry::getMutableData().tokenTracker = std::move(tokenTracker);
      DHTRegistry::getMutableData().messageDispatcher = std::move(dispatcher);
      DHTRegistry::getMutableData().messageReceiver = std::move(receiver);
      DHTRegistry::getMutableData().messageFactory = std::move(factory);
      e->getBtRegistry()->setUDPTrackerClient(udpTrackerClient);
      DHTRegistry::setInitialized(true);
    }
    else {
      DHTRegistry::getMutableData6().localNode = localNode;
      DHTRegistry::getMutableData6().routingTable = std::move(routingTable);
      DHTRegistry::getMutableData6().taskQueue = std::move(taskQueue);
      DHTRegistry::getMutableData6().taskFactory = std::move(taskFactory);
      DHTRegistry::getMutableData6().peerAnnounceStorage =
          std::move(peerAnnounceStorage);
      DHTRegistry::getMutableData6().tokenTracker = std::move(tokenTracker);
      DHTRegistry::getMutableData6().messageDispatcher = std::move(dispatcher);
      DHTRegistry::getMutableData6().messageReceiver = std::move(receiver);
      DHTRegistry::getMutableData6().messageFactory = std::move(factory);
      DHTRegistry::setInitialized6(true);
    }
    if (e->getBtRegistry()->getUdpPort() == 0) {
      // We assign port last so that no exception gets in the way
      e->getBtRegistry()->setUdpPort(port);
    }
  }
  catch (RecoverableException& ex) {
    A2_LOG_ERROR_EX(fmt('Exception caught while initializing DHT functionality.'
                        ' DHT is disabled.'),
                    ex);
    tempCommands.clear();
    tempRoutineCommands.clear();
    if (family == AF_INET) {
      DHTRegistry::clearData();
      e->getBtRegistry()->setUDPTrackerClient(
          std::shared_ptr<UDPTrackerClient>{});
    }
    else {
      DHTRegistry::clearData6();
    }
  }
  return std::make_pair(std::move(tempCommands),
                        std::move(tempRoutineCommands));
}
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
    DHTTaskFactoryImpl::~DHTTaskFactoryImpl() = default;
    
    void DHTTaskQueueImpl::addPeriodicTask2(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue2_.addTask(task);
}
    
      ~DHTTokenTracker();
    
      // show some sample bytes
  virtual std::string toString() const CXX11_OVERRIDE;
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
        // create a JSON number from number_unsigned_t
    json::number_integer_t value_unsigned_t = 17;
    json j_unsigned_t(value_unsigned_t);
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};
    
    inline cl_int enqueueWriteBuffer(
        const Buffer& buffer,
        cl_bool blocking,
        size_type offset,
        size_type size,
        const void* ptr,
        const vector<Event>* events = NULL,
        Event* event = NULL)
{
    cl_int error;
    CommandQueue queue = CommandQueue::getDefault(&error);
    }