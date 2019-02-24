
        
          size_t BytesRead() const override {
    return parser_->BytesRead();
  }
    
    namespace xgboost {
namespace common {
    }
    }
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    /*!
 * \brief macro to annotate begin of api
 */
#define R_API_BEGIN()                           \
  GetRNGstate();                                \
  try {
/*!
 * \brief macro to annotate end of api
 */
#define R_API_END()                             \
  } catch(dmlc::Error& e) {                     \
    PutRNGstate();                              \
    error(e.what());                            \
  }                                             \
  PutRNGstate();
    
    #include <dmlc/registry.h>
#include <vector>
#include <utility>
#include <string>
#include <functional>
#include <memory>
#include './base.h'
#include './data.h'
#include './objective.h'
#include './feature_map.h'
#include '../../src/common/host_device_vector.h'
    
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
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
      ~DHTTaskExecutor();
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createPeerLookupTask(
    const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
    const std::shared_ptr<PeerStorage>& peerStorage)
{
  auto task = std::make_shared<DHTPeerLookupTask>(ctx, tcpPort);
  // TODO this may be not freed by RequestGroup::releaseRuntimeResource()
  task->setPeerStorage(peerStorage);
  setCommonProperty(task);
  return task;
}
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
    DNSCache::AddrEntry::AddrEntry(const std::string& addr)
    : addr_(addr), good_(true)
{
}
    
    #include <string>
#include <set>
#include <algorithm>
#include <vector>
    
        QObject::connect(&example, SIGNAL(finished()), &app, SLOT(quit()));
    QTimer::singleShot(0, &example, SLOT(run()));
    
    
    {    //1
    ret = p.read(&p, buf, sizeof(buf));
    if (ret < 0)
    {
        swSysError('read() failed.');
    }
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world1', buf), 0);
    //2
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world2', buf), 0);
    //3
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world3', buf), 0);
}
    
    using namespace std;
    
    class coro_test
{
public:
    coro_test(coroutine_func_t _fn, void *_arg, int *_complete_num) : fn(_fn), arg(_arg), complete_num(_complete_num)
    {
    }
    }