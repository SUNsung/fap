
        
        namespace caffe {
    }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {}  // namespace caffe
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    AuthPropertyIterator::~AuthPropertyIterator() {}
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
    
    {}  // namespace grpc
    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'
    
    #endif  // GRPC_INTERNAL_CPP_UTIL_CORE_STATS_H

    
    void Timepoint2Timespec(const system_clock::time_point& from,
                        gpr_timespec* to) {
  system_clock::duration deadline = from.time_since_epoch();
  seconds secs = duration_cast<seconds>(deadline);
  if (from == system_clock::time_point::max() ||
      secs.count() >= gpr_inf_future(GPR_CLOCK_REALTIME).tv_sec ||
      secs.count() < 0) {
    *to = gpr_inf_future(GPR_CLOCK_REALTIME);
    return;
  }
  nanoseconds nsecs = duration_cast<nanoseconds>(deadline - secs);
  to->tv_sec = static_cast<int64_t>(secs.count());
  to->tv_nsec = static_cast<int32_t>(nsecs.count());
  to->clock_type = GPR_CLOCK_REALTIME;
}
    
    #ifndef GUETZLI_ENTROPY_ENCODE_H_
#define GUETZLI_ENTROPY_ENCODE_H_
    
    ///////////////////////////////////////////////////////////////////////////////
// Constants for DCT horizontal pass
    
    namespace guetzli {
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}