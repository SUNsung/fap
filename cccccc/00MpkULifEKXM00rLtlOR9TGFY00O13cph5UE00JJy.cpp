
        
          // Calculate the depth at which the requirement's generic parameters
  // appear in the synthetic signature.
  unsigned depth = 0;
  if (covariantSelf) {
    depth++;
  }
  if (conformanceSig) {
    depth += conformanceSig->getGenericParams().back()->getDepth() + 1;
  }
    
      /// The number of conformance requirements, cached to avoid constantly
  /// recomputing it on conformance-buffer access.
  const unsigned numConformanceRequirements : 31;
    
        if (info.status == serialization::Status::Valid) {
      assert(info.bytes != 0);
      if (!info.name.empty()) {
        StringRef moduleData = buf.substr(0, info.bytes);
        std::unique_ptr<llvm::MemoryBuffer> bitstream(
          llvm::MemoryBuffer::getMemBuffer(moduleData, info.name, false));
    }
    }
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
    
    {}%
    
    
    {    // Must be 'const' or nothing.
    clang::Qualifiers quals = pointee.getQualifiers();
    bool isConst = quals.hasConst();
    quals.removeConst();
    if (quals.empty()) {
      if (auto record = pointee->getAs<clang::RecordType>()) {
        auto recordDecl = record->getDecl();
        if (recordDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeMutableAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeRelatedAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return forRecord(isConst, record->getDecl());
        }
      } else if (pointee->isVoidType()) {
        if (typedefDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return isConst ? forConstVoid() : forVoid();
        }
      }
    }
  }
    
    class CFPointeeInfo {
  bool IsValid;
  bool IsConst;
  llvm::PointerUnion<const clang::RecordDecl *, const clang::TypedefNameDecl *>
      Decl;
  CFPointeeInfo() = default;
    }
    
    bool Punycode::decodePunycodeUTF8(StringRef InputPunycode,
                                  std::string &OutUTF8) {
  std::vector<uint32_t> OutCodePoints;
  if (!decodePunycode(InputPunycode, OutCodePoints))
    return false;
    }
    
    void GenerateDSYMJobAction::anchor() {}
    
    
    {public:
  Darwin(const Driver &D, const llvm::Triple &Triple) : ToolChain(D, Triple) {}
  ~Darwin() = default;
  std::string sanitizerRuntimeLibName(StringRef Sanitizer,
                                      bool shared = true) const override;
};
    
      virtual void PrintDefaultValueString(std::ostream &os) const {  // NOLINT(*)
    std::string s;
    caffe::NetParameter np;
    // Avoid wasting time making a copy -- just push in out default object's pointer
    np.mutable_layer()->AddAllocated(const_cast<::caffe::LayerParameter *>(&default_value_));
    google::protobuf::TextFormat::PrintToString(np, &s);
    np.mutable_layer()->ReleaseLast();
    os << '\'' << s << '\'';
  }
    
    /*!
 * \brief Moore-Penrose pseudoinverse of the Khatri-Rao product
 *
 * Given input matrices A_1, ..., A_n, of shape (l_1, k), ..., (l_n, k) respectively, the pseudoinverse of the Khatri-Rao product is
 *
 *   pinv(A_1 khatri-rao A_2 khatri-rao ... khatri-rao A_n) =
 *     ((A_1^T A_1) hadamard-dot ... hadamard-dot (A_n^T A_n))
 *     (A_1 khatri-rao ... khatri-rao A_n)^T
 *
 * As the first term of the r.h.s is a square matrix, the result is always of the same shape as the transpose of the Khatri-Rao product of the input matrices. The input argument ts_arr could contain the original input matrices, or transposed ones.
 *
 * \param out result matrix
 * \param ts_arr vector of input matrices
 * \param input_transposed if every input matrices is transposed
 */
template <typename DType>
inline void inv_khatri_rao
  (Tensor<cpu, 2, DType> out,
  const std::vector<Tensor<cpu, 2, DType> > &ts_arr,
  bool input_transposed = false) {
  CHECK_GE(ts_arr.size(), 1) << 'Input tensor array must be non-empty';
    }
    
    Crop the 2nd and 3rd dim of input data, with the corresponding size of h_w or
with width and height of the second input symbol, i.e., with one input, we need h_w to
specify the crop height and width, otherwise the second input symbol's size will be used
)code' ADD_FILELINE)
    
    #include <algorithm>
#include <vector>
#include './spatial_transformer-inl.h'
namespace mxnet {
namespace op {
#if defined(__CUDACC__) && MXNET_USE_CUDNN == 1 && CUDNN_MAJOR >= 5
template<typename DType>
class CuDNNSpatialTransformerOp : public Operator {
 public:
  explicit CuDNNSpatialTransformerOp(SpatialTransformerParam param) {
    this->param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
    if (param_.sampler_type == st::kBilinear) {
      sampler_ = CUDNN_SAMPLER_BILINEAR;
    }
  }
    }
    }
    }