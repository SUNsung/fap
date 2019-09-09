
        
        int os_detect(TO_BLOCK_LIST* port_blocks,
              OSResults* osr,
              tesseract::Tesseract* tess);
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
      // Backwards compatible fit returning a gradient and constant.
  // Deprecated. Prefer Fit(ICOORD*, ICOORD*) where possible, but use this
  // function in preference to the LMS class.
  double Fit(float* m, float* c);
    
    
    {    UNICHARMAP_NODE* children;
    UNICHAR_ID id;
  };
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    std::shared_ptr<DHTNode> DHTRoutingTable::getNode(const unsigned char* nodeID,
                                                  const std::string& ipaddr,
                                                  uint16_t port) const
{
  std::shared_ptr<DHTBucket> bucket = getBucketFor(nodeID);
  return bucket->getNode(nodeID, ipaddr, port);
}
    
      void showBuckets() const;
    
    void DHTRoutingTableSerializer::setNodes(
    const std::vector<std::shared_ptr<DHTNode>>& nodes)
{
  nodes_ = nodes;
}
    
      std::shared_ptr<DHTNode> localNode_;
    
    namespace aria2 {
    }
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) CXX11_OVERRIDE;
    
      virtual void executeTask() = 0;
    
    void DHTTaskQueueImpl::addPeriodicTask2(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue2_.addTask(task);
}
    
    namespace aria2 {
    }
    
          std::vector<std::string> entry_pts;
      for (const auto& ent_pt :
           container_details.get_child('Config.Entrypoint')) {
        entry_pts.push_back(ent_pt.second.data());
      }
      r['config_entrypoint'] = osquery::join(entry_pts, ', ');
    
    bool verifyMacAddress(std::string const& value) {
  if (value == 'incomplete') {
    return true;
  } else {
    boost::smatch match;
    // IEEE 802: six groups of two hexadecimal digits, separated by '-' or ':'
    boost::regex rxMacAddress('^([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})$');
    return boost::regex_match(value, match, rxMacAddress);
  }
}
    
    
    {} // namespace osquery

    
      /**
   * @brief the distributed work ID of a carve
   *
   * This value should be used by the TLS endpoints where carve data is
   * aggregated, to tie together a distributed query with the carve data
   */
  std::string requestId_;
    
      virtual ExpectedSuccess<DatabaseError> open() = 0;
  virtual void close() = 0;
    
    
    {  rocksdb::Options options = getOptions();
  auto db_path = boost::filesystem::path(path_).make_preferred();
  auto destroy_status = rocksdb::DestroyDB(db_path.string(), options);
  if (!destroy_status.ok()) {
    return createError(DatabaseError::FailToDestroyDB, 'Fail to destroy db: ')
           << destroy_status.ToString();
  }
  return Success();
}
    
    #pragma once