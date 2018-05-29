
        
        
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    namespace tensorflow {
namespace io {
    }
    }
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    struct ParsedInternalKey {
  Slice user_key;
  SequenceNumber sequence;
  ValueType type;
    }
    
    class Env;
    
      // Evict any entry for the specified file number
  void Evict(uint64_t file_number);
    
    #include 'db/version_set.h'
#include 'util/logging.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
    // Number of read operations to do.  If negative, do FLAGS_num reads.
static int FLAGS_reads = -1;
    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};
    
      // Drop the first 'n' bytes from this slice.
  void remove_prefix(size_t n) {
    assert(n <= size());
    data_ += n;
    size_ -= n;
  }
    
    /** @file
 * @deprecated Use @ref cudev instead.
 */
    
    namespace cv
{
    }
    
    /* End of file. */

    
      vector<int64_t> sizes = {2, 2};
  tensor2->resize(sizes);
  tensor2->fill(4);
  tensor->add(*tensor2, 1);
  assert(tensor->nDim() == 2);
    
      std::unique_ptr<ManagerServerSocket> srv_socket;
  try {
    char tmpfile[L_tmpnam];
    if (std::tmpnam(tmpfile) == NULL)
      throw std::runtime_error('could not generate a random filename for manager socket');
    // TODO: better strategy for generating tmp names
    // TODO: retry on collisions - this can easily fail
    srv_socket.reset(new ManagerServerSocket(std::string(tmpfile)));
    register_fd(srv_socket->socket_fd);
    print_init_message(tmpfile);
    DEBUG('opened socket %s', tmpfile);
  } catch(...) {
    print_init_message('ERROR');
    throw;
  }
    
    /**
 * Delays sending request headers until bidirectional_stream_flush()
 * is called. This flag is currently only respected when QUIC is negotiated.
 * When true, QUIC will send request header frame along with data frame(s)
 * as a single packet when possible.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_delay_request_headers_until_flush(
    bidirectional_stream* stream,
    bool delay_headers_until_flush);
    
    #include 'src/proto/grpc/testing/control.pb.h'
#include 'test/cpp/qps/histogram.h'
    
    #include <gtest/gtest.h>
    
    #include <initializer_list>
#include <string>
#include <vector>
    
        // Append, Flush, Get
    slists.Append('c', 'asdasd');
    db->Flush(rocksdb::FlushOptions());
    success = slists.Get('c', &c);
    ASSERT_TRUE(success);
    ASSERT_EQ(c, 'asdasd');
    
      /// Remove the first (or last) num occurrences of value from the list (key)
  /// Return the number of elements removed.
  /// May throw RedisListException
  int Remove(const std::string& key, int32_t num,
             const std::string& value);
  int RemoveFirst(const std::string& key, int32_t num,
                  const std::string& value);
  int RemoveLast(const std::string& key, int32_t num,
                 const std::string& value);
    
    // We leave eight bits empty at the bottom so a type and sequence#
// can be packed together into 64-bits.
static const SequenceNumber kMaxSequenceNumber =
    ((0x1ull << 56) - 1);
    
    inline
void BlockFetcher::GetBlockContents() {
  if (slice_.data() != used_buf_) {
    // the slice content is not the buffer provided
    *contents_ = BlockContents(Slice(slice_.data(), block_size_), false,
                               compression_type);
  } else {
    // page is uncompressed, the buffer either stack or heap provided
    if (got_from_prefetch_buffer_ || used_buf_ == &stack_buf_[0]) {
      heap_buf_.reset(new char[block_size_]);
      memcpy(heap_buf_.get(), used_buf_, block_size_);
    }
    *contents_ = BlockContents(std::move(heap_buf_), block_size_, true,
                               compression_type);
  }
}
    
    
void SyncPoint::Data::LoadDependency(const std::vector<SyncPointPair>& dependencies) {
  std::lock_guard<std::mutex> lock(mutex_);
  successors_.clear();
  predecessors_.clear();
  cleared_points_.clear();
  for (const auto& dependency : dependencies) {
    successors_[dependency.predecessor].push_back(dependency.successor);
    predecessors_[dependency.successor].push_back(dependency.predecessor);
  }
  cv_.notify_all();
}
    
      // REQUIRES: No concurrent calls to WriteStep or ConcurrentWriteStep
  void WriteStep(Random* rnd) {
    const uint32_t k = rnd->Next() % K;
    const int g = current_.Get(k) + 1;
    const Key new_key = MakeKey(k, g);
    char* buf = list_.AllocateKey(sizeof(Key));
    memcpy(buf, &new_key, sizeof(Key));
    list_.Insert(buf);
    current_.Set(k, g);
  }
    
    class Comparator;
class InternalIterator;
class Env;
class Arena;
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
    TEST_F(YogaTest_HadOverflowTests, children_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 15);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    void Config::setPointScaleFactor(float pixelsInPoint)
{
    YGConfigSetPointScaleFactor(m_config, pixelsInPoint);
}
    
    void Node::setFlexBasis(double flexBasis)
{
    YGNodeStyleSetFlexBasis(m_node, flexBasis);
}
    
    #pragma once
#include <functional>
#include <string>
#include <jni.h>
    
      T* release() {
    T* obj = get();
    pthread_setspecific(m_key, NULL);
    return obj;
  }
    
    #include 'CoreClasses.h'