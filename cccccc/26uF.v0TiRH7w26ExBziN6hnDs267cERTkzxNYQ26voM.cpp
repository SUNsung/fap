
        
        #include 'absl/strings/str_cat.h'
#include 'absl/strings/str_format.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/types.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/stream_executor/blas.h'
#include 'tensorflow/stream_executor/device_memory.h'
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/core/platform/types.h'
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
      // infeed_slices_'s shape should be a tuple of shape (buffers, token).
  const auto& infeed_shape = infeed_slices_.shape();
  TF_RET_CHECK(infeed_shape.IsTuple())
      << ShapeUtil::HumanStringWithLayout(infeed_shape);
  TF_RET_CHECK(infeed_shape.tuple_shapes().size() == 2)
      << ShapeUtil::HumanStringWithLayout(infeed_shape);
  TF_RET_CHECK(infeed_shape.tuple_shapes(1).IsToken())
      << ShapeUtil::HumanStringWithLayout(infeed_shape);
  TF_RET_CHECK(
      ShapeUtil::Equal(infeed_buffers.shape(), infeed_shape.tuple_shapes(0)))
      << 'Expected infeed of shape '
      << ShapeUtil::HumanStringWithLayout(infeed_shape.tuple_shapes(0))
      << ' but was '
      << ShapeUtil::HumanStringWithLayout(infeed_buffers.shape());
    
    // A thunk that infeeds data. Data must be already resident on the
// device. This thunk performs an intra-device copy from that location
// to the buffer allocated for the infeed op.
class InfeedThunk : public Thunk {
 public:
  // Constructs a InfeedThunk that copies data from the on-device
  // infeed queue into the buffers in the given shape tree.
  InfeedThunk(const ShapeTree<BufferAllocation::Slice>& infeed_slices,
              const HloInstruction* hlo_instruction);
    }
    
     private:
  // Extra data stored in NcclAllReduceThunk whose types we don't want exposed
  // in the header file.  (This is mainly because the implementation of
  // NcclAllReduceThunk is different depending on whether CUDA is enabled in the
  // build, and we don't want to expose *that* mess in the header.)
  struct AuxData;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        OP_REQUIRES(
        context, TensorShapeUtils::IsVectorOrHigher(buffer_shape),
        errors::InvalidArgument('Output must be at least 1-D, ',
                                'got shape: ', buffer_shape.DebugString()));
    
      unsigned NumRegionCounters = 0;
    
    namespace {
    }
    
    #ifndef SWIFT_SIL_DEBUGSCOPE_H
#define SWIFT_SIL_DEBUGSCOPE_H
    
      void appendFunctionInputType(ArrayRef<AnyFunctionType::Param> params,
                               const ValueDecl *forDecl = nullptr);
  void appendFunctionResultType(Type resultType,
                                const ValueDecl *forDecl = nullptr);
    
    #endif // BITCOIN_QT_NETWORKSTYLE_H

    
    
    {    /* On the first run, return 0 to force a second run */
    if (counter == 0) {
        memset(nonce32, 0, 32);
        return 1;
    }
    /* On the second run, return an overflow to force a third run */
    if (counter == 1) {
        memset(nonce32, 0xff, 32);
        return 1;
    }
    /* On the next run, return a valid nonce, but flip a coin as to whether or not to fail signing. */
    memset(nonce32, 1, 32);
    return secp256k1_rand_bits(1);
}
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; void sha256_sse4(void *input_data, UINT32 digest[8], UINT64 num_blks)
;; arg 1 : pointer to input data
;; arg 2 : pointer to digest
;; arg 3 : Num blocks
section .text
global sha256_sse4
align 32
sha256_sse4:
    push	rbx
%ifndef LINUX
    push	rsi
    push	rdi
%endif
    push	rbp
    push	r13
    push	r14
    push	r15
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
    Status FaultInjectionTestEnv::RenameFile(const std::string& s,
                                         const std::string& t) {
  Status ret = EnvWrapper::RenameFile(s, t);
    }
    
      void Wait() override;
    
    /// Applies [Batch Normalization](https://arxiv.org/abs/1502.03167) to an input.
///
/// Refer to the documentation for
/// [`BatchNorm1d`](https://pytorch.org/docs/stable/nn.html#torch.nn.BatchNorm1d)
/// in PyTorch to learn more about the exact semantics of this module, __but see
/// the note below regarding differences between the Python and C++ API__.
///
/// \rst
/// .. attention::
///   In the Python API, there are separate implementations for 1-D, 2-D and 3-D
///   BatchNorm. In C++, there is only one `BatchNorm` module, which works for
///   any of these dimensions.
/// \endrst
class TORCH_API BatchNormImpl : public torch::nn::Cloneable<BatchNormImpl> {
 public:
  explicit BatchNormImpl(int64_t features)
      : BatchNormImpl(BatchNormOptions(features)) {}
  explicit BatchNormImpl(BatchNormOptions options);
    }
    
    namespace caffe2 {
    }
    
    				wchar_t cmderCfgRoot[MAX_PATH] = { 0 };
				PathCombine(cmderCfgRoot, userProfile, L'cmder_cfg');
    
    class GfxPath;
class GfxFont;
class GfxColorSpace;
class GfxSeparationColorSpace;
class PDFRectangle;
struct PSFont8Info;
struct PSFont16Enc;
class PSOutCustomColor;
class Function;
class PDFDoc;
    
    // A '1' in this array means the character is white space.  A '1' or
// '2' means the character ends a name or command.
static const char specialChars[256] = {
  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,   // 0x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 1x
  1, 0, 0, 0, 0, 2, 0, 0, 2, 2, 0, 0, 0, 0, 0, 2,   // 2x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0,   // 3x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 4x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 5x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 6x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 7x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 8x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 9x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ax
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // bx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // cx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // dx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ex
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0    // fx
};
    
    #endif

    
      // Get angle
  int getAngle() { return angle; }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006, 2009, 201, 2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2006 Krzysztof Kowalczyk <kkowalczyk@gmail.com>
// Copyright (C) 2009 Ilya Gorenbein <igorenbein@finjan.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {  Stream *makeStream(Object *dict, Guchar *fileKey,
		     CryptAlgorithm encAlgorithm, int keyLength,
		     int objNum, int objGen, std::set<int> *fetchOriginatorNums);
  void shift(int objNum = -1);
};
    
    
    {  if (colorSpace->getMode() == csPattern) {
    mono = gFalse;
    gray = gFalse;
    gdi = gFalse;
  } else {
    colorSpace->getRGB(color, &rgb);
    if (rgb.r != rgb.g || rgb.g != rgb.b || rgb.b != rgb.r) {
      mono = gFalse;
      gray = gFalse;
    } else if (!((rgb.r == 0 && rgb.g == 0 && rgb.b == 0) ||
		 (rgb.r == gfxColorComp1 &&
		  rgb.g == gfxColorComp1 &&
		  rgb.b == gfxColorComp1))) {
      mono = gFalse;
    }
  }
  if (opacity != 1 || blendMode != gfxBlendNormal) {
    transparency = gTrue;
  }
}
    
      enum MediaWindowType {
    windowFloating = 0,
    windowFullscreen,
    windowHidden,
    windowEmbedded
  };
    
      SoundKind getSoundKind() { return kind; }
  GooString *getFileName() { return fileName; }
  double getSamplingRate() { return samplingRate; }
  int getChannels() { return channels; }
  int getBitsPerSample() { return bitsPerSample; }
  SoundEncoding getEncoding() { return encoding; }
    
        /*
     * Given a CountScan PlanStage object count, call work() on
     * count until we reach IS_EOF.  Tally up how many objects
     * we've counted and return the count.
     */
    int runCount(CountScan* count) {
        int countWorks = 0;
        WorkingSetID wsid;
    }
    
    
//--------------------------------------------------------------------------
//
//   operator ==   (comparison)    Consider to patterns to be == if the
//                                 pattern strings and the flags are the same.
//                                 Note that pattern strings with the same
//                                 characters can still be considered different.
//
//--------------------------------------------------------------------------
UBool   RegexPattern::operator ==(const RegexPattern &other) const {
    if (this->fFlags == other.fFlags && this->fDeferredStatus == other.fDeferredStatus) {
        if (this->fPatternString != NULL && other.fPatternString != NULL) {
            return *(this->fPatternString) == *(other.fPatternString);
        } else if (this->fPattern == NULL) {
            if (other.fPattern == NULL) {
                return TRUE;
            }
        } else if (other.fPattern != NULL) {
            UTEXT_SETNATIVEINDEX(this->fPattern, 0);
            UTEXT_SETNATIVEINDEX(other.fPattern, 0);
            return utext_equals(this->fPattern, other.fPattern);
        }
    }
    return FALSE;
}
    
        // Identical-prefix test.
    const UChar *leftLimit;
    const UChar *rightLimit;
    int32_t equalPrefixLength = 0;
    if(leftLength < 0) {
        leftLimit = NULL;
        rightLimit = NULL;
        UChar c;
        while((c = left[equalPrefixLength]) == right[equalPrefixLength]) {
            if(c == 0) { return UCOL_EQUAL; }
            ++equalPrefixLength;
        }
    } else {
        leftLimit = left + leftLength;
        rightLimit = right + rightLength;
        for(;;) {
            if(equalPrefixLength == leftLength) {
                if(equalPrefixLength == rightLength) { return UCOL_EQUAL; }
                break;
            } else if(equalPrefixLength == rightLength ||
                      left[equalPrefixLength] != right[equalPrefixLength]) {
                break;
            }
            ++equalPrefixLength;
        }
    }
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
      // If you change the code to read more than the size of buf, then
  // expand the buf size here.
  array_wrapper<unsigned char, 255> buf;
    
      Time serializedTime_;
    
      virtual void startup() = 0;
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
    namespace aria2 {
    }
    
    #endif // D_DHT_UNKNOWN_MESSAGE_H

    
    std::vector<DNSCache::AddrEntry>::iterator
DNSCache::CacheEntry::find(const std::string& addr)
{
  for (auto i = addrEntries_.begin(), eoi = addrEntries_.end(); i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return i;
    }
  }
  return addrEntries_.end();
}
    
    Context::Context(size_t stack_size, coroutine_func_t fn, void* private_data) :
        fn_(fn), stack_size_(stack_size), private_data_(private_data)
{
    if (-1 == getcontext(&ctx_))
    {
        swoole_throw_error(SW_ERROR_CO_GETCONTEXT_FAILED);
        return;
    }
    }
    
    static int g_receive_count = 0;
    
    class Exception
{
public:
    int code;
    const char *msg;
    }
    
            void addWrite() {
            if (m_write) return;
            m_write = new QSocketNotifier(m_ctx->c.fd, QSocketNotifier::Write, 0);
            connect(m_write, SIGNAL(activated(int)), this, SLOT(write()));
        }
    
    
    {    ~lru_cache_test_class()
    {
        ++dtor_num;
    }
};
    
    namespace swoole
{
/**
 * This cache isn't thread safe
 */
class LRUCache
{
private:
    typedef std::pair<time_t, std::shared_ptr<void>> cache_node_t;
    typedef std::list<std::pair<std::string, cache_node_t>> cache_list_t;
    }
    }
    
    static uint32_t sha1_password_with_nonce(char* buf, const char* nonce, const char* password)
{
    char hash_0[20] = {0};
    swoole_sha1(password, strlen(password), (uchar *) hash_0);
    }
    
    #include <atomic>
    
    bool js_cocos2dx_Pass_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Pass_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Pass(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_Pass_unbind(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_bind(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_clone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_getGLProgramState(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_getVertexAttributeBinding(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_getHash(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_setVertexAttribBinding(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_Pass_createWithGLProgramState(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    {
    {        for (ssize_t i = 0, size = _meshes.size(); i < size; ++i) {
            // cloning is needed in order to have one state per sprite
            auto glstate = spritedata->glProgramStates.at(i);
            _meshes.at(i)->setGLProgramState(glstate->clone());
        }
        return true;
    }
    
    return false;
}
    
    class EditBoxImplLinux: public EditBoxImplCommon
{
public:
    /**
     * @js NA
     */
    EditBoxImplLinux(EditBox* pEditText);
    /**
     * @js NA
     * @lua NA
     */
    virtual ~EditBoxImplLinux();
    
    }
    
    Scene::~Scene()
{
#if CC_USE_3D_PHYSICS && CC_ENABLE_BULLET_INTEGRATION
    CC_SAFE_RELEASE(_physics3DWorld);
    CC_SAFE_RELEASE(_physics3dDebugCamera);
#endif
#if CC_USE_NAVMESH
    CC_SAFE_RELEASE(_navMesh);
#endif
    Director::getInstance()->getEventDispatcher()->removeEventListener(_event);
    CC_SAFE_RELEASE(_event);
    
#if CC_USE_PHYSICS
    delete _physicsWorld;
#endif
    
#if CC_ENABLE_GC_FOR_NATIVE_OBJECTS
    auto sEngine = ScriptEngineManager::getInstance()->getScriptEngine();
    if (sEngine)
    {
        sEngine->releaseAllChildrenRecursive(this);
    }
#endif // CC_ENABLE_GC_FOR_NATIVE_OBJECTS
}
    
            switch (color_type)
        {
        case PNG_COLOR_TYPE_GRAY:
            _renderFormat = Texture2D::PixelFormat::I8;
            break;
        case PNG_COLOR_TYPE_GRAY_ALPHA:
            _renderFormat = Texture2D::PixelFormat::AI88;
            break;
        case PNG_COLOR_TYPE_RGB:
            _renderFormat = Texture2D::PixelFormat::RGB888;
            break;
        case PNG_COLOR_TYPE_RGB_ALPHA:
            _renderFormat = Texture2D::PixelFormat::RGBA8888;
            break;
        default:
            break;
        }
    
    http://www.cocos2d-x.org
    
        virtual std::string title() const override;
    virtual std::string subtitle() const override;
    
        if(needsTranslation)
    {
        Mat4 t;
        Mat4::createTranslation(anchorPoint.x, anchorPoint.y, 0, &t);
        mv = mv * t;
    }
    
    mv = mv * lookupMatrix;