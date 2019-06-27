
        
            typedef int8_t   s8;
    typedef uint8_t  u8;
    typedef int16_t  s16;
    typedef uint16_t u16;
    typedef int32_t  s32;
    typedef uint32_t u32;
    typedef float    f32;
    typedef int64_t  s64;
    typedef uint64_t u64;
    typedef double   f64;
    
    
    {    void operator() (const s32 * src0, const s32 * src1, s32 * dst) const
    {
        dst[0] = saturate_cast<s32>(alpha*src0[0] + beta*src1[0] + gamma);
    }
};
    
    
    {    // the final pass, form the final image
    uint8x16_t v2 = vmovq_n_u8(2);
    const u8* ptrmap = map + mapstep + 1;
    for (size_t i = 0; i < size.height; i++, ptrmap += mapstep)
    {
        u8* _dst = internal::getRowPtr(dstBase, dstStride, i);
        ptrdiff_t j = 0;
        for (; j < (ptrdiff_t)size.width - 16; j += 16)
        {
            internal::prefetch(ptrmap);
            uint8x16_t vmap = vld1q_u8(ptrmap + j);
            uint8x16_t vdst = vceqq_u8(vmap, v2);
            vst1q_u8(_dst+j, vdst);
        }
        for (; j < (ptrdiff_t)size.width; j++)
            _dst[j] = (u8)-(ptrmap[j] >> 1);
    }
}
    
    #include 'common.hpp'
#include 'vtransform.hpp'
    
    #include <carotene/functions.hpp>
#include 'saturate_cast.hpp'
    
    bool isGaussianBlur3x3Supported(const Size2D &size, BORDER_MODE border)
{
    return isSupportedConfiguration() && size.width >= 8 &&
        (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REPLICATE);
}
    
    namespace CAROTENE_NS {
    }
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
     protected:
  ~NwAppCrashBrowserFunction() override {}
    
    
    {}
    
    namespace grpc {
    }
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    
    {
    {   private:
    const grpc::string name_;
    const int value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new IntOption(name, value));
}
    
    #ifdef GPR_APPLE
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    void ProtoToCoreStats(const grpc::core::Stats& proto, grpc_stats_data* core) {
  memset(core, 0, sizeof(*core));
  for (const auto& m : proto.metrics()) {
    switch (m.value_case()) {
      case Metric::VALUE_NOT_SET:
        break;
      case Metric::kCount:
        for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
          if (m.name() == grpc_stats_counter_name[i]) {
            core->counters[i] = m.count();
            break;
          }
        }
        break;
      case Metric::kHistogram:
        for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
          if (m.name() == grpc_stats_histogram_name[i]) {
            const auto& h = m.histogram();
            bool valid = true;
            if (grpc_stats_histo_buckets[i] != h.buckets_size()) valid = false;
            for (int j = 0; valid && j < h.buckets_size(); j++) {
              if (grpc_stats_histo_bucket_boundaries[i][j] !=
                  h.buckets(j).start()) {
                valid = false;
              }
            }
            if (!valid) {
              gpr_log(GPR_ERROR,
                      'Found histogram %s but shape is different from proto',
                      m.name().c_str());
            }
            for (int j = 0; valid && j < h.buckets_size(); j++) {
              core->histograms[grpc_stats_histo_start[i] + j] =
                  h.buckets(j).count();
            }
          }
        }
        break;
    }
  }
}
    
    //////////////////////////////////////////////////////////////////////
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}
    
    #include 'hphp/runtime/base/file.h'
    
    template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done) {
  if (LIKELY(map.numSubMaps() == 1) ||
      done.load(std::memory_order_relaxed) ||
      done.exchange(true, std::memory_order_relaxed)) {
    return;
  }
    }
    
    public:
  DHTRoutingTableDeserializer(int family);
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
    
    {} // namespace aria2
    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
    public:
  DHTTaskFactoryImpl();
    
    public:
  DHTTaskQueueImpl();
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
    #include <cstring>
#include <cstdlib>
    
        // print values
    std::cout << object << '\n';
    std::cout << *res1.first << ' ' << std::boolalpha << res1.second << '\n';
    
    
    {    // TODO: Error sending files.
    status = contRequest.call(params);
    if (!status.ok()) {
      VLOG(1) << 'Post of carved block ' << i
              << ' failed: ' << status.getMessage();
      continue;
    }
  }
    
      stripConfigComments(clone);
  auto doc = JSON::newObject();
  if (!doc.fromString(clone) || !doc.doc().IsObject()) {
    LOG(WARNING) << 'Error parsing the \'' << name << '\' pack JSON';
  } else {
    addPack(name, source, doc.doc());
  }
    
    
    {} // namespace osquery

    
      assert(column_families.size() == raw_handles.size() &&
         'can't map column families to handles');
  if (column_families.size() != raw_handles.size()) {
    return createError(
        DatabaseError::FailToOpenDatabase,
        'Fail to open database: can't map column families to handles');
  }
    
    int Flag::createAlias(const std::string& alias, const FlagDetail& flag) {
  instance().aliases_.insert(std::make_pair(alias, flag));
  return 0;
}
    
    class SQLPlugin : public Plugin {
 public:
  /// Run a SQL query string against the SQL implementation.
  virtual Status query(const std::string& query,
                       QueryData& results,
                       bool use_cache) const = 0;
    }
    
    
    {  EXPECT_TRUE(db->putString(kPersistentSettings, 'test_key_string', 'string'));
  auto string_value = db->getString(kPersistentSettings, 'test_key_string');
  EXPECT_TRUE(string_value);
  EXPECT_EQ(string_value.take(), 'string');
}