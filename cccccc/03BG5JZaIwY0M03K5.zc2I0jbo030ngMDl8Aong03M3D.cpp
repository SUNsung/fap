
        
        
  // Note that if file_size is zero, the file has been deleted and
  // should not be added to the manifest.
  int level = 0;
  if (s.ok() && meta.file_size > 0) {
    const Slice min_user_key = meta.smallest.user_key();
    const Slice max_user_key = meta.largest.user_key();
    if (base != nullptr) {
      level = base->PickLevelForMemTableOutput(min_user_key, max_user_key);
    }
    edit->AddFile(level, meta.number, meta.file_size,
                  meta.smallest, meta.largest);
  }
    
    TEST(DBTest, ComparatorCheck) {
  class NewComparator : public Comparator {
   public:
    virtual const char* Name() const { return 'leveldb.NewComparator'; }
    virtual int Compare(const Slice& a, const Slice& b) const {
      return BytewiseComparator()->Compare(a, b);
    }
    virtual void FindShortestSeparator(std::string* s, const Slice& l) const {
      BytewiseComparator()->FindShortestSeparator(s, l);
    }
    virtual void FindShortSuccessor(std::string* key) const {
      BytewiseComparator()->FindShortSuccessor(key);
    }
  };
  NewComparator cmp;
  Options new_options = CurrentOptions();
  new_options.comparator = &cmp;
  Status s = TryReopen(&new_options);
  ASSERT_TRUE(!s.ok());
  ASSERT_TRUE(s.ToString().find('comparator') != std::string::npos)
      << s.ToString();
}
    
    enum FileType {
  kLogFile,
  kDBLockFile,
  kTableFile,
  kDescriptorFile,
  kCurrentFile,
  kTempFile,
  kInfoLogFile  // Either the current one, or an old one
};
    
    TEST(LogTest, UnexpectedLastType) {
  Write('foo');
  SetByte(6, kLastType);
  FixChecksum(0, 3);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('missing start'));
}
    
    
    {  SkipList<Key, Comparator>::Iterator iter(&list);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToFirst();
  ASSERT_TRUE(!iter.Valid());
  iter.Seek(100);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToLast();
  ASSERT_TRUE(!iter.Valid());
}
    
      std::string uploadHash =
      (uploadFile.size() > FLAGS_read_max)
          ? '-1'
          : hashFromFile(HashType::HASH_TYPE_SHA256, uploadPath.string());
  if (uploadHash == '-1') {
    VLOG(1)
        << 'Archive file size exceeds read max, skipping integrity computation';
  }
  updateCarveValue(carveGuid_, 'sha256', uploadHash);
    
    class CarverTests : public testing::Test {
 public:
  CarverTests() {
    fs::create_directories(fs::temp_directory_path() / 'files_to_carve/');
    writeTextFile(fs::temp_directory_path() / 'files_to_carve/secrets.txt',
                  'This is a message I'd rather no one saw.');
    writeTextFile(fs::temp_directory_path() / 'files_to_carve/evil.exe',
                  'MZP\x00\x02\x00\x00\x00\x04\x00\x0f\x00\xff\xff');
    }
    }
    
      /// Update the set of decorators for a given source.
  void updateDecorations(const std::string& source, const JSON& doc);
    
    namespace osquery {
    }
    
    /// Root key to retrieve Kafka topic configurations.
const std::string kKafkaTopicParserRootKey('kafka_topics');
    
    
    {REGISTER_INTERNAL(OptionsConfigParserPlugin, 'config_parser', 'options');
}

    
    int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(4, 4);
    
    double ObjectExtendedInfo60D::object_length(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {
    {
    {}  // namespace conti_radar
}  // namespace drivers
}  // namespace apollo

    
    namespace apollo {
namespace planning {
    }
    }
    
    TEST(TestPiecewiseLinearConstraint, add_derivative_boundary) {
  PiecewiseLinearConstraint constraint(10, 0.1);
  std::vector<uint32_t> index_list;
  std::vector<double> lower_bound;
  std::vector<double> upper_bound;
  for (uint32_t i = 0; i < 10; ++i) {
    index_list.push_back(i);
    lower_bound.push_back(1.0);
    upper_bound.push_back(100.0);
  }
    }
    
    
    {    auto ka2 = std::move(ka);
    EXPECT_FALSE(ka);
    EXPECT_TRUE(ka2);
    EXPECT_EQ(&exec, ka2.get());
    EXPECT_EQ(1, exec.refCount);
  }
    
    #include <stdexcept>
    
      virtual uint8_t getNumPriorities() const {
    return 1;
  }
    
    TEST(Conv, timespecToStdChrono) {
  struct timespec ts;
    }
    
    /// Wrapper around the makeCompressionCounterHandler() extension point.
class CompressionCounter {
 public:
  CompressionCounter() {}
  CompressionCounter(
      folly::io::CodecType codecType,
      folly::StringPiece codecName,
      folly::Optional<int> level,
      CompressionCounterKey key,
      CompressionCounterType counterType) {
    initialize_ = [=]() {
      return makeCompressionCounterHandler(
          codecType, codecName, level, key, counterType);
    };
    DCHECK(!initialize_.hasAllocatedMemory());
  }
    }
    
    #include <zlib.h>
    
    
    {      if (equiv == cpu) {
        // we only want to count the equiv classes once, so we do it when
        // we first encounter them
        while (numCachesByLevel.size() <= level) {
          numCachesByLevel.push_back(0);
        }
        numCachesByLevel[level]++;
      }
    }