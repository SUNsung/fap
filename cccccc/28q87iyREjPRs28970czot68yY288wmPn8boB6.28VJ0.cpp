
        
        
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
    class Cluster;
struct GrapplerItem;
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    
    {
    {}  // namespace port
}  // namespace tensorflow
    
    REGISTER_KERNEL_BUILDER(Name('TextLineReader').Device(DEVICE_CPU),
                        TextLineReaderOp);
REGISTER_KERNEL_BUILDER(Name('TextLineReaderV2').Device(DEVICE_CPU),
                        TextLineReaderOp);
    
    
    {
    {
    {
    {        if (DataTypeCanUseMemcpy(DataTypeToEnum<T>::v())) {
          T* merged_base = &merged_flat(0, 0);
          const T* data_base = &data_flat(0, 0);
          for (int i = 0; i < indices_vec.size(); i++) {
            int32 index = internal::SubtleMustCopy(indices_vec(i));
            OP_REQUIRES(
                c, FastBoundsCheck(index, first_dim_size),
                errors::InvalidArgument('indices[', i, '] is out of range'));
            memcpy(merged_base + index * slice_size, data_base + i * slice_size,
                   slice_bytes);
          }
        } else {
          Eigen::DSizes<Eigen::DenseIndex, 2> sizes(1, slice_size);
          for (int i = 0; i < indices_vec.size(); i++) {
            // Copy slice data[i] to merged[indices[i]]
            Eigen::DSizes<Eigen::DenseIndex, 2> data_indices(i, 0);
            int32 index = internal::SubtleMustCopy(indices_vec(i));
            OP_REQUIRES(
                c, FastBoundsCheck(index, first_dim_size),
                errors::InvalidArgument('indices[', i, '] is out of range'));
            Eigen::DSizes<Eigen::DenseIndex, 2> merged_indices(index, 0);
            merged_flat.slice(merged_indices, sizes) =
                data_flat.slice(data_indices, sizes);
          }
        }
      };
      if (Parallel) {
        auto thread_pool =
            c->device()->tensorflow_cpu_worker_threads()->workers;
        size_t total_indices_size = 0;
        for (int input_num = 0; input_num < indices_inputs.size();
             ++input_num) {
          total_indices_size += indices_inputs[input_num].NumElements();
        }
        const double avg_indices_size =
            static_cast<double>(total_indices_size) / indices_inputs.size();
        auto bytes_processed = slice_bytes * avg_indices_size;
        auto LoopBody = [&](int first, int last) {
          for (int input_num = first; input_num < last; ++input_num) {
            OnInputNumber(input_num);
          }
        };
        thread_pool->ParallelFor(indices_inputs.size(), bytes_processed,
                                 LoopBody);
      } else {
        for (int input_num = 0; input_num < indices_inputs.size();
             input_num++) {
          OnInputNumber(input_num);
        }
      }
    }
  }
};
    
    
    {  return false;
}
    
    #include 'tensorflow/cc/ops/const_op.h'
#include 'tensorflow/cc/ops/image_ops.h'
#include 'tensorflow/cc/ops/nn_ops.h'
#include 'tensorflow/cc/ops/sendrecv_ops.h'
#include 'tensorflow/cc/ops/standard_ops.h'
#include 'tensorflow/core/framework/tensor_testutil.h'
#include 'tensorflow/core/lib/core/status_test_util.h'
#include 'tensorflow/core/platform/test.h'
#include 'tensorflow/core/platform/test_benchmark.h'
#include 'tensorflow/core/public/session.h'
#include 'tensorflow/tools/graph_transforms/transform_utils.h'
    
      // content::DevToolsAgentHostClient:
  void AgentHostClosed(content::DevToolsAgentHost* agent_host,
                       bool replaced_with_another_client) override;
  void DispatchProtocolMessage(content::DevToolsAgentHost* agent_host,
                               const std::string& message) override;
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/net/atom_network_delegate.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
     private:
  // Must be called on IO thread.
  void DoCancelAuth();
  void DoLogin(const base::string16& username, const base::string16& password);
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(URLRequestAsyncAsarJob);
};
    
    #include <string>
    
     private:
  // Creates a DbusmenuServer.
  void InitServer(gfx::AcceleratedWidget xid);
    
    void CV_ModelEstimator2_Test::get_test_array_types_and_sizes( int /*test_case_idx*/,
                                                              vector<vector<Size> > &sizes, vector<vector<int> > &types )
{
    RNG &rng = ts->get_rng();
    checkPartialSubsets = (cvtest::randInt(rng) % 2 == 0);
    }
    
            template<int CTA_SIZE>
        static __forceinline__ __device__ int Ballot(int predicate)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ >= 200)
            return __ballot(predicate);
#else
            __shared__ volatile int cta_buffer[CTA_SIZE];
    }
    
        static void CODEGEN_FUNCPTR Switch_GetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid* *pointer)
    {
        GetVertexAttribPointerv = (PFNGETVERTEXATTRIBPOINTERVPROC)IntGetProcAddress('glGetVertexAttribPointerv');
        GetVertexAttribPointerv(index, pname, pointer);
    }
    
    static void* openclamdblas_check_fn(int ID);
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    #include <signal.h>
    
    int protoc_main(int argc, char* argv[]) {
  google::protobuf::compiler::CommandLineInterface cli;
  cli.AllowPlugins('protoc-');
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      static void init_native_buffer(WSABUF& buf,
      const boost::asio::const_buffer& buffer)
  {
    buf.buf = const_cast<char*>(boost::asio::buffer_cast<const char*>(buffer));
    buf.len = static_cast<ULONG>(boost::asio::buffer_size(buffer));
  }
#else // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
  // The maximum number of buffers to support in a single operation.
  enum { max_buffers = 64 < max_iov_len ? 64 : max_iov_len };
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    #include <boost/asio/detail/config.hpp>
    
    #if defined(BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS)
# include <boost/asio/handler_type.hpp>
#endif // defined(BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS)
    
    
    {
    {    // Wait for descriptor to become ready.
    if (descriptor_ops::poll_write(d, 0, ec) < 0)
      return 0;
  }
}
    
    template <typename Time_Traits>
void epoll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  mutex::scoped_lock lock(mutex_);
    }
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi) {
    fi.open(fname);
    if (fi.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator(void) {
    fi.close();
  }
    }
    
    #if XGBOOST_CUSTOMIZE_GLOBAL_PRNG
/*!
 * \brief An customized random engine, used to be plugged in PRNG from other systems.
 *  The implementation of this library is not provided by xgboost core library.
 *  Instead the other library can implement this class, which will be used as GlobalRandomEngine
 *  If XGBOOST_RANDOM_CUSTOMIZE = 1, by default this is switched off.
 */
class CustomGlobalRandomEngine {
 public:
  /*! \brief The result type */
  typedef size_t result_type;
  /*! \brief The minimum of random numbers generated */
  inline static constexpr result_type min() {
    return 0;
  }
  /*! \brief The maximum random numbers generated */
  inline static constexpr result_type max() {
    return std::numeric_limits<size_t>::max();
  }
  /*!
   * \brief seed function, to be implemented
   * \param val The value of the seed.
   */
  void seed(result_type val);
  /*!
   * \return next random number.
   */
  result_type operator()();
};
    
        // want to compute storage boundary for each feature
    // using variants of prefix sum scan
    boundary_.resize(nfeature);
    size_t accum_index_ = 0;
    size_t accum_row_ind_ = 0;
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      boundary_[fid].index_begin = accum_index_;
      boundary_[fid].row_ind_begin = accum_row_ind_;
      if (type_[fid] == kDenseColumn) {
        accum_index_ += static_cast<size_t>(nrow);
      } else {
        accum_index_ += feature_counts_[fid];
        accum_row_ind_ += feature_counts_[fid];
      }
      boundary_[fid].index_end = accum_index_;
      boundary_[fid].row_ind_end = accum_row_ind_;
    }
    
      float float2[2] = {1.0f, 2.0f};
  EXPECT_EQ(info.GetWeight(1), 1.0f)
    << 'When no weights are given, was expecting default value 1';
  info.SetInfo('weight', float2, xgboost::kFloat32, 2);
  EXPECT_EQ(info.GetWeight(1), 2.0f);
    
      XGBOOST_DEVICE bst_gpair_internal<T> operator+(
      const bst_gpair_internal<T> &rhs) const {
    bst_gpair_internal<T> g;
    g.grad_ = grad_ + rhs.grad_;
    g.hess_ = hess_ + rhs.hess_;
    return g;
  }
    
    
    {
    {      if (size_to_read != 0) {
        CHECK_EQ(fi->Read(dmlc::BeginPtr(page->data) + page->offset[i],
                          size_to_read * sizeof(SparseBatch::Entry)),
                 size_to_read * sizeof(SparseBatch::Entry))
            << 'Invalid SparsePage file';
        curr_offset += size_to_read;
      }
      i = j;
    }
    // seek to end of record
    if (curr_offset != disk_offset_.back()) {
      fi->Seek(begin + disk_offset_.back() * sizeof(SparseBatch::Entry));
    }
    return true;
  }
    
    void AbstractBtMessage::setBtMessageDispatcher(BtMessageDispatcher* dispatcher)
{
  dispatcher_ = dispatcher;
}
    
      void checkSocketRecvBuffer();
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    
    {  void setBtAnnounce(const std::shared_ptr<BtAnnounce>& btAnnounce);
};
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
      virtual void setVerifyPeer(bool verify) CXX11_OVERRIDE
  {
    verifyPeer_ = verify;
  }
    
    AuthConfig::~AuthConfig() = default;