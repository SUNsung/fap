
        
        class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
      // views::NonClientFrameView:
  gfx::Rect GetWindowBoundsForClientBounds(
      const gfx::Rect& client_bounds) const override;
  int NonClientHitTest(const gfx::Point& point) override;
    
    
    {  DISALLOW_COPY_AND_ASSIGN(PreferencesManager);
};
    
    
    {  if (s.ok() && meta->file_size > 0) {
    // Keep it
  } else {
    env->DeleteFile(fname);
  }
  return s;
}
    
    // Soft limit on number of level-0 files.  We slow down writes at this point.
static const int kL0_SlowdownWritesTrigger = 8;
    
    namespace {
    }
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string LogFileName(const std::string& dbname, uint64_t number);
    
    
    {  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    PutVarint32(dst, kNewFile);
    PutVarint32(dst, new_files_[i].first);  // level
    PutVarint64(dst, f.number);
    PutVarint64(dst, f.file_size);
    PutLengthPrefixedSlice(dst, f.smallest.Encode());
    PutLengthPrefixedSlice(dst, f.largest.Encode());
  }
}
    
    #ifndef STORAGE_LEVELDB_DB_VERSION_EDIT_H_
#define STORAGE_LEVELDB_DB_VERSION_EDIT_H_
    
    namespace leveldb {
    }
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    bool StreamPeerSSL::is_available() {
	return available;
}
    
    
    {	return CONNECTION_CONNECTING;
}
    
    #if defined(MBEDTLS_X509_CRT_PARSE_C) && ( !defined(MBEDTLS_X509_USE_C) )
#error 'MBEDTLS_X509_CRT_PARSE_C defined, but not all prerequisites'
#endif
    
    public:
	struct PropertySetGet {
    }
    
    	Transform m_worldTransform;
	Transform local_xform;
	bool engine_traction;
	bool steers;
    
    	GodotKinClosestConvexResultCallback(const btVector3 &convexFromWorld, const btVector3 &convexToWorld, const RigidBodyBullet *p_self_object, bool p_infinite_inertia) :
			btCollisionWorld::ClosestConvexResultCallback(convexFromWorld, convexToWorld),
			m_self_object(p_self_object),
			m_infinite_inertia(p_infinite_inertia) {}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
                if (k < prev_num_set)
            {
              int n = JPGD_MIN(r, prev_num_set - k);
              int kt = k;
              while (n--)
                p[g_ZAG[kt++]] = 0;
            }
    
    
    {    // Make sure this ThreadEntry is available if ThreadLocal A is accessed in
    // ThreadLocal B destructor.
    pthread_setspecific(meta.pthreadKey_, threadEntry);
    SharedMutex::ReadHolder rlock(nullptr);
    if (meta.strict_) {
      rlock = SharedMutex::ReadHolder(meta.accessAllThreadsLock_);
    }
    {
      std::lock_guard<std::mutex> g(meta.lock_);
      meta.erase(&(*threadEntry));
      // No need to hold the lock any longer; the ThreadEntry is private to this
      // thread now that it's been removed from meta.
    }
    // NOTE: User-provided deleter / object dtor itself may be using ThreadLocal
    // with the same Tag, so dispose() calls below may (re)create some of the
    // elements or even increase elementsCapacity, thus multiple cleanup rounds
    // may be required.
    for (bool shouldRun = true; shouldRun;) {
      shouldRun = false;
      FOR_EACH_RANGE (i, 0, threadEntry->elementsCapacity) {
        if (threadEntry->elements[i].dispose(TLPDestructionMode::THIS_THREAD)) {
          shouldRun = true;
        }
      }
    }
    pthread_setspecific(meta.pthreadKey_, nullptr);
  }
    
    template <typename K, typename M, typename H, typename E, typename A>
void swap(
    F14NodeMap<K, M, H, E, A>& lhs,
    F14NodeMap<K, M, H, E, A>& rhs) noexcept(noexcept(lhs.swap(rhs))) {
  lhs.swap(rhs);
}
    
      explicit F14BasicSet(
      std::size_t initialCapacity,
      hasher const& hash = hasher{},
      key_equal const& eq = key_equal{},
      allocator_type const& alloc = allocator_type{})
      : table_{initialCapacity, hash, eq, alloc} {}
    
    #include <folly/ExceptionString.h>
    
      static KeepAlive<SerialExecutor> create(
      KeepAlive<Executor> parent = getKeepAliveToken(getCPUExecutor().get()));
    
    FOLLY_ALWAYS_INLINE int __builtin_popcountll(unsigned long long x) {
  return int(__popcnt64(x));
}