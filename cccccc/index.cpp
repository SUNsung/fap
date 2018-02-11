
        
         protected:
  WebRequest(v8::Isolate* isolate, AtomBrowserContext* browser_context);
  ~WebRequest() override;
    
    void Event::SetSenderAndMessage(content::WebContents* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
      // event.sendReply(json), used for replying synchronous message.
  bool SendReply(const base::string16& json);
    
    #include <string>
    
    #include 'net/url_request/url_request_http_job.h'
    
    #include 'atom/browser/net/asar/url_request_asar_job.h'
#include 'atom/browser/net/js_asker.h'
    
    class URLRequestBufferJob : public JsAsker<net::URLRequestSimpleJob> {
 public:
  URLRequestBufferJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
      struct kevent change = { 0 };
  EV_SET(&change, parent_pid, EVFILT_PROC, EV_ADD, NOTE_EXIT, 0, NULL);
  if (kevent(kq.get(), &change, 1, nullptr, 0, nullptr) == -1) {
    PLOG(ERROR) << 'kevent (add)';
    return;
  }
    
    
    {    if (counter > 0 && s.ok()) {
      std::string orig = TableFileName(dbname_, t.meta.number);
      s = env_->RenameFile(copy, orig);
      if (s.ok()) {
        Log(options_.info_log, 'Table #%llu: %d entries repaired',
            (unsigned long long) t.meta.number, counter);
        tables_.push_back(t);
      }
    }
    if (!s.ok()) {
      env_->DeleteFile(copy);
    }
  }
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
    class VersionEditTest { };
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    #include 'caffe/layers/softmax_layer.hpp'
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs. At training time, we have @f$
   *      y_{\mbox{train}} = \left\{
   *         \begin{array}{ll}
   *            \frac{x}{1 - p} & \mbox{if } u > p \\
   *            0 & \mbox{otherwise}
   *         \end{array} \right.
   *      @f$, where @f$ u \sim U(0, 1)@f$ is generated independently for each
   *      input at each iteration. At test time, we simply have
   *      @f$ y_{\mbox{test}} = \mathbb{E}[y_{\mbox{train}}] = x @f$.
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    }
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
    namespace cv { namespace internal {
    }
    }
    
    
    {    test_array[INPUT].push_back(NULL);
    test_array[OUTPUT].push_back(NULL);
    test_array[REF_OUTPUT].push_back(NULL);
}
    
    CV_EXPORTS_W void divide(InputArray src1, Scalar src2, OutputArray dst, double scale=1, int dtype=-1);
    
    // implements rabit error handling.
extern 'C' {
  void XGBoostAssert_R(int exp, const char *fmt, ...);
  void XGBoostCheck_R(int exp, const char *fmt, ...);
}
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    #else
/*!
 * \brief global random engine
 */
typedef RandomEngine GlobalRandomEngine;
#endif
    
      EXPECT_EQ(dmat->HaveColAccess(), false);
  const std::vector<bool> enable(dmat->info().num_col, true);
  dmat->InitColAccess(enable, 1, 1); // Max 1 row per patch
  ASSERT_EQ(dmat->HaveColAccess(), true);
  EXPECT_TRUE(FileExists(tmp_file + '.cache.col.page'));
    
      while (iter->Next()) {
    const RowBatch &batch = iter->Value();
    for (size_t i = 0; i < batch.size; ++i) {
      bst_uint ridx = static_cast<bst_uint>(batch.base_rowid + i);
      if (pkeep == 1.0f || coin_flip(rnd)) {
        buffered_rowset_.push_back(ridx);
        tmp.Push(batch[i]);
      }
      if (tmp.Size() >= max_row_perbatch) {
        std::unique_ptr<SparsePage> page(new SparsePage());
        this->MakeColPage(tmp.GetRowBatch(0), btop, enabled, page.get());
        col_iter_.cpages_.push_back(std::move(page));
        btop = buffered_rowset_.size();
        tmp.Clear();
      }
    }
  }
    
        void setFlex(double flex);
    void setFlexBasis(double flexBasis);
    void setFlexBasisPercent(double flexBasis);
    void setFlexBasisAuto();
    void setFlexGrow(double flexGrow);
    void setFlexShrink(double flexShrink);
    
        double top;
    double bottom;
    
    TEST(YogaTest, computed_layout_padding) {
  const YGNodeRef root = YGNodeNew();
  YGNodeStyleSetWidth(root, 100);
  YGNodeStyleSetHeight(root, 100);
  YGNodeStyleSetPaddingPercent(root, YGEdgeStart, 10);
    }
    
      ASSERT_FLOAT_EQ(40, YGNodeLayoutGetLeft(root_child3));
  ASSERT_FLOAT_EQ(55, YGNodeLayoutGetTop(root_child3));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetWidth(root_child3));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetHeight(root_child3));
    
      const YGNodeRef root_child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(root_child0, 10);
  YGNodeStyleSetHeight(root_child0, 10);
  YGNodeInsertChild(root, root_child0, 0);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    namespace facebook {
namespace alog {
    }
    }
    
      template <typename U> friend class RefPtr;
    
    struct ScopedDoingMyOwnMemmem {
  ScopedDoingMyOwnMemmem();
  ~ScopedDoingMyOwnMemmem();
};
    
    #include 'FuzzerExtFunctions.def'
    
    extern 'C' {
// Declare these symbols as weak to allow them to be optionally defined.
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  __attribute__((weak)) RETURN_TYPE NAME FUNC_SIG
    }
    
    extern TracePC TPC;
    
    std::string DescribePC(const char *SymbolizedFMT, uintptr_t PC) {
  if (!EF->__sanitizer_symbolize_pc) return '<can not symbolize>';
  char PcDescr[1024];
  EF->__sanitizer_symbolize_pc(reinterpret_cast<void*>(PC),
                               SymbolizedFMT, PcDescr, sizeof(PcDescr));
  PcDescr[sizeof(PcDescr) - 1] = 0;  // Just in case.
  return PcDescr;
}
    
    protected:
  virtual bool prepareForRetry(time_t wait);
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    bool AbstractOptionHandler::getChangeGlobalOption() const
{
  return flags_ & FLAG_CHANGE_GLOBAL_OPTION;
}
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    protected:
  virtual bool executeInternal() CXX11_OVERRIDE;
    
    class RequestGroup;
class DownloadEngine;
class Peer;
class BtRuntime;
class PieceStorage;
class PeerStorage;
class BtAnnounce;
    
      void setEvent(AnnounceTier::AnnounceEvent event);
    
    AuthConfig::~AuthConfig() = default;