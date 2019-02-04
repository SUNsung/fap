
        
        ServiceGenerator* ImmutableGeneratorFactory::NewServiceGenerator(
    const ServiceDescriptor* descriptor) const {
  return new ImmutableServiceGenerator(descriptor, context_);
}
    
    
    {  EXPECT_EQ(expected, decode_data.Data());
}
    
    void OneofGenerator::GenerateClearFunctionImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [message descriptor];\n'
      '  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:$raw_index$];\n'
      '  GPBMaybeClearOneof(message, oneof, $index$, 0);\n'
      '}\n');
}
    
    #ifdef _WIN32
#include <fcntl.h>
#else
#include <unistd.h>
#endif
    
      reflection_tester.SetPackedFieldsViaReflection(message);
  reflection_tester.ExpectPackedFieldsSetViaReflection(*message);
    
        int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    
            int res = 1;
        int index = nextDifferentCharacterIndex(nums, 1);
        int i = 1;
        while(index < nums.size()){
            res ++;
            nums[i++] = nums[index];
            index = nextDifferentCharacterIndex(nums, index + 1);
        }
    
    
    {    return 0;
}

    
    
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
    
    using namespace std;
    
    
    {
    {        if(node){
            res.push_back(node->val);
            preorderTraversal(node->left, res);
            preorderTraversal(node->right, res);
        }
    }
};
    
    public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    
    int main() {
    }
    
    
    {    return 0;
}

    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                stack.push(Command('print', command.node));
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};