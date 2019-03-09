
        
          // Quit the whole app.
  static void Quit(content::RenderProcessHost* rph = NULL);
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    base::string16 MenuDelegate::GetLabelForCommandId(int command_id) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->label_;
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
    ExtensionFunction::ResponseAction
NwAppCloseAllWindowsFunction::Run() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return RespondNow(Error(''));
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppCloseAllWindowsFunction::DoJob, registry, extension()->id()));
    }
    
    #include 'base/lazy_instance.h'
#include 'base/values.h'
#include 'content/nw/src/api/nw_screen.h'
#include 'extensions/browser/extensions_browser_client.h'
#include 'ui/display/display_observer.h'
#include 'ui/display/display.h'
#include 'ui/display/screen.h'
    
      protected:
    ~NwScreenRegisterStreamFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.registerStream', UNKNOWN)
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    // Deletes the box with the given index, and shuffles up the rest.
// Recomputes the bounding box.
void BoxWord::DeleteBox(int index) {
  ASSERT_HOST(0 <= index && index < length_);
  boxes_.remove(index);
  --length_;
  ComputeBoundingBox();
}
    
      // Reads all the pages in the given lstmf filename to the cache. The reader
  // is used to read the file.
  bool LoadDocument(const char* filename, int start_page, int64_t max_memory,
                    FileReader reader);
  // Sets up the document, without actually loading it.
  void SetDocument(const char* filename, int64_t max_memory, FileReader reader);
  // Writes all the pages to the given filename. Returns false on error.
  bool SaveDocument(const char* filename, FileWriter writer);
  bool SaveToBuffer(GenericVector<char>* buffer);
    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
    /** @class Speed
 * @brief Changes the speed of an action, making it take longer (speed>1)
 * or shorter (speed<1) time.
 * Useful to simulate 'slow motion' or 'fast forward' effect.
 * @warning This action can't be Sequenceable because it is not an IntervalAction.
 */
class CC_DLL Speed : public Action
{
public:
    /** Create the action and set the speed.
     *
     * @param action An action.
     * @param speed The action speed.
     */
    static Speed* create(ActionInterval* action, float speed);
    /** Return the speed.
     *
     * @return The action speed.
     */
    float getSpeed() const { return _speed; }
    /** Alter the speed of the inner function in runtime. 
     *
     * @param speed Alter the speed of the inner function in runtime.
     */
    void setSpeed(float speed) { _speed = speed; }
    }
    
    void PointArray::reverseInline()
{
    const size_t l = _controlPoints.size();
    Vec2 *p1 = nullptr;
    Vec2 *p2 = nullptr;
    float x, y;
    for (size_t i = 0; i < l/2; ++i)
    {
        p1 = &_controlPoints.at(i);
        p2 = &_controlPoints.at(l-i-1);
        
        x = p1->x;
        y = p1->y;
        
        p1->x = p2->x;
        p1->y = p2->y;
        
        p2->x = x;
        p2->y = y;
    }
}
    
    bool AccelAmplitude::initWithAction(Action *action, float duration)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _rate = 1.0f;
        _other = (ActionInterval*)(action);
        action->retain();
    }
    }
    
    CallFuncN * CallFuncN::create(const std::function<void(Node*)> &func)
{
    auto ret = new (std::nothrow) CallFuncN();
    }
    
    http://www.cocos2d-x.org
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /**
@brief WavesTiles3D action.
@details This action wave the target node with many tiles.
*/
class CC_DLL WavesTiles3D : public TiledGrid3DAction
{
public:
    /** 
     * @brief Create the action with a number of waves, the waves amplitude, the grid size and the duration.
     * @param duration Specify the duration of the WavesTiles3D action. It's a value in seconds.
     * @param gridSize Specify the size of the grid.
     * @param waves Specify the waves count of the WavesTiles3D action.
     * @param amplitude Specify the amplitude of the WavesTiles3D action.
     * @return If the creation success, return a pointer of WavesTiles3D action; otherwise, return nil.
     */
    static WavesTiles3D* create(float duration, const Size& gridSize, unsigned int waves, float amplitude);
    }
    
    AnimationFrame* AnimationFrame::clone() const
{
    // no copy constructor
    auto frame = new (std::nothrow) AnimationFrame();
    frame->initWithSpriteFrame(_spriteFrame->clone(),
                               _delayUnits,
                               _userInfo);
    }
    
    PolygonInfo AutoPolygon::generateTriangles(const Rect& rect, float epsilon, float threshold)
{
    Rect realRect = getRealRect(rect);
    auto p = trace(realRect, threshold);
    p = reduce(p, realRect, epsilon);
    p = expand(p, realRect, epsilon);
    auto tri = triangulate(p);
    calculateUV(realRect, tri.verts, tri.vertCount);
    PolygonInfo ret;
    ret.triangles = tri;
    ret.setFilename(_filename);
    ret.setRect(realRect);
    return ret;
}
    
    #include <vector>
    
    
    {  int ret = x;
  return ret;
}
    
    void RadarState201::Parse(const std::uint8_t* bytes, int32_t length,
                          ContiRadar* conti_radar) const {
  auto state = conti_radar->mutable_radar_state();
  state->set_max_distance(max_dist(bytes, length));
  state->set_output_type(output_type(bytes, length));
  state->set_rcs_threshold(rcs_threshold(bytes, length));
  state->set_radar_power(radar_power(bytes, length));
  state->set_send_quality(send_quality(bytes, length));
  state->set_send_ext_info(send_ext_info(bytes, length));
}
    
    void SplineSegKernel::CalculateThirdOrderDerivative(const uint32_t num_params) {
  kernel_third_order_derivative_ =
      Eigen::MatrixXd::Zero(num_params, num_params);
  for (int r = 3; r < kernel_third_order_derivative_.rows(); ++r) {
    for (int c = 3; c < kernel_third_order_derivative_.cols(); ++c) {
      kernel_third_order_derivative_(r, c) =
          (r * r - r) * (r - 2) * (c * c - c) * (c - 2) / (r + c - 5.0);
    }
  }
}
    
    // config detail: {'name': 'brake_on_off', 'enum': {0: 'BRAKE_ON_OFF_OFF', 1:
// 'BRAKE_ON_OFF_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 48, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Brake_rpt_6c::Brake_on_offType Brakerpt6c::brake_on_off(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 1);
    }