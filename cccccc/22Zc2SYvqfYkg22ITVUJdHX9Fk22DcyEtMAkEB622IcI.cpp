
        
          content::WebContents* web_contents_;  // Weak Reference.
  scoped_refptr<content::DevToolsAgentHost> agent_host_;
    
    
    {}  // namespace api
    
    
    {}  // namespace api
    
      AtomQuotaPermissionContext();
  virtual ~AtomQuotaPermissionContext();
    
      // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
    gfx::Size NativeFrameView::GetMinimumSize() const {
  return window_->GetMinimumSize();
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(NativeFrameView);
};
    
                // Formal parameter name.
            std::string m_name;
    
            StatusCategory Status::Category() const
        {
            return Ok() ? StatusCategory::NONE : m_state->m_category;
        }
    
                static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/std::string* p_data, int64_t p_expected_size);
            static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/bool* p_data, int64_t p_expected_size);
    
                If the input is a tensor of float, int32, or double, the data will be cast
            to int64s and the cats_int64s category list will be used for the lookups.
            )DOC')
        .TypeConstraint('T', { 'tensor(string)', 'tensor(int64)','tensor(int32)', 'tensor(float)','tensor(double)' }, 'allowed types.')
        .Attr('cats_int64s', 'list of cateogries, ints', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('cats_strings', 'list of cateogries, strings', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('zeros', 'if true and category is not present, will return all zeros, if false and missing category, operator will return false', AttrType::AttributeProto_AttributeType_INT);
    
    FunctionPtr CreateRNN(const ONNXIR::Node *node, const std::vector<Variable> &inputs, const std::string &direction,
    const std::vector<string> &activations, const std::vector<float> &activation_alpha, const std::vector<float> &activation_beta);
    
    
    {    // also update node groups
    for (auto groupIter : GetAllNodeGroups())
    {
        auto& group = *groupIter;
        for (int i = 0; i < group.size(); i++)
            if (group[i] == oldNode)
                group[i] = newNode;
    }
}
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    bool js_cocos2dx_physics3d_Physics3DShape_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DShape_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DShape(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DShape_initConvexHull(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_getbtShape(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_initSphere(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_initBox(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_initCapsule(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_initCylinder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_getShapeType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_createBox(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_createCylinder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_createConvexHull(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_createCapsule(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_createSphere(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DShape_Physics3DShape(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_studio_SkewFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_SkewFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_SkewFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_SkewFrame_getSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_getSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_SkewFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    #endif // __cocos2dx_csloader_h__

    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMin'', nullptr);
            return 0;
        }
        double ret = cobj->getMin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsJointRotaryLimit:getMin',argc, 0);
    return 0;
    
    #include 'Box2D/Box2D.h'
#include 'cocos2d.h'
    
    		// Should the body break?
		int32 count = contact->GetManifold()->pointCount;
    
    
    {			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-8.0f + 8.0f * i, 12.0f);
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&fd);
		}
    
    #include <assert.h>
#include <cstdlib>
#include <string.h>
    
    #endif  // GUETZLI_COLOR_TRANSFORM_H_

    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    
    {}  // namespace guetzli
