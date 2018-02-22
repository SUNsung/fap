
        
        #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    class FooTest : public ::testing::TestWithParam<const char*> {
  // You can implement all the usual class fixture members here.
};
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(HasNewFatalFailureHelper);
};
    
    // Helper function for *_STRNE on wide strings.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTRNE(const char* s1_expression,
                                          const char* s2_expression,
                                          const wchar_t* s1,
                                          const wchar_t* s2);
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
      // Smart pointer members.
  void reset(T* ptr = NULL) {
    depart();
    capture(ptr);
  }
  T* get() const { return value_; }
  T* operator->() const { return value_; }
  T& operator*() const { return *value_; }
    
     private:
  // LocalTestInfo structure keeps information about a single test registered
  // with TEST_P macro.
  struct TestInfo {
    TestInfo(const char* a_test_case_base_name,
             const char* a_test_base_name,
             TestMetaFactoryBase<ParamType>* a_test_meta_factory) :
        test_case_base_name(a_test_case_base_name),
        test_base_name(a_test_base_name),
        test_meta_factory(a_test_meta_factory) {}
    }
    
    $for i [[
$range j 1..i
$range k 2..i
template <$for j, [[typename T$j]]>
struct Types$i {
  typedef T1 Head;
  typedef Types$(i-1)<$for k, [[T$k]]> Tail;
};
    
    #endif // JPEG_DECODER_H

    
    # if defined(CLZ64)
/**
 * OC_ILOGNZ_64 - Integer binary logarithm of a non-zero 64-bit value.
 * @_v: A non-zero 64-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_64() instead.
 */
#  define OC_ILOGNZ_64(_v) (CLZ64_OFFS-CLZ64(_v))
/**
 * OC_ILOG_64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_64(_v)   (OC_ILOGNZ_64(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_64(_v) (oc_ilog64(_v))
#  define OC_ILOG_64(_v)   (oc_ilog64(_v))
# endif
    
    static const static_bookblock _resbook_16u_0={
  {
    {0},
    {0,0,&_16u0__p1_0},
    {0,0,&_16u0__p2_0},
    {0,0,&_16u0__p3_0},
    {0,0,&_16u0__p4_0},
    {0,0,&_16u0__p5_0},
    {&_16u0__p6_0,&_16u0__p6_1},
    {&_16u0__p7_0,&_16u0__p7_1,&_16u0__p7_2}
   }
};
static const static_bookblock _resbook_16u_1={
  {
    {0},
    {0,0,&_16u1__p1_0},
    {0,0,&_16u1__p2_0},
    {0,0,&_16u1__p3_0},
    {0,0,&_16u1__p4_0},
    {0,0,&_16u1__p5_0},
    {0,0,&_16u1__p6_0},
    {&_16u1__p7_0,&_16u1__p7_1},
    {&_16u1__p8_0,&_16u1__p8_1},
    {&_16u1__p9_0,&_16u1__p9_1,&_16u1__p9_2}
   }
};
static const static_bookblock _resbook_16u_2={
  {
    {0},
    {0,0,&_16u2_p1_0},
    {0,0,&_16u2_p2_0},
    {0,0,&_16u2_p3_0},
    {0,0,&_16u2_p4_0},
    {&_16u2_p5_0,&_16u2_p5_1},
    {&_16u2_p6_0,&_16u2_p6_1},
    {&_16u2_p7_0,&_16u2_p7_1},
    {&_16u2_p8_0,&_16u2_p8_1},
    {&_16u2_p9_0,&_16u2_p9_1,&_16u2_p9_2}
   }
};
    
      {1,0,32,  &_residue_44_low_un,
   &_huff_book__44u0__long,&_huff_book__44u0__long,
   &_resbook_44u_0,&_resbook_44u_0}
};
static const vorbis_residue_template _res_44u_1[]={
  {1,0,16,  &_residue_44_low_un,
   &_huff_book__44u1__short,&_huff_book__44u1__short,
   &_resbook_44u_1,&_resbook_44u_1},
    
    static const vorbis_residue_template _res_8u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__8u0__single,&_huff_book__8u0__single,
   &_resbook_8u_0,&_resbook_8u_0},
};
static const vorbis_residue_template _res_8u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__8u1__single,&_huff_book__8u1__single,
   &_resbook_8u_1,&_resbook_8u_1},
};
    
    #define todB_nn(x) todB(x)
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
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
    
    
#undef MULT16_32_Q16
static inline int MULT16_32_Q16(int a, int b)
{
    int c;
    asm volatile('MULT $ac1,%0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (c): 'i' (16));
    return c;
}
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher.reset(TreeUpdater::Create('sync'));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
    syncher->Init(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    for (size_t i = 0; i < trees.size(); ++i) {
      this->DoPrune(*trees[i]);
    }
    param.learning_rate = lr;
    syncher->Update(gpair, p_fmat, trees);
  }
    }
    
    
    {  // index_base_[fid]: least bin id for feature fid
  std::vector<uint32_t> index_base_;
};
    
    #ifdef ANDROID
#include <jni.h>
    
    #include <vector>
#include <string>
    
        template <class var> var* Variable(const char* _key) const
    { return boost::any_cast<var>(m_variablemap.find(_key)->second); }
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);
    
    #include <jni.h>
    
    
    {  ~IosFlagsSaver() {
    ios_.flags(flags_);
  }
};
    
        layout.width = YGNodeLayoutGetWidth(m_node);
    layout.height = YGNodeLayoutGetHeight(m_node);
    
    #else
# define ALOGV(...) ((void)0)
# define ALOGD(...) ((void)0)
# define ALOGI(...) ((void)0)
# define ALOGW(...) ((void)0)
# define ALOGE(...) ((void)0)
# define ALOGF(...) ((void)0)
#endif

    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    #include 'CoreClasses.h'
    
            // Listen on port 9002
        echo_server.listen(3000);
    
                    if (stream->data) {
                    // If we now received all bytes we expect from last echoing, echo again
                    remainingBytes -= nread;
                    if (!remainingBytes) {
                        cout << 'Echo performance: ' << double(sent) / (1e-3 * duration_cast<microseconds>(high_resolution_clock::now() - startPoint).count()) << ' echoes/ms' << endl;
                        echo();
                    }
                } else {
                    // Receive Socket.IO connection messages and ignore them
                    char message[1024];
                    int fd;
                    uv_fileno((uv_handle_t *) stream, &fd);
                    for (int r = nread; r < 221; ) {
                        r += std::max<int>(0, recv(fd, message, sizeof(message), 0));
                    }
    }
    
        static bool refusePayloadLength(uint64_t length, WebSocketState<isServer> *webSocketState) {
        WebSocket<isServer> *webSocket = static_cast<WebSocket<isServer> *>(webSocketState);
        return length > Group<isServer>::from(webSocket)->maxPayload;
    }
    
    template struct HttpSocket<SERVER>;
template struct HttpSocket<CLIENT>;
    
    namespace uS {
    }
    
    public:
    bool isClosed() {
        return state.fd == -1;
    }
    
    public:
    template <bool isServer>
    Group<isServer> *createGroup(int extensionOptions = 0, unsigned int maxPayload = 16777216) {
        return new Group<isServer>(extensionOptions, maxPayload, this, nodeData);
    }
    
            addrinfo hints, *result;
        memset(&hints, 0, sizeof(addrinfo));
        hints.ai_family = AF_UNSPEC;
        hints.ai_socktype = SOCK_STREAM;
        if (getaddrinfo(hostname, std::to_string(port).c_str(), &hints, &result) != 0) {
            return nullptr;
        }