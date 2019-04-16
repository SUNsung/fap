
        
        MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    #endif  // !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)

    
        std::shared_ptr<DHTNode> localNode;
    
    void DHTReplaceNodeTask::startup() { sendMessage(); }
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
    #include <cstring>
#include <cassert>
#include <cstdio>
#include <utility>
    
    #include <vector>
#include <string>
#include <memory>
    
      virtual void startup() = 0;
    
    #include <algorithm>
    
    #include 'common.h'
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPeerAnnounceTask(const unsigned char* infoHash)
{
  // TODO
  return nullptr;
}
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    void DHTTaskQueueImpl::addPeriodicTask1(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue1_.addTask(task);
}
    
    #include <cstring>
#include <cstdlib>
    
    DNSCache::AddrEntry& DNSCache::AddrEntry::operator=(const AddrEntry& c)
{
  if (this != &c) {
    addr_ = c.addr_;
    good_ = c.good_;
  }
  return *this;
}
    
    

    
    namespace BulkOperations {
    }
    
    template <class T>
TabViewModel::ModelFactory getTabModelFactory() {
  return TabViewModel::ModelFactory(
      [](QSharedPointer<RedisClient::Connection> c, int dbIndex) {
        return QSharedPointer<TabModel>(new T(c, dbIndex),
                                        &QObject::deleteLater);
      });
}

    
        public:
        enum Roles {
            name = Qt::UserRole + 1,
            arguments,
            summary,
            since
        };
    
     public slots:
  void executeCommand(const QString &);