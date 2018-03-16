
        
        
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    namespace caffe {
    }
    
    
    {}  // namespace caffe
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
        // ProcessNDLConfig - Process the NDL script from a configuration string value
    // config - configuration string containing script
    void ProcessNDLConfig(const ConfigValue& config, bool fullValidate = false)
    {
        NDLScript<ElemType> script(config);
        ProcessNDLScript(&script, ndlPassAll, nullptr, fullValidate);
    }
    
    
    {        // We don't use CreateFromFile() here since the user might specify OutputNodeNames in the config.
        // By not compiling the network before patching, we avoid double log output for validation.
        net = make_shared<ComputationNetwork>(deviceId);
        net->SetTraceLevel(config(L'traceLevel', 0));
        net->Read<ElemType>(modelPath);
        if (outputNodeNames.size() > 0)
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
        net->CompileNetwork();
    }
    
    public:
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    template <class ConfigRecordType>
    DataWriter(const ConfigRecordType& config);
    // constructor from Scripting
    DataWriter(const ScriptableObjects::IConfigRecordPtr configp)
        : DataWriter(*configp)
    {
    }
    virtual ~DataWriter();
    
        // return the horizontal sum of all 4 components
    // ... return float4, use another mechanism to store the low word
    float sum() const
    {
        float4 hsum = _mm_hadd_ps(v, v);
        hsum = _mm_hadd_ps(hsum, hsum);
        return hsum.f0();
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Consume multiple bytes from the beginning of the buffer.
  void consume(size_type count)
  {
    BOOST_ASIO_ASSERT(begin_offset_ + count <= end_offset_);
    begin_offset_ += count;
    if (empty())
      clear();
  }
    
    #ifndef BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP
#define BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
    #include <boost/asio/detail/config.hpp>
#include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/noncopyable.hpp>
#include <boost/asio/handler_alloc_hook.hpp>
    
        // Add the interrupter's descriptor to /dev/poll.
    ::pollfd ev = { 0, 0, 0 };
    ev.fd = interrupter_.read_descriptor();
    ev.events = POLLIN | POLLERR;
    ev.revents = 0;
    ::write(dev_poll_fd_, &ev, sizeof(ev));
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    void BuildSequentialHuffmanCodes(
    const JPEGData& jpg,
    std::vector<HuffmanCodeTable>* dc_huffman_code_tables,
    std::vector<HuffmanCodeTable>* ac_huffman_code_tables) {
  JPEGOutput out(NullOut, nullptr);
  BuildAndEncodeHuffmanCodes(jpg, out, dc_huffman_code_tables,
                             ac_huffman_code_tables);
}
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    namespace guetzli {
    }
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    namespace guetzli {
    }
    
    void UpdateACHistogramForDCTBlock(const coeff_t* coeffs,
                                  JpegHistogram* ac_histogram);
    
    
    {  private:
    void* object_;
};
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    #include <vector>
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {  private:
    JavaVM* vm_;
    JNIEnv* env_;
    bool we_attach_;
    int status_;
};
    
      virtual void onQueued() CXX11_OVERRIDE {}
    
    
    {
    {    httpConnection_->sendProxyRequest(std::move(httpRequest));
  }
  else {
    httpConnection_->sendPendingData();
  }
  if (httpConnection_->sendBufferIsEmpty()) {
    getDownloadEngine()->addCommand(getNextCommand());
    return true;
  }
  else {
    setWriteCheckSocket(getSocket());
    addCommandSelf();
    return false;
  }
}
    
    #endif // D_ANNOUNCE_LIST_H

    
    namespace aria2 {
    }
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    #include <string>
#include <Security/Security.h>
#include <Security/SecureTransport.h>