
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
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
    
    done_hash:
%ifndef LINUX
    movdqa	xmm6,[rsp + _XMM_SAVE + 0*16]
    movdqa	xmm7,[rsp + _XMM_SAVE + 1*16]
    movdqa	xmm8,[rsp + _XMM_SAVE + 2*16]
    movdqa	xmm9,[rsp + _XMM_SAVE + 3*16]
    movdqa	xmm10,[rsp + _XMM_SAVE + 4*16]
    movdqa	xmm11,[rsp + _XMM_SAVE + 5*16]
    movdqa	xmm12,[rsp + _XMM_SAVE + 6*16]
%endif
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    // A utility routine: write 'data' to the named file and Sync() it.
extern Status WriteStringToFileSync(Env* env, const Slice& data,
                                    const std::string& fname);
    
    #if !UCONFIG_NO_TRANSLITERATION
    
        UBool numeric = settings->isNumeric();
    if(equalPrefixLength > 0) {
        UBool unsafe = FALSE;
        if(equalPrefixLength != leftLength) {
            int32_t i = equalPrefixLength;
            UChar32 c;
            U8_NEXT_OR_FFFD(left, i, leftLength, c);
            unsafe = data->isUnsafeBackward(c, numeric);
        }
        if(!unsafe && equalPrefixLength != rightLength) {
            int32_t i = equalPrefixLength;
            UChar32 c;
            U8_NEXT_OR_FFFD(right, i, rightLength, c);
            unsafe = data->isUnsafeBackward(c, numeric);
        }
        if(unsafe) {
            // Identical prefix: Back up to the start of a contraction or reordering sequence.
            UChar32 c;
            do {
                U8_PREV_OR_FFFD(left, 0, equalPrefixLength, c);
            } while(equalPrefixLength > 0 && data->isUnsafeBackward(c, numeric));
        }
        // See the notes in the UTF-16 version.
    }
    
    #include 'unicode/scientificnumberformatter.h'
#include 'unicode/dcfmtsym.h'
#include 'unicode/fpositer.h'
#include 'unicode/utf16.h'
#include 'unicode/uniset.h'
#include 'decfmtst.h'
#include 'unicode/decimfmt.h'
    
    ScriptSet &ScriptSet::intersect(UScriptCode script, UErrorCode &status) {
    ScriptSet t;
    t.set(script, status);
    if (U_SUCCESS(status)) {
        this->intersect(t);
    }
    return *this;
}
    
UBool ScriptSet::intersects(const ScriptSet &other) const {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        if ((bits[i] & other.bits[i]) != 0) {
            return true;
        }
    }
    return false;
}
    
    U_NAMESPACE_END
    
    #endif

    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
    U_NAMESPACE_BEGIN
    
    
/**
 * A formatter for small, positive integers.
 */
class U_I18N_API SmallIntFormatter : public UMemory {
public:
    /**
     * Estimates the actual digit count needed to format positiveValue
     * using the given range of digit counts.
     * Returns a value that is at least the actual digit count needed.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static int32_t estimateDigitCount(
            int32_t positiveValue, const IntDigitCountRange &range);
    }
    
    // Create a collation key from a bit array.
CollationKey::CollationKey(const uint8_t* newValues, int32_t count)
    : UObject(), fFlagAndLength(count),
      fHashCode(kInvalidHashCode)
{
    if (count < 0 || (newValues == NULL && count != 0) ||
            (count > getCapacity() && reallocate(count, 0) == NULL)) {
        setToBogus();
        return;
    }
    }
    
    const char *StandardPlural::getKeyword(Form p) {
    U_ASSERT(ZERO <= p && p < COUNT);
    return gKeywords[p];
}
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
      virtual void startup() = 0;
    
    
    {} // namespace aria2

    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createPeerLookupTask(
    const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
    const std::shared_ptr<PeerStorage>& peerStorage)
{
  auto task = std::make_shared<DHTPeerLookupTask>(ctx, tcpPort);
  // TODO this may be not freed by RequestGroup::releaseRuntimeResource()
  task->setPeerStorage(peerStorage);
  setCommonProperty(task);
  return task;
}
    
    void DHTTokenTracker::updateTokenSecret()
{
  memcpy(secret_[1], secret_[0], SECRET_SIZE);
  util::generateRandomData(secret_[0], SECRET_SIZE);
}
    
    
    {  void remove(const std::string& hostname, uint16_t port);
};
    
    using json = nlohmann::json;
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    
    {  return Merge(key_slice, value_slice);
}
    
    
    {}  //  namespace rocksdb

    
      // When an actor (column family) requests a stop token, all writes will be
  // stopped until the stop token is released (deleted)
  std::unique_ptr<WriteControllerToken> GetStopToken();
  // When an actor (column family) requests a delay token, total delay for all
  // writes to the DB will be controlled under the delayed write rate. Every
  // write needs to call GetDelay() with number of bytes writing to the DB,
  // which returns number of microseconds to sleep.
  std::unique_ptr<WriteControllerToken> GetDelayToken(
      uint64_t delayed_write_rate);
  // When an actor (column family) requests a moderate token, compaction
  // threads will be increased
  std::unique_ptr<WriteControllerToken> GetCompactionPressureToken();
    
    
    { private:
  Options options_;
  CompactionOptions compact_options_;
};
    
    #ifndef ROCKSDB_LITE
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
    
    {  // Should be set if the DB has a non-default comparator.
  // See comment in WriteBatchWithIndex constructor.
  const Comparator* cmp = BytewiseComparator();
};
    
    bool OrbitCamera::initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    if ( ActionInterval::initWithDuration(t) )
    {
        _radius = radius;
        _deltaRadius = deltaRadius;
        _angleZ = angleZ;
        _deltaAngleZ = deltaAngleZ;
        _angleX = angleX;
        _deltaAngleX = deltaAngleX;
    }
    }
    
    bool Waves::initWithDuration(float duration, const Size& gridSize, unsigned int waves, float amplitude, bool horizontal, bool vertical)
{
    if (Grid3DAction::initWithDuration(duration, gridSize))
    {
        _waves = waves;
        _amplitude = amplitude;
        _amplitudeRate = 1.0f;
        _horizontal = horizontal;
        _vertical = vertical;
    }
    }
    
        if (ret)
    {
        ret->autorelease();
    }
    
    void ActionManager::removeActionByTag(int tag, Node *target)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if (target == nullptr)
    {
        return;
    }
    }
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
    
    {protected:
    ClippingRectangleNode()
    : _clippingEnabled(true)
    {
    }
    
    void onBeforeVisitScissor();
    void onAfterVisitScissor();
    
    Rect _clippingRegion;
    bool _clippingEnabled;
    
    CustomCommand _beforeVisitCmdScissor;
    CustomCommand _afterVisitCmdScissor;
};
    
            if (_componentMap.find(componentName) != _componentMap.end())
        {
            CCASSERT(false, 'ComponentContainer already have this kind of component');
            break;
        }
        _componentMap[componentName] = com;
        com->retain();
        com->setOwner(_owner);
        com->onAdd();
    
    #include '2d/CCFont.h'