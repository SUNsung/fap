
        
        #undef BODY_ARG
#undef BODY_NONE
    
    struct APCCollection {
  static APCHandle::Pair Make(const ObjectData*,
                              APCHandleLevel level,
                              bool unserializeObj);
  static void Delete(APCHandle*);
    }
    
      static void ParseIniFile(const std::string &filename,
                           const bool is_system = true);
  static void ParseIniFile(const std::string &filename, IniSettingMap &ini,
                           const bool constants_only = false,
                           const bool is_system = true);
    
    template <typename F>
void find(const std::string &root, const std::string& path, bool php,
          const F& callback) {
  auto spath = path.empty() || !isDirSeparator(path[0]) ?
    path : path.substr(1);
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    #include <folly/String.h>
    
    DHTReplaceNodeTask::~DHTReplaceNodeTask() = default;
    
    
    {  void setTaskFactory(DHTTaskFactory* taskFactory);
};
    
    namespace aria2 {
    }
    
    void DHTRoutingTableSerializer::setLocalNode(
    const std::shared_ptr<DHTNode>& localNode)
{
  localNode_ = localNode;
}
    
    class DHTTaskFactory {
public:
  virtual ~DHTTaskFactory() = default;
    }
    
    DHTTaskFactoryImpl::DHTTaskFactoryImpl()
    : routingTable_(nullptr),
      dispatcher_(nullptr),
      factory_(nullptr),
      taskQueue_(nullptr),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
      virtual std::shared_ptr<DHTTask> createPeerLookupTask(
      const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
      const std::shared_ptr<PeerStorage>& peerStorage) CXX11_OVERRIDE;
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    public:
  DNSCache();
  DNSCache(const DNSCache& c);
  ~DNSCache();
    
    
    {    static BOOST_FORCEINLINE storage_type fetch_xor(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_XOR8_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_XOR8_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_XOR8_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_XOR8(&storage, v));
            break;
        }
        return v;
    }
};