
        
        class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    #include 'ui/base/models/simple_menu_model.h'
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    namespace extensions {
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5>
void PrintTo(const ::std::tr1::tuple<T1, T2, T3, T4, T5>& t,
             ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
      // # of bits in a number.
  static const size_t kBitCount = 8*sizeof(RawType);
    
      linked_ptr& operator=(linked_ptr const& ptr) {
    if (&ptr != this) {
      depart();
      copy(&ptr);
    }
    return *this;
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
class ValueArray9 {
 public:
  ValueArray9(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
      T9 v9) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9) {}
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15>
struct Types15 {
  typedef T1 Head;
  typedef Types14<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15> Tail;
};
    
    
    {  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}
    
      // Helper function to return the carve directory
  boost::filesystem::path getCarveDir() {
    return carveDir_;
  }
    
    /// Root key to retrieve Kafka topic configurations.
const std::string kKafkaTopicParserRootKey('kafka_topics');
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchExtension(
    const std::string& exec_path,
    const std::string& extensions_socket,
    const std::string& extensions_timeout,
    const std::string& extensions_interval,
    bool verbose) {
  auto ext_pid = ::fork();
  if (ext_pid < 0) {
    return std::shared_ptr<PlatformProcess>();
  } else if (ext_pid == 0) {
    setEnvVar('OSQUERY_EXTENSION', std::to_string(::getpid()).c_str());
    }
    }
    
    
    {  auto subscription = Subscription::create('TestSubscriber', mc);
  auto status = EventFactory::addSubscription('inotify', subscription);
  EXPECT_TRUE(status.ok());
  EventFactory::deregisterEventPublisher('inotify');
}
    
    void Action::update(float /*time*/)
{
    CCLOG('[Action update]. override me');
}
    
    
    {    setEye(i,j,k);
}
    
    
    {    for (i = 0; i < (_gridSize.width+1); ++i)
    {
        for (j = 0; j < (_gridSize.height+1); ++j)
        {
            Vec3 v = getOriginalVertex(Vec2(i ,j));
            v.x += (rand() % (_randrange*2)) - _randrange;
            v.y += (rand() % (_randrange*2)) - _randrange;
            if (_shakeZ)
            {
                v.z += (rand() % (_randrange*2)) - _randrange;
            }
            
            setVertex(Vec2(i, j), v);
        }
    }
}
    
        // Overrides
    virtual Waves* clone() const override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    Waves() {}
    virtual ~Waves() {}
    
    /**
    @brief Initializes the action with amplitude, horizontal sin, vertical sin, grid size, waves count and duration.
    @param duration Specify the duration of the Waves action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param waves Specify the waves count of the Waves action.
    @param amplitude Specify the amplitude of the Waves action.
    @param horizontal Specify whether waves on horizontal.
    @param vertical Specify whether waves on vertical.
    @return If the initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int waves, float amplitude, bool horizontal, bool vertical);
    
    bool ScaleTo::initWithDuration(float duration, float sx, float sy, float sz)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _endScaleX = sx;
        _endScaleY = sy;
        _endScaleZ = sz;
    }
    }
    
        tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    
    NS_CC_END
    
        /** Adds a Animation with a name.
     *
     * @param animation An animation.
     * @param name The name of animation.
     */
    void addAnimation(Animation *animation, const std::string& name);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
            // Rendering
        ImGui::Render();
        IwGxSetColClear(clear_color.x * 255, clear_color.y * 255, clear_color.z * 255, clear_color.w * 255);
        IwGxClear();
        ImGui_Marmalade_RenderDrawData(ImGui::GetDrawData());
        IwGxSwapBuffers();
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    
    {        // Handle loss of D3D9 device
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
        {
            ImGui_ImplDX9_InvalidateDeviceObjects();
            g_pd3dDevice->Reset(&g_d3dpp);
            ImGui_ImplDX9_CreateDeviceObjects();
        }
    }
    
        // Bind shader and vertex buffers
    unsigned int stride = sizeof(ImDrawVert);
    unsigned int offset = 0;
    ctx->IASetInputLayout(g_pInputLayout);
    ctx->IASetVertexBuffers(0, 1, &g_pVB, &stride, &offset);
    ctx->IASetIndexBuffer(g_pIB, sizeof(ImDrawIdx) == 2 ? DXGI_FORMAT_R16_UINT : DXGI_FORMAT_R32_UINT, 0);
    ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ctx->VSSetShader(g_pVertexShader, NULL, 0);
    ctx->VSSetConstantBuffers(0, 1, &g_pVertexConstantBuffer);
    ctx->PSSetShader(g_pPixelShader, NULL, 0);
    ctx->PSSetSamplers(0, 1, &g_pFontSampler);
    
        // Create buffers with a default size (they will later be grown as needed)
    for (int i = 0; i < num_frames_in_flight; i++)
    {
        g_pFrameResources[i].IB = NULL;
        g_pFrameResources[i].VB = NULL;
        g_pFrameResources[i].VertexBufferSize = 5000;
        g_pFrameResources[i].IndexBufferSize = 10000;
    }
    
      // True if the iterator has already returned a record for the current key.
  bool has_outputted_key_ = false;
    
    
    {  virtual const char* Name() const override { return 'DeleteFilter'; }
};
    
      Random rnd(301);
  for (int ordered_insert = 0; ordered_insert <= 1; ordered_insert++) {
    for (int i = 0; i < kNKeys; i++) {
      keys[i] = i;
    }
    if (ordered_insert == 0) {
      std::random_shuffle(std::begin(keys), std::end(keys));
    }
    for (int max_background_compactions = 1; max_background_compactions < 4;
         max_background_compactions += 2) {
      Options options;
      options.env = env.get();
      options.create_if_missing = true;
      options.write_buffer_size = 2048;
      options.max_write_buffer_number = 2;
      options.level0_file_num_compaction_trigger = 2;
      options.level0_slowdown_writes_trigger = 2;
      options.level0_stop_writes_trigger = 2;
      options.target_file_size_base = 2048;
      options.level_compaction_dynamic_level_bytes = true;
      options.max_bytes_for_level_base = 10240;
      options.max_bytes_for_level_multiplier = 4;
      options.soft_rate_limit = 1.1;
      options.max_background_compactions = max_background_compactions;
      options.num_levels = 5;
    }
    }
    
      // Open all files and look for the values we've put in there.
  // They should not be found if encrypted, otherwise
  // they should be found.
  std::vector<std::string> fileNames;
  auto status = env_->GetChildren(dbname_, &fileNames);
  ASSERT_OK(status);
    
    // Simple implementation of SlicePart variants of Put().  Child classes
// can override these method with more performant solutions if they choose.
Status WriteBatchBase::Put(ColumnFamilyHandle* column_family,
                           const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      if (bytes_left_ >= num_bytes) {
    bytes_left_ -= num_bytes;
    return 0;
  }
  // The frequency to get time inside DB mutex is less than one per refill
  // interval.
  auto time_now = NowMicrosMonotonic(env);
    
    
    {  delay_token_1.reset();
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 30000000u));
  delay_token_1.reset();
  ASSERT_FALSE(controller.IsStopped());
}
    
    #pragma once
    
          // Truncate to available space if necessary
      if (p >= limit) {
        if (iter == 0) {
          continue;       // Try again with larger buffer
        } else {
          p = limit - 1;
        }
      }
    
    
    {  // Need to implement this so the file is truncated correctly
  // with direct I/O
  virtual Status Truncate(uint64_t size) override;
  virtual Status Close() override;
  virtual Status Append(const Slice& data) override;
  virtual Status PositionedAppend(const Slice& data, uint64_t offset) override;
  virtual Status Flush() override;
  virtual Status Sync() override;
  virtual Status Fsync() override;
  virtual bool IsSyncThreadSafe() const override;
  virtual bool use_direct_io() const override { return use_direct_io_; }
  virtual void SetWriteLifeTimeHint(Env::WriteLifeTimeHint hint) override;
  virtual uint64_t GetFileSize() override;
  virtual Status InvalidateCache(size_t offset, size_t length) override;
  virtual size_t GetRequiredBufferAlignment() const override {
    return logical_sector_size_;
  }
#ifdef ROCKSDB_FALLOCATE_PRESENT
  virtual Status Allocate(uint64_t offset, uint64_t len) override;
#endif
#ifdef ROCKSDB_RANGESYNC_PRESENT
  virtual Status RangeSync(uint64_t offset, uint64_t nbytes) override;
#endif
#ifdef OS_LINUX
  virtual size_t GetUniqueId(char* id, size_t max_size) const override;
#endif
};
    
    TEST_F(MockEnvTest, FakeSleeping) {
  int64_t now = 0;
  auto s = env_->GetCurrentTime(&now);
  ASSERT_OK(s);
  env_->FakeSleepForMicroseconds(3 * 1000 * 1000);
  int64_t after_sleep = 0;
  s = env_->GetCurrentTime(&after_sleep);
  ASSERT_OK(s);
  auto delta = after_sleep - now;
  // this will be true unless test runs for 2 seconds
  ASSERT_TRUE(delta == 3 || delta == 4);
}
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
    bool FindBenchmarksInternal(const std::string& re,
                            std::vector<Benchmark::Instance>* benchmarks,
                            std::ostream* Err);
    
    #include 'check.h'
#include 'colorprint.h'
#include 'commandlineflags.h'
#include 'internal_macros.h'
#include 'string_util.h'
#include 'timers.h'