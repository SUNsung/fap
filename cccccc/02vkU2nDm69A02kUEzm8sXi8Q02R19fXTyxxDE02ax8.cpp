
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
    // Helper macro to define a plugin ID. To be used only inside plugin
// implementation files. Works by 'reserving' an address/value (guaranteed to be
// unique) inside a process space.
#define PLUGIN_REGISTRY_DEFINE_PLUGIN_ID(ID_VAR_NAME) \
  namespace {                                         \
  int plugin_id_value;                                \
  }                                                   \
  const PluginId ID_VAR_NAME = &plugin_id_value;
    
    TF_CALL_GPU_NUMBER_TYPES(REGISTER_GPU);
TF_CALL_complex64(REGISTER_GPU);
TF_CALL_complex128(REGISTER_GPU);
TF_CALL_int64(REGISTER_GPU);
TF_CALL_int32(REGISTER_GPU)
    
    // Like ASSERT_DEATH, but continues on to successive tests in the
// test case, if any:
# define EXPECT_DEATH(statement, regex) \
    EXPECT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7, typename Generator8>
internal::CartesianProductHolder8<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7, Generator8> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7, const Generator8& g8) {
  return internal::CartesianProductHolder8<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7, Generator8>(
      g1, g2, g3, g4, g5, g6, g7, g8);
}
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
    #define EXPECT_STREQ(expected, actual) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTREQ, expected, actual)
#define EXPECT_STRNE(s1, s2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTRNE, s1, s2)
#define EXPECT_STRCASEEQ(expected, actual) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASEEQ, expected, actual)
#define EXPECT_STRCASENE(s1, s2)\
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASENE, s1, s2)
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_

    
      virtual bool IsPrime(int n) const {
    return 0 <= n && n < is_prime_size_ && is_prime_[n];
  }
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    TEST(EnvPosixTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    class SnapshotList {
 public:
  SnapshotList() {
    list_.prev_ = &list_;
    list_.next_ = &list_;
  }
    }
    
    namespace leveldb {
    }
    
    
    {  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
}
    
      virtual Status NewRandomAccessFile(const std::string& fname,
                                     RandomAccessFile** result) {
    MutexLock lock(&mutex_);
    if (file_map_.find(fname) == file_map_.end()) {
      *result = NULL;
      return Status::IOError(fname, 'File not found');
    }
    }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
      // Write to the file.
  ASSERT_OK(env_->NewWritableFile('/dir/f', &writable_file));
  ASSERT_OK(writable_file->Append('abc'));
  delete writable_file;
    
    TEST(Issue200, Test) {
  // Get rid of any state from an old run.
  std::string dbpath = test::TmpDir() + '/leveldb_issue200_test';
  DestroyDB(dbpath, Options());
    }
    
    
  // Iterator interface methods
  bool Valid() const        { return valid_; }
  Slice key() const         { assert(Valid()); return key_; }
  Slice value() const       { assert(Valid()); return iter_->value(); }
  // Methods below require iter() != NULL
  Status status() const     { assert(iter_); return iter_->status(); }
  void Next()               { assert(iter_); iter_->Next();        Update(); }
  void Prev()               { assert(iter_); iter_->Prev();        Update(); }
  void Seek(const Slice& k) { assert(iter_); iter_->Seek(k);       Update(); }
  void SeekToFirst()        { assert(iter_); iter_->SeekToFirst(); Update(); }
  void SeekToLast()         { assert(iter_); iter_->SeekToLast();  Update(); }
    
    namespace leveldb {
    }
    
    #endif /* BASEEVENT_INTERFACE_BASEEVENT_H_ */

    
        void Dump(const std::string& _processname);
    const std::vector<std::string>& StackList() const;
    
    #ifndef CORESERVICEBASE_H_
#define CORESERVICEBASE_H_
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    // bool JNU_Jstring2Wstring( JNIEnv* _env, const jstring jstr, std::wstring& wstr); //in linux sizeof(wchar_t)==4 but sizeof(jchar)==2
wchar_t* JNU_Jstring2Wchar(JNIEnv* _env, const jstring jstr);
void JNU_FreeWchar(JNIEnv* _env, jstring str, wchar_t* wchar);
jstring JNU_Wstring2Jstring(JNIEnv* _env, const std::wstring& wstr);
jstring JNU_Wchar2JString(JNIEnv* _env, wchar_t* wchar);
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
#endif /* SCOP_JENV_H_ */

    
    //---- Use 32-bit vertex indices (instead of default 16-bit) to allow meshes with more than 64K vertices. Render function needs to support it.
//#define ImDrawIdx unsigned int
    
        ALLEGRO_MOUSE_STATE mouse;
    if (keys.display == g_Display)
    {
        al_get_mouse_state(&mouse);
        io.MousePos = ImVec2((float)mouse.x, (float)mouse.y);
    }
    else
    {
        io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
    }
    
        // Render command lists
    for(int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        const int nVert = cmd_list->VtxBuffer.Size;
        CIwFVec2* pVertStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwFVec2* pUVStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwColour* pColStream = IW_GX_ALLOC(CIwColour, nVert);
    }
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
        // Start packing
    ImVector<stbrp_node> pack_nodes;
    pack_nodes.resize(total_rects);
    stbrp_context context;
    stbrp_init_target(&context, atlas->TexWidth, atlas->TexHeight, pack_nodes.Data, total_rects);
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
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
        ImGui_ImplDX12_NewFrame(g_pd3dCommandList);
    }
    
    
    {    return 0;
}

    
            ID3D12GraphicsCommandList* cmdList = NULL;
        hr = g_pd3dDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, cmdAlloc, NULL, IID_PPV_ARGS(&cmdList));
        IM_ASSERT(SUCCEEDED(hr));
    
        // Upload texture to graphics system
    GLint last_texture;
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
    glGenTextures(1, &g_FontTexture);
    glBindTexture(GL_TEXTURE_2D, g_FontTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);