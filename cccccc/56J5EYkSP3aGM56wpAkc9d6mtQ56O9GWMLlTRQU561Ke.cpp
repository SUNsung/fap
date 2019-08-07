
        
          auto data = ss.str();
  void* ptr = const_cast<char*>(data.c_str());
  size_t len = data.length();
  bio_t bio(BIO_new_mem_buf(ptr, len));
    
    int OpenSSLTLSSession::init(sock_t sockfd)
{
  ERR_clear_error();
  ssl_ = SSL_new(tlsContext_->getSSLCtx());
  if (!ssl_) {
    return TLS_ERR_ERROR;
  }
  rv_ = SSL_set_fd(ssl_, sockfd);
  if (rv_ == 0) {
    return TLS_ERR_ERROR;
  }
  return TLS_ERR_OK;
}
    
    int getDefaultAIFlags() { return defaultAIFlags; }
    
    PrefPtr k2p(const std::string& key) { return getPrefFactory()->k2p(key); }
    
        std::unique_ptr<DHTTaskFactory> taskFactory;
    
    public:
  DHTRoutingTableDeserializer(int family);
    
    
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
    
      agent_a.WaitForFinish();
  if (!FLAGS_only_one_send) {
    agent_b.WaitForFinish();
  }
  param_ptr_a->print();
  if (!FLAGS_only_one_send) {
    param_ptr_b->print();
  }
    
    class TimerBucket {
 public:
  void AddTask(const std::shared_ptr<TimerTask>& task) {
    std::lock_guard<std::mutex> lock(mutex_);
    task_list_.push_back(task);
  }
    }
    
    
    { private:
  ScenarioValetParkingConfig scenario_config_;
};
    
    
    {    // TODO(All): Fix the segmentation bug for large vehicles, otherwise
    // the follow line will be problematic.
    ADEBUG << ' - It is blocked by others, and will move later.';
    return false;
  }
    
    
    {
    {
    {}  // namespace scenario
}  // namespace planning
}  // namespace apollo

    
    /**
 * @brief Cross product between two vectors.
 *        One vector is formed by 1st and 2nd parameters of the function.
 *        The other vector is formed by 3rd and 4th parameters of the function.
 * @param x0 The x coordinate of the first vector.
 * @param y0 The y coordinate of the first vector.
 * @param x1 The x coordinate of the second vector.
 * @param y1 The y coordinate of the second vector.
 *
 * @return The cross product result.
 */
double CrossProd(const double x0, const double y0, const double x1,
                 const double y1);
    
        bool Get(K key, V **value) {
      Entry *prev = nullptr;
      Entry *target = nullptr;
      if (Find(key, &prev, &target)) {
        *value = target->value_ptr.load(std::memory_order_acquire);
        return true;
      }
      return false;
    }
    
      ChangeMsg msg;
  for (auto& writer : writers_to_remove) {
    Convert(writer->attributes(), RoleType::ROLE_WRITER, OperateType::OPT_LEAVE,
            &msg);
    DisposeLeave(msg);
    Notify(msg);
  }