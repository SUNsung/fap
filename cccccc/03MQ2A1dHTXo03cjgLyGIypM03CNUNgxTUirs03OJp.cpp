
        
        const Status Status::OK = Status();
const Status Status::CANCELLED = Status(error::CANCELLED, '');
const Status Status::UNKNOWN = Status(error::UNKNOWN, '');
    
    // Copyright 2008 Google Inc. All Rights Reserved.
// Author: xpeng@google.com (Peter Peng)
    
    #include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipOutputStream is compatible with command line
// gzip or java.util.zip.GzipOutputStream
//
// Reads data on standard input and writes compressed gzip stream to standard
// output.
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    #include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/runtime-error.h'
    
      bool valid() const { return !isClosed(); }
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);
    
    #include 'hphp/util/struct-log.h'
    
    
    
    #ifndef incl_HPHP_URL_H_
#define incl_HPHP_URL_H_
    
    
    {  size_t operator()(const copy_ptr<Map>& m) const {
    auto ret = m->size();
    for (auto& kv : *m) {
      ret = folly::hash::hash_combine(ret, kv.first.get());
      ret = folly::hash::hash_combine(ret,
                                      static_cast<int64_t>(kv.second.m_type));
      if (!isNullType(kv.second.m_type)) {
        ret = folly::hash::hash_combine(ret, kv.second.m_data.num);
      }
    }
    return ret;
  }
};
    
        // writing access
    
    int main()
{
    // create a JSON value
    const json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }
    
    TEST_F(PacksTests, test_discovery_zero_state) {
  Pack pack('discovery_pack', getPackWithDiscovery().doc());
  auto stats = pack.getStats();
  EXPECT_EQ(stats.total, 0U);
  EXPECT_EQ(stats.hits, 0U);
  EXPECT_EQ(stats.misses, 0U);
}
    
    namespace osquery {
    }
    
    static const int kMaxLogMessageBufferSize = 65536;
    
    void RocksdbMigration::buildMigrationMap() {
  // No migration map at this stage, will be added as separate commit
}
    
    void Initializer::initWorkerWatcher(const std::string& name) const {
  if (isWorker()) {
    initWorker(name);
  } else {
    // The watcher will forever monitor and spawn additional workers.
    // This initialize will handle work for processes without watchdogs too.
    initWatcher();
  }
}
    
    /**
 * @brief An internal severity set mapping to Glog's LogSeverity levels.
 */
enum StatusLogSeverity {
  O_INFO = 0,
  O_WARNING = 1,
  O_ERROR = 2,
  O_FATAL = 3,
};
    
    #include 'plugin.h'
    
      /// Allow the plugin to introspect into the registered name (for logging).
  virtual void setName(const std::string& name) final;