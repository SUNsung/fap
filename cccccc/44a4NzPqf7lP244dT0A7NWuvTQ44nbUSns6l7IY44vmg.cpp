
        
        /* Map whose keys are pointers, but are compared by their dereferenced values.
 *
 * Differs from a plain std::map<const K*, T, DereferencingComparator<K*> > in
 * that methods that take a key for comparison take a K rather than taking a K*
 * (taking a K* would be confusing, since it's the value rather than the address
 * of the object for comparison that matters due to the dereferencing comparator).
 *
 * Objects pointed to by keys must not be modified in any way that changes the
 * result of DereferencingComparator.
 */
template <class K, class T>
class indirectmap {
private:
    typedef std::map<const K*, T, DereferencingComparator<const K*> > base;
    base m;
public:
    typedef typename base::iterator iterator;
    typedef typename base::const_iterator const_iterator;
    typedef typename base::size_type size_type;
    typedef typename base::value_type value_type;
    }
    
    char* leveldb_get(
    leveldb_t* db,
    const leveldb_readoptions_t* options,
    const char* key, size_t keylen,
    size_t* vallen,
    char** errptr) {
  char* result = NULL;
  std::string tmp;
  Status s = db->rep->Get(options->rep, Slice(key, keylen), &tmp);
  if (s.ok()) {
    *vallen = tmp.size();
    result = CopyString(tmp);
  } else {
    *vallen = 0;
    if (!s.IsNotFound()) {
      SaveError(errptr, s);
    }
  }
  return result;
}
    
    #include 'db/filename.h'
#include 'db/db_impl.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/mutexlock.h'
#include 'util/random.h'
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options* options, int entries);
  ~TableCache();
    }
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    /// Internal callExtension implementation using a UNIX domain socket path.
Status callExtension(const std::string& extension_path,
                     const std::string& registry,
                     const std::string& item,
                     const PluginRequest& request,
                     PluginResponse& response);
    
    /*
 * @brief Replace gflags' `DEFINE_type` macros to track osquery flags.
 *
 * Do not use this macro within the codebase directly! Use the subsequent macros
 * that abstract the tail of boolean arguments into meaningful statements.
 *
 * @param type(t) The `_type` symbol portion of the gflags define.
 * @param name(n) The name symbol passed to gflags' `DEFINE_type`.
 * @param value(v) The default value, use a C++ literal.
 * @param desc(d) A string literal used for help display.
 * @param shell(s) Boolean, true if this is only supported in osqueryi.
 * @param extension(e) Boolean, true if this is only supported in an extension.
 * @param cli(c) Boolean, true if this can only be set on the CLI (or flagfile).
 *   This helps documentation since flags can also be set within configuration
 *   as 'options'.
 * @param hidden(h) Boolean, true if this is hidden from help displays.
 */
#define OSQUERY_FLAG(t, n, v, d, s, e, c, h)                                   \
  DEFINE_##t(n, v, d);                                                         \
  namespace flags {                                                            \
  const int flag_##n = Flag::create(#n, {d, s, e, c, h});                      \
  }
    
    #include <osquery/core.h>
#include <osquery/flags.h>
#include <osquery/query.h>
#include <osquery/registry.h>
    
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
    
    #include <gtest/gtest.h>
    
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
    
    Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count) {
  if (dst == nullptr || src == nullptr || nelms == 0) {
    return Status(1, 'Failed to strncpy: invalid arguments');
  }
    }
    
    #pragma once
    
    void copy(const char* srcFile, const char* dest) {
  fs::path destPath(dest);
  if (!destPath.is_absolute()) {
    auto hp = getHugePageSize();
    CHECK(hp) << 'no huge pages available';
    destPath = fs::canonical_parent(destPath, hp->mountPoint);
  }
    }
    
      // Format the data into a buffer.
  std::string buffer;
  StringPiece msgData{message.getMessage()};
  if (message.containsNewlines()) {
    // If there are multiple lines in the log message, add a header
    // before each one.
    std::string header;
    header.reserve(headerLengthGuess);
    headerFormatter.appendTo(header);
    }
    
    
    {  /**
   * An optional list of LogHandler names to use for this category.
   *
   * When applying config changes to an existing LogCategory, the existing
   * LogHandler list will be left unchanged if this field is unset.
   */
  Optional<std::vector<std::string>> handlers;
};
    
        for (const auto& entry : categories->items()) {
      if (!entry.first.isString()) {
        // This shouldn't really ever happen.
        // We deserialize the json with allow_non_string_keys set to False.
        throw LogConfigParseError{'category name must be a string'};
      }
      auto categoryName = entry.first.asString();
      auto categoryConfig = parseJsonCategoryConfig(entry.second, categoryName);
    }
    
      /**
   * Block until all messages that have already been sent to this LogHandler
   * have been processed.
   *
   * For LogHandlers that perform asynchronous processing of log messages,
   * this ensures that messages already sent to this handler have finished
   * being processed.
   *
   * Other threads may still call handleMessage() while flush() is running.
   * handleMessage() calls that did not complete before the flush() call
   * started will not necessarily be processed by the flush call.
   */
  virtual void flush() = 0;
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            cmdList->Release();
        cmdAlloc->Release();
        cmdQueue->Release();
        CloseHandle(event);
        fence->Release();
        uploadBuffer->Release();
    
    bool    ImGui_ImplGlfwVulkan_Init(GLFWwindow* window, bool install_callbacks, ImGui_ImplGlfwVulkan_Init_Data *init_data)
{
    g_Allocator = init_data->allocator;
    g_Gpu = init_data->gpu;
    g_Device = init_data->device;
    g_RenderPass = init_data->render_pass;
    g_PipelineCache = init_data->pipeline_cache;
    g_DescriptorPool = init_data->descriptor_pool;
    g_CheckVkResult = init_data->check_vk_result;
    }
    
        for (int i = 0; i < 3; i++)
    {
        // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
        Config(Config const &) = delete;
    
    void Node::setWidth(double width)
{
    YGNodeStyleSetWidth(m_node, width);
}
    
     public: // Tree hierarchy inspectors
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }
    
      T* release() {
    T* obj = get();
    pthread_setspecific(m_key, NULL);
    return obj;
  }
    
    #define FBCRASH(msg, ...) facebook::assertInternal('Fatal error (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__)
#define FBUNREACHABLE() facebook::assertInternal('This code should be unreachable (%s:%d)', __FILE__, __LINE__)
    
      system_clock::time_point ProcessStartTime = system_clock::now();
  system_clock::time_point UnitStartTime, UnitStopTime;
  long TimeOfLongestUnitInSeconds = 0;
  long EpochOfLastReadOfOutputCorpus = 0;
    
    
    {  // One greedy pass: add the file's features to AllFeatures.
  // If new features were added, add this file to NewFiles.
  for (size_t i = NumFilesInFirstCorpus; i < Files.size(); i++) {
    auto &Cur = Files[i].Features;
    // Printf('%s -> sz %zd ft %zd\n', Files[i].Name.c_str(),
    //       Files[i].Size, Cur.size());
    size_t OldSize = AllFeatures.size();
    AllFeatures.insert(Cur.begin(), Cur.end());
    if (AllFeatures.size() > OldSize)
      NewFiles->push_back(Files[i].Name);
  }
  return AllFeatures.size() - InitialNumFeatures;
}
    
    
    {}

    
    // Private copy of SHA1 implementation.
static const int kSHA1NumBytes = 20;