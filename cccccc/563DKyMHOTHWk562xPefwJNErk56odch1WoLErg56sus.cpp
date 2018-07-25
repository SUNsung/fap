
        
        namespace content {
class RenderProcessHost;
class Shell;
}
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    class NwClipboardSetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardSetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        // following code is modified from `DesktopCaptureChooseDesktopMediaFunctionBase::OnPickerDialogResults`
    // in chrome/browser/extensions/api/desktop_capture/desktop_capture_base.cc
    
    /*!
 * \brief convert Rcpp's Dimension to internal shape vector
 * This will reverse the shape layout internally
 * \param rshape The dimension in R
 * \return A internal vector representation of shapes in mxnet.
 */
inline std::vector<mx_uint> Dim2InternalShape(const Rcpp::Dimension &rshape) {
  std::vector<mx_uint> shape(rshape.size());
  for (size_t i = 0; i < rshape.size(); ++i) {
    shape[rshape.size() - i - 1] = rshape[i];
  }
  return shape;
}
    
    namespace mxnet {
namespace R {
/*! \brief The Rcpp Symbol class of MXNet */
class Executor : public MXNetMovable<Executor> {
 public:
  /*! \return typename from R side. */
  inline static const char* TypeName() {
    return 'MXExecutor';
  }
  /*!
   * \return Get reference of the arg arrays of executor.
   */
  const Rcpp::List& arg_arrays() const {
    return *arg_arrays_;
  }
  /*!
   * \return Get reference of the aux arrays of executor.
   */
  const Rcpp::List& aux_arrays() const {
    return *aux_arrays_;
  }
  /*!
   * \return Get reference of gradient arrays of executor.
   */
  const Rcpp::List& grad_arrays() const {
    return *grad_arrays_;
  }
  /*!
   * \return Get reference of gradient arrays of executor.
   */
  const Rcpp::List& out_arrays() const {
    return *out_arrays_;
  }
  /*!
   * \return Get the arg arrays of executor.
   */
  Rcpp::List GetArgArrays() const {
    return CloneArray(*arg_arrays_);
  }
  /*!
   * \return Get the grad arrays of executor.
   */
  Rcpp::List GetGradArrays() const {
    return CloneArray(*grad_arrays_);
  }
  /*!
   * \return Get the auxiliary arrays of executor.
   */
  Rcpp::List GetAuxArrays() const {
    return CloneArray(*aux_arrays_);
  }
  /*!
   * \return Get the outputx arrays of executor.
   */
  Rcpp::List GetOuputArrays() const {
    return CloneArray(*out_arrays_);
  }
  /*!
   * \brief Update the arg_arrays of executor, based on name-matching.
   * \param array The array to update
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   * \return a result executor, moved from exec.
   */
  void UpdateArgArray(const Rcpp::List& array,
                      bool match_name,
                      bool allow_null);
  /*!
   * \brief Update the aux_arrays of executor, based on name-matching.
   * \param array The array to update
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   * \return a result executor, moved from exec.
   */
  void UpdateAuxArray(const Rcpp::List& array,
                      bool match_name,
                      bool allow_null);
  /*!
   * \brief Update the grad_arrays of executor, based on name-matching.
   * \param array The array to update
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   * \return a result executor, moved from exec.
   */
  void UpdateGradArray(const Rcpp::List& array,
                      bool match_name,
                      bool allow_null);
  /*!
   * \brief Peform a forward operation on exec, this will set the out_arrays.
   * \param is_train whether it is training phase.
   * \param kwargs additional parameters.
   * \return a result executor, moved from exec.
   */
  void Forward(bool is_train,
               const Rcpp::List& kwargs);
  /*!
   * \brief Peform a backward operation on exec, this will set the grad_arrays.
   * \param output_grads the gradient on outputs, to be propagated back.
   * \return a result executor, moved from exec.
   */
  void Backward(const Rcpp::List& output_grads);
  /*!
   * \brief Create a new R Executor by bind on symbol
   * \param symbol The R symbol to bind.
   * \param context The device to bind.
   * \param arg_arrays The argument arrays giving the initial value of arguments.
   * \param aux_arrays The auxiliary state arrays giving the initial value of auxiliary states.
   * \param grad_reqs Array of booleans, giving the requirements of gradient.
   */
  static RObjectType Bind(const Symbol::RObjectType& symbol,
                          const Context::RObjectType& context,
                          const Rcpp::List& arg_arrays,
                          const Rcpp::List& aux_arrays,
                          const Rcpp::List& grad_reqs);
  /*! \brief static function to initialize the Rcpp functions */
  static void InitRcppModule();
  // destructor
  ~Executor() {
    delete out_arrays_;
    delete arg_arrays_;
    delete grad_arrays_;
    delete aux_arrays_;
    }
    }
    }
    }
    
    ArrayDataIter::ArrayDataIter(const Rcpp::NumericVector& data,
                             const Rcpp::NumericVector& label,
                             const Rcpp::NumericVector& unif_rnds,
                             int batch_size,
                             bool shuffle) : counter_(0) {
  Rcpp::IntegerVector dshape = data.attr('dim');
  Rcpp::IntegerVector lshape = label.attr('dim');
  if (dshape[dshape.size() - 1] != lshape[lshape.size() - 1]) {
    if (dshape[0] == lshape[0]) {
      RLOG_FATAL << 'Seems X, y was passed in a Row major way, '
                 << 'MXNetR adopts a column major convention.\n'
                 << 'Please pass in transpose of X instead';
    } else {
      RLOG_FATAL << 'Data and label shape in-consistent';
    }
  }
  num_data = lshape[lshape.size() - 1];
  std::vector<size_t> order(num_data);
  for (size_t i = 0; i < order.size(); ++i) {
    order[i] = i;
  }
    }
    
    /*
 * Given a computation graph and a set of input node entries, this function cuts
 * the node entries and creates new variable nodes as the input nodes of the
 * subgraph. It returns the nodes that connect to the subgraph directly and
 * the names of the new variable nodes.
 */
bool CutGraphInputs(const std::vector<nnvm::NodeEntry *> &input_entries,
                    bool skip_var, std::vector<nnvm::NodeEntry> *orig_entries) {
  struct pred_entry {
    nnvm::NodeEntry e;
    explicit pred_entry(const nnvm::NodeEntry &_e): e(_e) {}
    bool operator()(const nnvm::NodeEntry e1) {
      return e.node == e1.node && e.index == e1.index;
    }
  };
    }
    
    struct ConcatGrad {
  const char *op_name;
  std::vector<nnvm::NodeEntry> operator()(const nnvm::NodePtr& n,
                                          const std::vector<nnvm::NodeEntry>& ograds) const {
    CHECK_EQ(ograds.size(), 1);
    std::vector<nnvm::NodeEntry> heads(ograds.begin(), ograds.end());
#if MXNET_USE_MKLDNN == 1
    for (size_t i = 0; i < n->inputs.size(); i++) {
      heads.push_back(n->inputs[i]);
    }
#endif
    return MakeGradNode(op_name, n, heads, n->attrs.dict);
  }
};
    
      auto deduce = [&](std::vector<AttrType> *vec, size_t size, const char *name) {
      for (size_t i = 0; i < size; ++i) {
        CHECK(assign(&dattr, (*vec)[i]))
          << 'Incompatible attr in node ' << attrs.name << ' at ' << i << '-th '
          << name << ': ' << 'expected ' << attr_string(dattr)
          << ', got ' << attr_string((*vec)[i]);
      }
    };
  deduce(in_attrs, in_size, 'input');
  if (reverse_infer) deduce(out_attrs, out_size, 'output');
    
            // rather than search for all matches, only try 4 candidate locations,
        // chosen based on 4 different hash functions of different lengths.
        // this strategy is inspired by LZO; hashing is unrolled here using the
        // 'hc' macro
        h = stb__hc3(q,0, 1, 2); h1 = STB__SCRAMBLE(h);
        t = chash[h1]; if (t) STB__TRY(t,0);
        h = stb__hc2(q,h, 3, 4); h2 = STB__SCRAMBLE(h);
        h = stb__hc2(q,h, 5, 6);        t = chash[h2]; if (t) STB__TRY(t,1);
        h = stb__hc2(q,h, 7, 8); h3 = STB__SCRAMBLE(h);
        h = stb__hc2(q,h, 9,10);        t = chash[h3]; if (t) STB__TRY(t,1);
        h = stb__hc2(q,h,11,12); h4 = STB__SCRAMBLE(h);
        t = chash[h4]; if (t) STB__TRY(t,1);
    
        ALLEGRO_LOCKED_REGION *locked_img = al_lock_bitmap(img, al_get_bitmap_format(img), ALLEGRO_LOCK_WRITEONLY);
    if (!locked_img)
    {
        al_destroy_bitmap(img);
        return false;
    }
    memcpy(locked_img->data, pixels, sizeof(int)*width*height);
    al_unlock_bitmap(img);
    
        ImGui_ImplDX12_CreateFontsTexture();
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
        // Create The Shader Modules:
    {
        VkShaderModuleCreateInfo vert_info = {};
        vert_info.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        vert_info.codeSize = sizeof(__glsl_shader_vert_spv);
        vert_info.pCode = (uint32_t*)__glsl_shader_vert_spv;
        err = vkCreateShaderModule(g_Device, &vert_info, g_Allocator, &vert_module);
        check_vk_result(err);
        VkShaderModuleCreateInfo frag_info = {};
        frag_info.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        frag_info.codeSize = sizeof(__glsl_shader_frag_spv);
        frag_info.pCode = (uint32_t*)__glsl_shader_frag_spv;
        err = vkCreateShaderModule(g_Device, &frag_info, g_Allocator, &frag_module);
        check_vk_result(err);
    }
    
    // Process Win32 mouse/keyboard inputs. 
// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
// PS: In this Win32 handler, we use the capture API (GetCapture/SetCapture/ReleaseCapture) to be able to read mouse coordinations when dragging mouse outside of our window bounds.
// PS: We treat DBLCLK messages as regular mouse down messages, so this code will work on windows classes that have the CS_DBLCLKS flag set. Our own example app code doesn't set this flag.
IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui::GetCurrentContext() == NULL)
        return 0;
    }
    
    
    {        // Create the constant buffer
        {
            D3D11_BUFFER_DESC desc;
            desc.ByteWidth = sizeof(VERTEX_CONSTANT_BUFFER);
            desc.Usage = D3D11_USAGE_DYNAMIC;
            desc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
            desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
            desc.MiscFlags = 0;
            g_pd3dDevice->CreateBuffer(&desc, NULL, &g_pVertexConstantBuffer);
        }
    }
    
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, g_ElementsHandle);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, (GLsizeiptr)cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx), (const GLvoid*)cmd_list->IdxBuffer.Data, GL_STREAM_DRAW);
    
    #include <stdint.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include 'imgui.h'
#include 'imgui_impl_allegro5.h'