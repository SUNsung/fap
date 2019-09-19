
        
            // Ignore first non-switch arg if it's not a standalone package.
    bool ignore_arg = !package->self_extract();
    for (unsigned i = 1; i < argv.size(); ++i) {
      if (ignore_arg && argv[i] == args[0]) {
        ignore_arg = false;
        continue;
      }
    }
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    
    {}
    
    void Menu::Popup(int x, int y, content::Shell* shell) {
  GdkEventButton* event = NULL; //FIXME: shell->web_contents()->GetRenderWidgetHostView()->GetLastMouseDown();
  uint32_t triggering_event_time = event ? event->time : GDK_CURRENT_TIME;
  gfx::Point point;
  if (!event) {
    // gfx::Rect bounds = shell->web_contents()->GetRenderWidgetHostView()->GetViewBounds();
    // point = gfx::Point(x + bounds.x(), y + bounds.y());
    DVLOG(1) << 'no last mouse down event';
    point = gfx::Point(x, y);
  }else
    point = gfx::Point(event->x_root, event->y_root);
    }
    
    namespace extensions {
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
    
          displayResult->id = gfx_display.id();
      displayResult->scale_factor = gfx_display.device_scale_factor();
      displayResult->is_built_in = gfx_display.IsInternal();
      displayResult->rotation = gfx_display.RotationAsDegree();
      displayResult->touch_support = (int)gfx_display.touch_support();
    
    
    {    private:
      DISALLOW_COPY_AND_ASSIGN(NwScreenInitEventListenersFunction);      
  };
    
    // KSI: This function is possibly stupid: it's nonsensical to talk about the entire
// cache being snapshotted -- we want some subtree to be snapshotted, at least.
// However, if you quickly release the superblock, you'll release any snapshotting of
// secondary index nodes that you could not possibly access.
void get_btree_superblock_and_txn_for_reading(
        cache_conn_t *cache_conn,
        cache_snapshotted_t snapshotted,
        scoped_ptr_t<real_superblock_t> *got_superblock_out,
        scoped_ptr_t<txn_t> *txn_out) {
    txn_t *txn = new txn_t(cache_conn, read_access_t::read);
    txn_out->init(txn);
    }
    
    
    
    
    {
    {        sindex_block.reset_buf_lock();
        txn->commit();
    }
}
    
    namespace unittest {
    }
    
    // EXPECT_DEATH_IF_SUPPORTED(statement, regex) and
// ASSERT_DEATH_IF_SUPPORTED(statement, regex) expand to real death tests if
// death tests are supported; otherwise they just issue a warning.  This is
// useful when you are combining death test assertions with normal test
// assertions in one test.
#if GTEST_HAS_DEATH_TEST
# define EXPECT_DEATH_IF_SUPPORTED(statement, regex) \
    EXPECT_DEATH(statement, regex)
# define ASSERT_DEATH_IF_SUPPORTED(statement, regex) \
    ASSERT_DEATH(statement, regex)
#else
# define EXPECT_DEATH_IF_SUPPORTED(statement, regex) \
    GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, )
# define ASSERT_DEATH_IF_SUPPORTED(statement, regex) \
    GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, return)
#endif
    
      // These two overloads allow streaming a wide C string to a Message
  // using the UTF-8 encoding.
  Message& operator <<(const wchar_t* wide_c_str);
  Message& operator <<(wchar_t* wide_c_str);
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12>
class ValueArray12 {
 public:
  ValueArray12(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
      v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12) {}
    }
    
      template <GTEST_2_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_2_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    return *this;
  }
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    
    {}  // namespace mongo

    
    
    {}  // namespace

    
        void tearDown() final {
        AutoGetDb autoDb(&_opCtx, _nss.db(), MODE_X);
        Database* database = autoDb.getDb();
        if (!database) {
            return;
        }
        {
            WriteUnitOfWork wunit(&_opCtx);
            static_cast<void>(database->dropCollection(&_opCtx, _nss));
            wunit.commit();
        }
    }
    
        virtual ~Base() {
        if (!collection())
            return;
        WriteUnitOfWork wunit(&_opCtx);
        _context.db()->dropCollection(&_opCtx, nss()).transitional_ignore();
        wunit.commit();
    }
    
    #include 'unicode/scientificnumberformatter.h'
#include 'unicode/dcfmtsym.h'
#include 'unicode/fpositer.h'
#include 'unicode/utf16.h'
#include 'unicode/uniset.h'
#include 'decfmtst.h'
#include 'unicode/decimfmt.h'
    
    int32_t ScriptSet::nextSetBit(int32_t fromIndex) const {
    // TODO: Wants a better implementation.
    if (fromIndex < 0) {
        return -1;
    }
    UErrorCode status = U_ZERO_ERROR;
    for (int32_t scriptIndex = fromIndex; scriptIndex < (int32_t)sizeof(bits)*8; scriptIndex++) {
        if (test((UScriptCode)scriptIndex, status)) {
            return scriptIndex;
        }
    }
    return -1;
}
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
      _OutputStream &operator<< (bool v) {
    m_out << (v ? 'true' : 'false');
    return *this;
  }
    
        // transactional: statements inside begin/commit
    T_INSERT,
    T_UPDATE,
    T_INCDEC,
    T_DELETE,
    T_REPLACE,
    T_SELECT,
    
      if (head != nullptr) {
    attr = head->properties;
    while (attr != nullptr) {
      if (attr->ns == nullptr) {
        add_soap_fault(obj, 'Client',
                       'A SOAP Header element cannot have non Namespace '
                       'qualified attributes');
        xmlFreeDoc(response);
        return false;
      }
      if (attr_is_equal_ex(attr, 'encodingStyle', SOAP_1_2_ENV_NAMESPACE)) {
        if (soap_version == SOAP_1_2) {
          add_soap_fault(obj, 'Client',
                         'encodingStyle cannot be specified on the Header');
          xmlFreeDoc(response);
          return false;
        }
        if (strcmp((char*)attr->children->content, SOAP_1_1_ENC_NAMESPACE)) {
          add_soap_fault(obj, 'Client', 'Unknown data encoding style');
          xmlFreeDoc(response);
          return false;
        }
      }
      attr = attr->next;
    }
  }
    
    /*
 * Variant of translate() used by StackTraceNoHeap.
 */
bool translate(int fd, void* frame_addr, int frame_num, NamedBfdRange bfds) {
  // Frame pointer offset in previous frame.
  Dl_info dlInfo;
  Addr2lineData adata;
  StackFrame frame(frame_addr);
  if (!translate(&frame, dlInfo, &adata, bfds)) {
    return false;
  }
    }
    
    void HostHealthMonitor::stop() {
  notifyObservers(HealthLevel::Bold);
  std::unique_lock<std::mutex> guard(m_stopped_lock);
  m_stopped = true;
  m_condition.notify_one();
}
    
    TEST_F(ProxygenTransportBasicTest, valid_expect) {
  auto req = getRequest(HTTPMethod::POST);
  auto length = folly::to<std::string>(RuntimeOption::MaxPostSize);
  req->getHeaders().add(HTTP_HEADER_CONTENT_LENGTH, length);
  req->getHeaders().add(HTTP_HEADER_EXPECT, '100-continue');
  EXPECT_CALL(m_txn, sendHeaders(IsResponseStatusCode(100)));
  m_transport->onHeadersComplete(std::move(req));
}
    
    /*
 * Initializes the repo schema id and the compiler id from their special
 * sections in the hhvm binary.
 */
void readBuildInfo() {
  if (inited.load(std::memory_order_acquire)) return;
  std::unique_lock<std::mutex> lock(mtx);
  if (inited.load(std::memory_order_acquire)) return;
    }
    
      if (rhsCls->attrs() & AttrAbstract ||
      (extra->strictLikely && !(rhsCls->attrs() & AttrNoOverride))) {
    // If the test must be extended, or the hint says it's probably not an
    // exact match, don't check for the same class.
    check_subclass(dst);
    return;
  }
    
    FailedTraceGen::FailedTraceGen(const char* file, int line, const char* why)
  : std::runtime_error(folly::format('FailedTraceGen @ {}:{} - {}',
                                     file, line, why).str())
{}