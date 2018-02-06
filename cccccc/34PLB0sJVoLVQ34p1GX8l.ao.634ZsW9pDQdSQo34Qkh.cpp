
        
        Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    void leveldb_iter_seek_to_last(leveldb_iterator_t* iter) {
  iter->rep->SeekToLast();
}
    
    
    {  ASSERT_TRUE(!ParseInternalKey(Slice('bar'), &decoded));
}
    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& fname,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(fname);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
    // Return the name of the info log file for 'dbname'.
extern std::string InfoLogFileName(const std::string& dbname);
    
    
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
    
        // Copy data.
    Iterator* iter = NewTableIterator(t.meta);
    int counter = 0;
    for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
      builder->Add(iter->key(), iter->value());
      counter++;
    }
    delete iter;
    
    
    {}  // namespace leveldb
    
      Benchmark()
  : db_(NULL),
    db_num_(0),
    num_(FLAGS_num),
    reads_(FLAGS_reads < 0 ? FLAGS_num : FLAGS_reads),
    bytes_(0),
    rand_(301) {
    std::vector<std::string> files;
    std::string test_dir;
    Env::Default()->GetTestDirectory(&test_dir);
    Env::Default()->GetChildren(test_dir, &files);
    if (!FLAGS_use_existing_db) {
      for (int i = 0; i < files.size(); i++) {
        if (Slice(files[i]).starts_with('dbbench_sqlite3')) {
          std::string file_name(test_dir);
          file_name += '/';
          file_name += files[i];
          Env::Default()->DeleteFile(file_name.c_str());
        }
      }
    }
  }
    
    // Return a builtin comparator that uses lexicographic byte-wise
// ordering.  The result remains the property of this module and
// must not be deleted.
extern const Comparator* BytewiseComparator();
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    // Computes all the cross product distances of the points perpendicular to
// the given direction, ignoring distances outside of the give distance range,
// storing the actual (signed) cross products in distances_.
void DetLineFit::ComputeConstrainedDistances(const FCOORD& direction,
                                             double min_dist, double max_dist) {
  distances_.truncate(0);
  square_length_ = direction.sqlength();
  // Compute the distance of each point from the line.
  for (int i = 0; i < pts_.size(); ++i) {
    FCOORD pt_vector = pts_[i].pt;
    // Compute |line_vector||pt_vector|sin(angle between)
    double dist = direction * pt_vector;
    if (min_dist <= dist && dist <= max_dist)
      distances_.push_back(DistPointPair(dist, pts_[i].pt));
  }
}
    
    
    {}  // namespace tesseract.
    
    #include <stdio.h>
#include 'genericvector.h'
#include 'host.h'