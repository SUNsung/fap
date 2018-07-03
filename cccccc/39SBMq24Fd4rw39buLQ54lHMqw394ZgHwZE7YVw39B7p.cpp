
        
        
    {}  // namespace nwapi
    
    
    {}  // namespace nwapi
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    Menu::~Menu() {
  Destroy();
}
    
        bool Write(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return WriteText(data);
        break;
        case TYPE_HTML:
        return WriteHTML(data);
        break;
        case TYPE_RTF:
        return WriteRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return WriteImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;
    }
    
    void leveldb_compact_range(
    leveldb_t* db,
    const char* start_key, size_t start_key_len,
    const char* limit_key, size_t limit_key_len) {
  Slice a, b;
  db->rep->CompactRange(
      // Pass NULL Slice if corresponding 'const char*' is NULL
      (start_key ? (a = Slice(start_key, start_key_len), &a) : NULL),
      (limit_key ? (b = Slice(limit_key, limit_key_len), &b) : NULL));
}
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
      FindFileTest() : disjoint_sorted_files_(true) { }
    
        // FLAGS_page_size is defaulted to 1024
    if (FLAGS_page_size != 1024) {
      char page_size[100];
      snprintf(page_size, sizeof(page_size), 'PRAGMA page_size = %d',
               FLAGS_page_size);
      status = sqlite3_exec(db_, page_size, NULL, NULL, &err_msg);
      ExecErrorCheck(status, err_msg);
    }
    
    	ClassDB::bind_method(D_METHOD('poll'), &StreamPeerSSL::poll);
	ClassDB::bind_method(D_METHOD('accept_stream', 'stream'), &StreamPeerSSL::accept_stream);
	ClassDB::bind_method(D_METHOD('connect_to_stream', 'stream', 'validate_certs', 'for_hostname'), &StreamPeerSSL::connect_to_stream, DEFVAL(false), DEFVAL(String()));
	ClassDB::bind_method(D_METHOD('get_status'), &StreamPeerSSL::get_status);
	ClassDB::bind_method(D_METHOD('disconnect_from_stream'), &StreamPeerSSL::disconnect_from_stream);
    
    
    {	return false;
}
    
    	virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    
    
    
    /*Note that we do not provide a macro for abs(), because it is provided as a
   library function, which we assume is translated into an intrinsic to avoid
   the function call overhead and then implemented in the smartest way for the
   target platform.
  With modern gcc (4.x), this is true: it uses cmov instructions if the
   architecture supports it and branchless bit-twiddling if it does not (the
   speed difference between the two approaches is not measurable).
  Interestingly, the bit-twiddling method was patented in 2000 (US 6,073,150)
   by Sun Microsystems, despite prior art dating back to at least 1996:
   http://web.archive.org/web/19961201174141/www.x86.org/ftp/articles/pentopt/PENTOPT.TXT
  On gcc 3.x, however, our assumption is not true, as abs() is translated to a
   conditional jump, which is horrible on deeply piplined architectures (e.g.,
   all consumer architectures for the past decade or more).
  Also be warned that -C*abs(x) where C is a constant is mis-optimized as
   abs(C*x) on every gcc release before 4.2.3.
  See bug http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34130 */
    
    /*============================================================================
**      On Intel Pentium processors (especially PIII and probably P4), converting
**      from float to int is very slow. To meet the C specs, the code produced by
**      most C compilers targeting Pentium needs to change the FPU rounding mode
**      before the float to int conversion is performed.
**
**      Changing the FPU rounding mode causes the FPU pipeline to be flushed. It
**      is this flushing of the pipeline which is so slow.
**
**      Fortunately the ISO C99 specifications define the functions lrint, lrintf,
**      llrint and llrintf which fix this problem as a side effect.
**
**      On Unix-like systems, the configure process should have detected the
**      presence of these functions. If they weren't found we have to replace them
**      here with a standard C cast.
*/
    
    /**
 * Install the terminate / unexpected handlers to dump exceptions.
 */
void installHandlers();
    
    // Some queue implementations (for example, LifoSemMPMCQueue or
// PriorityLifoSemMPMCQueue) support both blocking (BLOCK) and
// non-blocking (THROW) behaviors.
enum class QueueBehaviorIfFull { THROW, BLOCK };
    
      Atom<Node*> head_;
    
      ~HazptrWideCAS() {
    delete node_.load(std::memory_order_relaxed);
  }
    
    
    {  return instance_ptr_;
}
    
    #include <fcntl.h>
    
    DEFINE_FIND_STATIC_METHOD(KXlog_logWrite2, KXlog, 'logWrite2', '(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;IIJJLjava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_logWrite2
  (JNIEnv *env, jclass, int _level, jstring _tag, jstring _filename,
		  jstring _funcname, jint _line, jint _pid, jlong _tid, jlong _maintid, jstring _log) {
    }
    
        if (st.url_length + st.head_length > _rawlen) return LONGLINKPACK_CONTINUE_HEAD;
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT