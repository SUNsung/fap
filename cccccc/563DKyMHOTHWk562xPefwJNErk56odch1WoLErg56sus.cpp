
        
          fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    namespace leveldb {
    }
    
    
    {  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
}
    
    // Page size. Default 1 KB
static int FLAGS_page_size = 1024;
    
    namespace leveldb {
    }
    
    // Asserts that a given statement causes the program to exit, with an
// integer exit status that satisfies predicate, and emitting error output
// that matches regex.
# define ASSERT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_FATAL_FAILURE_)
    
    #define EXPECT_EQ(expected, actual) \
  EXPECT_PRED_FORMAT2(::testing::internal:: \
                      EqHelper<GTEST_IS_NULL_LITERAL_(expected)>::Compare, \
                      expected, actual)
#define EXPECT_NE(expected, actual) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperNE, expected, actual)
#define EXPECT_LE(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperLE, val1, val2)
#define EXPECT_LT(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperLT, val1, val2)
#define EXPECT_GE(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperGE, val1, val2)
#define EXPECT_GT(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperGT, val1, val2)
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
        // No implementation - assignment is unsupported.
    void operator=(const Iterator& other);
    
    #include 'gtest/internal/gtest-port.h'
    
    
    {]]
};
    
    
    {    return -1;
  }
    
    #include <set>
    
    
    {  return 0;
}

    
    template <class T, class F>
double sum(const T& container, F functor) {
  double r = 0;
  for (auto v = container.begin(); v != container.end(); v++) {
    r += functor(*v);
  }
  return r;
}
    
    #include 'src/cpp/util/core_stats.h'
    
    bool js_cocos2dx_physics3d_Physics3DConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConstraint_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getConstraintType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getbtContraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_studio_ArmatureAnimation_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ArmatureAnimation_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ArmatureAnimation(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ArmatureAnimation_getSpeedScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_play(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_gotoAndPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_playWithIndexes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_setAnimationData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_setSpeedScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_getAnimationData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_gotoAndPlay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_playWithNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_getMovementCount(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_playWithIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ArmatureAnimation_ArmatureAnimation(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    {        ok &= luaval_to_boolean(tolua_S, 2,&arg0, 'cc.PhysicsShape:setSensor');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsShape_setSensor'', nullptr);
            return 0;
        }
        cobj->setSensor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsShape:setSensor',argc, 1);
    return 0;
    
    
    
    /// Random number in range [-1,1]
inline float32 RandomFloat()
{
	float32 r = (float32)(std::rand() & (RAND_LIMIT));
	r /= RAND_LIMIT;
	r = 2.0f * r - 1.0f;
	return r;
}
    
    class AddPair : public Test
{
public:
    }
    
    	static Test* Create()
	{
		return new BulletTest;
	}
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
        double top;
    double bottom;
    
        method(getWidth);
    method(getHeight);
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
    
    {private:
  const char* m_functionName;
  const char* m_fileName;
  int m_lineNumber;
};
    
    private:
  void initialize() {
    int ret = pthread_key_create(&m_key, m_cleanup);
    if (ret != 0) {
      const char *msg = '(unknown error)';
      switch (ret) {
      case EAGAIN:
        msg = 'PTHREAD_KEYS_MAX (1024) is exceeded';
        break;
      case ENOMEM:
        msg = 'Out-of-memory';
        break;
      }
      (void) msg;
      FBASSERTMSGF(0, 'pthread_key_create failed: %d %s', ret, msg);
    }
  }