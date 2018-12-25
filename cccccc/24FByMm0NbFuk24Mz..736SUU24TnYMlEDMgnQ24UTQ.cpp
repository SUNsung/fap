
        
        grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
    
    {}  // namespace grpc
    
    void ProtoServerReflection::FillErrorResponse(const Status& status,
                                              ErrorResponse* error_response) {
  error_response->set_error_code(status.error_code());
  error_response->set_error_message(status.error_message());
}
    
    namespace grpc {
namespace reflection {
    }
    }
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    namespace grpc {
    }
    
    #ifndef GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
#define GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    void DHTRoutingTable::getBuckets(
    std::vector<std::shared_ptr<DHTBucket>>& buckets) const
{
  dht::enumerateBucket(buckets, root_.get());
}
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    public:
  DHTTaskQueueImpl();
    
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
    
    
    {} // namespace aria2
    
      static void ThreadBody(void* v) {
    ThreadState* thread = reinterpret_cast<ThreadState*>(v);
    SharedState* shared = thread->shared;
    }
    
      // Doesn't include records skipped because of
  // CompactionFilter::Decision::kRemoveAndSkipUntil.
  int64_t num_record_drop_user = 0;
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      delay_token_2.reset();
  // 1000 used, 8240 left
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 1000u));
    
      // number of records being replaced by newer record associated with same key.
  // this could be a new value or a deletion entry for that key so this field
  // sums up all updated and deleted keys
  uint64_t num_records_replaced;
    
      // the thread pool id
  uint64_t thread_pool_id;
    
      // The type used to refer to a thread state.
  // A state describes lower-level action of a thread
  // such as reading / writing a file or waiting for a mutex.
  enum StateType : int {
    STATE_UNKNOWN = 0,
    STATE_MUTEX_WAIT = 1,
    NUM_STATE_TYPES
  };