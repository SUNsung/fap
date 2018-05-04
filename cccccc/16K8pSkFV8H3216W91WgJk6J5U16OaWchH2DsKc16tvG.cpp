
        
        #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    
    {  FindPrevUserEntry();
}
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
    TEST(FindFileTest, Empty) {
  ASSERT_EQ(0, Find('foo'));
  ASSERT_TRUE(! Overlaps('a', 'z'));
  ASSERT_TRUE(! Overlaps(NULL, 'z'));
  ASSERT_TRUE(! Overlaps('a', NULL));
  ASSERT_TRUE(! Overlaps(NULL, NULL));
}
    
    namespace {
class MemTableInserter : public WriteBatch::Handler {
 public:
  SequenceNumber sequence_;
  MemTable* mem_;
    }
    }
    
    class Slice;
    
    #ifndef STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
#define STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
    
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
    
    
    {}  // namespace leveldb
    
    
    {}  // namespace guetzli

    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    namespace guetzli {
    }
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    #include <stddef.h>
#include <stdint.h>
    
      std::vector<uint8_t> ToSRGB() const;