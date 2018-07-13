#include <fstream>  // NOLINT(readability/streams)
#include <string>
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
    template <typename Dtype>
class Layer;
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    template<> inline
dnnError_t dnnPoolingCreateBackward<double>(
    dnnPrimitive_t* pPooling,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t op,
    const dnnLayout_t srcLayout,
    const size_t kernelSize[],
    const size_t kernelStride[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnPoolingCreateBackward_F64(
        pPooling,
        attributes,
        op,
        srcLayout,
        kernelSize,
        kernelStride,
        inputOffset,
        border_type);
}
    
    // magic numbers for headers
const WORD magicFile = 0xACE9;       // file header, only expected at beginning of file
const WORD magicSection = 0x4ACE;    // section headers, all other header types
const WORD magicIncomplete = 0xBAD1; // use a section header for the file that isn't valid until we close it properly
    
    #include <vector>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    template <typename Stream>
class buffered_write_stream;
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
      // Return the maximum size for data in the buffer.
  size_type capacity() const
  {
    return buffer_.size();
  }
    
    
    {} // namespace boost_asio_handler_invoke_helpers
    
      // The type of a const iterator over the hash map.
  typedef typename std::list<value_type>::const_iterator const_iterator;
    
      errno = 0;
#if defined(__SYMBIAN32__)
  int result = error_wrapper(::fcntl(d, F_GETFL, 0), ec);
  if (result >= 0)
  {
    errno = 0;
    int flag = (value ? (result | O_NONBLOCK) : (result & ~O_NONBLOCK));
    result = error_wrapper(::fcntl(d, F_SETFL, flag), ec);
  }
#else // defined(__SYMBIAN32__)
  ioctl_arg_type arg = (value ? 1 : 0);
  int result = error_wrapper(::ioctl(d, FIONBIO, &arg), ec);
#endif // defined(__SYMBIAN32__)
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    #include 'osquery/core/utils.h'
#include 'osquery/tests/test_util.h'
    
    Status WmiResultItem::GetVectorOfStrings(const std::string& name,
                                         std::vector<std::string>& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != (VT_BSTR | VT_ARRAY)) {
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  long lbound, ubound;
  SafeArrayGetLBound(value.parray, 1, &lbound);
  SafeArrayGetUBound(value.parray, 1, &ubound);
  long count = ubound - lbound + 1;
    }
    
    namespace osquery {
    }
    
      ec = std::make_shared<TypedKernelEventContext<EventType>>();
  ec->event_type = event_type;
  ec->time = event->time.time;
  ec->uptime = event->time.uptime;
  memcpy(&(ec->event), event->buf, sizeof(EventType));
  ec->flexible_data.insert(ec->flexible_data.begin(),
                           event->buf + sizeof(EventType),
                           event->buf + event->size);
    
    #include 'osquery/events/linux/syslog.h'
#include 'osquery/tests/test_util.h'
    
      state->stackTrace.push_back(absoluteProgramCounter);
    
    #include <yoga/Yoga.h>
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }