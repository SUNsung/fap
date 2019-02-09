
        
        #define IPC_MESSAGE_START ShellMsgStart
    
    namespace content {
class RenderFrameHost;
}
    
    v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope handle_scope(isolate);
    }
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {
    {    response->AppendString(argv[i]);
  }
  return true;
}
    
    
    {    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceAdded::kEventName,
      std::move(args));
  }
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
     protected:
  /// @copydoc ContrastiveLossLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    
    {}  // namespace caffe
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
    
    {} // namespace caffe2

    
    
    {  bool RunOnDevice() override;
};
    
    Contrast Example 2 with Example 1. For each data point per feature, the values
are sorted by the corresponding KEY.
)DOC')
    .Input(0, 'DATA', 'Tensor of rank 1.')
    .Input(
        1,
        'RANGES',
        'Tensor of int32/int64 ranges, of dims (N, M, 2). '
        'Where N is number of examples and M is a size of each example. '
        'Last dimention represents a range in the format (start, lengths)')
    .Input(2, 'KEY', 'Tensor of rank 1 and type int64.')
    .Output(0, 'OUTPUT', '1-D tensor of size sum of range lengths')
    .Arg('lengths', 'Expected lengths for ranges')
    .TensorInferenceFunction([](const OperatorDef& def,
                                const vector<TensorShape>& in) {
      ArgumentHelper helper(def);
      auto lengths = helper.GetRepeatedArgument<int>('lengths');
      CAFFE_ENFORCE_EQ(in[0].dims_size(), 1, 'DATA should be 1-D tensor.');
      CAFFE_ENFORCE_EQ(in[1].dims_size(), 3, 'RANGES should be 3-D tensor.');
      if (in.size() > 2) {
        CAFFE_ENFORCE_EQ(in[2].dims_size(), 1, 'KEY should be 1-D tensor.');
      }
      CAFFE_ENFORCE_GT(lengths.size(), 0, 'lengths should be non-empty.');
      std::vector<TensorShape> out(lengths.size());
      for (int i = 0; i < lengths.size(); ++i) {
        out[i].set_data_type(in[0].data_type());
        out[i].add_dims(in[1].dims(0));
        out[i].add_dims(lengths[i]);
      }
      return out;
    });
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    #include 'DHTNode.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'fmt.h'
#include 'util.h'
#include 'array_fun.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    #include 'TimeA2.h'
    
    
    {} // namespace aria2
    
    void DHTTaskQueueImpl::addImmediateTask(const std::shared_ptr<DHTTask>& task)
{
  immediateTaskQueue_.addTask(task);
}
    
    namespace aria2 {
    }
    
    class DHTTokenTracker {
private:
  static const size_t SECRET_SIZE = 4;
    }
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
    
    {  void setTokenTracker(DHTTokenTracker* tokenTracker);
};
    
    void DHTUnknownMessage::doReceivedAction() {}
    
    BENCHMARK_PARAM(BENCHFUN(insertFront), 16)
BENCHMARK_PARAM(BENCHFUN(insertFront), 128)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024)
BENCHMARK_PARAM(BENCHFUN(insertFront), 10240)
BENCHMARK_PARAM(BENCHFUN(insertFront), 102400)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024000)
    
    BENCHMARK_RELATIVE(sformat_short_string_unsafe, iters) {
  BenchmarkSuspender suspender;
  auto const& shortString = getShortString();
  while (iters--) {
    std::string out;
    suspender.dismissing([&] { out = sformat(shortString); });
  }
}
    
    #pragma once
#define FOLLY_RANDOM_H_
    
    // Some utility routines relating to unicode.
    
      tv.tv_sec = 0;
  tv.tv_usec = 10;
  EXPECT_EQ(10000ns, to<nanoseconds>(tv));
  EXPECT_EQ(10us, to<microseconds>(tv));
  EXPECT_EQ(0ms, to<milliseconds>(tv));
  EXPECT_EQ(0s, to<seconds>(tv));
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
    #ifndef _MSC_VER
#define _GNU_SOURCE 1 // for RTLD_NOLOAD
#include <dlfcn.h>
#endif
#include <fstream>
    
    template <
    template <typename> class Atom = std::atomic,
    typename T,
    typename... Args>
counted_ptr<T, Atom> make_counted(Args&&... args) {
  char* mem = (char*)malloc(sizeof(T) + sizeof(intrusive_shared_count<Atom>));
  if (!mem) {
    throw std::bad_alloc();
  }
  new (mem) intrusive_shared_count<Atom>();
  T* ptr = (T*)(mem + sizeof(intrusive_shared_count<Atom>));
  new (ptr) T(std::forward<Args>(args)...);
  return counted_ptr<T, Atom>(counted_shared_tag(), ptr);
}