
        
        int main(int argc, char** argv) {
  FLAGS_alsologtostderr = 1;
    }
    
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
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
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
    
    #endif  // CAFFE_CUDNN_LRN_LAYER_HPP_

    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Compute elementwise operations, such as product and sum,
 *        along multiple input Blobs.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EltwiseLayer : public Layer<Dtype> {
 public:
  explicit EltwiseLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    __thread Timer::Counter s_counters[Timer::kNumTimers];
    
    
static int64_t HHVM_FUNCTION(gmp_intval,
                             const Variant& data) {
  mpz_t gmpData;
    }
    
    /*
 * This method creates a weighted graph of the clusters, and sorts
 * them according to a DFS pre-order that prioritizes the arcs with
 * heaviest weights, so as to try to have a cluster be followed by its
 * mostly likely successor cluster.
 */
void Clusterizer::sortClusters() {
  jit::vector<SuccInfos> clusterGraph;
  clusterGraph.resize(m_unit.blocks.size());
    }
    
    /*
 * Vtuple is an index to a tuple in Vunit::tuples.
 */
DECLARE_VNUM(Vtuple, true, 'T');
    
    //////////////////////////////////////////////////////////////////////
    
    NormalizedInstruction::NormalizedInstruction(SrcKey sk, const Unit* u)
  : source(sk)
  , funcd(nullptr)
  , m_unit(u)
  , immVec()
  , endsRegion(false)
  , preppedByRef(false)
  , ignoreInnerType(false)
  , interp(false)
  , forceSurpriseCheck(false)
{
  memset(imm, 0, sizeof(imm));
  populateImmediates(*this);
}
    
    #ifndef incl_HPHP_NORMALIZED_INSTRUCTION_H_
#define incl_HPHP_NORMALIZED_INSTRUCTION_H_
    
    namespace {
void freezeClusters(const TargetGraph& cg, std::vector<Cluster>& clusters) {
  uint32_t totalSize = 0;
  std::sort(clusters.begin(), clusters.end(), compareClustersDensity);
  for (auto& cluster : clusters) {
    uint32_t newSize = totalSize + cluster.size;
    if (newSize > kFrozenPages * kPageSize) break;
    cluster.frozen = true;
    totalSize = newSize;
    auto fid = cluster.targets[0];
    HFTRACE(1, 'freezing cluster for func %d, size = %u, samples = %u)\n',
            fid, cg.targets[fid].size, cg.targets[fid].samples);
  }
}
    }
    
      /**
   * If pred == true, calls setReadCheckSocket(socket). Otherwise, calls
   * disableReadCheckSocket().
   */
  void setReadCheckSocketIf(const std::shared_ptr<SocketCore>& socket,
                            bool pred);
  /**
   * If pred == true, calls setWriteCheckSocket(socket). Otherwise, calls
   * disableWriteCheckSocket().
   */
  void setWriteCheckSocketIf(const std::shared_ptr<SocketCore>& socket,
                             bool pred);
    
      void seek(int64_t offset);
    
    #include 'TimerA2.h'
    
      virtual bool getChangeGlobalOption() const CXX11_OVERRIDE;
    
    class AbstractProxyRequestCommand : public AbstractCommand {
private:
  std::shared_ptr<Request> proxyRequest_;
    }
    
    #include 'Command.h'