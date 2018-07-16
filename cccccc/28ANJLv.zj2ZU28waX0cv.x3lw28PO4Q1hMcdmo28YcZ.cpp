
        
        
    {} // namespace nwapi

    
    MenuDelegate::MenuDelegate(ObjectManager* object_manager)
    : object_manager_(object_manager) {
}
    
      if (menu_item->submenu_)
    menu_model_->InsertSubMenuAt(pos, menu_item->id(), menu_item->label_,
                                 menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->InsertItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->InsertCheckItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->InsertSeparatorAt(pos, ui::NORMAL_SEPARATOR);
    
    namespace extensions {
    }
    
        // pass address (value interface)
    iterator find(const K& key)                     { return m.find(&key); }
    const_iterator find(const K& key) const         { return m.find(&key); }
    iterator lower_bound(const K& key)              { return m.lower_bound(&key); }
    const_iterator lower_bound(const K& key) const  { return m.lower_bound(&key); }
    size_type erase(const K& key)                   { return m.erase(&key); }
    size_type count(const K& key) const             { return m.count(&key); }
    
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
    
    void leveldb_iter_get_error(const leveldb_iterator_t* iter, char** errptr) {
  SaveError(errptr, iter->rep->status());
}
    
    TableCache::TableCache(const std::string& dbname,
                       const Options* options,
                       int entries)
    : env_(options->env),
      dbname_(dbname),
      options_(options),
      cache_(NewLRUCache(entries)) {
}
    
    
    {}  // namespace leveldb
    
        // Initialize db_
    db_ = new kyotocabinet::TreeDB();
    char file_name[100];
    db_num_++;
    std::string test_dir;
    Env::Default()->GetTestDirectory(&test_dir);
    snprintf(file_name, sizeof(file_name),
             '%s/dbbench_polyDB-%d.kct',
             test_dir.c_str(),
             db_num_);
    
      // Three-way comparison.  Returns value:
  //   <  0 iff '*this' <  'b',
  //   == 0 iff '*this' == 'b',
  //   >  0 iff '*this' >  'b'
  int compare(const Slice& b) const;
    
    /*
 * A Vunit contains all the assets that make up a vasm compilation unit.  It is
 * responsible for allocating new blocks, Vregs, and tuples.
 */
struct Vunit {
  /*
   * Create a new block in the given area and weight, returning its id.
   */
  Vlabel makeBlock(AreaIndex area, uint64_t weight);
    }
    
    namespace HPHP {
    }
    
    #ifdef PHP_WIN32
# undef S_IFLNK
# undef S_IFIFO
#endif
    
    ALWAYS_INLINE
APCObject::APCObject(ClassOrName cls, uint32_t propCount)
  : m_handle(APCKind::SharedObject)
  , m_cls{cls}
  , m_propCount{propCount}
  , m_persistent{0}
  , m_no_wakeup{0}
  , m_fast_init{0}
{}
    
      // make an empty string with cap reserve bytes, plus 1 for '\0'
  String(size_t cap, ReserveStringMode /*mode*/)
      : m_str(StringData::Make(cap), NoIncRef{}) {}
    
      struct ObjectInfo {
    String objClass;
    int    objId;
    char   objCode;
    String rsrcName;
    int    rsrcId;
  };
  req::vector<ObjectInfo> m_objectInfos;
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_COLOR_TRANSFORM_H_
#define GUETZLI_COLOR_TRANSFORM_H_
    
    
    {}  // namespace guetzli
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    // kIDCTMatrix[8*x+u] = alpha(u)*cos((2*x+1)*u*M_PI/16)*sqrt(2), with fixed 13
// bit precision, where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
// Some coefficients are off by +-1 to mimick libjpeg's behaviour.
static const int kIDCTMatrix[kDCTBlockSize] = {
  8192,  11363,  10703,   9633,   8192,   6437,   4433,   2260,
  8192,   9633,   4433,  -2259,  -8192, -11362, -10704,  -6436,
  8192,   6437,  -4433, -11362,  -8192,   2261,  10704,   9633,
  8192,   2260, -10703,  -6436,   8192,   9633,  -4433, -11363,
  8192,  -2260, -10703,   6436,   8192,  -9633,  -4433,  11363,
  8192,  -6437,  -4433,  11362,  -8192,  -2261,  10704,  -9633,
  8192,  -9633,   4433,   2259,  -8192,  11362, -10704,   6436,
  8192, -11363,  10703,  -9633,   8192,  -6437,   4433,  -2260,
};
    
    #endif  // GUETZLI_IDCT_H_

    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
    // Returns the table width of the next 2nd level table, count is the histogram
// of bit lengths for the remaining symbols, len is the code length of the next
// processed symbol.
static inline int NextTableBitSize(const int* count, int len) {
  int left = 1 << (len - kJpegHuffmanRootTableBits);
  while (len < kJpegHuffmanMaxBitLength) {
    left -= count[len];
    if (left <= 0) break;
    ++len;
    left <<= 1;
  }
  return len - kJpegHuffmanRootTableBits;
}
    
      // Fills in block[] with the 8x8 coefficient block with block coordinates
  // (block_x, block_y).
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  void GetCoeffBlock(int block_x, int block_y,
                     coeff_t block[kDCTBlockSize]) const;
    
    
    {}  // namespace
    
    Finally, you can end the calculation anytime, by using XXH32_digest().
This function returns the final 32-bits hash.
You must provide the same 'void* state' parameter created by XXH32_init().
Memory will be freed by XXH32_digest().
*/
    
    // This is the base class for all factories that are used by RocksDB to create
// new MemTableRep objects
class MemTableRepFactory {
 public:
  virtual ~MemTableRepFactory() {}
    }
    
    #ifndef NDEBUG
namespace rocksdb {
    }
    
      // # of memtable hits.
  MEMTABLE_HIT,
  // # of memtable misses.
  MEMTABLE_MISS,