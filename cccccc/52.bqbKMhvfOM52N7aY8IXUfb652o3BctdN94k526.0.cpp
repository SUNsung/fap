
        
        struct PageletTransport final : Transport, Synchronizable {
  PageletTransport(
    const String& url, const Array& headers, const String& postData,
    const String& remoteHost,
    const std::set<std::string> &rfc1867UploadedFiles,
    const Array& files, int timeoutSeconds);
    }
    
      if (!inname && !stream) {
    return NULL;
  }
    
      struct Key final {
    Array extract() const;
    void insert(const ActRec* fp, int32_t prevPc);
    }
    
    struct StreamContext;
struct StreamFilter;
    
    /*! \brief Applies an elastic net penalty and per-leaf penalty. */
class ElasticNet final : public SplitEvaluator {
 public:
  explicit ElasticNet(std::unique_ptr<SplitEvaluator> inner) {
    if (inner) {
      LOG(FATAL) << 'ElasticNet does not accept an inner SplitEvaluator';
    }
  }
  void Init(
      const std::vector<std::pair<std::string, std::string> >& args) override {
    params_.InitAllowUnknown(args);
  }
    }
    
    // array to help compression of decompression.
template<typename DType>
class CompressArray {
 public:
  // the data content.
  std::vector<DType> data;
  // Decompression helper
  // number of chunks
  inline int num_chunk() const {
    CHECK_GT(raw_chunks_.size(), 1);
    return static_cast<int>(raw_chunks_.size() - 1);
  }
  // raw bytes
  inline size_t RawBytes() const {
    return raw_chunks_.back() * sizeof(DType);
  }
  // encoded bytes
  inline size_t EncodedBytes() const {
    return encoded_chunks_.back() +
        (encoded_chunks_.size() + raw_chunks_.size()) * sizeof(bst_uint);
  }
  // load the array from file.
  inline void Read(dmlc::SeekStream* fi);
  // run decode on chunk_id
  inline void Decompress(int chunk_id);
  // Compression helper
  // initialize the compression chunks
  inline void InitCompressChunks(const std::vector<bst_uint>& chunk_ptr);
  // initialize the compression chunks
  inline void InitCompressChunks(size_t chunk_size, size_t max_nchunk);
  // run decode on chunk_id, level = -1 means default.
  inline void Compress(int chunk_id, bool use_hc);
  // save the output buffer into file.
  inline void Write(dmlc::Stream* fo);
    }
    
    #if DMLC_ENABLE_STD_THREAD
/*!
 * \brief A threaded writer to write sparse batch page to sharded files.
 */
class SparsePageWriter {
 public:
  /*!
   * \brief constructor
   * \param name_shards name of shard files.
   * \param format_shards format of each shard.
   * \param extra_buffer_capacity Extra buffer capacity before block.
   */
  explicit SparsePageWriter(
      const std::vector<std::string>& name_shards,
      const std::vector<std::string>& format_shards,
      size_t extra_buffer_capacity);
  /*! \brief destructor, will close the files automatically */
  ~SparsePageWriter();
  /*!
   * \brief Push a write job to the writer.
   * This function won't block,
   * writing is done by another thread inside writer.
   * \param page The page to be written
   */
  void PushWrite(std::shared_ptr<SparsePage>&& page);
  /*!
   * \brief Allocate a page to store results.
   *  This function can block when the writer is too slow and buffer pages
   *  have not yet been recycled.
   * \param out_page Used to store the allocated pages.
   */
  void Alloc(std::shared_ptr<SparsePage>* out_page);
    }
    
    #pragma once
    
      /**
   * @brief Return a string representation of a udev property.
   *
   * @param device the udev device pointer.
   * @param property the udev property identifier string.
   * @return string representation of the property or empty if null.
   */
  static std::string getValue(struct udev_device* device,
                              const std::string& property);
    
        // Use the basic 'force' flag to check implicit SQL usage.
    auto flags =
        SQL('select default_value from osquery_flags where name = 'force'');
    if (flags.rows().size() > 0) {
      r['flag_test'] = flags.rows().back().at('default_value');
    }
    
    using IFirehoseLogForwarder = AwsLogForwarder<
    Aws::Firehose::Model::Record,
    Aws::Firehose::FirehoseClient,
    Aws::Firehose::Model::PutRecordBatchOutcome,
    Aws::Vector<Aws::Firehose::Model::PutRecordBatchResponseEntry>>;
    
    // Changelog:
// - v0.50: (2017/08/16) imported from https://github.com/Vuhdo/imgui_freetype into http://www.github.com/ocornut/imgui_club, updated for latest changes in ImFontAtlas, minor tweaks.
// - v0.51: (2017/08/26) cleanup, optimizations, support for ImFontConfig::RasterizerFlags, ImFontConfig::RasterizerMultiply.
// - v0.52: (2017/09/26) fixes for imgui internal changes
// - v0.53: (2017/10/22) minor inconsequential change to match change in master (removed an unnecessary statement)
// - v0.54: (2018/01/22) fix for addition of ImFontAtlas::TexUvscale member
// - v0.55: (2018/02/04) moved to main imgui repository (away from http://www.github.com/ocornut/imgui_club)
// - v0.56: (2018/06/08) added support for ImFontConfig::GlyphMinAdvanceX, GlyphMaxAdvanceX
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
        FrameContext* frameCtxt = &g_frameContext[nextFrameIndex % NUM_FRAMES_IN_FLIGHT];
    UINT64 fenceValue = frameCtxt->FenceValue;
    if (fenceValue != 0) // means no fence was signaled
    {
        frameCtxt->FenceValue = 0;
        g_fence->SetEventOnCompletion(fenceValue, g_fenceEvent);
        waitableObjects[1] = g_fenceEvent;
        numWaitableObjects = 2;
    }
    
    // Win32 Data
static HWND                 g_hWnd = 0;
static INT64                g_Time = 0;
static INT64                g_TicksPerSecond = 0;
static ImGuiMouseCursor     g_LastMouseCursor = ImGuiMouseCursor_COUNT;