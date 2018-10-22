
        
        class AtomContentClient : public brightray::ContentClient {
 public:
  AtomContentClient();
  ~AtomContentClient() override;
    }
    
     private:
  ~UvTaskRunner() override;
  static void OnTimeout(uv_timer_t* timer);
  static void OnClose(uv_handle_t* handle);
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
      // Override download::DownloadItem::Observer methods
  void OnDownloadUpdated(download::DownloadItem* download) override;
  void OnDownloadDestroyed(download::DownloadItem* download) override;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_

    
    class Net : public mate::EventEmitter<Net> {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    namespace api {
    }
    
    namespace api {
    }
    
    class Tray : public mate::TrackableObject<Tray>, public TrayIconObserver {
 public:
  static mate::WrappableBase* New(mate::Handle<NativeImage> image,
                                  mate::Arguments* args);
    }
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n) {
  int max_offset = n - 2;
  int offset = 0;
  // Accumulate a set of 2 sums in sum, by loading pairs of 2 values from u and
  // v, and multiplying them together in parallel.
  __m128d sum = _mm_setzero_pd();
  if (offset <= max_offset) {
    offset = 2;
    // Aligned load is reputedly faster but requires 16 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 15) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 15) == 0) {
      // Use aligned load.
      sum = _mm_load_pd(u);
      __m128d floats2 = _mm_load_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_load_pd(u + offset);
        floats2 = _mm_load_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    } else {
      // Use unaligned load.
      sum = _mm_loadu_pd(u);
      __m128d floats2 = _mm_loadu_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_loadu_pd(u + offset);
        floats2 = _mm_loadu_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    }
  }
  // Add the 2 sums in sum horizontally.
  sum = _mm_hadd_pd(sum, sum);
  // Extract the low result.
  double result = _mm_cvtsd_f64(sum);
  // Add on any left-over products.
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
      // Count the number of values in sorted_vec that is close to val, used to
  // check if a partition is aligned with text partitions.
  int CountAlignment(
      const GenericVector<int>& sorted_vec, const int val) const;
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
          // Wait threads to complete
      while (!shared.AllDone()) {
        shared.GetCondVar()->Wait();
      }
    
      // REQUIRES: DB mutex held
  // Build ColumnFamiliesOptions with immutable options and latest mutable
  // options.
  ColumnFamilyOptions GetLatestCFOptions() const;
    
    class DBEncryptionTest : public DBTestBase {
 public:
  DBEncryptionTest() : DBTestBase('/db_encryption_test') {}
};
    
    
    {  // Sleep just until `num_bytes` is allowed.
  uint64_t sleep_amount =
      static_cast<uint64_t>(num_bytes /
                            static_cast<long double>(delayed_write_rate_) *
                            kMicrosPerSecond) +
      sleep_debt;
  last_refill_time_ = time_now + sleep_amount;
  return sleep_amount;
}
    
    #include <atomic>
#include <memory>
#include 'rocksdb/rate_limiter.h'
    
    // Decrypt one or more (partial) blocks of data at the file offset.
// Length of data is given in dataSize.
Status BlockAccessCipherStream::Decrypt(uint64_t fileOffset, char *data, size_t dataSize) {
  // Calculate block index
  auto blockSize = BlockSize();
  uint64_t blockIndex = fileOffset / blockSize;
  size_t blockOffset = fileOffset % blockSize;
  unique_ptr<char[]> blockBuffer;
    }
    
      virtual Status GetFileModificationTime(const std::string& fname,
                                         uint64_t* time) override;
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    int main() {
  DB* db;
  Options options;
  // Optimize RocksDB. This is the easiest way to get RocksDB to perform well
  options.IncreaseParallelism();
  options.OptimizeLevelStyleCompaction();
  // create the DB if it's not already present
  options.create_if_missing = true;
    }
    
    void DHTReplaceNodeTask::onTimeout(const std::shared_ptr<DHTNode>& node)
{
  ++numRetry_;
  if (numRetry_ >= MAX_RETRY) {
    A2_LOG_INFO(fmt('ReplaceNode: Ping failed %d times. Replace %s with %s.',
                    numRetry_, node->toString().c_str(),
                    newNode_->toString().c_str()));
    node->markBad();
    bucket_->addNode(newNode_);
    setFinished(true);
  }
  else {
    A2_LOG_INFO(fmt('ReplaceNode: Ping reply timeout from %s. Try once more.',
                    node->toString().c_str()));
    sendMessage();
  }
}
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
      char zero[18];
  memset(zero, 0, sizeof(zero));
    
      ~DHTSetup();
    
    void DHTTaskFactoryImpl::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    
    {  static const std::string UNKNOWN;
};
    
    TEST(Expected, CoroutineSuccess) {
  auto r0 = []() -> Expected<int, Err> {
    auto x = co_await f1();
    EXPECT_EQ(7, x);
    auto y = co_await f2(x);
    EXPECT_EQ(2.0 * 7, y);
    auto z = co_await f3(x, y);
    EXPECT_EQ(int(2.0 * 7 + 7), *z);
    co_return* z;
  }();
  EXPECT_TRUE(r0.hasValue());
  EXPECT_EQ(21, *r0);
}
    
    /// Returns a keep-alive token which guarantees that Executor will keep
/// processing tasks until the token is released (if supported by Executor).
/// KeepAlive always contains a valid pointer to an Executor.
template <typename ExecutorT>
Executor::KeepAlive<ExecutorT> getKeepAliveToken(ExecutorT* executor) {
  static_assert(
      std::is_base_of<Executor, ExecutorT>::value,
      'getKeepAliveToken only works for folly::Executor implementations.');
  return Executor::getKeepAliveToken(executor);
}
    
    namespace detail {
    }
    
    using UriTuple = std::tuple<
    const std::string&,
    const std::string&,
    const std::string&,
    const std::string&,
    uint16_t,
    const std::string&,
    const std::string&,
    const std::string&>;
    
    #include <folly/DefaultKeepAliveExecutor.h>
    
      // Test converions to floating point durations
  ts.tv_sec = 1;
  ts.tv_nsec = 500000000;
  EXPECT_EQ(1.5, to<duration<double>>(ts).count());
  ts.tv_sec = -1;
  ts.tv_nsec = 500000000;
  EXPECT_EQ(-0.5, to<duration<double>>(ts).count());
  ts.tv_sec = -1;
  ts.tv_nsec = -500000000;
  EXPECT_EQ(-1.5, to<duration<double>>(ts).count());
  ts.tv_sec = 1;
  ts.tv_nsec = 500000000;
  auto doubleNanos = to<duration<double, std::nano>>(ts);
  EXPECT_EQ(1500000000, doubleNanos.count());
  ts.tv_sec = 90;
  ts.tv_nsec = 0;
  auto doubleMinutes = to<duration<double, std::ratio<60>>>(ts);
  EXPECT_EQ(1.5, doubleMinutes.count());
    
    /**
 * Get a codec with the given options and compression level.
 *
 * If the windowSize is 15 and the format is Format::ZLIB or Format::GZIP, then
 * the type of the codec will be CodecType::ZLIB or CodecType::GZIP
 * respectively. Otherwise, the type will be CodecType::USER_DEFINED.
 *
 * Automatic uncompression is not supported with USER_DEFINED codecs.
 *
 * Levels supported: 0 = no compression, 1 = fast, ..., 9 = best; default = 6
 */
std::unique_ptr<Codec> getCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
std::unique_ptr<StreamCodec> getStreamCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
    
     private:
  // Matches packed_sync_pointer.  Must be > max number of local
  // counts.  This is the max number of threads that can access this
  // atomic_shared_ptr at once before we start blocking.
  static constexpr unsigned EXTERNAL_OFFSET{0x2000};
  // Bit signifying aliased constructor
  static constexpr unsigned ALIASED_PTR{0x4000};
    
      template <class, size_t>
  friend class CoreCachedWeakPtr;