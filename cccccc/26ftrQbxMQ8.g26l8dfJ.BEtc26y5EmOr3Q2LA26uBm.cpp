
        
        #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
    struct PageletTransport final : Transport, Synchronizable {
  PageletTransport(
    const String& url, const Array& headers, const String& postData,
    const String& remoteHost,
    const std::set<std::string> &rfc1867UploadedFiles,
    const Array& files, int timeoutSeconds);
    }
    
    SSATmp* implInstanceOfD(IRGS& env, SSATmp* src, const StringData* className);
    
    #include <algorithm>
    
    #ifndef  lint
FILE_RCSID('@(#)$File: magic.c,v 1.78 2013/01/07 18:20:19 christos Exp $')
#endif  /* lint */
    
      // We rebuild a variant type here because using boosts fails on opensource
  // builds because it at some point requires a copy construction.
  // This vector has one entry per prologue/translation stored in the two
  // vectors above, and it encodes the order in which they should be published.
  std::vector<Kind> order;
    
    /*
 * dlopen() the embedded shared object given by `desc'.
 *
 * Unfortunately, there's no way to do the equivalent of dlopen() on data
 * within another file, or even in memory.  This means we have to copy the
 * section into a temporary file and then dlopen() that.
 *
 * Returns the result of dlopen() on success, else nullptr.  Also logs the
 * failure condition with Logger on failure.
 */
void* dlopen_embedded_data(const embedded_data& desc, char* tmp_filename);
    
      bool initShadow(int afdt_listen,
                  const std::string& afdt_filename, int id,
                  const std::vector<int> &inherited_fds);
  static void runShadow(int afdt_fd);
  void closeShadow();
    
    
    {  bool ret;
  if (isLongOption(option)) {
    ret = setLongOption(option, value.toInt64());
  } else {
    raise_warning('curl_share_setopt():'
                  'Invalid curl share configuration option');
    ret = false;
  }
  return ret;
}
    
        Size(void)
    : width(0.0)
    , height(0.0)
    {
    }
    
        method(setMeasureFunc);
    method(unsetMeasureFunc);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    namespace facebook {
    }