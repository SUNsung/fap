
        
        #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16>
internal::ValueArray16<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16) {
  return internal::ValueArray16<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,
      v12, v13, v14, v15, v16);
}
    
    #include <iosfwd>
#include <vector>
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-string.h'
    
    // 5-ary predicate assertion macros.
#define EXPECT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
    
    // FilePath - a class for file and directory pathname manipulation which
// handles platform-specific conventions (like the pathname separator).
// Used for helper functions for naming files in a directory for xml output.
// Except for Set methods, all methods are const or static, which provides an
// 'immutable value object' -- useful for peace of mind.
// A FilePath with a value ending in a path separator ('like/this/') represents
// a directory, otherwise it is assumed to represent a file. In either case,
// it may or may not represent an actual file or directory in the file system.
// Names are NOT checked for syntax correctness -- no checking for illegal
// characters, malformed paths, etc.
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
      // Search the nearest neighbor of part in one vertical direction as defined in
  // search_bottom. It returns the neighbor found that major x overlap with it,
  // or nullptr when not found.
  ColPartition* SearchNNVertical(const bool search_bottom,
                                 const ColPartition* part);
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    //////////////////////////////////////////////////////////////////////
    
    inline TypedValue* APCLocalArray::localCache() const {
  return const_cast<TypedValue*>(
    reinterpret_cast<const TypedValue*>(this + 1)
  );
}
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }
    
    struct ResourceExceededException : FatalErrorException {
  ResourceExceededException(const std::string& msg, const Array& backtrace)
    : FatalErrorException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(ResourceExceededException);
};
    
    
    {    // updates
    if ((sb1.st_mode & S_IFMT) == S_IFDIR) {
      syncdir(fdest, fsrc);
    } else if (sb1.st_size != sb2.st_size ||
               !same(fsrc.c_str(), fdest.c_str())) {
      todelete.insert(fdest);
    }
  }
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key;
         iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n',
            read+1, size/1048576.0, Size(Key(n), Key(kCount))/1048576.0);
    if (size <= initial_size/10) {
      break;
    }
  }
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
    
    {  ASSERT_TRUE(!ParseInternalKey(Slice('bar'), &decoded));
}
    
      fname = InfoLogFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kInfoLogFile, type);
    
      typedef SkipList<const char*, KeyComparator> Table;
    
    
    
    //
// note no include guard, we may include this multiple times:
//
#ifndef BOOST_REGEX_NO_EXTERNAL_TEMPLATES
    
    
#ifndef BOOST_REGEX_ITERATOR_CATEGORY_HPP
#define BOOST_REGEX_ITERATOR_CATEGORY_HPP
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_prefix()
{
   m_has_partial_match = false;
   m_has_found_match = false;
   pstate = re.get_first_state();
   m_presult->set_first(position);
   restart = position;
   match_all_states();
   if(!m_has_found_match && m_has_partial_match && (m_match_flags & match_partial))
   {
      m_has_found_match = true;
      m_presult->set_second(last, 0, false);
      position = last;
      if((m_match_flags & match_posix) == match_posix)
      {
         m_result.maybe_assign(*m_presult);
      }
   }
#ifdef BOOST_REGEX_MATCH_EXTRA
   if(m_has_found_match && (match_extra & m_match_flags))
   {
      //
      // we have a match, reverse the capture information:
      //
      for(unsigned i = 0; i < m_presult->size(); ++i)
      {
         typename sub_match<BidiIterator>::capture_sequence_type & seq = ((*m_presult)[i]).get_captures();
         std::reverse(seq.begin(), seq.end());
      }
   }
#endif
   if(!m_has_found_match)
      position = restart; // reset search postion
#ifdef BOOST_REGEX_RECURSIVE
   m_can_backtrack = true; // reset for further searches
#endif
   return m_has_found_match;
}
    
    template <class BidiIterator, class Allocator, class traits>
inline void perl_matcher<BidiIterator, Allocator, traits>::push_assertion(const re_syntax_base* ps, bool positive)
{
   saved_assertion<BidiIterator>* pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
   --pmp;
   if(pmp < m_stack_base)
   {
      extend_stack();
      pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
      --pmp;
   }
   (void) new (pmp)saved_assertion<BidiIterator>(positive, ps, position);
   m_backup_state = pmp;
}
    
    
namespace boost{
    }
    
    BENCHMARK(BENCHFUN(zzInitRNG)) {
  srand(seed);
}
    
    int main(int argc, char** argv) {
  folly::init(&argc, &argv);
  CHECK_GT(argc, 2);
  folly::compareBenchmarkResults(argv[1], argv[2]);
  return 0;
}

    
    template <class RNG>
struct SeedData {
  SeedData() {
    Random::secureRandom(seedData.data(), seedData.size() * sizeof(uint32_t));
  }
    }
    
      // Test negative values
  // When going to coarser grained types these should be rounded up towards 0.
  ts.tv_sec = -5;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-4999876544, to<nanoseconds>(ts).count());
  EXPECT_EQ(-4999876544, duration_cast<nanoseconds>(-5s + 123456ns).count());
  EXPECT_EQ(-4999876, to<microseconds>(ts).count());
  EXPECT_EQ(-4999876, duration_cast<microseconds>(-5s + 123456ns).count());
  EXPECT_EQ(-4999, to<milliseconds>(ts).count());
  EXPECT_EQ(-4999, duration_cast<milliseconds>(-5s + 123456ns).count());
  EXPECT_EQ(-4s, to<seconds>(ts));
  EXPECT_EQ(-4, duration_cast<seconds>(-5s + 123456ns).count());
  ts.tv_sec = -7200;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-1h, to<hours>(ts));
  EXPECT_EQ(
      -1,
      duration_cast<hours>(seconds{ts.tv_sec} + nanoseconds{ts.tv_nsec})
          .count());
  ts.tv_sec = -7000;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-1h, to<hours>(ts));
  EXPECT_EQ(
      -1,
      duration_cast<hours>(seconds{ts.tv_sec} + nanoseconds{ts.tv_nsec})
          .count());
  ts.tv_sec = -7201;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-2h, to<hours>(ts));
  EXPECT_EQ(
      -2,
      duration_cast<hours>(seconds{ts.tv_sec} + nanoseconds{ts.tv_nsec})
          .count());
    
      /**
   * @brief Create a pointer to a specified brand of CAN client. The brand is
   *        set in the parameter.
   * @param parameter The parameter to create the CAN client.
   * @return A pointer to the created CAN client.
   */
  std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
    
    bool EsdCanClient::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  }
  port_ = parameter.channel_id();
  return true;
}
    
    
    {  is_started_ = true;
  return ErrorCode::OK;
}
    
    #include <memory>
#include <set>
    
      /**
   * @brief Reset some consecutive bits starting from a specified position with
   *        a certain length of another one-byte unsigned integer.
   * @param value The one-byte unsigned integer whose certain bits are used
   *        to set this Byte.
   * @param start_pos The starting position (from the lowest) of the bits.
   * @param length The length of the consecutive bits.
   */
  void set_value(const uint8_t value, const int32_t start_pos,
                 const int32_t length);
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    // data file
DEFINE_string(sensor_conf_file, '', 'Sensor conf file');