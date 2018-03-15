
        
        
    { private:
  std::unordered_set<string> debug_urls_;
};
    
    #endif  // TENSORFLOW_LIB_IO_RECORD_WRITER_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
      void CheckArgsAndAllocateResult(OpKernelContext* c,
                                  OpInputList* indices_inputs,
                                  OpInputList* data_inputs, int* first_dim_size,
                                  int* data_elements_size,
                                  Tensor** result_ptr) {
    // Find maximum index in the indices vectors
    OP_REQUIRES_OK(c, c->input_list('indices', indices_inputs));
    }
    
    TF_CALL_GPU_NUMBER_TYPES(REGISTER_GPU);
TF_CALL_complex64(REGISTER_GPU);
TF_CALL_complex128(REGISTER_GPU);
TF_CALL_int64(REGISTER_GPU);
TF_CALL_int32(REGISTER_GPU)
    
    
    {
    {    IntType split = gidx / split_size;
    const T* input_ptr = input_ptrs[split];
    IntType col_offset = gidx % split_size;
#pragma unroll
    for (; gidy < total_rows; gidy += blockDim.y * gridDim.y) {
      output[gidy * total_cols + gidx] =
          input_ptr[gidy * split_size + col_offset];
    }
  }
}
    
    namespace leveldb {
namespace log {
    }
    }
    
    void VersionEdit::Clear() {
  comparator_.clear();
  log_number_ = 0;
  prev_log_number_ = 0;
  last_sequence_ = 0;
  next_file_number_ = 0;
  has_comparator_ = false;
  has_log_number_ = false;
  has_prev_log_number_ = false;
  has_next_file_number_ = false;
  has_last_sequence_ = false;
  deleted_files_.clear();
  new_files_.clear();
}
    
        if (bytes_ > 0) {
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / (finish - start_));
      if (!message_.empty()) {
        message_  = std::string(rate) + ' ' + message_;
      } else {
        message_ = rate;
      }
    }
    
    class Issue178 { };
    
    namespace {
class EmptyIterator : public Iterator {
 public:
  EmptyIterator(const Status& s) : status_(s) { }
  virtual bool Valid() const { return false; }
  virtual void Seek(const Slice& target) { }
  virtual void SeekToFirst() { }
  virtual void SeekToLast() { }
  virtual void Next() { assert(false); }
  virtual void Prev() { assert(false); }
  Slice key() const { assert(false); return Slice(); }
  Slice value() const { assert(false); return Slice(); }
  virtual Status status() const { return status_; }
 private:
  Status status_;
};
}  // namespace
    
    #ifndef STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_
#define STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_
    
     private:
  void FindSmallest();
  void FindLargest();
    
      if (r->pending_index_entry) {
    assert(r->data_block.empty());
    r->options.comparator->FindShortestSeparator(&r->last_key, key);
    std::string handle_encoding;
    r->pending_handle.EncodeTo(&handle_encoding);
    r->index_block.Add(r->last_key, Slice(handle_encoding));
    r->pending_index_entry = false;
  }
    
      /// Returns the runner name
  std::string name() const {
    return name_;
  }
    
      /// See DropPrivileges::dropToParent but for a user's UID and GID.
  bool dropTo(const std::string& user);
    
     private:
  /// the internal storage of the status code
  int code_;
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    
    {  // Cleanup allocations.
  std::string result(buffer);
  free(buffer);
  return result;
}
    
    bool js_cocos2dx_navmesh_NavMesh_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMesh_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMesh(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMesh_removeNavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_removeNavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_update(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_addNavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_addNavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_setDebugDrawEnable(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_debugDraw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMesh_NavMesh(JSContext *cx, uint32_t argc, jsval *vp);
    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.SimpleAudioEngine',0,&tolua_err)) goto tolua_lerror;
#endif
    
    
    
        return 0;
}
int lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
    
    USING_NS_CC;
    
    			b2PolygonShape shape;
			shape.Set(vertices, 3);