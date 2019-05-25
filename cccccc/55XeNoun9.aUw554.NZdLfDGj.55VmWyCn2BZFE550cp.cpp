
        
        
    {}  // namespace caffe
    
    
    { private:
  DISABLE_COPY_AND_ASSIGN(Layer);
};  // class Layer
    
      virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
    
    #endif  // CAFFE_BATCHNORM_LAYER_HPP_

    
    
    {}  // namespace caffe
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /* TessCallback */
#define GLU_TESS_BEGIN                     100100
#define GLU_BEGIN                          100100
#define GLU_TESS_VERTEX                    100101
#define GLU_VERTEX                         100101
#define GLU_TESS_END                       100102
#define GLU_END                            100102
#define GLU_TESS_ERROR                     100103
#define GLU_TESS_EDGE_FLAG                 100104
#define GLU_EDGE_FLAG                      100104
#define GLU_TESS_COMBINE                   100105
#define GLU_TESS_BEGIN_DATA                100106
#define GLU_TESS_VERTEX_DATA               100107
#define GLU_TESS_END_DATA                  100108
#define GLU_TESS_ERROR_DATA                100109
#define GLU_TESS_EDGE_FLAG_DATA            100110
#define GLU_TESS_COMBINE_DATA              100111
    
    
    {  PDFRectangle mediaBox;
  PDFRectangle cropBox;
  GBool haveCropBox;
  PDFRectangle bleedBox;
  PDFRectangle trimBox;
  PDFRectangle artBox;
  int rotate;
  Object lastModified;
  Object boxColorInfo;
  Object group;
  Object metadata;
  Object pieceInfo;
  Object separationInfo;
  Object resources;
};
    
      // get direction
  if (dict->lookup('M', &obj)->isName()) {
    const char *m = obj.getName();
    
    if (strcmp('I', m) == 0)
      direction = transitionInward;
    else if (strcmp('O', m) == 0)
      direction = transitionOutward;
  }
  obj.free();
    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
      //----- image drawing
  virtual void drawImageMask(GfxState *state, Object *ref, Stream *str,
			     int width, int height, GBool invert,
			     GBool interpolate, GBool inlineImg);
  virtual void drawImage(GfxState *state, Object *ref, Stream *str,
			 int width, int height, GfxImageColorMap *colorMap,
			 GBool interpolate, int *maskColors, GBool inlineImg);
  virtual void drawMaskedImage(GfxState *state, Object *ref, Stream *str,
			       int width, int height,
			       GfxImageColorMap *colorMap,
			       GBool interpolate,
			       Stream *maskStr, int maskWidth, int maskHeight,
			       GBool maskInvert, GBool maskInterpolate);
  virtual void drawSoftMaskedImage(GfxState *state, Object *ref, Stream *str,
				   int width, int height,
				   GfxImageColorMap *colorMap,
				   GBool interpolate,
				   Stream *maskStr,
				   int maskWidth, int maskHeight,
				   GfxImageColorMap *maskColorMap,
				   GBool maskInterpolate);
    
      //----- path clipping
  virtual void clip(GfxState *state);
  virtual void eoClip(GfxState *state);
  virtual void clipToStrokePath(GfxState *state);
    
    #include 'StdinPDFDocBuilder.h'
#include 'CachedFile.h'
#include 'StdinCachedFile.h'
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
    
    {
    {        mutable bool m_isPacked;
        mutable NDArrayViewPtr m_packedData;
        mutable std::shared_ptr<Microsoft::MSR::CNTK::MBLayout> m_packedDataLayout;
    };
}

    
    
    {    CopyMBLayoutTo(pMBLayout);
}
    
        virtual const char * CallStack() const override { return m_callStack.c_str(); }
    
    void FlipY3D::update(float time)
{
    float angle = (float)M_PI * time; // 180 degrees
    float mz = sinf( angle );
    angle = angle / 2.0f;     // x calculates degrees from 0 to 90
    float my = cosf(angle);
    
    Vec3    v0, v1, v, diff;
    
    v0 = getOriginalVertex(Vec2(1.0f, 1.0f));
    v1 = getOriginalVertex(Vec2());
    
    float    y0 = v0.y;
    float    y1 = v1.y;
    float y;
    Vec2    a, b, c, d;
    
    if (y0 > y1)
    {
        // Normal Grid
        a.setZero();
        b.set(0.0f, 1.0f);
        c.set(1.0f, 0.0f);
        d.set(1.0f, 1.0f);
        y = y0;
    }
    else
    {
        // Reversed Grid
        b.setZero();
        a.set(0.0f, 1.0f);
        d.set(1.0f, 0.0f);
        c.set(1.0f, 1.0f);
        y = y1;
    }
    
    diff.y = y - y * my;
    diff.z = fabsf(floorf((y * mz) / 4.0f));
    
    // bottom-left
    v = getOriginalVertex(a);
    v.y = diff.y;
    v.z += diff.z;
    setVertex(a, v);
    
    // upper-left
    v = getOriginalVertex(b);
    v.y -= diff.y;
    v.z -= diff.z;
    setVertex(b, v);
    
    // bottom-right
    v = getOriginalVertex(c);
    v.y = diff.y;
    v.z += diff.z;
    setVertex(c, v);
    
    // upper-right
    v = getOriginalVertex(d);
    v.y -= diff.y;
    v.z -= diff.z;
    setVertex(d, v);
}
    
        if( _selectorTarget)
    {
        a->initWithTarget(_selectorTarget, _callFuncN);
    }
    else if( _functionN ){
        a->initWithFunction(_functionN);
    }
    
    /** @class ActionManager
 @brief ActionManager is a singleton that manages all the actions.
 Normally you won't need to use this singleton directly. 99% of the cases you will use the Node interface,
 which uses this singleton.
 But there are some cases where you might need to use this singleton.
 Examples:
    - When you want to run an action where the target is different from a Node. 
    - When you want to pause / resume the actions.
 
 @since v0.8
 */
class CC_DLL ActionManager : public Ref
{
public:
    /**
     * @js ctor
     */
    ActionManager();
    }
    
        /** 
    @brief Initializes the action with a range, shake Z vertices, grid size and duration.
    @param duration Specify the duration of the ShakyTiles3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, int range, bool shakeZ);
    
    bool ActionTween::initWithDuration(float duration, const std::string& key, float from, float to)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _key    = key;
        _to       = to;
        _from     = from;
        return true;
    }
    }
    
    Animation* Animation::clone() const
{
    // no copy constructor    
    auto a = new (std::nothrow) Animation();
    a->initWithAnimationFrames(_frames, _delayPerUnit, _loops);
    a->setRestoreOriginalFrame(_restoreOriginalFrame);
    a->autorelease();
    return a;
}
    
    
class Animation;
    
    #endif // OPENPOSE_CORE_RECTANGLE_HPP
