
        
        #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
      std::deque<std::string> m_pipeline; // the intermediate pagelet results
  std::set<std::string> m_rfc1867UploadedFiles;
  std::string m_files; // serialized to use as $_FILES
    
    /*
 * Order blocks for lowering to machine code.  May use different layout
 * algorithms depending on the TransKind of `unit'.
 *
 * The output is guaranteed to be partitioned by area relative to `text'.  This
 * is almost the same as partitioning by AreaIndex, except we may interleave,
 * e.g., Main and Cold blocks in the same partition if their actual code areas
 * in `text' are the same.
 */
jit::vector<Vlabel> layoutBlocks(Vunit& unit, const Vtext& text);
    
    void ThriftBuffer::read(std::string &data) {
  String sdata;
  read(sdata);
  data = std::string(sdata.data(), sdata.size());
}
    
      if (file_reset(ms) == -1)
    goto done;
    
    struct Block;
struct SSATmp;
    
      void zero() {
    memset(m_destBase, 0, m_frontier - m_base);
    clear();
  }
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
        std::sort(tree, tree + n, SortHuffmanTree);
    
    #include 'guetzli/jpeg_data.h'
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    #ifndef GUETZLI_JPEG_DATA_READER_H_
#define GUETZLI_JPEG_DATA_READER_H_
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);
    
    
    {}  // namespace
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  comm_frequency_limit.cc
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    
    
    
/**
 * created on : 2012-07-16
 * author    : yanguoyue
 */
    
      // Offset at which to start looking for the first record to return
  uint64_t const initial_offset_;
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      virtual size_t GetSimCapacity() const override {
    return key_only_cache_->GetCapacity();
  }
  virtual size_t GetSimUsage() const override {
    return key_only_cache_->GetUsage();
  }
  virtual void SetSimCapacity(size_t capacity) override {
    key_only_cache_->SetCapacity(capacity);
  }
    
    class MergingIterator : public InternalIterator {
 public:
  MergingIterator(const InternalKeyComparator* comparator,
                  InternalIterator** children, int n, bool is_arena_mode,
                  bool prefix_seek_mode)
      : is_arena_mode_(is_arena_mode),
        comparator_(comparator),
        current_(nullptr),
        direction_(kForward),
        minHeap_(comparator_),
        prefix_seek_mode_(prefix_seek_mode),
        pinned_iters_mgr_(nullptr) {
    children_.resize(n);
    for (int i = 0; i < n; i++) {
      children_[i].Set(children[i]);
    }
    for (auto& child : children_) {
      if (child.Valid()) {
        minHeap_.push(&child);
      }
    }
    current_ = CurrentForward();
  }
    }
    
      const char* keyUtf = key->c_str();
  jstring jsKey = env->NewStringUTF(keyUtf);
  if(jsKey == nullptr) {
    // unable to construct string
    if(env->ExceptionCheck()) {
      env->ExceptionDescribe(); // print out exception to stderr
    }
    releaseJniEnv(attached_thread);
    return;
  } else if(env->ExceptionCheck()) {
    // exception thrown: OutOfMemoryError
    env->ExceptionDescribe(); // print out exception to stderr
    env->DeleteLocalRef(jsKey);
    releaseJniEnv(attached_thread);
    return;
  }
    
    namespace aria2 {
    }
    
    void AbstractBtMessage::setBtMessageValidator(
    std::unique_ptr<BtMessageValidator> validator)
{
  validator_ = std::move(validator);
}
    
      virtual void truncate(int64_t length) CXX11_OVERRIDE;
    
      std::shared_ptr<HttpConnection> httpConnection_;
    
    namespace aria2 {
    }
    
      void setPieceStorage(const std::shared_ptr<PieceStorage>& pieceStorage);
    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
    
    {} // namespace aria2

    
    
    {} // namespace aria2
    
    #include 'DiskWriterFactory.h'
#include 'a2functional.h'
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    class AsyncNameResolver;
class DownloadEngine;
class Command;
class Option;
    
    AuthConfig::~AuthConfig() = default;