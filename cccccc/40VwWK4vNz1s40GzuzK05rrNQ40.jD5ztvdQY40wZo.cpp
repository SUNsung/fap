
        
          // generic template, for CodeAddress and Label
  template <typename T>
  void call(T& target, CallArg ca = CallArg::Internal) {
    if (CallArg::Internal == ca) {
      // tries best performance possible
      branchAuto(target, BranchConditions::Always, LinkReg::Save, true);
    } else {
      // branchFar is not only smashable but also it will use r12 so an
      // external branch can correctly set its TOC address appropriately.
      branchFar(target, BranchConditions::Always, LinkReg::Save,
                ImmType::TocOnly, true);
    }
    callEpilogue(ca);
  }
    
    //////////////////////////////////////////////////////////////////////
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
      if (comma != data) {
    // we have meta
    ssize_t meta_len = comma - data;
    data_len -= meta_len;
    char* semi = (char*)memchr(data, ';', meta_len);
    char* slash = (char*)memchr(data, '/', meta_len);
    }
    
    #include <sys/types.h>
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);
    
    #include 'hphp/runtime/base/perf-warning-inl.h'
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        /* Sets the Eye value of the Camera. 
     * 
     * @param eye The Eye value of the Camera.
     * @js NA
     */
    void setEye(const Vec3 &eye);
    void setEye(float x, float y, float z);
    /* Returns the Eye value of the Camera. 
     *
     * @return The Eye value of the Camera.
     * @js NA
     */
    const Vec3& getEye() const { return _eye; }
    /* Sets the Center value of the Camera. 
     *
     * @param center The Center value of the Camera.
     * @js NA
     */
    void setCenter(const Vec3 &center);
    /* Returns the Center value of the Camera. 
     *
     * @return The Center value of the Camera.
     * @js NA
     */
    const Vec3& getCenter() const { return _center; }
    /* Sets the Up value of the Camera. 
     *
     * @param up The Up value of the Camera.
     * @js NA
     */
    void setUp(const Vec3 &up);
    /* Returns the Up value of the Camera. 
     *
     * @return The Up value of the Camera.
     * @js NA
     */
    const Vec3& getUp() const { return _up; }
    
    
/** @class CallFunc
* @brief Calls a 'callback'.
*/
class CC_DLL CallFunc : public ActionInstant
{
public:
    /** Creates the action with the callback of type std::function<void()>.
     This is the preferred way to create the callback.
     * When this function bound in js or lua ,the input param will be changed.
     * In js: var create(var func, var this, var [data]) or var create(var func).
     * In lua:local create(local funcID).
     *
     * @param func  A callback function need to be executed.
     * @return  An autoreleased CallFunc object.
     */
    static CallFunc * create(const std::function<void()>& func);
    }
    
    
    /** Returns the numbers of actions that are running in a
     *  certain target with a specific tag.
     * Like getNumberOfRunningActionsInTarget Composable actions
     * are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @param tag       Tag that will be searched.
     * @return  The numbers of actions that are running in a certain target
     *          with a specific tag.
     * @see getNumberOfRunningActionsInTarget
     * @js NA
     */
    virtual size_t getNumberOfRunningActionsInTargetByTag(const Node *target, int tag);
    
     Another example: ScaleTo action could be rewritten using PropertyAction:
    
    #endif // __CC_ANIMATION_H__

    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    TEST(ByteTest, GetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  EXPECT_EQ(0x05, value.get_byte(1, 3));
  EXPECT_EQ(0x01, value.get_byte(1, 1));
  EXPECT_EQ(0x00, value.get_byte(8, 1));
  EXPECT_EQ(0x00, value.get_byte(-1, 1));
  EXPECT_EQ(0x1A, value.get_byte(0, 10));
}
    
    BaseMapMatrix::BaseMapMatrix(const BaseMapMatrix& cells) {}
    
    class RouteSegmentsTest : public ::testing::Test {
 public:
  static void SetUpTestCase() {
    AINFO << 'map file: ' << FLAGS_test_map_file;
    if (hdmap_.LoadMapFromFile(FLAGS_test_map_file) != 0) {
      AERROR << 'Failed to load map: ' << FLAGS_test_map_file;
      CHECK(false);
    }
  }
    }
    
    double Spline1dSeg::ThirdOrderDerivative(const double x) const {
  return third_order_derivative_(x);
}