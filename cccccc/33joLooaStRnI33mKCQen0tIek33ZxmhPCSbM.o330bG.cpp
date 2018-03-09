
        
        
    {}  // namespace mate
    
    // A self-destroyed class for handling save page request.
class SavePageHandler : public content::DownloadManager::Observer,
                        public content::DownloadItem::Observer {
 public:
  using SavePageCallback = base::Callback<void(v8::Local<v8::Value>)>;
    }
    
    #include 'atom/browser/net/asar/url_request_asar_job.h'
#include 'net/base/filename_util.h'
#include 'net/base/net_errors.h'
    
      // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
    #include 'atom/browser/render_process_preferences.h'
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    String TimeStamp::CurrentMicroTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
  char ret[100];
  snprintf(ret, 100, '%.8F %ld', (double)tp.tv_usec / 1000000, tp.tv_sec);
  return String(ret, CopyString);
}
    
    struct DebuggerLoggerHook final : LoggerHook {
  StringBuffer& sb;
  explicit DebuggerLoggerHook(StringBuffer& sb) : sb(sb) {}
  void operator()(const char* /*hdr*/, const char* msg, const char* ending)
       override {
    TRACE(2, 'DebuggerProxy::append_stderr\n');
    if (s_stderr_color) {
      sb.append(s_stderr_color);
    }
    sb.append(msg);
    sb.append(ending);
    if (s_stderr_color) {
      sb.append(ANSI_COLOR_END);
    }
  }
};
    
    struct SSATmp;
struct Type;
    
    Vreg Vunit::makeConst(Vconst vconst) {
  auto it = constToReg.find(vconst);
  if (it != constToReg.end()) return it->second;
    }
    
      void delist() {
    auto n = m_next, p = m_prev;
    n->m_prev = p;
    p->m_next = n;
  }
    
    /*
 * Return the payload from a ArrayData* that is kPacked/VecKind.
 */
ALWAYS_INLINE
TypedValue* packedData(const ArrayData* arr) {
  return const_cast<TypedValue*>(
    reinterpret_cast<const TypedValue*>(arr + 1)
  );
}
    
      for (auto b : m_blocks) {
    for (auto s : succs(m_unit.blocks[b])) {
      auto srcCid = m_blockCluster[b];
      auto dstCid = m_blockCluster[s];
      if (srcCid == dstCid) continue;
      auto wgt = m_scale.weight(b, s);
      clusterGraph[srcCid][dstCid] += wgt;
    }
  }
    
    #include <atomic>
#include 'stddef.h'
    
    namespace irgen {
    }
    
    #include <memory>
    
    TEST(InlinedVectorTest, CreateAndIterate) {
  const int kNumElements = 9;
  InlinedVector<int, 2> v;
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
  }
  EXPECT_EQ(static_cast<size_t>(kNumElements), v.size());
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(i, v[i]);
  }
}
    
     private:
  int GetIntValueFromMetadata(
      const char* key,
      const std::multimap<grpc::string_ref, grpc::string_ref>& metadata,
      int default_value);
    
    
    {
    {      // Send a simple response after a small delay that would ensure the client
      // deadline is exceeded.
      gpr_log(GPR_INFO, 'Got request %d', n);
      testing::EchoResponse response;
      response.set_message('foobar');
      // A bit of sleep to make sure the deadline elapses.
      gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_MONOTONIC),
                                   gpr_time_from_millis(50, GPR_TIMESPAN)));
      {
        std::lock_guard<std::mutex> lock(mu);
        if (shutting_down) {
          gpr_log(GPR_INFO,
                  'shut down while processing call, not calling Finish()');
          // Continue flushing the CQ.
          continue;
        }
        gpr_log(GPR_INFO, 'Finishing request %d', n);
        responder.Finish(response, grpc::Status::OK, (void*)2);
        if (!cq->Next(&tag, &ok)) {
          break;
        }
        EXPECT_EQ((void*)2, tag);
      }
    }
  });
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
      grpc::testing::RunQPS();
    
    std::string GetDbFileContent(int argc, char** argv) {
  std::string db_path;
  std::string arg_str('--db_path');
  if (argc > 1) {
    std::string argv_1 = argv[1];
    size_t start_position = argv_1.find(arg_str);
    if (start_position != std::string::npos) {
      start_position += arg_str.size();
      if (argv_1[start_position] == ' ' ||
          argv_1[start_position] == '=') {
        db_path = argv_1.substr(start_position + 1);
      }
    }
  } else {
    db_path = 'route_guide_db.json';
  }
  std::ifstream db_file(db_path);
  if (!db_file.is_open()) {
    std::cout << 'Failed to open ' << db_path << std::endl;
    return '';
  }
  std::stringstream db;
  db << db_file.rdbuf();
  return db.str();
}
    
    #include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <grpc++/client_context.h>
#include <grpc++/create_channel.h>
#include <grpc++/security/credentials.h>
#include 'helper.h'
#include 'route_guide.grpc.pb.h'
    
      bool PrintAddServicerToServer(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintServicer(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintStub(const grpc::string& package_qualified_service_name,
                 const grpc_generator::Service* service,
                 grpc_generator::Printer* out);
    
      NSDictionary *flagNames = @{
#define GRPC_XMACRO_ITEM(methodName, FlagName) \
    @(kSCNetworkReachabilityFlags ## FlagName): @#methodName,
#include 'GRXReachabilityFlagNames.xmacro.h'
#undef GRPC_XMACRO_ITEM
  };
    
    
# if defined(OC_CLZ32)
/**
 * OC_ILOGNZ_32 - Integer binary logarithm of a non-zero 32-bit value.
 * @_v: A non-zero 32-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_32() instead.
 */
#  define OC_ILOGNZ_32(_v) (OC_CLZ32_OFFS-OC_CLZ32(_v))
/**
 * OC_ILOG_32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_32(_v)   (OC_ILOGNZ_32(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_32(_v) (oc_ilog32(_v))
#  define OC_ILOG_32(_v)   (oc_ilog32(_v))
# endif
    
    #include 'vorbis/codec.h'
#include 'backends.h'
#include 'books/coupled/res_books_stereo.h'
    
    #define opus_fft(_st, _fin, _fout, arch) \
   ((void)(arch), opus_fft_neon(_st, _fin, _fout))
    
    bool FilterBlockReader::KeyMayMatch(uint64_t block_offset, const Slice& key) {
  uint64_t index = block_offset >> base_lg_;
  if (index < num_) {
    uint32_t start = DecodeFixed32(offset_ + index*4);
    uint32_t limit = DecodeFixed32(offset_ + index*4 + 4);
    if (start <= limit && limit <= static_cast<size_t>(offset_ - data_)) {
      Slice filter = Slice(data_ + start, limit - start);
      return policy_->KeyMayMatch(key, filter);
    } else if (start == limit) {
      // Empty filters do not match any keys
      return false;
    }
  }
  return true;  // Errors are treated as potential matches
}
    
      void CheckOffsetPastEndReturnsNoRecords(uint64_t offset_past_end) {
    WriteInitialOffsetLog();
    reading_ = true;
    source_.contents_ = Slice(dest_.contents_);
    Reader* offset_reader = new Reader(&source_, &report_, true/*checksum*/,
                                       WrittenBytes() + offset_past_end);
    Slice record;
    std::string scratch;
    ASSERT_TRUE(!offset_reader->ReadRecord(&record, &scratch));
    delete offset_reader;
  }
    
    
    {}  // namespace leveldb
    
    #include <string>
#include <stdint.h>
#include 'db/dbformat.h'
#include 'leveldb/cache.h'
#include 'leveldb/table.h'
#include 'port/port.h'
    
    
    {  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    PutVarint32(dst, kNewFile);
    PutVarint32(dst, new_files_[i].first);  // level
    PutVarint64(dst, f.number);
    PutVarint64(dst, f.file_size);
    PutLengthPrefixedSlice(dst, f.smallest.Encode());
    PutLengthPrefixedSlice(dst, f.largest.Encode());
  }
}
    
      void Clear();
    
    
    {    SeekToRestartPoint(restart_index_);
    do {
      // Loop until end of current entry hits the start of original entry
    } while (ParseNextKey() && NextEntryOffset() < original);
  }
    
    
    {  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const {
    uint32_t h = Hash(key.data(), key.size(), 1);
    for (size_t i = 0; i + 4 <= filter.size(); i += 4) {
      if (h == DecodeFixed32(filter.data() + i)) {
        return true;
      }
    }
    return false;
  }
};
    
        page->offset.clear();
    page->offset.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      page->offset.push_back(
          page->offset.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    page->data.resize(page->offset.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    
    #include <cstdio>
#include <cstring>
#include <string>
#include <istream>
#include <fstream>
    
    /*! \brief a column storage, to be used with ApplySplit. Note that each
    bin id is stored as index[i] + index_base. */
template<typename T>
class Column {
 public:
  ColumnType type;
  const T* index;
  uint32_t index_base;
  const size_t* row_ind;
  size_t len;
};
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
    #include <chrono>
#include <functional>
#include <ratio>
#include <thread>
    
    TEST(MemoryIdler, futexWaitAwokenEarly) {
  StrictMock<Futex<MockAtom>> fut;
  auto clock = MockClock::setup();
  auto begin = MockClock::time_point(std::chrono::seconds(100));
  auto idleTimeout = MemoryIdler::defaultIdleTimeout.load();
    }
    
    template <class I, class = void>
struct SubsumptionsOf_ {
  using type = TypeList<>;
};
    
    static void contentionAtWidthGetcpu(size_t iters, size_t stripes, size_t work) {
  contentionAtWidth<std::atomic>(iters, stripes, work);
}
    
    /**
 * Internal use for the macro SCOPE_FAIL below
 */
enum class ScopeGuardOnFail {};
    
    template <typename Fn>
void DynamicParser::required(const folly::dynamic& key, Fn fn) {
  wrapError(&key, [&]() {
    auto vp = value().get_ptr(key);
    if (!vp) {
      throw std::runtime_error(folly::to<std::string>(
        'Couldn't find key ', detail::toPseudoJson(key), ' in dynamic object'
      ));
    }
    parse(key, *vp, fn);
  });
}
    
      /**
   * Error-wraps fn(auto-converted key & value) if d[key] is set. The
   * top-of-file docblock explains the auto-conversion.
   */
  template <typename Fn>
  void optional(const folly::dynamic& key, Fn);
    
      auto parse_error = errors.at('nested').at(coerce_fn(good_k));
  EXPECT_EQ(d.at(good_k), parse_error.at('value'));
  EXPECT_PCRE_MATCH('.*failsauce.*', parse_error.at('error').getString());