
        
          caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
    
    {}  // namespace caffe
    
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
    
    #endif  // CAFFE_CONCAT_LAYER_HPP_

    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_CUDNN_SIGMOID_LAYER_HPP_

    
    #include <vector>
    
      virtual inline const char* type() const { return 'ELU'; }
    
    
    {}  // namespace caffe
    
    CCStruct::~CCStruct() {
}
    
    // Computes all the cross product distances of the points from the line,
// storing the actual (signed) cross products in distances.
// Ignores distances of points that are further away than the previous point,
// and overlaps the previous point by at least half.
void DetLineFit::ComputeDistances(const ICOORD& start, const ICOORD& end) {
  distances_.truncate(0);
  ICOORD line_vector = end;
  line_vector -= start;
  square_length_ = line_vector.sqlength();
  int line_length = IntCastRounded(sqrt(square_length_));
  // Compute the distance of each point from the line.
  int prev_abs_dist = 0;
  int prev_dot = 0;
  for (int i = 0; i < pts_.size(); ++i) {
    ICOORD pt_vector = pts_[i].pt;
    pt_vector -= start;
    int dot = line_vector % pt_vector;
    // Compute |line_vector||pt_vector|sin(angle between)
    int dist = line_vector * pt_vector;
    int abs_dist = dist < 0 ? -dist : dist;
    if (abs_dist > prev_abs_dist && i > 0) {
      // Ignore this point if it overlaps the previous one.
      int separation = abs(dot - prev_dot);
      if (separation < line_length * pts_[i].halfwidth ||
          separation < line_length * pts_[i - 1].halfwidth)
        continue;
    }
    distances_.push_back(DistPointPair(dist, pts_[i].pt));
    prev_abs_dist = abs_dist;
    prev_dot = dot;
  }
}
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
    /* define data structure to hold 2D points or vectors using floating point */
typedef struct
{
  FLOAT32 x, y;
} FPOINT;
typedef FPOINT FVECTOR;
    
        // A machine learning model representation class.
    // Besides a main <Graph>, it also holds basic information, say,
    // version, domain, model author, license etc.
    class Model
    {
    public:
    }
    
            PTYPE OpUtils::ToType(const std::string& p_type)
        {
            TypeProto type;
            FromString(p_type, type);
            return ToType(type);
        }
    
    
    {    inline Status FileClose(int fd)
    {
        int ret = 0;
#ifdef _WIN32
        ret = _close(fd);
#else
        ret = close(fd);
#endif
        if (0 != ret)
        {
            return Status(SYSTEM, errno);
        }
        return Status::OK();
    }
}
    
    #define REGISTER_BINARY_LOGIC_OPERATOR_SCHEMA(OpName)                                                           \
    REGISTER_OPERATOR_SCHEMA(OpName)                                                                            \
        .Description('Returns the tensor resulted from performing the ''#OpName'' logical operation'            \
            'elementwise on the input tensors A and B. If broadcasting is enabled, the right-hand-side'         \
            'argument will be broadcasted to match the shape of left-hand-side argument. Refer to Add'          \
            ' for a detailed description of the broadcasting rules.')                                           \
        .Input('A', 'First operand.', 'T')                                                                      \
        .Input('B', 'Second operand. With broadcasting can be of smaller size than A. If broadcasting'          \
            'is disabled, it should be of the same size.', 'T')                                                 \
        .Output('C', 'Result, has same dimensions and A and type bool.', 'T')                                   \
        .TypeConstraint('T', { 'tensor(bool)' }, 'Constrain input and output types to bool tensor.')            \
        .Attr('axis', 'If set, defines the broadcast dimensions.',                                              \
            AttrType::AttributeProto_AttributeType_INT)                                                         \
        .Attr('broadcast', 'Pass 1 to enable broadcasting.',                                                    \
            AttrType::AttributeProto_AttributeType_INT);
    
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
    
        for (const auto& fromNode : fromNet.GetEvalOrder(fromRoot)) // BUGBUG: This probably will fail because the precomputed eval orders are invalid at this point.
    {
        wstring fromNodeName = fromNode->NodeName();
        wstring toNodeName = toNamePrefix + fromNodeName;
    }
    
      /// Perform a blocking wait on the timer.
  /**
   * This function is used to wait for the timer to expire. This function
   * blocks and does not return until the timer has expired.
   *
   * @param ec Set to indicate what error occurred, if any.
   */
  void wait(boost::system::error_code& ec)
  {
    this->service.wait(this->implementation, ec);
  }
    
    template <typename Stream>
class buffered_write_stream;
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      flatbuffers::FlatBufferBuilder builder;
  auto name = builder.CreateString('Dog');
  auto sound = builder.CreateString('Bark');
  auto animal_buffer = sample::CreateAnimal(builder, name, sound);
  builder.Finish(animal_buffer);
    
      // Get and test the `Equipment` union (`equipped` field).
  assert(monster->equipped_type() == Equipment_Weapon);
  auto equipped = static_cast<const Weapon *>(monster->equipped());
  assert(equipped->name()->str() == 'Axe');
  assert(equipped->damage() == 5);
  (void)equipped;
    
    class JsonSchemaGenerator : public BaseGenerator {
 private:
  CodeWriter code_;
    }
    
    template<typename T> FLATBUFFERS_CONSTEXPR_CPP14 T HashFnv1(const char *input) {
  T hash = FnvTraits<T>::kOffsetBasis;
  for (const char *c = input; *c; ++c) {
    hash *= FnvTraits<T>::kFnvPrime;
    hash ^= static_cast<unsigned char>(*c);
  }
  return hash;
}
    
    
    {}  // namespace flatbuffers
