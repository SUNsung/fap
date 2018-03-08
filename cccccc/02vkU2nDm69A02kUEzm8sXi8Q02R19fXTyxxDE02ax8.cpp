
        
        Variant HHVM_FUNCTION(xhprof_network_disable) {
  return ServerStats::EndNetworkProfile();
}
    
    void Timer::Dump() {
  if (!Trace::moduleEnabledRelease(Trace::jittime)) return;
  Trace::traceRelease('%s', Show().c_str());
}
    
    
    {  return ret;
}
    
    /* this only exists to make compilers happy about types in the below macro */
inline constexpr uint32_t sizeClassParams2PackedArrayCapacity(
  size_t index,
  size_t lg_grp,
  size_t lg_delta,
  size_t ndelta
) {
  static_assert(sizeof(ArrayData) <= kSizeIndex2Size[0],
    'this math only works if ArrayData fits in the smallest size class');
  return index <= PackedArray::MaxSizeIndex
    ? (((size_t{1} << lg_grp) + (ndelta << lg_delta)) - sizeof(ArrayData))
      / sizeof(TypedValue)
    : 0;
}
    
    uint32_t numa_node_set;
uint32_t numa_num_nodes;
uint32_t numa_node_mask;
std::vector<bitmask*> node_to_cpu_mask;
bool use_numa = false;
bool threads_bind_local = false;
    
      // If we somehow reach this point and both gname and gid were
  // passed, then the gid values will override the gname values,
  // but it will otherwise function just fine.
  // The assert() clause above should prevent that, however.
  if ((gname.size() > 0) &&
      (getgrnam_r(gname.data(), &gr, grbuf.get(), grbuflen, &retgrptr) != 0 ||
      retgrptr == nullptr)) {
    return false;
  } else if ((gid >= 0) &&
      (getgrgid_r(gid, &gr, grbuf.get(), grbuflen, &retgrptr) != 0 ||
      retgrptr == nullptr)) {
    return false;
  }
    
      /// The size of the original groups to backup when restoring privileges.
  size_t group_size_{0};
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    #include 'osquery/core/process.h'
    
    #include <assert.h>
#include <boost/noncopyable.hpp>
#include <errno.h>
#include <glog/logging.h>
#include <atomic>
#include <functional>
#include <mutex>
#include <thread>
#include <unordered_set>
#include <vector>
    
      // if we happen to be using the tlsRoundRobin, then sequentially
  // assigning the thread identifiers is the unlikely best-case scenario.
  // We don't want to unfairly benefit or penalize.  Computing the exact
  // maximum likelihood of the probability distributions is annoying, so
  // I approximate as 2/5 of the ids that have no threads, 2/5 that have
  // 1, 2/15 that have 2, and 1/15 that have 3.  We accomplish this by
  // wrapping back to slot 0 when we hit 1/15 and 1/5.
    
    size_t qfind_first_byte_of_bitset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  std::bitset<256> s;
  for (auto needle : needles) {
    s[(uint8_t)needle] = true;
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s[(uint8_t)haystack[index]]) {
      return index;
    }
  }
  return std::string::npos;
}
    
    template <bool HAYSTACK_ALIGNED>
size_t scanHaystackBlock(
    const StringPieceLite haystack,
    const StringPieceLite needles,
    uint64_t idx)
    // Turn off ASAN because the 'arr2 = ...' assignment in the loop below reads
    // up to 15 bytes beyond end of the buffer in #needles#.  That is ok because
    // ptr2 is always 16-byte aligned, so the read can never span a page
    // boundary. Also, the extra data that may be read is never actually used.
    FOLLY_DISABLE_ADDRESS_SANITIZER;
    
    namespace {
folly::dynamic& insertAtKey(
    folly::dynamic* d, bool allow_non_string_keys, const folly::dynamic& key) {
  if (key.isString()) {
    return (*d)[key];
  // folly::dynamic allows non-null scalars for keys.
  } else if (key.isNumber() || key.isBool()) {
    return allow_non_string_keys ? (*d)[key] : (*d)[key.asString()];
  }
  // One cause might be oddness like p.optional(dynamic::array(...), ...);
  throw DynamicParserLogicError(
    'Unsupported key type ', key.typeName(), ' of ', detail::toPseudoJson(key)
  );
}
} // namespace
    
      /**
   * The key currently being parsed (integer if inside an array). Throws if
   * called outside of a parser callback.
   */
  inline const folly::dynamic& key() const { return stack_.key(); }
  /**
   * The value currently being parsed (initially, the input dynamic).
   * Throws if parsing nullptr, or parsing after releaseErrors().
   */
  inline const folly::dynamic& value() const { return stack_.value(); }
    
    // Guess the program name as basename(executable)
std::string guessProgramName() {
  try {
    return fs::executable_path().filename().string();
  } catch (const std::exception&) {
    return 'UNKNOWN';
  }
}
    
      static constexpr size_t bitOffset(size_t bit) {
    return bit % kBitsPerBlock;
  }
    
      virtual bool executeInternal() = 0;
    
    
    {  virtual void dropCache(int64_t len, int64_t offset) CXX11_OVERRIDE;
};
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    class AnnounceList {
public:
private:
  std::deque<std::shared_ptr<AnnounceTier>> tiers_;
  std::deque<std::shared_ptr<AnnounceTier>>::iterator currentTier_;
  std::deque<std::string>::iterator currentTracker_;
  bool currentTrackerInitialized_;
    }
    
      // Alrighty, search the fingerprint.
  const size_t nvals = CFArrayGetCount(identities);
  for (size_t i = 0; i < nvals; ++i) {
    SecIdentityRef id = (SecIdentityRef)CFArrayGetValueAtIndex(identities, i);
    if (!id) {
      A2_LOG_ERROR('Failed to get a value!');
      continue;
    }
    if (!checkIdentity(id, fp, ht)) {
      continue;
    }
    A2_LOG_INFO('Found cert with matching fingerprint');
    credentials_ = id;
    CFRetain(id);
    return true;
  }