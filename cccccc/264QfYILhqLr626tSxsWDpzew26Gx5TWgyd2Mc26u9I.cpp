
        
        #ifdef USE_LEVELDB
#include 'leveldb/db.h'
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
     protected:
  /* Implement this method in your subclass
      with the code you want your thread to run. */
  virtual void InternalThreadEntry() {}
    
    
    {  /// Whether to ignore instances with a certain label.
  bool has_ignore_label_;
  /// The label indicating that an instance should be ignored.
  int ignore_label_;
  /// Keeps counts of the number of samples per class.
  Blob<Dtype> nums_buffer_;
};
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
      /// @brief The spatial dimensions of a filter kernel.
  Blob<int> kernel_shape_;
  /// @brief The spatial dimensions of the stride.
  Blob<int> stride_;
  /// @brief The spatial dimensions of the padding.
  Blob<int> pad_;
  /// @brief The spatial dimensions of the dilation.
  Blob<int> dilation_;
  /// @brief The spatial dimensions of the convolution input.
  Blob<int> conv_input_shape_;
  /// @brief The spatial dimensions of the col_buffer.
  vector<int> col_buffer_shape_;
  /// @brief The spatial dimensions of the output.
  vector<int> output_shape_;
  const vector<int>* bottom_shape_;
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    
    {}  // namespace grpc

    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
      Status GetFileByName(ServerContext* context, const grpc::string& file_name,
                       reflection::v1alpha::ServerReflectionResponse* response);
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, int value) {
  class IntOption final : public ServerBuilderOption {
   public:
    IntOption(const grpc::string& name, int value)
        : name_(name), value_(value) {}
    }
    }
    
    #include <utility>
    
    void LoadDataStore::MergeRow(const grpc::string& hostname,
                             const LoadRecordKey& key,
                             const LoadRecordValue& value) {
  PerBalancerStore* per_balancer_store =
      FindPerBalancerStore(hostname, key.lb_id());
  if (per_balancer_store != nullptr) {
    per_balancer_store->MergeRow(key, value);
    return;
  }
  // Unknown LB ID. Track it until its number of in-progress calls drops to
  // zero.
  int64_t in_progress_delta = value.GetNumCallsInProgressDelta();
  if (in_progress_delta != 0) {
    auto it_tracker = unknown_balancer_id_trackers_.find(key.lb_id());
    if (it_tracker == unknown_balancer_id_trackers_.end()) {
      gpr_log(
          GPR_DEBUG,
          '[LoadDataStore %p] Start tracking unknown balancer (lb_id_: %s).',
          this, key.lb_id().c_str());
      unknown_balancer_id_trackers_.insert(
          {key.lb_id(), static_cast<uint64_t>(in_progress_delta)});
    } else if ((it_tracker->second += in_progress_delta) == 0) {
      unknown_balancer_id_trackers_.erase(it_tracker);
      gpr_log(GPR_DEBUG,
              '[LoadDataStore %p] Stop tracking unknown balancer (lb_id_: %s).',
              this, key.lb_id().c_str());
    }
  }
}
    
    
    {
    {        throw invalid_argument('the input has no solution');
    }
};
    
    /// Two pointers
/// Time Complexity:  O(n)
/// Space Complexity: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    }
    }
    
    // Three Way Quick Sort
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
        // Create the Upload Buffer:
    {
        VkBufferCreateInfo buffer_info = {};
        buffer_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        buffer_info.size = upload_size;
        buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        err = vkCreateBuffer(v->Device, &buffer_info, v->Allocator, &g_UploadBuffer);
        check_vk_result(err);
        VkMemoryRequirements req;
        vkGetBufferMemoryRequirements(v->Device, g_UploadBuffer, &req);
        g_BufferMemoryAlignment = (g_BufferMemoryAlignment > req.alignment) ? g_BufferMemoryAlignment : req.alignment;
        VkMemoryAllocateInfo alloc_info = {};
        alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
        alloc_info.allocationSize = req.size;
        alloc_info.memoryTypeIndex = ImGui_ImplVulkan_MemoryType(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT, req.memoryTypeBits);
        err = vkAllocateMemory(v->Device, &alloc_info, v->Allocator, &g_UploadBufferMemory);
        check_vk_result(err);
        err = vkBindBufferMemory(v->Device, g_UploadBuffer, g_UploadBufferMemory, 0);
        check_vk_result(err);
    }
    
        ImVector<ImFontAtlas::CustomRect>& user_rects = atlas->CustomRects;
    IM_ASSERT(user_rects.Size >= 1); // We expect at least the default custom rects to be registered, else something went wrong.
    
            src_tmp.Rects = &buf_rects[buf_rects_out_n];
        buf_rects_out_n += src_tmp.GlyphsCount;
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
    bool ImGui::InputTextMultiline(const char* label, std::string* str, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    public:
    int capacity;
    std::list<std::pair<std::string, jobject>> cacheList;
    std::unordered_map<std::string, std::list<std::pair<std::string, jobject>>::iterator> posMap;
    jstring GetString(JNIEnv *env, std::string key);
    void clearRefCache(JNIEnv *env);
    
      float WXCorePadding::getPadding(const WXCorePaddingEdge &edge)const {
    float padding = 0;
    switch (edge) {
      case kPaddingLeft:
        padding = mPaddingLeft;
        break;
      case kPaddingTop:
        padding = mPaddingTop;
        break;
      case kPaddingRight:
        padding = mPaddingRight;
        break;
      case kPaddingBottom:
        padding = mPaddingBottom;
        break;
      default:
        break;
    }
    return padding;
  }
    
        int64_t onRenderSuccessCallBridgeTime;
    
    class RenderActionAddElement : public RenderAction {
 public:
  explicit RenderActionAddElement(const std::string &page_id,
                                  const RenderObject *render,
                                  const RenderObject *parent, int index,
                                  bool will_layout = true);
    }
    
    #endif  // CORE_RENDER_ACTION_RENDER_ACTION_APPENDTREE_CREATEFINISH_H_

    
    class RenderActionRemoveElement : public RenderAction {
 public:
  explicit RenderActionRemoveElement(const std::string &page_id,
                                     const std::string &ref);
    }
    
    class RenderActionUpdateAttr : public RenderAction {
 public:
  explicit RenderActionUpdateAttr(
      const std::string &page_id, const std::string &ref,
      std::vector<std::pair<std::string, std::string>> *attrs);
    }
    
    #endif  // CORE_RENDER_NODE_FACTORY_RENDER_CREATOR_H_

    
    #include <string>
#include 'core/render/action/render_action_interface.h'