
        
        bool CacheImpl::remove(const void *Key) {
  int Ret = cache_remove(static_cast<cache_t*>(Impl), const_cast<void*>(Key));
  return Ret == 0;
}
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
    namespace nw {
    }
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    bool NwClipboardGetListSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::unique_ptr<GetListSync::Params> params(GetListSync::Params::Create(*args_));
  EXTENSION_FUNCTION_VALIDATE(params.get());
  std::unique_ptr<ClipboardReader> reader(new ClipboardReader());
    }
    
    namespace extensions {
    }
    
     protected:
  ~NwObjCallObjectMethodSyncFunction() override;
    
    
    {    private:
      DISALLOW_COPY_AND_ASSIGN(NwScreenGetScreensFunction);      
  };
    
    // A singleton class to hold common caffe stuff, such as the handler that
// caffe is going to use for cublas, curand, etc.
class Caffe {
 public:
  ~Caffe();
    }
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    
    {}  // namespace caffe
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    #endif

    
    /* using override */ using HPHP::jit::Reg64;
/* using override */ using HPHP::jit::RegXMM;
/* using override */ using HPHP::jit::RegSF;
/* using override */ using HPHP::jit::MemoryRef;
/* using override */ using HPHP::jit::Immed;
/* using override */ using HPHP::CodeAddress;
/* using override */ using HPHP::jit::ConditionCode;
    
    private:
  APCCollection();
  ~APCCollection();
  static APCHandle::Pair WrapArray(APCHandle::Pair, CollectionType);
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
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
    
    #include 'hphp/runtime/base/perf-warning-inl.h'
    
    //////////////////////////////////////////////////////////////////////
    
    
    {    return 0;
}

    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
            vector<int> res;
        if(root == NULL)
            return res;
    
    // Another Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    using namespace std;