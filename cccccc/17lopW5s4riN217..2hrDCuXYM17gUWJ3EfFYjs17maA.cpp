
        
        // If the keys are not available from the header, define them ourselves. The values match
// what tsd_private.h provides.
# ifndef __PTK_FRAMEWORK_SWIFT_KEY0
#  define __PTK_FRAMEWORK_SWIFT_KEY0 100
# endif
# ifndef __PTK_FRAMEWORK_SWIFT_KEY1
#  define __PTK_FRAMEWORK_SWIFT_KEY1 101
# endif
# ifndef __PTK_FRAMEWORK_SWIFT_KEY2
#  define __PTK_FRAMEWORK_SWIFT_KEY2 102
# endif
    
            AbstractionPattern origEltTy =
            (eltDecl == SGF.getASTContext().getOptionalSomeDecl()
                 ? AbstractionPattern(substEltTy)
                 : SGF.SGM.M.Types.getAbstractionPattern(eltDecl));
    
    // Metadata *swift_getFunctionTypeMetadata3(unsigned long flags,
//                                          const Metadata *arg0,
//                                          const Metadata *arg1,
//                                          const Metadata *arg2,
//                                          const Metadata *resultMetadata);
FUNCTION(GetFunctionMetadata3, swift_getFunctionTypeMetadata3,
        C_CC, AlwaysAvailable,
        RETURNS(TypeMetadataPtrTy),
        ARGS(SizeTy, TypeMetadataPtrTy, TypeMetadataPtrTy, TypeMetadataPtrTy,
             TypeMetadataPtrTy),
        ATTRS(NoUnwind, ReadNone))
    
      /// Verify the integrity of each map and the cross-map consistency.
  /// Then call \p verifyFn for each entry found in each of the two maps,
  /// passing an index so that the verifyFn knows which map is being tested.
  void verify(function_ref<void(const Key1 &k1, const Key2 &k2, Value v,
                                unsigned index)>
                  verifyFn) const {
    map1.verify([&](const Key1 &k1, const Key2 &k2, Value v) {
      assertConsistent(map2.find(k2, k1).getValue(), v);
    });
    map2.verify([&](const Key2 &k2, const Key1 &k1, Value v) {
      assertConsistent(map1.find(k1, k2).getValue(), v);
    });
    map1.verify([&](const Key1 &k1, const Key2 &k2, Value v) {
      verifyFn(k1, k2, v, 0);
    });
    map2.verify([&](const Key2 &k2, const Key1 &k1, Value v) {
      verifyFn(k1, k2, v, 1);
    });
  }
    
      /// The name of the 'main' input file, used by the debug info.
  std::string MainInputFilenameForDebugInfo;
    
    private:
    NetworkStyle(const QString &appName, const int iconColorHueShift, const int iconColorSaturationReduction, const char *titleAddText);
    
        void setModel(WalletModel *model);
    void setAddress_SM(const QString &address);
    void setAddress_VM(const QString &address);
    
        if (secp256k1_scalar_is_zero(sigr) || secp256k1_scalar_is_zero(sigs)) {
        return 0;
    }
    
    const UniValue& UniValue::get_array() const
{
    if (typ != VARR)
        throw std::runtime_error('JSON value is not an array as expected');
    return *this;
}
    
    
    {    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};
    
    Status FaultInjectionTestEnv::NewAppendableFile(const std::string& fname,
                                                WritableFile** result) {
  WritableFile* actual_writable_file;
  Status s = target()->NewAppendableFile(fname, &actual_writable_file);
  if (s.ok()) {
    FileState state(fname);
    state.pos_ = 0;
    {
      MutexLock l(&mutex_);
      if (db_file_state_.count(fname) == 0) {
        new_files_since_last_dir_sync_.insert(fname);
      } else {
        state = db_file_state_[fname];
      }
    }
    *result = new TestWritableFile(state, actual_writable_file, this);
  }
  return s;
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
      // read a token
  i = 0;
  buf[i++] = c;
  if (c == '(') {
    backslash = gFalse;
    while ((c = lookChar()) != EOF) {
      consumeChar();
      if (i < size) {
	buf[i++] = c;
      }
      if (c == '\\') {
	backslash = gTrue;
      } else if (!backslash && c == ')') {
	break;
      } else {
	backslash = gFalse;
      }
    }
  } else if (c == '<') {
    while ((c = lookChar()) != EOF) {
      consumeChar();
      if (i < size && specialChars[c] != 1) {
	buf[i++] = c;
      }
      if (c == '>') {
	break;
      }
    }
  } else if (c != '[' && c != ']') {
    while ((c = lookChar()) != EOF && !specialChars[c]) {
      consumeChar();
      if (i < size) {
	buf[i++] = c;
      }
    }
  }
  // Zero terminate token string
  buf[i] = '\0';
  // Return length of token
  *length = i;
    
    GBool Page::loadThumb(unsigned char **data_out,
		      int *width_out, int *height_out,
		      int *rowstride_out)
{
  unsigned int pixbufdatasize;
  int width, height, bits;
  Object obj1, fetched_thumb;
  Dict *dict;
  GfxColorSpace *colorSpace;
  GBool success = gFalse;
  Stream *str;
  GfxImageColorMap *colorMap;
    }
    
    
    {  return value;
}
    
    private:
  struct Interval {
    Interval(Object *dict, int baseA);
    ~Interval();
    GooString *prefix;
    enum NumberStyle {
      None,
      Arabic,
      LowercaseRoman,
      UppercaseRoman,
      UppercaseLatin,
      LowercaseLatin
    } style;
    int first, base, length;
  };
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
        bool operator==(const PopplerCacheKey &key) const
    {
      const ObjectKey *k = static_cast<const ObjectKey*>(&key);
      return k->num == num && k->gen == gen;
    }
    
      colorSpace = colorMap->getColorSpace();
  if (colorSpace->getMode() == csIndexed) {
    colorSpace = ((GfxIndexedColorSpace *)colorSpace)->getBase();
  }
  if (colorSpace->getMode() != csDeviceGray &&
      colorSpace->getMode() != csCalGray) {
    gray = gFalse;
  }
  mono = gFalse;
  if (state->getBlendMode() != gfxBlendNormal) {
    transparency = gTrue;
  }
  gdi = gFalse;
    
    
    {  void addElement (double elapsed);
  int getCount () { return count; }
  double getTotal () { return total; }
  double getMin () { return max; }
  double getMax () { return max; }
private:
  int count;			// size of <elems> array
  double total;			// number of elements in array
  double min;			// reference count
  double max;			// reference count
};
    
    Sound::Sound(Object *obj, bool readAttrs)
{
  streamObj = new Object();
  streamObj->initNull();
  obj->copy(streamObj);
    }
    
      xref = NULL;
    
    
    {  TimePointT start;
  DurationT elapsed;
  Timer() { Reset(); }
  void Reset() {
    elapsed = DurationT::zero();
    Start();
  }
  void Start() { start = ClockT::now(); }
  void Stop() { elapsed += ClockT::now() - start; }
  double ElapsedSeconds() const { return SecondsT(elapsed).count(); }
  void PrintElapsed(std::string label) {
    char buffer[255];
    snprintf(buffer, sizeof(buffer), '%s:\t %fs', label.c_str(),
             SecondsT(elapsed).count());
    LOG(CONSOLE) << buffer;
    Reset();
  }
};
    
    // try to load weight information from file, if exists
inline bool MetaTryLoadFloatInfo(const std::string& fname,
                                 std::vector<bst_float>* data) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  data->clear();
  bst_float value;
  while (is >> value) {
    data->push_back(value);
  }
  return true;
}
    
      BatchSet GetRowBatches() override;
    
      const MetaInfo& Info() const override;
    
    SparsePageSource::SparsePageSource(const std::string& cache_info,
                                   const std::string& page_type)
    : base_rowid_(0), page_(nullptr), clock_ptr_(0) {
  // read in the info files
  std::vector<std::string> cache_shards = GetCacheShards(cache_info);
  CHECK_NE(cache_shards.size(), 0U);
  {
    std::string name_info = cache_shards[0];
    std::unique_ptr<dmlc::Stream> finfo(dmlc::Stream::Create(name_info.c_str(), 'r'));
    int tmagic;
    CHECK_EQ(finfo->Read(&tmagic, sizeof(tmagic)), sizeof(tmagic));
    this->info.LoadBinary(finfo.get());
  }
  files_.resize(cache_shards.size());
  formats_.resize(cache_shards.size());
  prefetchers_.resize(cache_shards.size());
    }
    
    #endif
    
    TEST(Metric, DeclareUnifiedTest(MAE)) {
  auto lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  xgboost::Metric * metric = xgboost::Metric::Create('mae', &lparam);
  metric->Configure({});
  ASSERT_STREQ(metric->Name(), 'mae');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
  delete metric;
}
    
    /**
 * This structure contains per-service-context state related to the oplog.
 */
class LocalOplogInfo {
public:
    static LocalOplogInfo* get(ServiceContext& service);
    static LocalOplogInfo* get(ServiceContext* service);
    static LocalOplogInfo* get(OperationContext* opCtx);
    }
    
        /**
     * Used when there is a canonical query but no query solution (e.g. idhack queries, queries
     * against a NULL collection, queries using the subplan stage).
     */
    static StatusWith<std::unique_ptr<PlanExecutor, PlanExecutor::Deleter>> make(
        OperationContext* opCtx,
        std::unique_ptr<WorkingSet> ws,
        std::unique_ptr<PlanStage> rt,
        std::unique_ptr<CanonicalQuery> cq,
        const Collection* collection,
        YieldPolicy yieldPolicy);
    
    
    {
    {        int numCounted = runCount(&count);
        ASSERT_EQUALS(0, numCounted);
    }
};
    
                    //   Note: if the capture group match was of an empty string the backref
                //         match succeeds.  Verified by testing:  Perl matches succeed
                //         in this case, so we do too.
    
    RuleBasedCollator::RuleBasedCollator(const uint8_t *bin, int32_t length,
                                     const RuleBasedCollator *base, UErrorCode &errorCode)
        : data(NULL),
          settings(NULL),
          tailoring(NULL),
          cacheEntry(NULL),
          validLocale(''),
          explicitlySetAttributes(0),
          actualLocaleIsSameAsValid(FALSE) {
    if(U_FAILURE(errorCode)) { return; }
    if(bin == NULL || length == 0 || base == NULL) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    const CollationTailoring *root = CollationRoot::getRoot(errorCode);
    if(U_FAILURE(errorCode)) { return; }
    if(base->tailoring != root) {
        errorCode = U_UNSUPPORTED_ERROR;
        return;
    }
    LocalPointer<CollationTailoring> t(new CollationTailoring(base->tailoring->settings));
    if(t.isNull() || t->isBogus()) {
        errorCode = U_MEMORY_ALLOCATION_ERROR;
        return;
    }
    CollationDataReader::read(base->tailoring, bin, length, *t, errorCode);
    if(U_FAILURE(errorCode)) { return; }
    t->actualLocale.setToBogus();
    adoptTailoring(t.orphan(), errorCode);
}
    
    
    {    return USEARCH_DONE;
}
    
    #include 'unicode/format.h'
#include 'unicode/locid.h'
#include 'unicode/parseerr.h'
#include 'unicode/utypes.h'
#include 'uvector.h'
#include 'hash.h'
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};