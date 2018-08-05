#ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    
    {  // Check last filter
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'hello'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'bar'));
}
    
    void Footer::EncodeTo(std::string* dst) const {
  const size_t original_size = dst->size();
  metaindex_handle_.EncodeTo(dst);
  index_handle_.EncodeTo(dst);
  dst->resize(2 * BlockHandle::kMaxEncodedLength);  // Padding
  PutFixed32(dst, static_cast<uint32_t>(kTableMagicNumber & 0xffffffffu));
  PutFixed32(dst, static_cast<uint32_t>(kTableMagicNumber >> 32));
  assert(dst->size() == original_size + kEncodedLength);
  (void)original_size;  // Disable unused variable warning.
}
    
      // Count number of filters that significantly exceed the false positive rate
  int mediocre_filters = 0;
  int good_filters = 0;
    
    void Histogram::Merge(const Histogram& other) {
  if (other.min_ < min_) min_ = other.min_;
  if (other.max_ > max_) max_ = other.max_;
  num_ += other.num_;
  sum_ += other.sum_;
  sum_squares_ += other.sum_squares_;
  for (int b = 0; b < kNumBuckets; b++) {
    buckets_[b] += other.buckets_[b];
  }
}
    
    // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    
    {  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  c.reset();
}
    
    
    {
    {  return '0';
}
}

    
    TEST_F(PermissionsTests, test_path_drop) {
  if (getuid() != 0) {
    LOG(WARNING) << 'Not root, skipping (path) unprivileged testing';
    return;
  }
    }
    
      EXPECT_FALSE(cl3.matches(1001));
  EXPECT_TRUE(cl3.matches(1000));
    
    #include <osquery/core.h>
#include <osquery/system.h>
    
     private:
  /// Check subscription details.
  bool shouldFire(const UdevSubscriptionContextRef& mc,
                  const UdevEventContextRef& ec) const override;
    
    FirehoseLogForwarder::Outcome FirehoseLogForwarder::internalSend(
    const Batch& batch) {
  Aws::Firehose::Model::PutRecordBatchRequest request;
  request.WithDeliveryStreamName(FLAGS_aws_firehose_stream)
      .WithRecords(std::move(batch));
  return client_->PutRecordBatch(request);
}
    
    #include <map>
#include <node.h>
    
    
    {};
    
    /**
 * @brief lock file. create if missing.
 * @details [long description]
 *
 * It seems that LockFile is used for preventing other instance of RocksDB
 * from opening up the database at the same time. From RocksDB source code,
 * the invokes of LockFile are at following locations:
 *
 *  ./db/db_impl.cc:1159:    s = env_->LockFile(LockFileName(dbname_), &db_lock_);    // DBImpl::Recover
 *  ./db/db_impl.cc:5839:  Status result = env->LockFile(lockname, &lock);            // Status DestroyDB
 *
 * When db recovery and db destroy, RocksDB will call LockFile
 *
 * @param fname [description]
 * @param lock [description]
 *
 * @return [description]
 */
Status EnvLibrados::LockFile(
  const std::string& fname,
  FileLock** lock)
{
  LOG_DEBUG('[IN]%s\n', fname.c_str());
  std::string fid, dir, file;
  split(fname, &dir, &file);
  Status s = Status::OK();
    }
    
      // Drop reference count.
  // If the refcount goes to zero return this memtable, otherwise return null.
  // REQUIRES: external synchronization to prevent simultaneous
  // operations on the same MemTable.
  MemTable* Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      return this;
    }
    return nullptr;
  }
    
      // Notify this table rep that it will no longer be added to. By default,
  // does nothing.  After MarkReadOnly() is called, this table rep will
  // not be written to (ie No more calls to Allocate(), Insert(),
  // or any writes done directly to entries accessed through the iterator.)
  virtual void MarkReadOnly() { }
    
      jlong addr_compaction_filter = env->CallLongMethod(m_jcallback_obj,
      m_jcreate_compaction_filter_methodid,
      static_cast<jboolean>(context.is_full_compaction),
      static_cast<jboolean>(context.is_manual_compaction));
    
    bool HistogramStat::Empty() const { return num() == 0; }
    
    #include 'modules/planning/tasks/traffic_decider/traffic_decider.h'
    
    /**
 * @brief Computes the Moore-Penrose pseudo-inverse of a given matrix,
 * rounding all eigenvalues with absolute value bounded by epsilon to zero.
 *
 * @param m The matrix to be pseudo-inverted
 * @param epsilon A small positive real number (optional; default is 1.0e-6).
 *
 * @return Moore-Penrose pseudo-inverse of the given matrix.
 */
template <typename T, unsigned int M, unsigned int N>
Eigen::Matrix<T, N, M> PseudoInverse(const Eigen::Matrix<T, M, N> &m,
                                     const double epsilon = 1.0e-6) {
  Eigen::Matrix<T, M, M> t = m * m.transpose();
  return m.transpose() * PseudoInverse<T, M>(t);
}
    
    namespace apollo {
namespace planning {
    }
    }
    
      /**
   * @brief Getter of the size of the diagonal of the box
   * @return The diagonal size of the box
   */
  double diagonal() const { return std::hypot(length_, width_); }
    
    
    {  double min_proj = line_segment.length();
  double max_proj = 0;
  if (IsPointIn(line_segment.start())) {
    *first = line_segment.start();
    min_proj = 0.0;
  }
  if (IsPointIn(line_segment.end())) {
    *last = line_segment.end();
    max_proj = line_segment.length();
  }
  for (const auto &poly_seg : line_segments_) {
    Vec2d pt;
    if (poly_seg.GetIntersect(line_segment, &pt)) {
      const double proj = line_segment.ProjectOntoUnit(pt);
      if (proj < min_proj) {
        min_proj = proj;
        *first = pt;
      }
      if (proj > max_proj) {
        max_proj = proj;
        *last = pt;
      }
    }
  }
  return min_proj <= max_proj + kMathEpsilon;
}
    
    bool PathDecision::MergeWithMainStop(const ObjectStop &obj_stop,
                                     const std::string &obj_id,
                                     const ReferenceLine &reference_line,
                                     const SLBoundary &adc_sl_boundary) {
  apollo::common::PointENU stop_point = obj_stop.stop_point();
  common::SLPoint stop_line_sl;
  reference_line.XYToSL({stop_point.x(), stop_point.y()}, &stop_line_sl);
    }
    
      /**
   * @brief Destructor
   */
  virtual ~Planner() = default;
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    constexpr size_t kDefaultLimit = 64;
    
    template<typename T>
inline void JClass::setStaticFieldValue(JStaticField<T> field, T value) noexcept {
  field.set(self(), value);
}
    
        YGConfigRef m_config;
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    
    {  template <typename T> friend class RefPtr;
  std::atomic<int> m_refcount;
};
    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
      ProgramLocation(const char* functionName, const char* fileName, int line) :
      m_functionName(functionName),
      m_fileName(fileName),
      m_lineNumber(line)
    {}