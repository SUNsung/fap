
        
        
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    std::ostream& operator<<(std::ostream& os, const Status& x) {
  os << x.ToString();
  return os;
}
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
      ListPeople(address_book);
    
      /** Will not return until the internal thread has exited. */
  void StopInternalThread();
    
    namespace caffe {
    }
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      virtual inline const char* type() const { return 'Crop'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    size_t num_threads = 31;
size_t work_chunk  = 120;
    
        if (!semi) {
      // only media type (type/subtype,data)
      ssize_t media_len = comma - data;
      meta_len -= media_len;
      data += media_len;
    } else if (slash && slash < semi) {
      // media type + param (type/subtype;param,data)
      ssize_t media_len = semi - data;
      meta_len -= media_len;
      data += media_len;
    } else {
      // no media type (;base64,data)
      if (semi != data // ex. foo;base64,data
          || meta_len != sizeof(';base64') - 1 // ex. ;something,data
          || memcmp(data, ';base64',
                    sizeof(';base64') - 1)) { // ex. ;base65,data
          raise_warning('rfc2397: invalid meta data');
          return nullptr;
        }
    }
    
    namespace HPHP {
    }
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
    
    {}
    
      static void clear(Data& data);
    
    namespace aria2 {
    }
    
      virtual void startup() = 0;
    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
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
    
      virtual ~DHTTaskQueueImpl();
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
    DNSCache::CacheEntry& DNSCache::CacheEntry::operator=(const CacheEntry& c)
{
  if (this != &c) {
    hostname_ = c.hostname_;
    port_ = c.port_;
    addrEntries_ = c.addrEntries_;
  }
  return *this;
}