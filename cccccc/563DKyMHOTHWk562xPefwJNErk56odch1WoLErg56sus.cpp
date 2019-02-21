
        
        
    {}  // namespace atom

    
      base::WeakPtrFactory<TrackableObjectBase> weak_factory_;
    
      // There is a new update which has been downloaded.
  virtual void OnUpdateDownloaded(const std::string& release_notes,
                                  const std::string& release_name,
                                  const base::Time& release_date,
                                  const std::string& update_url) {}
    
    
    {}  // namespace atom
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    #include <google/protobuf/python/python_protobuf.h>
    
    #include <google/protobuf/compiler/code_generator.h>
    
    
    {  // Moving messages on two different arenas should lead to a copy.
  *message2_on_arena = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
      // If there were any extensions or this file has any dependencies, output
  // a registry to override to create the file specific registry.
  if (file_contains_extensions || !deps_with_extensions.empty()) {
    printer->Print(
        '+ (GPBExtensionRegistry*)extensionRegistry {\n'
        '  // This is called by +initialize so there is no need to worry\n'
        '  // about thread safety and initialization of registry.\n'
        '  static GPBExtensionRegistry* registry = nil;\n'
        '  if (!registry) {\n'
        '    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();\n'
        '    registry = [[GPBExtensionRegistry alloc] init];\n');
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      // write central directory
  io::CodedOutputStream output(raw_output_);
  for (int i = 0; i < num_entries; ++i) {
    const string &filename = files_[i].name;
    uint16 filename_size = filename.size();
    uint32 crc32 = files_[i].crc32;
    uint32 size = files_[i].size;
    uint32 offset = files_[i].offset;
    }
    
    GzipOutputStream::GzipOutputStream(ZeroCopyOutputStream* sub_stream,
                                   const Options& options) {
  Init(sub_stream, options);
}
    
    class PAGE_RES_IT;
class ROW;
class WERD_RES;
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
      /**
   * Returns a binary image of the current object at the given level.
   * The position and size match the return from BoundingBoxInternal, and so
   * this could be upscaled with respect to the original input image.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetBinaryImage(PageIteratorLevel level) const;
    
    void BoxWord::CopyFrom(const BoxWord& src) {
  bbox_ = src.bbox_;
  length_ = src.length_;
  boxes_.clear();
  boxes_.reserve(length_);
  for (int i = 0; i < length_; ++i)
    boxes_.push_back(src.boxes_[i]);
}
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
    int main() {
    }
    
    using namespace std;
    
    /// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    
    
    {
    {        if( node ){
            __inorderTraversal(node->left, res);
            res.push_back( node->val );
            __inorderTraversal(node->right, res);
        }
    }
};
    
    int main() {
    }
    
    // My Non-Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
    int main() {
    }
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
    }