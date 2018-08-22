
        
        /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_LRN_LAYER_HPP_

    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
    
    {  bool stable_prod_grad_;
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \gamma ^ {\alpha x + \beta}
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    static const int WARMUP = 5;
static const int BENCHMARK = 5;
    
    #include 'src/core/lib/iomgr/network_status_tracker.h'
#include 'src/core/lib/iomgr/sockaddr_windows.h'
    
    static void on_credentials_metadata(void* arg, grpc_error* input_error) {
  grpc_transport_stream_op_batch* batch =
      static_cast<grpc_transport_stream_op_batch*>(arg);
  grpc_call_element* elem =
      static_cast<grpc_call_element*>(batch->handler_private.extra_arg);
  call_data* calld = static_cast<call_data*>(elem->call_data);
  grpc_auth_metadata_context_reset(&calld->auth_md_context);
  grpc_error* error = GRPC_ERROR_REF(input_error);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->md_array.size <= MAX_CREDENTIALS_METADATA_COUNT);
    GPR_ASSERT(batch->send_initial_metadata);
    grpc_metadata_batch* mdb =
        batch->payload->send_initial_metadata.send_initial_metadata;
    for (size_t i = 0; i < calld->md_array.size; ++i) {
      add_error(&error, grpc_metadata_batch_add_tail(
                            mdb, &calld->md_links[i],
                            GRPC_MDELEM_REF(calld->md_array.md[i])));
    }
  }
  if (error == GRPC_ERROR_NONE) {
    grpc_call_next_op(elem, batch);
  } else {
    error = grpc_error_set_int(error, GRPC_ERROR_INT_GRPC_STATUS,
                               GRPC_STATUS_UNAVAILABLE);
    grpc_transport_stream_op_batch_finish_with_failure(batch, error,
                                                       calld->call_combiner);
  }
  GRPC_CALL_STACK_UNREF(calld->owning_call, 'get_request_metadata');
}
    
    #include <string.h>
    
    static void add_batch_error(batch_control* bctl, grpc_error* error,
                            bool has_cancelled) {
  if (error == GRPC_ERROR_NONE) return;
  int idx = static_cast<int>(gpr_atm_full_fetch_add(&bctl->num_errors, 1));
  if (idx == 0 && !has_cancelled) {
    cancel_with_error(bctl->call, STATUS_FROM_CORE, GRPC_ERROR_REF(error));
  }
  bctl->errors[idx] = error;
}
    
    namespace grpc {
namespace load_reporter {
namespace experimental {
    }
    }
    }
    
    /// ResourceQuota represents a bound on memory and thread usage by the gRPC
/// library. A ResourceQuota can be attached to a server (via \a ServerBuilder),
/// or a client channel (via \a ChannelArguments).
/// gRPC will attempt to keep memory and threads used by all attached entities
/// below the ResourceQuota bound.
class ResourceQuota final : private GrpcLibraryCodegen {
 public:
  /// \param name - a unique name for this ResourceQuota.
  explicit ResourceQuota(const grpc::string& name);
  ResourceQuota();
  ~ResourceQuota();
    }
    
    int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPTSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);
    }
    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #include <inttypes.h>