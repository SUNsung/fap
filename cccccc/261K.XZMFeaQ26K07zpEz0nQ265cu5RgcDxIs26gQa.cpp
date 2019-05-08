
        
        
    {    TrainerPtr CreateTrainer(const FunctionPtr& model, const FunctionPtr& lossFunction, const FunctionPtr& evaluationFunction, const std::vector<LearnerPtr>& parameterLearners,
                             const std::vector<ProgressWriterPtr>& progressWriters)
    {
        return MakeSharedObject<Trainer>(model, lossFunction, evaluationFunction, parameterLearners, progressWriters);
    }
}

    
        auto& pMBLayout = minibatch.begin()->second.pMBLayout;
    // This is only allowed for old readers, which support a single layout for all inputs.
    for (const auto& iter : minibatch)
    {
        assert(iter.second.pMBLayout == pMBLayout);
        // TODO: This should be a runtime check, not an assert() that only runs in Debug.
        UNUSED(iter);
    }
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }
    
    template void Microsoft::MSR::CNTK::UpdateRunningAverage<float>(ComputationNode<float>& newInput,
                                                                TensorView<float>& runningAverage,
                                                                size_t& runningCount);
template void Microsoft::MSR::CNTK::UpdateRunningAverage<double>(ComputationNode<double>& newInput,
                                                                 TensorView<double>& runningAverage,
                                                                 size_t& runningCount);
template void Microsoft::MSR::CNTK::UpdateRunningAverage<half>(ComputationNode<half>& newInput,
                                                                 TensorView<half>& runningAverage,
                                                                 size_t& runningCount);