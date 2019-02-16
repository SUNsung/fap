
        
        std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput + 2));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 4));
    }
    input_blob_names.push_back(GO(4));
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
          typename T6, typename T7, typename T8, typename T9, typename T10>
void PrintTo(
    const ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>& t,
    ::std::ostream* os) {
  PrintTupleTo(t, os);
}
#endif  // GTEST_HAS_TR1_TUPLE
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2>
AssertionResult AssertPred2Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2) {
  if (pred(v1, v2)) return AssertionSuccess();
    }
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
    // A simple Linear Congruential Generator for generating random
// numbers with a uniform distribution.  Unlike rand() and srand(), it
// doesn't use global state (and therefore can't interfere with user
// code).  Unlike rand_r(), it's portable.  An LCG isn't very random,
// but it's good enough for our purposes.
class GTEST_API_ Random {
 public:
  static const UInt32 kMaxRange = 1u << 31;
    }
    
    
    { private:
  String();  // Not meant to be instantiated.
};  // class String
    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_), f9_(t.f9_) {}
    
      // Copy c'tor
  MyString(const MyString& string) : c_string_(NULL) {
    Set(string.c_string_);
  }
    
      // Load the options file.
  DBOptions loaded_db_opt;
  std::vector<ColumnFamilyDescriptor> loaded_cf_descs;
  s = LoadLatestOptions(kDBPath, Env::Default(), &loaded_db_opt,
                        &loaded_cf_descs);
  assert(s.ok());
  assert(loaded_db_opt.create_if_missing == db_opt.create_if_missing);
    
    Status GetOptionsFromString(const Options& base_options,
                            const std::string& opts_str, Options* new_options);
    
    #pragma once
#ifndef ROCKSDB_LITE
    
      // Insert to page cache
  //
  // page_key   Identifier to identify a page uniquely across restarts
  // data       Page data
  // size       Size of the page
  virtual Status Insert(const Slice& key, const char* data,
                        const size_t size) = 0;
    
    
    { private:
  DB* db_;
  const Snapshot* snapshot_;
};
    
      // Builds an openable snapshot of RocksDB on the same disk, which
  // accepts an output directory on the same disk, and under the directory
  // (1) hard-linked SST files pointing to existing live SST files
  // SST files will be copied if output directory is on a different filesystem
  // (2) a copied manifest files and other files
  // The directory should not already exist and will be created by this API.
  // The directory will be an absolute path
  // log_size_for_flush: if the total log file size is equal or larger than
  // this value, then a flush is triggered for all the column families. The
  // default value is 0, which means flush is always triggered. If you move
  // away from the default, the checkpoint may not contain up-to-date data
  // if WAL writing is not always enabled.
  // Flush will always trigger if it is 2PC.
  virtual Status CreateCheckpoint(const std::string& checkpoint_dir,
                                  uint64_t log_size_for_flush = 0);