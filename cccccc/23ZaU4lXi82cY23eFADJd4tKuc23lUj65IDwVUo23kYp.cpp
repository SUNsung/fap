
        
        bool swift::isPlatformActive(PlatformKind Platform, LangOptions &LangOpts) {
  if (Platform == PlatformKind::none)
    return true;
  
  if (Platform == PlatformKind::OSXApplicationExtension ||
      Platform == PlatformKind::iOSApplicationExtension)
    if (!LangOpts.EnableAppExtensionRestrictions)
      return false;
  
  // FIXME: This is an awful way to get the current OS.
  switch (Platform) {
    case PlatformKind::OSX:
    case PlatformKind::OSXApplicationExtension:
      return LangOpts.Target.isMacOSX();
    case PlatformKind::iOS:
    case PlatformKind::iOSApplicationExtension:
      return LangOpts.Target.isiOS() && !LangOpts.Target.isTvOS();
    case PlatformKind::tvOS:
    case PlatformKind::tvOSApplicationExtension:
      return LangOpts.Target.isTvOS();
    case PlatformKind::watchOS:
    case PlatformKind::watchOSApplicationExtension:
      return LangOpts.Target.isWatchOS();
    case PlatformKind::none:
      llvm_unreachable('handled above');
  }
  llvm_unreachable('bad PlatformKind');
}
    
    bool swift::canBeArgumentLabel(StringRef identifier) {
  return llvm::StringSwitch<bool>(identifier)
    .Case('var', false)
    .Case('let', false)
    .Case('inout', false)
    .Case('$', false)
    .Default(true);
}
    
    #endif // SWIFT_IMPORTER_CFTYPEINFO_H

    
    static SourceLoc findEndOfLine(SourceManager &SM, SourceLoc loc,
                               unsigned bufferID) {
  CharSourceRange entireBuffer = SM.getRangeForBuffer(bufferID);
  CharSourceRange rangeFromLoc{SM, loc, entireBuffer.getEnd()};
  StringRef textFromLoc = SM.extractText(rangeFromLoc);
  size_t newlineOffset = textFromLoc.find_first_of({'\r\n\0', 3});
  if (newlineOffset == StringRef::npos)
    return entireBuffer.getEnd();
  return loc.getAdvancedLoc(newlineOffset);
}
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    #include <stdexcept>
    
        ExecutorT& operator*() const {
      return *get();
    }
    
    #ifndef FOLLY_RANDOM_H_
#error This file may only be included from folly/Random.h
#endif
    
    /*
 * Decode a single unicode code point from UTF-8 byte sequence.
 */
char32_t utf8ToCodePoint(
    const unsigned char*& p,
    const unsigned char* const e,
    bool skipOnError);
    
    #include <folly/DefaultKeepAliveExecutor.h>
    
        // Test the boundaries of conversion to int32_t seconds
    using sec_i32 = std::chrono::duration<int32_t>;
    ts.tv_sec = 2147483647;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<int32_t>::max(), to<sec_i32>(ts).count());
    ts.tv_nsec = 1000000000;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483648;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<int32_t>::min(), to<sec_i32>(ts).count());
    ts.tv_sec = -2147483649;
    ts.tv_nsec = 999999999;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483649;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483650;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
    #pragma once
    
      // Check pointer equality considering wrapped aliased pointers.
  bool owners_eq(PackedPtr& p1, BasePtr* p2) {
    bool aliased1 = p1.extra() & ALIASED_PTR;
    if (aliased1) {
      auto p1a = CountedDetail::template get_shared_ptr_from_counted_base<T>(
          p1.get(), false);
      return CountedDetail::get_counted_base(p1a) == p2;
    }
    return p1.get() == p2;
  }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
  }