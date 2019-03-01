
        
        namespace {
    }
    
    bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv);
    
      // TransactionObserver:
  void OnTransactionsUpdated(
      const std::vector<in_app_purchase::Transaction>& transactions) override;
    
    
    {}  // namespace api
    
    
    {  DISALLOW_COPY_AND_ASSIGN(TrackableObject);
};
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
      // content::QuotaPermissionContext:
  void RequestQuotaPermission(const content::StorageQuotaParams& params,
                              int render_process_id,
                              const PermissionCallback& callback) override;
    
    
    { protected:
  virtual ~Delegate() {}
};
    
    struct Product {
  // Product Identifier
  std::string productIdentifier;
    }
    
    bool AboutProtocolHandler::IsSafeRedirectTarget(const GURL& location) const {
  return false;
}
    
      // Build a substitution map to replace the protocol's \c Self and the type
  // parameters of the requirement into a combined context that provides the
  // type parameters of the conformance context and the parameters of the
  // requirement.
  auto selfType = cast<GenericTypeParamType>(
      proto->getSelfInterfaceType()->getCanonicalType());
    
    #include 'swift/ASTSectionImporter/ASTSectionImporter.h'
#include 'swift/Basic/Dwarf.h'
#include 'swift/Serialization/SerializedModuleLoader.h'
#include 'swift/Serialization/Validation.h'
#include 'llvm/Support/Debug.h'
#include 'llvm/Support/raw_ostream.h'
    
    void CacheImpl::removeAll() {
  cache_remove_all(static_cast<cache_t*>(Impl));
}
    
    bool Mangle::needsPunycodeEncoding(StringRef str) {
  for (unsigned char c : str) {
    if (!isValidSymbolChar(c))
      return true;
  }
  return false;
}
    
    static int digit_index(char value) {
  if (value >= 'a' && value <= 'z')
    return value - 'a';
  if (value >= 'A' && value <= 'J')
    return value - 'A' + 26;
  return -1;
}
    
      /// The target to be passed to the compiler invocation. By default, this
  /// is the target triple, but this may be overridden to accommodate some
  /// platforms.
  virtual std::string getTargetForLinker() const;
    
    #include 'content/nw/src/api/base/base.h'
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    #include 'content/nw/src/api/clipboard/clipboard.h'
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
    aura::Window* Menu::GetActiveNativeView(content::RenderFrameHost* rfh) {
  content::WebContents* web_contents =
    content::WebContents::FromRenderFrameHost(rfh);
  if (!web_contents) {
    LOG(ERROR) << 'Menu: couldn't find WebContents';
    return NULL;
  }
  return web_contents->GetFullscreenRenderWidgetHostView()
             ? web_contents->GetFullscreenRenderWidgetHostView()
                   ->GetNativeView()
             : web_contents->GetNativeView();
}
    
    void MenuItem::Destroy() {
  gtk_widget_destroy(menu_item_);
  g_object_unref(G_OBJECT(menu_item_));
}
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    #include 'extensions/browser/extension_function.h'
    
    
    {    retMatcher = new RegexMatcher(this);
    if (retMatcher == NULL) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return NULL;
    }
    return retMatcher;
}
    
    //eof

    
    #include 'unicode/format.h'
#include 'unicode/locid.h'
#include 'unicode/parseerr.h'
#include 'unicode/utypes.h'
#include 'uvector.h'
#include 'hash.h'
    
    #endif /* #if !UCONFIG_NO_BREAK_ITERATION */

    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    class U_I18N_API SharedNumberFormat : public SharedObject {
public:
    SharedNumberFormat(NumberFormat *nfToAdopt) : ptr(nfToAdopt) { }
    virtual ~SharedNumberFormat();
    const NumberFormat *get() const { return ptr; }
    const NumberFormat *operator->() const { return ptr; }
    const NumberFormat &operator*() const { return *ptr; }
private:
    NumberFormat *ptr;
    SharedNumberFormat(const SharedNumberFormat &);
    SharedNumberFormat &operator=(const SharedNumberFormat &);
};
    
    #include 'gregoimp.h'
#include 'umutex.h'
    
    U_NAMESPACE_BEGIN
    
    #endif   // #if !UCONFIG_NO_FORMATTING
#endif   // SMPDTFST_H

    
    /**
 * Implement UnicodeMatcher
 */
UBool StringMatcher::matchesIndexValue(uint8_t v) const {
    if (pattern.length() == 0) {
        return TRUE;
    }
    UChar32 c = pattern.char32At(0);
    const UnicodeMatcher *m = data->lookupMatcher(c);
    return (m == 0) ? ((c & 0xFF) == v) : m->matchesIndexValue(v);
}
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
        index_.resize(boundary_[nfeature - 1].index_end);
    row_ind_.resize(boundary_[nfeature - 1].row_ind_end);
    
        std::map<int, int> _map;
    
    
    {    uint32_t protect_page = get_protect_stack_page();
    if (protect_page)
    {
        if (protect_stack(stack_, stack_size_, protect_page))
        {
            protect_page_ = protect_page;
        }
    }
}
    
        signals:
        void finished();
    
        ret = swPipeBase_create(&p, 1);
    ASSERT_EQ(ret, 0);
    ret = p.write(&p, (void *) SW_STRL('hello world\n'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void *) SW_STRL('你好中国。\n'));
    ASSERT_GT(ret, 0);
    
    
    {    ~lru_cache_test_class()
    {
        ++dtor_num;
    }
};
    
    protected:
    size_t capacity = 1;
    bool closed = false;
    std::list<Coroutine *> producer_queue;
    std::list<Coroutine *> consumer_queue;
    std::queue<void *> data_queue;
    
        pool = new async_thread_pool(SwooleAIO.min_thread_count, SwooleAIO.min_thread_count);
    pool->start();
    SwooleAIO.init = 1;
    
    int main(int argc, char **argv)
{
    swoole_init();
    }
    
    
    {            ASSERT_EQ(addr1, addr3);
            ASSERT_EQ(addr2, addr4);
        }
    
    pid_t swoole_coroutine_wait(int *__stat_loc)
{
    if (unlikely(SwooleG.main_reactor == nullptr || !Coroutine::get_current()))
    {
        return wait( __stat_loc);
    }
    }
    
    /* {{{ php_pgsql_result2array
 */
int swoole_pgsql_result2array(PGresult *pg_result, zval *ret_array, long result_type)
{
    zval row;
    char *field_name;
    size_t num_fields;
    int pg_numrows, pg_row;
    uint32_t i;
    assert(Z_TYPE_P(ret_array) == IS_ARRAY);
    }
    }
    }
    }