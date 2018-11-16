
        
        const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
    #include <sstream>
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, message);
  printer->Print(
    ' * Protobuf type {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(message->full_name()));
}
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    // Get the name of a service's Java class without package name prefix.
string ClassNameWithoutPackage(const ServiceDescriptor* descriptor,
                               bool immutable) {
  string full_name = StripPackageName(descriptor->full_name(),
                                      descriptor->file());
  // We don't allow nested service definitions.
  GOOGLE_CHECK(full_name.find('.') == string::npos);
  return full_name;
}
    
      // Limit the number of bytes per line.
  static const int kBytesPerLine = 40;
  // Limit the number of lines per string part.
  static const int kLinesPerPart = 400;
  // Every block of bytes, start a new string literal, in order to avoid the
  // 64k length limit. Note that this value needs to be <64k.
  static const int kBytesPerPart = kBytesPerLine * kLinesPerPart;
  for (int i = 0; i < file_data.size(); i += kBytesPerLine) {
    if (i > 0) {
      if (i % kBytesPerPart == 0) {
        printer->Print(',\n');
      } else {
        printer->Print(' +\n');
      }
    }
    printer->Print('\'$data$\'',
      'data', CEscape(file_data.substr(i, kBytesPerLine)));
  }
    
      vars['default_name'] = GPBGenericValueFieldName(descriptor_);
  if (descriptor_->is_repeated()) {
    vars['default'] = 'nil';
  } else {
    vars['default'] = DefaultValue(descriptor_);
  }
  string type = GetCapitalizedType(descriptor_);
  vars['extension_type'] = string('GPBDataType') + type;
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    
    {}  // namespace caffe
    
    /**
 * Virtual class encapsulate boost::thread for use in base class
 * The child class will acquire the ability to run a single thread,
 * by reimplementing the virtual function InternalThreadEntry.
 */
class InternalThread {
 public:
  InternalThread() : thread_() {}
  virtual ~InternalThread();
    }
    
      /**
   * @brief Returns the exact number of bottom blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of bottom blobs.
   */
  virtual inline int ExactNumBottomBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of bottom blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of bottom blobs.
   */
  virtual inline int MinBottomBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of bottom blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of bottom blobs.
   */
  virtual inline int MaxBottomBlobs() const { return -1; }
  /**
   * @brief Returns the exact number of top blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of top blobs.
   */
  virtual inline int ExactNumTopBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of top blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of top blobs.
   */
  virtual inline int MinTopBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of top blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of top blobs.
   */
  virtual inline int MaxTopBlobs() const { return -1; }
  /**
   * @brief Returns true if the layer requires an equal number of bottom and
   *        top blobs.
   *
   * This method should be overridden to return true if your layer expects an
   * equal number of bottom and top blobs.
   */
  virtual inline bool EqualNumBottomTopBlobs() const { return false; }
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    namespace caffe {
    }
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
    // If true, then AVX has been detected.
bool SIMDDetect::avx_available_;
bool SIMDDetect::avx2_available_;
bool SIMDDetect::avx512F_available_;
bool SIMDDetect::avx512BW_available_;
// If true, then SSe4.1 has been detected.
bool SIMDDetect::sse_available_;
    
      // Count the number of values in sorted_vec that is close to val, used to
  // check if a partition is aligned with text partitions.
  int CountAlignment(
      const GenericVector<int>& sorted_vec, const int val) const;
    
      /**
   * Returns the polygon outline of the current block. The returned Pta must
   * be ptaDestroy-ed after use. Note that the returned Pta lists the vertices
   * of the polygon, and the last edge is the line segment between the last
   * point and the first point. nullptr will be returned if the iterator is
   * at the end of the document or layout analysis was not used.
   */
  Pta* BlockPolygon() const;
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    void ChannelArguments::SetInt(const grpc::string& key, int value) {
  grpc_arg arg;
  arg.type = GRPC_ARG_INTEGER;
  strings_.push_back(key);
  arg.key = const_cast<char*>(strings_.back().c_str());
  arg.value.integer = value;
    }
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    #include <grpcpp/security/auth_context.h>
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
    
    #ifndef GRPC_INTERNAL_CPP_DYNAMIC_THREAD_POOL_H
#define GRPC_INTERNAL_CPP_DYNAMIC_THREAD_POOL_H
    
    	if (IsUserOnly(opt))
	{
		FAIL_ON_ERROR(RegCreateKeyEx(HKEY_CURRENT_USER, L'Software\\Classes', 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &root, NULL));
	}
	else
	{
		root = HKEY_CLASSES_ROOT;
	}
    
            if(!m_rootGradientValue ||
            m_aggregatedLossFunction->Output().GetDataType() != m_rootGradientValue->GetDataType() ||
            m_prevMinibatchAggregateTrainingLossValue->Shape() != m_rootGradientValue->Shape() ||
            computeDevice != m_rootGradientValue->Device() ||
            outputs.at(m_aggregatedLossFunction)->Mask() != m_rootGradientValue->Mask())
        {
            m_rootGradientValue = MakeSharedObject<Value>(MakeSharedObject<NDArrayView>(m_aggregatedLossFunction->Output().GetDataType(), m_prevMinibatchAggregateTrainingLossValue->Shape(), computeDevice), outputs.at(m_aggregatedLossFunction)->Mask());
        }
    
    
    {    CopyMBLayoutTo(pMBLayout);
}
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
    
    {
    {        wstring pathName = config[L'pathName'];
        if (TraceLevel() > 0)
            fprintf(stderr, 'Load: Loading model file: %ls', pathName.c_str());
        Load<ElemType>(pathName); // note that for CNTK_MODEL_VERSION_7 and above, 'ElemType' is ignored
    }
};
    
    
#if 1
        // support for legacy models when the mean and variance vectors were stored as column vectors (N,1)
        // This code will copy the shape of Input(0) (source) to Input(1) and Input(2) (target) if:
        //   1. The source is a 3-tensor with shape 1x1xM
        //   2. The target is a vector (i.e., a 2-tensor with shape Nx1)
        //   3. Both targets have the same number of elements
        //   4. The number of elements in the target (N) is the same as the number of elements in the source (M)
        // Note: This is somewhat ugly [Jasha Droppo].
    
    /*! \brief gradient statistics pair usually needed in gradient boosting */
using GradientPair = detail::GradientPairInternal<float>;
    
    #include <xgboost/data.h>
#include <dmlc/io.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <memory>
#include <functional>