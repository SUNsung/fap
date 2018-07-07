
        
        void leveldb_repair_db(
    const leveldb_options_t* options,
    const char* name,
    char** errptr) {
  SaveError(errptr, RepairDB(name, options->rep));
}
    
    // Append the serialization of 'key' to *result.
extern void AppendInternalKey(std::string* result,
                              const ParsedInternalKey& key);
    
    namespace leveldb {
    }
    
    // Tag numbers for serialized VersionEdit.  These numbers are written to
// disk and should not be changed.
enum Tag {
  kComparator           = 1,
  kLogNumber            = 2,
  kNextFileNumber       = 3,
  kLastSequence         = 4,
  kCompactPointer       = 5,
  kDeletedFile          = 6,
  kNewFile              = 7,
  // 8 was used for large value refs
  kPrevLogNumber        = 9
};
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    TEST(FindFileTest, Empty) {
  ASSERT_EQ(0, Find('foo'));
  ASSERT_TRUE(! Overlaps('a', 'z'));
  ASSERT_TRUE(! Overlaps(NULL, 'z'));
  ASSERT_TRUE(! Overlaps('a', NULL));
  ASSERT_TRUE(! Overlaps(NULL, NULL));
}
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
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
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
    
    {    SPY_DETACH_VARIABLE('TestFun0 i');
}
    
    
/*
 * ScopedJstring.h
 *
 *  Created on: 2014-8-27
 *      Author: yanguoyue
 */