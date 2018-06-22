
        
        #ifdef FACEBOOK
  uint64_t time;
  if (!fb_perf_get_thread_cputime_ns(&time)) {
    return time + s_extra_request_nanoseconds;
  }
#endif
    
    void numa_interleave(void* start, size_t size) {
  if (!use_numa) return;
  numa_interleave_memory(start, size, numa_all_nodes_ptr);
}
    
    void initNuma();
    
    #endif // incl_HPHP_LIGHT_PROCESS_H_

    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
    SynchronizableMulti::SynchronizableMulti(int size) :
  m_mutex(RankLeaf), m_group(0), m_conds(size), m_cond_list_vec(1) {
  assert(size > 0);
}
    
    TEST(LogTest, ReadFourthOneOff) {
  CheckInitialOffsetRecord(20015, 3);
}
    
    
#endif  // STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_

    
      ASSERT_OK(DB::Open(options, '/dir/db', &db));
  for (size_t i = 0; i < 3; ++i) {
    ASSERT_OK(db->Put(WriteOptions(), keys[i], vals[i]));
  }
    
    #include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
#include 'leveldb/slice.h'
#include 'util/hash.h'
    
      // Check first filter
  ASSERT_TRUE(reader.KeyMayMatch(0, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(2000, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'hello'));
    
      // Randomly returns true ~'1/n' of the time, and false otherwise.
  // REQUIRES: n > 0
  bool OneIn(int n) { return (Next() % n) == 0; }
    
      ~AutoCompactTest() {
    delete db_;
    DestroyDB(dbname_, Options());
    delete tiny_cache_;
  }
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    
    {        VkImageMemoryBarrier use_barrier[1] = {};
        use_barrier[0].sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        use_barrier[0].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        use_barrier[0].dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        use_barrier[0].oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        use_barrier[0].newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        use_barrier[0].srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        use_barrier[0].dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        use_barrier[0].image = g_FontImage;
        use_barrier[0].subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        use_barrier[0].subresourceRange.levelCount = 1;
        use_barrier[0].subresourceRange.layerCount = 1;
        vkCmdPipelineBarrier(command_buffer, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, NULL, 0, NULL, 1, use_barrier);
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
    
    {    return 0;
}

    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
        g_ShaderHandle = glCreateProgram();
    g_VertHandle = glCreateShader(GL_VERTEX_SHADER);
    g_FragHandle = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(g_VertHandle, 2, vertex_shader_with_version, NULL);
    glShaderSource(g_FragHandle, 2, fragment_shader_with_version, NULL);
    glCompileShader(g_VertHandle);
    glCompileShader(g_FragHandle);
    glAttachShader(g_ShaderHandle, g_VertHandle);
    glAttachShader(g_ShaderHandle, g_FragHandle);
    glLinkProgram(g_ShaderHandle);
    
    //
// Exception tracer library.
    
    #include <folly/CPortability.h>
#include <folly/Optional.h>
    
    /**
 * A sorted_vector_map is similar to a sorted_vector_set but stores
 * <key,value> pairs instead of single elements.
 *
 * @param class Key           Key type
 * @param class Value         Value type
 * @param class Compare       Function that can compare key types and impose
 *                            a strict weak ordering over them.
 * @param class Allocator     allocation policy
 * @param class GrowthPolicy  policy object to control growth
 *
 * @author Aditya Agarwal <aditya@fb.com>
 * @author Akhil Wable    <akhil@fb.com>
 * @author Jordan DeLong  <delong.j@fb.com>
 */
template <
    class Key,
    class Value,
    class Compare = std::less<Key>,
    class Allocator = std::allocator<std::pair<Key, Value>>,
    class GrowthPolicy = void,
    class Container = std::vector<std::pair<Key, Value>, Allocator>>
class sorted_vector_map
    : boost::totally_ordered1<
          sorted_vector_map<Key, Value, Compare, Allocator, GrowthPolicy>,
          detail::growth_policy_wrapper<GrowthPolicy>> {
  detail::growth_policy_wrapper<GrowthPolicy>&
  get_growth_policy() { return *this; }
    }
    
      // find
  EXPECT_TRUE(s.end() == s.find(buddy));
  EXPECT_EQ(hello, *s.find(hello));
  EXPECT_TRUE(s.end() == s.find(stake));
  EXPECT_EQ(world, *s.find(world));
  EXPECT_TRUE(s.end() == s.find(zebra));
    
    TEST(Via, chain3) {
  int count = 0;
  auto f = makeFuture().thenMulti(
      [&]{ count++; return 3.14159; },
      [&](double) { count++; return std::string('hello'); },
      [&]{ count++; return makeFuture(42); });
  EXPECT_EQ(42, f.get());
  EXPECT_EQ(3, count);
}
    
      ~IOThreadPoolExecutor() override;
    
    #ifdef _WIN32
#include <sys/types.h>
    
    Finally, you can end the calculation anytime, by using XXH32_digest().
This function returns the final 32-bits hash.
You must provide the same 'void* state' parameter created by XXH32_init().
Memory will be freed by XXH32_digest().
*/
    
      ~Reader();
    
    JNIEnv* JniCallback::getJniEnv(jboolean* attached) const {
  return JniUtil::getJniEnv(m_jvm, attached);
}
    
    // Modules in this directory should keep internal keys wrapped inside
// the following class instead of plain strings so that we do not
// incorrectly use string comparisons instead of an InternalKeyComparator.
class InternalKey {
 private:
  std::string rep_;
 public:
  InternalKey() { }   // Leave rep_ as empty to indicate it is invalid
  InternalKey(const Slice& _user_key, SequenceNumber s, ValueType t) {
    AppendInternalKey(&rep_, ParsedInternalKey(_user_key, s, t));
  }
    }
    
    void SyncPoint::Data::LoadDependencyAndMarkers(
  const std::vector<SyncPointPair>& dependencies,
  const std::vector<SyncPointPair>& markers) {
  std::lock_guard<std::mutex> lock(mutex_);
  successors_.clear();
  predecessors_.clear();
  cleared_points_.clear();
  markers_.clear();
  marked_thread_id_.clear();
  for (const auto& dependency : dependencies) {
    successors_[dependency.predecessor].push_back(dependency.successor);
    predecessors_[dependency.successor].push_back(dependency.predecessor);
  }
  for (const auto& marker : markers) {
    successors_[marker.predecessor].push_back(marker.successor);
    predecessors_[marker.successor].push_back(marker.predecessor);
    markers_[marker.predecessor].push_back(marker.successor);
  }
  cv_.notify_all();
}