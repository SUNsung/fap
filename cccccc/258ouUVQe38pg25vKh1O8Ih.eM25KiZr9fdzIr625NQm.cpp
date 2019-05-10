
        
        #endif // BITCOIN_QT_NETWORKSTYLE_H

    
    public:
    explicit SignVerifyMessageDialog(const PlatformStyle *platformStyle, QWidget *parent);
    ~SignVerifyMessageDialog();
    
    static void secp256k1_hmac_sha256_initialize(secp256k1_hmac_sha256_t *hash, const unsigned char *key, size_t keylen) {
    int n;
    unsigned char rkey[64];
    if (keylen <= 64) {
        memcpy(rkey, key, keylen);
        memset(rkey + keylen, 0, 64 - keylen);
    } else {
        secp256k1_sha256_t sha256;
        secp256k1_sha256_initialize(&sha256);
        secp256k1_sha256_write(&sha256, key, keylen);
        secp256k1_sha256_finalize(&sha256, rkey);
        memset(rkey + 32, 0, 32);
    }
    }
    
    void test_ecdh_api(void) {
    /* Setup context that just counts errors */
    secp256k1_context *tctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    secp256k1_pubkey point;
    unsigned char res[32];
    unsigned char s_one[32] = { 0 };
    int32_t ecount = 0;
    s_one[31] = 1;
    }
    
        UniValue obj2(UniValue::VOBJ);
    BOOST_CHECK(obj2.pushKV('cat1', 9000));
    BOOST_CHECK(obj2.pushKV('cat2', 12345));
    
    // To Update the operands in the Expression according to the current Radix
void CHistoryCollector::UpdateHistoryExpression(uint32_t radix, int32_t precision)
{
    if (m_spTokens == nullptr)
    {
        return;
    }
    }
    
        Rational& Rational::operator>>=(Rational const& rhs)
    {
        PRAT lhsRat = this->ToPRAT();
        PRAT rhsRat = rhs.ToPRAT();
    }
    
    
    {    m_historyItems.erase(m_historyItems.begin() + uIdx);
    return true;
}
    
        // Releases the mutex
    void Release()
    {
        assert(m_fd != -1);
        // removing file
        unlink(m_fileName.c_str());
        // Note: file is intentionally removed *before* releasing the lock
        // to ensure that locked file isn't deleted by the non-owner of the lock
        m_lock.l_type = F_UNLCK;
        // Now removing the lock and closing the file descriptor
        // waiting processes will be notified
        int rc = fcntl(m_fd, F_SETLKW, &m_lock);
        if (rc == FCNTL_ERROR)
        {
            RuntimeError('Mutex Release: Failed to release mutex %s', m_fileName.c_str());
        }
        close(m_fd);
        m_fd = -1;
    }
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
    
    {
    {                // New query
                numberOfUrls = 0;
                previousQueryId = queryId;
            }
            
            numberOfUrls++;
        }
    
    
    {                    if (!memAllocInfoVec.empty())
                    {
                        // the memory allocation vector is sorted by size. We find the largest available buffer that doesn't have time overlap
                        auto workingAlloc = memAllocInfoVec.end();
                        for (auto iter = memAllocInfoVec.begin(); iter != memAllocInfoVec.end(); iter++)
                        {
                            if (!CheckOverlap(make_pair(memInfo.allocStep, memInfo.releaseStep), iter->occupancy))
                                workingAlloc = iter;
                        }
                        if (workingAlloc == memAllocInfoVec.end())  // nothing works 
                        {
                            vector<pair<int, int>> occ;
                            occ.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                            MemAllocInfo ma(memoryCounter, memInfo.matrixSize, occ);
                            memAllocInfoVec.push_back(ma);  // add as the last one 
                            memInfo.SetMemoryId(memoryCounter);
                            memoryCounter++;
                        }
                        else
                        {
                            workingAlloc->occupancy.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                            memInfo.SetMemoryId(workingAlloc->memoryId);
                        }
                    }
                    else
                    {
                        vector<pair<int, int>> occ;
                        occ.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                        MemAllocInfo ma(memoryCounter, memInfo.matrixSize, occ);
                        memAllocInfoVec.push_back(ma);
                        memInfo.SetMemoryId(memoryCounter);
                        memoryCounter++;
                    }
                }
    
    
    {
    {        // N.B. - this is the magical call, the reason for the function
        // dimensions would be outputRank * numSamples * minibatch * time.
        // This call establishes outputRank * numSamples, the rest will be filled in
        // dynamically though the MBLayout.
        SetDims(TensorShape(dimsC), HasMBLayout());
    }
};
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    SEXP XGDMatrixCreateFromMat_R(SEXP mat,
                              SEXP missing) {
  SEXP ret;
  R_API_BEGIN();
  SEXP dim = getAttrib(mat, R_DimSymbol);
  size_t nrow = static_cast<size_t>(INTEGER(dim)[0]);
  size_t ncol = static_cast<size_t>(INTEGER(dim)[1]);
  const bool is_int = TYPEOF(mat) == INTSXP;
  double *din;
  int *iin;
  if (is_int) {
    iin = INTEGER(mat);
  } else {
    din = REAL(mat);
  }
  std::vector<float> data(nrow * ncol);
  #pragma omp parallel for schedule(static)
  for (omp_ulong i = 0; i < nrow; ++i) {
    for (size_t j = 0; j < ncol; ++j) {
      data[i * ncol +j] = is_int ? static_cast<float>(iin[i + nrow * j]) : din[i + nrow * j];
    }
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromMat(BeginPtr(data), nrow, ncol, asReal(missing), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*!
 * \brief template for all quantile sketch algorithm
 *        that uses merge/prune scheme
 * \tparam DType type of data content
 * \tparam RType type of rank
 * \tparam TSummary actual summary data structure it uses
 */
template<typename DType, typename RType, class TSummary>
class QuantileSketchTemplate {
 public:
  /*! \brief type of summary type */
  using Summary = TSummary;
  /*! \brief the entry type */
  using Entry = typename Summary::Entry;
  /*! \brief same as summary, but use STL to backup the space */
  struct SummaryContainer : public Summary {
    std::vector<Entry> space;
    SummaryContainer(const SummaryContainer &src) : Summary(nullptr, src.size) {
      this->space = src.space;
      this->data = dmlc::BeginPtr(this->space);
    }
    SummaryContainer() : Summary(nullptr, 0) {
    }
    /*! \brief reserve space for summary */
    inline void Reserve(size_t size) {
      if (size > space.size()) {
        space.resize(size);
        this->data = dmlc::BeginPtr(space);
      }
    }
    /*!
     * \brief set the space to be merge of all Summary arrays
     * \param begin beginning position in the summary array
     * \param end ending position in the Summary array
     */
    inline void SetMerge(const Summary *begin,
                         const Summary *end) {
      CHECK(begin < end) << 'can not set combine to empty instance';
      size_t len = end - begin;
      if (len == 1) {
        this->Reserve(begin[0].size);
        this->CopyFrom(begin[0]);
      } else if (len == 2) {
        this->Reserve(begin[0].size + begin[1].size);
        this->SetMerge(begin[0], begin[1]);
      } else {
        // recursive merge
        SummaryContainer lhs, rhs;
        lhs.SetCombine(begin, begin + len / 2);
        rhs.SetCombine(begin + len / 2, end);
        this->Reserve(lhs.size + rhs.size);
        this->SetCombine(lhs, rhs);
      }
    }
    /*!
     * \brief do elementwise combination of summary array
     *        this[i] = combine(this[i], src[i]) for each i
     * \param src the source summary
     * \param max_nbyte maximum number of byte allowed in here
     */
    inline void Reduce(const Summary &src, size_t max_nbyte) {
      this->Reserve((max_nbyte - sizeof(this->size)) / sizeof(Entry));
      SummaryContainer temp;
      temp.Reserve(this->size + src.size);
      temp.SetCombine(*this, src);
      this->SetPrune(temp, space.size());
    }
    /*! \brief return the number of bytes this data structure cost in serialization */
    inline static size_t CalcMemCost(size_t nentry) {
      return sizeof(size_t) + sizeof(Entry) * nentry;
    }
    /*! \brief save the data structure into stream */
    template<typename TStream>
    inline void Save(TStream &fo) const {  // NOLINT(*)
      fo.Write(&(this->size), sizeof(this->size));
      if (this->size != 0) {
        fo.Write(this->data, this->size * sizeof(Entry));
      }
    }
    /*! \brief load data structure from input stream */
    template<typename TStream>
    inline void Load(TStream &fi) {  // NOLINT(*)
      CHECK_EQ(fi.Read(&this->size, sizeof(this->size)), sizeof(this->size));
      this->Reserve(this->size);
      if (this->size != 0) {
        CHECK_EQ(fi.Read(this->data, this->size * sizeof(Entry)),
                 this->size * sizeof(Entry));
      }
    }
  };
  /*!
   * \brief initialize the quantile sketch, given the performance specification
   * \param maxn maximum number of data points can be feed into sketch
   * \param eps accuracy level of summary
   */
  inline void Init(size_t maxn, double eps) {
    LimitSizeLevel(maxn, eps, &nlevel, &limit_size);
    // lazy reserve the space, if there is only one value, no need to allocate space
    inqueue.queue.resize(1);
    inqueue.qtail = 0;
    data.clear();
    level.clear();
  }
    }
    
    TEST(c_api, XGDMatrixCreateFromMat_omp) {
  std::vector<int> num_rows = {100, 11374, 15000};
  for (auto row : num_rows) {
    int num_cols = 50;
    int num_missing = 5;
    DMatrixHandle handle;
    std::vector<float> data(num_cols * row, 1.5);
    for (int i = 0; i < num_missing; i++) {
      data[i] = std::numeric_limits<float>::quiet_NaN();
    }
    }
    }
    
    
    {    for (auto i = lists.begin(); i != lists.end(); i++)
    {
        int ret = (int) (long) swRbtree_find(tree, *i);
        ASSERT_EQ(ret, 0);
    }
}

    
        QObject::connect(&example, SIGNAL(finished()), &app, SLOT(quit()));
    QTimer::singleShot(0, &example, SLOT(run()));
    
        int ret3 = (int) (long) swHashMap_find(hm, (char *) SW_STRL('notfound'));
    ASSERT_EQ(ret3, 0);
    
    int main(int argc, char **argv)
{
    swoole_init();
    }
    
    TEST(coroutine_channel, push_timeout)
{
    coro_test([](void *arg)
    {
        Channel chan(1);
        bool ret;
    }
    }
    
        un1.sun_family = AF_UNIX;
    un2.sun_family = AF_UNIX;
    
        _pipe = eventfd(0, 0);
    
    void MyServer::onPacket(const DataBuffer &data, ClientInfo &clientInfo)
{
    printf('recv, length=%ld, str=%s, client=%s:%d\n', data.length,  (char *) data.buffer, clientInfo.address, clientInfo.port);
    char resp_data[SW_BUFFER_SIZE_STD];
    int n = snprintf(resp_data, SW_BUFFER_SIZE_STD, (char *) 'Server: %.*s\n', (int) data.length, (char *) data.buffer);
    auto sent_data =  DataBuffer(resp_data, n);
    auto ip = string(clientInfo.address);
    auto ret = this->sendto(ip, clientInfo.port, sent_data);
    if (!ret)
    {
        printf('send to client failed. errno=%d\n', errno);
    }
    else
    {
        printf('send %d bytes to client success. data=%s\n', n, resp_data);
    }
}
    
        /**
     * 协程2
     */
    Coroutine::create([](void *arg)
    {
        G_a.x = 100;
        G_a.y = nullptr;
    });
    
    void swoole_coroutine_signal_init()
{
    if (!signal_init)
    {
        signal_init = true;
        swSignal_add(SIGCHLD, signal_handler);
#ifdef HAVE_SIGNALFD
        if (SwooleG.use_signalfd && !swReactor_handle_isset(SwooleG.main_reactor, SW_FD_SIGNAL))
        {
            swSignalfd_setup(SwooleG.main_reactor);
        }
#endif
    }
}