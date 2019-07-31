
        
          /// Applies batch normalization on the `input` using the given `mean` and
  /// `variance` statistics.
  Tensor pure_forward(
      const Tensor& input,
      const Tensor& mean,
      const Tensor& variance);
    
    
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    class GetMergeSingleMapFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
    OPERATOR_SCHEMA(Col2Im).NumInputs(2).NumOutputs(1);
    
        std::unique_ptr<PlanStageStats> getStats();
    
    class UpdateDate2 : public Base {
public:
    void run() {
        BSONObj o;
        {
            BSONObjBuilder b;
            b.appendTimestamp('a');
            b.appendTimestamp('b');
            b.append('_id', 1);
            o = b.obj();
        }
    }
    }
    
    U_NAMESPACE_END
    
    U_CAPI int32_t U_EXPORT2
uhash_hashScriptSet(const UElement key) {
    icu::ScriptSet *s = static_cast<icu::ScriptSet *>(key.pointer);
    return s->hashCode();
}
    
    int32_t SearchIterator::next(UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        int32_t offset = getOffset();
        int32_t matchindex  = m_search_->matchedIndex;
        int32_t     matchlength = m_search_->matchedLength;
        m_search_->reset = FALSE;
        if (m_search_->isForwardSearching == TRUE) {
            int32_t textlength = m_search_->textLength;
            if (offset == textlength || matchindex == textlength || 
                (matchindex != USEARCH_DONE && 
                matchindex + matchlength >= textlength)) {
                // not enough characters to match
                setMatchNotFound();
                return USEARCH_DONE; 
            }
        }
        else {
            // switching direction. 
            // if matchedIndex == USEARCH_DONE, it means that either a 
            // setOffset has been called or that previous ran off the text
            // string. the iterator would have been set to offset 0 if a 
            // match is not found.
            m_search_->isForwardSearching = TRUE;
            if (m_search_->matchedIndex != USEARCH_DONE) {
                // there's no need to set the collation element iterator
                // the next call to next will set the offset.
                return matchindex;
            }
        }
    }
    }
    
    U_NAMESPACE_BEGIN