
        
            std::unique_ptr<DHTPeerAnnounceStorage> peerAnnounceStorage;
    
    #endif // D_DHT_RESPONSE_MESSAGE_H

    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
      void moveBucketHead(const std::shared_ptr<DHTNode>& node);
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    #include 'common.h'
    
    DHTTaskFactoryImpl::~DHTTaskFactoryImpl() = default;
    
      virtual ~DHTTaskQueueImpl();
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port) const
{
  return generateToken(infoHash, ipaddr, port, secret_[0]);
}