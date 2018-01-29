#include <stdint.h>
#include <sys/stat.h>
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      Status Echo(ServerContext* context, const EchoRequest* request,
              EchoResponse* response) override {
    {
      std::unique_lock<std::mutex> lock(mu_);
      ++request_count_;
    }
    return TestServiceImpl::Echo(context, request, response);
  }
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
    /// Builds IAM credentials.
///
/// \warning Only use these credentials when connecting to a Google endpoint.
/// Using these credentials to connect to any other service may result in this
/// service being able to impersonate your client for requests to Google
/// services.
std::shared_ptr<CallCredentials> GoogleIAMCredentials(
    const grpc::string& authorization_token,
    const grpc::string& authority_selector);
    
       NOTE ON SYNCRHONIZATION: Similar to do_epoll_wait(), this function is only
   called by g_active_poller thread. So there is no need for synchronization
   when accessing fields in g_epoll_set */
static grpc_error* process_epoll_events(grpc_pollset* pollset) {
  static const char* err_desc = 'process_events';
  grpc_error* error = GRPC_ERROR_NONE;
    }
    
    /* Constructor for channel_data */
static grpc_error* init_channel_elem(grpc_channel_element* elem,
                                     grpc_channel_element_args* args) {
  channel_data* channeld = (channel_data*)elem->channel_data;
    }
    
    const grpc_arg* grpc_channel_args_find(const grpc_channel_args* args,
                                       const char* name) {
  if (args != nullptr) {
    for (size_t i = 0; i < args->num_args; ++i) {
      if (strcmp(args->args[i].key, name) == 0) {
        return &args->args[i];
      }
    }
  }
  return nullptr;
}
    
    grpc_mdelem_data grpc_static_mdelem_table[GRPC_STATIC_MDELEM_COUNT] = {
    {{&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
     {&grpc_static_metadata_refcounts[32], {{g_bytes + 468, 1}}}},
    {{&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
     {&grpc_static_metadata_refcounts[33], {{g_bytes + 469, 1}}}},
    {{&grpc_static_metadata_refcounts[7], {{g_bytes + 50, 11}}},
     {&grpc_static_metadata_refcounts[34], {{g_bytes + 470, 1}}}},
    {{&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 471, 8}}}},
    {{&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
     {&grpc_static_metadata_refcounts[36], {{g_bytes + 479, 4}}}},
    {{&grpc_static_metadata_refcounts[9], {{g_bytes + 77, 13}}},
     {&grpc_static_metadata_refcounts[37], {{g_bytes + 483, 7}}}},
    {{&grpc_static_metadata_refcounts[5], {{g_bytes + 36, 2}}},
     {&grpc_static_metadata_refcounts[38], {{g_bytes + 490, 8}}}},
    {{&grpc_static_metadata_refcounts[14], {{g_bytes + 158, 12}}},
     {&grpc_static_metadata_refcounts[39], {{g_bytes + 498, 16}}}},
    {{&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
     {&grpc_static_metadata_refcounts[40], {{g_bytes + 514, 4}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[41], {{g_bytes + 518, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[42], {{g_bytes + 521, 3}}}},
    {{&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
     {&grpc_static_metadata_refcounts[43], {{g_bytes + 524, 4}}}},
    {{&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
     {&grpc_static_metadata_refcounts[44], {{g_bytes + 528, 5}}}},
    {{&grpc_static_metadata_refcounts[4], {{g_bytes + 29, 7}}},
     {&grpc_static_metadata_refcounts[45], {{g_bytes + 533, 4}}}},
    {{&grpc_static_metadata_refcounts[3], {{g_bytes + 19, 10}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
     {&grpc_static_metadata_refcounts[46], {{g_bytes + 537, 3}}}},
    {{&grpc_static_metadata_refcounts[1], {{g_bytes + 5, 7}}},
     {&grpc_static_metadata_refcounts[47], {{g_bytes + 540, 3}}}},
    {{&grpc_static_metadata_refcounts[0], {{g_bytes + 0, 5}}},
     {&grpc_static_metadata_refcounts[48], {{g_bytes + 543, 1}}}},
    {{&grpc_static_metadata_refcounts[0], {{g_bytes + 0, 5}}},
     {&grpc_static_metadata_refcounts[49], {{g_bytes + 544, 11}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[50], {{g_bytes + 555, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[51], {{g_bytes + 558, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[52], {{g_bytes + 561, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[53], {{g_bytes + 564, 3}}}},
    {{&grpc_static_metadata_refcounts[2], {{g_bytes + 12, 7}}},
     {&grpc_static_metadata_refcounts[54], {{g_bytes + 567, 3}}}},
    {{&grpc_static_metadata_refcounts[55], {{g_bytes + 570, 14}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[56], {{g_bytes + 584, 13}}}},
    {{&grpc_static_metadata_refcounts[57], {{g_bytes + 597, 15}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[58], {{g_bytes + 612, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[59], {{g_bytes + 625, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[60], {{g_bytes + 631, 27}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[61], {{g_bytes + 658, 3}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[62], {{g_bytes + 661, 5}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[63], {{g_bytes + 666, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[64], {{g_bytes + 679, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[65], {{g_bytes + 692, 19}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 471, 8}}}},
    {{&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
     {&grpc_static_metadata_refcounts[36], {{g_bytes + 479, 4}}}},
    {{&grpc_static_metadata_refcounts[15], {{g_bytes + 170, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[66], {{g_bytes + 711, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[67], {{g_bytes + 727, 14}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[68], {{g_bytes + 741, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[69], {{g_bytes + 757, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[14], {{g_bytes + 158, 12}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[70], {{g_bytes + 770, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[71], {{g_bytes + 776, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[72], {{g_bytes + 780, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[73], {{g_bytes + 784, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[74], {{g_bytes + 790, 7}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[75], {{g_bytes + 797, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[20], {{g_bytes + 278, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[76], {{g_bytes + 801, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[77], {{g_bytes + 809, 17}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[78], {{g_bytes + 826, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[79], {{g_bytes + 839, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[80], {{g_bytes + 847, 19}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[81], {{g_bytes + 866, 13}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[21], {{g_bytes + 282, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[82], {{g_bytes + 879, 11}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[83], {{g_bytes + 890, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[84], {{g_bytes + 894, 8}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[85], {{g_bytes + 902, 12}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[86], {{g_bytes + 914, 18}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[87], {{g_bytes + 932, 19}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[88], {{g_bytes + 951, 5}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[89], {{g_bytes + 956, 7}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[90], {{g_bytes + 963, 7}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[91], {{g_bytes + 970, 11}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[92], {{g_bytes + 981, 6}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[93], {{g_bytes + 987, 10}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[94], {{g_bytes + 997, 25}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[95], {{g_bytes + 1022, 17}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[19], {{g_bytes + 268, 10}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[96], {{g_bytes + 1039, 4}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[97], {{g_bytes + 1043, 3}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[98], {{g_bytes + 1046, 16}}},
     {&grpc_static_metadata_refcounts[23], {{g_bytes + 302, 0}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 471, 8}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[37], {{g_bytes + 483, 7}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[99], {{g_bytes + 1062, 16}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[36], {{g_bytes + 479, 4}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[100], {{g_bytes + 1078, 13}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[101], {{g_bytes + 1091, 12}}}},
    {{&grpc_static_metadata_refcounts[10], {{g_bytes + 90, 20}}},
     {&grpc_static_metadata_refcounts[102], {{g_bytes + 1103, 21}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[35], {{g_bytes + 471, 8}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[36], {{g_bytes + 479, 4}}}},
    {{&grpc_static_metadata_refcounts[16], {{g_bytes + 186, 15}}},
     {&grpc_static_metadata_refcounts[100], {{g_bytes + 1078, 13}}}},
};
bool grpc_static_callout_is_default[GRPC_BATCH_CALLOUTS_COUNT] = {
    true,  // :path
    true,  // :method
    true,  // :status
    true,  // :authority
    true,  // :scheme
    true,  // te
    true,  // grpc-message
    true,  // grpc-status
    true,  // grpc-payload-bin
    true,  // grpc-encoding
    true,  // grpc-accept-encoding
    true,  // grpc-server-stats-bin
    true,  // grpc-tags-bin
    true,  // grpc-trace-bin
    true,  // content-type
    true,  // content-encoding
    true,  // accept-encoding
    true,  // grpc-internal-encoding-request
    true,  // grpc-internal-stream-encoding-request
    true,  // user-agent
    true,  // host
    true,  // lb-token
};
    
      StringDest dest_;
  StringSource source_;
  ReportCollector report_;
  bool reading_;
  Writer* writer_;
  Reader* reader_;
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
          case kLogNumber:
        if (GetVarint64(&input, &log_number_)) {
          has_log_number_ = true;
        } else {
          msg = 'log number';
        }
        break;
    
      // Store the specified number as the sequence number for the start of
  // this batch.
  static void SetSequence(WriteBatch* batch, SequenceNumber seq);
    
      void Run() {
    PrintHeader();
    Open(false);
    }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
      for (size_t i = 0; i < 3; ++i) {
    std::string res;
    ASSERT_OK(db->Get(ReadOptions(), keys[i], &res));
    ASSERT_TRUE(res == vals[i]);
  }
    
    class Issue200 { };
    
    
    {  // Check last filter
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'hello'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'bar'));
}
    
    
    {    current_->Next();
    FindSmallest();
  }
    
    QueryData genKernelIntegrity(QueryContext &context) {
  QueryData results;
  Row r;
  std::string content;
  std::string text_segment_hash;
  std::string syscall_addr_modified;
    }
    
    namespace osquery {
    }
    
      /// Return an instance to a registered EventSubscriber.
  static EventSubscriberRef getEventSubscriber(const std::string& sub);
    
      /// The group this instance dropped privileges to.
  gid_t to_group_{0};
    
    /**
 * @brief Mimic the REGISTER macro, extensions should use this helper.
 *
 * The SDK does not provide a REGISTER macro for modules or extensions.
 * Tools built with the osquery SDK should use REGISTER_EXTERNAL to add to
 * their own 'external' registry. This registry will broadcast to the osquery
 * extension manager (core) in an extension.
 *
 * osquery 'modules' should not construct their plugin registrations in
 * global scope (global construction time). Instead they should use the
 * module call-in well defined symbol, declare their SDK constraints, then
 * use the REGISTER_MODULE call within `initModule`.
 */
#define REGISTER_EXTERNAL(t, r, n)                                             \
  namespace registries {                                                       \
  const ::osquery::registries::PI<t> k##ExtensionRegistryItem##t(r, n, false); \
  }
    
      char* buffer = (char*)malloc(range.length + 1);
  if (buffer == nullptr) {
    return '';
  }
  memset(buffer, 0, range.length + 1);
    
        nodeData->loop = loop;
    nodeData->asyncMutex = &asyncMutex;
    
    /// Block until SIGINT or SIGTERM is received.
void
sig_wait()
{
    boost::asio::io_service ios;
    boost::asio::signal_set signals(
        ios, SIGINT, SIGTERM);
    signals.async_wait(
        [&](boost::system::error_code const&, int)
        {
        });
    ios.run();
}
    
    int getKb(int pid) {
    std::string line;
    std::ifstream self((std::string('/proc/') + std::to_string(pid) + std::string('/status')).c_str());
    int vmRSS;
    while(!self.eof()) {
        std::getline(self, line, ':');
        if (line == 'VmRSS') {
            self >> vmRSS;
        }
        std::getline(self, line);
    }
    return vmRSS;
}
    
    uv_loop_t *loop;
uv_buf_t upgradeHeader;
uv_buf_t framePack;
    
    
    {    if (group->userPingMessage.length()) {
        group->broadcast(group->userPingMessage.data(), group->userPingMessage.length(), OpCode::TEXT);
    } else {
        group->broadcast(nullptr, 0, OpCode::PING);
    }
}
    
    
    {}
    
        if (httpSocket->contentLength) {
        httpSocket->missedDeadline = false;
        if (httpSocket->contentLength >= length) {
            Group<isServer>::from(httpSocket)->httpDataHandler(httpSocket->outstandingResponsesTail, data, length, httpSocket->contentLength -= length);
            return httpSocket;
        } else {
            Group<isServer>::from(httpSocket)->httpDataHandler(httpSocket->outstandingResponsesTail, data, httpSocket->contentLength, 0);
            data += httpSocket->contentLength;
            length -= httpSocket->contentLength;
            httpSocket->contentLength = 0;
        }
    }
    
        char *getSmallMemoryBlock(int index) {
        if (preAlloc[index]) {
            char *memory = preAlloc[index];
            preAlloc[index] = nullptr;
            return memory;
        } else {
            return new char[index << 4];
        }
    }