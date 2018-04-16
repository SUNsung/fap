
        
        void takesData(NSData *object);
NSData *returnsData();
BOOL identityOfData(NSData *data);
    
    /// Format a Syntax tree with the given rules.
Syntax format(Syntax Tree);
// TODO: Representation for formatting rules, etc. This is just a figment
// for now.
    
    
    {  /// Return a hash code of any components from these options that should
  /// contribute to a Swift Bridging PCH hash.
  llvm::hash_code getPCHHashComponents() const {
    // Nothing here that contributes anything significant when emitting the PCH.
    return llvm::hash_value(0);
  }
};
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
      /// Creates and adds a memory buffer to the \c SourceManager, taking
  /// ownership of the newly created copy.
  ///
  /// \p InputData and \p BufIdentifier are copied, so that this memory can go
  /// away as soon as this function returns.
  unsigned addMemBufferCopy(StringRef InputData, StringRef BufIdentifier = '');
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
      /// Get the canonicalized substitution. If wasCanonical is not nullptr,
  /// store there whether the current substitution was canonical already.
  Substitution getCanonicalSubstitution(bool *wasCanonical = nullptr) const;
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
        ModelProto Model::ToProto()
    {
        *(m_modelProto->mutable_graph()) = m_graph->ToGraphProto();
        return *m_modelProto;
    }
    
    
    {
    {        const std::string& Status::EmptyString()
        {
            static std::string s_emptyStr = '';
            return s_emptyStr;
        }
    }
}

    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(LeakyRelu)
        .Description('LeakyRelu takes input data (Tensor<T>) and an argument alpha, '
            'and produces one output data (Tensor<T>) where the function '
            ':`f(x) = alpha * x for x < 0`, `f(x) = x for x >= 0`, is applied to the data '
            'tensor elementwise.')
        .Input('X', 'input tensor', 'T')
        .Output('Y', 'The LeakyRelu value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha','Coefficient of leakage', AttrType::AttributeProto_AttributeType_FLOAT);
    
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
    
        // Taken from Caffe2
    REGISTER_OPERATOR_SCHEMA(Clip)
        .Description('Clip operator limits the given input within an interval. '
            'The interval is specified with arguments 'min' and 'max'. They default to '
            'numeric_limits::lowest() and numeric_limits::max() respectively. The clipping '
            'operation can be done in in-place fashion too, where the input and output blobs '
            'are the same.')
        .Input('input', 'Input tensor of any shape', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('min', 'Minimum value, under which element is replaced by min',
            AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('max', 'Maximum value, under which element is replaced by max',
            AttrType::AttributeProto_AttributeType_FLOAT);
    
    
    // Input: X, output: Y
    REGISTER_OPERATOR_SCHEMA(Scaler)
        .SetDomain(c_mlDomain)
        .Input('X', 'Data to be scaled', 'T')
        .Output('Y', 'Scaled output data', 'tensor(float)')
        .Description(R'DOC(
            Rescale input data, for example to standardize features by removing the mean and scaling to unit variance.
            )DOC')
        .TypeConstraint('T', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .Attr('scale', 'second, multiply by this', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('offset', 'first, offset by thisfirst, offset by this, can be one value or a separate value for each feature', AttrType::AttributeProto_AttributeType_FLOATS);
    
            if (m_verbosity == 1)
            fprintf(stderr, 'Reading lattice from file '%ls'\n', fileName.c_str());
    
    
    {        // Check sample shape.
        const auto& sampleShape = m_prefetchBuffers[i->first].m_sampleShape;
        if (i->second.sampleLayout.size() == 0 || AsNDShape(i->second.sampleLayout).IsUnknown()) // Not set.
        {
            i->second.sampleLayout = AsTensorShape(sampleShape);
        }
        else if (i->second.sampleLayout.GetNumElements() != AsTensorShape(sampleShape).GetNumElements())
        {
            RuntimeError('Sample shape for '%ls' provided by the deserializer '%s' does not match the shape expected by the network '%s'.', 
                i->first.c_str(), string(AsTensorShape(sampleShape)).c_str(), string(i->second.sampleLayout).c_str());
        }
    }
    
    #pragma warning(push)
#pragma warning(disable : 4200) // warning C4200: nonstandard extension used : zero-sized array in struct/union
// Section Header on Disk
struct SectionHeader
{
    WORD wMagic;            // magic number ACE9
    WORD version;           // version number ##.## in hex
    WORD sizeHeader;        // size of this header (rounded up to mappable boundary)
    WORD dataSections;      // number of data sub-sections (for nesting)
    WORD sectionType;       // what is the type of the data in this section
    WORD sectionData;       // type of section (SectionData enum)
    WORD bytesPerElement;   // number of bytes per element, (0 means variable)
    WORD customStructureID; // ID for custom structure
    WORD elementsPerRecord; // number of elements per Record
    WORD flags;             // bit flags, dependent on sectionType
    WORD writtenID;         // unique ID so files written at the same time can be identified
    WORD unusedWords[5];
    size_t elementsCount; // number of total elements stored
    // * section specific data goes below here * //
    WORD labelKind;                                                    // kind of label (LabelKind type)
    WORD labelDim;                                                     // number of possible states for labels (category type)
    char unused[descriptionSize - 18 * sizeof(WORD) - sizeof(size_t)]; // space for future expansion (zero out in current versions)
    char nameDescription[descriptionSize];                             // name and description of section contents in this format (name: description) (string, with extra bytes zeroed out, at least one null terminator required)
    size_t size;                                                       // size of this section (including header)
    size_t sizeAll;                                                    // size of this section (including header and all sub-sections)
    size_t sectionFilePosition[];                                      // sub-section file offsets (if needed), assumed to be in File Position order
};
#pragma warning(pop)
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief base implementation of config reader
 */
class ConfigReaderBase {
 public:
  /*!
   * \brief get current name, called after Next returns true
   * \return current parameter name
   */
  inline const char *name(void) const {
    return s_name.c_str();
  }
  /*!
   * \brief get current value, called after Next returns true
   * \return current parameter value
   */
  inline const char *val(void) const {
    return s_val.c_str();
  }
  /*!
   * \brief move iterator to next position
   * \return true if there is value in next position
   */
  inline bool Next(void) {
    while (!this->IsEnd()) {
      GetNextToken(&s_name);
      if (s_name == '=') return false;
      if (GetNextToken(&s_buf) || s_buf != '=')  return false;
      if (GetNextToken(&s_val) || s_val == '=')  return false;
      return true;
    }
    return false;
  }
  // called before usage
  inline void Init(void) {
    ch_buf = this->GetChar();
  }
    }
    }
    }
    
    #if XGBOOST_CUSTOMIZE_GLOBAL_PRNG
/*!
 * \brief An customized random engine, used to be plugged in PRNG from other systems.
 *  The implementation of this library is not provided by xgboost core library.
 *  Instead the other library can implement this class, which will be used as GlobalRandomEngine
 *  If XGBOOST_RANDOM_CUSTOMIZE = 1, by default this is switched off.
 */
class CustomGlobalRandomEngine {
 public:
  /*! \brief The result type */
  typedef size_t result_type;
  /*! \brief The minimum of random numbers generated */
  inline static constexpr result_type min() {
    return 0;
  }
  /*! \brief The maximum random numbers generated */
  inline static constexpr result_type max() {
    return std::numeric_limits<size_t>::max();
  }
  /*!
   * \brief seed function, to be implemented
   * \param val The value of the seed.
   */
  void seed(result_type val);
  /*!
   * \return next random number.
   */
  result_type operator()();
};
    
      uint64_t uint64_t2[2] = {1U, 2U};
  EXPECT_EQ(info.group_ptr.size(), 0);
  info.SetInfo('group', uint64_t2, xgboost::kUInt64, 2);
  ASSERT_EQ(info.group_ptr.size(), 3);
  EXPECT_EQ(info.group_ptr[2], 3);
    
    
    {  vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3,2,1';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
}
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }
    
    struct EvalPoissonNegLogLik : public EvalEWiseBase<EvalPoissonNegLogLik> {
  const char *Name() const override {
    return 'poisson-nloglik';
  }
  inline bst_float EvalRow(bst_float y, bst_float py) const {
    const bst_float eps = 1e-16f;
    if (py < eps) py = eps;
    return common::LogGamma(y + 1.0f) + py - std::log(py) * y;
  }
};
    
    /*! \brief match error */
struct EvalMultiLogLoss : public EvalMClassBase<EvalMultiLogLoss> {
  const char* Name() const override {
    return 'mlogloss';
  }
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass) {
    const bst_float eps = 1e-16f;
    size_t k = static_cast<size_t>(label);
    if (pred[k] > eps) {
      return -std::log(pred[k]);
    } else {
      return -std::log(eps);
    }
  }
};
    
    // Print a vector a sequence of JSON values, comma separated, wrapped in '[]'.
template<typename T>
bool PrintVector(const Vector<T> &v, Type type, int indent,
                 const IDLOptions &opts, std::string *_text) {
  std::string &text = *_text;
  text += '[';
  text += NewLine(opts);
  for (uoffset_t i = 0; i < v.size(); i++) {
    if (i) {
      if (!opts.protobuf_ascii_alike) text += ',';
      text += NewLine(opts);
    }
    text.append(indent + Indent(opts), ' ');
    if (IsStruct(type)) {
      if (!Print(v.GetStructFromOffset(i * type.struct_def->bytesize), type,
                 indent + Indent(opts), nullptr, opts, _text)) {
        return false;
      }
    } else {
      if (!Print(v[i], type, indent + Indent(opts), nullptr, opts, _text)) {
        return false;
      }
    }
  }
  text += NewLine(opts);
  text.append(indent, ' ');
  text += ']';
  return true;
}
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>
    
    // Abort the program after logging the mesage.
#define GRPC_CODEGEN_FAIL GRPC_CODEGEN_CHECK(false)
    
      std::string GetUsageString(const char *program_name) const;
    
    // Convenience class to easily parse or generate text for arbitrary FlatBuffers.
// Simply pre-populate it with all schema filenames that may be in use, and
// This class will look them up using the file_identifier declared in the
// schema.
class Registry {
 public:
  // Call this for all schemas that may be in use. The identifier has
  // a function in the generated code, e.g. MonsterIdentifier().
  void Register(const char *file_identifier, const char *schema_path) {
    Schema schema;
    schema.path_ = schema_path;
    schemas_[file_identifier] = schema;
  }
    }
    
    
    {  StructBuilderBody(struct_def, '', code_ptr);
  EndBuilderBody(code_ptr);
}
    
    bool DirExists(const char *name) {
  // clang-format off
  #ifdef _WIN32
    #define flatbuffers_stat _stat
    #define FLATBUFFERS_S_IFDIR _S_IFDIR
  #else
    #define flatbuffers_stat stat
    #define FLATBUFFERS_S_IFDIR S_IFDIR
  #endif
  // clang-format on
  struct flatbuffers_stat file_info;
  if (flatbuffers_stat(name, &file_info) != 0) return false;
  return (file_info.st_mode & FLATBUFFERS_S_IFDIR) != 0;
}