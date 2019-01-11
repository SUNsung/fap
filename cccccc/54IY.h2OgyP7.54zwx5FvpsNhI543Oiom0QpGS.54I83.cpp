
        
        
    {}  // namespace
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    Menu::~Menu() {
  Destroy();
}
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                       views::MENU_ANCHOR_TOPRIGHT,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
     protected:
  ~NwObjCreateFunction() override;
    
      // static
  NwScreenDisplayObserver* NwScreenDisplayObserver::GetInstance() {
    return g_display_observer.Pointer();
  }
    
      protected:
    ~NwScreenStartMonitorFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.startMonitor', UNKNOWN)
    
    bool NwShellOpenExternalFunction::RunNWSync(base::ListValue* response, std::string* error) {
  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallStaticMethod(render_frame_host(), 'Shell', 'OpenExternal', *args_);
  return true;
}
    
    
    {}  // namespace tesseract.
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    #ifndef GRAPHICS_DISABLED
    
    namespace tesseract {
    }
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
      // Backwards compatible constrained fit with a supplied gradient.
  // Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
  // to avoid potential difficulties with infinite gradients.
  double ConstrainedFit(double m, float* c);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
internal::ValueArray9<T1, T2, T3, T4, T5, T6, T7, T8, T9> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9) {
  return internal::ValueArray9<T1, T2, T3, T4, T5, T6, T7, T8, T9>(v1, v2, v3,
      v4, v5, v6, v7, v8, v9);
}
    
    // The inductive case.
template <size_t N>
struct TuplePrefixPrinter {
  // Prints the first N fields of a tuple.
  template <typename Tuple>
  static void PrintPrefixTo(const Tuple& t, ::std::ostream* os) {
    TuplePrefixPrinter<N - 1>::PrintPrefixTo(t, os);
    *os << ', ';
    UniversalPrinter<typename ::std::tr1::tuple_element<N - 1, Tuple>::type>
        ::Print(::std::tr1::get<N - 1>(t), os);
  }
    }
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_SPI_H_

    
      // Fired before environment set-up for each iteration of tests starts.
  virtual void OnEnvironmentsSetUpStart(const UnitTest& unit_test) = 0;
    
    // Names of the flags (needed for parsing Google Test flags).
const char kDeathTestStyleFlag[] = 'death_test_style';
const char kDeathTestUseFork[] = 'death_test_use_fork';
const char kInternalRunDeathTestFlag[] = 'internal_run_death_test';
    
    template<typename T> inline
bool operator!=(T* ptr, const linked_ptr<T>& x) {
  return ptr != x.get();
}
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31>
struct Types31 {
  typedef T1 Head;
  typedef Types30<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31> Tail;
};
    
      // Copy c'tor
  MyString(const MyString& string) : c_string_(NULL) {
    Set(string.c_string_);
  }
    
    // In this example, we test the MyString class (a simple string).
    
    
    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
    /* */
    
    int PolyTree::Total() const
{
  int result = (int)AllNodes.size();
  //with negative offsets, ignore the hidden outer polygon ...
  if (result > 0 && Childs[0] != AllNodes[0]) result--;
  return result;
}
    
    enum ClipType { ctIntersection, ctUnion, ctDifference, ctXor };
enum PolyType { ptSubject, ptClip };
//By far the most widely used winding rules for polygon filling are
//EvenOdd & NonZero (GDI, GDI+, XLib, OpenGL, Cairo, AGG, Quartz, SVG, Gr32)
//Others rules include Positive, Negative and ABS_GTR_EQ_TWO (only in OpenGL)
//see http://glprogramming.com/red/chapter11.html
enum PolyFillType { pftEvenOdd, pftNonZero, pftPositive, pftNegative };
    
    #endif /* FASTLZ_H */

    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS'
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.*/
    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
    
    {  // Force compactions by writing lots of values
  Build(10000);
  Check(10000, 10000);
}
    
    #include <deque>
#include <set>
#include 'db/dbformat.h'
#include 'db/log_writer.h'
#include 'db/snapshot.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'port/port.h'
#include 'port/thread_annotations.h'
    
    // A comparator for internal keys that uses a specified comparator for
// the user key portion and breaks ties by decreasing sequence number.
class InternalKeyComparator : public Comparator {
 private:
  const Comparator* user_comparator_;
 public:
  explicit InternalKeyComparator(const Comparator* c) : user_comparator_(c) { }
  virtual const char* Name() const;
  virtual int Compare(const Slice& a, const Slice& b) const;
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const;
  virtual void FindShortSuccessor(std::string* key) const;
    }
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
      fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
    
    Reader::Reader(SequentialFile* file, Reporter* reporter, bool checksum,
               uint64_t initial_offset)
    : file_(file),
      reporter_(reporter),
      checksum_(checksum),
      backing_store_(new char[kBlockSize]),
      buffer_(),
      eof_(false),
      last_record_offset_(0),
      end_of_buffer_offset_(0),
      initial_offset_(initial_offset),
      resyncing_(initial_offset > 0) {
}
    
      // Test that previous recovery produced recoverable state.
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
    
    //----------------------------------------------------------------------------
//
//  ScriptSet implementation
//
//----------------------------------------------------------------------------
ScriptSet::ScriptSet() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
}
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
    U_NAMESPACE_BEGIN
    
    
    {    useDaylight = (UBool)((startDay != 0) && (endDay != 0) ? TRUE : FALSE);
    if (useDaylight && dstSavings == 0) {
        dstSavings = U_MILLIS_PER_HOUR;
    }
    if (startDay != 0) {
        if (startMonth < UCAL_JANUARY || startMonth > UCAL_DECEMBER) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
        if (startTime < 0 || startTime > U_MILLIS_PER_DAY ||
            startTimeMode < WALL_TIME || startTimeMode > UTC_TIME) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
        if (startDayOfWeek == 0) {
            startMode = DOM_MODE;
        } else {
            if (startDayOfWeek > 0) {
                startMode = DOW_IN_MONTH_MODE;
            } else {
                startDayOfWeek = (int8_t)-startDayOfWeek;
                if (startDay > 0) {
                    startMode = DOW_GE_DOM_MODE;
                } else {
                    startDay = (int8_t)-startDay;
                    startMode = DOW_LE_DOM_MODE;
                }
            }
            if (startDayOfWeek > UCAL_SATURDAY) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
                return;
            }
        }
        if (startMode == DOW_IN_MONTH_MODE) {
            if (startDay < -5 || startDay > 5) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
                return;
            }
        } else if (startDay<1 || startDay > STATICMONTHLENGTH[startMonth]) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
    }
}
    
    CollationKey::CollationKey(const CollationKey& other)
    : UObject(other), fFlagAndLength(other.getLength()),
      fHashCode(other.fHashCode)
{
    if (other.isBogus())
    {
        setToBogus();
        return;
    }
    }
    
        /**
     * UnicodeFunctor API.  Cast 'this' to a UnicodeMatcher* pointer
     * and return the pointer.
     * @return the UnicodeMatcher point.
     */
    virtual UnicodeMatcher* toMatcher() const;
    
                    // Insert any accumulated straight text.
                if (buf.length() > 0) {
                    text.handleReplaceBetween(destLimit, destLimit, buf);
                    destLimit += buf.length();
                    buf.truncate(0);
                }
    
    class DHTRegistry {
private:
  struct Data {
    bool initialized;
    }
    }
    
    
    {} // namespace aria2
    
    
    {
    {    nodes.push_back(node);
  }
  localNode_ = localNode;
  nodes_ = nodes;
  A2_LOG_INFO('DHT routing table was loaded successfully');
}
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    class DHTTaskFactoryImpl : public DHTTaskFactory {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}
    
      void markBad(const std::string& hostname, const std::string& ipaddr,
               uint16_t port);
    
    
    {
    {
    {            if (action->getTag() == (int)tag && action->getOriginalTarget() == target)
            {
                removeActionAtIndex(i, element);
                break;
            }
        }
    }
}
    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
    /**
@brief TurnOffTiles action.
@details Turn off the target node with many tiles in random order.
 */
class CC_DLL TurnOffTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of TurnOffTiles action; otherwise, return nil.
    */
    static TurnOffTiles* create(float duration, const Size& gridSize);
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of TurnOffTiles action; otherwise, return nil.
    */
    static TurnOffTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    

    
    
    {} // namespace folly

    
    static uint32_t manyArgTypesTestFunc() {
  uint32_t a = folly::Random::rand32();
  uint32_t b = folly::Random::rand32();
  bool bool_ = (a % 2) == (b % 2);
  char char_ = a & 255;
  short short_ = b & 32767;
  long long_ = a;
  float float_ = float(a) / float(b);
  double double_ = double(a) / double(b);
  FOLLY_SDT(
      folly,
      test_static_tracepoint_many_arg_types,
      a,
      b,
      bool_,
      char_,
      short_,
      long_,
      float_,
      double_);
  FOLLY_SDT_WITH_SEMAPHORE(folly, test_semaphore_local, long_, short_);
  return a + b;
}
    
      /**
   * Shortcut to get a secure random value of integral type.
   */
  template <class T>
  static typename std::enable_if<
      std::is_integral<T>::value && !std::is_same<T, bool>::value,
      T>::type
  secureRandom() {
    T val;
    secureRandom(&val, sizeof(val));
    return val;
  }
    
    
    {  /**
   * The strategy parameter is used to tune the compression algorithm.
   * Supported values:
   * - Z_DEFAULT_STRATEGY: normal data
   * - Z_FILTERED: data produced by a filter (or predictor)
   * - Z_HUFFMAN_ONLY: force Huffman encoding only (no string match)
   * - Z_RLE: limit match distances to one
   * - Z_FIXED: prevents the use of dynamic Huffman codes
   *
   * The strategy parameter only affects the compression ratio but not the
   * correctness of the compressed output.
   */
  int strategy;
};