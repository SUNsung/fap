
        
          std::string Get(const std::string& k, const Snapshot* snapshot = NULL) {
    ReadOptions options;
    options.snapshot = snapshot;
    std::string result;
    Status s = db_->Get(options, k, &result);
    if (s.IsNotFound()) {
      result = 'NOT_FOUND';
    } else if (!s.ok()) {
      result = s.ToString();
    }
    return result;
  }
    
    
    {  ParsedInternalKey() { }  // Intentionally left uninitialized (for speed)
  ParsedInternalKey(const Slice& u, const SequenceNumber& seq, ValueType t)
      : user_key(u), sequence(seq), type(t) { }
  std::string DebugString() const;
};
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    void MenuBarView::InitView(ui::MenuModel* model) {
  model_ = model;
  for (int i = 0; i < model_->GetItemCount(); i++) {
    AddChildView(new MenuBarButton(model_->GetLabelAt(i), this, false));
  }
}
    
    
    {  RenderView* render_view = RenderView::FromWebView(view);
  return render_view;
}
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  is_modified_ = true;
  tooltip_ = base::UTF8ToUTF16(tooltip);
  if (menu_)
    menu_->UpdateStates();
}
    
    NwAppQuitFunction::~NwAppQuitFunction() {
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearAppCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearAppCacheFunction);
};
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE DIRECTLY.
//
// Expands to the name of the variable used to remember the names of
// the registered tests in the given test case.
# define GTEST_REGISTERED_TEST_NAMES_(TestCaseName) \
  gtest_registered_test_names_##TestCaseName##_
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
      // STL-style container methods.
  size_t size() const { return size_; }
  const_iterator begin() const { return array_; }
  const_iterator end() const { return array_ + size_; }
  bool operator==(const NativeArray& rhs) const {
    return size() == rhs.size() &&
        ArrayEq(begin(), size(), rhs.begin());
  }
    
        // No implementation - assignment is unsupported.
    void operator=(const Iterator& other);
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33>
struct Types33 {
  typedef T1 Head;
  typedef Types32<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33> Tail;
};
    
        // Note that we only apply the TransientTxnError label if the 'autocommit' field is present in
    // the session options. When present, 'autocommit' will always be false, so we don't check its
    // value.
    if (sessionOptions.getAutocommit() &&
        isTransientTransactionError(code,
                                    hasWriteConcernError,
                                    commandName == 'commitTransaction' ||
                                        commandName == 'coordinateCommitTransaction')) {
        // An error code for which isTransientTransactionError() is true indicates a transaction
        // failure with no persistent side effects.
        labelArray << txn::TransientTxnErrorFieldName;
    }
    
        /**
     * TargetedWrite is owned here once given to the TargetedWriteBatch.
     */
    void addWrite(TargetedWrite* targetedWrite, int estWriteSize) {
        _writes.mutableVector().push_back(targetedWrite);
        _estimatedSizeBytes += estWriteSize;
    }
    
    public:
    /**
     * Delegates invocation of the Task to this executor
     *
     * Execution of the Task can happen in one of three contexts:
     * * By default, on an execution context maintained by the OutOfLineExecutor (i.e. a thread).
     * * During shutdown, on the execution context of shutdown/join/dtor for the OutOfLineExecutor.
     * * Post-shutdown, on the execution context of the calling code.
     *
     * The Task will be passed a Status schedStatus that is either:
     * * schedStatus.isOK() if the function is run in an out-of-line context
     * * isCancelationError(schedStatus.code()) if the function is run in an inline context
     *
     * All of this is to say: CHECK YOUR STATUS.
     */
    virtual void schedule(Task func) = 0;
    
    
    {    auto status = _kvEngine->dropIdent(opCtx, _rs->getIdent());
    fassert(
        51032,
        status.withContext(str::stream() << 'failed to drop temporary ident: ' << _rs->getIdent()));
    _recordStoreHasBeenDeleted = true;
}
    
        BSONObj query = fromjson('{$text:{$search:\'awesome\', $caseSensitive: 0}}');
    StatusWithMatchExpression result =
        ExtensionsCallbackReal(&_opCtx, &_nss).parseText(query.firstElement());
    
    static const UChar kSuperscriptDigits[] = {
        0x2070,
        0xB9,
        0xB2,
        0xB3,
        0x2074,
        0x2075,
        0x2076,
        0x2077,
        0x2078,
        0x2079};
    
    U_CAPI int32_t U_EXPORT2
uhash_hashScriptSet(const UElement key);
    
    #if !UCONFIG_NO_FORMATTING
    
    class BreakIterator;
    
    U_NAMESPACE_BEGIN