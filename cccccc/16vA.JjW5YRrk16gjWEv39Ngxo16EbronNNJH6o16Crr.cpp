
        
        std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    Github Links:
    
    **Code**
    
    class AutoCompactTest {
 public:
  std::string dbname_;
  Cache* tiny_cache_;
  Options options_;
  DB* db_;
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
std::string CurrentFileName(const std::string& dbname);
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    TEST(LogTest, Fragmentation) {
  Write('small');
  Write(BigString('medium', 50000));
  Write(BigString('large', 100000));
  ASSERT_EQ('small', Read());
  ASSERT_EQ(BigString('medium', 50000), Read());
  ASSERT_EQ(BigString('large', 100000), Read());
  ASSERT_EQ('EOF', Read());
}
    
    
    {    if (counter > 0 && s.ok()) {
      std::string orig = TableFileName(dbname_, t.meta.number);
      s = env_->RenameFile(copy, orig);
      if (s.ok()) {
        Log(options_.info_log, 'Table #%llu: %d entries repaired',
            (unsigned long long) t.meta.number, counter);
        tables_.push_back(t);
      }
    }
    if (!s.ok()) {
      env_->DeleteFile(copy);
    }
  }
    
        // create string from std::string
    std::string s_stdstring = 'The quick brown fox jumps over the lazy dog.';
    json j_stdstring(s_stdstring);
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    
    {} // namespace folly

    
    #include <folly/Range.h>
    
    //////////////////////////////////////////////////////////////////////
    
    #ifndef FOLLY_URI_H_
#error This file may only be included from folly/Uri.h
#endif
    
      struct timespec ts;
  if (!std::is_same<decltype(ts.tv_sec), int64_t>::value) {
    LOG(INFO) << 'skipping most overflow tests: time_t is not int64_t';
  } else {
    // Check for overflow converting from uint64_t seconds to time_t
    using sec_u64 = duration<uint64_t>;
    ts = to<struct timespec>(sec_u64(9223372036854775807ULL));
    EXPECT_EQ(ts.tv_sec, 9223372036854775807ULL);
    EXPECT_EQ(ts.tv_nsec, 0);
    }
    
      void add_external(BasePtr* res, int64_t c = 0) const {
    assert(res);
    CountedDetail::inc_shared_count(res, EXTERNAL_OFFSET + c);
  }
  void release_external(PackedPtr& res, int64_t c = 0) const {
    if (!res.get()) {
      return;
    }
    int64_t count = get_local_count(res) + c;
    int64_t diff = EXTERNAL_OFFSET - count;
    assert(diff >= 0);
    CountedDetail::template release_shared<T>(res.get(), diff);
  }
  PackedPtr get_newptr(const SharedPtr& n) const {
    BasePtr* newval;
    unsigned count = 0;
    if (!n) {
      newval = nullptr;
    } else {
      newval = CountedDetail::get_counted_base(n);
      if (n.get() != CountedDetail::template get_shared_ptr<T>(newval)) {
        // This is an aliased sharedptr.  Make an un-aliased one
        // by wrapping in *another* shared_ptr.
        auto data = CountedDetail::template make_ptr<SharedPtr>(n);
        newval = CountedDetail::get_counted_base(data);
        count = ALIASED_PTR;
        // (add external must happen before data goes out of scope)
        add_external(newval);
      } else {
        add_external(newval);
      }
    }
    }
    
    
    {} // namespace folly
