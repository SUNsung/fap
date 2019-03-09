
        
        /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
        uint16_t port;
    auto connection = make_unique<DHTConnectionImpl>(family);
    {
      port = e->getBtRegistry()->getUdpPort();
      const std::string& addr = e->getOption()->get(
          family == AF_INET ? PREF_DHT_LISTEN_ADDR : PREF_DHT_LISTEN_ADDR6);
      // If UDP port is already used, use the same port
      // number. Normally IPv4 port is available, then IPv6 port is
      // (especially for port >= 1024). We don't loose much by doing
      // this. We did the same thing in TCP socket. See BtSetup.cc.
      bool rv;
      if (port == 0) {
        auto sgl =
            util::parseIntSegments(e->getOption()->get(PREF_DHT_LISTEN_PORT));
        sgl.normalize();
        rv = connection->bind(port, addr, sgl);
      }
      else {
        rv = connection->bind(port, addr);
      }
      if (!rv) {
        throw DL_ABORT_EX('Error occurred while binding UDP port for DHT');
      }
      localNode->setPort(port);
    }
    A2_LOG_DEBUG(fmt('Initialized local node ID=%s',
                     util::toHex(localNode->getID(), DHT_ID_LENGTH).c_str()));
    auto tracker = std::make_shared<DHTMessageTracker>();
    auto routingTable = make_unique<DHTRoutingTable>(localNode);
    auto factory = make_unique<DHTMessageFactoryImpl>(family);
    auto dispatcher = make_unique<DHTMessageDispatcherImpl>(tracker);
    auto receiver = make_unique<DHTMessageReceiver>(tracker);
    auto taskQueue = make_unique<DHTTaskQueueImpl>();
    auto taskFactory = make_unique<DHTTaskFactoryImpl>();
    auto peerAnnounceStorage = make_unique<DHTPeerAnnounceStorage>();
    auto tokenTracker = make_unique<DHTTokenTracker>();
    // For now, UDPTrackerClient was enabled along with DHT
    auto udpTrackerClient = std::make_shared<UDPTrackerClient>();
    const auto messageTimeout =
        e->getOption()->getAsInt(PREF_DHT_MESSAGE_TIMEOUT);
    // wiring up
    tracker->setRoutingTable(routingTable.get());
    tracker->setMessageFactory(factory.get());
    
    
    {} // namespace aria2
    
    public:
  DHTTaskQueueImpl();
    
    DNSCache& DNSCache::operator=(const DNSCache& c)
{
  if (this != &c) {
    entries_ = c.entries_;
  }
  return *this;
}