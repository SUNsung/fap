
        
        PlatformKind swift::targetPlatform(LangOptions &LangOpts) {
  if (LangOpts.Target.isMacOSX()) {
    return (LangOpts.EnableAppExtensionRestrictions
                ? PlatformKind::OSXApplicationExtension
                : PlatformKind::OSX);
  }
    }
    
    #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    void CacheImpl::releaseValue(void *Value) {
  // FIXME: Implementation.
}
    
      if (*BufferPtr == '\n')
    return 1;
    
      while ((!QueuedTasks.empty() && !SubtaskFailed) ||
         !ExecutingTasks.empty()) {
    // Enqueue additional tasks if we have additional tasks, we aren't already
    // at the parallel limit, and no earlier subtasks have failed.
    while (!SubtaskFailed && !QueuedTasks.empty() &&
           ExecutingTasks.size() < MaxNumberOfParallelTasks) {
      std::unique_ptr<DummyTask> T(QueuedTasks.front().release());
      QueuedTasks.pop();
    }
    }
    
    from GYBUnicodeDataUtils import GraphemeClusterBreakPropertyTable, get_extended_grapheme_cluster_rules_matrix
    
        void emitCodeContext(clang::FullSourceLoc Loc,
                         clang::DiagnosticsEngine::Level Level,
                         SmallVectorImpl<clang::CharSourceRange>& Ranges,
                         ArrayRef<clang::FixItHint> Hints) override {}
    
      IAMResult(DeclName declName, IAMAccessorKind kind, unsigned selfIdx,
            EffectiveClangContext dc)
      : name(declName), accessorKind(kind), selfIndex(selfIdx),
        effectiveDC(dc) {}
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
    namespace {
    }
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope handle_scope(isolate);
    }
    
    #ifndef CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
#define CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {}
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
    
    {
} // namespace extensions
#endif

    
    namespace extensions {
    }
    
    IMPL_ADDWEIGHTED(u8)
IMPL_ADDWEIGHTED(s8)
IMPL_ADDWEIGHTED(u16)
IMPL_ADDWEIGHTED(s16)
IMPL_ADDWEIGHTED(u32)
IMPL_ADDWEIGHTED(s32)
IMPL_ADDWEIGHTED(f32)
    
    namespace CAROTENE_NS {
    }
    
    template <typename Op, int elsize> struct vtail
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        //do nothing since there couldn't be enough data
        (void)src0;
        (void)src1;
        (void)dst;
        (void)op;
        (void)x;
        (void)width;
    }
};
template <typename Op> struct vtail<Op, 2>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    }
    }
    }
    
    bool isSupportedConfiguration()
{
#ifdef CAROTENE_NEON
    return true;
#else
    return false;
#endif
}
    
    
    {        for (; i < size.width; ++i)
            result += s32(src0[i]) * s32(src1[i]);
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
    
    {} //namespace
#endif
    
                if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
            if (mask[1])
                process(src, j + 8, j + 16, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
        for ( ; j < roiw8; j += 8)
        {
            internal::prefetch(src + j);
            int16x8_t v_src = vld1q_s16(src + j);
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
    inline float32x4_t vrsqrtq_f32(float32x4_t val)
{
    float32x4_t e = vrsqrteq_f32(val);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    return e;
}
    
        for (ptrdiff_t y = 0; y < height; ++y)
    {
        const u8 * srow0 = y == 0 && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::max<ptrdiff_t>(y - 1, 0));
        const u8 * srow1 = internal::getRowPtr(srcBase, srcStride, y);
        const u8 * srow2 = y + 1 == height && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::min(y + 1, height - 1));
        u8 * drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    namespace mxnet {
/*! \brief namespace of arguments */
namespace op {
/*! \brief super class of all gradient function argument */
struct GradFunctionArgument {
  /*! \brief The real data */
  TBlob data;
};
    }
    }
    
    // Decalre Factory function, used for dispatch specialization
template<typename xpu>
Operator* CreateOp(CaffeLossParam param, int);
    
    DMLC_REGISTER_PARAMETER(CaffeLossParam);
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
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
    
      // Return a key suitable for lookup in a MemTable.
  Slice memtable_key() const { return Slice(start_, end_ - start_); }
    
    namespace leveldb {
    }
    
        // Invariant: we never leave < kHeaderSize bytes in a block.
    assert(kBlockSize - block_offset_ - kHeaderSize >= 0);
    
      Status FindFiles() {
    std::vector<std::string> filenames;
    Status status = env_->GetChildren(dbname_, &filenames);
    if (!status.ok()) {
      return status;
    }
    if (filenames.empty()) {
      return Status::IOError(dbname_, 'repair found no files');
    }
    }
    
      // Simple iterator tests
  {
    SkipList<Key, Comparator>::Iterator iter(&list);
    ASSERT_TRUE(!iter.Valid());
    }
    
    Speed::~Speed()
{
    CC_SAFE_RELEASE(_innerAction);
}
    
    //
// OrbitCamera
//
    
        /* Sets the Eye value of the Camera. 
     * 
     * @param eye The Eye value of the Camera.
     * @js NA
     */
    void setEye(const Vec3 &eye);
    void setEye(float x, float y, float z);
    /* Returns the Eye value of the Camera. 
     *
     * @return The Eye value of the Camera.
     * @js NA
     */
    const Vec3& getEye() const { return _eye; }
    /* Sets the Center value of the Camera. 
     *
     * @param center The Center value of the Camera.
     * @js NA
     */
    void setCenter(const Vec3 &center);
    /* Returns the Center value of the Camera. 
     *
     * @return The Center value of the Camera.
     * @js NA
     */
    const Vec3& getCenter() const { return _center; }
    /* Sets the Up value of the Camera. 
     *
     * @param up The Up value of the Camera.
     * @js NA
     */
    void setUp(const Vec3 &up);
    /* Returns the Up value of the Camera. 
     *
     * @return The Up value of the Camera.
     * @js NA
     */
    const Vec3& getUp() const { return _up; }
    
    PointArray::~PointArray()
{
    CCLOGINFO('deallocing PointArray: %p', this);
}
    
    /** @class CatmullRomBy
 * An action that moves the target with a CatmullRom curve by a certain distance.
 * A Catmull Rom is a Cardinal Spline with a tension of 0.5.
 * http://en.wikipedia.org/wiki/Cubic_Hermite_spline#Catmull.E2.80.93Rom_spline
 * @ingroup Actions
 */
class CC_DLL CatmullRomBy : public CardinalSplineBy
{
public:
    /** Creates an action with a Cardinal Spline array of points and tension.
     * @param dt In seconds.
     * @param points An PointArray.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var dt,var table).
     * In lua: local create(local dt, local table).
     * @endcode
     */
    static CatmullRomBy* create(float dt, PointArray* points);
    }
    
    EaseBezierAction* EaseBezierAction::clone() const
{
    // no copy constructor
    if (_inner)
    {
        auto ret = EaseBezierAction::create(_inner->clone());
        if (ret)
        {
            ret->setBezierParamer(_p0,_p1,_p2,_p3);
        }
        return ret;
    }
    }
    
    void ActionInstant::update(float /*time*/)
{
    _done = true;
}
    
        //
    // Overrides
    //
    virtual RepeatForever* clone() const override;
    virtual RepeatForever* reverse(void) const override;
    virtual void startWithTarget(Node* target) override;
    /**
     * @param dt In seconds.
     */
    virtual void step(float dt) override;
    virtual bool isDone(void) const override;
    
CC_CONSTRUCTOR_ACCESS:
    RepeatForever()
    : _innerAction(nullptr)
    {}
    virtual ~RepeatForever();
    
    
    {
    {
    {            if (action->getTag() == (int)tag && action->getOriginalTarget() == target)
            {
                removeActionAtIndex(i, element);
                break;
            }
        }
    }
}
    
        /** 
    * @brief Initializes the action with grid size, random seed and duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int seed);
    
    Animation::~Animation(void)
{
    CCLOGINFO('deallocing Animation: %p', this);
}
    
    AnimationCache* AnimationCache::getInstance()
{
    if (! s_sharedAnimationCache)
    {
        s_sharedAnimationCache = new (std::nothrow) AnimationCache();
        s_sharedAnimationCache->init();
    }
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/