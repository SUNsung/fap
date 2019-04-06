
        
                    cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    }
    
    using namespace std;
    
            size_t numSequences = oneHotSequences.size();
        NDShape valueDataShape = sampleShape.AppendShape({ maxSequenceLength, numSequences });
        size_t numCSCCols = valueDataShape.SubShape(1).TotalSize() + 1;
        std::vector<SparseIndexType> colStarts(numCSCCols);
        std::vector<ElementType> nonZeroValues;
        std::vector<SparseIndexType> rowIndices;
        for (size_t i = 0; i < numSequences; ++i)
        {
            size_t currentSequenceNumCols = oneHotSequences[i].size();
            size_t j = 0;
            for (; j < currentSequenceNumCols; ++j)
            {
                colStarts[(i * maxSequenceNumCols) + j] = (SparseIndexType)nonZeroValues.size();
                size_t oneHotIdx = oneHotSequences[i][j];
                if ((oneHotIdx & OneHotSkip) == OneHotSkip) // note that OneHotSkip used to be (size_t)-1, and later changed to (uint32_t)-1. Both are supported
                {
                    nonZeroValues.push_back(0);
                    rowIndices.push_back(0);
                }
                else
                {
                    nonZeroValues.push_back(1);
                    if (oneHotIdx >= dimension)
                        InvalidArgument('Value::Create: one-hot index value (%zu) exceeds vocabulary size (%zu).', oneHotSequences[i][j], dimension);
                    rowIndices.push_back((SparseIndexType)(oneHotSequences[i][j]));
                }
            }
    }
    
            // Now we have three kinds of nodes:
        //  - unmodified nodes that will be shared with the old network
        //  - modified nodes (user edits and their parents)
        //  - original nodes that are no longer referenced
        // The new network will be constructed to have the same roots as the original.
    
        virtual void /*ComputationNode::*/ BackpropTo(const size_t /*inputIndex*/, const FrameRange& fr) override
    {
        auto sliceInputGrad  = InputRef(0).GradientFor(fr);
        auto sliceOutputGrad =           GradientFor(fr);
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
        if (fMatch == FALSE) {
        status = U_REGEX_INVALID_STATE;
        return utext_replace(dest, destLen, destLen, NULL, 0, &status);
    }
    if (groupNum < 0 || groupNum > fPattern->fGroupMap->size()) {
        status = U_INDEX_OUTOFBOUNDS_ERROR;
        return utext_replace(dest, destLen, destLen, NULL, 0, &status);
    }
    
    
    {}  // namespace
    
    U_CAPI UBool U_EXPORT2
uhash_compareScriptSet(const UElement key1, const UElement key2);
    
    void
SimpleTimeZone::getOffsetFromLocal(UDate date, int32_t nonExistingTimeOpt, int32_t duplicatedTimeOpt,
                                   int32_t& rawOffsetGMT, int32_t& savingsDST, UErrorCode& status) const {
    if (U_FAILURE(status)) {
        return;
    }
    }
    
        // are we comparing different lengths?
    int32_t minLength = getLength();
    int32_t targetLength = target.getLength();
    if (minLength < targetLength) {
        result = UCOL_LESS;
    } else if (minLength == targetLength) {
        result = UCOL_EQUAL;
    } else {
        minLength = targetLength;
        result = UCOL_GREATER;
    }
    
    /**
 * Union the set of all characters that may output by this object
 * into the given set.
 * @param toUnionTo the set into which to union the output characters
 */
void StringMatcher::addReplacementSetTo(UnicodeSet& /*toUnionTo*/) const {
    // The output of this replacer varies; it is the source text between
    // matchStart and matchLimit.  Since this varies depending on the
    // input text, we can't compute it here.  We can either do nothing
    // or we can add ALL characters to the set.  It's probably more useful
    // to do nothing.
}
    
    /**
 * Construct a StringReplacer that sets the emits the given output
 * text and does not modify the cursor.
 * @param theOutput text that will replace input text when the
 * replace() method is called.  May contain stand-in characters
 * that represent nested replacers.
 * @param theData transliterator context object that translates
 * stand-in characters to UnicodeReplacer objects
 */
StringReplacer::StringReplacer(const UnicodeString& theOutput,
                               const TransliterationRuleData* theData) {
    output = theOutput;
    cursorPos = 0;
    hasCursor = FALSE;
    data = theData;
    isComplex = TRUE;
}
    
    using json = nlohmann::json;
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }