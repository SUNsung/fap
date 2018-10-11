
        
        
    {
    {} // namespace test
} // namespace c10d

    
    #include <string>
#include <vector>
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 4; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 4));
      input_blob_names.push_back(I(inputIdx * 4 + 3));
      output_blob_names.push_back(GI(inputIdx * 4 + 2));
    }
    input_blob_names.push_back(GO(4));
    
    template <typename T, class Context>
class FloorOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(FloorOp);
    }
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
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
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Backup the DX9 transform (DX9 documentation suggests that it is included in the StateBlock but it doesn't appear to)
    D3DMATRIX last_world, last_view, last_projection;
    g_pd3dDevice->GetTransform(D3DTS_WORLD, &last_world);
    g_pd3dDevice->GetTransform(D3DTS_VIEW, &last_view);
    g_pd3dDevice->GetTransform(D3DTS_PROJECTION, &last_projection);
    
        if (pEvent->m_Pressed == 1)
    {
        if (pEvent->m_Button == S3E_POINTER_BUTTON_LEFTMOUSE)
            g_MousePressed[0] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_RIGHTMOUSE)
            g_MousePressed[1] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MIDDLEMOUSE)
            g_MousePressed[2] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELUP)
            io.MouseWheel += pEvent->m_y;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELDOWN)
            io.MouseWheel += pEvent->m_y;
    }
    
    void ImGui_ImplVulkanH_CreateWindowDataSwapChainAndFramebuffer(VkPhysicalDevice physical_device, VkDevice device, ImGui_ImplVulkanH_WindowData* wd, const VkAllocationCallbacks* allocator, int w, int h)
{
    uint32_t min_image_count = 2;	// FIXME: this should become a function parameter
    }
    
        void FreeTypeFont::Shutdown()
    {
        if (FreetypeFace) 
        {
            FT_Done_Face(FreetypeFace);
            FreetypeFace = NULL;
            FT_Done_FreeType(FreetypeLibrary);
            FreetypeLibrary = NULL;
        }
    }
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
  using DB::MultiGet;
  virtual std::vector<Status> MultiGet(
      const ReadOptions& options,
      const std::vector<ColumnFamilyHandle*>&,
      const std::vector<Slice>& keys, std::vector<std::string>* values)
    override;
    
        uint64_t fileSize;
    status = defaultEnv->GetFileSize(filePath, &fileSize);
    ASSERT_OK(status);
    
      using DBImpl::Flush;
  virtual Status Flush(const FlushOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      env.now_micros_ += 100u;  // sleep credit 100
  // 1000 used, 7240 left
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 1000u));
    
    Status HdfsEnv::NewDirectory(const std::string& name,
                             unique_ptr<Directory>* result) {
  int value = hdfsExists(fileSys_, name.c_str());
  switch (value) {
    case HDFS_EXISTS:
      result->reset(new HdfsDirectory(0));
      return Status::OK();
    default:  // fail if the directory doesn't exist
      ROCKS_LOG_FATAL(mylog, 'NewDirectory hdfsExists call failed');
      throw HdfsFatalException('hdfsExists call failed with error ' +
                               ToString(value) + ' on path ' + name +
                               '.\n');
  }
}
    
    // file_name can be left empty if it is not unkown.
static Status IOError(const std::string& context, const std::string& file_name,
                      int err_number) {
  switch (err_number) {
  case ENOSPC:
    return Status::NoSpace(IOErrorMsg(context, file_name),
                           strerror(err_number));
  case ESTALE:
    return Status::IOError(Status::kStaleFile);
  default:
    return Status::IOError(IOErrorMsg(context, file_name),
                           strerror(err_number));
  }
}
    
      // initialize column families options
  std::unique_ptr<CompactionFilter> compaction_filter;
  compaction_filter.reset(new DummyCompactionFilter());
  cf_descs[0].options.table_factory.reset(NewBlockBasedTableFactory(bbt_opts));
  cf_descs[0].options.compaction_filter = compaction_filter.get();
  cf_descs[1].options.table_factory.reset(NewBlockBasedTableFactory(bbt_opts));
    
      virtual std::unique_ptr<Dict> getResponse() = 0;
    
    
    {} // namespace aria2
    
    class DHTTask;
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
    
    {  EXPECT_EQ(0, exec.refCount);
}
    
    #include <folly/Expected.h>
#include <folly/Portability.h>
#include <folly/ScopeGuard.h>
#include <folly/portability/GTest.h>
    
      FunctionRef<int(int, int)> variant3 = of;
  EXPECT_EQ(100 + 3 * 17, variant3(17, 0));
  FunctionRef<int(int, int)> const cvariant3 = of;
  EXPECT_EQ(100 + 3 * 17, cvariant3(17, 0));
    
    // Templates to reference the arguments from operands in note section.
#define FOLLY_SDT_ARGFMT(no)        %n[FOLLY_SDT_S##no]@%[FOLLY_SDT_A##no]
#define FOLLY_SDT_ARG_TEMPLATE_0    /*No arguments*/
#define FOLLY_SDT_ARG_TEMPLATE_1    FOLLY_SDT_ARGFMT(1)
#define FOLLY_SDT_ARG_TEMPLATE_2    FOLLY_SDT_ARG_TEMPLATE_1 FOLLY_SDT_ARGFMT(2)
#define FOLLY_SDT_ARG_TEMPLATE_3    FOLLY_SDT_ARG_TEMPLATE_2 FOLLY_SDT_ARGFMT(3)
#define FOLLY_SDT_ARG_TEMPLATE_4    FOLLY_SDT_ARG_TEMPLATE_3 FOLLY_SDT_ARGFMT(4)
#define FOLLY_SDT_ARG_TEMPLATE_5    FOLLY_SDT_ARG_TEMPLATE_4 FOLLY_SDT_ARGFMT(5)
#define FOLLY_SDT_ARG_TEMPLATE_6    FOLLY_SDT_ARG_TEMPLATE_5 FOLLY_SDT_ARGFMT(6)
#define FOLLY_SDT_ARG_TEMPLATE_7    FOLLY_SDT_ARG_TEMPLATE_6 FOLLY_SDT_ARGFMT(7)
#define FOLLY_SDT_ARG_TEMPLATE_8    FOLLY_SDT_ARG_TEMPLATE_7 FOLLY_SDT_ARGFMT(8)
    
    TEST(StaticTracepoint, TestSemaphoreLocal) {
  manyArgTypesTestFunc();
    }
    
    
    {} // namespace detail
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    #include <string>
    
      void add(Func f) override {
    executor_->add(wrapFunc(std::move(f)));
  }
    
    
    {  bool initialized_{false};
  folly::Function<folly::Function<void(double)>()> initialize_;
  folly::Function<void(double)> increment_;
};
    
    struct Options {
  /**
   * ZLIB: default option -- write a zlib wrapper as documented in RFC 1950.
   *
   * GZIP: write a simple gzip header and trailer around the compressed data
   * instead of a zlib wrapper.
   *
   * RAW: deflate will generate raw deflate data with no zlib header or
   * trailer, and will not compute a check value.
   *
   * AUTO: enable automatic header detection for decoding gzip or zlib data.
   * For deflation, ZLIB will be used.
   */
  enum class Format { ZLIB, GZIP, RAW, AUTO };
    }