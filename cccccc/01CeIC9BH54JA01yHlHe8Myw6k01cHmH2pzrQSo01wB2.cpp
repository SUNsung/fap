
        
        void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    bool DHTResponseMessage::isReply() const { return true; }
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    
    {  void setTaskFactory(DHTTaskFactory* taskFactory);
};
    
    #include 'common.h'
    
    #include 'DHTTask.h'
#include 'Logger.h'
#include 'LogFactory.h'
#include 'a2functional.h'
#include 'fmt.h'
    
      void update();
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    namespace aria2 {
    }
    
    class DHTTokenTracker;