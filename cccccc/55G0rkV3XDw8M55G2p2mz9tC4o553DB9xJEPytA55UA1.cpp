
        
        void leveldb_put(
    leveldb_t* db,
    const leveldb_writeoptions_t* options,
    const char* key, size_t keylen,
    const char* val, size_t vallen,
    char** errptr) {
  SaveError(errptr,
            db->rep->Put(options->rep, Slice(key, keylen), Slice(val, vallen)));
}
    
      virtual void Next();
  virtual void Prev();
  virtual void Seek(const Slice& target);
  virtual void SeekToFirst();
  virtual void SeekToLast();
    
    // Value types encoded as the last component of internal keys.
// DO NOT CHANGE THESE ENUM VALUES: they are embedded in the on-disk
// data structures.
enum ValueType {
  kTypeDeletion = 0x0,
  kTypeValue = 0x1
};
// kValueTypeForSeek defines the ValueType that should be passed when
// constructing a ParsedInternalKey object for seeking to a particular
// sequence number (since we sort sequence numbers in decreasing order
// and the value type is embedded as the low 8 bits in the sequence
// number in internal keys, we need to use the highest-numbered
// ValueType, not the lowest).
static const ValueType kValueTypeForSeek = kTypeValue;
    
    #include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      int Find(const char* key) {
    InternalKey target(key, 100, kTypeValue);
    InternalKeyComparator cmp(BytewiseComparator());
    return FindFile(cmp, files_, target.Encode());
  }
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(),contents.size()-1));
  ASSERT_EQ('Put(foo, bar)@200'
            'ParseError()',
            PrintContents(&batch));
}
    
      void PrintHeader() {
    const int kKeySize = 16;
    PrintEnvironment();
    fprintf(stdout, 'Keys:       %d bytes each\n', kKeySize);
    fprintf(stdout, 'Values:     %d bytes each (%d bytes after compression)\n',
            FLAGS_value_size,
            static_cast<int>(FLAGS_value_size * FLAGS_compression_ratio + 0.5));
    fprintf(stdout, 'Entries:    %d\n', num_);
    fprintf(stdout, 'RawSize:    %.1f MB (estimated)\n',
            ((static_cast<int64_t>(kKeySize + FLAGS_value_size) * num_)
             / 1048576.0));
    fprintf(stdout, 'FileSize:   %.1f MB (estimated)\n',
            (((kKeySize + FLAGS_value_size * FLAGS_compression_ratio) * num_)
             / 1048576.0));
    PrintWarnings();
    fprintf(stdout, '------------------------------------------------\n');
  }
    
      // The name of the comparator.  Used to check for comparator
  // mismatches (i.e., a DB created with one comparator is
  // accessed using a different comparator.
  //
  // The client of this package should switch to a new name whenever
  // the comparator implementation changes in a way that will cause
  // the relative ordering of any two keys to change.
  //
  // Names starting with 'leveldb.' are reserved and should not be used
  // by any clients of this package.
  virtual const char* Name() const = 0;
    
    
    {}  // namespace testing
    
    # if GTEST_HAS_COMBINE
// Combine() allows the user to combine two or more sequences to produce
// values of a Cartesian product of those sequences' elements.
//
// Synopsis:
// Combine(gen1, gen2, ..., genN)
//   - returns a generator producing sequences with elements coming from
//     the Cartesian product of elements from the sequences generated by
//     gen1, gen2, ..., genN. The sequence elements will have a type of
//     tuple<T1, T2, ..., TN> where T1, T2, ..., TN are the types
//     of elements from sequences produces by gen1, gen2, ..., genN.
//
// Combine can have up to $maxtuple arguments. This number is currently limited
// by the maximum number of elements in the tuple implementation used by Google
// Test.
//
// Example:
//
// This will instantiate tests in test case AnimalTest each one with
// the parameter values tuple('cat', BLACK), tuple('cat', WHITE),
// tuple('dog', BLACK), and tuple('dog', WHITE):
//
// enum Color { BLACK, GRAY, WHITE };
// class AnimalTest
//     : public testing::TestWithParam<tuple<const char*, Color> > {...};
//
// TEST_P(AnimalTest, AnimalLooksNice) {...}
//
// INSTANTIATE_TEST_CASE_P(AnimalVariations, AnimalTest,
//                         Combine(Values('cat', 'dog'),
//                                 Values(BLACK, WHITE)));
//
// This will instantiate tests in FlagDependentTest with all variations of two
// Boolean flags:
//
// class FlagDependentTest
//     : public testing::TestWithParam<tuple<bool, bool> > {
//   virtual void SetUp() {
//     // Assigns external_flag_1 and external_flag_2 values from the tuple.
//     tie(external_flag_1, external_flag_2) = GetParam();
//   }
// };
//
// TEST_P(FlagDependentTest, TestFeature1) {
//   // Test your code using external_flag_1 and external_flag_2 here.
// }
// INSTANTIATE_TEST_CASE_P(TwoBoolSequence, FlagDependentTest,
//                         Combine(Bool(), Bool()));
//
$range i 2..maxtuple
$for i [[
$range j 1..i
    
    // The variables defined in the type-parameterized test macros are
// static as typically these macros are used in a .h file that can be
// #included in multiple translation units linked together.
# define TYPED_TEST_CASE_P(CaseName) \
  static ::testing::internal::TypedTestCasePState \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName)
    
     private:
  // A string containing a description of the outcome of the last death test.
  static std::string last_death_test_message_;
    
     private:
  class Iterator : public ParamIteratorInterface<ParamType> {
   public:
    Iterator(const ParamGeneratorInterface<ParamType>* base,
      const ParamGenerator<T1>& g1,
      const typename ParamGenerator<T1>::iterator& current1,
      const ParamGenerator<T2>& g2,
      const typename ParamGenerator<T2>::iterator& current2,
      const ParamGenerator<T3>& g3,
      const typename ParamGenerator<T3>::iterator& current3,
      const ParamGenerator<T4>& g4,
      const typename ParamGenerator<T4>::iterator& current4,
      const ParamGenerator<T5>& g5,
      const typename ParamGenerator<T5>::iterator& current5,
      const ParamGenerator<T6>& g6,
      const typename ParamGenerator<T6>::iterator& current6,
      const ParamGenerator<T7>& g7,
      const typename ParamGenerator<T7>::iterator& current7,
      const ParamGenerator<T8>& g8,
      const typename ParamGenerator<T8>::iterator& current8,
      const ParamGenerator<T9>& g9,
      const typename ParamGenerator<T9>::iterator& current9,
      const ParamGenerator<T10>& g10,
      const typename ParamGenerator<T10>::iterator& current10)
        : base_(base),
          begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
          begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
          begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
          begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
          begin5_(g5.begin()), end5_(g5.end()), current5_(current5),
          begin6_(g6.begin()), end6_(g6.end()), current6_(current6),
          begin7_(g7.begin()), end7_(g7.end()), current7_(current7),
          begin8_(g8.begin()), end8_(g8.end()), current8_(current8),
          begin9_(g9.begin()), end9_(g9.end()), current9_(current9),
          begin10_(g10.begin()), end10_(g10.end()), current10_(current10)    {
      ComputeCurrentValue();
    }
    virtual ~Iterator() {}
    }
    
    ]]
      ComputeCurrentValue();
    }
    virtual ParamIteratorInterface<ParamType>* Clone() const {
      return new Iterator(*this);
    }
    virtual const ParamType* Current() const { return &current_value_; }
    virtual bool Equals(const ParamIteratorInterface<ParamType>& other) const {
      // Having the same base generator guarantees that the other
      // iterator is of the same type and we can downcast.
      GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
          << 'The program attempted to compare iterators '
          << 'from different generators.' << std::endl;
      const Iterator* typed_other =
          CheckedDowncastToActualType<const Iterator>(&other);
      // We must report iterators equal if they both point beyond their
      // respective ranges. That can happen in a variety of fashions,
      // so we have to consult AtEnd().
      return (AtEnd() && typed_other->AtEnd()) ||
         ($for j  && [[
    
    # ifdef __BORLANDC__
inline int IsATTY(int fd) { return isatty(fd); }
inline int StrCaseCmp(const char* s1, const char* s2) {
  return stricmp(s1, s2);
}
inline char* StrDup(const char* src) { return strdup(src); }
# else  // !__BORLANDC__
#  if GTEST_OS_WINDOWS_MOBILE
inline int IsATTY(int /* fd */) { return 0; }
#  else
inline int IsATTY(int fd) { return _isatty(fd); }
#  endif  // GTEST_OS_WINDOWS_MOBILE
inline int StrCaseCmp(const char* s1, const char* s2) {
  return _stricmp(s1, s2);
}
inline char* StrDup(const char* src) { return _strdup(src); }
# endif  // __BORLANDC__
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    
]]
    
    #include <boost/lexical_cast.hpp>
    
      forwarder_ = std::make_shared<FirehoseLogForwarder>(
      'aws_firehose', FLAGS_aws_firehose_period, 500);
  Status s = forwarder_->setUp();
  if (!s.ok()) {
    LOG(ERROR) << 'Error initializing Firehose logger: ' << s.getMessage();
    return s;
  }
    
            HANDLE event = CreateEvent(0, 0, 0, 0);
        IM_ASSERT(event != NULL);
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('Dear ImGui DirectX10 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }