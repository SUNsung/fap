
        
          /// Returns true if this function is dead, but kept in the module's zombie list.
  bool isZombie() const { return Zombie; }
    
    
    {private:
  /// Map counters to ASTNodes and set them up for profiling the function.
  void assignRegionCounters();
};
    
    /// A mapping from each dynamically-dispatchable method of a class to the
/// SILFunction that implements the method for that class.
/// Note that dead methods are completely removed from the vtable.
class SILVTable : public llvm::ilist_node<SILVTable>,
                  public SILAllocated<SILVTable> {
public:
  // TODO: Entry should include substitutions needed to invoke an overridden
  // generic base class method.
  struct Entry {
    enum Kind : uint8_t {
      /// The vtable entry is for a method defined directly in this class.
      Normal,
      /// The vtable entry is inherited from the superclass.
      Inherited,
      /// The vtable entry is inherited from the superclass, and overridden
      /// in this class.
      Override,
    };
    }
    }
    
        auto header = KeyPathComponentHeader
      ::forStructComponentWithUnresolvedFieldOffset(/*isLet*/ false);
    fields.addInt32(header.getData());
    fields.addInt32(elementOffset.getValue());
    break;
    
    #include 'Initialization.h'
#include 'LValue.h'
#include 'RValue.h'
#include 'SILGen.h'
#include 'SILGenDynamicCast.h'
#include 'Scope.h'
#include 'SwitchEnumBuilder.h'
#include 'swift/AST/ASTMangler.h'
#include 'swift/AST/GenericEnvironment.h'
#include 'swift/AST/Module.h'
#include 'swift/AST/NameLookup.h'
#include 'swift/AST/ProtocolConformance.h'
#include 'swift/Basic/ProfileCounter.h'
#include 'swift/SIL/FormalLinkage.h'
#include 'swift/SIL/PrettyStackTrace.h'
#include 'swift/SIL/SILArgument.h'
#include 'swift/SIL/SILDebuggerClient.h'
#include 'swift/SIL/SILType.h'
#include 'swift/SIL/TypeLowering.h'
#include 'llvm/ADT/SmallString.h'
#include <iterator>
    
    llvm::Expected<CustomAttr *>
AttachedFunctionBuilderRequest::evaluate(Evaluator &evaluator,
                                         ValueDecl *decl) const {
  ASTContext &ctx = decl->getASTContext();
  auto dc = decl->getDeclContext();
  for (auto attr : decl->getAttrs().getAttributes<CustomAttr>()) {
    auto mutableAttr = const_cast<CustomAttr *>(attr);
    // Figure out which nominal declaration this custom attribute refers to.
    auto nominal = evaluateOrDefault(ctx.evaluator,
                                     CustomAttrNominalRequest{mutableAttr, dc},
                                     nullptr);
    }
    }
    
          // We should already have enough type information to know the offset
      // of this capture in the context.
      unsigned CaptureOffset = Builder.getFieldOffset(Index);
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::Negate(const ComputationNodePtr a, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<NegateNode<ElemType>>(net.GetDeviceId(), nodeName), { a });
}
    
    
    {    // some std::string helpers useful for ToString() operations of nested structures
    // TODO: move these out from this header into some more general place (I had to move them here because otherwise CNTKEval failed to compile)
    static std::wstring IndentString(std::wstring s, size_t indent)
    {
        const std::wstring prefix(indent, L' ');
        size_t pos = 0;
        for (;;)
        {
            s.insert(pos, prefix);
            pos = s.find(L'\n', pos + 2);
            if (pos == std::wstring::npos)
                return s;
            pos++;
        }
    }
    static std::wstring NestString(std::wstring s, wchar_t open, bool newline, wchar_t close)
    {
        std::wstring result = IndentString(s, 2);
        if (newline) // have a new line after the open symbol
            result = L' \n' + result + L'\n ';
        else
            result.append(L'  ');
        result.front() = open;
        result.back() = close;
        return result;
    }
};
    
            // parameters at the last model aggregation point
        std::map<std::wstring, std::shared_ptr<Matrix<ElemType>>> m_prevParameters;
        std::map<std::wstring, std::shared_ptr<Matrix<ElemType>>> m_blockLevelSmoothedGradient;
    
        // write a DBN matrix object, optionally applying a function
    auto PutMatrixConverted = [&](const Matrix<ElemType> * m, size_t maxelem, const char * name, float(*f)(float))
    {
        PutTag('BMAT');
        PutString(name);
        size_t numRows = m->GetNumRows();
        size_t numCols = m->GetNumCols();
    }
    
    
    {#ifdef COMING_SOON
    ComputationNodePtr CRF(const ComputationNodePtr label, const ComputationNodePtr postDepScore, const ComputationNodePtr transition_score, const std::wstring nodeName = L'');
#endif
    ComputationNodePtr Abs(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Acos(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Asin(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Asinh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Atan(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Atanh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Less(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Equal(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Greater(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr GreaterEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr NotEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr LessEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr ClassCrossEntropyWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr input_weight, const ComputationNodePtr cls_log_post_prob, const std::wstring nodeName = L'');
    ComputationNodePtr Clip(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName = L'');
    ComputationNodePtr Cos(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr CosDistance(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Cosh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr CrossEntropy(const ComputationNodePtr label, const ComputationNodePtr prediction, const std::wstring nodeName = L'');
    ComputationNodePtr CrossEntropyWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const std::wstring nodeName = L'');
    ComputationNodePtr ForwardBackward(const ComputationNodePtr graph, const ComputationNodePtr features, int blankTokenId, int delayConstraint, const std::wstring nodeName = L'');
    ComputationNodePtr DiagTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Diagonal(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Dropout(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr DummyCriterion(const ComputationNodePtr objectives, const ComputationNodePtr derivatives, const ComputationNodePtr prediction, const std::wstring nodeName = L'');
    ComputationNodePtr EditDistanceError(const ComputationNodePtr a, const ComputationNodePtr b, float subPen, float delPen, float insPen, bool squashInputs, vector<size_t> tokensToIgnore, const std::wstring nodeName = L'');
    ComputationNodePtr StopGradient(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr ElementTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr DynamicAxis(const ComputationNodePtr a, const std::wstring& nodeName = L'');
    ComputationNodePtr ClassificationError(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Exp(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Floor(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr FutureValue(const ComputationNodePtr a, const float initHiddenActivity, const size_t row_size, size_t timeStep, const std::wstring nodeName = L'');
#ifdef COMING_SOON
    ComputationNodePtr GMMLogLikelihood(const ComputationNodePtr unnormedPrior, const ComputationNodePtr mean, const ComputationNodePtr logStddev, const ComputationNodePtr feature, const std::wstring nodeName = L'');
#endif
    ComputationNodePtr Hardmax(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr If(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName = L'');
    ComputationNodePtr InvStdDev(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr LambdaRank(const ComputationNodePtr gain, const ComputationNodePtr prediction, const ComputationNodePtr queryId, const std::wstring nodeName = L'');
    ComputationNodePtr NDCG1Eval(const ComputationNodePtr gain, const ComputationNodePtr prediction, const ComputationNodePtr queryId, const std::wstring nodeName = L'');
    ComputationNodePtr KhatriRaoProduct(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Log(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr LogPlus(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr LogSoftmax(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Logistic(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName = L'');
    ComputationNodePtr Logistic(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr LookupTable(const ComputationNodePtr dictionary, const ComputationNodePtr input, const std::wstring nodeName = L'');
    ComputationNodePtr MatrixL1Reg(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr MatrixL2Reg(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Mean(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Minus(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Negate(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr NoiseContrastiveEstimation(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr input_weight, const ComputationNodePtr input_bias, const std::wstring nodeName = L'', NCEEvalMode mode = NCEEvalMode::None);
    ComputationNodePtr Pass(const ComputationNodePtr a, const std::wstring& nodeName = L'');
    ComputationNodePtr LabelsToGraph(const ComputationNodePtr a, const std::wstring& nodeName = L'');
    ComputationNodePtr PastValue(const ComputationNodePtr a, const float initHiddenActivity, const size_t row_size, size_t timeStep, const std::wstring nodeName = L'');
    ComputationNodePtr PerDimMeanVarDeNormalization(const ComputationNodePtr feature, const ComputationNodePtr mean, const ComputationNodePtr InvStdDev, const std::wstring nodeName = L'');
    ComputationNodePtr PerDimMeanVarNormalization(const ComputationNodePtr feature, const ComputationNodePtr mean, const ComputationNodePtr InvStdDev, const std::wstring nodeName = L'');
    ComputationNodePtr Plus(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Reciprocal(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr RandomSample(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr RandomSampleInclusionFrequency(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr RectifiedLinear(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Reshape(const ComputationNodePtr a, const TensorShape& imageLayout, const std::wstring nodeName = L'');
    ComputationNodePtr RowRepeat(const ComputationNodePtr a, const size_t num_repeat, const std::wstring nodeName = L'');
    ComputationNodePtr RowSlice(const ComputationNodePtr a, const size_t start_index, const size_t num_rows, const std::wstring nodeName = L'');
    ComputationNodePtr RowStack(const std::vector<ComputationNodePtr> pinputs, const std::wstring nodeName = L'');
#ifdef COMING_SOON
    ComputationNodePtr SequenceDecoder(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr pairscore, const std::wstring nodeName = L'');
#endif
    ComputationNodePtr SequenceWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr loglikelihood, const std::wstring nodeName = L'');
    ComputationNodePtr LatticeSequenceWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr loglikelihood, const ComputationNodePtr lattice, const std::wstring& symListPath, const std::wstring& phonePath, const std::wstring& stateListPath, const std::wstring& transProbPath, const std::wstring& LatticeSequenceWithSoftmax, float hSmoothingWeight, float frameDropThresh, bool doReferenceAlign, bool seqGammarUsesMBR, float seqGammarAMF, float seqGammarLMF, float seqGammarBMMIFactor, float seqGammarWordPen, const std::wstring nodeName = L'');
    ComputationNodePtr Sigmoid(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Sin(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Sinh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Softmax(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Sqrt(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr SquareError(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Sum(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Tan(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Tanh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr StraightThrough(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Times(const ComputationNodePtr a, const ComputationNodePtr b, size_t outputRank = 1, const std::wstring nodeName = L'');
    ComputationNodePtr TransposeDimensions(const ComputationNodePtr matrix, int dim1, int dim2, const std::wstring nodeName = L'');
    ComputationNodePtr TransposeTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr QuantizedTimes(const ComputationNodePtr a, const ComputationNodePtr b, size_t bitSmoothingA = 1, size_t bitSmoothingB = 1, size_t outputRank = 1, const std::wstring nodeName = L'');
#if 1 // legacy
    ComputationNodePtr LegacyReshape(const ComputationNodePtr a, const size_t num_rows, const TensorShape& imageLayout, const std::wstring nodeName = L'');
#endif
};
    
    
    {    void WaitAsyncBuffer() override { }
};
    
        // Threshold size in bytes for single gradient to do packing
    size_t m_packThresholdSizeInBytes;
    
      virtual ~DHTResponseMessage();
    
      Time serializedTime_;
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
      DHTTaskExecutor immediateTaskQueue_;
    
      Status NewDirectory(const std::string& dir,
                      std::unique_ptr<Directory>* result) override {
    auto status_and_enc_path = EncodePathWithNewBasename(dir);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::NewDirectory(status_and_enc_path.second, result);
  }
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    setCompression
 * Signature: (JB)V
 */
void Java_org_rocksdb_CompactionOptions_setCompression(
    JNIEnv*, jclass, jlong jhandle, jbyte jcompression_type_value) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  compact_opts->compression =
      rocksdb::CompressionTypeJni::toCppCompressionType(
          jcompression_type_value);
}
    
    /*
 * Class:     org_rocksdb_ColumnFamilyOptions
 * Method:    setCompressionPerLevel
 * Signature: (J[B)V
 */
void Java_org_rocksdb_ColumnFamilyOptions_setCompressionPerLevel(
    JNIEnv* env, jobject, jlong jhandle, jbyteArray jcompressionLevels) {
  auto* options = reinterpret_cast<rocksdb::ColumnFamilyOptions*>(jhandle);
  auto uptr_compression_levels =
      rocksdb_compression_vector_helper(env, jcompressionLevels);
  if (!uptr_compression_levels) {
    // exception occurred
    return;
  }
  options->compression_per_level = *(uptr_compression_levels.get());
}
    
      jbyte* value = new jbyte[jval_len];
  env->GetByteArrayRegion(jval, jval_off, jval_len, value);
  if (env->ExceptionCheck()) {
    // exception thrown: ArrayIndexOutOfBoundsException
    delete[] value;
    delete[] key;
    return false;
  }