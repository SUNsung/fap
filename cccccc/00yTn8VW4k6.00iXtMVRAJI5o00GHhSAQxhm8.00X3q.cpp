
        
          /// Get the number of publisher restarts.
  size_t restartCount() const {
    return restart_count_;
  }
    
      /*
   * @brief Access value for a flag name.
   *
   * @param name the flag name.
   * @param value output parameter filled with the flag value on success.
   * @return status of the flag did exist.
   */
  static Status getDefaultValue(const std::string& name, std::string& value);
    
    /**
 * @brief Create an osquery extension 'module', if an expression is true.
 *
 * This is a helper testing wrapper around CREATE_MODULE and DECLARE_MODULE.
 * It allows unit and integration tests to generate global construction code
 * that depends on data/variables available during global construction.
 *
 * And example use includes checking if a process environment variable is
 * defined. If defined the module is declared.
 */
#define CREATE_MODULE_IF(expr, name, version, min_sdk_version)                 \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      if ((expr)) {                                                            \
        Registry::get().declareModule(                                         \
            name, version, min_sdk_version, OSQUERY_SDK_VERSION);              \
      }                                                                        \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
      /*
   * @brief a variable tracking all of the paths we attempt to carve
   *
   * This is a globbed set of file paths that we're expecting will be
   * carved.
   */
  std::set<boost::filesystem::path> carvePaths_;
    
    #include 'osquery/tests/test_util.h'
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    #ifndef WIN32
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_Marmalade_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
    
    // Implemented features:
//  [X] User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}
    
    
    {        // Rendering
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui::Render();
        ImGui_ImplGlfwGL3_RenderDrawData(ImGui::GetDrawData());
        glfwSwapBuffers(window);
    }
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
    #include <map>
#include <node.h>
    
    namespace rocksdb {
    }
    
      size_t size() const { return size_; }
  const char* data() const { return data_; }
  bool cachable() const { return contents_.cachable; }
  size_t usable_size() const {
#ifdef ROCKSDB_MALLOC_USABLE_SIZE
    if (contents_.allocation.get() != nullptr) {
      return malloc_usable_size(contents_.allocation.get());
    }
#endif  // ROCKSDB_MALLOC_USABLE_SIZE
    return size_;
  }
  uint32_t NumRestarts() const;
  CompressionType compression_type() const {
    return contents_.compression_type;
  }
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: (ZZZZ)J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__ZZZZ(
    JNIEnv* env, jclass jcls, jboolean jmove_files,
    jboolean jsnapshot_consistency, jboolean jallow_global_seqno,
    jboolean jallow_blocking_flush) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  options->move_files = static_cast<bool>(jmove_files);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
  options->allow_global_seqno = static_cast<bool>(jallow_global_seqno);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
  return reinterpret_cast<jlong>(options);
}
    
    
    {
    {    return true;
  }
// @lint-ignore TXT4 T25377293 Grandfathered in
};
    
      Status s;
  // Take a snapshot
  rocksdb::port::Thread t([&]() {
    Checkpoint* checkpoint;
    ASSERT_OK(Checkpoint::Create(db_, &checkpoint));
    ASSERT_OK(checkpoint->CreateCheckpoint(snapshot_name_));
    delete checkpoint;
  });
  TEST_SYNC_POINT('CheckpointTest::CheckpointCF:1');
  ASSERT_OK(Put(0, 'Default', 'Default1'));
  ASSERT_OK(Put(1, 'one', 'eleven'));
  ASSERT_OK(Put(2, 'two', 'twelve'));
  ASSERT_OK(Put(3, 'three', 'thirteen'));
  ASSERT_OK(Put(4, 'four', 'fourteen'));
  ASSERT_OK(Put(5, 'five', 'fifteen'));
  TEST_SYNC_POINT('CheckpointTest::CheckpointCF:2');
  t.join();
  rocksdb::SyncPoint::GetInstance()->DisableProcessing();
  ASSERT_OK(Put(1, 'one', 'twentyone'));
  ASSERT_OK(Put(2, 'two', 'twentytwo'));
  ASSERT_OK(Put(3, 'three', 'twentythree'));
  ASSERT_OK(Put(4, 'four', 'twentyfour'));
  ASSERT_OK(Put(5, 'five', 'twentyfive'));
  ASSERT_OK(Flush());
    
      // These are used to manage memtable flushes to storage
  bool flush_in_progress_; // started the flush
  bool flush_completed_;   // finished the flush
  uint64_t file_number_;    // filled up after flush is complete
    
        jobject ToReflectedMethod(jclass cls, jmethodID methodID, jboolean isStatic)
    { return functions->ToReflectedMethod(this, cls, methodID, isStatic); }
    
      /**
   * The offset of the program counter to the base of the library (i.e. the
   * address that addr2line takes as input>
   */
  std::ptrdiff_t libraryOffset() const noexcept {
    auto absoluteLibrary = static_cast<const char*>(libraryBase_);
    auto absoluteabsoluteProgramCounter =
        static_cast<const char*>(absoluteProgramCounter_);
    return absoluteabsoluteProgramCounter - absoluteLibrary;
  }
    
    namespace facebook {
namespace lyra {
    }
    }
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
     private:
    
        layout.left = YGNodeLayoutGetLeft(m_node);
    layout.right = YGNodeLayoutGetRight(m_node);
    
        void calculateLayout(double width, double height, int direction);
    
      /**
   * As above but with a custom cleanup function
   */
  typedef void (*CleanupFunction)(void* obj);
  explicit ThreadLocal(CleanupFunction cleanup) :
    m_key(0),
    m_cleanup(cleanup) {
    FBASSERT(cleanup);
    initialize();
  }
    
    // JNI's NIO support has some awkward preconditions and error reporting. This
// class provides much more user-friendly access.
class FBEXPORT JByteBuffer : public JavaClass<JByteBuffer> {
 public:
  static constexpr const char* kJavaDescriptor = 'Ljava/nio/ByteBuffer;';
    }
    
    #include 'FuzzerDefs.h'
#include 'FuzzerIO.h'
#include 'FuzzerRandom.h'
#include 'FuzzerSHA1.h'
#include 'FuzzerTracePC.h'
#include <numeric>
#include <random>
#include <unordered_set>
    
      bool ContainsWord(const Word &W) const {
    return std::any_of(begin(), end(), [&](const DictionaryEntry &DE) {
      return DE.GetW() == W;
    });
  }
  const DictionaryEntry *begin() const { return &DE[0]; }
  const DictionaryEntry *end() const { return begin() + Size; }
  DictionaryEntry & operator[] (size_t Idx) {
    assert(Idx < Size);
    return DE[Idx];
  }
  void push_back(DictionaryEntry DE) {
    if (Size < kMaxDictSize)
      this->DE[Size++] = DE;
  }
  void clear() { Size = 0; }
  bool empty() const { return Size == 0; }
  size_t size() const { return Size; }
    
    #define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  RETURN_TYPE(*NAME) FUNC_SIG = nullptr
    
    #include 'FuzzerExtFunctions.def'
    
    // Parse a directory ending in separator, like: SomeDir\
// Returns number of characters considered if successful.
static size_t ParseDir(const std::string &FileName, const size_t Offset) {
  size_t Pos = Offset;
  const size_t End = FileName.size();
  if (Pos >= End || IsSeparator(FileName[Pos]))
    return 0;
  for(; Pos < End && !IsSeparator(FileName[Pos]); ++Pos)
    ;
  if (Pos >= End)
    return 0;
  ++Pos; // Include separator.
  return Pos - Offset;
}
    
    private:
  void AlarmCallback();
  void CrashCallback();
  void InterruptCallback();
  void MutateAndTestOne();
  void ReportNewCoverage(InputInfo *II, const Unit &U);
  size_t RunOne(const Unit &U) { return RunOne(U.data(), U.size()); }
  void WriteToOutputCorpus(const Unit &U);
  void WriteUnitToFileWithPrefix(const Unit &U, const char *Prefix);
  void PrintStats(const char *Where, const char *End = '\n', size_t Units = 0);
  void PrintStatusForNewUnit(const Unit &U);
  void ShuffleCorpus(UnitVector *V);
  void AddToCorpus(const Unit &U);
  void CheckExitOnSrcPosOrItem();
    
    namespace fuzzer {
    }
    
    void Fuzzer::StopTraceRecording() {
  if (!TS) return;
  TS->StopTraceRecording();
}