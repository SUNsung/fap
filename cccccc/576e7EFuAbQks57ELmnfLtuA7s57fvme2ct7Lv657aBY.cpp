
        
          Storage(GenericSignature *genericSig,
          ArrayRef<Type> replacementTypes,
          ArrayRef<ProtocolConformanceRef> conformances);
    
      bool isRecord() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::RecordDecl *>();
  }
  const clang::RecordDecl *getRecord() const {
    assert(isRecord());
    return Decl.get<const clang::RecordDecl *>();
  }
    
        void emitDiagnosticMessage(clang::FullSourceLoc Loc,
                               clang::PresumedLoc PLoc,
                               clang::DiagnosticsEngine::Level Level,
                               StringRef Message,
                               ArrayRef<clang::CharSourceRange> Ranges,
                               clang::DiagOrStoredDiag Info) override {
      if (isInSwiftBuffers(Loc)) {
        // FIXME: Ideally, we'd report non-suppressed diagnostics on synthetic
        // buffers, printing their names (eg. <swift-imported-modules>:...) but
        // this risks printing _excerpts_ of those buffers to stderr too; at
        // present the synthetic buffers are 'large blocks of null bytes' which
        // we definitely don't want to print out. So until we have some clever
        // way to print the name but suppress printing excerpts, we just replace
        // the Loc with an invalid one here, which suppresses both.
        Loc = clang::FullSourceLoc();
        if (shouldSuppressDiagInSwiftBuffers(Info))
          return;
      }
      callback(Loc, Level, Message);
    }
    
    
    {
    {} // namespace test
} // namespace c10d

    
    namespace caffe2 {
    }
    
    REGISTER_CPU_OPERATOR(
    MergeSingleMapFeatureTensorsGradient,
    MergeSingleListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleMapFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with map features into '
        'multiple single-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_presence', '.presence')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_grad', '.values_grad');
REGISTER_GRADIENT(
    MergeSingleMapFeatureTensors,
    GetMergeSingleMapFeatureTensorsGradient);
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    REGISTER_CUDA_OPERATOR(LC1D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC1DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    				cmderOptions.cmderCfgRoot = cmderCfgRoot;
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};
    
    
    {
    {    ++right;
    SPAN_ASSERT_TRUE(right > left, status_);
    SPAN_ASSERT_TRUE(left < right, status_);
    SPAN_ASSERT_TRUE(left <= right, status_);
  }
};