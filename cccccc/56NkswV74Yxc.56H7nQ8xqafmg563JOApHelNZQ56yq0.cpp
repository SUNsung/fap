
        
        #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Return the sequence number for the start of this batch.
  static SequenceNumber Sequence(const WriteBatch* batch);
    
      iter->Seek('5');
  ASSERT_EQ(iter->key().ToString(), '5');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '3');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '5');
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    // Different bits-per-byte
    
    
    {
    {}  // namespace crc32c
}  // namespace leveldb
    
    class HASH { };
    
    void Histogram::Add(double value) {
  // Linear search is fast enough for our usage in db_bench
  int b = 0;
  while (b < kNumBuckets - 1 && kBucketLimit[b] <= value) {
    b++;
  }
  buckets_[b] += 1.0;
  if (min_ > value) min_ = value;
  if (max_ < value) max_ = value;
  num_++;
  sum_ += value;
  sum_squares_ += (value * value);
}
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_H_

    
      // Tear down device node data.
  if (!(osquery.major_number < 0)) {
    if (cdevsw_remove(osquery.major_number, &osquery_cdevsw) < 0) {
      panic('osquery kext: Cannot remove osquery from cdevsw');
    }
  }
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
    std::string stringFromCFAbsoluteTime(const CFDataRef& cf_abstime) {
  double value;
  if (CFNumberGetValue((CFNumberRef)cf_abstime, kCFNumberFloat64Type, &value)) {
    // Add seconds difference between CFAbsoluteTime and UNIX times.
    value += kCFAbsoluteTimeIntervalSince1970;
    }
    }
    
    #include <osquery/tables.h>
    
      EXPECT_TRUE(pathExists(path_ + '.backup'));
    
    namespace osquery {
    }
    
    FLAG(uint64,
     distributed_interval,
     60,
     'Seconds between polling for new queries (default 60)')
    
    
    {  std::string path;
  std::string action;
};
    
        int argn = 1;
    bool use_base85_encoding = false;
    bool use_compression = true;
    if (argv[argn][0] == '-')
    {
        if (strcmp(argv[argn], '-base85') == 0) { use_base85_encoding = true; argn++; }
        else if (strcmp(argv[argn], '-nocompress') == 0) { use_compression = false; argn++; }
        else
        {
            printf('Unknown argument: '%s'\n', argv[argn]);
            return 1;
        }
    }
    
    IMGUI_API bool        ImGui_ImplDX10_Init(void* hwnd, ID3D10Device* device);
IMGUI_API void        ImGui_ImplDX10_Shutdown();
IMGUI_API void        ImGui_ImplDX10_NewFrame();
IMGUI_API void        ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
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
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
    IMGUI_API bool        ImGui_ImplSdlGL3_Init(SDL_Window* window, const char* glsl_version = NULL);
IMGUI_API void        ImGui_ImplSdlGL3_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL3_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL3_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL3_ProcessEvent(SDL_Event* event);
    
      buf1->makeManaged();
  EXPECT_TRUE(buf1->isManaged());
    
    TEST_F(OrderingTest, compare_less_equal) {
  compare_less_equal<OddCompare<int>> op;
  EXPECT_FALSE(op(3, 4));
  EXPECT_TRUE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
      TypeDescriptor& operator=(const TypeDescriptor& other) {
    if (this != &other) {
      ti_ = other.ti_;
      tag_ti_ = other.tag_ti_;
    }
    }
    
    #if FOLLY_USE_SYMBOLIZER
#include <folly/experimental/symbolizer/SignalHandler.h> // @manual
#endif
#include <folly/portability/GFlags.h>
    
      XLOG(DBG1, 'log arguments are concatenated: ', 12345, ', ', 92.0);
  XLOGF(DBG1, 'XLOGF supports {}-style formatting: {:.3f}', 'python', 1.0 / 3);
  XLOG(DBG2) << 'streaming syntax is also supported: ' << 1234;
  XLOG(DBG2, 'if you really want, ', 'you can even')
      << ' mix function-style and streaming syntax: ' << 42;
  XLOGF(DBG3, 'and {} can mix {} style', 'you', 'format') << ' and streaming';
    
    
#endif /* COMM_COMM_DNS_H_ */

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    int Test_Spy_Sample::__TestFun1(int i)
{
    SPY_HOOK_THIS_API(__TestFun1, i);
    xinfo2(TSF'Test');
    return i+1;
}

    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================