
        
        namespace api {
    }
    
    
    {  DraggableRegion();
};
    
      // Called by platform specific implementations of this class whenever a key
  // is struck. Only called for keys that have an observer registered.
  void NotifyKeyPressed(const ui::Accelerator& accelerator);
    
    
    {}  // namespace chrome
    
      const int render_process_id_;
  // Keep a copy from original thread.
  const base::FilePath profile_directory_;
  const GURL document_url_;
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
    #include 'hphp/util/logger.h'
#include 'hphp/util/trace.h'
    
      struct Hash {
    size_t operator()(Vconst c) const {
      return
        std::hash<uint64_t>()(c.val) ^ std::hash<int>()(c.kind) ^ c.isUndef;
    }
  };
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
      if ((ms->flags & MAGIC_PRESERVE_ATIME) != 0) {
    /*
     * Try to restore access, modification times if read it.
     * This is really *bad* because it will modify the status
     * time of the file... And of course this will affect
     * backup programs
     */
#ifdef HAVE_UTIMES
    struct timeval  utsbuf[2];
    (void)memset(utsbuf, 0, sizeof(utsbuf));
    utsbuf[0].tv_sec = sb->st_atime;
    utsbuf[1].tv_sec = sb->st_mtime;
    }
    
    namespace HPHP { namespace hfsort {
namespace {
    }
    }
    }
    
      // An integer is constructed from the n, imm_s and imm_r bits according to
  // the following table:
  //
  //  N   imms    immr    size        S             R
  //  1  ssssss  rrrrrr    64    UInt(ssssss)  UInt(rrrrrr)
  //  0  0sssss  xrrrrr    32    UInt(sssss)   UInt(rrrrr)
  //  0  10ssss  xxrrrr    16    UInt(ssss)    UInt(rrrr)
  //  0  110sss  xxxrrr     8    UInt(sss)     UInt(rrr)
  //  0  1110ss  xxxxrr     4    UInt(ss)      UInt(rr)
  //  0  11110s  xxxxxr     2    UInt(s)       UInt(r)
  // (s bits must not be all set)
  //
  // A pattern is constructed of size bits, where the least significant S+1
  // bits are set. The pattern is rotated right by R, and repeated across a
  // 32 or 64-bit value, depending on destination register width.
  //
    
    ssize_t hphp_read_embedded_data(const char* section, char* buf, size_t len) {
  embedded_data data;
  if (get_embedded_data(section, &data)) {
    auto str = read_embedded_data(data);
    auto data_len = str.length();
    auto real_len = data_len < len ? data_len : len;
    memcpy(buf, str.data(), real_len * sizeof(char));
    return real_len;
  } else {
    return -1;
  }
}
    
    #include 'hphp/util/process.h'
#include 'hphp/util/lock.h'
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
    // For 2M pages, we want more control over protection and mapping flags.  Note
// that MAP_FIXED can overwrite the existing mapping without checking/failing.
void* mmap_2m(void* addr, int prot, int node = -1,
              bool map_shared = false, bool map_fixed = false);
    
    extern JSClass  *jsb_cocos2d_NavMesh_class;
extern JSObject *jsb_cocos2d_NavMesh_prototype;
    
    extern JSClass  *jsb_cocostudio_Tween_class;
extern JSObject *jsb_cocostudio_Tween_prototype;
    
    
    
    			b2EdgeShape shape;
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-14.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    	XLoggerInfo xlog_info;
	gettimeofday(&xlog_info.timeval, NULL);
	xlog_info.level = (TLogLevel)_level;
	xlog_info.line = (int)_line;
	xlog_info.pid = (int)_pid;
	xlog_info.tid = LONGTHREADID2INT(_tid);
	xlog_info.maintid = LONGTHREADID2INT(_maintid);
    
    int Packer_Unpack(const void* _rawbuf, size_t _rawlen, std::string& _url, unsigned int& _sequence, size_t& _packlen, AutoBuffer& _data) {
    if (_rawlen < sizeof(LongLinkPack)) return LONGLINKPACK_CONTINUE;
    }
    
        void __DelOlderTouchTime(uint64_t _time);
    
    #include 'comm/debugger/testspy.h'