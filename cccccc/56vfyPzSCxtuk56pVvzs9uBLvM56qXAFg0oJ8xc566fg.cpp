
        
          /// Build the components of an Objective-C method descriptor for the given
  /// subscript's method implementations.
  void emitObjCGetterDescriptorParts(IRGenModule &IGM,
                                     SubscriptDecl *subscript,
                                     llvm::Constant *&selectorRef,
                                     llvm::Constant *&atEncoding,
                                     llvm::Constant *&impl);
    
    void CodeCompletionOrganizer::Impl::sort(Options options) {
  sortRecursive(options, rootGroup.get(), completionHasExpectedTypes);
  if (options.showTopNonLiteralResults != 0)
    sortTopN(options, rootGroup.get(), completionHasExpectedTypes);
}
    
    
    {  bool checkValue(SILValue Value);
};
    
    - (void)appendAction:(ObjectBehaviorAction)action;
- (void)enumerate:(void (^)(ObjectBehaviorAction))block;
- (void)reset;
- (void)dump;
@end
    
    public:
  /// The replacement type.
  Type getReplacement() const { return Replacement; }
  
  /// The protocol conformances for the replacement. These appear in the same
  /// order as Archetype->getConformsTo() for the substituted archetype.
  const ArrayRef<ProtocolConformanceRef> getConformances() const {
    return Conformance;
  }
  
  Substitution() {}
  
  Substitution(Type Replacement, ArrayRef<ProtocolConformanceRef> Conformance);
    
    // The compiler generates the swift_once_t values as word-sized zero-initialized
// variables, so we want to make sure swift_once_t isn't larger than the
// platform word or the function below might overwrite something it shouldn't.
static_assert(sizeof(swift_once_t) <= sizeof(void*),
              'swift_once_t must be no larger than the platform word');
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    extern JSClass  *jsb_cocos2d_Physics3DObject_class;
extern JSObject *jsb_cocos2d_Physics3DObject_prototype;
    
    #endif // __cocos2dx_cocosdenshion_h__

    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.PhysicsJointRotaryLimit',0,&tolua_err)) goto tolua_lerror;
#endif
    
    
    
    
    mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
    glDrawArrays(GL_LINE_LOOP, 0, vertexCount);
    
    protected:
	friend class DestructionListener;
	friend class BoundaryListener;
	friend class ContactListener;
    friend class Box2DView;
    
    			// Top horizontal
			shape.Set(b2Vec2(-20.0f, 20.0f), b2Vec2(20.0f, 20.0f));
			ground->CreateFixture(&sd);
    
    class BodyTypes : public Test
{
public:
	BodyTypes()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    }