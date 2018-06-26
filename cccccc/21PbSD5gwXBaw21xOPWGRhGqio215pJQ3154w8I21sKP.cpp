
        
        void PartialRunMgr::ExecutorDone(int step_id, const Status& executor_status) {
  StatusCallback done;
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    // If we found the partial_run, we call the final callback, if it
    // exists.
    // It is guaranteed that run_it->second->final_callback is left empty
    // after the std::move call.
    done = std::move(run_it->second->final_callback);
    if (!executor_status.ok()) {
      run_it->second->final_status = executor_status;
    }
    callback_status = run_it->second->final_status;
    run_it->second->executor_done = true;
  }
  if (done != nullptr) {
    done(callback_status);
    mutex_lock l(mu_);
    step_id_to_partial_run_.erase(step_id);
  }
}
    
    #endif
// TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_

    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
      static RecordWriterOptions CreateRecordWriterOptions(
      const string& compression_type);
    
    namespace tensorflow {
namespace port {
    }
    }
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    
    {}  // namespace tensorflow

    
      CHECK(worker_name.size() < max_worker_name_length)
      << 'Specified worker name is too long.';
  snprintf(my_name, max_worker_name_length, worker_name.c_str());
  std::vector<char> worker_names(number_of_procs * max_worker_name_length);
  MPI_CHECK(MPI_Allgather(my_name, max_worker_name_length, MPI_CHAR,
                          &worker_names[0], max_worker_name_length, MPI_CHAR,
                          MPI_COMM_WORLD));
    
    namespace tensorflow {
#define REGISTER_COMPLEX(D, R, C)                         \
  REGISTER_KERNEL_BUILDER(Name('Angle')                   \
                              .Device(DEVICE_##D)         \
                              .TypeConstraint<C>('T')     \
                              .TypeConstraint<R>('Tout'), \
                          UnaryOp<D##Device, functor::get_angle<C>>);
    }
    
    #include 'tensorflow/core/kernels/cwise_ops_gpu_common.cu.h'
    
    Status ReadGroundTruthFile(const string& file_name,
                           std::vector<std::pair<string, int64>>* result) {
  std::ifstream file(file_name);
  if (!file) {
    return tensorflow::errors::NotFound('Ground truth file '', file_name,
                                        '' not found.');
  }
  result->clear();
  string line;
  while (std::getline(file, line)) {
    std::vector<string> pieces = tensorflow::str_util::Split(line, ',');
    if (pieces.size() != 2) {
      continue;
    }
    float timestamp;
    if (!tensorflow::strings::safe_strtof(pieces[1].c_str(), &timestamp)) {
      return tensorflow::errors::InvalidArgument(
          'Wrong number format at line: ', line);
    }
    string label = pieces[0];
    auto timestamp_int64 = static_cast<int64>(timestamp);
    result->push_back({label, timestamp_int64});
  }
  std::sort(result->begin(), result->end(),
            [](const std::pair<string, int64>& left,
               const std::pair<string, int64>& right) {
              return left.second < right.second;
            });
  return Status::OK();
}
    
      /// Perform a blocking wait on the timer.
  /**
   * This function is used to wait for the timer to expire. This function
   * blocks and does not return until the timer has expired.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  void wait()
  {
    boost::system::error_code ec;
    this->service.wait(this->implementation, ec);
    boost::asio::detail::throw_error(ec, 'wait');
  }
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
      // Resize the buffer to the specified length.
  void resize(size_type length)
  {
    BOOST_ASIO_ASSERT(length <= capacity());
    if (begin_offset_ + length <= capacity())
    {
      end_offset_ = begin_offset_ + length;
    }
    else
    {
      using namespace std; // For memmove.
      memmove(&buffer_[0], &buffer_[0] + begin_offset_, size());
      end_offset_ = length;
      begin_offset_ = 0;
    }
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename T, template <typename> class Atom = std::atomic>
class HazptrLockFreeLIFO {
  struct Node;
    }
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
      BlockingQueueAddResult addWithPriority(T item, int8_t priority) override {
    int mid = getNumPriorities() / 2;
    size_t queue = priority < 0
        ? std::max(0, mid + priority)
        : std::min(getNumPriorities() - 1, mid + priority);
    CHECK_LT(queue, queues_.size());
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queues_[queue].write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queues_[queue].blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    Executor::KeepAlive<SerialExecutor> SerialExecutor::create(
    KeepAlive<Executor> parent) {
  return makeKeepAlive<SerialExecutor>(new SerialExecutor(std::move(parent)));
}
    
    off_t lseek(int fh, off_t off, int orig) {
  return _lseek(fh, off, orig);
}
    
    
    {  // vector of {quantile, value}
  std::vector<std::pair<double, double>> quantiles;
};
    
      ParsedInternalKey()
      : sequence(kMaxSequenceNumber)  // Make code analyzer happy
        {} // Intentionally left uninitialized (for speed)
  ParsedInternalKey(const Slice& u, const SequenceNumber& seq, ValueType t)
      : user_key(u), sequence(seq), type(t) { }
  std::string DebugString(bool hex = false) const;
    
    SyncPoint:: ~SyncPoint() {
  delete impl_;
}
    
    namespace rocksdb {
    }
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
    void ColorPrintf(std::ostream& out, LogColor color, const char* fmt,
                 va_list args) {
#ifdef BENCHMARK_OS_WINDOWS
  ((void)out);  // suppress unused warning
    }
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';
    
      if (info.scaling_enabled) {
    Out << '***WARNING*** CPU scaling is enabled, the benchmark '
           'real time measurements may be noisy and will incur extra '
           'overhead.\n';
  }