
        
        #include 'atom/browser/api/atom_api_browser_window.h'
    
    
    {}  // namespace api
    
    void Event::SetSenderAndMessage(content::RenderFrameHost* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
    
    {}  // namespace atom
    
    namespace atom {
    }
    
    #include <string>
    
    namespace atom {
    }
    
    StringType ArgvToCommandLineString(const StringVector& argv);
#endif
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-param-util.h'
#include 'gtest/internal/gtest-param-util-generated.h'
    
     private:
  std::vector<TestPartResult> array_;
    
    // Now the tricky part: you need to register all test patterns before
// you can instantiate them.  The first argument of the macro is the
// test case name; the rest are the names of the tests in this test
// case.
REGISTER_TYPED_TEST_CASE_P(FooTest,
                           DoesBlah, HasPropertyA);
    
    
    {    linked_ptr_internal const* p = ptr;
    while (p->next_ != ptr) p = p->next_;
    p->next_ = this;
    next_ = ptr;
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5>
class ValueArray5 {
 public:
  ValueArray5(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5) : v1_(v1), v2_(v2), v3_(v3),
      v4_(v4), v5_(v5) {}
    }
    
    // A handy wrapper for AddRef.
#define GTEST_ADD_REF_(T) typename ::std::tr1::gtest_internal::AddRef<T>::type
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    bool AuthPropertyIterator::operator!=(const AuthPropertyIterator& rhs) const {
  return !operator==(rhs);
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
    #include <grpc/support/port_platform.h>
    
    DynamicThreadPool::DynamicThreadPool(int reserve_threads)
    : shutdown_(false),
      reserve_threads_(reserve_threads),
      nthreads_(0),
      threads_waiting_(0) {
  for (int i = 0; i < reserve_threads_; i++) {
    std::lock_guard<std::mutex> lock(mu_);
    nthreads_++;
    new DynamicThread(this);
  }
}
    
    //////////////////////////////////////////////////////////////////////
    
      SrcLoc(SrcPos start, SrcPos past)
    : start(start)
    , past(past)
  {}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
    #include 'hphp/runtime/base/directory.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    req::ptr<File> PhpStreamWrapper::openFD(const char *sFD) {
  if (is_cli_mode()) {
    raise_warning('Direct access to file descriptors is not '
                  'available via remote unix server execution');
    return nullptr;
  }
  if (RuntimeOption::ServerExecutionMode()) {
    raise_warning('Direct access to file descriptors '
                  'is only available from command-line');
    return nullptr;
  }
    }
    
        static Follow* createWithOffset(Node* followedNode,float xOffset,float yOffset,const Rect& rect = Rect::ZERO);
    
    /** Return boundarySet.
     *
     * @return Return boundarySet.
     */
    bool isBoundarySet() const { return _boundarySet; }
    /** Alter behavior - turn on/off boundary. 
     *
     * @param value Turn on/off boundary.
     */
    void setBoundarySet(bool value) { _boundarySet = value; }
    
    /** @deprecated Alter behavior - turn on/off boundary. 
     *
     * @param value Turn on/off boundary.
     */
    CC_DEPRECATED_ATTRIBUTE void setBoudarySet(bool value) { setBoundarySet(value); }
    
    OrbitCamera* OrbitCamera::clone() const
{
    // no copy constructor
    return OrbitCamera::create(_duration, _radius, _deltaRadius, _angleZ, _deltaAngleZ, _angleX, _deltaAngleX);
}
    
    // CatmullRom Spline formula:
Vec2 ccCardinalSplineAt(const Vec2 &p0, const Vec2 &p1, const Vec2 &p2, const Vec2 &p3, float tension, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    
    /*
     * Formula: s(-ttt + 2tt - t)P1 + s(-ttt + tt)P2 + (2ttt - 3tt + 1)P2 + s(ttt - 2tt + t)P3 + (-2ttt + 3tt)P3 + s(ttt - tt)P4
     */
    float s = (1 - tension) / 2;
    }
    
        /** Get the value of a controlPoint at a given index.
     *
     * @js NA
     * @param index Get the point in index.
     * @return A Vec2.
     */
    const Vec2& getControlPointAtIndex(ssize_t index) const;
    
    protected:
    /* lens center position */
    Vec2 _position;
    float _radius;
    /** lens effect. Defaults to 0.7 - 0 means no effect, 1 is very strong effect */
    float _lensEffect;
    /** lens is concave. (true = concave, false = convex) default is convex i.e. false */
    bool _concave;
    
    
    /** Pauses the target: all running actions and newly added actions will be paused.
     *
     * @param target    A certain target.
     */
    virtual void pauseTarget(Node *target);
    
    
    {    /**  A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. If UserInfo is nil, then no notification will be broadcast. */
    ValueMap _userInfo;
    
private:
    CC_DISALLOW_COPY_AND_ASSIGN(AnimationFrame);
};
    
    #endif // __CCATLAS_NODE_H__
    
        /**
     * set the data to be a pointer to a number of Quads
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad quads
     */
    void setQuads(V3F_C4B_T2F_Quad *quads, int numberOfQuads);