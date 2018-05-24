
        
        SlowTimer::SlowTimer(int64_t msThreshold, const char *location, const char *info)
  : m_timer(Timer::WallTime), m_msThreshold(msThreshold) {
  if (location) m_location = location;
  if (info) m_info = info;
}
    
      /**
   * Get results of a task. This is blocking until task is finished or times
   * out. The status code is set to -1 in the event of a timeout.
   */
  static String TaskResult(const Resource& task,
                           Array &headers,
                           int &code,
                           int64_t timeout_ms);
    
    
    {    auto& block = dataBlocks.back();
    block.data.reset(new uint8_t[size]);
    block.size = size;
    block.align = alignof(T);
    return (T*)block.data.get();
  }
    
    
    {}
    
      /*
   * We use a fast path translation with a hashtable if none of the
   * cases are numeric strings and if the input is actually a string.
   *
   * Otherwise we do a linear search through the cases calling string
   * conversion routines.
   */
  const bool fastPath =
    topC(env)->isA(TStr) &&
    std::none_of(iv.strvec(), iv.strvec() + numCases,
      [&](const StrVecItem& item) {
        return curUnit(env)->lookupLitstrId(item.str)->isNumeric();
      }
    );
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    void OfflineCode::disasm(FILE* file,
                         TCA fileStartAddr,
                         TCA codeStartAddr,
                         uint64_t codeLen,
                         const PerfEventsMap<TCA>& perfEvents,
                         BCMappingInfo bcMappingInfo,
                         bool printAddr,
                         bool printBinary) {
    }
    
    #include 'hphp/runtime/vm/jit/func-prologue.h'
    
    ///////////////////////////////////////////////////////////////////////////////
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    	ERR_FAIL_COND_V(!connected, ERR_UNCONFIGURED);
    
    	static void _bind_methods();
    
    #if defined(MBEDTLS_PLATFORM_TIME_TYPE_MACRO) &&\
    ( !defined(MBEDTLS_PLATFORM_C) ||\
        !defined(MBEDTLS_HAVE_TIME) )
#error 'MBEDTLS_PLATFORM_TIME_TYPE_MACRO defined, but not all prerequisites'
#endif
    
    	GDCLASS(VehicleBody, RigidBody);
    
    	GodotClosestConvexResultCallback(const btVector3 &convexFromWorld, const btVector3 &convexToWorld, const Set<RID> *p_exclude) :
			btCollisionWorld::ClosestConvexResultCallback(convexFromWorld, convexToWorld),
			m_exclude(p_exclude) {}
    
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
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
    extern 'C' {
extern kern_return_t _start(kmod_info_t *ki, void *data);
extern kern_return_t _stop(kmod_info_t *ki, void *data);
}
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
      auto file_path = kTestWorkingDirectory + 'permissions-file2';
    
    namespace osquery {
    }
    
      struct tm result;
  gmtime_r((time_t*)&epoch, &result);
    
      // Sync + corrupt => no change
  ASSERT_OK(writable_file->Fsync());
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    
    {} // namespace rocksdb

    
    
  // Should release the snapshot and be aware of the new stuff now
  it.reset(db_->NewIterator(ReadOptions()));
  first = true;
  for (it->Seek(k1); it->Valid(); it->Next()) {
    res = it->value().ToString();
    if (first) {
      ASSERT_EQ(res, 'v1,v2,v3,v4');
      first = false;
    } else {
      ASSERT_EQ(res, 'a1,a2,a3,a4');
    }
  }
    
    
    {
    {  releaseJniEnv(attached_thread);
}
// @lint-ignore TXT4 T25377293 Grandfathered in
}  // namespace rocksdb
    
      pos = fstart;
  while (pos >= 0 && '/' == fn[pos]) --pos;
    
    #ifdef NDEBUG
// empty in release build
#define TEST_KILL_RANDOM(kill_point, rocksdb_kill_odds)
#else
    
    inline
void BlockFetcher::InsertCompressedBlockToPersistentCacheIfNeeded() {
  if (status_.ok() && read_options_.fill_cache &&
      cache_options_.persistent_cache &&
      cache_options_.persistent_cache->IsCompressed()) {
    // insert to raw cache
    PersistentCacheHelper::InsertRawPage(cache_options_, handle_, used_buf_,
                                         block_size_ + kBlockTrailerSize);
  }
}
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }