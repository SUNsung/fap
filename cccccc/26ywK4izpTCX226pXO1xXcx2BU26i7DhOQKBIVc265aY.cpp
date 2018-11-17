
        
        // If true, then AVX has been detected.
bool SIMDDetect::avx_available_;
bool SIMDDetect::avx2_available_;
bool SIMDDetect::avx512F_available_;
bool SIMDDetect::avx512BW_available_;
// If true, then SSe4.1 has been detected.
bool SIMDDetect::sse_available_;
    
      // Check if part from seed2 label: with low math density and left indented. We
  // are using two checks:
  // 1. If its left is aligned with any coordinates in indented_texts_left,
  // which we assume have been sorted.
  // 2. If its foreground density is over foreground_density_th.
  bool CheckForSeed2(
      const GenericVector<int>& indented_texts_left,
      const float foreground_density_th,
      ColPartition* part);
    
      /**
   * Returns true if the iterator is at the start of an object at the given
   * level.
   *
   * For instance, suppose an iterator it is pointed to the first symbol of the
   * first word of the third line of the second paragraph of the first block in
   * a page, then:
   *   it.IsAtBeginningOf(RIL_BLOCK) = false
   *   it.IsAtBeginningOf(RIL_PARA) = false
   *   it.IsAtBeginningOf(RIL_TEXTLINE) = true
   *   it.IsAtBeginningOf(RIL_WORD) = true
   *   it.IsAtBeginningOf(RIL_SYMBOL) = true
   */
  virtual bool IsAtBeginningOf(PageIteratorLevel level) const;
    
    #include 'blamer.h'
#include 'errcode.h'
#include 'ratngs.h'
#include 'reject.h'
#include 'tesseractclass.h'
#include 'werd.h'
    
        std::unique_ptr<DHTMessageReceiver> messageReceiver;
    
      std::shared_ptr<DHTNode> localNode_;
    
    
    {} // namespace aria2

    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    
    {  virtual bool finished() = 0;
};
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace
    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;
    
    DHTUnknownMessage::~DHTUnknownMessage() { delete[] data_; }
    
    DNSCache::DNSCache(const DNSCache& c) = default;