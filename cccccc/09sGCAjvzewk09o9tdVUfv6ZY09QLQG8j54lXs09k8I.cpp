
        
        #include 'base/macros.h'
    
    #include <memory>
    
    namespace atom {
    }
    
    // DesktopMediaList provides the list of desktop media source (screens, windows,
// tabs), and their thumbnails, to the desktop media picker dialog. It
// transparently updates the list in the background, and notifies the desktop
// media picker when something changes.
class DesktopMediaList {
 public:
  // Struct used to represent each entry in the list.
  struct Source {
    // Id of the source.
    content::DesktopMediaID id;
    }
    }
    
    #ifndef CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
    
    namespace content {
class BrowserPpapiHost;
}
    
      // BaseShellDialog:
  virtual bool IsRunning(gfx::NativeWindow owning_window) const override;
  virtual void ListenerDestroyed() override;
    
      /// This is the second time DebuggerClient is consulted:
  /// after all names in external Modules are checked, the client
  /// gets a chance to add names to the list of candidates that
  /// have been found in the external module lookup.
    
    
    {
    {    if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Decl *>()) {
      SemanticNode.get<Decl *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else {
      llvm_unreachable('ASTNode has pointer to unknown thing!');
    }
    llvm::errs() << '\n=====================================================\n';
  }
}

    
    namespace swift {
    }
    
    namespace index {
    }
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    #ifndef SWIFT_INDEX_INDEX_H
#define SWIFT_INDEX_INDEX_H
    
    
    
    // A concrete DeathTestFactory implementation for normal use.
class DefaultDeathTestFactory : public DeathTestFactory {
 public:
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test);
};
    
    #include 'gtest/internal/gtest-port.h'
    
    // Determines the platform on which Google Test is compiled.
#ifdef __CYGWIN__
# define GTEST_OS_CYGWIN 1
#elif defined __SYMBIAN32__
# define GTEST_OS_SYMBIAN 1
#elif defined _WIN32
# define GTEST_OS_WINDOWS 1
# ifdef _WIN32_WCE
#  define GTEST_OS_WINDOWS_MOBILE 1
# elif defined(__MINGW__) || defined(__MINGW32__)
#  define GTEST_OS_WINDOWS_MINGW 1
# else
#  define GTEST_OS_WINDOWS_DESKTOP 1
# endif  // _WIN32_WCE
#elif defined __APPLE__
# define GTEST_OS_MAC 1
# if TARGET_OS_IPHONE
#  define GTEST_OS_IOS 1
#  if TARGET_IPHONE_SIMULATOR
#   define GTEST_OS_IOS_SIMULATOR 1
#  endif
# endif
#elif defined __linux__
# define GTEST_OS_LINUX 1
# if defined __ANDROID__
#  define GTEST_OS_LINUX_ANDROID 1
# endif
#elif defined __MVS__
# define GTEST_OS_ZOS 1
#elif defined(__sun) && defined(__SVR4)
# define GTEST_OS_SOLARIS 1
#elif defined(_AIX)
# define GTEST_OS_AIX 1
#elif defined(__hpux)
# define GTEST_OS_HPUX 1
#elif defined __native_client__
# define GTEST_OS_NACL 1
#elif defined __OpenBSD__
# define GTEST_OS_OPENBSD 1
#elif defined __QNX__
# define GTEST_OS_QNX 1
#endif  // __CYGWIN__
    
    // The following family of struct and struct templates are used to
// represent type lists.  In particular, TypesN<T1, T2, ..., TN>
// represents a type list with N types (T1, T2, ..., and TN) in it.
// Except for Types0, every struct in the family has two member types:
// Head for the first type in the list, and Tail for the rest of the
// list.
    
    namespace {
    }
    
      // Writes to the given file. Returns false in case of error.
  bool Serialize(TFile* fp) const override;
  // Reads from the given file. Returns false in case of error.
  bool DeSerialize(TFile* fp) override;
    
      const char* pageSeparator = api->GetStringVariable('page_separator');
  if (pageSeparator != nullptr && *pageSeparator != '\0') {
    AppendString(pageSeparator);
  }
    
    // Clear the document dictionary for this and all subclassifiers.
void Tesseract::ResetDocumentDictionary() {
  getDict().ResetDocumentDictionary();
  for (int i = 0; i < sub_langs_.size(); ++i) {
    sub_langs_[i]->getDict().ResetDocumentDictionary();
  }
}
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
      // Update the other members if the cost is lower.
  void UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                      int32_t n, int32_t sig_x, int64_t sig_xsq);
    
    
/**********************************************************************
 * LLSQ::remove
 *
 * Delete an element from the acculuator.
 **********************************************************************/
    
    /**********************************************************************
 * DIR128::DIR128
 *
 * Quantize the direction of an FCOORD to make a DIR128.
 **********************************************************************/
    
    void HHVM_FUNCTION(fb_setprofile,
  const Variant& callback,
  int64_t flags = EventHook::ProfileDefault
) {
  if (ThreadInfo::s_threadInfo->m_profiler != nullptr) {
    // phpprof is enabled, don't let PHP code override it
    return;
  }
  g_context->m_setprofileCallback = callback;
  g_context->m_setprofileFlags = flags;
  if (callback.isNull()) {
    HPHP::EventHook::Disable();
  } else {
    HPHP::EventHook::Enable();
  }
}
    
    void Vunit::freeScratchBlock(Vlabel l) {
  // This will leak blocks if anything's been added since the corresponding
  // call to makeScratchBlock(), but it's harmless.
  if (l == blocks.size() - 1) blocks.pop_back();
}
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
    public int
magic_setflags(struct magic_set *ms, int flags)
{
  if (ms == NULL)
    return -1;
#if !defined(HAVE_UTIME) && !defined(HAVE_UTIMES)
  if (flags & MAGIC_PRESERVE_ATIME)
    return -1;
#endif
  ms->flags = flags;
  return 0;
}
    
      size_t numFrees()   const { return m_nfree; }
  size_t numAllocs()  const { return m_nalloc; }
  size_t bytesFree()  const { return m_bytesFree; }
  size_t blocksFree() const { return m_freeRanges.size(); }
    
    #endif
    
    /*
 * Read data from the named section and place it into the given buffer (of size
 * len) Returns the number of bytes (not null-terminated) read or -1 if
 * unsuccessful
 */
ssize_t hphp_read_embedded_data(const char* section, char* buf, size_t len);
    
      if (RuntimeOption::EvalPerfRelocate) {
    GrowableVector<IncomingBranch> ibs;
    auto& frozen = code.frozen();
    tc::recordPerfRelocMap(start, main.frontier(),
                           frozen.frontier(), frozen.frontier(),
                           context.srcKey(), 0, ibs, fixups);
  }
  fixups.process(nullptr);
    
    bool simplify(Env& env, const cmovl& inst, Vlabel b, size_t i) {
  return cmov_fold_one<csincl>(env, inst, b, i);
}
    
    static int make_prefixes(struct ifaddrs* ifaddr, int family, int prefixlen) {
	char* prefix = NULL;
	if (family == AF_INET) {
		sockaddr_in* mask = new sockaddr_in;
		mask->sin_family = AF_INET;
		memset(&mask->sin_addr, 0, sizeof(in_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 32) {
			prefixlen = 32;
		}
		prefix = reinterpret_cast<char*>(&mask->sin_addr);
	} else if (family == AF_INET6) {
		sockaddr_in6* mask = new sockaddr_in6;
		mask->sin6_family = AF_INET6;
		memset(&mask->sin6_addr, 0, sizeof(in6_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 128) {
			prefixlen = 128;
		}
		prefix = reinterpret_cast<char*>(&mask->sin6_addr);
	} else {
		return -1;
	}
	for (int i = 0; i < (prefixlen / 8); i++) {
		*prefix++ = 0xFF;
	}
	char remainder = 0xff;
	remainder <<= (8 - prefixlen % 8);
	*prefix = remainder;
	return 0;
}
    
    StreamPeerSSL *StreamPeerSSL::create() {
    }
    
    #ifndef STREAM_PEER_SSL_H
#define STREAM_PEER_SSL_H
    
    void WebSocketClient::_bind_methods() {
	ClassDB::bind_method(D_METHOD('connect_to_url', 'url', 'protocols', 'gd_mp_api'), &WebSocketClient::connect_to_url, DEFVAL(PoolVector<String>()), DEFVAL(false));
	ClassDB::bind_method(D_METHOD('disconnect_from_host'), &WebSocketClient::disconnect_from_host);
	ClassDB::bind_method(D_METHOD('set_verify_ssl_enabled', 'enabled'), &WebSocketClient::set_verify_ssl_enabled);
	ClassDB::bind_method(D_METHOD('is_verify_ssl_enabled'), &WebSocketClient::is_verify_ssl_enabled);
    }
    
    class WebSocketClient : public WebSocketMultiplayerPeer {
    }
    
    #ifndef VEHICLE_BODY_H
#define VEHICLE_BODY_H
    
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
    
    TEST(LogTest, ReadSecondOneOff) {
  CheckInitialOffsetRecord(1, 1);
}
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
    static std::string Shorten(const std::string& s, const std::string& l) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortestSeparator(&result, l);
  return result;
}
    
    #ifndef STORAGE_LEVELDB_TABLE_BLOCK_H_
#define STORAGE_LEVELDB_TABLE_BLOCK_H_
    
        /* spec shows these without const; some jni.h do, some don't */
    void        (*SetBooleanArrayRegion)(JNIEnv*, jbooleanArray,
                        jsize, jsize, const jboolean*);
    void        (*SetByteArrayRegion)(JNIEnv*, jbyteArray,
                        jsize, jsize, const jbyte*);
    void        (*SetCharArrayRegion)(JNIEnv*, jcharArray,
                        jsize, jsize, const jchar*);
    void        (*SetShortArrayRegion)(JNIEnv*, jshortArray,
                        jsize, jsize, const jshort*);
    void        (*SetIntArrayRegion)(JNIEnv*, jintArray,
                        jsize, jsize, const jint*);
    void        (*SetLongArrayRegion)(JNIEnv*, jlongArray,
                        jsize, jsize, const jlong*);
    void        (*SetFloatArrayRegion)(JNIEnv*, jfloatArray,
                        jsize, jsize, const jfloat*);
    void        (*SetDoubleArrayRegion)(JNIEnv*, jdoubleArray,
                        jsize, jsize, const jdouble*);
    
    /**
 * Populate the vector with the current stack trace
 *
 * Note that this trace needs to be symbolicated to get the library offset even
 * if it is to be symbolicated off-line.
 *
 * Beware of a bug on some platforms, which makes the trace loop until the
 * buffer is full when it reaches a noexpr function. It seems to be fixed in
 * newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
 *
 * @param stackTrace The vector that will receive the stack trace. Before
 * filling the vector it will be cleared. The vector will never grow so the
 * number of frames captured is limited by the capacity of it.
 *
 * @param skip The number of frames to skip before capturing the trace
 */
FBEXPORT void getStackTrace(std::vector<InstructionPointer>& stackTrace,
                            size_t skip = 0);
    
      state->stackTrace.push_back(absoluteProgramCounter);
    
        double width;
    double height;
    
        method(setMaxWidth);
    method(setMaxWidthPercent);
    method(setMaxHeight);
    method(setMaxHeightPercent);
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }