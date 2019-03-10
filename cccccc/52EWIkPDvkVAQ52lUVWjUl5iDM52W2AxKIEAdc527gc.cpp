
        
         protected:
  // Identify the special text type for one blob, and update its field. When
  // height_th is set (> 0), we will label the blob as BSTT_NONE if its height
  // is less than height_th.
  void IdentifySpecialText(BLOBNBOX *blob, const int height_th);
    
      /**
   * Returns information about the current paragraph, if available.
   *
   *   justification -
   *     LEFT if ragged right, or fully justified and script is left-to-right.
   *     RIGHT if ragged left, or fully justified and script is right-to-left.
   *     unknown if it looks like source code or we have very few lines.
   *   is_list_item -
   *     true if we believe this is a member of an ordered or unordered list.
   *   is_crown -
   *     true if the first line of the paragraph is aligned with the other
   *     lines of the paragraph even though subsequent paragraphs have first
   *     line indents.  This typically indicates that this is the continuation
   *     of a previous paragraph or that it is the very first paragraph in
   *     the chapter.
   *   first_line_indent -
   *     For LEFT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the left edge of the
   *     rest of the paragraph.
   *     for RIGHT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the right edge of the
   *     rest of the paragraph.
   *     NOTE 1: This value may be negative.
   *     NOTE 2: if *is_crown == true, the first line of this paragraph is
   *             actually flush, and first_line_indent is set to the 'common'
   *             first_line_indent for subsequent paragraphs in this block
   *             of text.
   */
  void ParagraphInfo(tesseract::ParagraphJustification *justification,
                     bool *is_list_item,
                     bool *is_crown,
                     int *first_line_indent) const;
    
      // Add all parameters to a list.
  int v, i;
  int num_iterations = (tess->params() == nullptr) ? 1 : 2;
  for (v = 0; v < num_iterations; ++v) {
    tesseract::ParamsVectors *vec = (v == 0) ? GlobalParams() : tess->params();
    for (i = 0; i < vec->int_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->int_params[i]));
    }
    for (i = 0; i < vec->bool_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->bool_params[i]));
    }
    for (i = 0; i < vec->string_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->string_params[i]));
    }
    for (i = 0; i < vec->double_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->double_params[i]));
    }
  }
    
    // A rather hackish helper structure which can take any kind of parameter input
// (defined by ParamType) and do a couple of common operations on them, like
// comparisond or getting its value. It is used in the context of the
// ParamsEditor as a bridge from the internal tesseract parameters to the
// ones displayed by the ScrollView server.
class ParamContent : public ELIST_LINK {
 public:
  // Compare two VC objects by their name.
  static int Compare(const void* v1, const void* v2);
    }
    
    // specialize define for Layer Parameter
template<>
class FieldEntry<caffe::LayerParameter>
    : public FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> {
 public:
  // parent class
  typedef FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> Parent;
    }
    
    #include '../common/utils.h'
    
    template<typename OP, typename xpu>
void BinaryOpKernelLaunch(mshadow::Stream<xpu>* s, const TBlob& lhs, const TBlob& rhs, TBlob *out) {
  using namespace op::mxnet_op;
  using namespace mshadow;
  MSHADOW_TYPE_SWITCH(out->type_flag_, DType, {
    Kernel<op_with_req<OP, kWriteInplace>, xpu >::
    Launch(s,
           lhs.Size(),
           out->dptr<DType>(),
           lhs.dptr<DType>(),
           rhs.dptr<DType>());
  });
}
// declarations
DECL_BINARY(DEVICE, MatChooseRowElem, EvalMatChooseRowElem_)
DECL_TERNARY(DEVICE, MatFillRowElem, EvalMatFillRowElem_)
DECL_BINARY(DEVICE, OneHotEncode, EvalOneHot_)
DECL_SCALAR(DEVICE, Plus, EvalScalar_, true)
DECL_SCALAR(DEVICE, Minus, EvalScalar_, true)
DECL_SCALAR(DEVICE, Mul, EvalScalar_, true)
DECL_SCALAR(DEVICE, Div, EvalScalar_, true)
DECL_BINARY_LAUNCH(DEVICE, Plus)
DECL_BINARY_LAUNCH(DEVICE, Minus)
DECL_BINARY_LAUNCH(DEVICE, Mul)
DECL_BINARY_LAUNCH(DEVICE, Div)
    
    #include <memory>
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    CHECK_EQ(out_grad.size(), 1U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grad = out_grad[st::kOut].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> ddata = in_grad[st::kData].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(grad.size(0), grad.size(2), grad.size(3), 2);
    Tensor<gpu, 3, DType> dloc = in_grad[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                    .get_with_shape<gpu, 4, DType>(grid_shape, s);
    // do not use out_grad[st::kGridSrc], because dgrid is a intermediate tensor, and not include in
    // DeclareBackwardDependency, another, we can we reuse grid for inplace operator
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             ddata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid.dptr_,
                                             &beta_dgrid,
                                             grid.dptr_));
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorBackward(s->dnn_handle_,
                                                     st_desc_,
                                                     grid.dptr_,
                                                     dloc.dptr_/*out*/));
    }
  }
    
    
    {  /*!
   * \brief Create a tree updater given name
   * \param name Name of the tree updater.
   */
  static TreeUpdater* Create(const std::string& name);
};
    
    
    {    inline size_t Size() const {
      return end - begin;
    }
  };
  /* \brief specifies how to split a rowset into two */
  struct Split {
    std::vector<size_t> left;
    std::vector<size_t> right;
  };
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    #include <dmlc/registry.h>
#include <vector>
#include <utility>
#include <string>
#include <functional>
#include <memory>
#include './base.h'
#include './data.h'
#include './objective.h'
#include './feature_map.h'
#include '../../src/common/host_device_vector.h'
    
    XGBOOST_REGISTER_OBJECTIVE(LambdaRankObjMAP, 'rank:map')
.describe('LambdaRank with MAP as objective.')
.set_body([]() { return new LambdaRankObjMAP(); });
    
            for(int i = 0 ; i < nums.size() ; i ++){
            unordered_map<int,int>::iterator iter = record.find(target - nums[i]);
            if(iter != record.end() && iter->second != i){
                int res[] = {i, iter->second};
                return vector<int>(res, res + 2);
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
    
            vector<int> res;
        if( root == NULL )
            return res;
    
    
int main() {
    }
    
    public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    
            vector<int> res;
        if(root == NULL)
            return res;
    
    
    {
    {        stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
            if(cur != NULL){
                res.push_back(cur->val);
                stack.push(cur);
                cur = cur->left;
            }
            else{
                cur = stack.top();
                stack.pop();
                cur = cur->right;
            }
        }
        return res;
    }
};
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
    #include <iostream>
#include <vector>
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        // Setup Vulkan
    if (!glfwVulkanSupported())
    {
        printf('GLFW: Vulkan Not Supported\n');
        return 1;
    }
    uint32_t extensions_count = 0;
    const char** extensions = glfwGetRequiredInstanceExtensions(&extensions_count);
    SetupVulkan(extensions, extensions_count);
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    
    {    // Store letters in KeysDown[] array as both uppercase and lowercase + Handle GLUT translating CTRL+A..CTRL+Z as 1..26.
    // This is a hacky mess but GLUT is unable to distinguish e.g. a TAB key from CTRL+I so this is probably the best we can do here.
    if (c >= 1 && c <= 26)
        io.KeysDown[c] = io.KeysDown[c - 1 + 'a'] = io.KeysDown[c - 1 + 'A'] = true;
    else if (c >= 'a' && c <= 'z')
        io.KeysDown[c] = io.KeysDown[c - 'a' + 'A'] = true;
    else if (c >= 'A' && c <= 'Z')
        io.KeysDown[c] = io.KeysDown[c - 'A' + 'a'] = true;
    else
        io.KeysDown[c] = true;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
            ImGui_ImplVulkan_CreateFontsTexture(command_buffer);
    
    
    {    g_pd3dDevice = device;
    return true;
}
    
        if (install_callbacks)
    {
        s3ePointerRegister(S3E_POINTER_BUTTON_EVENT, ImGui_Marmalade_PointerButtonEventCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_KEY_EVENT, ImGui_Marmalade_KeyCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_CHAR_EVENT, ImGui_Marmalade_CharCallback, 0);
    }
    
    class PosixSequentialFile : public SequentialFile {
 private:
  std::string filename_;
  FILE* file_;
  int fd_;
  bool use_direct_io_;
  size_t logical_sector_size_;
    }
    
      // Write a key OUTSIDE of transaction
  s = txn_db->Put(write_options, 'abc', 'xyz');
  assert(s.ok());
    
    std::vector<CompressionType> GetSupportedCompressions();
    
      // Captures the state of the database in the latest backup
  // NOT a thread safe call
  // Flush will always trigger if 2PC is enabled.
  virtual Status CreateNewBackup(DB* db, bool flush_before_backup = false,
                                 std::function<void()> progress_callback =
                                     []() {}) {
    return CreateNewBackupWithMetadata(db, '', flush_before_backup,
                                       progress_callback);
  }