std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 2; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 2 + 1));
      output_blob_names.push_back(GI(inputIdx * 2));
    }
    input_blob_names.push_back(GO(2));
    
    - https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.h
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.cc
    
    
    {} // namespace caffe2
    
    OPERATOR_SCHEMA(GivenTensorFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
This op fills an output tensor with the data specified by the *value* and *dtype* arguments.  The output tensor shape is specified by the *shape* argument. Beware, when using this argument *value* should have a value for every element of the *output*, as missing values will not be initialized automatically. If *input_as_shape* is set to *true*, then the *input* should be a 1D tensor containing the desired output shape (the dimensions specified in *extra_shape* will also be appended). In this case, the *shape* argument should **not** be set.
    
    
    {REGISTER_CPU_OPERATOR(Glu, GluOp<float, CPUContext>);
} // namespace caffe2

    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    namespace aria2 {
    }
    
    class DHTTask;
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) = 0;
    
    #endif // D_DHT_TASK_QUEUE_H

    
    namespace aria2 {
    }
    
        head = Solution().swapPairs(head);
    printLinkedList(head);
    
    /// Two pointers
/// Time Complexity:  O(n)
/// Space Complexity: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    }
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
    
    /// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    
    public:
    vector<int> inorderTraversal(TreeNode* root) {
    }
    
            vector<int> res;
        if(root == NULL)
            return res;
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
    {
    {        return res;
    }
};