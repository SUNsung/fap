
        
        void first(void) {
  printf('first\n');  // prints
  emscripten_sleep(1);
  longjmp(buf, 1);  // jumps back to where setjmp was called - making setjmp now
                    // return 1
}
    
      // Does this device use functionShadedFill(), axialShadedFill(), and
  // radialShadedFill()?  If this returns false, these shaded fills
  // will be reduced to a series of other drawing operations.
  virtual GBool useShadedFills(int type)
    { return type < 4 && level >= psLevel2; }
    
    //------------------------------------------------------------------------
    
      parse(tree);
    
    
    {private:
  
  PageTransitionType type;           // transition style
  int duration;                      // duration of the effect in seconds
  PageTransitionAlignment alignment; // dimension of the effect
  PageTransitionDirection direction; // direction of motion
  int angle;                         // direction in degrees
  double scale;                      // scale
  GBool rectangular;                 // is the area to be flown in rectangular?
  GBool ok;                          // set if created successfully
};
    
      // get stream start position
  lexer->skipToNextLine();
  pos = lexer->getPos();
    
    class ProfileData {
public:
    }
    
        bool bFound = false;
    
    
    {    static AAssetManager* assetmanager;
    static ZipFile* obbfile;
};
    
    #include <string>
    
    
    {    JS::RootedObject textureData(cx, jsb_cocostudio_TextureData_prototype);
    JS_DefineProperty(cx, textureData, 'contourDataList', JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_SHARED, js_get_TextureData_contourDataList, js_set_TextureData_contourDataList);
    JS_DefineProperty(cx, textureData, 'name', JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_SHARED, js_get_TextureData_name, js_set_TextureData_name);
    JS_DefineProperty(cx, textureData, 'width', JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_SHARED, js_get_TextureData_width, js_set_TextureData_width);
    JS_DefineProperty(cx, textureData, 'height', JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_SHARED, js_get_TextureData_height, js_set_TextureData_height);
    JS_DefineProperty(cx, textureData, 'pivotX', JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_SHARED, js_get_TextureData_pivotX, js_set_TextureData_pivotX);
    JS_DefineProperty(cx, textureData, 'pivotY', JS::UndefinedHandleValue, JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_SHARED, js_get_TextureData_pivotY, js_set_TextureData_pivotY);
}

    
    
    {    if (argc == 0) {
        JS::RootedObject tmp(cx, JS_NewObject(cx, NULL, JS::NullPtr(), JS::NullPtr()));
        if (!tmp) return false;
        ui::Margin margin = cobj->getMargin();
        bool ok = JS_DefineProperty(cx, tmp, 'left', margin.left, JSPROP_ENUMERATE | JSPROP_PERMANENT) &&
            JS_DefineProperty(cx, tmp, 'top', margin.top, JSPROP_ENUMERATE | JSPROP_PERMANENT) &&
            JS_DefineProperty(cx, tmp, 'right', margin.right, JSPROP_ENUMERATE | JSPROP_PERMANENT) &&
            JS_DefineProperty(cx, tmp, 'bottom', margin.bottom, JSPROP_ENUMERATE | JSPROP_PERMANENT);
        if (ok) 
        {
            args.rval().set(OBJECT_TO_JSVAL(tmp));
        }
        else
        {
            return false;
        }
        return true;
    }
    JS_ReportError(cx, 'Invalid number of arguments');
    return false;
}
    
    
    {
}
    
        /** Render the scene.
     * @param renderer The renderer use to render the scene.
     * @param eyeTransforms The AdditionalTransform List of camera of multiView.
     * @param eyeProjections The projection matrix List of camera of multiView.
     * @param multiViewCount The number of multiView.
     * @js NA
     */
    virtual void render(Renderer* renderer, const Mat4* eyeTransforms, const Mat4* eyeProjections, unsigned int multiViewCount);
    
    

    
        // Overrides
    virtual void startWithTarget(Node *target) override;
    virtual ActionCamera * reverse() const override;
    virtual ActionCamera *clone() const override;
    
    namespace v8 {
namespace internal {
    }
    }
    
    
    {  // Pages that are only made iterable but have their free lists ignored.
  IterabilityList iterability_list_;
  CancelableTaskManager::Id iterability_task_id_;
  base::Semaphore iterability_task_semaphore_;
  bool iterability_in_progress_;
  bool iterability_task_started_;
  bool should_reduce_memory_;
};
    
    class EntryFrameConstants : public AllStatic {
 public:
  // This is the offset to where JSEntry pushes the current value of
  // Isolate::c_entry_fp onto the stack.
  static constexpr int kCallerFPOffset = -6 * kSystemPointerSize;
    }
    
      if (RootsTable::IsImmortalImmovable(index)) {
    Handle<Object> object = isolate()->root_handle(index);
    if (object->IsSmi()) {
      mov(destination, Immediate(Smi::cast(*object)));
      return;
    } else {
      DCHECK(object->IsHeapObject());
      mov(destination, Handle<HeapObject>::cast(object));
      return;
    }
  }
    
        {
      Comment('perform smi operation');
      // If rhs is known to be an Smi we want to fast path Smi operation. This
      // is for AddSmi operation. For the normal Add operation, we want to fast
      // path both Smi and Number operations, so this path should not be marked
      // as Deferred.
      Label if_overflow(this,
                        rhs_is_smi ? Label::kDeferred : Label::kNonDeferred);
      TNode<Smi> smi_result = TrySmiAdd(CAST(lhs), CAST(rhs), &if_overflow);
      // Not overflowed.
      {
        var_type_feedback.Bind(
            SmiConstant(BinaryOperationFeedback::kSignedSmall));
        var_result.Bind(smi_result);
        Goto(&end);
      }
    }