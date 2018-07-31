
        
        Value& ValueIteratorBase::deref() const {
  return current_->second;
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    
    
    // Author: kenton@google.com (Kenton Varda)
    
    // Author: liujisi@google.com (Pherl Liu)
    
      // All static variables have to be declared at the top-level of the file
  // so that we can control initialization order, which is important for
  // DescriptorProto bootstrapping to work.
  virtual void GenerateStaticVariables(
      io::Printer* printer, int* bytecode_estimate) = 0;
    
    #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28>
internal::ValueArray28<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27,
    T28> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26, T27 v27, T28 v28) {
  return internal::ValueArray28<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13,
      v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27,
      v28);
}
    
    # define REGISTER_TYPED_TEST_CASE_P(CaseName, ...) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  typedef ::testing::internal::Templates<__VA_ARGS__>::type gtest_AllTests_; \
  } \
  static const char* const GTEST_REGISTERED_TEST_NAMES_(CaseName) = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).VerifyRegisteredTestNames(\
          __FILE__, __LINE__, #__VA_ARGS__)
    
      // Destructor of TestCase.
  virtual ~TestCase();
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT5.
// Don't use this in your code.
#define GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, #v5, v1, v2, v3, v4, v5), \
                on_failure)
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
     private:
  void CalculatePrimesUpTo(int max) {
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;
    }
    
    
    {  // n has no integer factor in the range (1, n), and thus is prime.
  return true;
}

    
      /// Determine the amount of data that may be read without blocking.
  std::size_t in_avail()
  {
    return storage_.size();
  }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template<class T, class TimeSystem>
class base_time;
    
    
    {private:
  Handler handler_;
};
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      // Destructor.
  ~gcc_arm_fenced_block()
  {
    barrier();
  }
    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
    namespace osquery {
    }
    
    
    {  if (handle) {
    ::CloseHandle(handle);
  }
}
#else
TEST_F(ProcessTests, test_constructorPosix) {
  auto p = PlatformProcess(getpid());
  EXPECT_TRUE(p.isValid());
  EXPECT_EQ(p.nativeHandle(), getpid());
}
#endif
    
      // Iterate over each event type in the queue and appropriately fire each.
  int max_before_sync = kKernelEventsSyncMax;
  while (max_before_sync > 0) {
    WriteLock lock(mutex_);
    // The kernel publisher may have been torn down.
    if (queue_ == nullptr) {
      break;
    }
    // A NULL event occurred, stop dequeuing.
    if (!dequeueEvents()) {
      break;
    }
    // Append the number of dequeue events to the synchronization counter.
    max_before_sync -= kKernelEventsIterate;
  }
    
      void stop() override;
    
    
    {  // Too many fields
  bad_line = R'('2016-03-22T21:17:01.701882+00:00','','6','','','','')';
  ec = pub.createEventContext();
  status = pub.populateEventContext(bad_line, ec);
  ASSERT_FALSE(status.ok());
  ASSERT_NE(std::string::npos, status.getMessage().find('more'));
}
    
    #include <benchmark/benchmark.h>
    
    namespace osquery {
    }
    
    namespace osquery {
    }
    
    void OutputImageComponent::GetCoeffBlock(int block_x, int block_y,
                                         coeff_t block[kDCTBlockSize]) const {
  assert(block_x < width_in_blocks_);
  assert(block_y < height_in_blocks_);
  int offset = (block_y * width_in_blocks_ + block_x) * kDCTBlockSize;
  memcpy(block, &coeffs_[offset], kDCTBlockSize * sizeof(coeffs_[0]));
}
    
      // Map of areas where the image is not too bright to apply the effect.
  std::vector<bool> darkmap(image[0].size(), false);
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      size_t index = y * w + x;
      float y = yuv[0][index];
      float u = yuv[1][index];
      float v = yuv[2][index];
    }
    }
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
        std::sort(tree, tree + n, SortHuffmanTree);
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    // Functions for writing a JPEGData object into a jpeg byte stream.
    
    namespace guetzli {
    }