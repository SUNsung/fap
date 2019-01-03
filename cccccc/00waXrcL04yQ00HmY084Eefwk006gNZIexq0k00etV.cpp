
        
        // static
void UvTaskRunner::OnTimeout(uv_timer_t* timer) {
  UvTaskRunner* self = static_cast<UvTaskRunner*>(timer->data);
  if (!ContainsKey(self->tasks_, timer))
    return;
    }
    
      // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
    #include 'atom/browser/browser.h'
#include 'atom/browser/native_window.h'
#include 'atom/browser/window_list.h'
#include 'atom/common/api/event_emitter_caller.h'
#include 'atom/common/native_mate_converters/callback.h'
#include 'atom/common/node_includes.h'
#include 'base/time/time.h'
#include 'native_mate/dictionary.h'
#include 'native_mate/object_template_builder.h'
    
    namespace atom {
    }
    
      // TrayIconObserver:
  void OnClicked(const gfx::Rect& bounds,
                 const gfx::Point& location,
                 int modifiers) override;
  void OnDoubleClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnRightClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnBalloonShow() override;
  void OnBalloonClicked() override;
  void OnBalloonClosed() override;
  void OnDrop() override;
  void OnDropFiles(const std::vector<std::string>& files) override;
  void OnDropText(const std::string& text) override;
  void OnDragEntered() override;
  void OnDragExited() override;
  void OnDragEnded() override;
  void OnMouseEntered(const gfx::Point& location, int modifiers) override;
  void OnMouseExited(const gfx::Point& location, int modifiers) override;
  void OnMouseMoved(const gfx::Point& location, int modifiers) override;
    
    
    {}  // namespace mate
    
    class AtomJavaScriptDialogManager : public content::JavaScriptDialogManager {
 public:
  explicit AtomJavaScriptDialogManager(api::WebContents* api_web_contents);
  ~AtomJavaScriptDialogManager() override;
    }
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
      // A simple array of pointers to the best assigned column division at
  // each grid y coordinate. This pointer is passed in from the caller, so do
  // NOT destroy it in the class.
  ColPartitionSet** best_columns_;
    
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
    
    // Getter for the description.
const char* ParamContent::GetDescription() const {
  if (param_type_ == VT_INTEGER) { return iIt->info_str(); }
  else if (param_type_ == VT_BOOLEAN) { return bIt->info_str(); }
  else if (param_type_ == VT_DOUBLE) { return dIt->info_str(); }
  else if (param_type_ == VT_STRING) { return sIt->info_str(); }
  else return nullptr;
}
    
    #include <cmath>
    
      // Set the resolution of the source image in pixels per inch.
  // This should be called right after SetImage(), and will let us return
  // appropriate font sizes for the text.
  void SetSourceYResolution(int ppi) {
    yres_ = ppi;
    estimated_res_ = ppi;
  }
  int GetSourceYResolution() const {
    return yres_;
  }
  int GetScaledYResolution() const {
    return scale_ * yres_;
  }
  // Set the resolution of the source image in pixels per inch, as estimated
  // by the thresholder from the text size found during thresholding.
  // This value will be used to set internal size thresholds during recognition
  // and will not influence the output 'point size.' The default value is
  // the same as the source resolution. (yres_)
  void SetEstimatedResolution(int ppi) {
    estimated_res_ = ppi;
  }
  // Returns the estimated resolution, including any active scaling.
  // This value will be used to set internal size thresholds during recognition.
  int GetScaledEstimatedResolution() const {
    return scale_ * estimated_res_;
  }
    
    class TBOX;
    
    // Maximum number of files to keep open at the same time (use default if == 0)
static int FLAGS_open_files = 0;
    
    void DBImpl::RecordBackgroundError(const Status& s) {
  mutex_.AssertHeld();
  if (bg_error_.ok()) {
    bg_error_ = s;
    background_work_finished_signal_.SignalAll();
  }
}
    
      int NumTableFilesAtLevel(int level) {
    std::string property;
    ASSERT_TRUE(
        db_->GetProperty('leveldb.num-files-at-level' + NumberToString(level),
                         &property));
    return atoi(property.c_str());
  }
    
    struct ParsedInternalKey {
  Slice user_key;
  SequenceNumber sequence;
  ValueType type;
    }
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
std::string LockFileName(const std::string& dbname);
    
      fname = CurrentFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kCurrentFile, type);
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
          case kEof:
        if (in_fragmented_record) {
          // This can be caused by the writer dying immediately after
          // writing a physical record but before completing the next; don't
          // treat it as a corruption, just ignore the entire logical record.
          scratch->clear();
        }
        return false;
    
      // Recover and check that all log files were processed.
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  uint64_t new_log = FirstLogFile();
  ASSERT_LE(old_log+3, new_log);
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
    
    #include <inttypes.h>
#include <sys/types.h>
#include <stdio.h>
    
    Status WriteBatchBase::SingleDelete(ColumnFamilyHandle* column_family,
                                    const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(column_family, key_slice);
}
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
    namespace rocksdb {
    }
    
    #pragma once
    
    class MyMerge : public rocksdb::MergeOperator {
 public:
  virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override {
    merge_out->new_value.clear();
    if (merge_in.existing_value != nullptr) {
      merge_out->new_value.assign(merge_in.existing_value->data(),
                                  merge_in.existing_value->size());
    }
    for (const rocksdb::Slice& m : merge_in.operand_list) {
      fprintf(stderr, 'Merge(%s)\n', m.ToString().c_str());
      // the compaction filter filters out bad values
      assert(m.ToString() != 'bad');
      merge_out->new_value.assign(m.data(), m.size());
    }
    return true;
  }
    }
    
    #ifndef ROCKSDB_LITE
    
    // Take a default ColumnFamilyOptions 'base_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// ColumnFamilyOptions 'new_options'.
//
// Below are the instructions of how to config some non-primitive-typed
// options in ColumnFOptions:
//
// * table_factory:
//   table_factory can be configured using our custom nested-option syntax.
//
//   {option_a=value_a; option_b=value_b; option_c=value_c; ... }
//
//   A nested option is enclosed by two curly braces, within which there are
//   multiple option assignments.  Each assignment is of the form
//   'variable_name=value;'.
//
//   Currently we support the following types of TableFactory:
//   - BlockBasedTableFactory:
//     Use name 'block_based_table_factory' to initialize table_factory with
//     BlockBasedTableFactory.  Its BlockBasedTableFactoryOptions can be
//     configured using the nested-option syntax.
//     [Example]:
//     * {'block_based_table_factory', '{block_cache=1M;block_size=4k;}'}
//       is equivalent to assigning table_factory with a BlockBasedTableFactory
//       that has 1M LRU block-cache with block size equals to 4k:
//         ColumnFamilyOptions cf_opt;
//         BlockBasedTableOptions blk_opt;
//         blk_opt.block_cache = NewLRUCache(1 * 1024 * 1024);
//         blk_opt.block_size = 4 * 1024;
//         cf_opt.table_factory.reset(NewBlockBasedTableFactory(blk_opt));
//   - PlainTableFactory:
//     Use name 'plain_table_factory' to initialize table_factory with
//     PlainTableFactory.  Its PlainTableFactoryOptions can be configured using
//     the nested-option syntax.
//     [Example]:
//     * {'plain_table_factory', '{user_key_len=66;bloom_bits_per_key=20;}'}
//
// * memtable_factory:
//   Use 'memtable' to config memtable_factory.  Here are the supported
//   memtable factories:
//   - SkipList:
//     Pass 'skip_list:<lookahead>' to config memtable to use SkipList,
//     or simply 'skip_list' to use the default SkipList.
//     [Example]:
//     * {'memtable', 'skip_list:5'} is equivalent to setting
//       memtable to SkipListFactory(5).
//   - PrefixHash:
//     Pass 'prfix_hash:<hash_bucket_count>' to config memtable
//     to use PrefixHash, or simply 'prefix_hash' to use the default
//     PrefixHash.
//     [Example]:
//     * {'memtable', 'prefix_hash:1000'} is equivalent to setting
//       memtable to NewHashSkipListRepFactory(hash_bucket_count).
//   - HashLinkedList:
//     Pass 'hash_linkedlist:<hash_bucket_count>' to config memtable
//     to use HashLinkedList, or simply 'hash_linkedlist' to use the default
//     HashLinkedList.
//     [Example]:
//     * {'memtable', 'hash_linkedlist:1000'} is equivalent to
//       setting memtable to NewHashLinkListRepFactory(1000).
//   - VectorRepFactory:
//     Pass 'vector:<count>' to config memtable to use VectorRepFactory,
//     or simply 'vector' to use the default Vector memtable.
//     [Example]:
//     * {'memtable', 'vector:1024'} is equivalent to setting memtable
//       to VectorRepFactory(1024).
//   - HashCuckooRepFactory:
//     Pass 'cuckoo:<write_buffer_size>' to use HashCuckooRepFactory with the
//     specified write buffer size, or simply 'cuckoo' to use the default
//     HashCuckooRepFactory.
//     [Example]:
//     * {'memtable', 'cuckoo:1024'} is equivalent to setting memtable
//       to NewHashCuckooRepFactory(1024).
//
//  * compression_opts:
//    Use 'compression_opts' to config compression_opts.  The value format
//    is of the form '<window_bits>:<level>:<strategy>:<max_dict_bytes>'.
//    [Example]:
//    * {'compression_opts', '4:5:6:7'} is equivalent to setting:
//        ColumnFamilyOptions cf_opt;
//        cf_opt.compression_opts.window_bits = 4;
//        cf_opt.compression_opts.level = 5;
//        cf_opt.compression_opts.strategy = 6;
//        cf_opt.compression_opts.max_dict_bytes = 7;
//
// @param base_options the default options of the output 'new_options'.
// @param opts_map an option name to value map for specifying how 'new_options'
//     should be set.
// @param new_options the resulting options based on 'base_options' with the
//     change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_options' will be set to 'base_options'.
Status GetColumnFamilyOptionsFromMap(
    const ColumnFamilyOptions& base_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    ColumnFamilyOptions* new_options, bool input_strings_escaped = false,
    bool ignore_unknown_options = false);
    
      // number of bytes that has been written.
  uint64_t bytes_written;
  // number of bytes that has been read.
  uint64_t bytes_read;
    
      // Obtain the name of an operation given its type.
  static const std::string& GetOperationName(OperationType op_type);
    
      // Called once for each group of benchmark runs, gives information about
  // cpu-time and heap memory usage during the benchmark run. If the group
  // of runs contained more than two entries then 'report' contains additional
  // elements representing the mean and standard deviation of those runs.
  // Additionally if this group of runs was the last in a family of benchmarks
  // 'reports' contains additional entries representing the asymptotic
  // complexity and RMS of that benchmark family.
  virtual void ReportRuns(const std::vector<Run>& report) = 0;
    
      // Populate the accumulators.
  for (const Run& run : reports) {
    CHECK_GT(run.complexity_n, 0) << 'Did you forget to call SetComplexityN?';
    n.push_back(run.complexity_n);
    real_time.push_back(run.real_accumulated_time / run.iterations);
    cpu_time.push_back(run.cpu_accumulated_time / run.iterations);
  }
    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    #include 'modules/drivers/canbus/can_comm/message_manager.h'
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(4, 4);
    
    double ObjectExtendedInfo60D::lateral_accel(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 5);
    }
    
    void ObjectGeneralInfo60B::Parse(const std::uint8_t* bytes, int32_t length,
                                 ContiRadar* conti_radar) const {
  int obj_id = object_id(bytes, length);
  auto conti_obs = conti_radar->add_contiobs();
  conti_obs->set_clusterortrack(false);
  conti_obs->set_obstacle_id(obj_id);
  conti_obs->set_longitude_dist(longitude_dist(bytes, length));
  conti_obs->set_lateral_dist(lateral_dist(bytes, length));
  conti_obs->set_longitude_vel(longitude_vel(bytes, length));
  conti_obs->set_lateral_vel(lateral_vel(bytes, length));
  conti_obs->set_rcs(rcs(bytes, length));
  conti_obs->set_dynprop(dynprop(bytes, length));
  double timestamp = apollo::common::time::Clock::NowInSeconds();
  auto header = conti_obs->mutable_header();
  header->CopyFrom(conti_radar->header());
  header->set_timestamp_sec(timestamp);
}
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
    TEST(TestPiecewiseLinearConstraint, add_monotone_inequality_constraint) {
  PiecewiseLinearConstraint constraint(10, 0.1);
  constraint.AddMonotoneInequalityConstraint();
  const auto mat = constraint.inequality_constraint_matrix();
  const auto bd = constraint.inequality_constraint_boundary();
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    bool NodeWithRange::IsVirtual() const { return topo_node_->IsVirtual(); }