
        
        bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
    class InAppPurchase : public mate::EventEmitter<InAppPurchase>,
                      public in_app_purchase::TransactionObserver {
 public:
  static mate::Handle<InAppPurchase> Create(v8::Isolate* isolate);
    }
    
      // The window used for processing events.
  HWND window_;
#endif
    
    class Event : public Wrappable<Event>, public content::WebContentsObserver {
 public:
  static Handle<Event> Create(v8::Isolate* isolate);
    }
    
    // --------------------------- Structures ---------------------------
    
    net::URLRequestJob* AboutProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  return new URLRequestAboutJob(request, network_delegate);
}
    
    
    {}  // namespace asar
    
      void Corrupt(FileType filetype, int offset, int bytes_to_corrupt) {
    // Pick file to corrupt
    std::vector<std::string> filenames;
    ASSERT_OK(env_.GetChildren(dbname_, &filenames));
    uint64_t number;
    FileType type;
    std::string fname;
    int picked_number = -1;
    for (size_t i = 0; i < filenames.size(); i++) {
      if (ParseFileName(filenames[i], &number, &type) &&
          type == filetype &&
          int(number) > picked_number) {  // Pick latest file
        fname = dbname_ + '/' + filenames[i];
        picked_number = number;
      }
    }
    ASSERT_TRUE(!fname.empty()) << filetype;
    }
    
      void SeekRandom(ThreadState* thread) {
    ReadOptions options;
    int found = 0;
    for (int i = 0; i < reads_; i++) {
      Iterator* iter = db_->NewIterator(options);
      char key[100];
      const int k = thread->rand.Next() % FLAGS_num;
      snprintf(key, sizeof(key), '%016d', k);
      iter->Seek(key);
      if (iter->Valid() && iter->key() == key) found++;
      delete iter;
      thread->stats.FinishedSingleOp();
    }
    char msg[100];
    snprintf(msg, sizeof(msg), '(%d of %d found)', found, num_);
    thread->stats.AddMessage(msg);
  }
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    #ifndef STORAGE_LEVELDB_DB_LOG_WRITER_H_
#define STORAGE_LEVELDB_DB_LOG_WRITER_H_
    
          // Verify that everything in [pos,current) was not present in
      // initial_state.
      while (pos < current) {
        ASSERT_LT(key(pos), K) << pos;
    }
    
        inline size_t GetVersion(const Dictionary& dict)
    {
        if (!dict.Contains(versionKey))
             LogicError('Required key '%ls' is not found in the dictionary.', versionKey.c_str());
    }
    
    
    {            Microsoft::MSR::CNTK::LearnableParameter<ElementType>::InitRandom(*valueMatrix, AsTensorShape(shape), initializerType, randomSeed, (ElementType)scale,
                                                                              filterRank, outputRank, /*initOnCPUOnly=*/true,
                                                                              AsCNTKImplDeviceId(device));
        }
    
        // Releases the mutex
    void Release()
    {
        assert(m_handle != NULL);
        int rc = 0;
        rc = ::ReleaseMutex(m_handle);
        if ((rc == RELEASEMUTEX_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to release mutex %s: %d', m_name.c_str(), ::GetLastError());
        }
        rc = ::CloseHandle(m_handle);
        if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to close handler %s: %d', m_name.c_str(), ::GetLastError());
        }
        m_handle = NULL;
    }
    
    class ScopeTimer
{
    Timer m_aggregateTimer;
    size_t m_verbosity;
    std::string m_message;
    }
    
    
    {        for (int t = 0; t < iNumPos; t++)
        {
            for (int k = 0; k < iNumLab; k++)
            {
                ElemType fTmp = (ElemType) LZERO;
                if (t > 1)
                {
                    for (int j = 0; j < iNumLab; j++)
                    {
                        ElemType fAlpha = alpha(j, t - 1) + pair_scores(k, j);
                        if (fAlpha > fTmp)
                        {
                            fTmp = fAlpha;
                            iTmp = j;
                        }
                    }
                    fTmp += pos_scores(k, t); // include position dependent score
                }
                else
                {
                    // with constrain that the first word is labeled as a given symbol
                    iTmp = stt;
                    fTmp = 0;
                    if (t == 1)
                    {
                        fTmp = alpha(iTmp, t - 1);
                        fTmp += pair_scores(k, iTmp);
                        fTmp += pos_scores(k, t);
                    }
                    else
                    {
                        fTmp = (k == stt) ? pos_scores(k, t) : (ElemType) LZERO;
                    }
                }
                alpha(k, t) = fTmp;
                backtrace(k, t) = (ElemType) iTmp;
            }
        }
    };
    
    
//---------------------------------------------------------------------
//
//   dump    Output the compiled form of the pattern.
//           Debugging function only.
//
//---------------------------------------------------------------------
void   RegexPattern::dumpOp(int32_t index) const {
    (void)index;  // Suppress warnings in non-debug build.
#if defined(REGEX_DEBUG)
    static const char * const opNames[] = {URX_OPCODE_NAMES};
    int32_t op          = fCompiledPat->elementAti(index);
    int32_t val         = URX_VAL(op);
    int32_t type        = URX_TYPE(op);
    int32_t pinnedType  = type;
    if ((uint32_t)pinnedType >= UPRV_LENGTHOF(opNames)) {
        pinnedType = 0;
    }
    }
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
        /**
     * Get maximum significant digits. INT32_MAX means no maximum.
     */
    int32_t getMax() const {
        return fMax;
    }
    
    static const int32_t gMaxFastInt = 4096;
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
    #ifndef SMPDTFST_H
#define SMPDTFST_H
    
    U_NAMESPACE_END
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const UnicodeString &keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
    }
    
    #endif /* #if !UCONFIG_NO_TRANSLITERATION */
    
      /**
   * \fn  virtual void Predictor::PredictLeaf(DMatrix* dmat,
   * std::vector<bst_float>* out_preds, const gbm::GBTreeModel& model, unsigned
   * ntree_limit = 0) = 0;
   *
   * \brief predict the leaf index of each tree, the output will be nsample *
   * ntree vector this is only valid in gbtree predictor.
   *
   * \param [in,out]  dmat        The input feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       Model to make predictions from.
   * \param           ntree_limit (Optional) The ntree limit.
   */
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
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
    
      // Computes the score (negative loss) resulting from performing this split
  virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats,
                                      bst_float left_weight,
                                      bst_float right_weight) const = 0;
    
      /**
   * \fn  static size_t CompressedBufferWriter::CalculateBufferSize(int
   * num_elements, int num_symbols)
   *
   * \brief Calculates number of bytes requiredm for a given number of elements
   * and a symbol range.
   *
   * \author  Rory
   * \date  7/9/2017
   *
   * \param num_elements  Number of elements.
   * \param num_symbols   Max number of symbols (alphabet size)
   *
   * \return  The calculated buffer size.
   */
    
      /*!
   * \brief add an element to a sketch
   * \param x The element added to the sketch
   * \param w The weight of the element.
   */
  inline void Push(DType x, RType w = 1) {
    if (w == static_cast<RType>(0)) return;
    if (inqueue.qtail == inqueue.queue.size()) {
      // jump from lazy one value to limit_size * 2
      if (inqueue.queue.size() == 1) {
        inqueue.queue.resize(limit_size * 2);
      } else {
        temp.Reserve(limit_size * 2);
        inqueue.MakeSummary(&temp);
        // cleanup queue
        inqueue.qtail = 0;
        this->PushTemp();
      }
    }
    inqueue.Push(x, w);
  }
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
    namespace aria2 {
    }
    
    #include <vector>
#include <deque>
#include <memory>
    
      virtual void
  addPeriodicTask2(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    #endif // D_DHT_TOKEN_TRACKER_H

    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
      /**
   * Returns a double in [0, 1)
   */
  static double randDouble01() {
    return randDouble01(ThreadLocalPRNG());
  }
    
    namespace folly {
    }
    
    
    {      if (equiv == cpu) {
        // we only want to count the equiv classes once, so we do it when
        // we first encounter them
        while (numCachesByLevel.size() <= level) {
          numCachesByLevel.push_back(0);
        }
        numCachesByLevel[level]++;
      }
    }
    
    template <template <typename> class Atom = std::atomic>
struct counted_ptr_base {
 protected:
  static intrusive_shared_count<Atom>* getRef(void* pt) {
    char* p = (char*)pt;
    p -= sizeof(intrusive_shared_count<Atom>);
    return (intrusive_shared_count<Atom>*)p;
  }
};