
        
        
    {  if (argc != 4) {
    gflags::ShowUsageWithFlagsRestrict(argv[0],
        'examples/mnist/convert_mnist_data');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3], db_backend);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB and LMDB; ' <<
  'compile with USE_LEVELDB and USE_LMDB.';
}
#endif  // USE_LEVELDB and USE_LMDB

    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {}  // namespace caffe
    
    /**
 * @brief During training only, sets a random portion of @f$x@f$ to 0, adjusting
 *        the rest of the vector magnitude accordingly.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class DropoutLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides DropoutParameter dropout_param,
   *     with DropoutLayer options:
   *   - dropout_ratio (\b optional, default 0.5).
   *     Sets the probability @f$ p @f$ that any given unit is dropped.
   */
  explicit DropoutLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifdef __UNIX__
#include          <assert.h>
#endif
#include          <ctype.h>
#include          <string.h>
#include          'tessbox.h'
#include          'tessvars.h'
#include          'memry.h'
#include          'reject.h'
#include          'control.h'
#include          'stopper.h'
#include          'tesseractclass.h'
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return NULL;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : NULL;
      inT64 new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != NULL && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
      // Returns the bounding box including the desired combination of upper and
  // lower noise/diacritic elements.
  TBOX restricted_bounding_box(bool upper_dots, bool lower_dots) const;
    
    #include 'quspline.h'
#include 'werd.h'
    
    public:
  explicit Timer(Type type, const char *name = nullptr, ReportType r = Log);
  ~Timer();
    
    namespace HPHP { namespace jit {
///////////////////////////////////////////////////////////////////////////////
    }
    }
    
      void delist() {
    auto n = m_next, p = m_prev;
    n->m_prev = p;
    p->m_next = n;
  }
    
    using RequestHandlerFactory = std::function<std::unique_ptr<RequestHandler>()>;
using URLChecker = std::function<bool(const std::string&)>;
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    class ConsoleLogger : public BaseLogger {
 public:
  ~ConsoleLogger();
};
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1)  num_threads(nthread_write_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Compress(i, use_lz4_hc_);
      } else {
        value_.Compress(i - nindex, use_lz4_hc_);
      }
    }
    index_.Write(fo);
    value_.Write(fo);
    // statistics
    raw_bytes_index_ += index_.RawBytes() * sizeof(bst_uint) / sizeof(StorageIndex);
    raw_bytes_value_ += value_.RawBytes();
    encoded_bytes_index_ += index_.EncodedBytes();
    encoded_bytes_value_ += value_.EncodedBytes();
    raw_bytes_ += page.offset.size() * sizeof(size_t);
  }
    
        c.type = type_[fid];
    const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
    const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
    c.index = reinterpret_cast<const T*>(&index_[block_offset]) + elem_offset;
    c.index_base = index_base_[fid];
    c.row_ind = &row_ind_[boundary_[fid].row_ind_begin];
    c.len = boundary_[fid].index_end - boundary_[fid].index_begin;
    
    TEST(MetaInfo, GetSet) {
  xgboost::MetaInfo info;
    }
    
      xgboost::tree::SplitEntry se2;
  EXPECT_FALSE(se1.Update(se2));
  EXPECT_FALSE(se2.Update(-1, 100, 0, true));
  ASSERT_TRUE(se2.Update(1, 100, 0, true));
  ASSERT_TRUE(se1.Update(se2));
    
    /*! \brief namespace of xgboost*/
namespace xgboost {
/*!
 * \brief unsigned integer type used in boost,
 *  used for feature index and row index.
 */
typedef uint32_t bst_uint;
typedef int32_t bst_int;
/*! \brief long integers */
typedef uint64_t bst_ulong;  // NOLINT(*)
/*! \brief float type, used for storing statistics */
typedef float bst_float;
    }
    
    /*!
 * \brief base class of element-wise evaluation
 * \tparam Derived the name of subclass
 */
template<typename Derived>
struct EvalEWiseBase : public Metric {
  bst_float Eval(const std::vector<bst_float>& preds,
                 const MetaInfo& info,
                 bool distributed) const override {
    CHECK_NE(info.labels.size(), 0U) << 'label set cannot be empty';
    CHECK_EQ(preds.size(), info.labels.size())
        << 'label and prediction size not match, '
        << 'hint: use merror or mlogloss for multi-class classification';
    const omp_ulong ndata = static_cast<omp_ulong>(info.labels.size());
    double sum = 0.0, wsum = 0.0;
    #pragma omp parallel for reduction(+: sum, wsum) schedule(static)
    for (omp_ulong i = 0; i < ndata; ++i) {
      const bst_float wt = info.GetWeight(i);
      sum += static_cast<const Derived*>(this)->EvalRow(info.labels[i], preds[i]) * wt;
      wsum += wt;
    }
    double dat[2]; dat[0] = sum, dat[1] = wsum;
    if (distributed) {
      rabit::Allreduce<rabit::op::Sum>(dat, 2);
    }
    return Derived::GetFinal(dat[0], dat[1]);
  }
  /*!
   * \brief to be implemented by subclass,
   *   get evaluation result from one row
   * \param label label of current instance
   * \param pred prediction value of current instance
   */
  inline bst_float EvalRow(bst_float label, bst_float pred) const;
  /*!
   * \brief to be overridden by subclass, final transformation
   * \param esum the sum statistics returned by EvalRow
   * \param wsum sum of weight
   */
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return esum / wsum;
  }
};
    
    
    {
    {XGBOOST_REGISTER_METRIC(MultiLogLoss, 'mlogloss')
.describe('Multiclass negative loglikelihood.')
.set_body([](const char* param) { return new EvalMultiLogLoss(); });
}  // namespace metric
}  // namespace xgboost

    
    
    {
    {        // Start the ASIO io_service run loop
        echo_server.run();
    } catch (websocketpp::exception const & e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << 'other exception' << std::endl;
    }
}

    
    int byteSize, framesPerSend;
unsigned char *framePackBuffer;
int framePackBufferLength = 0;
const char upgradeHeaderBuffer[] = 'GET / HTTP/1.1\r\n'
                                   'Upgrade: websocket\r\n'
                                   'Connection: Upgrade\r\n'
                                   'Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==\r\n'
                                   'Host: server.example.com\r\n'
                                   'Sec-WebSocket-Version: 13\r\n\r\n';
    
        // This is the 20 byte message (JSON) according to Socket.IO
    unsigned char socketio[] = 'xxxx42[\'message\',\'yolo\']';
    for (int i = 4; i < 24; i++) {
        socketio[i] ^= 'x';
	cout << (int) socketio[i] << endl;
    }
    
    
    {}

    
            // slow GET should get disconnected
        nc = popen('nc localhost 3000 > /dev/null 2>&1', 'w');
        sleep(3);
        fputs('GET /slowRequest HTTP/1.1\r\n\r\n', nc);
        pclose(nc);
    
                                webSocket->cork(true);
                            Group<isServer>::from(webSocket)->connectionHandler(webSocket, req);
                            // todo: should not uncork if closed!
                            webSocket->cork(false);
                            delete httpSocket;
    
    
    {    Timer *timer = nullptr;
    uS::TLS::Context sslContext;
};
    
    
    {    bool wouldBlock() {
#ifdef _WIN32
        return WSAGetLastError() == WSAEWOULDBLOCK;
#else
        return errno == EWOULDBLOCK;// || errno == EAGAIN;
#endif
    }
};
    
        static inline size_t formatMessage(char *dst, const char *src, size_t length, OpCode opCode, size_t reportedLength, bool compressed) {
        size_t messageLength;
        size_t headerLength;
        if (reportedLength < 126) {
            headerLength = 2;
            dst[1] = reportedLength;
        } else if (reportedLength <= UINT16_MAX) {
            headerLength = 4;
            dst[1] = 126;
            *((uint16_t *) &dst[2]) = htons(reportedLength);
        } else {
            headerLength = 10;
            dst[1] = 127;
            *((uint64_t *) &dst[2]) = htobe64(reportedLength);
        }
    }