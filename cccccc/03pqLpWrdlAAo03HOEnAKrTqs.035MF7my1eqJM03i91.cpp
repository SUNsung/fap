
        
        #endif  // CONTENT_NW_SRC_API_APP_APP_H_
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    bool MenuDelegate::IsCommandIdEnabled(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    
    {}  // namespace nw
    
      option.GetString('type', &type_);
  option.GetString('label', &label_);
  option.GetString('tooltip', &tooltip_);
  option.GetBoolean('checked', &is_checked_);
  option.GetBoolean('enabled', &is_enabled_);
    
    #include <vector>
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        Transliterator::_registerFactory(UnicodeString(TRUE, ::CURR_ID, -1),
                                     RemoveTransliterator_create, integerToken(0));
    
        // No need to explicitly check for syntactically valid names.
    // Invalid ones will never be in the map, and the lookup will fail.
    
    
    {    // Compare identical level.
    left.move(&left, equalPrefixLength, UITER_ZERO);
    right.move(&right, equalPrefixLength, UITER_ZERO);
    const Normalizer2Impl &nfcImpl = data->nfcImpl;
    if(settings->dontCheckFCD()) {
        UIterNFDIterator leftIter(left);
        UIterNFDIterator rightIter(right);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    } else {
        FCDUIterNFDIterator leftIter(data, left, equalPrefixLength);
        FCDUIterNFDIterator rightIter(data, right, equalPrefixLength);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    }
}
    
    UnicodeString &ScientificNumberFormatter::SuperscriptStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets &staticSets,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    FieldPosition fp;
    int32_t copyFromOffset = 0;
    while (fpi.next(fp)) {
        switch (fp.getField()) {
        case UNUM_EXPONENT_SYMBOL_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(preExponent);
            break;
        case UNUM_EXPONENT_SIGN_FIELD:
            {
                int32_t beginIndex = fp.getBeginIndex();
                int32_t endIndex = fp.getEndIndex();
                UChar32 aChar = original.char32At(beginIndex);
                if (staticSets.fMinusSigns->contains(aChar)) {
                    appendTo.append(
                            original,
                            copyFromOffset,
                            beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptMinusSign);
                } else if (staticSets.fPlusSigns->contains(aChar)) {
                    appendTo.append(
                           original,
                           copyFromOffset,
                           beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptPlusSign);
                } else {
                    status = U_INVALID_CHAR_FOUND;
                    return appendTo;
                }
                copyFromOffset = endIndex;
            }
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            if (!copyAsSuperscript(
                    original,
                    fp.getBeginIndex(),
                    fp.getEndIndex(),
                    appendTo,
                    status)) {
              return appendTo;
            }
            copyFromOffset = fp.getEndIndex();
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    UBool ScriptSet::contains(const ScriptSet &other) const {
    ScriptSet t(*this);
    t.intersect(other);
    return (t == other);
}
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    U_NAMESPACE_END
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    static void freeSharedNumberFormatters(const SharedNumberFormat ** list) {
    for (int32_t i = 0; i < UDAT_FIELD_COUNT; ++i) {
        SharedObject::clearPtr(list[i]);
    }
    uprv_free(list);
}
    
    /**
 * Construct a StringReplacer that sets the emits the given output
 * text and does not modify the cursor.
 * @param theOutput text that will replace input text when the
 * replace() method is called.  May contain stand-in characters
 * that represent nested replacers.
 * @param theData transliterator context object that translates
 * stand-in characters to UnicodeReplacer objects
 */
StringReplacer::StringReplacer(const UnicodeString& theOutput,
                               const TransliterationRuleData* theData) {
    output = theOutput;
    cursorPos = 0;
    hasCursor = FALSE;
    data = theData;
    isComplex = TRUE;
}
    
        // create values of different integer types
    short n_short = 42;
    int n_int = -23;
    long n_long = 1024;
    int_least32_t n_int_least32_t = -17;
    uint8_t n_uint8_t = 8;
    
    #include 'modules/drivers/canbus/can_client/esd/esd_can_client.h'
    
    #include 'modules/drivers/canbus/can_client/socket/socket_can_client_raw.h'
    
    
    {  Byte t1(bytes + 3);
  uint32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
  double ret = x * CLUSTER_DIST_RES + CLUSTER_DIST_LAT_MIN;
  return ret;
}
    
    bool RadarState201::send_ext_info(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 5);
  uint32_t x = t0.get_byte(5, 1);
    }
    
    #include 'modules/planning/common/speed_limit.h'
    
    const PolynomialXd& Spline1dSeg::Derivative() const { return derivative_; }
    
    Brakemotorrpt271::Brakemotorrpt271() {}
const int32_t Brakemotorrpt271::ID = 0x71;
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
        ~async_thread_pool()
    {
        shutdown();
        if (SwooleG.main_reactor)
        {
            SwooleG.main_reactor->del(SwooleG.main_reactor, _pipe_read);
        }
        _aio_pipe.close(&_aio_pipe);
    }
    
    TEST(coroutine_channel, pop_yield)
{
    Channel chan(1);
    }
    
    static void swoole_channel_coro_free_object(zend_object *object)
{
    channel_coro *chan_t = swoole_channel_coro_fetch_object(object);
    Channel *chan = chan_t->chan;
    if (chan)
    {
        zval *data;
        while ((data = (zval *) chan->pop_data()))
        {
            sw_zval_free(data);
        }
        delete chan;
    }
    zend_object_std_dtor(&chan_t->std);
}
    
        if (serv->factory_mode == SW_MODE_BASE)
    {
        buffer_num = 1;
    }
    else
    {
        buffer_num = serv->reactor_num + serv->dgram_port_num;
    }
    
    
    {    swTimer_node *timer = swTimer_add(&SwooleG.timer, ms, 0, task_co, php_swoole_task_onTimeout);
    if (timer)
    {
        task_co->timer = timer;
    }
    PHPCoroutine::yield_m(return_value, &task_co->context);
}
    
    
    {    private:
        redisAsyncContext * m_ctx;
        QSocketNotifier * m_read;
        QSocketNotifier * m_write;
};
    
    class ExampleQt : public QObject {
    }
    
    TEST(lru_cache, basic)
{
    shared_ptr<string> val = make_shared<string>('hello');
    shared_ptr<string> val1 = make_shared<string>('hello1');
    }
    
            if (expire <= 0)
        {
            expire_time = 0;
        }
        else
        {
            expire_time = time(nullptr) + expire;
        }
    
    #include <folly/GLog.h>
    
    namespace folly {
    }
    
      /**
   * Returns true 1/n of the time. If n == 0, always returns false
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static bool oneIn(uint32_t n, RNG&& rng) {
    if (n == 0) {
      return false;
    }
    return rand32(0, n, rng) == 0;
  }
    
    
    {} // namespace folly

    
    
    {} // namespace folly

    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}