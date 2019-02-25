
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
     private:
  ObjectManager* object_manager_;
    
    
    {  submenu_ = menu;
}
    
    
    {  base::WaitableEvent done(base::WaitableEvent::ResetPolicy::AUTOMATIC,
                           base::WaitableEvent::InitialState::NOT_SIGNALED);
  base::PostTaskWithTraits(
      FROM_HERE, {content::BrowserThread::IO},
      base::BindOnce(&SetProxyConfigCallback, &done,
                 base::WrapRefCounted(context_getter), config));
  done.Wait();
  return true;
}
    
    class NwAppClearCacheFunction : public NWSyncExtensionFunction, public content::BrowsingDataRemover::Observer {
 public:
  NwAppClearCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
  void OnBrowsingDataRemoverDone() override;
    }
    
    
    {  // Create temporary file
  auto fd = mkstemp(&tmp[0]);
  if (fd == -1) {
    throw std::system_error(errno, std::system_category());
  }
  close(fd);
  return std::string(tmp.data(), tmp.size());
}
    
    
    {} // namespace
    
    NO_GRADIENT(GivenTensorFill);
NO_GRADIENT(GivenTensorDoubleFill);
NO_GRADIENT(GivenTensorBoolFill);
NO_GRADIENT(GivenTensorIntFill);
NO_GRADIENT(GivenTensorInt64Fill);
NO_GRADIENT(GivenTensorStringFill);
    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
        std::unique_ptr<DHTMessageDispatcher> messageDispatcher;
    
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
    
    class DHTNode;
    
      std::shared_ptr<DHTNode> localNode_;
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    
    {} // namespace aria2

    
      // always return false
  virtual bool isReply() const CXX11_OVERRIDE;
    
      void markBad(const std::string& hostname, const std::string& ipaddr,
               uint16_t port);
    
    int main() {
    }
    
    /// Two pointers
/// Time Complexity:  O(n)
/// Space Complexity: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    }
    }
    
    public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    
    
    {
    {        return res;
    }
};
    
    int main() {
    }
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }