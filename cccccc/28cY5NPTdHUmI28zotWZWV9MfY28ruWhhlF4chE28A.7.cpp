
        
        namespace opencv_test { namespace {
    }
    }
    
        //
    // Longest compressed code length that ImfHuf supports (58 bits)
    //
    
    #include <ImfFloatAttribute.h>
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    
const Slice &
FrameBuffer::operator [] (const string &name) const
{
    return this->operator[] (name.c_str());
}
    
    
void
invalidTableSize ()
{
    throw InputExc ('Error in Huffman-encoded data '
		    '(invalid code table size).');
}
    
    //-----------------------------------------------------------------------------
//
//	class IntAttribute
//
//-----------------------------------------------------------------------------
    
        {
        blob_acq_t acq;
        buffer_group_t write_group;
        blob.expose_all(buf_parent_t(superblock->get()), access_t::write,
                        &write_group, &acq);
    }
    
    void get_btree_superblock_and_txn_for_backfilling(
        cache_conn_t *cache_conn,
        cache_account_t *backfill_account,
        scoped_ptr_t<real_superblock_t> *got_superblock_out,
        scoped_ptr_t<txn_t> *txn_out);
    
        response->n_shards = 1;
    if (trace.has()) {
        response->event_log = std::move(*trace).extract_event_log();
    }
    // This is a tad hacky, this just adds a stop event to signal the end of the
    // parallel task.
    
    // Overload for std::pair.
template <typename T1, typename T2>
void PrintTo(const ::std::pair<T1, T2>& value, ::std::ostream* os) {
  *os << '(';
  // We cannot use UniversalPrint(value.first, os) here, as T1 may be
  // a reference type.  The same for printing value.second.
  UniversalPrinter<T1>::Print(value.first, os);
  *os << ', ';
  UniversalPrinter<T2>::Print(value.second, os);
  *os << ')';
}
    
    // FilePath - a class for file and directory pathname manipulation which
// handles platform-specific conventions (like the pathname separator).
// Used for helper functions for naming files in a directory for xml output.
// Except for Set methods, all methods are const or static, which provides an
// 'immutable value object' -- useful for peace of mind.
// A FilePath with a value ending in a path separator ('like/this/') represents
// a directory, otherwise it is assumed to represent a file. In either case,
// it may or may not represent an actual file or directory in the file system.
// Names are NOT checked for syntax correctness -- no checking for illegal
// characters, malformed paths, etc.
    
       private:
    Iterator(const Iterator& other)
        : base_(other.base_),
        begin1_(other.begin1_),
        end1_(other.end1_),
        current1_(other.current1_),
        begin2_(other.begin2_),
        end2_(other.end2_),
        current2_(other.current2_),
        begin3_(other.begin3_),
        end3_(other.end3_),
        current3_(other.current3_),
        begin4_(other.begin4_),
        end4_(other.end4_),
        current4_(other.current4_),
        begin5_(other.begin5_),
        end5_(other.end5_),
        current5_(other.current5_) {
      ComputeCurrentValue();
    }
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    template <GTEST_8_TYPENAMES_(T)>
inline GTEST_8_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4, const T5& f5, const T6& f6, const T7& f7) {
  return GTEST_8_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6, f7);
}
    
    private:
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
    private:
    
    #ifndef POPPLER_CACHE_H
#define POPPLER_CACHE_H
    
    
    
    #endif

    
    
    // ============
    // string types
    // ============
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
    
    {  return local ? std::mktime(&tm) : (std::mktime(&tm) - diff);
}
    
    namespace tables {
    }
    
    /**
 * The schedule is an iterable collection of Packs. When you iterate through
 * a schedule, you only get the packs that should be running on the host that
 * you're currently operating on.
 */
class Schedule : private boost::noncopyable {
 public:
  /// Under the hood, the schedule is just a list of the Pack objects
  using container = std::vector<PackRef>;
    }
    
      Expected<int32_t, DatabaseError> getInt32(const std::string& domain,
                                            const std::string& key) override;
  Expected<std::string, DatabaseError> getString(
      const std::string& domain, const std::string& key) override;
    
    
    {}
    
      Status GetChildrenFileAttributes(
      const std::string& dir, std::vector<FileAttributes>* result) override {
    PERF_TIMER_GUARD(env_get_children_file_attributes_nanos);
    return EnvWrapper::GetChildrenFileAttributes(dir, result);
  }
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    int main() {
  // open DB
  Options options;
  options.create_if_missing = true;
  DB* db;
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
    }
    
    int main() {
  DBOptions db_opt;
  db_opt.create_if_missing = true;
    }
    
      virtual ~PersistentCache() {}
    
      static Executor::KeepAlive<ExecutorWithPriority> create(
      KeepAlive<Executor> executor,
      int8_t priority);
    
    /**
 * Compute the 96-bit Rabin fingerprint of a string.
 * Return the 64 most significant bits in *msb, and the 32 least significant
 * bits in *lsb.
 */
inline void fingerprint96(StringPiece str, uint64_t* msb, uint32_t* lsb) {
  uint64_t fp[2];
  Fingerprint<96>().update(str).write(fp);
  *msb = fp[0];
  *lsb = (uint32_t)(fp[1] >> 32);
}
    
      /** cleanup_batch_tag */
  void cleanup_batch_tag(const hazptr_obj_batch<Atom>* batch) noexcept {
    auto tag = reinterpret_cast<uintptr_t>(batch) + kTagBit;
    auto obj = tagged_.pop_all(RetiredList::kAlsoLock);
    ObjList match, nomatch;
    list_match_tag(tag, obj, match, nomatch);
    if (unprotected_) { // There must be ongoing do_reclamation
      ObjList match2, nomatch2;
      list_match_tag(tag, unprotected_, match2, nomatch2);
      match.splice(match2);
      unprotected_ = nomatch2.head();
    }
    if (children_.head()) {
      ObjList match2, nomatch2;
      list_match_tag(tag, children_.head(), match2, nomatch2);
      match.splice(match2);
      children_ = std::move(nomatch2);
    }
    auto count = nomatch.count();
    nomatch.set_count(0);
    tagged_.push_unlock(nomatch);
    obj = match.head();
    reclaim_list_transitive(obj);
    if (count >= threshold()) {
      check_threshold_and_reclaim(
          tagged_, RetiredList::kAlsoLock, tagged_sync_time_);
    }
  }
    
      /**
   * Construct an AsyncFileWriter that writes to the specified File object.
   */
  explicit AsyncFileWriter(folly::File&& file);
    
    // access is protected by futexLock
static std::unordered_map<
    const detail::Futex<DeterministicAtomic>*,
    std::list<std::pair<uint32_t, bool*>>>
    futexQueues;
    
    #if __has_include(<memory_resource>)
    
    // not default-constructible, thereby preventing Expected<T, Err> from being
// default-constructible, forcing our implementation to handle such cases
class Err {
 private:
  enum class Type { Bad, Badder, Baddest };
    }