
        
        #include <Python.h>
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    #include <memory>
    
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
    
      CodeGeneratorRequest request;
  if (!request.ParseFromFileDescriptor(STDIN_FILENO)) {
    std::cerr << argv[0] << ': protoc sent unparseable request to plugin.'
              << std::endl;
    return 1;
  }
    
      // write end of central directory marker
  output.WriteLittleEndian32(0x06054b50);  // magic
  WriteShort(&output, 0);  // disk number
  WriteShort(&output, 0);  // disk with start of central directory
  WriteShort(&output, num_entries);  // central directory entries (this disk)
  WriteShort(&output, num_entries);  // central directory entries (total)
  output.WriteLittleEndian32(dir_len);  // central directory byte size
  output.WriteLittleEndian32(dir_ofs);  // central directory offset
  WriteShort(&output, 0);   // comment length
    
      while (!read_error_) {
    ConsumeZeroOrMore<Whitespace>();
    }
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
        // No implementation - assignment is unsupported.
    void operator=(const Iterator& other);
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
      // Make multiple inputs so we need to compact.
  for (int i = 0; i < 2; i++) {
    Build(10);
    dbi->TEST_CompactMemTable();
    Corrupt(kTableFile, 100, 1);
    env_.SleepForMicroseconds(100000);
  }
  dbi->CompactRange(nullptr, nullptr);
    
    
    {  // Make the output file
  std::string fname = TableFileName(dbname_, file_number);
  Status s = env_->NewWritableFile(fname, &compact->outfile);
  if (s.ok()) {
    compact->builder = new TableBuilder(options_, compact->outfile);
  }
  return s;
}
    
    static std::string RandomKey(Random* rnd) {
  int len = (rnd->OneIn(3)
             ? 1                // Short sometimes to encourage collisions
             : (rnd->OneIn(100) ? rnd->Skewed(10) : rnd->Uniform(10)));
  return test::RandomKey(rnd, len);
}
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
      // Drop reference count.  Delete if no more references exist.
  void Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      delete this;
    }
  }
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    
    {
    {}  // namespace common
}  // namespace xgboost

    
      virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats) const;
    
     private:
  struct ColumnBoundary {
    // indicate where each column's index and row_ind is stored.
    // index_begin and index_end are logical offsets, so they should be converted to
    // actual offsets by scaling with packing_factor_
    size_t index_begin;
    size_t index_end;
    size_t row_ind_begin;
    size_t row_ind_end;
  };
    
        // Overrides
    virtual void startWithTarget(Node *target) override;
    virtual ActionCamera * reverse() const override;
    virtual ActionCamera *clone() const override;
    
    void ActionManager::removeAllActions()
{
    for (tHashElement *element = _targets; element != nullptr; )
    {
        auto target = element->target;
        element = (tHashElement*)element->hh.next;
        removeAllActionsFromTarget(target);
    }
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    AnimationFrame::AnimationFrame()
: _spriteFrame(nullptr)
, _delayUnits(0.0f)
{
    }
    
    PolygonInfo AutoPolygon::generateTriangles(const Rect& rect, float epsilon, float threshold)
{
    Rect realRect = getRealRect(rect);
    auto p = trace(realRect, threshold);
    p = reduce(p, realRect, epsilon);
    p = expand(p, realRect, epsilon);
    auto tri = triangulate(p);
    calculateUV(realRect, tri.verts, tri.vertCount);
    PolygonInfo ret;
    ret.triangles = tri;
    ret.setFilename(_filename);
    ret.setRect(realRect);
    return ret;
}
    
    /**
 * PolygonInfo is an object holding the required data to display Sprites.
 * It can be a simple as a triangle, or as complex as a whole 3D mesh
 */
class CC_DLL PolygonInfo
{
public:
    /// @name Creators
    /// @{
    /**
     * Creates an empty Polygon info
     * @memberof PolygonInfo
     * @return PolygonInfo object
     */
    PolygonInfo();
    }
    }
    
        const int nums[] = {0,4,3,0};
    vector<int> nums_vec( nums, nums + sizeof(nums)/sizeof(int) );
    int target = 0;
    printVec(Solution().twoSum(nums_vec, target));
    
            int res = 1;
        int index = nextDifferentCharacterIndex(nums, 1);
        int i = 1;
        while(index < nums.size()){
            res ++;
            nums[i++] = nums[index];
            index = nextDifferentCharacterIndex(nums, index + 1);
        }
    
            for(ListNode* cur = head ; cur != NULL ;){
            if(cur->val < x){
                prev1->next = cur;
                cur = cur->next;
                prev1 = prev1->next;
                prev1->next = NULL;
            }
            else{
                prev2->next = cur;
                cur = cur->next;
                prev2 = prev2->next;
                prev2->next = NULL;
            }
        }
    
    
    {
    {        if( node ){
            __inorderTraversal(node->left, res);
            res.push_back( node->val );
            __inorderTraversal(node->right, res);
        }
    }
};
    
                if(cur->left == NULL){
                res.push_back(cur->val);
                cur = cur->right;
            }
            else{
                TreeNode* prev = cur->left;
                while(prev->right != NULL && prev->right != cur)
                    prev = prev->right;
    }
    
    /// BFS
/// Time Complexity: O(n), where n is the number of nodes in the tree
/// Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    }
    }
    
    
void print_vec(const vector<int>& vec){
    for(int e: vec)
        cout << e << ' ';
    cout << endl;
}
    
    // Another Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
                while(cur != NULL){
                stack.push(TagNode(cur));
                cur = cur->left;
            }
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    
    // -----------------------------------------------------------------------------
// ES6 #sec-symbol-objects
// ES ##sec-symbol.prototype.description
TF_BUILTIN(SymbolPrototypeDescriptionGetter, CodeStubAssembler) {
  Node* context = Parameter(Descriptor::kContext);
  Node* receiver = Parameter(Descriptor::kReceiver);
    }
    
    #endif  // V8_BUILTINS_BUILTINS_TEST_GEN_H_
