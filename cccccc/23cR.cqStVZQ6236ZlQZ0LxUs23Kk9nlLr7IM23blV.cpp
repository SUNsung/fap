
        
          env.now_micros_ += 3000724u;  // sleep credit 100
  // 6000 used, 4480 left.
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 6000u));
    
    class PosixWritableFile : public WritableFile {
 protected:
  const std::string filename_;
  const bool use_direct_io_;
  int fd_;
  uint64_t filesize_;
  size_t logical_sector_size_;
#ifdef ROCKSDB_FALLOCATE_PRESENT
  bool allow_fallocate_;
  bool fallocate_with_keep_size_;
#endif
    }
    
      std::string ToString(bool exclude_zero_counters = false) const;
    
    /**
 * This file is supposed to be included from within
 * FBVectorBenchmark. Do not use otherwise.
 */
    
      template <typename ExecutorT>
  static KeepAlive<ExecutorT> makeKeepAlive(ExecutorT* executor) {
    static_assert(
        std::is_base_of<Executor, ExecutorT>::value,
        'makeKeepAlive only works for folly::Executor implementations.');
    return KeepAlive<ExecutorT>{executor, false};
  }
    
    template <>
struct hash<folly::Uri> {
  std::size_t operator()(const folly::Uri& k) const {
    return std::hash<folly::uri_detail::UriTuple>{}(
        folly::uri_detail::as_tuple(k));
  }
};
    
    namespace folly {
    }
    
    
    {  // Test with some unusual durations where neither the numerator nor
  // denominator are 1.
  using five_sevenths = std::chrono::duration<int64_t, std::ratio<5, 7>>;
  ts = to<struct timespec>(five_sevenths(7));
  EXPECT_EQ(5, ts.tv_sec);
  EXPECT_EQ(0, ts.tv_nsec);
  ts = to<struct timespec>(five_sevenths(19));
  EXPECT_EQ(13, ts.tv_sec);
  EXPECT_EQ(571428571, ts.tv_nsec);
  using seven_fifths = std::chrono::duration<int64_t, std::ratio<7, 5>>;
  ts = to<struct timespec>(seven_fifths(5));
  EXPECT_EQ(7, ts.tv_sec);
  EXPECT_EQ(0, ts.tv_nsec);
}
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    
    { private:
  std::array<std::weak_ptr<T>, kNumSlots> slots_;
};
    
    using namespace std;
using namespace folly;
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
        std::sort(tree, tree + n, SortHuffmanTree);
    
    bool SetDepth(int p, HuffmanTree *pool, uint8_t *depth, int max_depth);
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    // Saves the APP marker segment as a string to *jpg.
bool ProcessAPP(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  // Save the marker type together with the app data.
  std::string app_str(reinterpret_cast<const char*>(
      &data[*pos - 3]), marker_len + 1);
  *pos += marker_len - 2;
  jpg->app_data.push_back(app_str);
  return true;
}
    
    #include <string>