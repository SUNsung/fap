
        
        /*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT0)(const OutputGrad& out_grad,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param out_value the value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT1)(const OutputGrad& out_grad,
                                    const OutputValue& out_value,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes input value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param in_data0 the input value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT2)(const OutputGrad& out_grad,
                                    const Input0& in_data0,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Binary function that takes lhs, rhs and save result to ret.
 *  The result container is pre-allocated with the correct shape.
 * \param lhs The left operand
 * \param rhs The right operand
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryFunction)(const TBlob& lhs,
                               const TBlob& rhs,
                               const EnvArguments& env,
                               TBlob* ret,
                               OpReqType req,
                               RunContext ctx);
    
    template<>
void SetDataGradToBlob<mshadow::cpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_cpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_cpu_diff(data_ptr);
}
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.h
 * \brief conversion between tensor and caffeBlob
 * \author Haoran Wang
*/
#ifndef PLUGIN_CAFFE_CAFFE_BLOB_H_
#define PLUGIN_CAFFE_CAFFE_BLOB_H_
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
      std::vector<std::string> ListOutputs() const override {
    if (param_.num_out > 1) {
      std::vector<std::string> ret;
      for (int i = 0; i < param_.num_out; ++i)
        ret.push_back('output' + std::to_string(i));
      return ret;
    } else {
      return {'output'};
    }
  }
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
    /*!
 * \brief tblob batch
 *
 * data are stored in tblob before going into NDArray
 */
struct TBlobBatch {
 public:
  /*! \brief unique id for instance, can be NULL, sometimes is useful */
  unsigned *inst_index;
  /*! \brief number of instance */
  mshadow::index_t batch_size;
  /*! \brief number of padding elements in this batch,
       this is used to indicate the last elements in the batch are only padded up to match the batch, and should be discarded */
  mshadow::index_t num_batch_padd;
  /*! \brief content of dense data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
  /*! \brief constructor */
  TBlobBatch(void) {
    inst_index = NULL;
    batch_size = 0; num_batch_padd = 0;
  }
  /*! \brief destructor */
  ~TBlobBatch() {
    delete[] inst_index;
  }
};  // struct TBlobBatch
    
            template <typename ElementType>
        static Microsoft::MSR::CNTK::TensorView<ElementType>* GetWritableTensorView(const NDArrayViewPtr& arrayView);
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
        double ElapsedSeconds();
    
    
    {            // reshape Input(2)
            Input(2)->SetDims(TensorShape(dimsA), false);
            fprintf(stderr, '\n%ls %ls operation: For legacy compatibility, the sample layout of third input (%ls %ls operation) was patched to [%s] (from [%s])\n',
                NodeName().c_str(), OperationName().c_str(), Input(2)->NodeName().c_str(), Input(2)->OperationName().c_str(), string(Input(2)->GetSampleLayout()).c_str(), dimsCstring.c_str());
        }
    
        virtual void Load(File& fstream, size_t modelVersion) override
    {
        Base::Load(fstream, modelVersion);
        fstream >> m_subPen;
        fstream >> m_delPen;
        fstream >> m_insPen;
        fstream >> m_squashInputs;
        fstream >> m_tokensToIgnore;
    }
    
    
//---------------------------------------------------------------------
//
//   dump    Output the compiled form of the pattern.
//           Debugging function only.
//
//---------------------------------------------------------------------
void   RegexPattern::dumpOp(int32_t index) const {
    (void)index;  // Suppress warnings in non-debug build.
#if defined(REGEX_DEBUG)
    static const char * const opNames[] = {URX_OPCODE_NAMES};
    int32_t op          = fCompiledPat->elementAti(index);
    int32_t val         = URX_VAL(op);
    int32_t type        = URX_TYPE(op);
    int32_t pinnedType  = type;
    if ((uint32_t)pinnedType >= UPRV_LENGTHOF(opNames)) {
        pinnedType = 0;
    }
    }
    
    UCollationResult
RuleBasedCollator::doCompare(const uint8_t *left, int32_t leftLength,
                             const uint8_t *right, int32_t rightLength,
                             UErrorCode &errorCode) const {
    // U_FAILURE(errorCode) checked by caller.
    if(left == right && leftLength == rightLength) {
        return UCOL_EQUAL;
    }
    }
    
    U_NAMESPACE_END
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
                // In strict mode, this run of whitespace
            // may have been at the end.
            if (p >= literal.length()) {
                break;
            }
        }
        if (t >= text.length() || literal.charAt(p) != text.charAt(t)) {
            // Ran out of text, or found a non-matching character:
            // OK in lenient mode, an error in strict mode.
            if (whitespaceLenient) {
                if (t == textOffset && text.charAt(t) == 0x2e &&
                        isAfterNonNumericField(pattern, patternOffset)) {
                    // Lenient mode and the literal input text begins with a '.' and
                    // we are after a non-numeric field: We skip the '.'
                    ++t;
                    continue;  // Do not update p.
                }
                // if it is actual whitespace and we're whitespace lenient it's OK
    }
    
    ExitConstrDeleteAll: // Remove all sets and return error
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
    
    UOBJECT_DEFINE_RTTI_IMPLEMENTATION(CollationKey)
    
    UOBJECT_DEFINE_RTTI_IMPLEMENTATION(StringMatcher)
    
    //eof

    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }
    
    // -----------------------------------------------------------------------------
// ES6 section 19.3 Boolean Objects
    
    
    {  void CallOrConstructWithArrayLike(TNode<Object> target,
                                    SloppyTNode<Object> new_target,
                                    TNode<Object> arguments_list,
                                    TNode<Context> context);
  void CallOrConstructDoubleVarargs(TNode<Object> target,
                                    SloppyTNode<Object> new_target,
                                    TNode<FixedDoubleArray> elements,
                                    TNode<Int32T> length,
                                    TNode<Int32T> args_count,
                                    TNode<Context> context, TNode<Int32T> kind);
  void CallOrConstructWithSpread(TNode<Object> target, TNode<Object> new_target,
                                 TNode<Object> spread, TNode<Int32T> args_count,
                                 TNode<Context> context);
};
    
      CodeStubArguments args(this, ChangeInt32ToIntPtr(argc));
  BranchIfToBooleanIsTrue(args.AtIndex(0), &out, &runtime);
  BIND(&out);
  args.PopAndReturn(UndefinedConstant());
    
        // Check if {num} is a HeapNumber.
    Label if_numisheapnumber(this),
        if_numisnotheapnumber(this, Label::kDeferred);
    Branch(IsHeapNumber(num), &if_numisheapnumber, &if_numisnotheapnumber);
    
    namespace v8 {
namespace internal {
    }
    }
    
    
    {  // This shouldn't happen, we've already validated the type.
  BIND(&other);
  Unreachable();
}