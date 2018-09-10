
        
          bool visitUnboundGenericType(UnboundGenericType *ty) {
    if (auto parent = ty->getParent())
      return doIt(parent);
    return false;
  }
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    #include 'llvm/ADT/APInt.h'
#include 'llvm/Support/raw_ostream.h'
    
      // Set the 'os' platform condition.
  if (Target.isMacOSX())
    addPlatformConditionValue(PlatformConditionKind::OS, 'OSX');
  else if (Target.isTvOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'tvOS');
  else if (Target.isWatchOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'watchOS');
  else if (Target.isiOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'iOS');
  else if (Target.isAndroid())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Android');
  else if (Target.isOSLinux())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Linux');
  else if (Target.isOSFreeBSD())
    addPlatformConditionValue(PlatformConditionKind::OS, 'FreeBSD');
  else if (Target.isOSWindows())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Windows');
  else if (Target.isWindowsCygwinEnvironment())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Cygwin');
  else if (Target.isPS4())
    addPlatformConditionValue(PlatformConditionKind::OS, 'PS4');
  else if (Target.isOSHaiku())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Haiku');
  else
    UnsupportedOS = true;
    
    DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
    
    {  OutLines.append(Lines.begin(), Lines.end());
}

    
    /// Determine whether the given word occurring before the given
/// preposition results in a conflict that suppresses preposition
/// splitting.
static bool wordConflictsBeforePreposition(StringRef word,
                                           StringRef preposition) {
  if (camel_case::sameWordIgnoreFirstCase(preposition, 'in') &&
      camel_case::sameWordIgnoreFirstCase(word, 'plug'))
    return true;
    }
    
      static ProcessId Pid = 0;
    
    
    {  memcpy(Value, &uuid, Size);
#else
  uuid_clear(Value);
#endif
}
    
    break_table = GraphemeClusterBreakPropertyTable(unicodeGraphemeBreakPropertyFile)
    
    typedef ScopedPythonPtr<PyObject> ScopedPyObjectPtr;
    
    bool ParseAnyTypeUrl(const string& type_url, string* full_type_name) {
  return ParseAnyTypeUrl(type_url, NULL, full_type_name);
}
    
    void FindAnnotationsOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path,
    std::vector<const GeneratedCodeInfo::Annotation*>* annotations) {
  for (int i = 0; i < info.annotation_size(); ++i) {
    const GeneratedCodeInfo::Annotation* annotation = &info.annotation(i);
    if (annotation->source_file() != source_file ||
        annotation->path_size() != path.size()) {
      continue;
    }
    int node = 0;
    for (; node < path.size(); ++node) {
      if (annotation->path(node) != path[node]) {
        break;
      }
    }
    if (node == path.size()) {
      annotations->push_back(annotation);
    }
  }
}
    
      virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    MapFieldGenerator::MapFieldGenerator(const FieldDescriptor* descriptor,
                                     int fieldOrdinal,
                                     const Options* options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
      WriteGeneratedCodeAttributes(printer);
  printer->Print(
    vars,
    'public static pbr::MessageDescriptor Descriptor {\n'
    '  get { return $descriptor_accessor$; }\n'
    '}\n'
    '\n');
  WriteGeneratedCodeAttributes(printer);
  printer->Print(
    vars,
    'pbr::MessageDescriptor pb::IMessage.Descriptor {\n'
    '  get { return Descriptor; }\n'
    '}\n'
    '\n');
  // CustomOptions property, only for options messages
  if (IsDescriptorOptionMessage(descriptor_)) {
    printer->Print(
      'internal CustomOptions CustomOptions{ get; private set; } = CustomOptions.Empty;\n'
       '\n');
  }
    
    MessageFieldGenerator::MessageFieldGenerator(const FieldDescriptor* descriptor,
                                             int fieldOrdinal,
                                             const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
  variables_['has_property_check'] = name() + '_ != null';
  variables_['has_not_property_check'] = name() + '_ == null';
}
    
    class MessageFieldGenerator : public FieldGeneratorBase {
 public:
  MessageFieldGenerator(const FieldDescriptor* descriptor,
                        int fieldOrdinal,
                        const Options *options);
  ~MessageFieldGenerator();
    }
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    /*
 * Call a function on each element of `inputs', in parallel.
 *
 * If `func' throws an exception, some of the work will not be
 * attempted.
 */
template<class Func, class Item>
void for_each(const std::vector<Item>& inputs, Func func) {
  std::atomic<bool> failed{false};
  std::atomic<size_t> index{0};
    }
    
    using Peephole = ConcatPeephole;
    
    
    {}
    
    void Assembler::b(int32_t offset) {
  EmitIForm(18, uint32_t(offset));
}
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    #ifndef incl_HPHP_CONFIG_H_
#define incl_HPHP_CONFIG_H_
    
    #endif

    
    
    {  void DoReads(int n);
};
    
     public:
  Benchmark()
  : cache_(FLAGS_cache_size >= 0 ? NewLRUCache(FLAGS_cache_size) : nullptr),
    filter_policy_(FLAGS_bloom_bits >= 0
                   ? NewBloomFilterPolicy(FLAGS_bloom_bits)
                   : nullptr),
    db_(nullptr),
    num_(FLAGS_num),
    value_size_(FLAGS_value_size),
    entries_per_batch_(1),
    reads_(FLAGS_reads < 0 ? FLAGS_num : FLAGS_reads),
    heap_counter_(0) {
    std::vector<std::string> files;
    g_env->GetChildren(FLAGS_db, &files);
    for (size_t i = 0; i < files.size(); i++) {
      if (Slice(files[i]).starts_with('heap-')) {
        g_env->DeleteFile(std::string(FLAGS_db) + '/' + files[i]);
      }
    }
    if (!FLAGS_use_existing_db) {
      DestroyDB(FLAGS_db, Options());
    }
  }
    
    
    {  if (s.ok() && current_entries > 0) {
    // Verify that the table is usable
    Iterator* iter = table_cache_->NewIterator(ReadOptions(),
                                               output_number,
                                               current_bytes);
    s = iter->status();
    delete iter;
    if (s.ok()) {
      Log(options_.info_log,
          'Generated table #%llu@%d: %lld keys, %lld bytes',
          (unsigned long long) output_number,
          compact->compaction->level(),
          (unsigned long long) current_entries,
          (unsigned long long) current_bytes);
    }
  }
  return s;
}
    
      // Per level compaction stats.  stats_[level] stores the stats for
  // compactions that produced data for the specified 'level'.
  struct CompactionStats {
    int64_t micros;
    int64_t bytes_read;
    int64_t bytes_written;
    }
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
        const size_t avail = kBlockSize - block_offset_ - kHeaderSize;
    const size_t fragment_length = (left < avail) ? left : avail;
    
    
    {}  // namespace leveldb
    
    Status KafkaTopicsConfigParserPlugin::update(const std::string& source,
                                             const ParserConfig& config) {
  auto topics = config.find(kKafkaTopicParserRootKey);
  if (topics != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(topics->second.doc(), obj);
    data_.add(kKafkaTopicParserRootKey, obj);
  }
  return Status();
}
    
    const std::string LoggerConfigParserPlugin::kLoggerKey{'logger'};
    
    #include <osquery/config.h>
    
    #include 'osquery/config/parsers/prometheus_targets.h'
    
    TEST_F(DecoratorsConfigParserPluginTests, test_decorators_list) {
  // Assume the decorators are disabled.
  Config::get().update(config_data_);
  auto parser = Config::getParser('decorators');
  EXPECT_NE(parser, nullptr);
    }
    
    namespace osquery {
    }
    
    #include 'osquery/core/json.h'
#include 'osquery/tests/test_util.h'
    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchWorker(
    const std::string& exec_path, int argc /* unused */, char** argv) {
  auto worker_pid = ::fork();
  if (worker_pid < 0) {
    return std::shared_ptr<PlatformProcess>();
  } else if (worker_pid == 0) {
    setEnvVar('OSQUERY_WORKER', std::to_string(::getpid()).c_str());
    ::execve(exec_path.c_str(), argv, ::environ);
    }
    }
    
    CREATE_REGISTRY(DistributedPlugin, 'distributed');
    
      for (char* p = scratch_; p < scratch_ + record_num;) {
    // Cast the inotify struct, make shared pointer, and append to contexts.
    auto event = reinterpret_cast<struct inotify_event*>(p);
    if (event->mask & IN_Q_OVERFLOW) {
      // The inotify queue was overflown (try to recieve more events from OS).
      handleOverflow();
    } else if (event->mask & IN_IGNORED) {
      // This inotify watch was removed.
      removeMonitor(event->wd, false);
    } else if (event->mask & IN_MOVE_SELF) {
      // This inotify path was moved, but is still watched.
      removeMonitor(event->wd, true);
    } else if (event->mask & IN_DELETE_SELF) {
      // A file was moved to replace the watched path.
      removeMonitor(event->wd, false);
    } else {
      auto ec = createEventContextFrom(event);
      if (!ec->action.empty()) {
        fire(ec);
      }
    }
    // Continue to iterate
    p += (sizeof(struct inotify_event)) + event->len;
  }
    
      TriggerEvent(real_test_path);
  sub->WaitForEvents(kMaxEventLatency);
    
      void tearDown() override {
    smallest_ever_ += 1;
  }
    
      int num_keys_per_file = 400;
  for (int j = 0; j < 3; j++) {
    // Write several keys.
    const std::string value(10, 'x');
    for (int i = 0; i < num_keys_per_file; i++) {
      char key[100];
      snprintf(key, sizeof(key), 'B%08d%02d', i, j);
      Put(1, key, value);
    }
    Flush(1);
    // Make sure next file is much smaller so automatic compaction will not
    // be triggered.
    num_keys_per_file /= 2;
  }
  dbfull()->TEST_WaitForCompact();
    
    #endif // ROCKSDB_LITE
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
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
    
    
    {
    {
    {} // namespace detail
} // namespace atomics
} // namespace mars_boost
    
    
    {    BOOST_FORCEINLINE bool operator! () const BOOST_NOEXCEPT
    {
        return data[0] == 0 && data[1] == 0;
    }
};
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                         int32_t *const frame_num) = 0;
    
    TEST(EsdCanClientTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::ESD_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
        if (buf.size() != static_cast<size_t>(frame_num)) {
      AERROR_EVERY(100) << 'Receiver buf size [' << buf.size()
                        << '] does not match can_client returned length['
                        << frame_num << '].';
    }
    
      /*
   * @brief get the length of protocol data. The length is usually 8.
   * @return the length of protocol data.
   */
  virtual int32_t GetLength() const;
    
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
    
      // 3. set timer to trigger publish info periodically
  // if sensor_freq == 0, then it is event-triggered publishment.
  // no need for timer.
  if (FLAGS_sensor_freq > 0) {
    const double duration = 1.0 / FLAGS_sensor_freq;
    timer_ = AdapterManager::CreateTimer(
        ros::Duration(duration), &SensorCanbus<SensorType>::OnTimer, this);
  } else {
    data_trigger_running_ = true;
    thread_.reset(new std::thread([this] { DataTrigger(); }));
    if (thread_ == nullptr) {
      AERROR << 'Unable to create data trigger thread.';
      return OnError('Failed to start data trigger thread.');
    }
  }
    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);