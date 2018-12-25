
        
        bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
    bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv);
    
    
    {  mate::Dictionary dict(isolate, exports);
  dict.Set('net', Net::Create(isolate));
  dict.Set('Net', Net::GetConstructor(isolate)->GetFunction());
}
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(Net);
};
    
    #if defined(OS_WIN)
  // Static callback invoked when a message comes in to our messaging window.
  static LRESULT CALLBACK WndProcStatic(HWND hwnd,
                                        UINT message,
                                        WPARAM wparam,
                                        LPARAM lparam);
    
    
    {}  // namespace atom
    
    
    {}  // namespace mate
    
      // Finds out the TrackableObject from the class it wraps.
  static T* FromWrappedClass(v8::Isolate* isolate,
                             base::SupportsUserData* wrapped) {
    int32_t id = GetIDFromWrappedClass(wrapped);
    if (!id)
      return nullptr;
    return FromWeakMapID(isolate, id);
  }
    
      // There is a new update which has been downloaded.
  virtual void OnUpdateDownloaded(const std::string& release_notes,
                                  const std::string& release_name,
                                  const base::Time& release_date,
                                  const std::string& update_url) {}
    
    #ifndef BITCOIN_REVERSELOCK_H
#define BITCOIN_REVERSELOCK_H
    
    
    {    /* d += a3 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rcx\n'
    'movq %%rdx,%%r15\n'
    /* d += a2 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d = a0 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c = a4 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* d += a4 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a0 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a4 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a1 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a4 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a2 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a1 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b2 (last use of %%r10 = a0) */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0), t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* d += a4 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rcx only) */
    'shrdq $52,%%r15,%%rcx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rcx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'b'(b), 'D'(r)
: '%rax', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
        if (len > 0) {
        /* The z of the final point gives us the 'global Z' for the table. */
        r[i].x = a[i].x;
        r[i].y = a[i].y;
        *globalz = a[i].z;
        r[i].infinity = 0;
        zs = zr[i];
    }
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
    static void CheckParseTorReplyMapping(std::string input, std::map<std::string,std::string> expected)
{
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(') + input + ')');
    auto ret = ParseTorReplyMapping(input);
    BOOST_CHECK_EQUAL(ret.size(), expected.size());
    auto r_it = ret.begin();
    auto e_it = expected.begin();
    while (r_it != ret.end() && e_it != expected.end()) {
        BOOST_CHECK_EQUAL(r_it->first, e_it->first);
        BOOST_CHECK_EQUAL(r_it->second, e_it->second);
        r_it++;
        e_it++;
    }
}
    
    namespace
{
static bool ParsePrechecks(const std::string& str)
{
    if (str.empty()) // No empty string allowed
        return false;
    if (str.size() >= 1 && (json_isspace(str[0]) || json_isspace(str[str.size()-1]))) // No padding allowed
        return false;
    if (str.size() != strlen(str.c_str())) // No embedded NUL characters allowed
        return false;
    return true;
}
    }
    
    
    {	void set_flag(PhysicsServer::HingeJointFlag p_flag, bool p_value);
	bool get_flag(PhysicsServer::HingeJointFlag p_flag) const;
};
#endif

    
    #ifdef __ANDROID__
#include 'platform/android/thread_jandroid.h'
#else
#define JNIEnv void
#define jobject void *
#endif
    
    	BIND_ENUM_CONSTANT(CONNECTION_DISCONNECTED);
	BIND_ENUM_CONSTANT(CONNECTION_CONNECTING);
	BIND_ENUM_CONSTANT(CONNECTION_CONNECTED);
    
    	static Error _get_token(const CharType *p_str, int &index, int p_len, Token &r_token, int &line, String &r_err_str);
	static Error _parse_value(Variant &value, Token &token, const CharType *p_str, int &index, int p_len, int &line, String &r_err_str, Variant::ObjectConstruct *p_construct, void *p_ud);
	static Error _parse_array(Array &array, const CharType *p_str, int &index, int p_len, int &line, String &r_err_str, Variant::ObjectConstruct *p_construct, void *p_ud);
	static Error _parse_dict(Dictionary &dict, const CharType *p_str, int &index, int p_len, int &line, String &r_err_str, Variant::ObjectConstruct *p_construct, void *p_ud);
    
    	virtual float get_latency() { return 0; };
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    Status FilePathsConfigParserPlugin::update(const std::string& source,
                                           const ParserConfig& config) {
  Config::get().removeFiles(source);
  access_map_.erase(source);
  if (config.count('file_paths') == 0 &&
      config.count('file_paths_query') == 0) {
    return Status();
  }
    }
    
    class FilePathsConfigParserPluginTests : public testing::Test {
 public:
  void SetUp() override {
    Initializer::platformSetup();
    registryAndPluginInit();
    }
    }
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json':
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    #include <osquery/config/config.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
#include <osquery/utils/config/default_paths.h>
    
    bool Follow::initWithTargetAndOffset(Node *followedNode, float xOffset,float yOffset,const Rect& rect)
{
    CCASSERT(followedNode != nullptr, 'FollowedNode can't be NULL');
    if(followedNode == nullptr)
    {
        log('Follow::initWithTarget error: followedNode is nullptr!');
        return false;
    }
 
    followedNode->retain();
    _followedNode = followedNode;
    _worldRect = rect;
    _boundarySet = !rect.equals(Rect::ZERO);
    _boundaryFullyCovered = false;
    }
    
    class Node;
    
    /** An Array that contain control points.
 * Used by CardinalSplineTo and (By) and CatmullRomTo (and By) actions.
 * @ingroup Actions
 * @js NA
 */
class CC_DLL PointArray : public Ref, public Clonable
{
public:
    }
    
    Waves* Waves::create(float duration, const Size& gridSize, unsigned int waves, float amplitude, bool horizontal, bool vertical)
{
    Waves *action = new (std::nothrow) Waves();
    }
    
        /** initializes the action with the callback
     typedef void (Ref::*SEL_CallFunc)();
     @deprecated Use the std::function API instead.
     */
    CC_DEPRECATED_ATTRIBUTE bool initWithTarget(Ref* target);
    
    /** initializes the action with the std::function<void()>
     * @lua NA
     */
    bool initWithFunction(const std::function<void()>& func);
    
        /** Removes all actions from a certain target.
     All the actions that belongs to the target will be removed.
     *
     * @param target    A certain target.
     */
    virtual void removeAllActionsFromTarget(Node *target);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionPageTurn3D.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
    
    
    {    // Overrides
    virtual PageTurn3D* clone() const override;
    virtual void update(float time) override;
};
    
    protected:
    unsigned int _jumps;
    float _amplitude;
    float _amplitudeRate;
    
            for (auto& frameName : frameNames)
        {
            SpriteFrame* spriteFrame = frameCache->getSpriteFrameByName(frameName.asString());
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    PolygonInfo::PolygonInfo(const PolygonInfo& other)
: triangles()
, _isVertsOwner(true)
, _rect()
{
    _filename = other._filename;
    _isVertsOwner = true;
    _rect = other._rect;
    triangles.verts = new (std::nothrow) V3F_C4B_T2F[other.triangles.vertCount];
    triangles.indices = new (std::nothrow) unsigned short[other.triangles.indexCount];
    CCASSERT(triangles.verts && triangles.indices, 'not enough memory');
    triangles.vertCount = other.triangles.vertCount;
    triangles.indexCount = other.triangles.indexCount;
    memcpy(triangles.verts, other.triangles.verts, other.triangles.vertCount * sizeof(other.triangles.verts[0]));
    memcpy(triangles.indices, other.triangles.indices, other.triangles.indexCount * sizeof(other.triangles.indices[0]));
};