
        
        
    {}  // namespace nwapi

    
    
    {}  // namespace nwapi
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    void Menu::Create(const base::DictionaryValue& option) {
  is_menu_modified_ = true;
  menu_delegate_.reset(new MenuDelegate(object_manager()));
  menu_model_.reset(new ui::NwMenuModel(menu_delegate_.get()));
    }
    
    namespace extensions {
NwAppQuitFunction::NwAppQuitFunction() {
    }
    }
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
    NwObjCallObjectMethodFunction::NwObjCallObjectMethodFunction() {
}
    
      // Called when |old_display| has been removed.
  void NwScreenDisplayObserver::OnDisplayRemoved(const display::Display& old_display) {
    std::unique_ptr<base::ListValue> args =
      nwapi::nw__screen::OnDisplayRemoved::Create(*ConvertGfxDisplay(old_display));
    DispatchEvent(
      events::HistogramValue::UNKNOWN,
      nwapi::nw__screen::OnDisplayRemoved::kEventName,
      std::move(args));
  }
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {  // Moving to a message on the arena should lead to a copy.
  *message2_on_arena = std::move(message1);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(message1);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    
    {  {
    string str;
    StringByteSink sink(&str);
    source.CopyTo(&sink, source.Available());
    EXPECT_EQ('world!', str);
    EXPECT_EQ(0, source.Available());
  }
}
    
    TEST(StatusOr, TestPointerDefaultCtor) {
  StatusOr<int*> thing;
  EXPECT_FALSE(thing.ok());
  EXPECT_EQ(Status::UNKNOWN, thing.status());
}
    
    
    {
    {
    {
    {}  // namespace
}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
    class Proto3DataStripper : public DataStripper {
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) {
    return field->type() == FieldDescriptor::TYPE_GROUP ||
           field->is_extension();
  }
};
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    namespace google {
namespace protobuf {
namespace compiler {
    }
    }
    }
    
      bool Generate(const FileDescriptor* file,
                        const string& parameter,
                        GeneratorContext* context,
                        string* error) const {
    FileDescriptorProto new_file;
    file->CopyTo(&new_file);
    SchemaGroupStripper::StripFile(file, &new_file);
    }
    
    #include <string>
#include <set>
#include <vector>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
    
    
    {  // Schedule the given callback for execution.
  virtual void Add(const std::function<void()>& callback) = 0;
};
    
      // rotate
  dict->lookup('Rotate', &obj1);
  if (obj1.isInt()) {
    rotate = obj1.getInt();
  }
  obj1.free();
  while (rotate < 0) {
    rotate += 360;
  }
  while (rotate >= 360) {
    rotate -= 360;
  }
    
      // get direction
  if (dict->lookup('M', &obj)->isName()) {
    const char *m = obj.getName();
    
    if (strcmp('I', m) == 0)
      direction = transitionInward;
    else if (strcmp('O', m) == 0)
      direction = transitionOutward;
  }
  obj.free();
    
    Object *Parser::getObj(Object *obj, Guchar *fileKey,
           CryptAlgorithm encAlgorithm, int keyLength,
           int objNum, int objGen) {
  std::set<int> fetchOriginatorNums;
  return getObj(obj, fileKey, encAlgorithm, keyLength, objNum, objGen, &fetchOriginatorNums);
}
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
      // duration parsing
  // duration's default value is set to 0, which means : intrinsinc media duration
  if (obj->dictLookup('D', &tmp)->isDict()) {
    Object oname, ddict, tmp2;
    if (tmp.dictLookup('S', &oname)->isName()) {
      char* name = oname.getName();
      if (!strcmp(name, 'F'))
	duration = -1; // infinity
      else if (!strcmp(name, 'T')) {
	if (tmp.dictLookup('T', &ddict)->isDict()) {
	  if (ddict.dictLookup('V', &tmp2)->isNum()) {
	    duration = Gulong(tmp2.getNum());
	  }
	  tmp2.free();
	}
	ddict.free();
      }
    }
    oname.free();
  }
  tmp.free();
    
    
    {  for (i = 0; i < splashColorModeNComps[cm]; ++i) {
#ifdef SPLASH_CMYK
    if (cm == splashModeCMYK8)
    {
      blend[i] = dest[i] < src[i] ? 255 - (src[i] - dest[i]) : 255 - (dest[i] - src[i]);
    }
    else
#endif
    {
      blend[i] = dest[i] < src[i] ? src[i] - dest[i] : dest[i] - src[i];
    }
  }
}
    
      virtual GBool isStatic() { return gFalse; }
    
        if (regionStart>regionLimit || regionStart<0 || regionLimit<0) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
    }
    
        if(result == CollationFastLatin::BAIL_OUT_RESULT) {
        if(settings->dontCheckFCD()) {
            UTF8CollationIterator leftIter(data, numeric, left, equalPrefixLength, leftLength);
            UTF8CollationIterator rightIter(data, numeric, right, equalPrefixLength, rightLength);
            result = CollationCompare::compareUpToQuaternary(leftIter, rightIter, *settings, errorCode);
        } else {
            FCDUTF8CollationIterator leftIter(data, numeric, left, equalPrefixLength, leftLength);
            FCDUTF8CollationIterator rightIter(data, numeric, right, equalPrefixLength, rightLength);
            result = CollationCompare::compareUpToQuaternary(leftIter, rightIter, *settings, errorCode);
        }
    }
    if(result != UCOL_EQUAL || settings->getStrength() < UCOL_IDENTICAL || U_FAILURE(errorCode)) {
        return (UCollationResult)result;
    }
    
    void SearchIterator::setMatchNotFound() 
{
    setMatchStart(USEARCH_DONE);
    setMatchLength(0);
    UErrorCode status = U_ZERO_ERROR;
    // by default no errors should be returned here since offsets are within 
    // range.
    if (m_search_->isForwardSearching) {
        setOffset(m_search_->textLength, status);
    }
    else {
        setOffset(0, status);
    }
}
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    void
SimpleTimeZone::setEndRule(int32_t month, int32_t dayOfWeekInMonth, int32_t dayOfWeek,
                           int32_t time, TimeMode mode, UErrorCode& status)
{
    endMonth     = (int8_t)month;
    endDay       = (int8_t)dayOfWeekInMonth;
    endDayOfWeek = (int8_t)dayOfWeek;
    endTime      = time;
    endTimeMode  = mode;
    decodeEndRule(status);
    transitionRulesInitialized = FALSE;
}
    
    U_NAMESPACE_BEGIN
    
    
    {    return *this;
}
    
        std::unique_ptr<DHTMessageFactory> messageFactory;
    
    class DHTNode;
class DHTBucket;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTBucketTreeNode;
    
    
    {} // namespace aria2

    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
    namespace aria2 {
    }
    
      DHTTokenTracker(const unsigned char* initialSecret);
    
    class DHTTokenTracker;
    
    const std::string& DHTUnknownMessage::getMessageType() const { return UNKNOWN; }
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = ((rand() % 19999) + 1) * 37;
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_GT(ret, 0);
        lists.insert(key);
    }
    
        friend
    void RedisQtDelRead(void * adapter) {
        RedisQtAdapter * a = static_cast<RedisQtAdapter *>(adapter);
        a->delRead();
    }
    
        private:
        const char * m_value;
        redisAsyncContext * m_ctx;
        RedisQtAdapter m_adapter;
    
    protected:
    size_t capacity = 1;
    bool closed = false;
    std::list<Coroutine *> producer_queue;
    std::list<Coroutine *> consumer_queue;
    std::queue<void *> data_queue;
    
        tmp = (swFdInfo *) swHashMap_find_int(ht, 37 * 8);
    ASSERT_NE((void* )tmp, nullptr);
    
        pid_t server_pid = create_server();
    
    
    {    ASSERT_GT(cid, 0);
    Coroutine::get_by_cid(cid)->resume();
    ASSERT_EQ(cid, _cid);
}

    
    void swReactor_defer_task_destroy(swReactor *reactor)
{
    list<defer_task *> *tasks = (list<defer_task *> *) reactor->defer_tasks;
    delete tasks;
}
    
    class MyServer : public Server
{
public:
    MyServer(string _host, int _port, int _mode = SW_MODE_PROCESS, int _type = SW_SOCK_TCP) :
            Server(_host, _port, _mode, _type)
    {
        serv.worker_num = 4;
        serv.task_worker_num = 2;
    }
    }
    
        ret = swPipeBase_create(&p, 1);
    ASSERT_EQ(ret, 0);
    ret = p.write(&p, (void *) SW_STRL('hello world\n'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void *) SW_STRL('你好中国。\n'));
    ASSERT_GT(ret, 0);