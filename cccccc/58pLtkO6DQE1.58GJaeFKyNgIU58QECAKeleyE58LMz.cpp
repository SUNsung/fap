
        
        int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    std::string LogFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'log');
}
    
    class Repairer {
 public:
  Repairer(const std::string& dbname, const Options& options)
      : dbname_(dbname),
        env_(options.env),
        icmp_(options.comparator),
        ipolicy_(options.filter_policy),
        options_(SanitizeOptions(dbname, &icmp_, &ipolicy_, options)),
        owns_info_log_(options_.info_log != options.info_log),
        owns_cache_(options_.block_cache != options.block_cache),
        next_file_number_(1) {
    // TableCache can be small since we expect each table to be opened once.
    table_cache_ = new TableCache(dbname_, options_, 10);
  }
    }
    
      // Our data structure does not allow duplicate insertion
  assert(x == nullptr || !Equal(key, x->key));
    
      static bool isInitialized6() { return data6_.initialized; }
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
      // header
  readBytes(fp, buf, buf.size(), 8);
  if (memcmp(header, buf, 8) == 0) {
    version = 3;
  }
  else if (memcmp(headerCompat, buf, 8) == 0) {
    version = 2;
  }
  else {
    throw DL_ABORT_EX(fmt('Failed to load DHT routing table from %s. cause:%s',
                          filename.c_str(), 'bad header'));
  }
    
      const std::vector<std::shared_ptr<DHTNode>>& getNodes() const
  {
    return nodes_;
  }
    
    DHTSetup::DHTSetup() = default;
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
    namespace aria2 {
    }
    
    DHTTaskQueueImpl::DHTTaskQueueImpl()
    : periodicTaskQueue1_(NUM_CONCURRENT_TASK),
      periodicTaskQueue2_(NUM_CONCURRENT_TASK),
      immediateTaskQueue_(NUM_CONCURRENT_TASK)
{
}
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port) const
{
  return generateToken(infoHash, ipaddr, port, secret_[0]);
}
    
    
    {} // namespace aria2