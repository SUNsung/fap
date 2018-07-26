  virtual bool lookupAdditions(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    void SyntaxASTMap::dumpSyntaxMap() const {
  for (const auto &SyntaxAndSemaNode : SyntaxMap) {
    auto SyntaxNode = SyntaxAndSemaNode.getFirst();
    auto SemanticNode = SyntaxAndSemaNode.getSecond();
    }
    }
    
    namespace swift {
class DependencyTracker;
class ModuleDecl;
class SourceFile;
    }
    
    /// Get a parsed documentation comment for the declaration, if there is one.
Optional<DocComment *>getSingleDocComment(swift::markup::MarkupContext &Context,
                                          const Decl *D);
    
      /// Indicates whether diagnostic passes should be skipped.
  bool SkipDiagnosticPasses = false;
    
    namespace swift {
    }
    
      /// Returns true if the LSBase has a non-empty projection path.
  bool hasEmptyProjectionPath() const { return !Path.getValue().size(); }
    
            void DoneWithCurrentMinibatch()
        {
            for (auto& x : m_cachedGradient)
            {
                const wstring& name  = x.first;
                auto& accumulategrad = m_cachedGradient.GetInputMatrix<ElemType>(name);
    }
    }
    
    template<> inline
dnnError_t
    dnnBatchNormalizationCreateBackwardScaleShift<float>(
        dnnPrimitive_t* pBatchNormalization,
        dnnPrimitiveAttributes_t attributes,
        const dnnLayout_t dataLayout,
        float eps)
{
    return dnnBatchNormalizationCreateBackwardScaleShift_F32(
        pBatchNormalization, attributes, dataLayout, eps);
}
template<> inline
dnnError_t
    dnnBatchNormalizationCreateBackwardScaleShift<double>(
        dnnPrimitive_t* pBatchNormalization,
        dnnPrimitiveAttributes_t attributes,
        const dnnLayout_t dataLayout,
        double eps)
{
    return dnnBatchNormalizationCreateBackwardScaleShift_F64(
        pBatchNormalization, attributes, dataLayout, eps);
}
    
        Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mBdense, transposeB, beta, mCdense);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAsparse, transposeA, mBsparse, transposeB, beta, mCsparse);
    mCsparse.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);
    BOOST_CHECK(mCsparse.IsEqualTo(mCdense, c_epsilonFloatE4));
    
    // helper to remove all existing Output nodes and replace them by a new given set
static void PatchOutputNodes(const ComputationNetworkPtr& net, const ConfigArray& outputNodeNames, vector<wstring>& outputNodeNamesVector)
{
    // clear out current list of outputNodes
    while (!net->OutputNodes().empty())
        net->RemoveFromNodeGroup(L'output', net->OutputNodes().back());
    // and insert the desired nodes instead
    for (wstring name : outputNodeNames)
    {
        if (!net->NodeNameExists(name))
        {
            fprintf(stderr, 'PatchOutputNodes: No node named '%ls'; skipping\n', name.c_str());
            continue;
        }
        outputNodeNamesVector.push_back (name);
        let& node = net->GetNodeFromName(name);
        net->AddToNodeGroup(L'output', node);
    }
}
    
        // emit a trace message for the train loss value
    // The value is printed in percent.
    static void TraceTrainLoss(double err)
    {
        auto& us = GetStaticInstance();
    }
    
    // Returns the divisor for a conflict-free transpose.
template<int X, int NumBanks = 32> struct sBankConflictDivisor {
	enum { value = 
		(1 & X) ? 0 : 
		(sIsPow2<X>::value ? NumBanks :
		(1<< sNumFactorsOf2<X>::value)) }; 
	enum { log_value = sLogPow2<value>::value };
};
    
    /*!
 * \brief Rcpp NDArray object of MXNet.
 *  We use lightweight Rcpp external ptr and S3 type object.
 *  For efficiently expose the object to R side.
 */
class NDArray  {
 public:
  /*! \return typename from R side. */
  inline static const char* TypeName() {
    return 'MXNDArray';
  }
  /*! \brief The returning type of new NDArray */
  typedef Rcpp::XPtr<NDBlob> RObjectType;
  /*!
   * \brief copy constructor
   * \param other Another NDArray to be copied from.
   */
  NDArray(const NDArray& other)
      : ptr_(other.ptr_) {}
  /*!
   * \brief constructor from R SEXP
   * \param src The source SEXP
   */
  explicit NDArray(SEXP src)
      : ptr_(src) {}
  /*!
   * \brief Constructor
   * \param handle The handle
   */
  NDArray(NDArrayHandle handle, bool writable)
      : ptr_(new NDBlob(handle, writable)) {
    ptr_.attr('class') = 'MXNDArray';
  }
  /*! \return RObject representation */
  inline RObjectType RObject()  const {
    return ptr_;
  }
  /*!
   * \brief Create a new moved NDArray
   */
  inline NDArray Move() const {
    RCHECK(ptr_->writable && !ptr_->moved)
        << 'Passing a read only NDArray to mutate function';
    ptr_->moved = true;
    return NDArray(ptr_->handle, ptr_->writable);
  }
  // operator overloading
  inline NDArray& operator=(const NDArray& other) {
    ptr_ = other.ptr_;
    return *this;
  }
  inline NDBlob* operator->() {
    return ptr_.get();
  }
  inline const NDBlob* operator->() const {
    return ptr_.get();
  }
  /*!
   * \param src The source array.
   * \return The dimension of the array
   */
  Rcpp::Dimension dim() const;
  /*!
   * \brief Return a clone of NDArray.
   *  Do not expose this to R side.
   * \return src The source NDArray.
   * \return a new cloned NDArray.
   */
  NDArray Clone() const;
  /*!
   * \return The context of NDArray.
   */
  Context ctx() const;
  /*!
   * \brief Return a slice of NDArray.
   * \param begin The begin of the slice.
   * \param end The end of the slice.
   * \return a sliced NDArray.
   */
  NDArray Slice(mx_uint begin, mx_uint end) const;
  /*!
   * \return The number of elements in the array
   */
  size_t Size() const;
  /*!
   * \return convert the NDArray to R's Array
   */
  Rcpp::NumericVector AsNumericVector() const;
  /*!
   * \brief Create NDArray from RObject
   * \param src Source object.
   * \return The created NDArray
   */
  inline static NDArray FromRObject(const Rcpp::RObject& src) {
    return NDArray(src);
  }
  /*!
   * \brief Create RObject NDArray.
   * \param handle The source handle.
   * \param writable Whether the NDArray is writable.
   * \return The created NDArray
   */
  inline static RObjectType RObject(NDArrayHandle handle, bool writable) {
    return NDArray(handle, writable).RObject();
  }
  /*!
   * \brief Move the NDArray.
   * \param src The source RObject.
   * \return The moved NDArray
   */
  inline static RObjectType Move(const Rcpp::RObject& src) {
    return NDArray(src).Move().RObject();
  }
  /*!
   * \brief function to create an empty array
   * \param shape The shape of the Array
   * \return a new created MX.NDArray
   */
  static RObjectType Empty(const Rcpp::Dimension& shape,
                           const Context::RObjectType& ctx);
  /*!
   * \brief Create a MX.NDArray by copy data from src R array.
   * \param src the source R array
   * \param ctx The context where
   */
  static RObjectType Array(const Rcpp::RObject& src,
                           const Context::RObjectType& ctx);
  /*!
   * \brief internal function to copy NDArray from to to
   *  Do not expose this to R side.
   * \param from The source NDArray.
   * \param to The target NDArray.
   */
  static void CopyFromTo(const NDArray& from, NDArray *to);
  /*!
   * \brief Load a list of ndarray from the file.
   * \param filename the name of the file.
   * \return R List of NDArrays
   */
  static Rcpp::List Load(const std::string& filename);
  /*!
   * \brief Save a list of NDArray to file.
   * \param data R List of NDArrays
   * \param filename The name of the file to be saved.
   */
  static void Save(const Rcpp::List& data,
                   const std::string& filename);
  /*!
   * \brief Extract NDArrayHandles from List.
   * \param array_list The NDArray list.
   * \param list_name The name of the list, used for error message.
   * \param allow_null If set to True, allow null in the list.
   * \param move_old_array If set to true, move the old ndarrays
   */
  static std::vector<NDArrayHandle> GetHandles(const Rcpp::List& array_list,
                                               const std::string& list_name,
                                               bool allow_null = false,
                                               bool move_old_array = false);
  /*! \brief static function to initialize the Rcpp functions */
  static void InitRcppModule();
    }
    
    
    {  MSHADOW_TYPE_SWITCH(in_data.type_flag_, DType, {
    Kernel<FillBinBoundsKernel, cpu>::Launch(
      s, bin_cnt+1, out_bins.dptr<DType>(), bin_cnt, min, max);
    Kernel<ComputeBinKernel, cpu>::Launch(
      s, in_data.Size(), in_data.dptr<DType>(), out_bins.dptr<DType>(), bin_indices.dptr_,
      bin_cnt, min, max);
  });
  MSHADOW_TYPE_SWITCH(out_data.type_flag_, CType, {
    Kernel<set_zero, cpu>::Launch(s, bin_cnt, out_data.dptr<CType>());
    ComputeHistogram(bin_indices.dptr_, out_data.dptr<CType>(), in_data.Size());
  });
}
    
    #if MXNET_USE_MKLDNN == 1
static void ConcatGradComputeExCPU(const nnvm::NodeAttrs& attrs,
                                   const OpContext& ctx,
                                   const std::vector<NDArray>& inputs,
                                   const std::vector<OpReqType>& req,
                                   const std::vector<NDArray>& outputs) {
  if (SupportMKLDNNConcat(inputs)) {
    MKLDNN_OPCHECK_INIT(true, outputs.size(), inputs, outputs);
    MKLDNNConcatBackward(attrs, ctx, inputs, req, outputs);
    MKLDNN_OPCHECK_RUN(ConcatGradCompute<cpu>, attrs, ctx, inputs, req, outputs);
    return;
  }
  FallBackCompute(ConcatGradCompute<cpu>, attrs, ctx, inputs, req, outputs);
}
#endif
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file image_aug_default.cc
 * \brief Default augmenter.
 */
#include <mxnet/base.h>
#include <dmlc/optional.h>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>
#include './image_augmenter.h'
#include '../common/utils.h'
    
    bool ElementWiseSumShape(const nnvm::NodeAttrs& attrs,
                         std::vector<TShape> *in_attrs,
                         std::vector<TShape> *out_attrs) {
  CHECK_EQ(out_attrs->size(), 1);
  return ElemwiseAttr<TShape, shape_is_none, shape_assign, true, shape_string>(
    attrs, in_attrs, out_attrs, TShape());
}
    
    /*
 * \brief Impl of dot(dns, csr) = csr
 */
inline void DotDnsCsrCsrImpl(const OpContext& ctx, const cpu& cpu_dev,
                             const TBlob& lhs, const NDArray& rhs,
                             const OpReqType req, NDArray* ret) {
  if (kNullOp == req) return;
    }
    
    template<typename ParamType>
inline bool InitShape(const nnvm::NodeAttrs& attrs,
                      std::vector<TShape> *in_attrs,
                      std::vector<TShape> *out_attrs) {
  const ParamType& param = nnvm::get<ParamType>(attrs.parsed);
  CHECK_EQ(in_attrs->size(), 0U);
  CHECK_EQ(out_attrs->size(), 1U);
  if ((*out_attrs)[0].ndim() != 0 && param.shape.ndim() == 0) return true;
  SHAPE_ASSIGN_CHECK(*out_attrs, 0, param.shape);
  return true;
}