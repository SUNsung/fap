
        
        struct Pix;
struct TBLOB;
struct TPOINT;
    
    bool ParagraphModel::ValidBodyLine(int lmargin, int lindent,
                                   int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
    // Computes the Otsu threshold(s) for the given histogram.
// Also returns H = total count in histogram, and
// omega0 = count of histogram below threshold.
int OtsuStats(const int* histogram, int* H_out, int* omega0_out);
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
      // Simple accessors.
  bool empty() const {
    return heap_.empty();
  }
  int size() const {
    return heap_.size();
  }
  int size_reserved() const {
    return heap_.size_reserved();
  }
  void clear() {
    // Clear truncates to 0 to keep the number reserved in tact.
    heap_.truncate(0);
  }
  // Provides access to the underlying vector.
  // Caution! any changes that modify the keys will invalidate the heap!
  GenericVector<Pair>* heap() {
    return &heap_;
  }
  // Provides read-only access to an element of the underlying vector.
  const Pair& get(int index) const {
    return heap_[index];
  }
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
      // Free up any currently unused dawgs.
  void DeleteUnusedDawgs() {
    dawgs_.DeleteUnusedObjects();
  }
    
     private:
  struct CancelState {
    std::atomic_bool callback_invoked{false};
  };
  void EchoNonDelayed(ServerContext* context, const EchoRequest* request,
                      EchoResponse* response,
                      experimental::ServerCallbackRpcController* controller,
                      CancelState* cancel_state);
    
    #endif  // GRPC_TEST_CPP_INTEROP_CLIENT_HELPER_H

    
    
    {}  // namespace grpc_impl

    
    typedef struct {
  grpc_closure* on_done;
  gpr_mu mu;
  grpc_winsocket* socket;
  grpc_timer alarm;
  grpc_closure on_alarm;
  char* addr_name;
  int refs;
  grpc_closure on_connect;
  grpc_endpoint** endpoint;
  grpc_channel_args* channel_args;
} async_connect;
    
    
    {  gpr_setenv(name, value);
  retrieved_value = gpr_getenv(name);
  GPR_ASSERT(retrieved_value != nullptr);
  GPR_ASSERT(strcmp(value, retrieved_value) == 0);
  gpr_free(retrieved_value);
}
    
    static void test_strdup(void) {
  static const char* src1 = 'hello world';
  char* dst1;
    }
    
    TEST(GlobalConfigTest, StringTest) {
  grpc_core::UniquePtr<char> value;
    }
    
    namespace grpc_impl {
    }
    
    int main(int argc, char** argv) {
  grpc::testing::TestEnvironment env(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
      void DoEcho() {
    ClientContext context;
    EchoRequest request;
    EchoResponse response;
    request.set_message('hello world');
    Status s = stub_->Echo(&context, request, &response);
    EXPECT_EQ(request.message(), response.message());
    EXPECT_TRUE(s.ok());
  }
    
    
    { protected:
  std::unique_ptr<Server> server_;
  std::unique_ptr<grpc::testing::EchoTestService::Stub> stub_;
  std::unique_ptr<ProtoReflectionDescriptorDatabase> desc_db_;
  std::unique_ptr<protobuf::DescriptorPool> desc_pool_;
  std::unordered_set<string> known_files_;
  std::unordered_set<string> known_types_;
  const protobuf::DescriptorPool* ref_desc_pool_;
  int port_;
  reflection::ProtoServerReflectionPlugin plugin_;
};
    
    int main(int argc, char** argv) {
  // Change the backup poll interval from 5s to 100ms to speed up the
  // ReconnectChannel test
  grpc::testing::TestEnvironment env(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

    
    TEST(CorruptionTest, CompactionInputError) {
  Build(10);
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
  dbi->TEST_CompactMemTable();
  const int last = config::kMaxMemCompactLevel;
  ASSERT_EQ(1, Property('leveldb.num-files-at-level' + NumberToString(last)));
    }
    
      WritableFile* dest_;
  int block_offset_;  // Current offset in block
    
      // Position at the first key in the source.  The iterator is Valid()
  // after this call iff the source is not empty.
  virtual void SeekToFirst() = 0;
    
    #include 'leveldb/export.h'
#include 'leveldb/slice.h'
    
    // A Table is a sorted map from strings to strings.  Tables are
// immutable and persistent.  A Table may be safely accessed from
// multiple threads without external synchronization.
class LEVELDB_EXPORT Table {
 public:
  // Attempt to open the table that is stored in bytes [0..file_size)
  // of 'file', and read the metadata entries necessary to allow
  // retrieving data from the table.
  //
  // If successful, returns ok and sets '*table' to the newly opened
  // table.  The client should delete '*table' when no longer needed.
  // If there was an error while initializing the table, sets '*table'
  // to nullptr and returns a non-ok status.  Does not take ownership of
  // '*source', but the client must ensure that 'source' remains live
  // for the duration of the returned table's lifetime.
  //
  // *file must remain live while this Table is in use.
  static Status Open(const Options& options, RandomAccessFile* file,
                     uint64_t file_size, Table** table);
    }
    
    #include <stdint.h>
    
    
    {}  // namespace leveldb
    
    TEST(CacheTest, HeavyEntries) {
  // Add a bunch of light and heavy entries and then count the combined
  // size of items still in the cache, which must be approximately the
  // same as the total capacity.
  const int kLight = 1;
  const int kHeavy = 10;
  int added = 0;
  int index = 0;
  while (added < 2 * kCacheSize) {
    const int weight = (index & 1) ? kLight : kHeavy;
    Insert(index, 1000 + index, weight);
    added += weight;
    index++;
  }
    }
    
    TEST(EnvTest, ReopenWritableFile) {
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file_name = test_dir + '/reopen_writable_file.txt';
  env_->DeleteFile(test_file_name);
    }
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty()  // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    // -----------------------------------------------------------------------
// MaskMissingColumnsTo() -- function to set gaps to zero or NaN
// -----------------------------------------------------------------------
    
                    fstream.GetMarker(FileMarker::fileMarkerBeginSection, L'BMomentumAsTimeConstant');
                fstream >> m_blockMomentumAsTimeConstantPerWorker;
                fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EMomentumAsTimeConstant');
    
    template <>
int NDLNode<half>::s_nameCounter = 0;
template <>
int NDLNode<float>::s_nameCounter = 0;
template <>
int NDLNode<double>::s_nameCounter = 0;
    
                w = builder.Mean(input, L'MeanOfFeatures');
            static_pointer_cast<PreComputedNodeBase<ElemType>>(w)->SideLoadFromMatrix(contextMean);
            w->SetLearningRateMultiplier(0);
    
        bool m_needAveMultiplier;
    double m_L2RegWeight;
    double m_L1RegWeight;
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
    
    {    // Only used for controlling frequency of measuring/showing gradient aggregation perf stats
    int m_syncStatsTrace;
    size_t m_iterationCount;
    bool m_initialized;
};