
        
          gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
    namespace atom {
    }
    
    
    {}  // namespace atom
    
    void FinishTransactionByDate(const std::string& date);
    
      // Downloadable Content Information
  bool downloadable = false;
    
    #include <string>
    
    void OffscreenViewProxy::RemoveObserver() {
  observer_ = nullptr;
}
    
      // Releases ownership of the object without decrementing the reference count.
  // The caller now owns the returned reference.
  PyObjectStruct* release() {
    PyObject* p = ptr_;
    ptr_ = NULL;
    return p;
  }
    
    static void WriteDocCommentBodyForLocation(
    io::Printer* printer, const SourceLocation& location) {
  string comments = location.leading_comments.empty() ?
      location.trailing_comments : location.leading_comments;
  if (!comments.empty()) {
    // TODO(kenton):  Ideally we should parse the comment text as Markdown and
    //   write it back as HTML, but this requires a Markdown parser.  For now
    //   we just use <pre> to get fixed-width text formatting.
    }
    }
    
      desired_output_for_decode = 'ABCD__EfghI_j';
  expected = string('\x64\x80\xC5\xA1\x0', 5);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
      // Check default values.
  const Descriptor* descriptor = message->GetDescriptor();
  const Reflection* reflection = message->GetReflection();
  EXPECT_EQ(0, reflection->GetInt32(
      *message, descriptor->FindFieldByName('foo_int')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_string')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_cord')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_string_piece')));
  EXPECT_EQ('', reflection->GetString(
      *message, descriptor->FindFieldByName('foo_bytes')));
  EXPECT_EQ(unittest::TestOneof2::FOO, reflection->GetEnum(
      *message, descriptor->FindFieldByName('foo_enum'))->number());
  const Descriptor* nested_descriptor;
  const Message* nested_prototype;
  nested_descriptor =
      pool_.FindMessageTypeByName('protobuf_unittest.TestOneof2.NestedMessage');
  nested_prototype = factory_.GetPrototype(nested_descriptor);
  EXPECT_EQ(nested_prototype,
            &reflection->GetMessage(
                *message, descriptor->FindFieldByName('foo_message')));
  const Descriptor* foogroup_descriptor;
  const Message* foogroup_prototype;
  foogroup_descriptor =
      pool_.FindMessageTypeByName('protobuf_unittest.TestOneof2.FooGroup');
  foogroup_prototype = factory_.GetPrototype(foogroup_descriptor);
  EXPECT_EQ(foogroup_prototype,
            &reflection->GetMessage(
                *message, descriptor->FindFieldByName('foogroup')));
  EXPECT_NE(foogroup_prototype,
            &reflection->GetMessage(
                *message, descriptor->FindFieldByName('foo_lazy_message')));
  EXPECT_EQ(5, reflection->GetInt32(
      *message, descriptor->FindFieldByName('bar_int')));
  EXPECT_EQ('STRING', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_string')));
  EXPECT_EQ('CORD', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_cord')));
  EXPECT_EQ('SPIECE', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_string_piece')));
  EXPECT_EQ('BYTES', reflection->GetString(
      *message, descriptor->FindFieldByName('bar_bytes')));
  EXPECT_EQ(unittest::TestOneof2::BAR, reflection->GetEnum(
      *message, descriptor->FindFieldByName('bar_enum'))->number());
    
    const std::string& DHTResponseMessage::getType() const { return R; }
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) = 0;
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
        deleteLinkedList(head);
    
                    char match;
                if( s[i] == ')' )
                    match = '(';
                else if( s[i] == ']' )
                    match = '[';
                else{
                    assert( s[i] == '}' );
                    match = '{';
                }
    
        vector<int> vec2 = {2};
    Solution().sortColors(vec2);
    printArr(vec2);
    
            ListNode* pre = dummyHead;
        for(int i = 0; i < m - 1; i ++){
            pre = pre->next
        }
    
    
    {        vector<int> res;
        __inorderTraversal(root, res);
        return res;
    }
    
    private:
    struct Command{
        string s;   // go, print
        TreeNode* node;
        Command(string s, TreeNode* node): s(s), node(node){}
    };
    
    /// BFS
/// No need to store level information in the queue :-)
///
/// Time Complexity: O(n), where n is the number of nodes in the tree
/// Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    }
    }
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    }
    
    // PreOrder Morris Traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(1)
class Solution {
    }