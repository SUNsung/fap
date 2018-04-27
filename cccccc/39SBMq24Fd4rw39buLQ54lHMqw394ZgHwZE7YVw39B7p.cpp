
        
        #include 'matrix.h'
#include 'include_gunit.h'
#include 'genericvector.h'
#include 'tprintf.h'
    
    bool TessBaseAPI::GetDoubleVariable(const char *name, double *value) const {
  DoubleParam *p = ParamUtils::FindParam<DoubleParam>(
      name, GlobalParams()->double_params, tesseract_->params()->double_params);
  if (p == nullptr) return false;
  *value = (double)(*p);
  return true;
}
    
      /**
   * Set the value of an internal 'parameter.'
   * Supply the name of the parameter and the value as a string, just as
   * you would in a config file.
   * Returns false if the name lookup failed.
   * Eg SetVariable('tessedit_char_blacklist', 'xyz'); to ignore x, y and z.
   * Or SetVariable('classify_bln_numeric_mode', '1'); to set numeric-only mode.
   * SetVariable may be used before Init, but settings will revert to
   * defaults on End().
   *
   * Note: Must be called after Init(). Only works for non-init variables
   * (init variables should be passed to Init()).
   */
  bool SetVariable(const char* name, const char* value);
  bool SetDebugVariable(const char* name, const char* value);
    
    
    {  // Number of 32 bit outputs held in each register.
  int num_outputs_per_register_;
  // Maximum number of registers that we will use to hold outputs.
  int max_output_registers_;
  // Number of 8 bit inputs in the inputs register.
  int num_inputs_per_register_;
  // Number of inputs in each weight group.
  int num_inputs_per_group_;
  // Number of groups of inputs to be broadcast.
  int num_input_groups_;
  // The weights matrix reorganized in whatever way suits this instance.
  std::vector<int8_t> shaped_w_;
  // A series of functions to compute a partial result.
  std::vector<PartialFunc> partial_funcs_;
};
    
    
    {  // ****************** Pass 6 *******************
  // Do whole document or whole block rejection pass
  if (!tessedit_test_adaption) {
    set_global_loc_code(LOC_DOC_BLK_REJ);
    quality_based_rejection(page_res_it, good_quality_doc);
  }
}
    
    TEST(LogTest, UnexpectedLastType) {
  Write('foo');
  SetByte(6, kLastType);
  FixChecksum(0, 3);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('missing start'));
}
    
      // Open database.  Disable compression since it affects the creation
  // of layers and the code below is trying to test against a very
  // specific scenario.
  leveldb::DB* db;
  leveldb::Options db_options;
  db_options.create_if_missing = true;
  db_options.compression = leveldb::kNoCompression;
  ASSERT_OK(leveldb::DB::Open(db_options, dbpath, &db));
    
    #include 'table/filter_block.h'
    
    TEST(CRC, Extend) {
  ASSERT_EQ(Value('hello world', 11),
            Extend(Value('hello ', 6), 'world', 5));
}
    
    
    {  double Median() const;
  double Percentile(double p) const;
  double Average() const;
  double StandardDeviation() const;
};
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    #endif // __cocos2dx_cocosdenshion_h__

    
    
    
    
    
        if (argc == 2)
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        ok &= luaval_to_vec2(tolua_S, 2, &arg0, 'cc.PhysicsBody:createEdgeSegment');
        ok &= luaval_to_vec2(tolua_S, 3, &arg1, 'cc.PhysicsBody:createEdgeSegment');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsBody_createEdgeSegment'', nullptr);
            return 0;
        }
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeSegment(arg0, arg1);
        object_to_luaval<cocos2d::PhysicsBody>(tolua_S, 'cc.PhysicsBody',(cocos2d::PhysicsBody*)ret);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        cocos2d::PhysicsMaterial arg2;
        ok &= luaval_to_vec2(tolua_S, 2, &arg0, 'cc.PhysicsBody:createEdgeSegment');
        ok &= luaval_to_vec2(tolua_S, 3, &arg1, 'cc.PhysicsBody:createEdgeSegment');
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2, 'cc.PhysicsBody:createEdgeSegment');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsBody_createEdgeSegment'', nullptr);
            return 0;
        }
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeSegment(arg0, arg1, arg2);
        object_to_luaval<cocos2d::PhysicsBody>(tolua_S, 'cc.PhysicsBody',(cocos2d::PhysicsBody*)ret);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        cocos2d::PhysicsMaterial arg2;
        double arg3;
        ok &= luaval_to_vec2(tolua_S, 2, &arg0, 'cc.PhysicsBody:createEdgeSegment');
        ok &= luaval_to_vec2(tolua_S, 3, &arg1, 'cc.PhysicsBody:createEdgeSegment');
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2, 'cc.PhysicsBody:createEdgeSegment');
        ok &= luaval_to_number(tolua_S, 5,&arg3, 'cc.PhysicsBody:createEdgeSegment');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsBody_createEdgeSegment'', nullptr);
            return 0;
        }
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeSegment(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::PhysicsBody>(tolua_S, 'cc.PhysicsBody',(cocos2d::PhysicsBody*)ret);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d\n ', 'cc.PhysicsBody:createEdgeSegment',argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_physics_PhysicsBody_createEdgeSegment'.',&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
    struct TestEntry
{
	const char *name;
	TestCreateFcn *createFcn;
};
    
    
    {
    {			body->CreateFixture(&fd);
		}
	}
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
#include <yoga/Yoga.h>
    
    struct Layout
{
    double left;
    double right;
    }
    
    namespace facebook {
    }
    
    namespace facebook {
#define ENABLE_FBASSERT 1
    }
    
    
    {
    {}}
