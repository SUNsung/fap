
        
        
    { private:
  shared_ptr<Net<float> > net_;
  cv::Size input_geometry_;
  int num_channels_;
  cv::Mat mean_;
  std::vector<string> labels_;
};
    
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
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief A layer for learning 'embeddings' of one-hot vector input.
 *        Equivalent to an InnerProductLayer with one-hot vectors as input, but
 *        for efficiency the input is the 'hot' index of each column itself.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EmbedLayer : public Layer<Dtype> {
 public:
  explicit EmbedLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      void PrintFeatureSet() {
    for (size_t i = 0; i < kFeatureSetSize; i++) {
      if(size_t Sz = GetFeature(i))
        Printf('[%zd: id %zd sz%zd] ', i, SmallestElementPerFeature[i], Sz);
    }
    Printf('\n\t');
    for (size_t i = 0; i < Inputs.size(); i++)
      if (size_t N = Inputs[i]->NumFeatures)
        Printf(' %zd=>%zd ', i, N);
    Printf('\n');
  }
    
      void Set(const uint8_t *B, uint8_t S) {
    assert(S <= kMaxSize);
    memcpy(Data, B, S);
    Size = S;
  }
    
    int CloseFile(int fd) {
  return close(fd);
}
    
    #include 'FuzzerDefs.h'
#include 'FuzzerExtFunctions.h'
#include 'FuzzerInterface.h'
#include 'FuzzerOptions.h'
#include 'FuzzerSHA1.h'
#include 'FuzzerValueBitMap.h'
#include <algorithm>
#include <atomic>
#include <chrono>
#include <climits>
#include <cstdlib>
#include <string.h>
    
    // Decides which files need to be merged (add thost to NewFiles).
// Returns the number of new features added.
size_t Merger::Merge(std::vector<std::string> *NewFiles) {
  NewFiles->clear();
  assert(NumFilesInFirstCorpus <= Files.size());
  std::set<uint32_t> AllFeatures;
    }
    
    size_t MutationDispatcher::Mutate_InsertByte(uint8_t *Data, size_t Size,
                                             size_t MaxSize) {
  if (Size >= MaxSize) return 0;
  size_t Idx = Rand(Size + 1);
  // Insert new value at Data[Idx].
  memmove(Data + Idx + 1, Data + Idx, Size - Idx);
  Data[Idx] = RandCh(Rand);
  return Size + 1;
}
    
    namespace fuzzer {
    }
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp8(uint64_t Arg1, uint64_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
__attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp4(uint32_t Arg1, uint32_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
__attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp2(uint16_t Arg1, uint16_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}
__attribute__((visibility('default')))
void __sanitizer_cov_trace_cmp1(uint8_t Arg1, uint8_t Arg2) {
  fuzzer::TPC.HandleCmp(__builtin_return_address(0), Arg1, Arg2);
}