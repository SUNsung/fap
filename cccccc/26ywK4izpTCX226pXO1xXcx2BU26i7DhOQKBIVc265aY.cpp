
        
          int num_words;
  TBOX lword_box;     // in normalized (horiz text rows) space
  TBOX rword_box;     // in normalized (horiz text rows) space
    
      // Deletes the box with the given index, and shuffles up the rest.
  // Recomputes the bounding box.
  void DeleteBox(int index);
    
    namespace tesseract {
    }
    
    template <typename T> class GenericVector;
    
    ELISTIZE(PARA)
    
      // Simple accessors.
  bool empty() const {
    return heap_.empty();
  }
  int size() const {
    return heap_.size();
  }
  int size_reserved() const {
    return heap_.size_reserved();
  }
  void clear() {
    // Clear truncates to 0 to keep the number reserved in tact.
    heap_.truncate(0);
  }
  // Provides access to the underlying vector.
  // Caution! any changes that modify the keys will invalidate the heap!
  GenericVector<Pair>* heap() {
    return &heap_;
  }
  // Provides read-only access to an element of the underlying vector.
  const Pair& get(int index) const {
    return heap_[index];
  }
    
        //
    // Override
    //
    virtual Speed* clone() const override;
    virtual Speed* reverse() const override;
    virtual void startWithTarget(Node* target) override;
    virtual void stop() override;
    /**
     * @param dt in seconds.
     */
    virtual void step(float dt) override;
    /** Return true if the action has finished.
     *
     * @return Is true if the action has finished.
     */
    virtual bool isDone() const  override;
    
CC_CONSTRUCTOR_ACCESS:
    Speed();
    virtual ~Speed(void);
    /** Initializes the action. */
    bool initWithAction(ActionInterval *action, float speed);
    
    ssize_t PointArray::count() const
{
    return _controlPoints.size();
}
    
    CallFuncN * CallFuncN::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CallFuncN();
    }
    
        /** Removes an action given its tag and the target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     */
    virtual void removeActionByTag(int tag, Node *target);
    
    /** Removes all actions given its tag and the target.
     *
     * @param tag       The actions' tag.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeAllActionsByTag(int tag, Node *target);
    
    AnimationCache* AnimationCache::s_sharedAnimationCache = nullptr;
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);
    
      x <<= 4;
  x |= t;
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
    void Spline1dSeg::SetParams(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}
    
    Eigen::MatrixXd SplineSegKernel::Kernel(const uint32_t num_params,
                                        const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateFx(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'fx', &term_matrix);
  return kernel_fx_.block(0, 0, num_params, num_params)
      .cwiseProduct(term_matrix);
}
    
    class Accelrpt68Test : public ::testing::Test {
 public:
  virtual void SetUp() {}
};