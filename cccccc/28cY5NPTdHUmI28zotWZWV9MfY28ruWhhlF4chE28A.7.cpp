
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26>
internal::ValueArray26<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
    T26> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26) {
  return internal::ValueArray26<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15,
      v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
}
    
    // If the type list contains only one type, you can write that type
// directly without Types<...>:
//   INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, int);
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(ParameterizedTestCaseInfo);
};  // class ParameterizedTestCaseInfo
    
    #ifndef GTEST_SAMPLES_PRIME_TABLES_H_
#define GTEST_SAMPLES_PRIME_TABLES_H_
    
    #if !defined(OPUS_HAVE_RTCD)
#define OVERRIDE_OPUS_FFT (1)
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    # if defined(OPUS_X86_MAY_HAVE_SSE4_1)
#  define MAY_HAVE_SSE4_1(name) name ## _sse4_1
# else
#  define MAY_HAVE_SSE4_1(name) name ## _c
# endif
    
        if( lz & 1 ) {
        y = 32768;
    } else {
        y = 46214;        /* 46214 = sqrt(2) * 32768 */
    }
    
        r = __builtin_mips_shll_s_w(a, shift);
    
    int64_t Timer::GetThreadCPUTimeNanos() {
  return gettime_ns(CLOCK_THREAD_CPUTIME_ID);
}
    
    namespace jit {
    }
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
    
float Instruction::ImmFP32() {
  //  ImmFP: abcdefgh (8 bits)
  // Single: aBbb.bbbc.defg.h000.0000.0000.0000.0000 (32 bits)
  // where B is b ^ 1
  uint32_t bits = ImmFP();
  uint32_t bit7 = (bits >> 7) & 0x1;
  uint32_t bit6 = (bits >> 6) & 0x1;
  uint32_t bit5_to_0 = bits & 0x3f;
  uint32_t result = (bit7 << 31) | ((32 - bit6) << 25) | (bit5_to_0 << 19);
    }
    
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
    
      /**
   * The main process is not the (direct) parent of the worker process,
   * and therefore it has to delegate to the shadow process to do waitpid.
   * There can be a timeout (in seconds), after which SIGKILL is sent to
   * the child process.
   */
  static pid_t waitpid(pid_t pid, int *stat_loc, int options, int timeout = 0);
    
    CURLcode CurlShareResource::attachToCurlHandle(CURL *cp) {
  return curl_easy_setopt(cp, CURLOPT_SHARE, m_share);
}
    
        slists.Append('c', 'bbnagnagsx');
    slists.Append('a', 'sa');
    slists.Append('b', 'df');
    slists.Append('a', 'gh');
    slists.Append('a', 'jk');
    slists.Append('b', 'l;');
    slists.Append('c', 'rogosh');
    
    // Modules in this directory should keep internal keys wrapped inside
// the following class instead of plain strings so that we do not
// incorrectly use string comparisons instead of an InternalKeyComparator.
class InternalKey {
 private:
  std::string rep_;
 public:
  InternalKey() { }   // Leave rep_ as empty to indicate it is invalid
  InternalKey(const Slice& _user_key, SequenceNumber s, ValueType t) {
    AppendInternalKey(&rep_, ParsedInternalKey(_user_key, s, t));
  }
    }
    
    #include <jni.h>
#include <memory>
    
      if(env->ExceptionCheck()) {
    // exception thrown from CallObjectMethod
    env->ExceptionDescribe(); // print out exception to stderr
    env->DeleteLocalRef(jsKey);
    releaseJniEnv(attached_thread);
    return;
  }