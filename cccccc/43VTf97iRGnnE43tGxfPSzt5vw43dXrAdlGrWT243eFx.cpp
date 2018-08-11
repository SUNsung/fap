
        
        /* Return the indices of the top N values of vector v. */
static std::vector<int> Argmax(const std::vector<float>& v, int N) {
  std::vector<std::pair<float, int> > pairs;
  for (size_t i = 0; i < v.size(); ++i)
    pairs.push_back(std::make_pair(v[i], i));
  std::partial_sort(pairs.begin(), pairs.begin() + N, pairs.end(), PairCompare);
    }
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
     private:
  // wrap im2col/col2im so we don't have to remember the (long) argument lists
  inline void conv_im2col_cpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_cpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_cpu(data, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), col_buff);
    }
  }
  inline void conv_col2im_cpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_cpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_cpu(col_buff, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), data);
    }
  }
#ifndef CPU_ONLY
  inline void conv_im2col_gpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_gpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_gpu(data, num_spatial_axes_, num_kernels_im2col_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(),
          stride_.gpu_data(), dilation_.gpu_data(), col_buff);
    }
  }
  inline void conv_col2im_gpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_gpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_gpu(col_buff, num_spatial_axes_, num_kernels_col2im_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(), stride_.gpu_data(),
          dilation_.gpu_data(), data);
    }
  }
#endif
    
    
    {  int count_;
  int num_concats_;
  int concat_input_size_;
  int concat_axis_;
};
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of ConvolutionLayer.
 *        Fallback to ConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates convolution through forward kernels for filtering and bias
 * plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
 *
 * The CUDNN engine does not have memory overhead for matrix buffers. For many
 * input and filter regimes the CUDNN engine is faster than the CAFFE engine,
 * but for fully-convolutional models and large inputs the CAFFE engine can be
 * faster as long as it fits in memory.
*/
template <typename Dtype>
class CuDNNConvolutionLayer : public ConvolutionLayer<Dtype> {
 public:
  explicit CuDNNConvolutionLayer(const LayerParameter& param)
      : ConvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNConvolutionLayer();
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    OptimizerBase::OptimizerBase(const ParameterCursor& cursor) {
  add_parameters(cursor);
}
    
    void THDTensor_(_resize3d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2) {
  int64_t sizes[] = {size0, size1, size2};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
      auto signal_tensor_ndim = signal_ndim + static_cast<int64_t>(complex_input);  // add complex dim
  if (self.dim() < signal_tensor_ndim) {
    std::ostringstream ss;
    ss << 'Given signal_ndim=' << signal_ndim << ', expected an input tensor '
       << 'of at least' << signal_tensor_ndim << 'D';
    if (complex_input) {
      ss << ' (complex input adds an extra dimension)';
    }
    ss << ', but got input=' << self.type() << self.sizes();
    throw std::runtime_error(ss.str());
  }
    
    REGISTER_CPU_OPERATOR(
    HeatmapMaxKeypoint,
    HeatmapMaxKeypointOp<float, CPUContext>);
    
    #endif // HEATMAP_MAX_KEYPOINT_OP_H_

    
     AT_ERROR('both arguments to matmul need to be at least 1D, but they are ',
          dim_tensor1, 'D and ', dim_tensor2, 'D');
    
    /* On fail throws exceptions which should be caught in worker's loop and reported
 * to master.
 */
void execute(std::unique_ptr<rpc::RPCMessage> raw_message_ptr) {
  auto &raw_message = *raw_message_ptr;
  rpc::function_id_type fid = rpc::unpackFunctionId(raw_message);
  auto iter = detail::functions.find(fid);
  if (iter != detail::functions.end()) {
    (*iter->second)(raw_message);
  } else {
    throw std::invalid_argument('invalid function id: ' + std::to_string(fid));
  }
}
    
    static void RunSynchronousUnaryPingPong() {
  gpr_log(GPR_INFO, 'Running Synchronous Unary Ping Pong');
    }
    
    #include <string>
#include <vector>
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    TEST_F(CodegenTestMinimal, Build) {}
    
    UsageTimer::UsageTimer() : start_(Sample()) {}
    
      struct Result {
    double wall;
    double user;
    double system;
    unsigned long long total_cpu_time;
    unsigned long long idle_cpu_time;
  };
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    SlowTimer::SlowTimer(int64_t msThreshold, const char *location, const char *info)
  : m_timer(Timer::WallTime), m_msThreshold(msThreshold) {
  if (location) m_location = location;
  if (info) m_info = info;
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
public int
magic_list(struct magic_set *ms, const char *magicfile)
{
  if (ms == NULL)
    return -1;
  return file_apprentice(ms, magicfile, FILE_LIST);
}
    
    namespace irgen {
    }
    
      bool more (const char* v2) const = delete;
  bool more (const StringData *v2) const;
  bool more (const String& v2) const;
  bool more (const Array& v2) const = delete;
  bool more (const Object& v2) const = delete;
  bool more (const Resource& v2) const = delete;
    
    std::vector<SlabManager*> SlabManager::s_slabManagers;
    
      /// Constructor.
  /**
   * This constructor creates a timer without setting an expiry time. The
   * expires_at() or expires_from_now() functions must be called to set an
   * expiry time before the timer can be waited on.
   *
   * @param io_service The io_service object that the timer will use to dispatch
   * handlers for any asynchronous operations performed on the timer.
   */
  explicit basic_waitable_timer(boost::asio::io_service& io_service)
    : basic_io_object<WaitableTimerService>(io_service)
  {
  }
    
    namespace boost {
namespace date_time {
    }
    }
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
      // Constructor for a full fenced block.
  explicit gcc_arm_fenced_block(full_t)
  {
    barrier();
  }
    
    #define BOOST_ASIO_WAIT_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'WaitHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
      errno = 0;
  int result = error_wrapper(::ioctl(d, cmd, arg), ec);
    
    #include <boost/asio/detail/pop_options.hpp>
    
    
    {
    {
    {      if ((events[i].events & (POLLERR | POLLHUP)) != 0
            && !more_except && !more_reads && !more_writes)
      {
        // If we have an event and no operations associated with the
        // descriptor then we need to delete the descriptor from /dev/poll.
        // The poll operation can produce POLLHUP or POLLERR events when there
        // is no operation pending, so if we do not remove the descriptor we
        // can end up in a tight polling loop.
        ::pollfd ev = { 0, 0, 0 };
        ev.fd = descriptor;
        ev.events = POLLREMOVE;
        ev.revents = 0;
        ::write(dev_poll_fd_, &ev, sizeof(ev));
      }
      else
      {
        ::pollfd ev = { 0, 0, 0 };
        ev.fd = descriptor;
        ev.events = POLLERR | POLLHUP;
        if (more_reads)
          ev.events |= POLLIN;
        if (more_writes)
          ev.events |= POLLOUT;
        if (more_except)
          ev.events |= POLLPRI;
        ev.revents = 0;
        int result = ::write(dev_poll_fd_, &ev, sizeof(ev));
        if (result != sizeof(ev))
        {
          boost::system::error_code ec(errno,
              boost::asio::error::get_system_category());
          for (int j = 0; j < max_ops; ++j)
            op_queue_[j].cancel_operations(descriptor, ops, ec);
        }
      }
    }
  }
  timer_queues_.get_ready_timers(ops);
}
    
    bool js_cocos2dx_studio_SkewFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_SkewFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_SkewFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_SkewFrame_getSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_getSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_SkewFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    
    {			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 2.0f);
			m_attachment->CreateFixture(&shape, 2.0f);
		}