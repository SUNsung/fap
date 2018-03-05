
        
            return;
  } else if (method == 'ClearCache') {
    ClearCache(GetRenderProcessHost());
    return;
  } else if (method == 'CreateShortcut') {
#if defined(OS_WIN)
    base::string16 path;
    arguments.GetString(0, &path);
    
      void SetUpCommandLine(base::CommandLine* command_line) override {
    command_line->AppendSwitch(switches::kUseFakeDeviceForMediaStream);
    command_line->AppendSwitchASCII(switches::kJavaScriptFlags, '--expose-gc');
    }
    
    // Sets up the CHILD_PROCESS_EXE path to properly point to the helper app.
void OverrideChildProcessPath();
    
    
    {  switch (item_id) {
    case WebAutofillClient::MenuItemIDAutocompleteEntry:
    case WebAutofillClient::MenuItemIDPasswordEntry:
      // User selected an Autocomplete or password entry, so we fill directly.
      SetNodeText(value, &element_);
      break;
    case WebAutofillClient::MenuItemIDDataListEntry:
      AcceptDataListSuggestion(value);
      break;
  }
}
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
    
    {}  // namespace nwapi
    
    #include <string>
#include <set>
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    namespace {
    }
    
    aura::Window* Menu::GetActiveNativeView(content::RenderFrameHost* rfh) {
  content::WebContents* web_contents =
    content::WebContents::FromRenderFrameHost(rfh);
  if (!web_contents) {
    LOG(ERROR) << 'Menu: couldn't find WebContents';
    return NULL;
  }
  return web_contents->GetFullscreenRenderWidgetHostView()
             ? web_contents->GetFullscreenRenderWidgetHostView()
                   ->GetNativeView()
             : web_contents->GetNativeView();
}
    
            if (pD->get_bits_no_markers(1))
          s = p1;
        else
          s = m1;
      }
      else
      {
        if (r != 15)
        {
          pD->m_eob_run = 1 << r;
    }
    
    static const vorbis_residue_template _res_8s_0[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c0_s_single,&_huff_book__8c0_s_single,
   &_resbook_8s_0,&_resbook_8s_0},
};
static const vorbis_residue_template _res_8s_1[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c1_s_single,&_huff_book__8c1_s_single,
   &_resbook_8s_1,&_resbook_8s_1},
};
    
     ********************************************************************/
    
    /* We currently support 4 ARM variants:
 * arch[0] -> ARMv4
 * arch[1] -> ARMv5E
 * arch[2] -> ARMv6
 * arch[3] -> NEON
 */
#define OPUS_ARCHMASK 3
    
    #undef MULT32_32_Q31
static inline int MULT32_32_Q31(int a, int b)
{
    int r;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (r): 'i' (31));
    return r;
}
    
    #undef silk_MLA_uint
static OPUS_INLINE opus_int32 silk_MLA_uint(opus_uint32 a32, opus_uint32 b32, opus_uint32 c32){
    opus_uint32 ret;
    ops_count += 4;
    ret = a32 + b32 * c32;
    return ret;
}
    
        if (sub_batch->Has(String::NewSymbol('column_family'))) {
      if (!has_key_for_array(sub_batch, 'put') &&
          !has_key_for_array(sub_batch, 'delete')) {
        return scope.Close(Boolean::New(false));
      }
    }
    
    
    {    } else if (query == GET_OP) {
      // Assumes that a non-existent key just returns <empty>
      std::string res;
      slists.Get(key, &res);
      ASSERT_EQ(res, parallel_copy[key]);
    }
    
    // Insert element value into (list: key), right before/after
//  the first occurrence of pivot
//   : throws RedisListException
int RedisLists::Insert(const std::string& key, const std::string& pivot,
                       const std::string& value, bool insert_after) {
  // Get the original list data
  std::string data;
  db_->Get(get_option_, key, &data);
    }
    
      /// Remove the first (or last) num occurrences of value from the list (key)
  /// Return the number of elements removed.
  /// May throw RedisListException
  int Remove(const std::string& key, int32_t num,
             const std::string& value);
  int RemoveFirst(const std::string& key, int32_t num,
                  const std::string& value);
  int RemoveLast(const std::string& key, int32_t num,
                 const std::string& value);
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowGlobalSeqNo
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowGlobalSeqNo(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_global_seqno);
}
    
    
    {
    {      if (child.Valid()) {
        PERF_TIMER_GUARD(seek_min_heap_time);
        minHeap_.push(&child);
      }
    }
    direction_ = kForward;
    {
      PERF_TIMER_GUARD(seek_min_heap_time);
      current_ = CurrentForward();
    }
  }
    
    class MergingIterator;
    
      jstring jname =
      (jstring)env->CallObjectMethod(m_jcallback_obj, jname_method_id);
  if(env->ExceptionCheck()) {
    // exception thrown
    return;
  }
  jboolean has_exception = JNI_FALSE;
  m_name = JniUtil::copyString(env, jname, &has_exception);  // also releases jname
  if (has_exception == JNI_TRUE) {
    // exception thrown
    return;
  }