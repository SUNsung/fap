
        
        
    {  DISALLOW_COPY_AND_ASSIGN(DesktopCapturer);
};
    
      AcceleratorCallbackMap accelerator_callback_map_;
    
    #include 'shell/browser/api/atom_api_power_monitor.h'
    
    namespace gin {
    }
    
    #if BUILDFLAG(ENABLE_VIEW_API)
void View::SetLayoutManager(mate::Handle<LayoutManager> layout_manager) {
  layout_manager_.Reset(isolate(), layout_manager->GetWrapper());
  view()->SetLayoutManager(layout_manager->TakeOver());
}
    
    
    {  std::string tmp1, tmp2;
  ASSERT_OK(db_->Put(WriteOptions(), Key(1000, &tmp1), Value(1000, &tmp2)));
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
  dbi->TEST_CompactMemTable();
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
}
    
      // Accessors/mutators for links.  Wrapped in methods so we can
  // add the appropriate barriers as necessary.
  Node* Next(int n) {
    assert(n >= 0);
    // Use an 'acquire load' so that we observe a fully initialized
    // version of the returned Node.
    return next_[n].load(std::memory_order_acquire);
  }
  void SetNext(int n, Node* x) {
    assert(n >= 0);
    // Use a 'release store' so that anybody who reads through this
    // pointer observes a fully initialized version of the inserted node.
    next_[n].store(x, std::memory_order_release);
  }
    
      // Return the value for the current entry.  The underlying storage for
  // the returned slice is valid only until the next modification of
  // the iterator.
  // REQUIRES: Valid()
  virtual Slice value() const = 0;
    
    void TableBuilder::Flush() {
  Rep* r = rep_;
  assert(!r->closed);
  if (!ok()) return;
  if (r->data_block.empty()) return;
  assert(!r->pending_index_entry);
  WriteBlock(&r->data_block, &r->pending_handle);
  if (ok()) {
    r->pending_index_entry = true;
    r->status = r->file->Flush();
  }
  if (r->filter_block != nullptr) {
    r->filter_block->StartBlock(r->offset);
  }
}
    
    char* Arena::AllocateAligned(size_t bytes) {
  const int align = (sizeof(void*) > 8) ? sizeof(void*) : 8;
  static_assert((align & (align - 1)) == 0,
                'Pointer size should be a power of 2');
  size_t current_mod = reinterpret_cast<uintptr_t>(alloc_ptr_) & (align - 1);
  size_t slop = (current_mod == 0 ? 0 : align - current_mod);
  size_t needed = bytes + slop;
  char* result;
  if (needed <= alloc_bytes_remaining_) {
    result = alloc_ptr_ + slop;
    alloc_ptr_ += needed;
    alloc_bytes_remaining_ -= needed;
  } else {
    // AllocateFallback always returned aligned memory
    result = AllocateFallback(bytes);
  }
  assert((reinterpret_cast<uintptr_t>(result) & (align - 1)) == 0);
  return result;
}
    
      // Fill a file with data generated via a sequence of randomly sized writes.
  static const size_t kDataSize = 10 * 1048576;
  std::string data;
  while (data.size() < kDataSize) {
    int len = rnd.Skewed(18);  // Up to 2^18 - 1, but typically much smaller
    std::string r;
    test::RandomString(&rnd, len, &r);
    ASSERT_OK(writable_file->Append(r));
    data += r;
    if (rnd.OneIn(10)) {
      ASSERT_OK(writable_file->Flush());
    }
  }
  ASSERT_OK(writable_file->Sync());
  ASSERT_OK(writable_file->Close());
  delete writable_file;
    
    Slice BlockBuilder::Finish() {
  // Append restart array
  for (size_t i = 0; i < restarts_.size(); i++) {
    PutFixed32(&buffer_, restarts_[i]);
  }
  PutFixed32(&buffer_, restarts_.size());
  finished_ = true;
  return Slice(buffer_);
}
    
    #include 'db/builder.h'
    
            std::wstring ToString(uint32_t radix, NUMOBJ_FMT format, int32_t precision) const;
        uint64_t ToUInt64_t() const;
    
    #define CREATETAYLOR()                                                                                                                                         \
    PRAT xx = nullptr;                                                                                                                                         \
    PNUMBER n2 = nullptr;                                                                                                                                      \
    PRAT pret = nullptr;                                                                                                                                       \
    PRAT thisterm = nullptr;                                                                                                                                   \
    DUPRAT(xx, *px);                                                                                                                                           \
    mulrat(&xx, *px, precision);                                                                                                                               \
    createrat(pret);                                                                                                                                           \
    pret->pp = i32tonum(0L, BASEX);                                                                                                                            \
    pret->pq = i32tonum(0L, BASEX);
    
    #include 'pch.h'
#include 'LiveRegionHost.h'
    
      template<typename K, typename T, typename H, typename E>
  _OutputStream &operator<< (const hphp_hash_map<K, T, H, E> &v) {
    m_out << '{';
    for (auto iter = v.begin(); iter != v.end(); ++iter) {
      if (iter != v.begin()) m_out << ',';
      *this << Name(iter->first);
      *this << iter->second;
    }
    m_out << '}\n';
    return *this;
  }
    
    #ifndef incl_HPHP_MYSQLSTATS_H_
#define incl_HPHP_MYSQLSTATS_H_
    
      bool operator==(int16_t v) const { return compare(v) == 0;}
  bool operator!=(int16_t v) const { return compare(v) != 0;}
  bool operator>=(int16_t v) const { return compare(v) >= 0;}
  bool operator<=(int16_t v) const { return compare(v) <= 0;}
  bool operator> (int16_t v) const { return compare(v) >  0;}
  bool operator< (int16_t v) const { return compare(v) <  0;}
    
    
    {
    {}}
    
    TEST_F(ProxygenTransportBasicTest, valid_expect) {
  auto req = getRequest(HTTPMethod::POST);
  auto length = folly::to<std::string>(RuntimeOption::MaxPostSize);
  req->getHeaders().add(HTTP_HEADER_CONTENT_LENGTH, length);
  req->getHeaders().add(HTTP_HEADER_EXPECT, '100-continue');
  EXPECT_CALL(m_txn, sendHeaders(IsResponseStatusCode(100)));
  m_transport->onHeadersComplete(std::move(req));
}
    
    void cgDivDbl(IRLS& env, const IRInstruction* inst) {
  auto const d = dstLoc(env, inst, 0).reg();
  auto const dividend = srcLoc(env, inst, 0).reg();
  auto const divisor  = srcLoc(env, inst, 1).reg();
  auto& v = vmain(env);
    }
    
    
    {  if (!passed) {
    printf('%s:%d\nParsing: [%s] (req %d)\nBet %d:\n'
           '--------------------------------------\n'
           '%s'
           '--------------------------------------\n'
           'Got %d:\n'
           '--------------------------------------\n'
           '%s'
           '--------------------------------------\n',
           file, line, input, url + 1, (int)strlen(outputs[url]), outputs[url],
           (int)actual.length(), actual.c_str());
    return false;
  }
  return true;
}
    
    Variant HHVM_FUNCTION(print_r, const Variant& expression, bool ret = false);
Variant HHVM_FUNCTION(var_export, const Variant& expression, bool ret = false);
void HHVM_FUNCTION(var_dump,
                   const Variant& v, const Array& _argv = null_array);
void HHVM_FUNCTION(debug_zval_dump, const Variant& variable);
String HHVM_FUNCTION(serialize, const Variant& value);
Variant HHVM_FUNCTION(unserialize, const String& str, const Array& options);
    
    // This value should be enough bytes to emit a REQ_RETRANSLATE: lea (4 or 7
// bytes), movq (10 bytes), and jmp (5 bytes). We then add some extra slack for
// safety.
static constexpr int kMinTranslationBytes = 32;
static constexpr size_t kRoundUp = 2ull << 20;
    
    bool ConfigManager::InitInternal() {
  if (inited_) {
    return true;
  }
  for (auto iter = model_config_map_.begin(); iter != model_config_map_.end();
       ++iter) {
    delete iter->second;
  }
  model_config_map_.clear();
    }
    
      {
    WriteLockGuard<AtomicRWLock> lck(poll_data_lock_);
    auto size = requests_.erase(req.fd);
    if (size == 0) {
      AERROR << 'unregister failed, can't find fd: ' << req.fd;
      return false;
    }
    }
    
      // keppler_orbit->set_codesonL2channel(eph.);
  keppler_orbit->set_l2pdataflag(eph.flag);
  keppler_orbit->set_accuracy(eph.sva);
  keppler_orbit->set_health(eph.svh);
  keppler_orbit->set_tgd(eph.tgd[0]);
  keppler_orbit->set_iodc(eph.iodc);
    
      NaviSpeedTsConstraints constraints;
  constraints.v_max = 20.0;
  constraints.v_preffered = 10.0;
  constraints.a_max = 4.0;
  constraints.a_preffered = 2.0;
  constraints.b_max = 5.0;
  constraints.b_preffered = 2.0;
  graph.UpdateConstraints(constraints);
    
    /**
 * @namespace apollo::common::math
 * @brief apollo::common::math
 */
namespace apollo {
namespace common {
namespace math {
    }
    }
    }
    
      ObstacleDetectorInitOptions init_options;
  init_options.root_dir = FLAGS_detector_root;
  init_options.conf_file = FLAGS_detector_conf;
    
      std::for_each(expect.begin(), expect.end(), [](int& input) {
    std::vector<int> vec = {1, 2, 3, 4};
    std::for_each(vec.begin(), vec.end(), [](int& v) { ++v; });
    input = std::accumulate(vec.begin(), vec.end(), input);
  });
    
    #include <memory>
#include <string>
#include <unordered_map>
#include <vector>
    
    #define ALOG_MODULE_STREAM_INFO(module)                         \
  google::LogMessage(__FILE__, __LINE__, google::INFO).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET