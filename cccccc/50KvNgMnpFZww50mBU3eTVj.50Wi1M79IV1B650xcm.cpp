
        
          // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
    namespace api {
    }
    
    void DownloadItem::SetSavePath(const base::FilePath& path) {
  save_path_ = path;
}
    
    void Notification::NotificationClick() {
  Emit('click');
}
    
    namespace testing {
    }
    
    template <typename T>
internal::ParamGenerator<T> Range(T start, T end) {
  return Range(start, end, 1);
}
    
      // Returns true iff the test part failed.
  bool failed() const { return type_ != kSuccess; }
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2>
AssertionResult AssertPred2Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2) {
  if (pred(v1, v2)) return AssertionSuccess();
    }
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    
    {  // n has no integer factor in the range (1, n), and thus is prime.
  return true;
}

    
    // Tests the default c'tor.
TEST(MyString, DefaultConstructor) {
  const MyString s;
    }
    
    op = core.CreateOperator(
    'ExpandDims',
    ['data'],
    ['expanded'],
    dims=[0,1],
)
    
      template <typename T>
  bool DoRunWithType() {
    const auto& data = Input(0);
    CAFFE_ENFORCE(data.ndim() == 1, 'data should be 1-D.');
    }
    
    
    {} // namespace caffe2
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    const Vec2& PointArray::getControlPointAtIndex(ssize_t index) const
{
    index = MIN(static_cast<ssize_t>(_controlPoints.size())-1, MAX(index, 0));
    return _controlPoints.at(index);
}
    
    
    {    ((AccelDeccelAmplitude*)(_other))->setAmplitudeRate(powf(f, _rate));
}
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, waves, amplitude))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual Place* reverse() const override;
    virtual Place* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    Place(){}
    virtual ~Place(){}
    
    void Animate::setAnimation(cocos2d::Animation *animation)
{
    if (_animation != animation)
    {
        CC_SAFE_RETAIN(animation);
        CC_SAFE_RELEASE(_animation);
        _animation = animation;
    }
}
    
    
    {    if (element->actions->num == 0)
    {
        if (_currentTarget == element)
        {
            _currentTargetSalvaged = true;
        }
        else
        {
            deleteHashElement(element);
        }
    }
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    GridBase* PageTurn3D::getGrid()
{
    auto result = Grid3D::create(_gridSize, _gridNodeTarget->getGridRect());
    if (result)
    {
        result->setNeedDepthTestForBlit(true);
    }
    
    return result;
}
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    
    {}
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
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
    
        // Setup render state
    const float blend_factor[4] = { 0.f, 0.f, 0.f, 0.f };
    ctx->OMSetBlendState(g_pBlendState, blend_factor, 0xffffffff);
    ctx->OMSetDepthStencilState(g_pDepthStencilState, 0);
    ctx->RSSetState(g_pRasterizerState);
    
    namespace {
void SuperVersionUnrefHandle(void* ptr) {
  // UnrefHandle is called when a thread exists or a ThreadLocalPtr gets
  // destroyed. When former happens, the thread shouldn't see kSVInUse.
  // When latter happens, we are in ~ColumnFamilyData(), no get should happen as
  // well.
  SuperVersion* sv = static_cast<SuperVersion*>(ptr);
  bool was_last_ref __attribute__((__unused__));
  was_last_ref = sv->Unref();
  // Thread-local SuperVersions can't outlive ColumnFamilyData::super_version_.
  // This is important because we can't do SuperVersion cleanup here.
  // That would require locking DB mutex, which would deadlock because
  // SuperVersionUnrefHandle is called with locked ThreadLocalPtr mutex.
  assert(!was_last_ref);
}
}  // anonymous namespace
    
    // Does not ref-count ColumnFamilyData
// We use this dummy ColumnFamilyHandleImpl because sometimes MemTableInserter
// calls DBImpl methods. When this happens, MemTableInserter need access to
// ColumnFamilyHandle (same as the client would need). In that case, we feed
// MemTableInserter dummy ColumnFamilyHandle and enable it to call DBImpl
// methods
class ColumnFamilyHandleInternal : public ColumnFamilyHandleImpl {
 public:
  ColumnFamilyHandleInternal()
      : ColumnFamilyHandleImpl(nullptr, nullptr, nullptr), internal_cfd_(nullptr) {}
    }
    
    
    {
    {  bool IsShuttingDown() {
    // This is a best-effort facility, so memory_order_relaxed is sufficient.
    return shutting_down_ && shutting_down_->load(std::memory_order_relaxed);
  }
};
}  // namespace rocksdb

    
      Header(options.info_log, 'DB SUMMARY\n');
  // Get files in dbname dir
  if (!env->GetChildren(dbname, &files).ok()) {
    Error(options.info_log,
          'Error when reading %s dir\n', dbname.c_str());
  }
  std::sort(files.begin(), files.end());
  for (std::string file : files) {
    if (!ParseFileName(file, &number, &type)) {
      continue;
    }
    switch (type) {
      case kCurrentFile:
        Header(options.info_log, 'CURRENT file:  %s\n', file.c_str());
        break;
      case kIdentityFile:
        Header(options.info_log, 'IDENTITY file:  %s\n', file.c_str());
        break;
      case kDescriptorFile:
        env->GetFileSize(dbname + '/' + file, &file_size);
        Header(options.info_log, 'MANIFEST file:  %s size: %' PRIu64 ' Bytes\n',
               file.c_str(), file_size);
        break;
      case kLogFile:
        env->GetFileSize(dbname + '/' + file, &file_size);
        char str[16];
        snprintf(str, sizeof(str), '%' PRIu64, file_size);
        wal_info.append(file).append(' size: ').
            append(str).append(' ; ');
        break;
      case kTableFile:
        if (++file_num < 10) {
          file_info.append(file).append(' ');
        }
        break;
      default:
        break;
    }
  }
    
      // When an actor (column family) requests a stop token, all writes will be
  // stopped until the stop token is released (deleted)
  std::unique_ptr<WriteControllerToken> GetStopToken();
  // When an actor (column family) requests a delay token, total delay for all
  // writes to the DB will be controlled under the delayed write rate. Every
  // write needs to call GetDelay() with number of bytes writing to the DB,
  // which returns number of microseconds to sleep.
  std::unique_ptr<WriteControllerToken> GetDelayToken(
      uint64_t delayed_write_rate);
  // When an actor (column family) requests a moderate token, compaction
  // threads will be increased
  std::unique_ptr<WriteControllerToken> GetCompactionPressureToken();
    
    class TimeSetEnv : public EnvWrapper {
 public:
  explicit TimeSetEnv() : EnvWrapper(nullptr) {}
  uint64_t now_micros_ = 6666;
  virtual uint64_t NowNanos() override { return now_micros_ * std::milli::den; }
};
    
    // PopulateSecretPrefixPart initializes the data into a new prefix block 
// in plain text.
// Returns the amount of space (starting from the start of the prefix)
// that has been initialized.
size_t CTREncryptionProvider::PopulateSecretPrefixPart(char* /*prefix*/,
                                                       size_t /*prefixLength*/,
                                                       size_t /*blockSize*/) {
  // Nothing to do here, put in custom data in override when needed.
  return 0;
}
    
      virtual Status Skip(uint64_t n) {
    ROCKS_LOG_DEBUG(mylog, '[hdfs] HdfsReadableFile skip %s\n',
                    filename_.c_str());
    // get current offset from file
    tOffset current = hdfsTell(fileSys_, hfile_);
    if (current < 0) {
      return IOError(filename_, errno);
    }
    // seek to new offset in file
    tOffset newoffset = current + n;
    int val = hdfsSeek(fileSys_, hfile_, newoffset);
    if (val < 0) {
      return IOError(filename_, errno);
    }
    return Status::OK();
  }
    
      // put and get from non-default column family
  s = db->Put(WriteOptions(), handles[1], Slice('key'), Slice('value'));
  assert(s.ok());
  std::string value;
  s = db->Get(ReadOptions(), handles[1], Slice('key'), &value);
  assert(s.ok());
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
    #include 'guetzli/jpeg_data.h'
    
    #include <stddef.h>
#include <stdint.h>
    
      // Build separate AC histograms for each component.
  histograms.resize(num_dc_histo + ncomps);
  depths.resize((num_dc_histo + ncomps) * JpegHistogram::kSize);
  BuildACHistograms(jpg, &histograms[num_dc_histo]);
    
    // Functions for writing a JPEGData object into a jpeg byte stream.