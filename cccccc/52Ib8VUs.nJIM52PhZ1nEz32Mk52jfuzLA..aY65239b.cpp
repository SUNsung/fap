
        
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
    
    const StaticString
  s_sec('sec'),
  s_usec('usec'),
  s_minuteswest('minuteswest'),
  s_dsttime('dsttime');
    
      bool isPipelineEmpty();
    
    public const char *
magic_getpath(const char *magicfile, int action)
{
  if (magicfile != NULL)
    return magicfile;
    }
    
      auto checkBounds = [&] {
    if (!bounded) return;
    index = gen(env, SubInt, index, cns(env, base));
    auto const ok = gen(env, CheckRange, index, cns(env, nTargets));
    gen(env, JmpZero, getBlock(env, defaultOff), ok);
    bounded = false;
  };
  auto const offsets = iv.range32();
    
    struct IRGS;
    
      void sync(Address begin = nullptr,  Address end = nullptr) {
    if (!begin) begin = m_base;
    if (!end) end = m_frontier;
    syncDirect(toDestAddress(begin), toDestAddress(end));
  }
    
      // Did you forget to specify ControlFlowInfo?
  assertx(!instrIsControlFlow(extra->opcode));
  auto const helper = interpOneEntryPoints[size_t(extra->opcode)];
  auto const args = argGroup(env, inst)
    .ssa(1)
    .addr(sp, cellsToBytes(extra->spOffset.offset))
    .imm(extra->bcOff);
    
    // When a and b are equivalent objects, we return a to
// make sorting stable.
template <typename T>
constexpr T constexpr_min(T a) {
  return a;
}
template <typename T, typename... Ts>
constexpr T constexpr_min(T a, T b, Ts... ts) {
  return b < a ? constexpr_min(b, ts...) : constexpr_min(a, ts...);
}
    
      // An IOBuf around a buffer it doesn't own
  uint8_t localbuf[1234];
  fillBuf(localbuf, 1234, gen);
  unique_ptr<IOBuf> iob3(IOBuf::wrapBuffer(localbuf, sizeof(localbuf)));
    
    #include <folly/portability/GTest.h>
    
    TEST(MemoryIdler, futexWaitAwokenEarly) {
  StrictMock<Futex<MockAtom>> fut;
  auto clock = MockClock::setup();
  auto begin = MockClock::time_point(std::chrono::seconds(100));
  auto idleTimeout = MemoryIdler::defaultIdleTimeout.load();
    }
    
    
    {
    {size_t qfind_first_byte_of_byteset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  SparseByteSet s;
  for (auto needle : needles) {
    s.add(uint8_t(needle));
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s.contains(uint8_t(haystack[index]))) {
      return index;
    }
  }
  return std::string::npos;
}
} // namespace detail
} // namespace folly

    
    
    {    // Publish the map to other threads.
    numMapsAllocated_.fetch_add(1, std::memory_order_release);
    DCHECK_EQ(nextMapIdx + 1,
      numMapsAllocated_.load(std::memory_order_relaxed));
  } else {
    // If we lost the race, we'll have to wait for the next map to get
    // allocated before doing any insertion here.
    detail::atomic_hash_spin_wait([&] {
      return nextMapIdx >= numMapsAllocated_.load(std::memory_order_acquire);
    });
  }