
        
        )DOC')
    .Arg(
        'values',
        '*(type depends on dtype, Required=True)* The value of the elements to go in the *output* tensor.',
        true /* required */)
    .Arg(
        'dtype',
        'The data type for the elements of the output tensor. Strictly must be one of the types from DataType enum in TensorProto.')
    .Arg(
        'shape',
        '*(type: [int])* Desired shape of the *output* tensor.')
    .Arg(
        'extra_shape',
        '*(type: [int])* The additional dimensions appended at the end of the *shape* indicated by the input blob. Cannot set the *extra_shape* argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '*(type: bool; default: False)* set to *True* to use the *input* as shape. First, input must be in CPU context.')
    .Input(
        0,
        'input',
        '(Optional) 1D tensor specifying the shape of the output. Must be used with *input_as_shape=True*')
    .Output(
        0,
        'output',
        'Output tensor with desired dimension filled with specified data. If the shape argument is set, this is the shape specified, and if the *input* exists and *input_as_shape=True*, it is the shape specified by the *input* tensor.')
    .TensorInferenceFunction(FillerTensorInference<>);
    
    
    {} // namespace caffe2

    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11>
internal::ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10,
    T11> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11) {
  return internal::ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10,
      T11>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
}
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
    // Implements typed tests.
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
    
void printVec(const vector<int>& vec){
    for(int e: vec)
        cout << e << ' ';
    cout << endl;
}
    
    void deleteLinkedList(ListNode* head){
    }
    
    
    {
    {        int zero = -1;          // [0...zero] == 0
        int two = nums.size();  // [two...n-1] == 2
        for(int i = 0 ; i < two ; ){
            if(nums[i] == 1)
                i ++;
            else if (nums[i] == 2)
                swap( nums[i] , nums[--two]);
            else{ // nums[i] == 0
                assert(nums[i] == 0);
                swap(nums[++zero] , nums[i++]);
            }
        }
    }
};
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                stack.push(Command('print', command.node));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    
    {
    {
    {            if(cur != NULL){
                stack.push(cur);
                cur = cur->left;
            }
            else {
                cur = stack.top();
                stack.pop();
                res.push_back(cur->val);
                cur = cur->right;
            }
        }
        return res;
    }
};
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    // PreOrder Morris Traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(1)
class Solution {
    }
    
    int main() {
    }
    
    int main() {
    }
    
    
    {        return dict[versionKey].Value<size_t>();
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
    
            // If node derives from ILateAttachingNode() then it has unresolved inputs. Resolve them now.
        // This may generate a whole new load of nodes, including nodes which in turn have late init.
        // Note: In case of editing, we may be adding a new node that references nodes from the old
        // network that must be mapped because their inputs have changed. Hence, it is important to
        // to the mapping *after* late attaching.
        if (node->GetNumInputs() == 0) // (if this function is called during model editing, we may already have our inputs)
        {
            let lateAttachingNode = dynamic_pointer_cast<ILateAttachingNode>(node);
            if (lateAttachingNode)
                lateAttachingNode->LateAttachInputs();
        }
    
    ScriptSet &ScriptSet::Union(const ScriptSet &other) {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] |= other.bits[i];
    }
    return *this;
}
    
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
    
    U_NAMESPACE_END
    
        /**
     * Sets minimum significant digits. 0 or negative means no minimum.
     */
    void setMin(int32_t count) {
        fMin = count <= 0 ? 0 : count;
    }
    
    UnicodeString &
SmallIntFormatter::format(
        int32_t smallPositiveValue,
        const IntDigitCountRange &range,
        UnicodeString &appendTo) {
    int32_t digits = range.pin(gDigitCount[smallPositiveValue]);
    }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    int32_t StandardPlural::indexOrNegativeFromString(const UnicodeString &keyword) {
    switch (keyword.length()) {
    case 3:
        if (keyword.compare(gOne, 3) == 0) {
            return ONE;
        } else if (keyword.compare(gTwo, 3) == 0) {
            return TWO;
        } else if (keyword.compare(gFew, 3) == 0) {
            return FEW;
        }
        break;
    case 4:
        if (keyword.compare(gMany, 4) == 0) {
            return MANY;
        } else if (keyword.compare(gZero, 4) == 0) {
            return ZERO;
        }
        break;
    case 5:
        if (keyword.compare(gOther, 5) == 0) {
            return OTHER;
        }
        break;
    default:
        break;
    }
    return -1;
}