
        
        struct Options;
struct FileMetaData;
    
    void leveldb_writebatch_iterate(
    leveldb_writebatch_t* b,
    void* state,
    void (*put)(void*, const char* k, size_t klen, const char* v, size_t vlen),
    void (*deleted)(void*, const char* k, size_t klen)) {
  class H : public WriteBatch::Handler {
   public:
    void* state_;
    void (*put_)(void*, const char* k, size_t klen, const char* v, size_t vlen);
    void (*deleted_)(void*, const char* k, size_t klen);
    virtual void Put(const Slice& key, const Slice& value) {
      (*put_)(state_, key.data(), key.size(), value.data(), value.size());
    }
    virtual void Delete(const Slice& key) {
      (*deleted_)(state_, key.data(), key.size());
    }
  };
  H handler;
  handler.state_ = state;
  handler.put_ = put;
  handler.deleted_ = deleted;
  b->rep.Iterate(&handler);
}
    
    
    {}  // namespace leveldb
    
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
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
        const char* benchmarks = FLAGS_benchmarks;
    while (benchmarks != NULL) {
      const char* sep = strchr(benchmarks, ',');
      Slice name;
      if (sep == NULL) {
        name = benchmarks;
        benchmarks = NULL;
      } else {
        name = Slice(benchmarks, sep - benchmarks);
        benchmarks = sep + 1;
      }
    }
    
    
    {    done_++;
    if (done_ >= next_report_) {
      if      (next_report_ < 1000)   next_report_ += 100;
      else if (next_report_ < 5000)   next_report_ += 500;
      else if (next_report_ < 10000)  next_report_ += 1000;
      else if (next_report_ < 50000)  next_report_ += 5000;
      else if (next_report_ < 100000) next_report_ += 10000;
      else if (next_report_ < 500000) next_report_ += 50000;
      else                            next_report_ += 100000;
      fprintf(stderr, '... finished %d ops%30s\r', done_, '');
      fflush(stderr);
    }
  }
    
    // A Comparator object provides a total order across slices that are
// used as keys in an sstable or a database.  A Comparator implementation
// must be thread-safe since leveldb may invoke its methods concurrently
// from multiple threads.
class Comparator {
 public:
  virtual ~Comparator();
    }
    
    
    {  return false;
}
    
    Type typeAddO(Type t1, Type t2) {
  if (auto t = eval_const(t1, t2, cellAddO))          return *t;
  if (t1.subtypeOf(BInt) && t2.subtypeOf(BInt))       return TNum;
  if (auto t = usual_arith_conversions(t1, t2))       return *t;
  if (t1.subtypeOf(BArr) && t2.subtypeOf(BArr))       return TArr;
  if (t1.subtypeOf(BVec) && t2.subtypeOf(BVec))       return TVec;
  if (t1.subtypeOf(BDict) && t2.subtypeOf(BDict))     return TDict;
  if (t1.subtypeOf(BKeyset) && t2.subtypeOf(BKeyset)) return TKeyset;
  return TInitCell;
}