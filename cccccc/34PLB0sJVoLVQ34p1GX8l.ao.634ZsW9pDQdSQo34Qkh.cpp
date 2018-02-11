
        
        
  // Checks whether chops were made at all the character bounding box
  // boundaries in word->truth_word. If not - blames the chopper for an
  // incorrect answer.
  void SetChopperBlame(const WERD_RES* word, bool debug);
  // Blames the classifier or the language model if, after running only the
  // chopper, best_choice is incorrect and no blame has been yet set.
  // Blames the classifier if best_choice is classifier's top choice and is a
  // dictionary word (i.e. language model could not have helped).
  // Otherwise, blames the language model (formerly permuter word adjustment).
  void BlameClassifierOrLangModel(
      const WERD_RES* word,
      const UNICHARSET& unicharset, bool valid_permuter, bool debug);
  // Sets up the correct_segmentation_* to mark the correct bounding boxes.
  void SetupCorrectSegmentation(const TWERD* word, bool debug);
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // Returns true if there were enough points at the last call to Fit or
// ConstrainedFit for the fitted points to be used on a badly fitted line.
bool DetLineFit::SufficientPointsForIndependentFit() const {
  return distances_.size() >= kMinPointsForErrorCount;
}
    
     public:
  BLOCK()
    : re_rotation_(1.0f, 0.0f),
      classify_rotation_(1.0f, 0.0f),
      skew_(1.0f, 0.0f) {
    right_to_left_ = false;
    hand_poly = NULL;
  }
  BLOCK(const char *name,  //< filename
        BOOL8 prop,        //< proportional
        inT16 kern,        //< kerning
        inT16 space,       //< spacing
        inT16 xmin,        //< bottom left
        inT16 ymin,
        inT16 xmax,        //< top right
        inT16 ymax);
    
        // U8_NEXT() advances sourceBytePos by 1-4 each time it's invoked.
    UChar32 curCodePoint;
    U8_NEXT(srcBuf, srcPosBytes, srcLenBytes, curCodePoint);
    
    #define PRINT_MSG(...)                          \
  switch (m_report) {                           \
    case Log:                                   \
      Logger::Info(__VA_ARGS__);                \
      break;                                    \
    case Stderr:                                \
      fprintf(stderr, __VA_ARGS__);             \
      break;                                    \
    case Trace:                                 \
      Trace::traceRelease(__VA_ARGS__);         \
      break;                                    \
    default: not_reached();                     \
  }
    
    #include <folly/Optional.h>
    
    struct Clusterizer {
  Clusterizer(Vunit& unit, const Scale& scale)
      : m_unit(unit)
      , m_scale(scale)
      , m_blocks(sortBlocks(unit)) {
    initClusters();
    clusterize();
    sortClusters();
    splitHotColdClusters();
    FTRACE(1, '{}', toString());
  }
    }
    
      PageletTask(const String& url, const Array& headers, const String& post_data,
              const String& remote_host,
              const std::set<std::string> &rfc1867UploadedFiles,
              const Array& files, int timeoutSeconds) {
    m_job = new PageletTransport(url, headers, remote_host, post_data,
                                 rfc1867UploadedFiles, files, timeoutSeconds);
    m_job->incRefCount();
  }
    
    struct Server;
struct ServerFactory;
using ServerPtr = std::unique_ptr<Server>;
using ServerFactoryPtr = std::shared_ptr<ServerFactory>;
    
    
    {  return getegid();
}
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #include <boost/asio/detail/config.hpp>
    
    #if !defined(BOOST_ASIO_WINDOWS) && !defined(__CYGWIN__)
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
        // Operation failed.
    if ((state & user_set_non_blocking)
        || (ec != boost::asio::error::would_block
          && ec != boost::asio::error::try_again))
      return 0;
    
      if (shutdown_)
  {
    post_immediate_completion(op, is_continuation);
    return;
  }
    
    
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
          case kNextFileNumber:
        if (GetVarint64(&input, &next_file_number_)) {
          has_next_file_number_ = true;
        } else {
          msg = 'next file number';
        }
        break;
    
    
    {    FILE* cpuinfo = fopen('/proc/cpuinfo', 'r');
    if (cpuinfo != NULL) {
      char line[1000];
      int num_cpus = 0;
      std::string cpu_type;
      std::string cache_size;
      while (fgets(line, sizeof(line), cpuinfo) != NULL) {
        const char* sep = strchr(line, ':');
        if (sep == NULL) {
          continue;
        }
        Slice key = TrimSpace(Slice(line, sep - 1 - line));
        Slice val = TrimSpace(Slice(sep + 1));
        if (key == 'model name') {
          ++num_cpus;
          cpu_type = val.ToString();
        } else if (key == 'cache size') {
          cache_size = val.ToString();
        }
      }
      fclose(cpuinfo);
      fprintf(stderr, 'CPU:            %d * %s\n', num_cpus, cpu_type.c_str());
      fprintf(stderr, 'CPUCache:       %s\n', cache_size.c_str());
    }
#endif
  }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    
    {  // These are no-ops, but we test they return success.
  ASSERT_OK(writable_file->Sync());
  ASSERT_OK(writable_file->Flush());
  ASSERT_OK(writable_file->Close());
  delete writable_file;
}
    
    void Mutex::Lock() { PthreadCall('lock', pthread_mutex_lock(&mu_)); }
    
      virtual bool Valid() const { return current_ < restarts_; }
  virtual Status status() const { return status_; }
  virtual Slice key() const {
    assert(Valid());
    return key_;
  }
  virtual Slice value() const {
    assert(Valid());
    return value_;
  }
    
    
    {  Iterator* iter_;
  bool valid_;
  Slice key_;
};
    
    void OutputImage::Downsample(const DownsampleConfig& cfg) {
  if (components_[1].IsAllZero() && components_[2].IsAllZero()) {
    // If the image is already grayscale, nothing to do.
    return;
  }
  if (cfg.use_silver_screen &&
      cfg.u_factor_x == 2 && cfg.u_factor_y == 2 &&
      cfg.v_factor_x == 2 && cfg.v_factor_y == 2) {
    std::vector<uint8_t> rgb = ToSRGB();
    std::vector<std::vector<float> > yuv = RGBToYUV420(rgb, width_, height_);
    SetDownsampledCoefficients(yuv[0], 1, 1, &components_[0]);
    SetDownsampledCoefficients(yuv[1], 2, 2, &components_[1]);
    SetDownsampledCoefficients(yuv[2], 2, 2, &components_[2]);
    return;
  }
  // Get the floating-point precision YUV array represented by the set of
  // DCT coefficients.
  std::vector<std::vector<float> > yuv(3, std::vector<float>(width_ * height_));
  for (int c = 0; c < 3; ++c) {
    components_[c].ToFloatPixels(&yuv[c][0], 1);
  }
    }
    
    void ComputeBlockIDCTDouble(double block[64]) {
  TransformBlock(block, IDCT1d);
}
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    namespace guetzli {
    }
    
    #include 'guetzli/jpeg_data.h'
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    namespace design_patterns {
    }
    
    ScopeJEnv::~ScopeJEnv() {
    if (NULL != env_) {
        env_->PopLocalFrame(NULL);
    }
}
    
    #include 'db/_wrapper.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
    
    namespace rocksdb {
    }
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    
    {    TEST_SYNC_POINT('CheckpointImpl::CreateCheckpoint:SavedLiveFiles1');
    TEST_SYNC_POINT('CheckpointImpl::CreateCheckpoint:SavedLiveFiles2');
    db_->FlushWAL(false /* sync */);
  }
  // if we have more than one column family, we need to also get WAL files
  if (s.ok()) {
    s = db_->GetSortedWalFiles(live_wal_files);
  }
  if (!s.ok()) {
    return s;
  }
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    
    {        ImGui::Render();
    }
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }