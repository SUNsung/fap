
        
          // Return the parent NativeView of the observed WebContents.
  gfx::NativeView GetParentView();
    
      // This returns true if all components are specified, and min and max are
  // equal.
  bool HasFixedSize() const;
    
    #include 'third_party/skia/include/core/SkColor.h'
    
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
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
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
    
    
    {}  // namespace leveldb
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    namespace {
class MemTableInserter : public WriteBatch::Handler {
 public:
  SequenceNumber sequence_;
  MemTable* mem_;
    }
    }
    
    TEST(WriteBatchTest, Empty) {
  WriteBatch batch;
  ASSERT_EQ('', PrintContents(&batch));
  ASSERT_EQ(0, WriteBatchInternal::Count(&batch));
}
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    class Slice;
    
    
    {
    {
    {}}}
    
    struct Block;
struct SSATmp;
    
      /*
   * StringData should not generally be allocated on the stack,
   * because references to it could escape.  This function is for
   * debugging: it asserts that the addres of this doesn't point into
   * the C++ stack.
   */
  void checkStack() const;
    
        const MapData& operator[](tv_rval tv) const {
      return m_mapping.at(*tv);
    }
    
    namespace HPHP {
    }
    
    // helper for getClosureScopeClass
static Variant HHVM_METHOD(ReflectionFunction, getClosureScopeClassname,
                           const Object& closure) {
  if (!closure->instanceof(c_Closure::classof())) {
    SystemLib::throwExceptionObject(s_ExpectedClosureInstance);
  }
  if (auto scope = c_Closure::fromObject(closure.get())->getScope()) {
    return String(const_cast<StringData*>(scope->name()));
  }
  return init_null_variant;
}
    
    
    {  // An upper bound for the number of pages may be specified upon creation.
  // This is primarily used to limit the number of huge pages used in an arena.
  // If the mapper doesn't use huge pages, it can choose not to look at it in
  // `addMappingImpl()`, and that's why we don't check m_currNumPages <
  // m_maxNumPages in `addMapping()`.
  uint32_t m_maxNumPages{0};
  uint32_t m_currNumPages{0};
  // NUMA interleave masks for the newly added memory.  0 indicates no-NUMA.
  uint32_t m_interleaveMask{0};
  // next NUMA node to grab a page from
  short m_nextNode{0};
  // Whether the current mapper still has failed permanently.  If so we go to
  // the fallback mapper without trying.
  bool m_failed{false};
  // Delegate to another mapper when the current one fails.  This forms a linked
  // list, or a 'chain of responsibility'..
  BumpMapper* m_fallback{nullptr};
};
    
    static bool
extent_purge(extent_hooks_t* /*extent_hooks*/, void* addr, size_t size,
             size_t offset, size_t length, unsigned /*arena_ind*/) {
  // This function should return false upon success, which is the case when
  // madvise returns 0.
  return madvise((char*)addr + offset, length, MADV_DONTNEED);
}
    
    DEFINE_FIND_STATIC_METHOD(KXlog_appenderOpenWithMultipathWithLevel, KXlog, 'appenderOpen', '(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_appenderOpen
	(JNIEnv *env, jclass, jint level, jint mode, jstring _cache_dir, jstring _log_dir, jstring _nameprefix, jstring _pubkey) {
	if (NULL == _log_dir || NULL == _nameprefix) {
		return;
	}
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {  protected:
    std::string   m_servicename;
    TServicesMap m_dependservices;
};
    
    
    
    ConsoleReporter::OutputOptions GetOutputOptions(bool force_no_color = false);
    
      static const int kint32max = std::numeric_limits<int32_t>::max();
    
    namespace benchmark {
    }
    
    inline LogType& GetNullLogInstance() {
  static LogType log(nullptr);
  return log;
}
    
    // Enable thread safety attributes only with clang.
// The attributes can be safely erased when compiling with other compilers.
#if defined(HAVE_THREAD_SAFETY_ATTRIBUTES)
#define THREAD_ANNOTATION_ATTRIBUTE__(x) __attribute__((x))
#else
#define THREAD_ANNOTATION_ATTRIBUTE__(x)  // no-op
#endif
    
      Out << LocalDateTimeString() << '\n';