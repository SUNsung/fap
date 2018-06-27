
        
        leveldb_iterator_t* leveldb_create_iterator(
    leveldb_t* db,
    const leveldb_readoptions_t* options) {
  leveldb_iterator_t* result = new leveldb_iterator_t;
  result->rep = db->rep->NewIterator(options->rep);
  return result;
}
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
    // Called on every log record (each one of which is a WriteBatch)
// found in a kDescriptorFile.
static void VersionEditPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  VersionEdit edit;
  Status s = edit.DecodeFrom(record);
  if (!s.ok()) {
    r += s.ToString();
    r.push_back('\n');
  } else {
    r += edit.DebugString();
  }
  dst->Append(r);
}
    
    // Make the CURRENT file point to the descriptor file with the
// specified number.
extern Status SetCurrentFile(Env* env, const std::string& dbname,
                             uint64_t descriptor_number);
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
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
    
    inline
static void DBSynchronize(kyotocabinet::TreeDB* db_)
{
  // Synchronize will flush writes to disk
  if (!db_->synchronize()) {
    fprintf(stderr, 'synchronize error: %s\n', db_->error().name());
  }
}
    
    
    {  // Changes *key to a short string >= *key.
  // Simple comparator implementations may return with *key unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortSuccessor(std::string* key) const = 0;
};
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    #include <folly/Format.h>
    
    constexpr int Vframe::Top;
    
      if (!ret || numa_num_nodes <= 1) return;
    
      size_t available() const {
    return m_size - (m_frontier - m_base);
  }
    
    #include <stdio.h>
#include <cxxabi.h>
#include <vector>
#include <assert.h>
#include <iomanip>
#include <sys/stat.h>
    
      resourceSize = SizeofResource(moduleHandle, resourceInfo);
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
      switch (inst.op) {
#define O(name, ...)    \
    case Vinstr::name:  \
      return simplify(env, inst.name##_, b, i); \
    }
    
    /// Create a new modifiable buffer that represents the given POD vector.
/**
 * @returns A mutable_buffers_1 value equivalent to:
 * @code mutable_buffers_1(
 *     data.size() ? &data[0] : 0,
 *     data.size() * sizeof(PodType)); @endcode
 *
 * @note The buffer is invalidated by any vector operation that would also
 * invalidate iterators.
 */
template <typename PodType, typename Allocator>
inline mutable_buffers_1 buffer(std::vector<PodType, Allocator>& data)
{
  return mutable_buffers_1(
      mutable_buffer(data.size() ? &data[0] : 0, data.size() * sizeof(PodType)
#if defined(BOOST_ASIO_ENABLE_BUFFER_DEBUGGING)
        , detail::buffer_debug_check<
            typename std::vector<PodType, Allocator>::iterator
          >(data.begin())
#endif // BOOST_ASIO_ENABLE_BUFFER_DEBUGGING
        ));
}
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    #ifndef BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #include <boost/asio/detail/pop_options.hpp>
    
    class ptime;
    
    #include <boost/asio/detail/config.hpp>
    
    // Calls to asio_handler_invoke must be made from a namespace that does not
// contain overloads of this function. The boost_asio_handler_invoke_helpers
// namespace is defined here for that purpose.
namespace boost_asio_handler_invoke_helpers {
    }
    
    TEST_F(OrderingTest, ordering) {
  EXPECT_EQ(-1, int(ordering::lt));
  EXPECT_EQ(0, int(ordering::eq));
  EXPECT_EQ(+1, int(ordering::gt));
}
    
    class SingletonVault {
 public:
  enum class Type {
    Strict, // Singletons can't be created before registrationComplete()
    Relaxed, // Singletons can be created before registrationComplete()
  };
    }
    
      ~HazptrSWMRSet() {
    auto p = head_.load();
    while (p) {
      auto next = p->next_.load();
      delete p;
      p = next;
    }
  }
    
    #include <folly/portability/Windows.h>
    
      BlockingQueueAddResult add(T item) override {
    queue_.enqueue(std::move(item));
    return sem_.post();
  }
    
    #include <boost/container/flat_map.hpp>
#include <boost/operators.hpp>
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    DEFINE_bool(benchmark_counters_tabular, false,
            'Whether to use tabular format when printing user counters to '
            'the console.  Valid values: 'true'/'yes'/1, 'false'/'no'/0.'
            'Defaults to false.');
    
    
    {  fflush(stdout);
  // Restores the text color.
  SetConsoleTextAttribute(stdout_handle, old_color_attrs);
#else
  const char* color_code = GetPlatformColorCode(color);
  if (color_code) out << FormatString('\033[0;3%sm', color_code);
  out << FormatString(fmt, args) << '\033[m';
#endif
}
    
      // When def_optional is true, it's OK to not have a '=value' part.
  if (def_optional && (flag_end[0] == '\0')) return flag_end;
    
    #define VLOG(x)                                                               \
  (::benchmark::internal::GetLogInstanceForLevel(x) << '-- LOG(' << x << '):' \
                                                                         ' ')