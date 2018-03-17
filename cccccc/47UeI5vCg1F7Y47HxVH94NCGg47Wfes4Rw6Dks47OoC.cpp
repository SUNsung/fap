
        
          /// DebuggerClient is consulted at two times during name
  /// lookup.  This is the first time: after all names in a
  /// source file have been checked but before external
  /// Modules are checked.  The results in the ResultVector will
  /// be consulted first.  Return true if results have been added
  /// to RV.
  /// FIXME: I don't think this ever does anything useful.
  virtual bool lookupOverrides(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    typedef NS_ENUM(NSInteger, ObjectBehaviorAction) {
    ObjectBehaviorActionRetain,
    ObjectBehaviorActionCopy,
    ObjectBehaviorActionMutableCopy
};
    
      std::string error;
  if (IndexUnitWriter::initIndexDirectory(indexStorePath, error)) {
    diags.diagnose(SourceLoc(), diag::error_create_index_dir, error);
    return true;
  }
    
    struct IndexRelation {
  const Decl *decl;
  SymbolInfo symInfo;
  SymbolRoleSet roles = SymbolRoleSet(0);
    }
    
    
    {  while (num_left)                  /* read past whatever is num_left */
  {
    get_bits(8);
    num_left--;
  }
}
    
    # ifdef __GNUC_PREREQ
#  if __GNUC_PREREQ(3,4)
#   include <limits.h>
/*Note the casts to (int) below: this prevents OC_CLZ{32|64}_OFFS from
   'upgrading' the type of an entire expression to an (unsigned) size_t.*/
#   if INT_MAX>=2147483647
#    define OC_CLZ32_OFFS ((int)sizeof(unsigned)*CHAR_BIT)
#    define OC_CLZ32(_x) (__builtin_clz(_x))
#   elif LONG_MAX>=2147483647L
#    define OC_CLZ32_OFFS ((int)sizeof(unsigned long)*CHAR_BIT)
#    define OC_CLZ32(_x) (__builtin_clzl(_x))
#   endif
#   if INT_MAX>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clz(_x))
#   elif LONG_MAX>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned long)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clzl(_x))
#   elif LLONG_MAX>=9223372036854775807LL|| \
     __LONG_LONG_MAX__>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned long long)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clzll(_x))
#   endif
#  endif
# endif
    
    /***** residue backends *********************************************/
    
    static __inline int vorbis_ftoi(double f){
        int i;
        __asm{
                fld f
                fistp i
        }
        return i;
}
    
    #include <math.h>
#include 'os.h'
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b),'r'(a<<16)
  );
  return rd_hi;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv4(a, b))
    
    #endif /* CELT_FIXED_GENERIC_MIPSR1_H */

    
    /* Divide two int32 values and return result as int32 in a given Q-domain */
static OPUS_INLINE opus_int32 silk_DIV32_varQ(   /* O    returns a good approximation of '(a32 << Qres) / b32' */
    const opus_int32     a32,               /* I    numerator (Q0)                  */
    const opus_int32     b32,               /* I    denominator (Q0)                */
    const opus_int       Qres               /* I    Q-domain of result (>= 0)       */
)
{
    opus_int   a_headrm, b_headrm, lshift;
    opus_int32 b32_inv, a32_nrm, b32_nrm, result;
    }
    
    TEST(AtomicSharedPtr, MaxPtrs) {
  shared_ptr<long> p(new long);
  int max_atomic_shared_ptrs = 262144;
  atomic_shared_ptr<long> ptrs[max_atomic_shared_ptrs];
  for (int i = 0; i < max_atomic_shared_ptrs - 1; i++) {
    ptrs[i].store(p);
  }
  atomic_shared_ptr<long> fail;
  EXPECT_DEATH(fail.store(p), '');
}
    
      void init() {
    auto ret = new Integer(this);
    cs_.reset(ret);
    int_cache_ = ret;
  }
    
    namespace detail {
    }
    
     private:
  static ScopeGuardImplBase makeFailsafe(std::true_type, const void*) noexcept {
    return makeEmptyScopeGuard();
  }
    
    ProgramExit::ProgramExit(int status, const std::string& msg)
  : std::runtime_error(msg),
    status_(status) {
  // Message is only allowed for non-zero exit status
  CHECK(status_ != 0 || msg.empty());
}
    
    TEST(ProgramOptionsTest, Errors) {
  callHelper({}, 1);
  callHelper({'--wtf', 'foo'}, 1);
  callHelper({'qux'}, 1);
  callHelper({'--global-foo', 'x', 'foo'}, 1);
}
    
    // clear -- clears all keys and values in the map and resets all counters
template <
    class KeyT,
    class ValueT,
    class HashFcn,
    class EqualFcn,
    class Allocator,
    class ProbeFcn,
    class KeyConvertFcn>
void AtomicHashArray<KeyT, ValueT, HashFcn, EqualFcn,
                     Allocator, ProbeFcn, KeyConvertFcn>::
clear() {
  FOR_EACH_RANGE(i, 0, capacity_) {
    if (cells_[i].first != kEmptyKey_) {
      cells_[i].~value_type();
      *const_cast<KeyT*>(&cells_[i].first) = kEmptyKey_;
    }
    CHECK(cells_[i].first == kEmptyKey_);
  }
  numEntries_.set(0);
  numPendingEntries_.set(0);
  isFull_.store(0, std::memory_order_relaxed);
  numErases_.store(0, std::memory_order_relaxed);
}
    
    //****************************
// Advanced Hash Functions
//****************************
    
    TEST_F(StringAppendOperatorTest, SimpleDelimiterTest) {
  auto db = OpenDb('|');
  StringLists slists(db);
    }
    
      /// Prints the entire (list: key), for debugging.
  void Print(const std::string& key);
    
    
    {
    {  void Size(size_t cursize) {
    cursize_ = cursize;
  }
};
}

    
     private:
  std::shared_ptr<Logger> info_log_;
  const unique_ptr<SequentialFileReader> file_;
  Reporter* const reporter_;
  bool const checksum_;
  char* const backing_store_;
  Slice buffer_;
  bool eof_;   // Last Read() indicated EOF by returning < kBlockSize
  bool read_error_;   // Error occurred while reading from file
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setSnapshotConsistency
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setSnapshotConsistency(
    JNIEnv* env, jobject jobj, jlong jhandle,
    jboolean jsnapshot_consistency) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
}
    
      virtual Handle* Lookup(const Slice& key, Statistics* stats) override {
    Handle* h = key_only_cache_->Lookup(key);
    if (h != nullptr) {
      key_only_cache_->Release(h);
      inc_hit_counter();
      RecordTick(stats, SIM_BLOCK_CACHE_HIT);
    } else {
      inc_miss_counter();
      RecordTick(stats, SIM_BLOCK_CACHE_MISS);
    }
    }