
        
        #endif // D_DHT_RESPONSE_MESSAGE_H

    
    class DHTRoutingTable {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
    #endif // D_DHT_SETUP_H

    
    const std::string DHTUnknownMessage::UNKNOWN('unknown');
    
      // always return false
  virtual bool isReply() const CXX11_OVERRIDE;
    
      DNSCache& operator=(const DNSCache& c);