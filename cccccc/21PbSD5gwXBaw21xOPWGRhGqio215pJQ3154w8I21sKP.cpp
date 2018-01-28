inline bool ParseInternalKey(const Slice& internal_key,
                             ParsedInternalKey* result) {
  const size_t n = internal_key.size();
  if (n < 8) return false;
  uint64_t num = DecodeFixed64(internal_key.data() + n - 8);
  unsigned char c = num & 0xff;
  result->sequence = num >> 8;
  result->type = static_cast<ValueType>(c);
  result->user_key = Slice(internal_key.data(), n - 8);
  return (c <= static_cast<unsigned char>(kTypeValue));
}
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
extern std::string TempFileName(const std::string& dbname, uint64_t number);
    
      std::string const dbname_;
  Env* const env_;
  InternalKeyComparator const icmp_;
  InternalFilterPolicy const ipolicy_;
  Options const options_;
  bool owns_info_log_;
  bool owns_cache_;
  TableCache* table_cache_;
  VersionEdit edit_;
    
      // Evict any entry for the specified file number
  void Evict(uint64_t file_number);
    
    void VersionEdit::Clear() {
  comparator_.clear();
  log_number_ = 0;
  prev_log_number_ = 0;
  last_sequence_ = 0;
  next_file_number_ = 0;
  has_comparator_ = false;
  has_log_number_ = false;
  has_prev_log_number_ = false;
  has_next_file_number_ = false;
  has_last_sequence_ = false;
  deleted_files_.clear();
  new_files_.clear();
}
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
      void Add(const char* smallest, const char* largest,
           SequenceNumber smallest_seq = 100,
           SequenceNumber largest_seq = 100) {
    FileMetaData* f = new FileMetaData;
    f->number = files_.size() + 1;
    f->smallest = InternalKey(smallest, smallest_seq, kTypeValue);
    f->largest = InternalKey(largest, largest_seq, kTypeValue);
    files_.push_back(f);
  }
    
    TEST(WriteBatchTest, Append) {
  WriteBatch b1, b2;
  WriteBatchInternal::SetSequence(&b1, 200);
  WriteBatchInternal::SetSequence(&b2, 300);
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('',
            PrintContents(&b1));
  b2.Put('a', 'va');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200',
            PrintContents(&b1));
  b2.Clear();
  b2.Put('b', 'vb');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@201',
            PrintContents(&b1));
  b2.Delete('foo');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@202'
            'Put(b, vb)@201'
            'Delete(foo)@203',
            PrintContents(&b1));
}
    
    namespace leveldb {
    }
    
    static int kImplVersion = -1;  // -1 means 'Unspecified by compiler flags'.
    
      // This is the top-level C++ Message object that owns the whole
  // proto tree.  Every Python RepeatedScalarContainer holds a
  // reference to it in order to keep it alive as long as there's a
  // Python object that references any part of the tree.
  shared_ptr<Message> owner;
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    #include <string>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
      // Gets the outcome of the test part.
  Type type() const { return type_; }
    
    // Suppresses MSVC warnings 4072 (unreachable code) for the code following
// statement if it returns or throws (or doesn't return or throw in some
// situations).
#define GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement) \
  if (::testing::internal::AlwaysTrue()) { statement; }
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_

    
    // The maximum number a BiggestInt can represent.  This definition
// works no matter BiggestInt is represented in one's complement or
// two's complement.
//
// We cannot rely on numeric_limits in STL, as __int64 and long long
// are not part of standard C++ and numeric_limits doesn't need to be
// defined for them.
const BiggestInt kMaxBiggestInt =
    ~(static_cast<BiggestInt>(1) << (8*sizeof(BiggestInt) - 1));
    
      // Try to divide n by every odd number i, starting from 3
  for (int i = 3; ; i += 2) {
    // We only have to try i up to the squre root of n
    if (i > n/i) break;
    }
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }