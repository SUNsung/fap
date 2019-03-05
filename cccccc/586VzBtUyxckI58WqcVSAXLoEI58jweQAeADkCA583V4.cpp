
        
        
    {
    {}  // namespace swig
}  // namespace tensorflow

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
#define TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL.
void DelayedNumpyDecref(void* data, size_t len, void* obj) {
  mutex_lock ml(*DelayedDecrefLock());
  DecrefCache()->push_back(obj);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Return the current record contents.  Only valid after the preceding call
  // to GetNext() returned true
  string record() const { return record_; }
  // Return the current offset in the file.
  uint64 offset() const { return offset_; }
    
    bool UvTaskRunner::PostDelayedTask(const base::Location& from_here,
                                   base::OnceClosure task,
                                   base::TimeDelta delay) {
  auto* timer = new uv_timer_t;
  timer->data = this;
  uv_timer_init(loop_, timer);
  uv_timer_start(timer, UvTaskRunner::OnTimeout, delay.InMilliseconds(), 0);
  tasks_[timer] = std::move(task);
  return true;
}
    
    #ifndef ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
#define ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
    
    class AtomBrowserContext;
    
    void Event::FrameDeleted(content::RenderFrameHost* rfh) {
  if (sender_ != rfh)
    return;
  sender_ = nullptr;
  message_ = nullptr;
}
    
      // Returns all objects in this class's weak map.
  static std::vector<v8::Local<v8::Object>> GetAll(v8::Isolate* isolate) {
    if (weak_map_)
      return weak_map_->Values(isolate);
    else
      return std::vector<v8::Local<v8::Object>>();
  }
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    size_t num_threads = 31;
size_t work_chunk  = 120;
    
      SrcLoc(SrcPos start, SrcPos past)
    : start(start)
    , past(past)
  {}
    
    #ifndef HPHP_GLOB_STREAM_WRAPPER_H
#define HPHP_GLOB_STREAM_WRAPPER_H
    
    namespace HPHP {
    }
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    
    {    return 0;
}
    
            for(int i = 0 ; i < nums.size() ; i ++){
            unordered_map<int,int>::iterator iter = record.find(target - nums[i]);
            if(iter != record.end() && iter->second != i){
                int res[] = {i, iter->second};
                return vector<int>(res, res + 2);
            }
        }
    
            ListNode* tail = pre->next;
        ListNode* left;
        pre->next = reverse(pre->next, n - m, left);
        tail->next = left;
    
    private:
    void __inorderTraversal(TreeNode* node, vector<int> &res){
    }
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    
    {                if(node->left){
                    q.push(node->left);
                    new_level_num ++;
                }
                if(node->right){
                    q.push(node->right);
                    new_level_num ++;
                }
            }
    
        TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> res = Solution().preorderTraversal(root);
    print_vec(res);