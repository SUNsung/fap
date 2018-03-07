
        
        class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WebRequest);
};
    
    #include 'content/public/browser/web_contents_observer.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
    namespace internal {
    }
    
    LoginHandler::LoginHandler(net::AuthChallengeInfo* auth_info,
                           net::URLRequest* request)
    : handled_auth_(false),
      auth_info_(auth_info),
      request_(request),
      render_process_host_id_(0),
      render_frame_id_(0) {
  content::ResourceRequestInfo::ForRequest(request_)->GetAssociatedRenderFrame(
      &render_process_host_id_,  &render_frame_id_);
    }
    
    #include 'net/url_request/url_request_job_factory.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(URLRequestBufferJob);
};
    
    #endif  // ATOM_BROWSER_UI_TRAY_ICON_GTK_H_

    
    #include 'leveldb/status.h'
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    namespace leveldb {
    }
    
    #endif  // STORAGE_LEVELDB_DB_FILENAME_H_

    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == NULL) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = NULL;
    Table* table = NULL;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(*options_, file, file_size, &table);
    }
    }
    }
    
    namespace leveldb {
    }
    
    TEST(FindFileTest, OverlappingFiles) {
  Add('150', '600');
  Add('400', '500');
  disjoint_sorted_files_ = false;
  ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('601', '700'));
  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
  ASSERT_TRUE(Overlaps('450', '700'));
  ASSERT_TRUE(Overlaps('600', '700'));
}
    
    
    {}  // namespace leveldb
    
    // Return a new filter policy that uses a bloom filter with approximately
// the specified number of bits per key.  A good value for bits_per_key
// is 10, which yields a filter with ~ 1% false positive rate.
//
// Callers must delete the result after any database that is using the
// result has been closed.
//
// Note: if you are using a custom comparator that ignores some parts
// of the keys being compared, you must not use NewBloomFilterPolicy()
// and must provide your own FilterPolicy that also ignores the
// corresponding parts of the keys.  For example, if the comparator
// ignores trailing spaces, it would be incorrect to use a
// FilterPolicy (like NewBloomFilterPolicy) that does not ignore
// trailing spaces in keys.
extern const FilterPolicy* NewBloomFilterPolicy(int bits_per_key);
    
      // Drop the first 'n' bytes from this slice.
  void remove_prefix(size_t n) {
    assert(n <= size());
    data_ += n;
    size_ -= n;
  }
    
    
    {    IntrinsicParams();
    IntrinsicParams(Vec2d f, Vec2d c, Vec4d k, double alpha = 0);
    IntrinsicParams operator+(const Mat& a);
    IntrinsicParams& operator =(const Mat& a);
    void Init(const cv::Vec2d& f, const cv::Vec2d& c, const cv::Vec4d& k = Vec4d(0,0,0,0), const double& alpha = 0);
};
    
    using namespace std;
using namespace cv;
    
    #include 'opencv2/core.hpp'
    
        // Extension: ARB_copy_buffer
    extern void (CODEGEN_FUNCPTR *CopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdBlas.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    //
// BEGIN OF CUSTOM FUNCTIONS
//
    
    
    {
    {    std::ostringstream oss;
    std::copy(line.begin() + options_index,
              line.end(),
              std::ostream_iterator<std::string>(oss, ' '));
    r['options'] = oss.str();
    results.push_back(r);
  }
}
    
      /// An internal status protecting database access.
  static std::atomic<bool> kDBInitialized;
    
      /// Access all plugins.
  static AutoRegisterSet& plugins() {
    static AutoRegisterSet plugins_;
    return plugins_;
  }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    
    {    // Code should never reach this point
    VLOG(1) << 'Could not start extension process: ' << exec_path;
    Initializer::shutdown(EXIT_FAILURE);
    return std::shared_ptr<PlatformProcess>();
  }
    
    extern JSClass  *jsb_cocostudio_timeline_Frame_class;
extern JSObject *jsb_cocostudio_timeline_Frame_prototype;
    
    
    
    
    
    #endif // __cocos2dx_csloader_h__

    
    
    
        void initShader( void );
public:
    GLESDebugDraw();
    
    			b2PrismaticJointDef pjd;
			pjd.Initialize(ground, m_platform, b2Vec2(0.0f, 5.0f), b2Vec2(1.0f, 0.0f));
    
    int main(int, char**)
{
    // Setup Allegro
    al_init();
    al_install_keyboard();
    al_install_mouse();
    al_init_primitives_addon();
    al_set_new_display_flags(ALLEGRO_RESIZABLE);
    ALLEGRO_DISPLAY* display = al_create_display(1280, 720);
    al_set_window_title(display, 'ImGui Allegro 5 example');
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_mouse_event_source());
    }
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_ImplDX10_Init(hwnd, g_pd3dDevice);
    
    void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
    
    static int const                    NUM_BACK_BUFFERS = 3;
static ID3D12Device*                g_pd3dDevice = NULL;
static ID3D12DescriptorHeap*        g_pd3dRtvDescHeap = NULL;
static ID3D12DescriptorHeap*        g_pd3dSrvDescHeap = NULL;
static ID3D12CommandQueue*          g_pd3dCommandQueue = NULL;
static ID3D12GraphicsCommandList*   g_pd3dCommandList = NULL;
static ID3D12Fence*                 g_fence = NULL;
static HANDLE                       g_fenceEvent = NULL;
static UINT64                       g_fenceLastSignaledValue = 0;
static IDXGISwapChain3*             g_pSwapChain = NULL;
static HANDLE                       g_hSwapChainWaitableObject = NULL;
static ID3D12Resource*              g_mainRenderTargetResource[NUM_BACK_BUFFERS] = {};
static D3D12_CPU_DESCRIPTOR_HANDLE  g_mainRenderTargetDescriptor[NUM_BACK_BUFFERS] = {};
    
      InstructionPointer functionAddress() const noexcept {
    return functionAddress_;
  }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
    // JNI's NIO support has some awkward preconditions and error reporting. This
// class provides much more user-friendly access.
class FBEXPORT JByteBuffer : public JavaClass<JByteBuffer> {
 public:
  static constexpr const char* kJavaDescriptor = 'Ljava/nio/ByteBuffer;';
    }
    
        if (keyFilePassword.length()) {
        context.password.reset(new std::string(keyFilePassword));
        SSL_CTX_set_default_passwd_cb_userdata(context.context, context.password.get());
        SSL_CTX_set_default_passwd_cb(context.context, Context::passwordCallback);
    }
    
    template <const bool isServer>
struct WIN32_EXPORT WebSocket : uS::Socket, WebSocketState<isServer> {
protected:
    std::string fragmentBuffer;
    enum CompressionStatus : char {
        DISABLED,
        ENABLED,
        COMPRESSED_FRAME
    } compressionStatus;
    unsigned char controlTipLength = 0, hasOutstandingPong = false;
    }
    
    void Loop::run() {
    // updated for consistency with libuv impl. behaviour
    timepoint = std::chrono::system_clock::now();
    while (numPolls) {
        doEpoll(delay);
    }
}
    
    
    {    int indices = NodeData::getMemoryBlockIndex(NodeData::preAllocMaxSize) + 1;
    for (int i = 0; i < indices; i++) {
        if (nodeData->preAlloc[i]) {
            delete [] nodeData->preAlloc[i];
        }
    }
    delete [] nodeData->preAlloc;
    delete nodeData->netContext;
    delete nodeData;
    loop->destroy();
}
    
    struct Hub;