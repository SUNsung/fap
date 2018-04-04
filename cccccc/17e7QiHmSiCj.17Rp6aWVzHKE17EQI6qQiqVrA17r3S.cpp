
        
          virtual bool lookupAdditions(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    @interface MutableDataVerifier : NSMutableData {
    ObjectBehaviorVerifier *_verifier;
    NSMutableData *_data;
}
@property (readonly) ObjectBehaviorVerifier *verifier;
@end
    
    SILDebugScope::SILDebugScope(SILLocation Loc, SILFunction *SILFn,
                             const SILDebugScope *ParentScope ,
                             const SILDebugScope *InlinedCallSite)
    : Loc(Loc), InlinedCallSite(InlinedCallSite) {
  if (ParentScope)
    Parent = ParentScope;
  else {
    assert(SILFn && 'no parent provided');
    Parent = SILFn;
  }
}
    
    #endif // SWIFT_INDEX_INDEXSYMBOL_H

    
      /// Checks whether the current substitution is canonical.
  bool isCanonical() const;
    
    #endif  // GTEST_HAS_PARAM_TEST
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
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
    
      tuple& operator=(const tuple& t) { return CopyFrom(t); }
    
    // Known limitations: we don't support passing an
// std::tr1::reference_wrapper<T> to make_tuple().  And we don't
// implement tie().
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
        next_layer_.async_write_some(buffers,
        BOOST_ASIO_MOVE_CAST(BOOST_ASIO_HANDLER_TYPE(WriteHandler,
            void (boost::system::error_code, std::size_t)))(init.handler));
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    class ptime;
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #if !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConeTwistConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConeTwistConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getBFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFixThresh(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFixThresh(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan1(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getTwistAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_GetPointForAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setMaxMotorImpulseNormalized(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getTwistSpan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getAFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_enableMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_Physics3DConeTwistConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    extern JSClass  *jsb_cocostudio_timeline_BoneNode_class;
extern JSObject *jsb_cocostudio_timeline_BoneNode_prototype;
    
    int lua_register_cocos2dx_physics_PhysicsJointLimit(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,'cc.PhysicsJointLimit');
    tolua_cclass(tolua_S,'PhysicsJointLimit','cc.PhysicsJointLimit','cc.PhysicsJoint',nullptr);
    }
    
    	b2Body* m_groundBody;
	b2AABB m_worldAABB;
	ContactPoint m_points[k_maxContactPoints];
	int32 m_pointCount;
	DestructionListener m_destructionListener;
	GLESDebugDraw m_debugDraw;
	int32 m_textLine;
	b2World* m_world;
	b2Body* m_bomb;
	b2MouseJoint* m_mouseJoint;
	b2Vec2 m_bombSpawnPoint;
	bool m_bombSpawning;
	b2Vec2 m_mouseWorld;
	int32 m_stepCount;