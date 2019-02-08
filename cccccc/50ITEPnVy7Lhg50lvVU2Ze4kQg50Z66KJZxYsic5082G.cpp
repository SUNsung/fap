
        
        // Returns true if s is a Python keyword or built-in.
bool IsPythonReserved(const string& s);
    
    // Mutex used to serialize accesses to cached vector of pointers to python
// arrays to be dereferenced.
static mutex* DelayedDecrefLock() {
  static mutex* decref_lock = new mutex;
  return decref_lock;
}
    
    
    {}  // namespace tensorflow

    
    
    {}  // namespace detail
    
      ~PyRecordReader();
    
      Entry* entry = nullptr;
  {
    mutex_lock lock{mutex_};
    entry = &cache_[config.ordinal];
    // Release the map lock; the address of 'entry' is stable because
    // std::map guarantees reference stability.
  }
    
    namespace stream_executor {
    }
    
      // Computes real-to-complex FFT in forward direction.
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<float> &input,
                     DeviceMemory<std::complex<float>> *output) = 0;
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<double> &input,
                     DeviceMemory<std::complex<double>> *output) = 0;
    
    
    {    QString appName;
    QIcon appIcon;
    QIcon trayAndWindowIcon;
    QString titleAddText;
};
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    
    {    // Inputs that are effectively invalid under the target grammar.
    // PROTOCOLINFO accepts an OtherLine that is just an OptArguments, which
    // would make these inputs valid. However,
    // - This parser is never used in that situation, because the
    //   SplitTorReplyLine parser enables OtherLine to be skipped.
    // - Even if these were valid, an OptArguments contains no semantic data,
    //   so there is no point in parsing it.
    CheckParseTorReplyMapping('ARGS', {});
    CheckParseTorReplyMapping('MORE ARGS', {});
    CheckParseTorReplyMapping('MORE  ARGS', {});
    CheckParseTorReplyMapping('EVEN more=ARGS', {});
    CheckParseTorReplyMapping('EVEN+more ARGS', {});
}
    
    #if defined(__GLIBCXX__) && __GLIBCXX__ < 20080201
//  std::showpos is broken on old libstdc++ as provided with OSX.  See
//  http://gcc.gnu.org/ml/libstdc++/2007-11/msg00075.html
#   define TINYFORMAT_OLD_LIBSTDCPLUSPLUS_WORKAROUND
#endif
    
    bool ParseInt64(const std::string& str, int64_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtoll will not set errno if valid
    long long int n = strtoll(str.c_str(), &endp, 10);
    if(out) *out = (int64_t)n;
    // Note that strtoll returns a *long long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int64_t*.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int64_t>::min() &&
        n <= std::numeric_limits<int64_t>::max();
}
    
    #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
    namespace nw {
    }
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
    Menu::~Menu() {
  Destroy();
}
    
    class ObjectManager;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearAppCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearAppCacheFunction);
};
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethod(render_frame_host(), id, type, method, *arguments);
  return true;
}
    
    #ifndef TESSERACT_CCMAIN_EQUATIONDETECT_H_
#define TESSERACT_CCMAIN_EQUATIONDETECT_H_
    
      // How many alt choices from each should we try to get?
  const int kAltsPerPiece = 2;
  // When do we start throwing away extra alt choices?
  const int kTooManyAltChoices = 100;
    
    // A collection of DocumentData that knows roughly how much memory it is using.
// Note that while it supports background read-ahead, it assumes that a single
// thread is accessing documents, ie it is not safe for multiple threads to
// access different documents in parallel, as one may de-cache the other's
// content.
class DocumentCache {
 public:
  explicit DocumentCache(int64_t max_memory);
  ~DocumentCache();
    }
    
    template <class Container>
internal::ParamGenerator<typename Container::value_type> ValuesIn(
    const Container& container) {
  return ValuesIn(container.begin(), container.end());
}
    
      // Name of the test case.
  std::string name_;
  // Name of the parameter type, or NULL if this is not a typed or a
  // type-parameterized test.
  const internal::scoped_ptr<const ::std::string> type_param_;
  // The vector of TestInfos in their original order.  It owns the
  // elements in the vector.
  std::vector<TestInfo*> test_info_list_;
  // Provides a level of indirection for the test list to allow easy
  // shuffling and restoring the test order.  The i-th element in this
  // vector is the index of the i-th test in the shuffled test list.
  std::vector<int> test_indices_;
  // Pointer to the function that sets up the test case.
  Test::SetUpTestCaseFunc set_up_tc_;
  // Pointer to the function that tears down the test case.
  Test::TearDownTestCaseFunc tear_down_tc_;
  // True iff any test in this test case should run.
  bool should_run_;
  // Elapsed time, in milliseconds.
  TimeInMillis elapsed_time_;
  // Holds test properties recorded during execution of SetUpTestCase and
  // TearDownTestCase.
  TestResult ad_hoc_test_result_;
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
    #if GTEST_OS_WINDOWS_MOBILE
  // Windows CE does not have the 'ANSI' versions of Win32 APIs. To be
  // able to pass strings to Win32 APIs on CE we need to convert them
  // to 'Unicode', UTF-16.
    
    // Clones a 0-terminated C string, allocating memory using new.
const char* MyString::CloneCString(const char* a_c_string) {
  if (a_c_string == NULL) return NULL;
    }
    
      // Removes the head of the queue and returns it.  Returns NULL if
  // the queue is empty.
  E* Dequeue() {
    if (size_ == 0) {
      return NULL;
    }
    }
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    #include <grpc/support/port_platform.h>
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H */

    
    #include <grpc/impl/codegen/port_platform.h>
    
      /**
   * \brief Generate batch predictions for a given feature matrix. May use
   * cached predictions if available instead of calculating from scratch.
   *
   * \param [in,out]  dmat        Feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from.
   * \param           tree_begin  The tree begin index.
   * \param           ntree_limit (Optional) The ntree limit. 0 means do not
   * limit trees.
   */
    
    #endif  // XGBOOST_OBJECTIVE_REGRESSION_LOSS_H_

    
    SEXP XGDMatrixGetInfo_R(SEXP handle, SEXP field) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGDMatrixGetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                 &olen,
                                 &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
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
    
        float r, zenith, azimuth;
    this->sphericalRadius(&r, &zenith, &azimuth);
    if( std::isnan(_radius) )
        _radius = r;
    if( std::isnan(_angleZ) )
        _angleZ = (float)CC_RADIANS_TO_DEGREES(zenith);
    if( std::isnan(_angleX) )
        _angleX = (float)CC_RADIANS_TO_DEGREES(azimuth);
    
        PointArray *reverse = copyConfig->reverse();
    
        //
    // Overrides
    //
    virtual void startWithTarget(Node *target) override;
    virtual BezierTo* clone() const override;
    virtual BezierTo* reverse() const override;
    
CC_CONSTRUCTOR_ACCESS:
    BezierTo() {}
    virtual ~BezierTo() {}
    /**
     * @param t In seconds.
     */
    bool initWithDuration(float t, const ccBezierConfig &c);
    
    void ActionManager::removeActionAtIndex(ssize_t index, tHashElement *element)
{
    Action *action = static_cast<Action*>(element->actions->arr[index]);
    }
    
        /** Gets an action given its tag an a target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     * @return  The Action the with the given tag.
     */
    virtual Action* getActionByTag(int tag, const Node *target) const;
    
        if (action && action->initWithDuration(duration, gridSize))
    {
        action->autorelease();
        return action;
    }
    
    NS_CC_END
    
                if ( ! spriteFrame ) {
                CCLOG('cocos2d: AnimationCache: Animation '%s' refers to frame '%s' which is not currently in the SpriteFrameCache. This frame will not be added to the animation.', anim.first.c_str(), frameName.asString().c_str());
    }