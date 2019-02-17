
        
        
    {
    {}  // namespace swig
}  // namespace tensorflow
    
    // Whether the op should be prefixed with underscore.
bool IsOpWithUnderscorePrefix(const string& s);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    
    {  // Maps error codes to the corresponding Python exception type.
  std::map<TF_Code, PyObject*> exc_types_;
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/c/eager/c_api.h'
    
    port::StatusOr<StreamExecutor*> ExecutorCache::GetOrCreate(
    const StreamExecutorConfig& config,
    const std::function<ExecutorFactory>& factory) {
  // In the fast path case, the cache already has an entry and we can just
  // return after Get() which only takes a shared lock and not a unique lock.
  // If we need to create, we take a unique lock on cache_.
  auto fast_result = Get(config);
  if (fast_result.ok()) {
    return fast_result;
  }
    }
    
    namespace stream_executor {
    }
    
    // FFT plan class. Each FFT implementation should define a plan class that is
// derived from this class. It does not provide any interface but serves
// as a common type that is used to execute the plan.
class Plan {
 public:
  virtual ~Plan() {}
};
    
    
    {  DISALLOW_COPY_AND_ASSIGN(UvTaskRunner);
};
    
      void SetImage(v8::Isolate* isolate, mate::Handle<NativeImage> image);
  void SetPressedImage(v8::Isolate* isolate, mate::Handle<NativeImage> image);
  void SetToolTip(const std::string& tool_tip);
  void SetTitle(const std::string& title);
  void SetHighlightMode(TrayIcon::HighlightMode mode);
  void SetIgnoreDoubleClickEvents(bool ignore);
  bool GetIgnoreDoubleClickEvents();
  void DisplayBalloon(mate::Arguments* args, const mate::Dictionary& options);
  void PopUpContextMenu(mate::Arguments* args);
  void SetContextMenu(v8::Isolate* isolate, mate::Handle<Menu> menu);
  gfx::Rect GetBounds();
    
    void Event::RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                                   content::RenderFrameHost* new_rfh) {
  if (sender_ && sender_ == old_rfh)
    sender_ = new_rfh;
}
    
      // content::JavaScriptDialogManager implementations.
  void RunJavaScriptDialog(content::WebContents* web_contents,
                           content::RenderFrameHost* rfh,
                           content::JavaScriptDialogType dialog_type,
                           const base::string16& message_text,
                           const base::string16& default_prompt_text,
                           DialogClosedCallback callback,
                           bool* did_suppress_message) override;
  void RunBeforeUnloadDialog(content::WebContents* web_contents,
                             content::RenderFrameHost* rfh,
                             bool is_reload,
                             DialogClosedCallback callback) override;
  void CancelDialogs(content::WebContents* web_contents,
                     bool reset_state) override;
    
      // Pricing Information
  double price = 0.0;
  std::string formattedPrice;
    
    bool URLRequestAboutJob::GetMimeType(std::string* mime_type) const {
  *mime_type = 'text/html';
  return true;
}
    
        UnicodeString &displayScripts(UnicodeString &dest) const; // append script names to dest string.
    ScriptSet & parseScripts(const UnicodeString &scriptsString, UErrorCode &status);  // Replaces ScriptSet contents.
    
    U_NAMESPACE_BEGIN
    
    int32_t
SimpleTimeZone::getRawOffset() const
{
    return rawOffset;
}
    
    
    {                UChar wsc = text.charAt(t);
                if(PatternProps::isWhiteSpace(wsc)) {
                    // Lenient mode and it's just whitespace we skip it
                    ++t;
                    continue;  // Do not update p.
                }
            }
            // hack around oldleniency being a bit of a catch-all bucket and we're just adding support specifically for paritial matches
            if(partialMatchLenient && oldLeniency) {
                break;
            }
    
    #endif  // !UCONFIG_NO_FORMATTING

    
    class TransliterationRuleData;
    
      // Iterate the queries (or schedule) and check platform/version/sanity.
  for (const auto& q : obj['queries'].GetObject()) {
    if (!q.value.IsObject()) {
      VLOG(1) << 'The pack ' << name << ' must contain a dictionary of queries';
      continue;
    }
    }
    
      ScheduledQuery(const std::string& pack_name,
                 const std::string& name,
                 const std::string& query)
      : pack_name(pack_name), name(name), query(query) {}
  ScheduledQuery() = default;
  ScheduledQuery(ScheduledQuery&&) = default;
  ScheduledQuery& operator=(ScheduledQuery&&) = default;
    
    Status deserializeQueryDataJSON(const std::string& json, QueryDataSet& qd) {
  rj::Document doc;
  if (doc.Parse(json.c_str()).HasParseError()) {
    return Status(1, 'Error serializing JSON');
  }
  return deserializeQueryData(doc, qd);
}
    
    /**
 * @brief Deserialize a RowTyped object from JSON object.
 *
 * @param obj the input JSON value (should be an object).
 * @param r [output] the output Row structure.
 *
 * @return Status indicating the success or failure of the operation.
 */
Status deserializeRow(const rapidjson::Value& obj, RowTyped& r);
    
      _Extension_ping_result__isset __isset;
    
    
  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->success.clear();
            uint32_t _size48;
            ::apache::thrift::protocol::TType _ktype49;
            ::apache::thrift::protocol::TType _vtype50;
            xfer += iprot->readMapBegin(_ktype49, _vtype50, _size48);
            uint32_t _i52;
            for (_i52 = 0; _i52 < _size48; ++_i52)
            {
              std::string _key53;
              xfer += iprot->readString(_key53);
              InternalOptionInfo& _val54 = this->success[_key53];
              xfer += _val54.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }
    
      void __set_success(const InternalOptionList& val);
    
    namespace osquery {
    }
    
    #include <smartmontools/libsmartctl.h>
    
      for (const auto& iter : line) {
    options_index++;
    if (iter[0] == '/') {
      line_exports.push_back(iter);
    } else {
      break;
    }
  }
    
    /// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
    {
    {        return res;
    }
};
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
            stack<TreeNode*> stack, output;
    
        for (auto i = lists.begin(); i != lists.end(); i++)
    {
        int ret = swRbtree_delete(tree, *i);
        ASSERT_EQ(ret, 0);
    }
    
    
    {    //1
    ret = p.read(&p, buf, sizeof(buf));
    if (ret < 0)
    {
        swSysError('read() failed.');
    }
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world1', buf), 0);
    //2
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world2', buf), 0);
    //3
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world3', buf), 0);
}
    
    namespace swoole_test
{
static int my_onPacket(swServer *serv, swEventData *req);
static int my_onReceive(swServer *serv, swEventData *req);
static void my_onStart(swServer *serv);
static void my_onShutdown(swServer *serv);
static void my_onConnect(swServer *serv, swDataHead *info);
static void my_onClose(swServer *serv, swDataHead *info);
static void my_onWorkerStart(swServer *serv, int worker_id);
static void my_onWorkerStop(swServer *serv, int worker_id);
    }
    
    #include <atomic>
    
    TEST(coroutine_channel, push_yield)
{
    Channel chan(1);
    }