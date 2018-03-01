
        
        int main(int argc, char** argv) {
  FLAGS_alsologtostderr = 1;
    }
    
    
    {  CHECK(reinterpret_cast<float*>(input_channels->at(0).data)
        == net_->input_blobs()[0]->cpu_data())
    << 'Input channels are not wrapping the input layer of the network.';
}
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
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
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    
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
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      EltwiseParameter_EltwiseOp op_;
  vector<Dtype> coeffs_;
  Blob<int> max_idx_;
    
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
    
            cv::Mat A2 = cv::Mat::zeros(3, 3, CV_64F);
        cv::Mat b2 = cv::Mat::zeros(3, 1, CV_64F);
        for (int i = 0; i < N; ++i)
        {
            cv::Mat eye = cv::Mat::eye(3, 3, CV_64F);
            cv::Mat z_mul = z.col(i)*z.col(i).t();
    }
    
    CV_EXPORTS void  EstimateUncertainties(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                           const IntrinsicParams& params, InputArray omc, InputArray Tc,
                           IntrinsicParams& errors, Vec2d& std_err, double thresh_cond, int check_cond, double& rms);
    
    //! @cond IGNORED
    
        static void CODEGEN_FUNCPTR Switch_Uniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
    {
        Uniform3ui = (PFNUNIFORM3UIPROC)IntGetProcAddress('glUniform3ui');
        Uniform3ui(location, v0, v1, v2);
    }
    
            // Version: 3.1
        SAMPLER_2D_RECT                  = 0x8B63,
        SAMPLER_2D_RECT_SHADOW           = 0x8B64,
        SAMPLER_BUFFER                   = 0x8DC2,
        INT_SAMPLER_2D_RECT              = 0x8DCD,
        INT_SAMPLER_BUFFER               = 0x8DD0,
        UNSIGNED_INT_SAMPLER_2D_RECT     = 0x8DD5,
        UNSIGNED_INT_SAMPLER_BUFFER      = 0x8DD8,
        TEXTURE_BUFFER                   = 0x8C2A,
        MAX_TEXTURE_BUFFER_SIZE          = 0x8C2B,
        TEXTURE_BINDING_BUFFER           = 0x8C2C,
        TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D,
        TEXTURE_RECTANGLE                = 0x84F5,
        TEXTURE_BINDING_RECTANGLE        = 0x84F6,
        PROXY_TEXTURE_RECTANGLE          = 0x84F7,
        MAX_RECTANGLE_TEXTURE_SIZE       = 0x84F8,
        RED_SNORM                        = 0x8F90,
        RG_SNORM                         = 0x8F91,
        RGB_SNORM                        = 0x8F92,
        RGBA_SNORM                       = 0x8F93,
        R8_SNORM                         = 0x8F94,
        RG8_SNORM                        = 0x8F95,
        RGB8_SNORM                       = 0x8F96,
        RGBA8_SNORM                      = 0x8F97,
        R16_SNORM                        = 0x8F98,
        RG16_SNORM                       = 0x8F99,
        RGB16_SNORM                      = 0x8F9A,
        RGBA16_SNORM                     = 0x8F9B,
        SIGNED_NORMALIZED                = 0x8F9C,
        PRIMITIVE_RESTART                = 0x8F9D,
        PRIMITIVE_RESTART_INDEX          = 0x8F9E,
    
    	//Server Interface
	printer->Print(vars, '// Server API for $Service$ service\n');
	printer->Print(vars, 'type $Service$Server interface {\n');
	printer->Indent();
	for (int i = 0; i < service->method_count(); i++) {
		GenerateServerMethodSignature(service->method(i).get(), printer, vars);
		printer->Print('\n');
	}
	printer->Outdent();
	printer->Print('}\n\n');
    
    struct Object FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_FIELDS = 6,
    VT_IS_STRUCT = 8,
    VT_MINALIGN = 10,
    VT_BYTESIZE = 12,
    VT_ATTRIBUTES = 14,
    VT_DOCUMENTATION = 16
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool KeyCompareLessThan(const Object *o) const {
    return *name() < *o->name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(name()->c_str(), val);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Field>> *fields() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Field>> *>(VT_FIELDS);
  }
  bool is_struct() const {
    return GetField<uint8_t>(VT_IS_STRUCT, 0) != 0;
  }
  int32_t minalign() const {
    return GetField<int32_t>(VT_MINALIGN, 0);
  }
  int32_t bytesize() const {
    return GetField<int32_t>(VT_BYTESIZE, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<KeyValue>> *attributes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<KeyValue>> *>(VT_ATTRIBUTES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *documentation() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_DOCUMENTATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffsetRequired(verifier, VT_FIELDS) &&
           verifier.Verify(fields()) &&
           verifier.VerifyVectorOfTables(fields()) &&
           VerifyField<uint8_t>(verifier, VT_IS_STRUCT) &&
           VerifyField<int32_t>(verifier, VT_MINALIGN) &&
           VerifyField<int32_t>(verifier, VT_BYTESIZE) &&
           VerifyOffset(verifier, VT_ATTRIBUTES) &&
           verifier.Verify(attributes()) &&
           verifier.VerifyVectorOfTables(attributes()) &&
           VerifyOffset(verifier, VT_DOCUMENTATION) &&
           verifier.Verify(documentation()) &&
           verifier.VerifyVectorOfStrings(documentation()) &&
           verifier.EndTable();
  }
};
    
    
    {}  // namespace grpc_java_generator
    
    
    {
    {  virtual std::unique_ptr<Printer> CreatePrinter(grpc::string *str) const = 0;
};
}  // namespace grpc_generator
    
      const char *AsKey() const {
    if (type_ == TYPE_KEY) {
      return reinterpret_cast<const char *>(Indirect());
    } else {
      return '';
    }
  }
    
    // Get any struct field as a string, regardless of what type it is.
inline std::string GetAnyFieldS(const Struct &st,
                                const reflection::Field &field) {
  return GetAnyValueS(field.type()->base_type(),
                      st.GetAddressOf(field.offset()), nullptr, -1);
}