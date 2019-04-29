
        
        
    {}  // namespace tensorflow

    
    
    {}  // namespace tensorflow

    
    namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Updates the plan's work area with space allocated by a new scratch
  // allocator. This facilitates plan reuse with scratch allocators.
  //
  // This requires that the plan was originally created using a scratch
  // allocator, as otherwise scratch space will have been allocated internally
  // by cuFFT.
  virtual void UpdatePlanWithScratchAllocator(
      Stream *stream, Plan *plan, ScratchAllocator *scratch_allocator) = 0;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Allows to represent a value that is either a host scalar or a scalar stored
// on the GPU device.
template <typename ElemT>
class HostOrDeviceScalar {
 public:
  // Not marked as explicit because when using this constructor, we usually want
  // to set this to a compile-time constant.
  HostOrDeviceScalar(ElemT value) : value_(value), is_pointer_(false) {}
  explicit HostOrDeviceScalar(const DeviceMemory<ElemT>& pointer)
      : pointer_(pointer), is_pointer_(true) {
    CHECK_EQ(1, pointer.ElementCount());
  }
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief experimental wsummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType>
struct WQSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief maximum weight */
    RType wmin;
    /*! \brief the value of data */
    DType value;
    // constructor
    XGBOOST_DEVICE Entry() {}  // NOLINT
    // constructor
    XGBOOST_DEVICE Entry(RType rmin, RType rmax, RType wmin, DType value)
        : rmin(rmin), rmax(rmax), wmin(wmin), value(value) {}
    /*!
     * \brief debug function,  check Valid
     * \param eps the tolerate level for violating the relation
     */
    inline void CheckValid(RType eps = 0) const {
      CHECK(rmin >= 0 && rmax >= 0 && wmin >= 0) << 'nonneg constraint';
      CHECK(rmax- rmin - wmin > -eps) <<  'relation constraint: min/max';
    }
    /*! \return rmin estimation for v strictly bigger than value */
    XGBOOST_DEVICE inline RType RMinNext() const {
      return rmin + wmin;
    }
    /*! \return rmax estimation for v strictly smaller than value */
    XGBOOST_DEVICE inline RType RMaxPrev() const {
      return rmax - wmin;
    }
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // entry in the queue
    struct QEntry {
      // value of the instance
      DType value;
      // weight of instance
      RType weight;
      // default constructor
      QEntry() = default;
      // constructor
      QEntry(DType value, RType weight)
          : value(value), weight(weight) {}
      // comparator on value
      inline bool operator<(const QEntry &b) const {
        return value < b.value;
      }
    };
    // the input queue
    std::vector<QEntry> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      if (qtail == 0 || queue[qtail - 1].value != x) {
        queue[qtail++] = QEntry(x, w);
      } else {
        queue[qtail - 1].weight += w;
      }
    }
    inline void MakeSummary(WQSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = 0;
      // start update sketch
      RType wsum = 0;
      // construct data with unique weights
      for (size_t i = 0; i < qtail;) {
        size_t j = i + 1;
        RType w = queue[i].weight;
        while (j < qtail && queue[j].value == queue[i].value) {
          w += queue[j].weight; ++j;
        }
        out->data[out->size++] = Entry(wsum, wsum + w, w, queue[i].value);
        wsum += w; i = j;
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  // constructor
  WQSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*!
   * \return the maximum error of the Summary
   */
  inline RType MaxError() const {
    RType res = data[0].rmax - data[0].rmin - data[0].wmin;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].RMaxPrev() - data[i - 1].RMinNext(), res);
      res = std::max(data[i].rmax - data[i].rmin - data[i].wmin, res);
    }
    return res;
  }
  /*!
   * \brief query qvalue, start from istart
   * \param qvalue the value we query for
   * \param istart starting position
   */
  inline Entry Query(DType qvalue, size_t &istart) const { // NOLINT(*)
    while (istart < size && qvalue > data[istart].value) {
      ++istart;
    }
    if (istart == size) {
      RType rmax = data[size - 1].rmax;
      return Entry(rmax, rmax, 0.0f, qvalue);
    }
    if (qvalue == data[istart].value) {
      return data[istart];
    } else {
      if (istart == 0) {
        return Entry(0.0f, 0.0f, 0.0f, qvalue);
      } else {
        return Entry(data[istart - 1].RMinNext(),
                     data[istart].RMaxPrev(),
                     0.0f, qvalue);
      }
    }
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const WQSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void MakeFromSorted(const Entry* entries, size_t n) {
    size = 0;
    for (size_t i = 0; i < n;) {
      size_t j = i + 1;
      // ignore repeated values
      for (; j < n && entries[j].value == entries[i].value; ++j) {}
      data[size++] = Entry(entries[i].rmin, entries[i].rmax, entries[i].wmin,
                           entries[i].value);
      i = j;
    }
  }
  /*!
   * \brief debug function, validate whether the summary
   *  run consistency check to check if it is a valid summary
   * \param eps the tolerate error level, used when RType is floating point and
   *        some inconsistency could occur due to rounding error
   */
  inline void CheckValid(RType eps) const {
    for (size_t i = 0; i < size; ++i) {
      data[i].CheckValid(eps);
      if (i != 0) {
        CHECK(data[i].rmin >= data[i - 1].rmin + data[i - 1].wmin) << 'rmin range constraint';
        CHECK(data[i].rmax >= data[i - 1].rmax + data[i].wmin) << 'rmax range constraint';
      }
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
    }
    }
    }
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name);
};
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    auto& offset_vec = page->offset.HostVector();
    if (!fi->Read(&offset_vec)) return false;
    auto& data_vec = page->data.HostVector();
    CHECK_NE(page->offset.Size(), 0U) << 'Invalid SparsePage file';
    data_vec.resize(offset_vec.back());
    if (page->data.Size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(data_vec),
                        (page->data).Size() * sizeof(Entry)),
               (page->data).Size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
    
    const SparsePage& SimpleCSRSource::Value() const {
  return page_;
}
    
    class SimpleBatchIteratorImpl : public BatchIteratorImpl {
 public:
  explicit SimpleBatchIteratorImpl(SparsePage* page) : page_(page) {}
  const SparsePage& operator*() const override {
    CHECK(page_ != nullptr);
    return *page_;
  }
  void operator++() override { page_ = nullptr; }
  bool AtEnd() const override { return page_ == nullptr; }
  SimpleBatchIteratorImpl* Clone() override {
    return new SimpleBatchIteratorImpl(*this);
  }
    }
    
        VkPipelineColorBlendStateCreateInfo blend_info = {};
    blend_info.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    blend_info.attachmentCount = 1;
    blend_info.pAttachments = color_attachment;
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    // Set default OpenGL3 loader to be gl3w
#if !defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_CUSTOM)
#define IMGUI_IMPL_OPENGL_LOADER_GL3W
#endif
    
        ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}

    
        // Create shaders
    const GLchar* vertex_shader_with_version[2] = { g_GlslVersionString, vertex_shader };
    g_VertHandle = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(g_VertHandle, 2, vertex_shader_with_version, NULL);
    glCompileShader(g_VertHandle);
    CheckShader(g_VertHandle, 'vertex shader');
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    
    // ============
    // string types
    // ============
    
        // print values
    std::cout << object << '\n';
    std::cout << *res1.first << ' ' << std::boolalpha << res1.second << '\n';