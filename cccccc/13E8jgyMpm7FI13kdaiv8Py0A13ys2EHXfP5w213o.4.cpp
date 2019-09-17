
        
        #ifndef GTEST_INCLUDE_GTEST_GTEST_MESSAGE_H_
#define GTEST_INCLUDE_GTEST_GTEST_MESSAGE_H_
    
    
// Helper function for *_STREQ on wide strings.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTREQ(const char* expected_expression,
                                          const char* actual_expression,
                                          const wchar_t* expected,
                                          const wchar_t* actual);
    
    public:
    /**
     * Delegates invocation of the Task to this executor
     *
     * Execution of the Task can happen in one of three contexts:
     * * By default, on an execution context maintained by the OutOfLineExecutor (i.e. a thread).
     * * During shutdown, on the execution context of shutdown/join/dtor for the OutOfLineExecutor.
     * * Post-shutdown, on the execution context of the calling code.
     *
     * The Task will be passed a Status schedStatus that is either:
     * * schedStatus.isOK() if the function is run in an out-of-line context
     * * isCancelationError(schedStatus.code()) if the function is run in an inline context
     *
     * All of this is to say: CHECK YOUR STATUS.
     */
    virtual void schedule(Task func) = 0;
    
    void TemporaryKVRecordStore::deleteTemporaryTable(OperationContext* opCtx) {
    // Need at least Global IS before calling into the storage engine, to protect against it being
    // destructed while we're using it.
    invariant(opCtx->lockState()->isReadLocked());
    }
    
    #include 'mongo/db/jsobj.h'
#include 'mongo/db/service_context.h'
#include 'mongo/util/log.h'
    
        fStack = new UVector64(status);
    if (fStack == NULL) {
        status = fDeferredStatus = U_MEMORY_ALLOCATION_ERROR;
        return;
    }
    
    Transliterator* RemoveTransliterator::clone(void) const {
    Transliterator* result = new RemoveTransliterator();
    if (result != NULL && getFilter() != 0) {
        result->adoptFilter((UnicodeFilter*)(getFilter()->clone()));
    }
    return result;
}
    
    public:
    
    
    {    // ZERO_LEVEL: Fill the remainder of dest with 00 bytes.
    state[0] = (uint32_t)Collation::ZERO_LEVEL;
    state[1] = 0;
    int32_t length = sink.NumberOfBytesAppended();
    int32_t i = length;
    while(i < count) { dest[i++] = 0; }
    return length;
}
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_BEGIN
    
    // SharedBreakIterator encapsulates a shared BreakIterator. Because
// BreakIterator has mutable semantics, clients must ensure that all uses
// of a particular shared BreakIterator is protected by the same mutex
// ensuring that only one thread at a time gets access to that shared
// BreakIterator. Clients can accomplish this by creating a mutex for all
// uses of break iterator within a particular class. Then objects of that
// class may then freely share break iterators among themselves. However,
// these shared break iterators must never be exposed outside of that class.
class U_I18N_API SharedBreakIterator : public SharedObject {
public:
    SharedBreakIterator(BreakIterator *biToAdopt);
    virtual ~SharedBreakIterator();
    }
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::CrossEntropyWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<CrossEntropyWithSoftmaxNode<ElemType>>(net.GetDeviceId(), nodeName), { label, prediction });
}
    
        // CallStringParse - parse the string description of a call sequence
    // token - [in] string description of the call
    // nameFunction - [out] name of the function being called
    // params - [out] parameters to the function, set to empty string if no parameters
    // returns: the node (if it exists) that matches this function name, otherwise NULL
    NDLNode<ElemType>* CallStringParse(const std::string& token, std::string& nameFunction, std::string& params)
    {
        auto paramStart = token.find_first_of(OPENBRACES);
        if (paramStart == npos)
            RuntimeError('Invalid macro/function call can not be parsed: %s\n', token.c_str());
        nameFunction = token.substr(0, paramStart);
        Trim(nameFunction);
        params = token.substr(paramStart);
        NDLNode<ElemType>* ndlNodeFound = CheckName(nameFunction);
        return ndlNodeFound;
    }
    
    int wmain1(int argc, wchar_t* argv[]) // called from wmain which is a wrapper that catches & reports Win32 exceptions
{
    std::set_new_handler(AllocationFailureHandler);
    }
    
    
    {                    // tells code below to consume the closing '
                    quoteFound = true;
                }
                else
                {
                    // a regular brace: the entire brace expression becomes the token, including the braces themselves
                    // tokenEnd is one past the character we want
                    tokenEnd = braceEndFound + 1;
                }
            }
            else
            {
                // not braces
                // find the end of the token
                tokenEnd = stringParse.find_first_of(sepsBraces, tokenStart);
    
        // main entry point for post forward and backward prop
    void PostForwardAndBackProp(const ComputationNodeBasePtr rootNode);
    
        ComputationNodePtr CreateLearnableParameter(const std::wstring& paramName, const size_t rows, const size_t cols);
    shared_ptr<ComputationNode<ElemType>> CreateLearnableParameter(const std::wstring& paramName, const TensorShape& tensorShape)
    {
        return this->template TypedCreateLearnableParameter<ElemType>(paramName, tensorShape);
    }
    
        // TODO: similar to DumpInfo; used by ExperimentalNetworkBuilder test implementation
    /*HasToString::*/ wstring ToString() const override
    {
        // we format it like 'name : type rows x cols ( args )'
        wstring result = NodeName() + L' : ' + OperationName();
        result.append(msra::strfun::wstrprintf(L' [%s%ls]', string(GetSampleLayout()).c_str(), GetMBLayoutAxisString().c_str()));
        if (m_inputs.empty())
            result.append(L' ()');
        else
        {
            wstring args;
            bool first = true;
            for (auto& child : m_inputs)
            {
                if (first)
                    first = false;
                else
                    args.append(L'\n');
                args.append(/*TidyName*/ (child->NodeName()));
            }
            result += L' ' + NestString(args, L'(', true, ')');
        }
        return result;
    }
    
        for (const auto& node : m_outputNodes)
    {
        shared_ptr<Matrix<ElemType>> outputMatrix = dynamic_pointer_cast<Matrix<ElemType>>(node->ValuePtr());
        if (outputMatrix->GetMatrixType() != MatrixType::DENSE)
            RuntimeError('Sparse outputs are not supported by this API.');
    }
    
            // If we are performing async gradient aggregation, let's wait for the pending gradient aggregation to finish
        // then swap the contents of the buffered gradients and the new gradient matrices and fire an async aggreagation
        // of the new gradient matrices
        if (m_pendingAsyncAggregation.valid())
        {
            Timer aggregationTimer;
            if (showSyncPerfStats)
                aggregationTimer.Start();
    }
    
            // get a TensorView of the criterion values to aggregate
        // TODO: Verify that node->GetSampleLayout().GetNumElements() == 1. Require explicit summation to declare intent that this is a criterion.
        FrameRange fr(node->GetMBLayout());
        node->MaskMissingValueColumnsToZero(fr); // set gaps to zero, so that we can aggregate
        // get a TensorView of our aggregator
        TensorShape shape{ m_aggregateCriterionValues->GetNumRows(), m_aggregateCriterionValues->GetNumCols() };
        shape.NarrowTo(1, i, i + 1); // narrow to the single element that corresponds to the accumulator value
        auto criterionAccumulator = TensorView<ElemType>(m_aggregateCriterionValues, shape);