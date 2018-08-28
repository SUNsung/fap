
        
          // Deletes the current owned object, if any.
  // Then takes ownership of a new object without incrementing the reference
  // count.
  // This function must be called with a reference that you own.
  //   this->reset(this->get()) is wrong!
  //   this->reset(this->release()) is OK.
  PyObjectStruct* reset(PyObjectStruct* p = NULL) {
    Py_XDECREF(ptr_);
    ptr_ = p;
    return ptr_;
  }
    
    // Returns the Pascal-cased last part of the proto file. For example,
// input of 'google/protobuf/foo_bar.proto' would result in 'FooBar'.
std::string GetFileNameBase(const FileDescriptor* descriptor) {
    std::string proto_file = descriptor->name();
    int lastslash = proto_file.find_last_of('/');
    std::string base = proto_file.substr(lastslash + 1);
    return UnderscoresToPascalCase(StripDotProto(base));
}
    
    
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<IIterator<DataBatch> *()> DataIteratorFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct DataIteratorReg
    : public dmlc::FunctionRegEntryBase<DataIteratorReg,
                                        DataIteratorFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register Iterators
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IO_ITE(MNISTIter)
 * .describe('Mnist data iterator')
 * .set_body([]() {
 *     return new PrefetcherIter(new MNISTIter());
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IO_ITER(name)                                    \
  DMLC_REGISTRY_REGISTER(::mxnet::DataIteratorReg, DataIteratorReg, name)
}  // namespace mxnet
#endif  // MXNET_IO_H_

    
    #endif  // PLUGIN_CAFFE_CAFFE_BLOB_H_

    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
    /*!
 * \brief Operator used in ThreadedEngine.
 */
struct ThreadedOpr final : public Opr,
                           public common::ObjectPoolAllocatable<ThreadedOpr> {
  /*! \brief The function to be invoked each time. */
  Engine::AsyncFn fn;
  /*! \brief The variable this operation will read from. */
  std::vector<ThreadedVar*> const_vars;
  /*! \brief The variable this operation will mutate. */
  std::vector<ThreadedVar*> mutable_vars;
  /*! \brief The property of the operator */
  FnProperty prop;
  /*! \brief The name of the operator */
  const char* opr_name{nullptr};
  /*!
   * \brief Whether this is an temporary operator
   *        that can be deleted right after the operation completed.
   */
  bool temporary{false};
  /*!
   * \brief Whether this is a WaitForVar operation
   */
  bool wait{false};
  /*!
   * \brief Cast a Opr pointer to ThreadedOpr pointer
   * \param ptr pointer from base.
   * \return a casted pointer.
   */
  inline static ThreadedOpr* CastFromBase(Opr* ptr) {
    return ptr->Cast<ThreadedOpr>();
  }
  // define possible debug information
  DEFINE_ENGINE_DEBUG_INFO(ThreadedOpr);
  /*! \brief exception_ptr associated with the ThreadedOpr */
  std::shared_ptr<std::exception_ptr> opr_exception;
};  // struct ThreadedOpr
    
      // get the shape hints
  std::string shape_hints_key = std::string(attr_name) + '_hints';
  if (ret.attrs.count(shape_hints_key)) {
    nnvm::NodeEntryMap<AttrType> shape_hints =
      ret.GetAttr<nnvm::NodeEntryMap<AttrType>>(shape_hints_key);
    for (const auto& kv : shape_hints) {
      nnvm::NodeEntry e = kv.first;
      if (idx.exist(e.node.get())) {
        rshape[idx.entry_id(kv.first)] = kv.second;
      }
    }
  }
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    
namespace xgboost {
    }
    
    DMLC_REGISTRY_FILE_TAG(sparse_page_lz4_format);
    
    
    {    elem_of_each_node_[left_node_id] = Elem(begin, split_pt, left_node_id);
    elem_of_each_node_[right_node_id] = Elem(split_pt, e.end, right_node_id);
    elem_of_each_node_[node_id] = Elem(nullptr, nullptr, -1);
  }
    
    class SparsePageDMatrix : public DMatrix {
 public:
  explicit SparsePageDMatrix(std::unique_ptr<DataSource>&& source,
                             std::string  cache_info)
      : source_(std::move(source)), cache_info_(std::move(cache_info)) {
  }
    }
    
    int main(int, char**)
{
    IwGxInit();
    }
    
            // Rendering
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC1 sd;
    {
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount = NUM_BACK_BUFFERS;
        sd.Width = 0;
        sd.Height = 0;
        sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.Flags = DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        sd.AlphaMode = DXGI_ALPHA_MODE_UNSPECIFIED;
        sd.Scaling = DXGI_SCALING_STRETCH;
        sd.Stereo = FALSE;
    }
    }
    
    
    {    ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None || io.MouseDrawCursor)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
    }
    else
    {
        // Show OS mouse cursor
        // FIXME-PLATFORM: Unfocused windows seems to fail changing the mouse cursor with GLFW 3.2, but 3.3 works here.
        glfwSetCursor(g_Window, g_MouseCursors[imgui_cursor] ? g_MouseCursors[imgui_cursor] : g_MouseCursors[ImGuiMouseCursor_Arrow]);
        glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    }
}
    
            D3D12_ROOT_SIGNATURE_DESC desc = {};
        desc.NumParameters = _countof(param);
        desc.pParameters = param;
        desc.NumStaticSamplers = 1;
        desc.pStaticSamplers = &staticSampler;
        desc.Flags =
            D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT |
            D3D12_ROOT_SIGNATURE_FLAG_DENY_HULL_SHADER_ROOT_ACCESS |
            D3D12_ROOT_SIGNATURE_FLAG_DENY_DOMAIN_SHADER_ROOT_ACCESS |
            D3D12_ROOT_SIGNATURE_FLAG_DENY_GEOMETRY_SHADER_ROOT_ACCESS;