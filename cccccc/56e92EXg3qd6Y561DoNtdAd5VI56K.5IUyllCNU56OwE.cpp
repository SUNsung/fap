
        
        #import <Foundation/Foundation.h>
    
    /// Index the given source file and store the results to \p indexStorePath.
///
/// \param primarySourceFile The source file to index.
///
/// \param indexUnitToken A unique identifier for this translation unit in the
/// form of a file path.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(SourceFile *primarySourceFile, StringRef indexUnitToken,
                    StringRef indexStorePath, bool indexSystemModules,
                    bool isDebugCompilation, StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
    
    
    {  static bool classof(const MarkupASTNode *N) {
    return N->getKind() == ASTNodeKind::Item;
  }
};
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
      unsigned getHashbangBufferID() const {
    return HashbangBufferID;
  }
    
    #endif // SWIFT_INDEX_INDEXDATACONSUMER_H

    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    
    {  Blob<Dtype> col_buffer_;
  Blob<Dtype> bias_multiplier_;
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_1 @f$
   *   -# ...
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_K @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the selector blob
   * @param top output Blob vector (length 1+)
   *   -# @f$ (S \times C \times H \times W) @f$ ()
   *        the filtered output @f$ x_1 @f$
   *        where S is the number of items
   *        that haven't been filtered
   *      @f$ (S \times C \times H \times W) @f$
   *        the filtered output @f$ x_K @f$
   *        where S is the number of items
   *        that haven't been filtered
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top);
    
    using namespace std;
    
    
    {} // namespace thd

    
      m = ra_->size[0];
  n = ra_->size[1];
  ldb = (m > n) ? m : n;
    
    void THDTensor_(bernoulli_FloatTensor)(THDTensor *self, THDGenerator *_generator,
                                       THDFloatTensor *p) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorBernoulli_FloatTensor, self, _generator, p),
    THDState::s_current_worker
  );
}
    
        private:
        void EnumerateStatefulNodesForRoot(ComputationNetwork& net, ComputationNodeBasePtr root, std::map<wstring, shared_ptr<IStatefulNode>>& statefulNodes)
        {
            for (const auto& node : net.GetAllNodesForRoot(root))
            {
                const auto& name = node->GetName();
                if (statefulNodes.find(name) != statefulNodes.end())
                    continue; // already in the list  --TODO: use insert()
                shared_ptr<IStatefulNode> pNode = dynamic_pointer_cast<IStatefulNode>(node);
                if (pNode) // if it is an IStatefulNode then report it
                    statefulNodes[name] = pNode;
            }
        }
    
            // M             * V
        // (8192 x 9304) * (9304 x 1024) -> (8192 x 1024)   // 78047.609 MFlops, 81.773 total MB
        // 7.86 ms / frame
        // We need to store: 4 cols of V and 1 row of M, that is 9304 x 4 x 5 = 186 KB. Too much for the cache!
        // (8192 x 1024) * (1024 x 9304) -> (8192 x 9304)   // 78047.609 MFlops, 17.086 total MB
        // 1.78 ms / frame
    
        if (newNode->NodeName() != nodeName) // TODO: This was not tested for earlier; I hope no code depends on this.
        InvalidArgument('ChangeNode: newNode must have the same name as the old node.');
    
    
    {public:
    SectionFile(std::wstring fileName, FileOptions options = fileOptionsRead, size_t size = 0);
    virtual ~SectionFile();
    Section* FileSection()
    {
        return m_fileSection;
    }
    SectionHeader* GetSection(size_t filePosition, size_t& size);
    void ReleaseSection(SectionHeader* section);
};
    
        // prepare features
    auto& featureNodes = m_net->FeatureNodes();
    
        // This prints a PROGRESS message with a percentage value of 0 to prevent timeouts on Philly
    // when executing long running non-training operations like PreCompute, CV, Eval, and Write
    static size_t TraceFakeProgress(size_t numIterationsBeforePrintingProgress, size_t numItersSinceLastPrintOfProgress)
    {
        size_t newNumItersSinceLastPrintOfProgress = numItersSinceLastPrintOfProgress;
        if (GetTracingFlag())
        {
            newNumItersSinceLastPrintOfProgress++;
            if (newNumItersSinceLastPrintOfProgress >= numIterationsBeforePrintingProgress)
            {
                printf('PROGRESS: %.2f%%\n', 0.0f);
                newNumItersSinceLastPrintOfProgress = 0;
            }
        }
    }
    
    class float4
{
    __m128 v; // value
private:
    // return the low 'float'
    float f0() const
    {
        float f;
        _mm_store_ss(&f, v);
        return f;
    }
    // construct from a __m128, assuming it is a f32 vector (needed for directly returning __m128 below)
    float4(const __m128& v)
        : v(v)
    {
    }
    // return as a __m128 --should this be a reference?
    operator __m128() const
    {
        return v;
    }
    // assign a __m128 (needed for using nested float4 objects inside this class, e.g. sum())
    float4& operator=(const __m128& other)
    {
        v = other;
        return *this;
    }
    }
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      // delete second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Delete(Key2(i));
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    
    {}  // namespace leveldb
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
    class CRC { };
    
    namespace leveldb {
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    TEST_F(TimeTests, test_asciitime) {
  const size_t epoch = 1491518994;
  const std::string expected = 'Thu Apr  6 22:49:54 2017 UTC';
    }
    
    namespace osquery {
    }
    
      short family{0};
    
      if (queue_ == nullptr) {
    return Status(1, 'Could not allocate CQueue object');
  }
    
    /**
 * @brief Subscription details for KernelEventPublisher events.
 */
struct KernelSubscriptionContext : public SubscriptionContext {
  /// The kernel event subscription type.
  osquery_event_t event_type;
    }
    
     public:
  SyslogEventPublisher() : EventPublisher(), errorCount_(0), lockFd_(-1) {}
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
    }
    
    TEST_F(OrderingTest, ordering) {
  EXPECT_EQ(-1, int(ordering::lt));
  EXPECT_EQ(0, int(ordering::eq));
  EXPECT_EQ(+1, int(ordering::gt));
}
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.try_dequeue(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    namespace {
    }
    
    EventBase* IOThreadPoolExecutor::getEventBase() {
  ensureActiveThreads();
  SharedMutex::ReadHolder r{&threadListLock_};
  return pickThread()->eventBase;
}
    
      std::lock_guard<std::mutex> entry_lock(mutex_);
  if (state_.load(std::memory_order_acquire) == SingletonHolderState::Living) {
    return;
  }
  if (state_.load(std::memory_order_acquire) ==
        SingletonHolderState::NotRegistered) {
    detail::singletonWarnCreateUnregisteredAndAbort(type());
  }
    
    /**
 * Declare *allocx() and mallctl*() as weak symbols. These will be provided by
 * jemalloc if we are using jemalloc, or will be nullptr if we are using another
 * malloc implementation.
 */
extern 'C' void* mallocx(size_t, int)
__attribute__((__weak__));
extern 'C' void* rallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t xallocx(void*, size_t, size_t, int)
__attribute__((__weak__));
extern 'C' size_t sallocx(const void*, int)
__attribute__((__weak__));
extern 'C' void dallocx(void*, int)
__attribute__((__weak__));
extern 'C' void sdallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t nallocx(size_t, int)
__attribute__((__weak__));
extern 'C' int mallctl(const char*, void*, size_t*, void*, size_t)
__attribute__((__weak__));
extern 'C' int mallctlnametomib(const char*, size_t*, size_t*)
__attribute__((__weak__));
extern 'C' int mallctlbymib(const size_t*, size_t, void*, size_t*, void*,
                            size_t)
__attribute__((__weak__));