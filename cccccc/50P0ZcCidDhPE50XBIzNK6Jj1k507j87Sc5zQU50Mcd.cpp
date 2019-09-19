
        
        
    { private:
  const int kNumTensorsPerInput = 4;
};
    
    void hdf5_save_string(hid_t loc_id, const string& dataset_name,
                      const string& s) {
  herr_t status = \
    H5LTmake_dataset_string(loc_id, dataset_name.c_str(), s.c_str());
  CHECK_GE(status, 0)
    << 'Failed to save string dataset with name ' << dataset_name;
}
    
      // Timing information, handy to tune e.g. nbr of GPUs
  Timer iteration_timer_;
  float iterations_last_;
    
    template <typename Dtype>
void PoolingLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
  if (!propagate_down[0]) {
    return;
  }
  const Dtype* top_diff = top[0]->cpu_diff();
  Dtype* bottom_diff = bottom[0]->mutable_cpu_diff();
  // Different pooling methods. We explicitly do the switch outside the for
  // loop to save time, although this results in more codes.
  caffe_set(bottom[0]->count(), Dtype(0), bottom_diff);
  // We'll output the mask to top[1] if it's of size >1.
  const bool use_top_mask = top.size() > 1;
  const int* mask = NULL;  // suppress warnings about uninitialized variables
  const Dtype* top_mask = NULL;
  switch (this->layer_param_.pooling_param().pool()) {
  case PoolingParameter_PoolMethod_MAX:
    // The main loop
    if (use_top_mask) {
      top_mask = top[1]->cpu_data();
    } else {
      mask = max_idx_.cpu_data();
    }
    for (int n = 0; n < top[0]->num(); ++n) {
      for (int c = 0; c < channels_; ++c) {
        for (int ph = 0; ph < pooled_height_; ++ph) {
          for (int pw = 0; pw < pooled_width_; ++pw) {
            const int index = ph * pooled_width_ + pw;
            const int bottom_index =
                use_top_mask ? top_mask[index] : mask[index];
            bottom_diff[bottom_index] += top_diff[index];
          }
        }
        bottom_diff += bottom[0]->offset(0, 1);
        top_diff += top[0]->offset(0, 1);
        if (use_top_mask) {
          top_mask += top[0]->offset(0, 1);
        } else {
          mask += top[0]->offset(0, 1);
        }
      }
    }
    break;
  case PoolingParameter_PoolMethod_AVE:
    // The main loop
    for (int n = 0; n < top[0]->num(); ++n) {
      for (int c = 0; c < channels_; ++c) {
        for (int ph = 0; ph < pooled_height_; ++ph) {
          for (int pw = 0; pw < pooled_width_; ++pw) {
            int hstart = ph * stride_h_ - pad_h_;
            int wstart = pw * stride_w_ - pad_w_;
            int hend = min(hstart + kernel_h_, height_ + pad_h_);
            int wend = min(wstart + kernel_w_, width_ + pad_w_);
            int pool_size = (hend - hstart) * (wend - wstart);
            hstart = max(hstart, 0);
            wstart = max(wstart, 0);
            hend = min(hend, height_);
            wend = min(wend, width_);
            for (int h = hstart; h < hend; ++h) {
              for (int w = wstart; w < wend; ++w) {
                bottom_diff[h * width_ + w] +=
                  top_diff[ph * pooled_width_ + pw] / pool_size;
              }
            }
          }
        }
        // offset
        bottom_diff += bottom[0]->offset(0, 1);
        top_diff += top[0]->offset(0, 1);
      }
    }
    break;
  case PoolingParameter_PoolMethod_STOCHASTIC:
    NOT_IMPLEMENTED;
    break;
  default:
    LOG(FATAL) << 'Unknown pooling method.';
  }
}
    
    void convert_dataset(const string& input_folder, const string& output_folder,
    const string& db_type) {
  scoped_ptr<db::DB> train_db(db::GetDB(db_type));
  train_db->Open(output_folder + '/cifar10_train_' + db_type, db::NEW);
  scoped_ptr<db::Transaction> txn(train_db->NewTransaction());
  // Data buffer
  int label;
  char str_buffer[kCIFARImageNBytes];
  Datum datum;
  datum.set_channels(3);
  datum.set_height(kCIFARSize);
  datum.set_width(kCIFARSize);
    }
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
      ~Reader();
    
    namespace leveldb {
    }
    
      // Set the last sequence number to s.
  void SetLastSequence(uint64_t s) {
    assert(s >= last_sequence_);
    last_sequence_ = s;
  }
    
      const char kWrite2Data[] = 'Write #2 data';
  ASSERT_OK(WriteStringToFile(env_, kWrite2Data, kTestFileName));
    
      // -------------------
  // Parameters that affect performance
    
      Code code() const {
    return (state_ == nullptr) ? kOk : static_cast<Code>(state_[4]);
  }
    
      // Add string delta to buffer_ followed by value
  buffer_.append(key.data() + shared, non_shared);
  buffer_.append(value.data(), value.size());
    
    //------------------------------------------------------------------------
// DeviceNRecoder
//------------------------------------------------------------------------
    
    #include 'goo/gtypes.h'
#include 'goo/GooList.h'
#include 'goo/GooString.h'
#include 'Object.h'
    
    
    {  if (inlineImg) {
    str->reset();
    j = height * ((width * colorMap->getNumPixelComps() *
		   colorMap->getBits() + 7) / 8);
    for (i = 0; i < j; ++i)
      str->getChar();
    str->close();
  }
}
    
      // Check the document's encryption.  If the document is encrypted,
  // this will first try <ownerPassword> and <userPassword> (in
  // 'batch' mode), and if those fail, it will attempt to request a
  // password from the user.  This is the high-level function that
  // calls the lower level functions for the specific security handler
  // (requesting a password three times, etc.).  Returns true if the
  // document can be opened (if it's unencrypted, or if a correct
  // password is obtained); false otherwise (encrypted and no correct
  // password).
  GBool checkEncryption(GooString *ownerPassword,
			GooString *userPassword);
    
      if (unlikely(t3GlyphStack->origSplash != NULL)) {
    error(-1, 't3GlyphStack origSplash was not null in SplashOutputDev::type3D1');
    return;
  }
    
    const std::string& DHTResponseMessage::getType() const { return R; }
    
    
    {} // namespace aria2

    
      void moveBucketHead(const std::shared_ptr<DHTNode>& node);
    
    #include <vector>
#include <string>
#include <memory>
    
    
    {} // namespace aria2

    
    #include <vector>
#include <memory>
    
    #include 'common.h'
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
      DHTMessageDispatcher* dispatcher_;
    
    public:
  DHTTaskQueueImpl();
    
      static const std::string E;
    
      /**
   * @brief Check if a config plugin is registered and load configs.
   *
   * Calls refresh after confirming a config plugin is registered
   */
  Status load();
    
    bool Pack::checkDiscovery() {
  stats_.total++;
  size_t current = osquery::getUnixTime();
  if ((current - discovery_cache_.first) < FLAGS_pack_refresh_interval) {
    stats_.hits++;
    return discovery_cache_.second;
  }
    }
    
    TEST_F(PacksTests, test_schedule) {
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  // Expect a single query in the schedule since one query has an explicit
  // invalid/fake platform requirement.
  EXPECT_EQ(fpack.getSchedule().size(), 1U);
}
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::open() {
  debug_only::verifyTrue(!is_open_, 'database is already open');
  for (const auto& domain : kDomains) {
    storage_[domain] = std::make_unique<InMemoryStorage<DataType>>();
  }
  is_open_ = true;
  return Success();
}
    
    
    {  name_ = name;
}
    
      // check writeWithPriority will wait for at least timeout if the queue is
  // full.
  auto time_before = std::chrono::steady_clock::now();
  EXPECT_FALSE(queue.writeWithPriority(5, 0, timeout));
  auto time_after = std::chrono::steady_clock::now();
  EXPECT_GE(time_after - time_before, timeout);
    
    
    {
    {  std::atomic<ssize_t> keepAliveCounter_{1};
  KeepAlive<Executor> executor_;
  int8_t priority_;
};
} // namespace folly

    
    namespace folly {
/**
 * An implementation of `folly::AsyncLogWriter` that writes log messages into a
 * file.
 *
 * See `folly::AsyncLogWriter` for details on asynchronous IO.
 */
class AsyncFileWriter : public AsyncLogWriter {
 public:
  /**
   * Construct an AsyncFileWriter that appends to the file at the specified
   * path.
   */
  explicit AsyncFileWriter(folly::StringPiece path);
    }
    }
    
    void AsyncLogWriter::writeMessage(std::string&& buffer, uint32_t flags) {
  auto data = data_.lock();
  if ((data->currentBufferSize >= data->maxBufferBytes) &&
      !(flags & NEVER_DISCARD)) {
    ++data->numDiscarded;
    return;
  }
    }
    
      bool preFork();
  void postForkParent();
  void postForkChild();
  void stopIoThread(
      folly::Synchronized<Data, std::mutex>::LockedPtr& data,
      uint32_t extraFlags);
  void restartThread();
    
    namespace {
static bool* expectedMessage;
void handleLoggingError(
    StringPiece /* file */,
    int /* lineNumber */,
    std::string&& msg) {
  if (folly::kIsDebug) {
    std::cerr << msg << std::endl;
  } else {
    *expectedMessage = (msg == 'cleanup() is not called before destroying');
  }
}
    }
    
    template <class Alloc>
void Arena<Alloc>::merge(Arena<Alloc>&& other) {
  blocks_.splice_after(blocks_.before_begin(), other.blocks_);
  other.blocks_.clear();
  other.ptr_ = other.end_ = nullptr;
  totalAllocatedSize_ += other.totalAllocatedSize_;
  other.totalAllocatedSize_ = 0;
}
    
    
    {  atomic_thread_fence(std::memory_order_seq_cst);
  beforeSharedAccess();
  auto parent = joins_.find(std::this_thread::get_id());
  if (parent != joins_.end()) {
    reschedule(parent->second);
    joins_.erase(parent);
  }
  sems_.erase(std::find(sems_.begin(), sems_.end(), tls.sem));
  active_.erase(std::this_thread::get_id());
  if (sems_.size() > 0) {
    FOLLY_TEST_DSCHED_VLOG('exiting');
    /* Wait here so that parent thread can control when the thread
     * enters the thread local destructors. */
    exitingSems_[std::this_thread::get_id()] = tls.sem;
    afterSharedAccess();
    tls.sem->wait();
  }
  tls.sched = nullptr;
  tls.aux_act = nullptr;
  tls.exiting = true;
  delete tls.sem;
  tls.sem = nullptr;
}
    
      /** Sets up a function to be called after every subsequent shared
   *  access (until clearAuxChk() is called) for checking global
   *  invariants and logging. The function takes a uint64_t parameter
   *  that indicates the number of shared accesses so far. */
  static void setAuxChk(AuxChk& aux);
    
    TEST(IndexedMemPool, unique_ptr) {
  typedef IndexedMemPool<size_t> Pool;
  Pool pool(100);
    }
    
    #define FOLLY_HAS_MEMORY_RESOURCE 1
#include <memory_resource> // @manual
namespace folly {
namespace detail {
namespace std_pmr = ::std::pmr;
} // namespace detail
} // namespace folly
    
      /**
   * Try to combine a task as a combined critical section untill the given time
   *
   * Other than the difference in the meaning of the second argument, the
   * semantics of this function are identical to try_lock_combine_for()
   */
  template <
      typename Clock,
      typename Duration,
      typename Task,
      typename ReturnType = decltype(std::declval<Task&>()())>
  folly::Optional<ReturnType> try_lock_combine_until(
      const std::chrono::time_point<Clock, Duration>& deadline,
      Task task);