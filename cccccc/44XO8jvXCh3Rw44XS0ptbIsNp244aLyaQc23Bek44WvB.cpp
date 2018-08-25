
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
    bool LangOptions::
checkPlatformCondition(PlatformConditionKind Kind, StringRef Value) const {
  // Check a special case that 'macOS' is an alias of 'OSX'.
  if (Kind == PlatformConditionKind::OS && Value == 'macOS')
    return checkPlatformCondition(Kind, 'OSX');
    }
    
    
    {    // If there is a repeated letter at the back, drop that second
    // instance of that letter and try again.
    unsigned count = possibleVerb.size();
    if (possibleVerb[count-1] == possibleVerb[count-2] &&
        getPartOfSpeech(possibleVerb.substr(0, count-1)) == PartOfSpeech::Verb)
      return PartOfSpeech::Gerund;
  }
    
    #include 'swift/Basic/TaskQueue.h'
    
    // HACK: Allow support for many newer emoji by overriding behavior of ZWJ and
// emoji modifiers. This does not make the breaks correct for any version of
// Unicode, but shifts the ways in which it is incorrect to be less harmful.
//
// TODO: Remove this hack and reevaluate whether we should have any static
// notion of what a grapheme is.
//
// Returns true if lhs and rhs shouldn't be considered as having a grapheme
// break between them. That is, whether we're overriding the behavior of the
// hard coded Unicode 8 rules surrounding ZWJ and emoji modifiers.
static inline bool graphemeBreakOverride(llvm::UTF32 lhs, llvm::UTF32 rhs) {
  return lhs == 0x200D || (rhs >= 0x1F3FB && rhs <= 0x1F3FF);
}
    
    
    {}%
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
    #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    NwMenuModel::NwMenuModel(Delegate* delegate) : SimpleMenuModel(delegate) {
}
    
    
    {      }
      keyval = gdk_keyval_from_name(key.c_str());
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.destroy', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjDestroyFunction);
};
    
        // Lazy initialize screen event listeners until first call
    base::LazyInstance<NwScreenDisplayObserver>::Leaky
      g_display_observer = LAZY_INSTANCE_INITIALIZER;
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenStopMonitorFunction);
  };
    
    void GeneratorContext::ListParsedFiles(
    std::vector<const FileDescriptor*>* output) {
  GOOGLE_LOG(FATAL) << 'This GeneratorContext does not support ListParsedFiles';
}
    
    #include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/stubs/strutil.h>
#include <google/protobuf/stubs/substitute.h>
    
    // Requires:
//   descriptor != NULL
//
// Returns:
//   The namespace to use for given file descriptor.
string LIBPROTOC_EXPORT GetFileNamespace(const FileDescriptor* descriptor);
    
    class PrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  PrimitiveFieldGenerator(const FieldDescriptor* descriptor,
                          int fieldOrdinal,
                          const Options *options);
  ~PrimitiveFieldGenerator();
    }
    
    #include 'port/port.h'
#include 'rocksdb/cache.h'
#include 'rocksdb/db.h'
#include 'rocksdb/env.h'
#include 'util/gflags_compat.h'
#include 'util/mutexlock.h'
#include 'util/random.h'
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
  using DB::MultiGet;
  virtual std::vector<Status> MultiGet(
      const ReadOptions& options,
      const std::vector<ColumnFamilyHandle*>&,
      const std::vector<Slice>& keys, std::vector<std::string>* values)
    override;
    
    class SkipEvenFilterFactory : public CompactionFilterFactory {
 public:
  virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context) override {
    if (context.is_manual_compaction) {
      return std::unique_ptr<CompactionFilter>(new SkipEvenFilter());
    } else {
      return std::unique_ptr<CompactionFilter>(nullptr);
    }
  }
    }
    
    Status WriteBatchBase::DeleteRange(ColumnFamilyHandle* column_family,
                                   const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(column_family, begin_key_slice, end_key_slice);
}
    
      // these three metods are querying the state of the WriteController
  bool IsStopped() const;
  bool NeedsDelay() const { return total_delayed_.load() > 0; }
  bool NeedSpeedupCompaction() const {
    return IsStopped() || NeedsDelay() || total_compaction_pressure_ > 0;
  }
  // return how many microseconds the caller needs to sleep after the call
  // num_bytes: how many number of bytes to put into the DB.
  // Prerequisite: DB mutex held.
  uint64_t GetDelay(Env* env, uint64_t num_bytes);
  void set_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    } else if (write_rate > max_delayed_write_rate()) {
      write_rate = max_delayed_write_rate();
    }
    delayed_write_rate_ = write_rate;
  }
    
          // Print the message
      if (p < limit) {
        va_list backup_ap;
        va_copy(backup_ap, ap);
        p += vsnprintf(p, limit - p, format, backup_ap);
        va_end(backup_ap);
      }
    
    #include <memory>
#include <string>
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
      void SendThreadFunc() {
    using common::time::Clock;
    using common::time::AsInt64;
    using common::time::micros;
    using common::ErrorCode;
    AINFO << 'Send thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    std::vector<CanFrame> frames;
    frames.resize(MAX_CAN_SEND_FRAME_LEN);
    }
    
    template <typename SensorType>
void CanReceiver<SensorType>::Stop() {
  if (IsRunning()) {
    AINFO << 'Stopping can client receiver ...';
    is_running_ = false;
    if (thread_ != nullptr && thread_->joinable()) {
      thread_->join();
    }
    thread_.reset();
  } else {
    AINFO << 'Can client receiver is not running.';
  }
  AINFO << 'Can client receiver stopped [ok].';
}
    
      /*
   * @brief parse received data
   * @param bytes a pointer to the input bytes
   * @param length the length of the input bytes
   * @param sensor_data the parsed sensor_data
   */
  virtual void Parse(const uint8_t *bytes, int32_t length,
                     SensorType *sensor_data) const;
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);