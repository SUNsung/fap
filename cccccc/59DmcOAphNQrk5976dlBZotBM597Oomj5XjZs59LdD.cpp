
    {    return;
  }
    
        // |-- bitsRemaining --|-------- ChunkSizeInBits --------|
    // |     prevChunk     |             nextChunk           |
    // |------ numBitsWanted ------|----- bitsRemaining' ----|
    //                             |        prevChunk'       |
    
    void CacheImpl::setAndRetain(void *Key, void *Value, size_t Cost) {
  cache_set_and_retain(static_cast<cache_t*>(Impl), Key, Value, Cost);
}
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
      private:
    /// Is this a diagnostic that doesn't do the user any good to show if it
    /// is located in one of Swift's synthetic buffers? If so, returns true to
    /// suppress it.
    static bool shouldSuppressDiagInSwiftBuffers(clang::DiagOrStoredDiag info) {
      if (info.isNull())
        return false;
    }
    
    BENCHMARK_RELATIVE(intAppend_to) {
  fbstring out;
  for (int i = -1000; i < 1000; i++) {
    toAppend(i, &out);
  }
}
    
    TEST(StaticTracepoint, TestEmpty) {
  emptyTestFunc();
    }
    
    #pragma once
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
    
    {  static constexpr size_t stateSize = StateSizeT<RNG>::value;
  std::array<uint32_t, stateSize> seedData;
};
    
    using UriTuple = std::tuple<
    const std::string&,
    const std::string&,
    const std::string&,
    const std::string&,
    uint16_t,
    const std::string&,
    const std::string&,
    const std::string&>;
    
    /**
 * Interface for Zlib-specific codec initialization.
 */
namespace folly {
namespace io {
namespace zlib {
    }
    }
    }