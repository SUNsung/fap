
        
        namespace caffe2 {
namespace {
    }
    }
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    // Creates a new client context that is by default a new root context.
// If the current context is the default context then the newly created
// span automatically becomes a root span. This should only be called with a
// blank CensusContext as it overwrites it.
void GenerateClientContext(absl::string_view method, CensusContext* ctxt,
                           CensusContext* parent_ctx);
    
    void InitProtoReflectionServerBuilderPlugin() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  ::grpc::ServerBuilder::InternalAddPluginFactory(&CreateProtoReflection);
}
    
    DynamicThreadPool::DynamicThreadPool(int reserve_threads)
    : shutdown_(false),
      reserve_threads_(reserve_threads),
      nthreads_(0),
      threads_waiting_(0) {
  for (int i = 0; i < reserve_threads_; i++) {
    std::lock_guard<std::mutex> lock(mu_);
    nthreads_++;
    new DynamicThread(this);
  }
}
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
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
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
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
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    SEXP XGBoosterModelToRaw_R(SEXP handle) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const char *raw;
  CHECK_CALL(XGBoosterGetModelRaw(R_ExternalPtrAddr(handle), &olen, &raw));
  ret = PROTECT(allocVector(RAWSXP, olen));
  if (olen != 0) {
    memcpy(RAW(ret), raw, olen);
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*! \brief try to do efficient pruning */
template<typename DType, typename RType>
struct WXQSummary : public WQSummary<DType, RType> {
  // redefine entry type
  using Entry = typename WQSummary<DType, RType>::Entry;
  // constructor
  WXQSummary(Entry *data, size_t size)
      : WQSummary<DType, RType>(data, size) {}
  // check if the block is large chunk
  inline static bool CheckLarge(const Entry &e, RType chunk) {
    return  e.RMinNext() > e.RMaxPrev() + chunk;
  }
  // set prune
  inline void SetPrune(const WQSummary<DType, RType> &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    RType begin = src.data[0].rmax;
    // n is number of points exclude the min/max points
    size_t n = maxsize - 2, nbig = 0;
    // these is the range of data exclude the min/max point
    RType range = src.data[src.size - 1].rmin - begin;
    // prune off zero weights
    if (range == 0.0f || maxsize <= 2) {
      // special case, contain only two effective data pts
      this->data[0] = src.data[0];
      this->data[1] = src.data[src.size - 1];
      this->size = 2;
      return;
    } else {
      range = std::max(range, static_cast<RType>(1e-3f));
    }
    // Get a big enough chunk size, bigger than range / n
    // (multiply by 2 is a safe factor)
    const RType chunk = 2 * range / n;
    // minimized range
    RType mrange = 0;
    {
      // first scan, grab all the big chunk
      // moving block index, exclude the two ends.
      size_t bid = 0;
      for (size_t i = 1; i < src.size - 1; ++i) {
        // detect big chunk data point in the middle
        // always save these data points.
        if (CheckLarge(src.data[i], chunk)) {
          if (bid != i - 1) {
            // accumulate the range of the rest points
            mrange += src.data[i].RMaxPrev() - src.data[bid].RMinNext();
          }
          bid = i; ++nbig;
        }
      }
      if (bid != src.size - 2) {
        mrange += src.data[src.size-1].RMaxPrev() - src.data[bid].RMinNext();
      }
    }
    // assert: there cannot be more than n big data points
    if (nbig >= n) {
      // see what was the case
      LOG(INFO) << ' check quantile stats, nbig=' << nbig << ', n=' << n;
      LOG(INFO) << ' srcsize=' << src.size << ', maxsize=' << maxsize
                << ', range=' << range << ', chunk=' << chunk;
      src.Print();
      CHECK(nbig < n) << 'quantile: too many large chunk';
    }
    this->data[0] = src.data[0];
    this->size = 1;
    // The counter on the rest of points, to be selected equally from small chunks.
    n = n - nbig;
    // find the rest of point
    size_t bid = 0, k = 1, lastidx = 0;
    for (size_t end = 1; end < src.size; ++end) {
      if (end == src.size - 1 || CheckLarge(src.data[end], chunk)) {
        if (bid != end - 1) {
          size_t i = bid;
          RType maxdx2 = src.data[end].RMaxPrev() * 2;
          for (; k < n; ++k) {
            RType dx2 =  2 * ((k * mrange) / n + begin);
            if (dx2 >= maxdx2) break;
            while (i < end &&
                   dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
            if (i == end) break;
            if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
              if (i != lastidx) {
                this->data[this->size++] = src.data[i]; lastidx = i;
              }
            } else {
              if (i + 1 != lastidx) {
                this->data[this->size++] = src.data[i + 1]; lastidx = i + 1;
              }
            }
          }
        }
        if (lastidx != end) {
          this->data[this->size++] = src.data[end];
          lastidx = end;
        }
        bid = end;
        // shift base by the gap
        begin += src.data[bid].RMinNext() - src.data[bid].RMaxPrev();
      }
    }
  }
};
/*!
 * \brief traditional GK summary
 */
template<typename DType, typename RType>
struct GKSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief the value of data */
    DType value;
    // constructor
    Entry() = default;
    // constructor
    Entry(RType rmin, RType rmax, DType value)
        : rmin(rmin), rmax(rmax), value(value) {}
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // the input queue
    std::vector<DType> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      queue[qtail++] = x;
    }
    inline void MakeSummary(GKSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = qtail;
      for (size_t i = 0; i < qtail; ++i) {
        out->data[i] = Entry(i + 1, i + 1, queue[i]);
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  GKSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*! \brief the maximum error of the summary */
  inline RType MaxError() const {
    RType res = 0;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].rmax - data[i-1].rmin, res);
    }
    return res;
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const GKSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void CheckValid(RType eps) const {
    // assume always valid
  }
  /*! \brief used for debug purpose, print the summary */
  inline void Print() const {
    for (size_t i = 0; i < size; ++i) {
      LOG(CONSOLE) << 'x=' << data[i].value << '\t'
                   << '[' << data[i].rmin << ',' << data[i].rmax << ']';
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
  inline void SetPrune(const GKSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType max_rank = src.MaxRank();
    this->size = maxsize;
    data[0] = src.data[0];
    size_t n = maxsize - 1;
    RType top = 1;
    for (size_t i = 1; i < n; ++i) {
      RType k = (i * max_rank) / n;
      while (k > src.data[top + 1].rmax) ++top;
      // assert src.data[top].rmin <= k
      // because k > src.data[top].rmax >= src.data[top].rmin
      if ((k - src.data[top].rmin) < (src.data[top+1].rmax - k)) {
        data[i] = src.data[top];
      } else {
        data[i] = src.data[top + 1];
      }
    }
    data[n] = src.data[src.size - 1];
  }
  inline void SetCombine(const GKSummary &sa,
                         const GKSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0) << 'invalid input for merge';
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    this->size = sa.size + sb.size;
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      if (a->value < b->value) {
        *dst = Entry(bprev_rmin + a->rmin,
                     a->rmax + b->rmax - 1, a->value);
        aprev_rmin = a->rmin;
        ++dst; ++a;
      } else {
        *dst = Entry(aprev_rmin + b->rmin,
                     b->rmax + a->rmax - 1, b->value);
        bprev_rmin = b->rmin;
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType bprev_rmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(bprev_rmin + a->rmin, bprev_rmax + a->rmax, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType aprev_rmax = (a_end - 1)->rmax;
      do {
        *dst = Entry(aprev_rmin + b->rmin, aprev_rmax + b->rmax, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    CHECK(dst == data + size) << 'bug in combine';
  }
};
    
    /*! \brief interface of objective function */
class ObjFunction {
 public:
  /*! \brief virtual destructor */
  virtual ~ObjFunction() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Configure the objective with the specified parameters.
   * \param args arguments to the objective function.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief Get gradient over each of predictions, given existing information.
   * \param preds prediction of current round
   * \param info information about labels, weights, groups in rank
   * \param iteration current iteration number.
   * \param out_gpair output of get gradient, saves gradient and second order gradient in
   */
  virtual void GetGradient(const HostDeviceVector<bst_float>& preds,
                           const MetaInfo& info,
                           int iteration,
                           HostDeviceVector<GradientPair>* out_gpair) = 0;
    }
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    auto& offset_vec = page->offset.HostVector();
    if (!fi->Read(&offset_vec)) return false;
    auto& data_vec = page->data.HostVector();
    CHECK_NE(page->offset.Size(), 0U) << 'Invalid SparsePage file';
    data_vec.resize(offset_vec.back());
    if (page->data.Size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(data_vec),
                        (page->data).Size() * sizeof(Entry)),
               (page->data).Size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
    
    // beta version: NDCG lambda rank
class LambdaRankObjNDCG : public LambdaRankObj {
 protected:
  void GetLambdaWeight(const std::vector<ListEntry> &sorted_list,
                       std::vector<LambdaPair> *io_pairs) override {
    std::vector<LambdaPair> &pairs = *io_pairs;
    float IDCG;  // NOLINT
    {
      std::vector<bst_float> labels(sorted_list.size());
      for (size_t i = 0; i < sorted_list.size(); ++i) {
        labels[i] = sorted_list[i].label;
      }
      std::sort(labels.begin(), labels.end(), std::greater<bst_float>());
      IDCG = CalcDCG(labels);
    }
    if (IDCG == 0.0) {
      for (auto & pair : pairs) {
        pair.weight = 0.0f;
      }
    } else {
      IDCG = 1.0f / IDCG;
      for (auto & pair : pairs) {
        unsigned pos_idx = pair.pos_index;
        unsigned neg_idx = pair.neg_index;
        float pos_loginv = 1.0f / std::log2(pos_idx + 2.0f);
        float neg_loginv = 1.0f / std::log2(neg_idx + 2.0f);
        auto pos_label = static_cast<int>(sorted_list[pos_idx].label);
        auto neg_label = static_cast<int>(sorted_list[neg_idx].label);
        bst_float original =
            ((1 << pos_label) - 1) * pos_loginv + ((1 << neg_label) - 1) * neg_loginv;
        float changed  =
            ((1 << neg_label) - 1) * pos_loginv + ((1 << pos_label) - 1) * neg_loginv;
        bst_float delta = (original - changed) * IDCG;
        if (delta < 0.0f) delta = - delta;
        pair.weight *= delta;
      }
    }
  }
  inline static bst_float CalcDCG(const std::vector<bst_float> &labels) {
    double sumdcg = 0.0;
    for (size_t i = 0; i < labels.size(); ++i) {
      const auto rel = static_cast<unsigned>(labels[i]);
      if (rel != 0) {
        sumdcg += ((1 << rel) - 1) / std::log2(static_cast<bst_float>(i + 2));
      }
    }
    return static_cast<bst_float>(sumdcg);
  }
};
    
    class SimpleBatchIteratorImpl : public BatchIteratorImpl {
 public:
  explicit SimpleBatchIteratorImpl(SparsePage* page) : page_(page) {}
  const SparsePage& operator*() const override {
    CHECK(page_ != nullptr);
    return *page_;
  }
  void operator++() override { page_ = nullptr; }
  bool AtEnd() const override { return page_ == nullptr; }
  SimpleBatchIteratorImpl* Clone() override {
    return new SimpleBatchIteratorImpl(*this);
  }
    }
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    namespace aria2 {
    }
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    using apollo::common::ErrorCode;
    
    
    {  SocketCanClientRaw socket_can_client;
  EXPECT_TRUE(socket_can_client.Init(param));
  EXPECT_EQ(socket_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(socket_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(socket_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(socket_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  socket_can_client.Stop();
}
    
    #include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    // data file
DEFINE_string(sensor_conf_file, '', 'Sensor conf file');
    
    
    {  double ret = x * OBJECT_AREL_RES + OBJECT_AREL_LAT_MIN;
  return ret;
}
    
    #include 'modules/drivers/radar/conti_radar/protocol/object_quality_info_60c.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    
    {  int ret = x;
  return ret;
}
    
      MatrixXd offset_golden(10, 1);
  offset_golden << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
  EXPECT_EQ(offset, offset_golden);
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
      Byte t3(bytes + 7);
  t = t3.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    
    {            break;
        }
    
        struct HISTORYITEM
    {
        HISTORYITEMVECTOR historyItemVector;
    };
    
        bool TryToggleBit(CalcEngine::Rational& rat, DWORD wbitno);
    void CheckAndAddLastBinOpToHistory(bool addToHistory = true);
    int IdcSetAngleTypeDecMode(int idc);
    
        DUPRAT(neg_pt_eight_five,pt_eight_five);
    neg_pt_eight_five->pp->sign *= -1;
    if ( rat_gt( *px, pt_eight_five, precision) || rat_lt( *px, neg_pt_eight_five, precision) )
        {
        PRAT ptmp = nullptr;
        DUPRAT(ptmp,(*px)); 
        mulrat(&ptmp, *px, precision);
        addrat(&ptmp, rat_one, precision);
        rootrat(&ptmp, rat_two, radix, precision);
        addrat(px, ptmp, precision);
        lograt(px, precision);
        destroyrat(ptmp);
        }
    else
        {
        CREATETAYLOR();
        xx->pp->sign *= -1;
    }
    
    
void _tanrat( PRAT *px, uint32_t radix, int32_t precision)