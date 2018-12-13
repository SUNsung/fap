void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
      std::size_t capacity = End - Allocated;
  std::size_t requiredCapacity = capacity + needed;
  do {
    capacity = 2 * capacity + 16;
  } while (capacity < requiredCapacity);
    
      // By default, put the preposition on the argument label.
  bool prepositionOnArgLabel =
    shouldPlacePrepositionOnArgLabel(beforePreposition, preposition,
                                     afterPreposition);
  if (prepositionOnArgLabel)
    ++nameWordRevIter;
    
    const uint16_t swift::unicode::ExtendedGraphemeClusterNoBoundaryRulesMatrix[] = {
% for row in get_extended_grapheme_cluster_rules_matrix(break_table):
  ${row},
% end
};
    
    
    {    SourceLoc noteLoc;
    if (clangNoteLoc.isValid())
      noteLoc = resolveSourceLocation(clangNoteLoc.getManager(),
                                      clangNoteLoc);
    ctx.Diags.diagnose(noteLoc, diagKind, message);
  };
    
      bool isGetter() const {
    return accessorKind == IAMAccessorKind::Getter;
  }
    
    
    
            auto backPropSate = m_combinedTrainingFunction->Forward(arguments, outputs, computeDevice, { m_aggregatedLossFunction }, m_modelParametersNotCoveredByLearners);
        m_prevMinibatchAggregateTrainingLossValue = outputs[m_aggregatedLossFunction];
        if (m_aggregatedEvaluationFunction)
            m_prevMinibatchAggregateEvalCriterionValue = outputs[m_aggregatedEvaluationFunction];
    
    #ifdef _WIN32
#define _SCL_SECURE_NO_WARNINGS
#endif
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
        // return the randomized feature bounds for a time range
    std::pair<size_t, size_t> Bounds(size_t ts, size_t te) const
    {
        size_t tbegin = max(ts, randomizationrange / 2) - randomizationrange / 2;
        size_t tend = min(te + randomizationrange / 2, map.size());
        return std::make_pair<size_t, size_t>(std::move(tbegin), move(tend));
    }
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        // The DiagTimesNode does not require its output value for computing
        // the gradients of its input nodes
        return false;
    }