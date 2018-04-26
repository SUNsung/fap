
        
        #include 'caffe/layers/neuron_layer.hpp'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    #include 'caffe/layers/pooling_layer.hpp'
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
    /* Starts the stream by sending request to |url| using |method| and |headers|.
 * If |end_of_stream| is true, then no data is expected to be written. The
 * |method| is HTTP verb, with PUT having a special meaning to mark idempotent
 * request, which could use QUIC 0-RTT.
 */
GRPC_SUPPORT_EXPORT
int bidirectional_stream_start(bidirectional_stream* stream,
                               const char* url,
                               int priority,
                               const char* method,
                               const bidirectional_stream_header_array* headers,
                               bool end_of_stream);
    
    template <class T, class F>
double average(const T& container, F functor) {
  return sum(container, functor) / container.size();
}
    
    void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo) {
  for (size_t i = 0; i < jpg.components.size(); ++i) {
    const JPEGComponent& c = jpg.components[i];
    JpegHistogram* ac_histogram = &histo[i];
    for (size_t j = 0; j < c.coeffs.size(); j += kDCTBlockSize) {
      UpdateACHistogramForDCTBlock(&c.coeffs[j], ac_histogram);
    }
  }
}
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    
    {  uint8_t bits;     // number of bits used for this symbol
  uint16_t value;   // symbol value or table offset
};
    
    constexpr int kLowestQuality = 70;
constexpr int kHighestQuality = 110;