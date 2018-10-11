
        
        #if  defined(__BORLANDC__) && (__BORLANDC__ < 0x600)
    
    namespace boost{
namespace detail{
    }
    }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         mem_block_cache.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: memory block cache used by the non-recursive matcher.
  */
    
    struct any_type 
{
   template <class T>
   any_type(const T&); 
   template <class T, class U>
   any_type(const T&, const U&); 
   template <class T, class U, class V>
   any_type(const T&, const U&, const V&); 
};
typedef char no_type;
typedef char (&unary_type)[2];
typedef char (&binary_type)[3];
typedef char (&ternary_type)[4];
    
    #endif
    
      /**
   * \fn  virtual void Predictor::Init(const std::vector<std::pair<std::string,
   * std::string> >&cfg ,const std::vector<std::shared_ptr<DMatrix> > &cache);
   *
   * \brief Configure and register input matrices in prediction cache.
   *
   * \param cfg   The configuration.
   * \param cache Vector of DMatrix's to be used in prediction.
   */
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
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
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of Dear ImGui
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
    // Frame data
struct FrameDataForRender
{
    VkDeviceMemory  VertexBufferMemory;
    VkDeviceMemory  IndexBufferMemory;
    VkDeviceSize    VertexBufferSize;
    VkDeviceSize    IndexBufferSize;
    VkBuffer        VertexBuffer;
    VkBuffer        IndexBuffer;
};
static int                    g_FrameIndex = 0;
static FrameDataForRender     g_FramesDataBuffers[IMGUI_VK_QUEUED_FRAMES] = {};
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    namespace aria2 {
    }
    
    #include <vector>
#include <deque>
#include <memory>
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    #include 'util.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'MessageDigest.h'
#include 'message_digest_helper.h'
#include 'fmt.h'
    
      ~DHTTokenTracker();
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    DNSCache::AddrEntry::AddrEntry(const std::string& addr)
    : addr_(addr), good_(true)
{
}
    
        bool contains(const std::string& addr) const;
    
      FunctionRef<int(int, std::vector<int> const&)> variant6 = of;
  EXPECT_EQ(100 + 6 * 20, variant6(20, {}));
  EXPECT_EQ(100 + 6 * 20, variant6(20, {1, 2, 3}));
  FunctionRef<int(int, std::vector<int> const&)> const cvariant6 = of;
  EXPECT_EQ(100 + 6 * 20, cvariant6(20, {}));
  EXPECT_EQ(100 + 6 * 20, cvariant6(20, {1, 2, 3}));
    
    // Format of each probe arguments as operand.
// Size of the arugment tagged with FOLLY_SDT_Sn, with 'n' constraint.
// Value of the argument tagged with FOLLY_SDT_An, with configured constraint.
#define FOLLY_SDT_ARG(n, x)                                                    \
  [FOLLY_SDT_S##n] 'n'                ((size_t)FOLLY_SDT_ARGSIZE(x)),          \
  [FOLLY_SDT_A##n] FOLLY_SDT_ARG_CONSTRAINT (x)
    
     protected:
  /**
   * Returns true if the KeepAlive is constructed from an executor that does
   * not support the keep alive ref-counting functionality
   */
  template <typename ExecutorT>
  static bool isKeepAliveDummy(const KeepAlive<ExecutorT>& keepAlive) {
    return reinterpret_cast<intptr_t>(keepAlive.executorAndDummyFlag_) &
        KeepAlive<ExecutorT>::kDummyFlag;
  }
    
    template <class RNG, class /* EnableIf */>
void Random::seed(RNG& rng) {
  detail::SeedData<RNG> sd;
  std::seed_seq s(std::begin(sd.seedData), std::end(sd.seedData));
  rng.seed(s);
}
    
     public:
  // Default generator type.
#if FOLLY_HAVE_EXTRANDOM_SFMT19937
  typedef __gnu_cxx::sfmt19937 DefaultGenerator;
#else
  typedef std::mt19937 DefaultGenerator;
#endif
    
    namespace folly {
    }
    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
      tv.tv_sec = 1;
  tv.tv_usec = 10;
  EXPECT_EQ(1000010000ns, to<nanoseconds>(tv));
  EXPECT_EQ(1000010us, to<microseconds>(tv));
  EXPECT_EQ(1000ms, to<milliseconds>(tv));
  EXPECT_EQ(1s, to<seconds>(tv));
  EXPECT_EQ(
      createTimePoint<system_clock>(1000010000ns),
      to<system_clock::time_point>(tv));
  EXPECT_EQ(
      createTimePoint<steady_clock>(1000010000ns),
      to<steady_clock::time_point>(tv));
    
    
    {  /**
   * The strategy parameter is used to tune the compression algorithm.
   * Supported values:
   * - Z_DEFAULT_STRATEGY: normal data
   * - Z_FILTERED: data produced by a filter (or predictor)
   * - Z_HUFFMAN_ONLY: force Huffman encoding only (no string match)
   * - Z_RLE: limit match distances to one
   * - Z_FIXED: prevents the use of dynamic Huffman codes
   *
   * The strategy parameter only affects the compression ratio but not the
   * correctness of the compressed output.
   */
  int strategy;
};