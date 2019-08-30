
        
            for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput + 2));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 3));
    }
    input_blob_names.push_back(GO(3));
    
    // TODO: Write gradient for this when needed
GRADIENT_NOT_IMPLEMENTED_YET(Floor);
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    template <typename T, class Context>
class BernoulliJSDOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    namespace caffe {
    }
    
    template <>
void hdf5_save_nd_dataset<float>(
    const hid_t file_id, const string& dataset_name, const Blob<float>& blob,
    bool write_diff) {
  int num_axes = blob.num_axes();
  hsize_t *dims = new hsize_t[num_axes];
  for (int i = 0; i < num_axes; ++i) {
    dims[i] = blob.shape(i);
  }
  const float* data;
  if (write_diff) {
    data = blob.cpu_diff();
  } else {
    data = blob.cpu_data();
  }
  herr_t status = H5LTmake_dataset_float(
      file_id, dataset_name.c_str(), num_axes, dims, data);
  CHECK_GE(status, 0) << 'Failed to make float dataset ' << dataset_name;
  delete[] dims;
}
    
    template <typename Dtype>
void ClipLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (propagate_down[0]) {
    const Dtype* bottom_data = bottom[0]->cpu_data();
    const Dtype* top_diff = top[0]->cpu_diff();
    Dtype* bottom_diff = bottom[0]->mutable_cpu_diff();
    const int count = bottom[0]->count();
    }
    }
    
    TYPED_TEST(NeuronLayerTest, TestExpGradientBase2Shift1Scale3) {
  typedef typename TypeParam::Dtype Dtype;
  const Dtype kBase = 2;
  const Dtype kScale = 3;
  const Dtype kShift = 1;
  this->TestExpGradient(kBase, kScale, kShift);
}
    
    template <typename Dtype>
void Solver<Dtype>::Step(int iters) {
  const int start_iter = iter_;
  const int stop_iter = iter_ + iters;
  int average_loss = this->param_.average_loss();
  losses_.clear();
  smoothed_loss_ = 0;
  iteration_timer_.Start();
    }
    
      // Set the signal handlers to the default.
  void UnhookHandler() {
    if (already_hooked_up) {
      struct sigaction sa;
      // Setup the sighup handler
      sa.sa_handler = SIG_DFL;
      // Restart the system call, if at all possible
      sa.sa_flags = SA_RESTART;
      // Block every signal during the handler
      sigfillset(&sa.sa_mask);
      // Intercept SIGHUP and SIGINT
      if (sigaction(SIGHUP, &sa, NULL) == -1) {
        LOG(FATAL) << 'Cannot uninstall SIGHUP handler.';
      }
      if (sigaction(SIGINT, &sa, NULL) == -1) {
        LOG(FATAL) << 'Cannot uninstall SIGINT handler.';
      }
    }
    }
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
    /**
 * This structure contains per-service-context state related to the oplog.
 */
class LocalOplogInfo {
public:
    static LocalOplogInfo* get(ServiceContext& service);
    static LocalOplogInfo* get(ServiceContext* service);
    static LocalOplogInfo* get(OperationContext* opCtx);
    }
    
    
    {}  // namespace mongo

    
    void Top::record(OperationContext* opCtx,
                 StringData ns,
                 LogicalOp logicalOp,
                 LockType lockType,
                 long long micros,
                 bool command,
                 Command::ReadWriteType readWriteType) {
    if (ns[0] == '?')
        return;
    }
    
    
    {    ASSERT_EQUALS(MatchExpression::TEXT, expr->matchType());
    std::unique_ptr<TextMatchExpression> textExpr(
        static_cast<TextMatchExpression*>(expr.release()));
    ASSERT_EQUALS(textExpr->getFTSQuery().getDiacriticSensitive(), true);
}
    
    #include 'mongo/client/dbclient_cursor.h'
#include 'mongo/db/catalog/collection.h'
#include 'mongo/db/catalog/database.h'
#include 'mongo/db/catalog/index_catalog.h'
#include 'mongo/db/client.h'
#include 'mongo/db/db_raii.h'
#include 'mongo/db/dbdirectclient.h'
#include 'mongo/db/exec/collection_scan.h'
#include 'mongo/db/exec/count_scan.h'
#include 'mongo/db/exec/working_set.h'
#include 'mongo/db/json.h'
#include 'mongo/db/matcher/expression_parser.h'
#include 'mongo/dbtests/dbtests.h'
#include 'mongo/util/fail_point.h'
#include 'mongo/util/fail_point_registry.h'
#include 'mongo/util/fail_point_service.h'
    
    
RegexMatcher::RegexMatcher(const UnicodeString &regexp,
                           uint32_t flags, UErrorCode &status) {
    init(status);
    if (U_FAILURE(status)) {
        return;
    }
    UParseError    pe;
    fPatternOwned      = RegexPattern::compile(regexp, flags, pe, status);
    if (U_FAILURE(status)) {
        return;
    }
    fPattern           = fPatternOwned;
    init2(RegexStaticSets::gStaticSets->fEmptyText, status);
}
    
    U_NAMESPACE_BEGIN
    
    CollationKey &
RuleBasedCollator::getCollationKey(const UnicodeString &s, CollationKey &key,
                                   UErrorCode &errorCode) const {
    return getCollationKey(s.getBuffer(), s.length(), key, errorCode);
}
    
    int32_t SearchIterator::next(UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        int32_t offset = getOffset();
        int32_t matchindex  = m_search_->matchedIndex;
        int32_t     matchlength = m_search_->matchedLength;
        m_search_->reset = FALSE;
        if (m_search_->isForwardSearching == TRUE) {
            int32_t textlength = m_search_->textLength;
            if (offset == textlength || matchindex == textlength || 
                (matchindex != USEARCH_DONE && 
                matchindex + matchlength >= textlength)) {
                // not enough characters to match
                setMatchNotFound();
                return USEARCH_DONE; 
            }
        }
        else {
            // switching direction. 
            // if matchedIndex == USEARCH_DONE, it means that either a 
            // setOffset has been called or that previous ran off the text
            // string. the iterator would have been set to offset 0 if a 
            // match is not found.
            m_search_->isForwardSearching = TRUE;
            if (m_search_->matchedIndex != USEARCH_DONE) {
                // there's no need to set the collation element iterator
                // the next call to next will set the offset.
                return matchindex;
            }
        }
    }
    }
    
    class BreakIterator;
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
    
        // Setup Platform/Renderer bindings
    ImGui_ImplGlfw_InitForVulkan(window, true);
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = g_Instance;
    init_info.PhysicalDevice = g_PhysicalDevice;
    init_info.Device = g_Device;
    init_info.QueueFamily = g_QueueFamily;
    init_info.Queue = g_Queue;
    init_info.PipelineCache = g_PipelineCache;
    init_info.DescriptorPool = g_DescriptorPool;
    init_info.Allocator = g_Allocator;
    init_info.MinImageCount = g_MinImageCount;
    init_info.ImageCount = wd->ImageCount;
    init_info.CheckVkResultFn = check_vk_result;
    ImGui_ImplVulkan_Init(&init_info, wd->RenderPass);
    
        // Setup GLUT display function
    // We will also call ImGui_ImplGLUT_InstallFuncs() to get all the other functions installed for us,
    // otherwise it is possible to install our own functions and call the imgui_impl_glut.h functions ourselves.
    glutDisplayFunc(glut_display_func);
    
            // Rendering
        ImGui::Render();
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

    
    
    {    g_hSwapChainWaitableObject = g_pSwapChain->GetFrameLatencyWaitableObject();
    assert(g_hSwapChainWaitableObject != NULL);
}
    
        // Upload texture to graphics system
    g_FontTexture = NULL;
    if (g_pd3dDevice->CreateTexture(width, height, 1, D3DUSAGE_DYNAMIC, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &g_FontTexture, NULL) < 0)
        return false;
    D3DLOCKED_RECT tex_locked_rect;
    if (g_FontTexture->LockRect(0, &tex_locked_rect, NULL, 0) != D3D_OK)
        return false;
    for (int y = 0; y < height; y++)
        memcpy((unsigned char *)tex_locked_rect.pBits + tex_locked_rect.Pitch * y, pixels + (width * bytes_per_pixel) * y, (width * bytes_per_pixel));
    g_FontTexture->UnlockRect(0);
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    DHTRoutingTable::~DHTRoutingTable() = default;
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) = 0;
    
    class DHTTaskFactoryImpl : public DHTTaskFactory {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::const_reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    // Delete Filter Factory which ignores snapshots
class DeleteISFilterFactory : public CompactionFilterFactory {
 public:
  std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context) override {
    if (context.is_manual_compaction) {
      return std::unique_ptr<CompactionFilter>(new DeleteISFilter());
    } else {
      return std::unique_ptr<CompactionFilter>(nullptr);
    }
  }
    }
    
    
    { private:
  BlobCompactionContext context_;
  const uint64_t current_time_;
  Statistics* statistics_;
  // It is safe to not using std::atomic since the compaction filter, created
  // from a compaction filter factroy, will not be called from multiple threads.
  mutable uint64_t expired_count_ = 0;
  mutable uint64_t expired_size_ = 0;
  mutable uint64_t evicted_count_ = 0;
  mutable uint64_t evicted_size_ = 0;
};
    
    // Simple implementation of SlicePart variants of Put().  Child classes
// can override these method with more performant solutions if they choose.
Status WriteBatchBase::Put(ColumnFamilyHandle* column_family,
                           const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
    
    {}  //  namespace rocksdb

    
    #if !defined(ROCKSDB_LITE) && !defined(OS_WIN)
    
      // destroy and open DB
  DB* db;
  Status s = DestroyDB(kDBPath, Options(db_opt, cf_descs[0].options));
  assert(s.ok());
  s = DB::Open(Options(db_opt, cf_descs[0].options), kDBPath, &db);
  assert(s.ok());
    
    bool Context::swap_out()
{
    return 0 == swapcontext(&ctx_, &swap_ctx_);
}
    
    bool zend::eval(std::string code, std::string filename)
{
    return zend_eval_stringl((char*) code.c_str(), code.length(), nullptr, (char *) filename.c_str()) == SUCCESS;
}

    
        ret = swSocket_unix_sendto(fd1,sock2_path,test_data,strlen(test_data));
    ASSERT_GT(ret, 0);
    
    static swThreadPool pool;
static int _pipe;
const static int N = 10000;
    
        private slots:
        void read() { redisAsyncHandleRead(m_ctx); }
        void write() { redisAsyncHandleWrite(m_ctx); }
    
        Q_OBJECT
    
        cache.set('test1', val1);
    ASSERT_EQ(cache.get('test1').get(), val1.get());
    val1.reset();
    ASSERT_EQ(dtor_num, 0);