
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    // Tell browser we have to reopen.
IPC_MESSAGE_CONTROL0(ShellViewMsg_Reopen)
    
    #include 'base/command_line.h'
#include 'base/logging.h'
#include 'base/message_loop/message_loop.h'
#include 'base/values.h'
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    void NwDesktopCaptureMonitor::OnSourceMoved(DesktopMediaList* list, int old_index, int new_index) {
    DesktopMediaList::Source src = list->GetSource(new_index);
    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceOrderChanged::Create(
      src.id.ToString(),
      new_index,
      old_index);
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceOrderChanged::kEventName,
      std::move(args));
  }
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenStopMonitorFunction);
  };
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    void HHVM_FUNCTION(xhprof_enable, int64_t flags/* = 0 */,
                                  const Array& args /* = null_array */) {
  if (!RuntimeOption::EnableHotProfiler) {
    raise_warning('The runtime option Stats.EnableHotProfiler must be on to '
                  'use xhprof.');
    return;
  }
    }
    
    int64_t Timer::measure() const {
  if (m_type == WallTime) {
    return GetCurrentTimeMicros();
  }
    }
    
    #include 'hphp/util/compatibility.h'
    
      /**
   * Get results of a task. This is blocking until task is finished or times
   * out. The status code is set to -1 in the event of a timeout.
   */
  static String TaskResult(const Resource& task,
                           Array &headers,
                           int &code,
                           int64_t timeout_ms);
    
    #ifdef HAVE_NUMA
    
    
    {
    {
    {}}}
    
    Base miBaseLocal(ISS& env, LocalId locBase, MOpMode mode) {
  auto const locName = env.ctx.func->locals[locBase].name;
  auto const isDefine = mode == MOpMode::Define;
  if (mode == MOpMode::None ||
      (mode == MOpMode::Warn && !locCouldBeUninit(env, locBase))) {
    nothrow(env);
  }
  // If we're changing the local to define it, we don't need to do an miThrow
  // yet---the promotions (to array or stdClass) on previously uninitialized
  // locals happen before raising warnings that could throw, so we can wait
  // until the first moveBase.
  return Base { isDefine ? locAsCell(env, locBase) : derefLoc(env, locBase),
                BaseLoc::Local,
                TBottom,
                locName,
                locBase };
}
    
    #define IMM_BLA(n)     ret += ' '; append_switch(data.targets);
#define IMM_SLA(n)     ret += ' '; append_sswitch(data.targets);
#define IMM_ILA(n)     ret += ' '; append_itertab(data.iterTab);
#define IMM_I32LA(n)   append_argv32(data.argv);
#define IMM_BLLA(n)    append_argvb(data.argv);
#define IMM_IVA(n)     folly::toAppend(' ', data.arg##n, &ret);
#define IMM_I64A(n)    folly::toAppend(' ', data.arg##n, &ret);
#define IMM_LA(n)      ret += ' ' + local_string(func, data.loc##n);
#define IMM_IA(n)      folly::toAppend(' iter:', data.iter##n, &ret);
#define IMM_CAR(n)     folly::toAppend(' rslot:', data.slot, &ret);
#define IMM_CAW(n)     folly::toAppend(' wslot:', data.slot, &ret);
#define IMM_DA(n)      folly::toAppend(' ', data.dbl##n, &ret);
#define IMM_SA(n)      folly::toAppend(' ', escaped_string(data.str##n), &ret);
#define IMM_RATA(n)    folly::toAppend(' ', show(data.rat), &ret);
#define IMM_AA(n)      ret += ' ' + array_string(data.arr##n);
#define IMM_BA(n)      folly::toAppend(' <blk:', data.target, '>', &ret);
#define IMM_OA_IMPL(n) folly::toAppend(' ', subopToName(data.subop##n), &ret);
#define IMM_OA(type)   IMM_OA_IMPL
#define IMM_VSA(n)     ret += ' '; append_vsa(data.keys);
#define IMM_KA(n)      ret += ' '; append_mkey(data.mkey);
#define IMM_LAR(n)     ret += ' '; append_lar(data.locrange);
    
      Array getHandlers();
  bool addHandler(const Variant& handler, bool prepend);
  void removeHandler(const Variant& handler);
  void removeAllHandlers();
  bool isRunning();
    
    // parse the heap to find valid objects and initialize metadata, then
// add edges for every known root pointer and every known obj->obj ptr.
HeapGraph makeHeapGraph(bool include_free) {
  HeapGraph g;
  PtrMap<const HeapObject*> blocks;
    }
    
    #endif // incl_HPHP_HTTP_CLIENT_H_

    
    /// Create a new non-modifiable buffer that represents the given POD array.
/**
 * @returns A const_buffers_1 value equivalent to:
 * @code const_buffers_1(
 *     data.data(),
 *     data.size() * sizeof(PodType)); @endcode
 */
template <typename PodType, std::size_t N>
inline const_buffers_1 buffer(const std::array<PodType, N>& data)
{
  return const_buffers_1(
      const_buffer(data.data(), data.size() * sizeof(PodType)));
}
    
    namespace boost {
namespace asio {
    }
    }
    
    namespace boost {
namespace asio {
    }
    }
    
    
    {} // namespace boost
    
        // Pop the key/value pair from the stack.
    ~context()
    {
      call_stack<Key, Value>::top_ = next_;
    }
    
    
    {
    {} // namespace posix_time
} // namespace boost
    
        // Make a copy of the handler so that the memory can be deallocated before
    // the upcall is made. Even if we're not about to make an upcall, a
    // sub-object of the handler may be the true owner of the memory associated
    // with the handler. Consequently, a local copy of the handler is required
    // to ensure that any owning sub-object remains valid until after we have
    // deallocated the memory here.
    detail::binder2<Handler, boost::system::error_code, std::size_t>
      handler(o->handler_, o->ec_, o->bytes_transferred_);
    p.h = boost::asio::detail::addressof(handler.handler_);
    p.reset();
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    #include <boost/asio/detail/push_options.hpp>
    
      char delim_;         // The delimiter is inserted between elements
    
    void JniCallback::releaseJniEnv(jboolean& attached) const {
  JniUtil::releaseJniEnv(m_jvm, attached);
}
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    #ifndef NDEBUG
namespace rocksdb {
    }
    
      // Returns if there is no entry inserted to the mem table.
  // REQUIRES: external synchronization to prevent simultaneous
  // operations on the same MemTable (unless this Memtable is immutable).
  bool IsEmpty() const { return first_seqno_ == 0; }
    
      // Same as ::Insert
  // Returns false if MemTableRepFactory::CanHandleDuplicatedKey() is true and
  // the <key, seq> already exists.
  virtual bool InsertKey(KeyHandle handle) {
    Insert(handle);
    return true;
  }
    
    bool SyncPoint::Data::PredecessorsAllCleared(const std::string& point) {
  for (const auto& pred : predecessors_[point]) {
    if (cleared_points_.count(pred) == 0) {
      return false;
    }
  }
  return true;
}
    
      // Mutex is move only with lock ownership transfer
  Mutex(const Mutex&) = delete;
  void operator=(const Mutex&) = delete;
    
        if (update_ctx || yield_credit.load(std::memory_order_relaxed) >= 0) {
      // we're updating the adaptation statistics, or spinning has >
      // 50% chance of being shorter than max_yield_usec_ and causing no
      // involuntary context switches
      auto spin_begin = std::chrono::steady_clock::now();
    }
    
    #include 'rocksdb/status.h'