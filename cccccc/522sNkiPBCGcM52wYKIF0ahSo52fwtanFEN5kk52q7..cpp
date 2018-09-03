
        
        #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
      // Before insert part back into part_grid_, we will need re-compute some
  // of its attributes such as first_column_, last_column_. However, we still
  // want to preserve its type.
  BlobTextFlowType flow_type = part->flow();
  PolyBlockType part_type = part->type();
  BlobRegionType blob_type = part->blob_type();
    
      // Compute the super bounding box for all colpartitions inside part_grid_.
  void ComputeCPsSuperBBox();
    
    const PageIterator& PageIterator::operator=(const PageIterator& src) {
  page_res_ = src.page_res_;
  tesseract_ = src.tesseract_;
  include_upper_dots_ = src.include_upper_dots_;
  include_lower_dots_ = src.include_lower_dots_;
  scale_ = src.scale_;
  scaled_yres_ = src.scaled_yres_;
  rect_left_ = src.rect_left_;
  rect_top_ = src.rect_top_;
  rect_width_ = src.rect_width_;
  rect_height_ = src.rect_height_;
  delete it_;
  it_ = new PAGE_RES_IT(*src.it_);
  BeginWord(src.blob_index_);
  return *this;
}
    
    
    {  bool rword_indicates_list_item;
  bool rword_likely_starts_idea;
  bool rword_likely_ends_idea;
};
    
      ~Carver();
    
    #include <osquery/config.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
    
    /**
 * @brief Hash is a general utility class for hashing content
 *
 * @code{.cpp}
 *   Hash my_hash(HASH_TYPE_SHA256);
 *   my_hash.update(my_buffer, my_buffer_size);
 *   std::cout << my_hash.digest();
 * @endcode
 *
 */
class Hash : private boost::noncopyable {
 public:
  /**
   * @brief Hash constructor
   *
   * The hash class should be initialized with one of osquery::HashType as a
   * constructor argument.
   *
   * @param algorithm The hashing algorithm which will be used to compute the
   * hash
   */
  explicit Hash(HashType algorithm);
    }
    
      auto constraint = Constraint(EQUALS);
  constraint.expr = 'some';
  cl.add(constraint);
    
      void stop() override;
    
      // Test the matching capability.
  {
    auto sc = event_pub_->createSubscriptionContext();
    sc->path = '/etc';
    event_pub_->monitorSubscription(sc, false);
    EXPECT_EQ(sc->path, '/etc/');
    EXPECT_TRUE(event_pub_->isPathMonitored('/etc/'));
    EXPECT_TRUE(event_pub_->isPathMonitored('/etc/passwd'));
  }
    
      QueryData generate(QueryContext& request) {
    QueryData results;
    }
    
      static void clearData();
    
    public:
  DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                     const std::shared_ptr<DHTNode>& newNode);
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node, bool good)
{
  A2_LOG_DEBUG(fmt('Trying to add node:%s', node->toString().c_str()));
  if (*localNode_ == *node) {
    A2_LOG_DEBUG('Adding node with the same ID with localnode is not allowed.');
    return false;
  }
  auto treeNode = dht::findTreeNodeFor(root_.get(), node->getID());
  while (1) {
    const std::shared_ptr<DHTBucket>& bucket = treeNode->getBucket();
    if (bucket->addNode(node)) {
      A2_LOG_DEBUG('Added DHTNode.');
      return true;
    }
    else if (bucket->splitAllowed()) {
      A2_LOG_DEBUG(fmt('Splitting bucket. Range:%s-%s',
                       util::toHex(bucket->getMinID(), DHT_ID_LENGTH).c_str(),
                       util::toHex(bucket->getMaxID(), DHT_ID_LENGTH).c_str()));
      treeNode->split();
      ++numBucket_;
      if (treeNode->getLeft()->isInRange(node->getID())) {
        treeNode = treeNode->getLeft();
      }
      else {
        treeNode = treeNode->getRight();
      }
    }
    else {
      if (good) {
        bucket->cacheNode(node);
        A2_LOG_DEBUG(fmt('Cached node=%s', node->toString().c_str()));
      }
      return false;
    }
  }
  return false;
}
    
    #endif // D_DHT_ROUTING_TABLE_DESERIALIZER_H

    
    namespace aria2 {
    }
    
    #include <cstring>