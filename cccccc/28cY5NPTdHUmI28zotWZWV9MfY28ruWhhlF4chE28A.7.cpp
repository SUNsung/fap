
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_sigmoid_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
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
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      virtual inline const char* type() const { return 'Deconvolution'; }
    
    #include <vector>
    
    namespace HPHP {
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    namespace irgen {
    }
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
    void emitJmpNS(IRGS& env, Offset relOffset) {
  jmpImpl(env, bcOff(env) + relOffset);
}
    
      void zero() {
    memset(m_destBase, 0, m_frontier - m_base);
    clear();
  }
    
    void orderFuncs(const TargetGraph& cg, Cluster* c1, Cluster* c2) {
  TargetId c1head = c1->targets[0];
  TargetId c1tail = c1->targets[c1->targets.size() - 1];
  TargetId c2head = c2->targets[0];
  TargetId c2tail = c2->targets[c2->targets.size() - 1];
    }
    
    
    {  return rawbits_to_double(result);
}
    
      bool initShadow(int afdt_listen,
                  const std::string& afdt_filename, int id,
                  const std::vector<int> &inherited_fds);
  static void runShadow(int afdt_fd);
  void closeShadow();
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(AveragePool)
        .Description('AveragePool consumes an input tensor X and applies average pooling across the'
            'the tensor according to kernel sizes, stride sizes, and pad lengths.'
            'Average pooling consisting of averaging all values of a subset of the'
            'input tensor according to the kernel size and downsampling the'
            'data into the output tensor Y for further processing.')
        .Input('X',
            'Input data tensor from the previous operator; dimensions for image case '
            'are (N x C x H x W), where N is the batch size, C is the number of channels, '
            'and H and W are the height and the width of the data. For non image case, the '
            'dimension are in the form of (N x D1 x D2 ... Dn), where N is the batch size.',
            'T')
        .Output('Y',
            'Output data tensor from average pooling across the input tensor. '
            'Dimensions will vary based on various kernel, stride, and pad sizes.')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('auto_pad',
            'auto_pad must be either SAME_UPPER, SAME_LOWER or VALID. Where SAME_UPPER '
            'or SAME_LOWER mean pad the input so that the ouput size match the input. '
            'In case of odd number add the extra padding at the end for SAME_UPPER and '
            'at the begining for SAME_LOWER. VALID mean no padding, therefore, read the '
            'pixel values from the pads attribute.',
            AttrType::AttributeProto_AttributeType_STRING)
        .Attr('kernel_shape',
            'The size of the kernel along each axis.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('pads',
            'Padding along each axis, can take the value 0 (False) or non 0 (True)',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('strides',
            'Stride along each axis.',
            AttrType::AttributeProto_AttributeType_INTS);
    
    // only copy a complete independent tree
// when node name exists
void ComputationNetwork::CopySubTree(const ComputationNetwork& fromNet,
                                     const std::wstring fromName, std::wstring toNamePrefix,
                                     const CopyNodeFlags flags)
{
    InvalidateCompiledNetwork();
    }
    
        void SetName(const std::wstring& name)
    {
        m_name = name;
    }
    const std::wstring& GetName();
    int GetSectionCount() const
    {
        return m_sectionHeader->dataSections;
    }
    size_t GetRecordCount() const
    {
        return m_sectionHeader->elementsPerRecord != 0 ? m_sectionHeader->elementsCount / m_sectionHeader->elementsPerRecord : m_sectionHeader->elementsCount;
    }
    
    void OutputImageComponent::ToPixels(int xmin, int ymin, int xsize, int ysize,
                                    uint8_t* out, int stride) const {
  assert(xmin >= 0);
  assert(ymin >= 0);
  assert(xmin < width_);
  assert(ymin < height_);
  const int yend1 = ymin + ysize;
  const int yend0 = std::min(yend1, height_);
  int y = ymin;
  for (; y < yend0; ++y) {
    const int xend1 = xmin + xsize;
    const int xend0 = std::min(xend1, width_);
    int x = xmin;
    int px = y * width_ + xmin;
    for (; x < xend0; ++x, ++px, out += stride) {
      *out = static_cast<uint8_t>((pixels_[px] + 8 - (x & 1)) >> 4);
    }
    const int offset = -stride;
    for (; x < xend1; ++x) {
      *out = out[offset];
      out += stride;
    }
  }
  for (; y < yend1; ++y) {
    const int offset = -stride * xsize;
    for (int x = 0; x < xsize; ++x) {
      *out = out[offset];
      out += stride;
    }
  }
}
    
    namespace guetzli {
    }
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
      // Fills in out[] array with the 8-bit pixel view of this component cropped
  // to the specified window. The window's upper-left corner, (xmin, ymin) must
  // be within the image, but the window may extend past the image. In that
  // case the edge pixels are duplicated.
  void ToPixels(int xmin, int ymin, int xsize, int ysize,
                uint8_t* out, int stride) const;