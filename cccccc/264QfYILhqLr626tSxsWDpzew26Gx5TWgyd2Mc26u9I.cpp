
        
          // Called immediately after all windows are closed.
  virtual void OnWindowAllClosed() {}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Locker);
};
    
    #ifndef ATOM_RENDERER_PREFERENCES_MANAGER_H_
#define ATOM_RENDERER_PREFERENCES_MANAGER_H_
    
    
    {}  // namespace chrome
    
    
    {  virtual int GetSourceCount() const = 0;
  virtual const Source& GetSource(int index) const = 0;
  virtual std::vector<Source> GetSources() const = 0;
};
    
    #ifndef CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
    
    #undef FPL

    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    class DBImpl;
    
    // Notified when log reader encounters corruption.
class CorruptionReporter : public log::Reader::Reporter {
 public:
  WritableFile* dst_;
  virtual void Corruption(size_t bytes, const Status& status) {
    std::string r = 'corruption: ';
    AppendNumberTo(&r, bytes);
    r += ' bytes; ';
    r += status.ToString();
    r.push_back('\n');
    dst_->Append(r);
  }
};
    
    std::string SSTTableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'sst');
}
    
    #endif  // STORAGE_LEVELDB_DB_FILENAME_H_

    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    
TEST(FindFileTest, Multiple) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_EQ(0, Find('100'));
  ASSERT_EQ(0, Find('150'));
  ASSERT_EQ(0, Find('151'));
  ASSERT_EQ(0, Find('199'));
  ASSERT_EQ(0, Find('200'));
  ASSERT_EQ(1, Find('201'));
  ASSERT_EQ(1, Find('249'));
  ASSERT_EQ(1, Find('250'));
  ASSERT_EQ(2, Find('251'));
  ASSERT_EQ(2, Find('299'));
  ASSERT_EQ(2, Find('300'));
  ASSERT_EQ(2, Find('349'));
  ASSERT_EQ(2, Find('350'));
  ASSERT_EQ(3, Find('351'));
  ASSERT_EQ(3, Find('400'));
  ASSERT_EQ(3, Find('450'));
  ASSERT_EQ(4, Find('451'));
    }
    
    
    {    status = sqlite3_finalize(read_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(begin_trans_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(end_trans_stmt);
    ErrorCheck(status);
  }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
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
    
    // Return a new filter policy that uses a bloom filter with approximately
// the specified number of bits per key.  A good value for bits_per_key
// is 10, which yields a filter with ~ 1% false positive rate.
//
// Callers must delete the result after any database that is using the
// result has been closed.
//
// Note: if you are using a custom comparator that ignores some parts
// of the keys being compared, you must not use NewBloomFilterPolicy()
// and must provide your own FilterPolicy that also ignores the
// corresponding parts of the keys.  For example, if the comparator
// ignores trailing spaces, it would be incorrect to use a
// FilterPolicy (like NewBloomFilterPolicy) that does not ignore
// trailing spaces in keys.
extern const FilterPolicy* NewBloomFilterPolicy(int bits_per_key);
    
    inline int Slice::compare(const Slice& b) const {
  const size_t min_len = (size_ < b.size_) ? size_ : b.size_;
  int r = memcmp(data_, b.data_, min_len);
  if (r == 0) {
    if (size_ < b.size_) r = -1;
    else if (size_ > b.size_) r = +1;
  }
  return r;
}