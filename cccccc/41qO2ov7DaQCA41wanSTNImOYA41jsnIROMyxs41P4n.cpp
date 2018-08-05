
        
        #ifndef ATOM_COMMON_API_LOCKER_H_
#define ATOM_COMMON_API_LOCKER_H_
    
    struct DraggableRegion {
  bool draggable;
  gfx::Rect bounds;
    }
    
    #include 'base/time/time.h'
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    namespace chrome {
    }
    
    #if defined(OS_MACOSX)
// NOTE: if you change the value of kFrameworkName, please don't forget to
// update components/test/run_all_unittests.cc as well.
// TODO(tfarina): Remove the comment above, when you fix components to use plist
// on Mac.
extern const base::FilePath::CharType kFrameworkName[];
#endif  // OS_MACOSX
    
    
    { private:
  gfx::Size minimum_size_;
  gfx::Size maximum_size_;
};
    
    const char *kApostropheLikeUTF8[] = {
  ''',       // ASCII apostrophe
  '`',       // ASCII backtick
  '\u2018',  // opening single quote
  '\u2019',  // closing single quote
  '\u2032',  // mathematical prime mark
  nullptr,      // end of our list.
};
    
    #endif  // TESSERACT_CLASSIFY_SAMPLEITERATOR_H_

    
      // Gets the canonical sample for the given font, class pair.
  // ComputeCanonicalSamples must have been called first.
  const TrainingSample* GetCanonicalSample(int font_id, int class_id) const;
  // Gets the max distance for the given canonical sample.
  // ComputeCanonicalSamples must have been called first.
  float GetCanonicalDist(int font_id, int class_id) const;
    
      // Hoovers up all un-owned blobs and deletes them.
  // The rest get released from the block so the ColPartitions can pass
  // ownership to the output blocks.
  void ReleaseBlobsAndCleanupUnused(TO_BLOCK* block);
  // Splits partitions that cross columns where they have nothing in the gap.
  void GridSplitPartitions();
  // Merges partitions where there is vertical overlap, within a single column,
  // and the horizontal gap is small enough.
  void GridMergePartitions();
  // Inserts remaining noise blobs into the most applicable partition if any.
  // If there is no applicable partition, then the blobs are deleted.
  void InsertRemainingNoise(TO_BLOCK* block);
  // Remove partitions that come from horizontal lines that look like
  // underlines, but are not part of a table.
  void GridRemoveUnderlinePartitions();
  // Add horizontal line separators as partitions.
  void GridInsertHLinePartitions();
  // Add vertical line separators as partitions.
  void GridInsertVLinePartitions();
  // For every ColPartition in the grid, sets its type based on position
  // in the columns.
  void SetPartitionTypes();
  // Only images remain with multiple types in a run of partners.
  // Sets the type of all in the group to the maximum of the group.
  void SmoothPartnerRuns();
    
    // Make a block using lines parallel to the given vector that fit between
// the min and max coordinates specified by the ColPartitions.
// Construct a block from the given list of partitions.
void WorkingPartSet::MakeBlocks(const ICOORD& bleft, const ICOORD& tright,
                                int resolution, ColPartition_LIST* used_parts) {
  part_it_.move_to_first();
  while (!part_it_.empty()) {
    // Gather a list of ColPartitions in block_parts that will be split
    // by linespacing into smaller blocks.
    ColPartition_LIST block_parts;
    ColPartition_IT block_it(&block_parts);
    ColPartition* next_part = nullptr;
    bool text_block = false;
    do {
      ColPartition* part = part_it_.extract();
      if (part->blob_type() == BRT_UNKNOWN ||
          (part->IsTextType() && part->type() != PT_TABLE))
        text_block = true;
      part->set_working_set(nullptr);
      part_it_.forward();
      block_it.add_after_then_move(part);
      next_part = part->SingletonPartner(false);
      if (part_it_.empty() || next_part != part_it_.data()) {
        // Sequences of partitions can get split by titles.
        next_part = nullptr;
      }
      // Merge adjacent blocks that are of the same type and let the
      // linespacing determine the real boundaries.
      if (next_part == nullptr && !part_it_.empty()) {
        ColPartition* next_block_part = part_it_.data();
        const TBOX& part_box = part->bounding_box();
        const TBOX& next_box = next_block_part->bounding_box();
    }
    }
    }
    }
    
    #define WIDEN2(x) L ## x
#define WIDEN(x) WIDEN2(x)
#define __WFUNCTION__ WIDEN(__FUNCTION__)
    
      // Add '<shared><non_shared><value_size>' to buffer_
  PutVarint32(&buffer_, shared);
  PutVarint32(&buffer_, non_shared);
  PutVarint32(&buffer_, value.size());
    
      // Last filter
  builder.StartBlock(9000);
  builder.AddKey('box');
  builder.AddKey('hello');
    
      for (int length = 1; length <= 10000; length = NextLength(length)) {
    Reset();
    for (int i = 0; i < length; i++) {
      Add(Key(i, buffer));
    }
    Build();
    }
    
      enum { kNumBuckets = 154 };
  static const double kBucketLimit[kNumBuckets];
  double buckets_[kNumBuckets];
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
      /// Get the local endpoint of the acceptor.
  /**
   * This function is used to obtain the locally bound endpoint of the acceptor.
   *
   * @returns An object that represents the local endpoint of the acceptor.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::endpoint endpoint = acceptor.local_endpoint();
   * @endcode
   */
  endpoint_type local_endpoint() const
  {
    boost::system::error_code ec;
    endpoint_type ep = this->get_service().local_endpoint(
        this->get_implementation(), ec);
    boost::asio::detail::throw_error(ec, 'local_endpoint');
    return ep;
  }
    
      void* data_;
  std::size_t size_;
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    } // namespace date_time
namespace posix_time {
    
    #include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/reactor_op.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP
#define BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP
    
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
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    inline void RowSet::Save(dmlc::Stream* fo) const {
  fo->Write(rows_);
  fo->Write(&size_, sizeof(size_));
}
    
    void SimpleCSRSource::SaveBinary(dmlc::Stream* fo) const {
  int tmagic = kMagic;
  fo->Write(&tmagic, sizeof(tmagic));
  info.SaveBinary(fo);
  fo->Write(page_.offset);
  fo->Write(page_.data);
}
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('ndcg@2-');
  ASSERT_STREQ(metric->Name(), 'ndcg@2-');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.3868f, 0.001f);
}
    
    struct ExceptionInfo {
  const std::type_info* type{nullptr};
  // The values in frames are IP (instruction pointer) addresses.
  // They are only filled if the low-level exception tracer library is
  // linked in or LD_PRELOADed.
  std::vector<uintptr_t> frames; // front() is top of stack
};
    
    #include <folly/synchronization/Hazptr.h>
    
        uint64_t origAllocated = *counter;
    
      EXPECT_EQ(5050, estimates.sum);
  EXPECT_EQ(100, estimates.count);
    
    
    {  return block;
}
    
      EXPECT_TRUE(folly::settings::setFromString(
      'follytest_public_flag_to_a', '300', 'from_string'));
  EXPECT_EQ(*a_ns::FOLLY_SETTING(follytest, public_flag_to_a), 300);
  EXPECT_EQ(a_ns::getRemote(), 300);
  res = folly::settings::getAsString('follytest_public_flag_to_a');
  EXPECT_TRUE(res.hasValue());
  EXPECT_EQ(res->first, '300');
  EXPECT_EQ(res->second, 'from_string');