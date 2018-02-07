
        
        
    {  // Iterate through the remaining bytes.
  int32_t dstPosBytes = srcPosBytes; // already copied srcPosBytes
  for (/* already init'd */; srcPosBytes < srcLenBytes; /* see U8_NEXT */) {
    UChar32 curCodePoint;
    // This is lame, but gcc doesn't optimize U8_NEXT very well
    if (srcBuf[srcPosBytes] != 0 && !(srcBuf[srcPosBytes] & 0x80)) {
      curCodePoint = srcBuf[srcPosBytes++]; // U8_NEXT would increment
    } else {
      U8_NEXT(srcBuf, srcPosBytes, srcLenBytes, curCodePoint);
    }
    if (curCodePoint <= 0) {
      // Invalid UTF-8 sequence.
      // N.B. We consider a null byte an invalid sequence.
      if (!RuntimeOption::Utf8izeReplace) {
        continue; // Omit invalid sequence
      }
      curCodePoint = SUBSTITUTION_CHARACTER; // Replace invalid sequences
    }
    // We know that resultBuffer > total possible length.
    U8_APPEND_UNSAFE(dstBuf, dstPosBytes, curCodePoint);
  }
  assert(dstPosBytes <= dstMaxLenBytes);
  input.assignIfRef(dstStr.shrink(dstPosBytes));
  return true;
}
    
    int64_t getWallClockMicros() {
  return RuntimeOption::EvalJitTimer ? HPHP::Timer::GetCurrentTimeMicros() :
         -1;
}
    
    private:
  std::atomic<int> m_refCount;
  int m_timeoutSeconds;
    
        HHVM_FE(gmp_abs);
    HHVM_FE(gmp_add);
    HHVM_FE(gmp_and);
    HHVM_FE(gmp_clrbit);
    HHVM_FE(gmp_cmp);
    HHVM_FE(gmp_com);
    HHVM_FE(gmp_div_q);
    HHVM_FALIAS(gmp_div, gmp_div_q);
    HHVM_FE(gmp_div_qr);
    HHVM_FE(gmp_div_r);
    HHVM_FE(gmp_divexact);
    HHVM_FE(gmp_fact);
    HHVM_FE(gmp_gcd);
    HHVM_FE(gmp_gcdext);
    HHVM_FE(gmp_hamdist);
    HHVM_FE(gmp_init);
    HHVM_FE(gmp_intval);
    HHVM_FE(gmp_invert);
    HHVM_FE(gmp_jacobi);
    HHVM_FE(gmp_legendre);
    HHVM_FE(gmp_mod);
    HHVM_FE(gmp_mul);
    HHVM_FE(gmp_neg);
    HHVM_FE(gmp_nextprime);
    HHVM_FE(gmp_or);
    HHVM_FE(gmp_perfect_square);
    HHVM_FE(gmp_popcount);
    HHVM_FE(gmp_pow);
    HHVM_FE(gmp_powm);
    HHVM_FE(gmp_prob_prime);
    HHVM_FE(gmp_random);
    HHVM_FE(gmp_root);
    HHVM_FE(gmp_rootrem);
    HHVM_FE(gmp_scan0);
    HHVM_FE(gmp_scan1);
    HHVM_FE(gmp_setbit);
    HHVM_FE(gmp_sign);
    HHVM_FE(gmp_sqrt);
    HHVM_FE(gmp_sqrtrem);
    HHVM_FE(gmp_strval);
    HHVM_FE(gmp_sub);
    HHVM_FE(gmp_testbit);
    HHVM_FE(gmp_xor);
    
    #include 'hphp/runtime/vm/jit/types.h'
#include 'hphp/runtime/vm/jit/containers.h'
    
    std::string PageletTransport::getHeader(const char *name) {
  assert(name && *name);
  HeaderMap::const_iterator iter = m_requestHeaders.find(name);
  if (iter != m_requestHeaders.end()) {
    return iter->second[0];
  }
  return '';
}
    
    void ThriftBuffer::read(Variant &data) {
  String sdata;
  read(sdata);
  data = unserialize_with_no_notice(sdata);
}
    
    // Functions defined in this file are meant to extend the
// boost::filesystem library; functions will be named according to boost's
// naming conventions instead of ours.  For convenience, import the
// boost::filesystem namespace into folly::fs.
using namespace ::boost::filesystem;
    
    
    {        // Store mount point
        fs::path path(parts[1].begin(), parts[1].end());
        struct stat st;
        const int ret = stat(path.string().c_str(), &st);
        if (ret == -1 && errno == ENOENT) {
          return;
        }
        checkUnixError(ret, 'stat hugepage mountpoint failed');
        pos->mountPoint = fs::canonical(path);
        pos->device = st.st_dev;
      };
    
    namespace folly {
    }
    
    #include <folly/Optional.h>
#include <folly/Range.h>
#include <memory>
    
    void LogConfig::update(const LogConfig& other) {
  // Update handlerConfigs_ with all of the entries from the other LogConfig.
  // Any entries already present in our handlerConfigs_ are replaced wholesale.
  for (const auto& entry : other.handlerConfigs_) {
    if (entry.second.type.hasValue()) {
      // This is a complete LogHandlerConfig that should be inserted
      // or completely replace an existing handler config with this name.
      auto result = handlerConfigs_.insert(entry);
      if (!result.second) {
        result.first->second = entry.second;
      }
    } else {
      // This config is updating an existing LogHandlerConfig rather than
      // completely replacing it.
      auto iter = handlerConfigs_.find(entry.first);
      if (iter == handlerConfigs_.end()) {
        throw std::invalid_argument(to<std::string>(
            'cannot update configuration for unknown log handler \'',
            entry.first,
            '\''));
      }
      iter->second.update(entry.second);
    }
  }
    }
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
      // Specify the file access pattern once a compaction is started.
  // It will be applied to all input files of a compaction.
  // Default: NORMAL
  enum AccessHint {
      NONE,
      NORMAL,
      SEQUENTIAL,
      WILLNEED
  };
  AccessHint access_hint_on_compaction_start = NORMAL;
    
      virtual bool IsValuePinned() const override { return true; }
    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
    Value Node::getMinHeight(void) const
{
    return Value::fromYGValue(YGNodeStyleGetMinHeight(m_node));
}
    
    #pragma once
    
    struct Size
{
    double width;
    double height;
    }
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetPadding(root, YGEdgeLeft));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetPadding(root, YGEdgeRight));
    
      const YGNodeRef root = YGNodeNewWithConfig(config);
  YGNodeStyleSetBorder(root, YGEdgeLeft, 10);
  YGNodeStyleSetBorder(root, YGEdgeTop, 10);
  YGNodeStyleSetBorder(root, YGEdgeRight, 10);
  YGNodeStyleSetBorder(root, YGEdgeBottom, 10);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0));
    
    #include <cstdarg>
#include <stdio.h>
    
    // Creates a strong reference from a raw pointer, assuming that it points to a
// freshly-created object. See the documentation for RefPtr for usage.
template <typename T>
static inline RefPtr<T> adoptRef(T* ptr) {
  return RefPtr<T>::adoptRef(ptr);
}
    
    #include <string>
    
    
    {} // namespace aria2
    
    #endif // D_ADAPTIVE_FILE_ALLOCATION_ITERATOR_H

    
    void AnnounceList::shuffle()
{
  for (const auto& tier : tiers_) {
    auto& urls = tier->urls;
    std::shuffle(std::begin(urls), std::end(urls),
                 *SimpleRandomizer::getInstance());
  }
}
    
    
    {} // namespace aria2

    
    namespace aria2 {
    }