
        
          caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
      /**
   * @brief Returns the 'canonical' version of a (usually) user-specified axis,
   *        allowing for negative indexing (e.g., -1 for the last axis).
   *
   * @param axis_index the axis index.
   *        If 0 <= index < num_axes(), return index.
   *        If -num_axes <= index <= -1, return (num_axes() - (-index)),
   *        e.g., the last axis index (num_axes() - 1) if index == -1,
   *        the second to last if index == -2, etc.
   *        Dies on out of range index.
   */
  inline int CanonicalAxisIndex(int axis_index) const {
    CHECK_GE(axis_index, -num_axes())
        << 'axis ' << axis_index << ' out of range for ' << num_axes()
        << '-D Blob with shape ' << shape_string();
    CHECK_LT(axis_index, num_axes())
        << 'axis ' << axis_index << ' out of range for ' << num_axes()
        << '-D Blob with shape ' << shape_string();
    if (axis_index < 0) {
      return axis_index + num_axes();
    }
    return axis_index;
  }
    
    
    {}  // namespace caffe
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
      int size_, pre_pad_;
  Dtype alpha_, beta_, k_;
    
    #include <vector>
    
    // Godot TO Bullet
extern void G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void INVERT_G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void INVERT_G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void G_TO_B(Transform const &inVal, btTransform &outVal);
    
    void ConstraintBullet::destroy_internal_constraint() {
	space->remove_constraint(this);
}
    
    
    {	_FORCE_INLINE_ btTypedConstraint *get_bt_constraint() { return constraint; }
};
#endif

    
    
    {	virtual PhysicsServer::JointType get_type() const = 0;
};
#endif

    
    /**
	@author AndreaCatania
*/
    
    static ResourceFormatPKM *resource_loader_pkm = NULL;
    
    std::string Action::description() const
{
    return StringUtils::format('<Action | Tag = %d', _tag);
}
    
    PointArray* PointArray::create(ssize_t capacity)
{
    PointArray* pointArray = new (std::nothrow) PointArray();
    if (pointArray && pointArray->initWithCapacity(capacity))
    {
        pointArray->autorelease();
        return pointArray;
    }
    }
    
    #include '2d/CCActionGrid.h'
    
    __CCCallFuncND * __CCCallFuncND::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) __CCCallFuncND();
    
    if( _selectorTarget)
    {
        a->initWithTarget(_selectorTarget, _callFuncND, _data);
    }
    
    a->autorelease();
    return a;
}
    
    void RotateBy::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    if(_is3D)
    {
        _startAngle = target->getRotation3D();
    }
    else
    {
        _startAngle.x = target->getRotationSkewX();
        _startAngle.y = target->getRotationSkewY();
    }
}
    
    
/** @class ResizeBy
* @brief Resize a Node object by a Size. Works on all nodes where setContentSize is effective. But it's mostly useful for nodes where 9-slice is enabled
*/
class CC_DLL ResizeBy : public ActionInterval 
{
public:
    /**
    * Creates the action.
    *
    * @param duration Duration time, in seconds.
    * @param deltaSize The delta size.
    * @return An autoreleased ResizeBy object.
    */
    static ResizeBy* create(float duration, const cocos2d::Size& deltaSize);
    
    //
    // Overrides
    //
    virtual ResizeBy* clone() const override;
    virtual ResizeBy* reverse() const  override;
    virtual void startWithTarget(Node *target) override;
    /**
    * @param time in seconds
    */
    virtual void update(float time) override;
    }
    
    float FadeOutBLTiles::testFunc(const Size& pos, float time)
{
    Vec2 n = Vec2((float)_gridSize.width, (float)_gridSize.height) * (1.0f - time);
    if ((pos.width + pos.height) == 0)
    {
        return 1.0f;
    }
    }
    
    
    {    return false;
}
    
        /** updates the Atlas (indexed vertex array).
    * Shall be overridden in subclasses.
    */
    virtual void updateAtlasValues();
    
    /** Set an buffer manager of the texture vertex. */
    void setTextureAtlas(TextureAtlas* textureAtlas);
    
    /** Return the buffer manager of the texture vertex. 
     *
     * @return Return A TextureAtlas.
     */
    TextureAtlas* getTextureAtlas() const;
    
    void setQuadsToDraw(ssize_t quadsToDraw);
    ssize_t getQuadsToDraw() const;
    
    namespace aria2 {
    }
    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
    
    {} // namespace aria2

    
    void DHTUnknownMessage::doReceivedAction() {}
    
    bool DNSCache::CacheEntry::operator<(const CacheEntry& e) const
{
  int r = hostname_.compare(e.hostname_);
  if (r != 0) {
    return r < 0;
  }
  return port_ < e.port_;
}
    
      // REQUIRES: timer is not running
  double real_time_used() {
    CHECK(!running_);
    return real_time_used_;
  }
    
    int Benchmark::ArgsCnt() const {
  if (args_.empty()) {
    if (arg_names_.empty()) return -1;
    return static_cast<int>(arg_names_.size());
  }
  return static_cast<int>(args_.front().size());
}
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
      // Get the data from the accumulator to BenchmarkReporter::Run's.
  Run big_o;
  big_o.benchmark_name = benchmark_name + '_BigO';
  big_o.iterations = 0;
  big_o.real_accumulated_time = result_real.coef;
  big_o.cpu_accumulated_time = result_cpu.coef;
  big_o.report_big_o = true;
  big_o.complexity = result_cpu.complexity;
    
    void ConsoleReporter::PrintRunData(const Run& result) {
  typedef void(PrinterFn)(std::ostream&, LogColor, const char*, ...);
  auto& Out = GetOutputStream();
  PrinterFn* printer = (output_options_ & OO_Color) ?
                         (PrinterFn*)ColorPrintf : IgnoreColorPrint;
  auto name_color =
      (result.report_big_o || result.report_rms) ? COLOR_BLUE : COLOR_GREEN;
  printer(Out, name_color, '%-*s ', name_field_width_,
          result.benchmark_name.c_str());
    }
    
    void JSONReporter::ReportRuns(std::vector<Run> const& reports) {
  if (reports.empty()) {
    return;
  }
  std::string indent(4, ' ');
  std::ostream& out = GetOutputStream();
  if (!first_report_) {
    out << ',\n';
  }
  first_report_ = false;
    }
    
    
    {}  // namespace internal
    
      Node* const iter_result = CallJS(CodeFactory::Call(isolate()), context,
                                   method, sync_iterator, sent_value);
  GotoIfException(iter_result, &reject_promise, &var_exception);
    
    namespace v8 {
namespace internal {
    }
    }
    
    #endif  // V8_BUILTINS_BUILTINS_INTL_H_

    
    #endif  // V8_BUILTINS_BUILTINS_LAZY_GEN_H_

    
      // We might need to loop several times due to ToPrimitive, ToString and/or
  // ToNumeric conversions.
  VARIABLE(var_result, MachineRepresentation::kTagged);
  Variable* loop_vars[2] = {&var_left, &var_right};
  Label loop(this, 2, loop_vars),
      string_add_convert_left(this, Label::kDeferred),
      string_add_convert_right(this, Label::kDeferred),
      do_bigint_add(this, Label::kDeferred);
  Goto(&loop);
  BIND(&loop);
  {
    Node* left = var_left.value();
    Node* right = var_right.value();
    }