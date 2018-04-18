
        
        namespace api {
    }
    
    #include 'storage/common/quota/quota_types.h'
    
    namespace atom {
    }
    
    namespace atom {
    }
    
      void UpdateCache();
    
    namespace atom {
    }
    
    #include 'atom/browser/ui/views/menu_model_adapter.h'
    
    const char* NativeFrameView::GetClassName() const {
  return kViewClassName;
}
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    namespace content {
class RenderFrameHost;
}
    
      static v8::Handle<v8::Object> GetObjectRegistry();
  static v8::Handle<v8::Value> GetWindowId(blink::WebFrame* frame);
  static void ZoomLevelChanged(blink::WebView* web_view);
  static void willHandleNavigationPolicy(
    content::RenderView* rv,
    blink::WebFrame* frame,
    const blink::WebURLRequest& request,
    blink::WebNavigationPolicy* policy,
    blink::WebString* manifest);
    
      // Get Shell's corresponding js object's id.
  static void GetShellIdForCurrentContext(
      const v8::FunctionCallbackInfo<v8::Value>& args);
    
    
    {  int object_id = 0;
  if (new_manifest->GetInteger('object_id', &object_id)) {
    DispatcherHost* dhost = FindDispatcherHost(web_contents->GetRenderViewHost());
    dhost->OnAllocateObject(object_id, 'Window', *new_manifest.get());
  }
}
    
    #include 'content/nw/src/api/menu/menu.h'
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    int64_t TimeStamp::Get(bool &error, int hou, int min, int sec, int mon, int day,
                   int yea, bool gmt) {
  auto dt = req::make<DateTime>(Current());
  if (gmt) {
    dt->setTimezone(req::make<TimeZone>('UTC'));
  }
  dt->set(hou, min, sec, mon, day, yea);
  return dt->toTimeStamp(error);
}
    
    void Timer::Dump() {
  if (!Trace::moduleEnabledRelease(Trace::jittime)) return;
  Trace::traceRelease('%s', Show().c_str());
}
    
    #include 'hphp/util/compatibility.h'
    
    namespace HPHP {
    }
    
      for (auto& block : blocks) {
    for (auto& inst : block.code) {
      if (inst.op == Vinstr::copyargs) return true;
    }
  }
    
    
    {  numa_node_mask = folly::nextPowTwo(numa_num_nodes) - 1;
}
    
    extern uint32_t numa_node_set;
extern uint32_t numa_node_mask;
extern uint32_t numa_num_nodes;
extern std::vector<bitmask*> node_to_cpu_mask;
extern bool use_numa;
    
      LdSSwitchData data;
  data.numCases   = numCases;
  data.cases      = &cases[0];
  data.defaultSk  = SrcKey{curSrcKey(env),
                           bcOff(env) + iv.strvec()[iv.size() - 1].dest};
  data.bcSPOff    = spOffBCFromFP(env);
    
    #include 'hphp/runtime/vm/hhbc.h'
    
    inline void liveRelocate(bool random) {
  return liveRelocate(random ? -1 : 20);
}
    
      auto const dest_file = ::mkstemp(tmp_filename);
  if (dest_file < 0) {
    Logger::Error('dlopen_embedded_data: Unable to create temporary file: %s',
                  folly::errnoStr(errno).c_str());
    return nullptr;
  }
    
    
    {  pid_t m_shadowProcess;
  Mutex m_procMutex;
  int m_afdt_fd;
  std::map<FILE*, pid_t> m_popenMap;
};
    
    TEST(WriteChainAsyncTransportWrapperTest, TestSimpleIov) {
  TestWriteChainAsyncTransportWrapper transport;
  auto buf = folly::IOBuf::copyBuffer('foo');
    }
    
    Range<AsyncIO::Op**> AsyncIO::pollCompleted() {
  CHECK(ctx_);
  CHECK_NE(pollFd_, -1) << 'pollCompleted() only allowed on pollable object';
  uint64_t numEvents;
  // This sets the eventFd counter to 0, see
  // http://www.kernel.org/doc/man-pages/online/pages/man2/eventfd.2.html
  ssize_t rc;
  do {
    rc = ::read(pollFd_, &numEvents, 8);
  } while (rc == -1 && errno == EINTR);
  if (UNLIKELY(rc == -1 && errno == EAGAIN)) {
    return Range<Op**>(); // nothing completed
  }
  checkUnixError(rc, 'AsyncIO: read from event fd failed');
  DCHECK_EQ(rc, 8);
    }
    
      enum PollMode {
    NOT_POLLABLE,
    POLLABLE,
  };
    
    int main(int argc, char* argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_cp) {
    if (argc != 3) {
      usage(argv[0]);
    }
    copy(argv[1], argv[2]);
  } else {
    if (argc != 1) {
      usage(argv[0]);
    }
    list();
  }
  return 0;
}

    
    namespace {
    }
    
      std::shared_ptr<LogHandler> createHandler(const Options& options) override;
    
    
    {} // namespace folly

    
    using namespace v8;
    
    
    {  // Bitmap used to record the bytes that we read, use atomic to protect
  // against multiple threads updating the same bit
  std::atomic<uint32_t>* bitmap_;
  // (1 << bytes_per_bit_pow_) is bytes_per_bit. Use power of 2 to optimize
  // muliplication and division
  uint8_t bytes_per_bit_pow_;
  // Pointer to DB Statistics object, Since this bitmap may outlive the DB
  // this pointer maybe invalid, but the DB will update it to a valid pointer
  // by using SetStatistics() before calling Mark()
  std::atomic<Statistics*> statistics_;
  uint32_t rnd_;
};
    
    #pragma once
#include <memory>
#include <stdint.h>
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    #include <memory>
#include <set>
#include <string>
#include 'rocksdb/statistics.h'
#include 'monitoring/statistics.h'
    
    template <class Comparator>
struct InlineSkipList<Comparator>::Splice {
  // The invariant of a Splice is that prev_[i+1].key <= prev_[i].key <
  // next_[i].key <= next_[i+1].key for all i.  That means that if a
  // key is bracketed by prev_[i] and next_[i] then it is bracketed by
  // all higher levels.  It is _not_ required that prev_[i]->Next(i) ==
  // next_[i] (it probably did at some point in the past, but intervening
  // or concurrent operations might have inserted nodes in between).
  int height_ = 0;
  Node** prev_;
  Node** next_;
};
    
    void SyncPoint::EnableProcessing() {
  impl_->EnableProcessing();
}