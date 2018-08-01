
        
        extern JSClass  *jsb_cocos2d_Physics3DHingeConstraint_class;
extern JSObject *jsb_cocos2d_Physics3DHingeConstraint_prototype;
    
    
    
    int register_all_cocos2dx_cocosdenshion(lua_State* tolua_S);
    
    
    
    
    
        virtual void DrawTransform(const b2Transform& xf);
    
    
    {	Test* test;
};
    
    #endif

    
    				float32 gravity = 10.0f;
				float32 I = body->GetInertia();
				float32 mass = body->GetMass();
    
      // We should schedule destroyInstances() only after the singleton was
  // created. This will ensure it will be destroyed before singletons,
  // not managed by folly::Singleton, which were initialized in its
  // constructor
  SingletonVault::scheduleDestroyInstances();
    
    #include <folly/portability/Windows.h>
    
    namespace folly {
  using std::goodMallocSize;
  using std::jemallocMinInPlaceExpandable;
  using std::usingJEMalloc;
  using std::smartRealloc;
  using std::checkedMalloc;
  using std::checkedCalloc;
  using std::checkedRealloc;
}
    
    FOLLY_ALWAYS_INLINE hazptr_holder::hazptr_holder(hazptr_domain& domain) {
  domain_ = &domain;
  if (LIKELY(
          HAZPTR_TC &&
          (HAZPTR_ONE_DOMAIN || &domain == &default_hazptr_domain()))) {
    auto hprec = hazptr_tc_try_get();
    if (LIKELY(hprec != nullptr)) {
      hazptr_ = hprec;
      HAZPTR_DEBUG_PRINT(this << ' ' << domain_ << ' ' << hazptr_);
      return;
    }
  }
  hazptr_ = domain_->hazptrAcquire();
  HAZPTR_DEBUG_PRINT(this << ' ' << domain_ << ' ' << hazptr_);
  if (hazptr_ == nullptr) { std::bad_alloc e; throw e; }
}
    
    struct MockClock {
 public:
  using duration = std::chrono::steady_clock::duration;
  using time_point = std::chrono::steady_clock::time_point;
    }
    
      /**
   * Class representing various options: file descriptor behavior, and
   * whether to use $PATH for searching for the executable,
   *
   * By default, we don't use $PATH, file descriptors are closed if
   * the close-on-exec flag is set (fcntl FD_CLOEXEC) and inherited
   * otherwise.
   */
  class Options {
    friend class Subprocess;
   public:
    Options() {}  // E.g. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=58328
    }
    
    #if defined(__APPLE__) || defined(_MSC_VER)
#define FOLLY_STATIC_CTOR_PRIORITY_MAX
#else
// 101 is the highest priority allowed by the init_priority attribute.
// This priority is already used by JEMalloc and other memory allocators so
// we will take the next one.
#define FOLLY_STATIC_CTOR_PRIORITY_MAX __attribute__((__init_priority__(102)))
#endif
    
    EmptyTagVectorType kEmptyTagVector = {};