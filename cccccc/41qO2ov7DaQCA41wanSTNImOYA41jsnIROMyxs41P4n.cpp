
        
        namespace tesseract {
    }
    
    // Computes part of matrix.vector v = Wu. Computes N=32 results.
// For details see PartialMatrixDotVector64 with N=32.
static void PartialMatrixDotVector32(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  __m256i result2 = _mm256_setzero_si256();
  __m256i result3 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result2);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result3);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result1, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result2, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister * 3;
  ExtractResults(result3, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    
    {}  // namespace tesseract.

    
    class PAGE_RES_IT;
class ROW;
class WERD_RES;
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    
    {  svMenuRoot->BuildMenu(sv, false);
}
    
    #include <grpc/support/port_platform.h>
    
      CensusServerCallData()
      : gc_(nullptr),
        auth_context_(nullptr),
        recv_initial_metadata_(nullptr),
        initial_on_done_recv_initial_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&census_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_initial_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
      // RegXMM is used for both FP and SIMD registers. Registers from 0 to 15 are
  // reserved to FP and register from 16 to 29 are reserved to SIMD.
  // Ignoring the vector registers 30, 31 due to kMaxRegs == 64
  constexpr RegXMM f0(0);   // volatile scratch register
  /* volatile, argument passing floating point registers */
  constexpr RegXMM f1(1);
  constexpr RegXMM f2(2);
  constexpr RegXMM f3(3);
  constexpr RegXMM f4(4);
  constexpr RegXMM f5(5);
  constexpr RegXMM f6(6);
  constexpr RegXMM f7(7);
  constexpr RegXMM f8(8);
  constexpr RegXMM f9(9);
  constexpr RegXMM f10(10);
  constexpr RegXMM f11(11);
  constexpr RegXMM f12(12);
  constexpr RegXMM f13(13);
  /* nonvolatile, local variables */
  constexpr RegXMM f14(14);
  constexpr RegXMM f15(15);
    
    #include <sys/types.h>
#include <tuple>
    
    
    {}

    
    struct PhpFileDoesNotExistException : ExtendedException {
  explicit PhpFileDoesNotExistException(const char* file)
      : ExtendedException('File could not be loaded: %s', file) {}
  explicit PhpFileDoesNotExistException(const char* msg,
                                        DEBUG_ONLY bool empty_file)
      : ExtendedException('%s', msg) {
    assertx(empty_file);
  }
  EXCEPTION_COMMON_IMPL(PhpFileDoesNotExistException);
};
    
    template <typename F>
void find(const std::string &root, const std::string& path, bool php,
          const F& callback) {
  auto spath = path.empty() || !isDirSeparator(path[0]) ?
    path : path.substr(1);
    }
    
    String FileUtil::relativePath(const std::string& fromDir,
                              const String& toFile) {
    }
    
    #define IM_VEC4_CLASS_EXTRA                                                 \
        ImVec4(const MyVec4& f) { x = f.x; y = f.y; z = f.z; w = f.w; }     \
        operator MyVec4() const { return MyVec4(x,y,z,w); }
*/
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
        for (int n = 0; n < 50; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
            // Rendering
        ImGui::EndFrame();
        g_pd3dDevice->SetRenderState(D3DRS_ZENABLE, false);
        g_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
        g_pd3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
        D3DCOLOR clear_col_dx = D3DCOLOR_RGBA((int)(clear_color.x*255.0f), (int)(clear_color.y*255.0f), (int)(clear_color.z*255.0f), (int)(clear_color.w*255.0f));
        g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, clear_col_dx, 1.0f, 0);
        if (g_pd3dDevice->BeginScene() >= 0)
        {
            ImGui::Render();
            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            g_pd3dDevice->EndScene();
        }
        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
    
          // Test compact range works
      dbfull()->CompactRange(CompactRangeOptions(), nullptr, nullptr);
      // All data should be in the last level.
      ColumnFamilyMetaData cf_meta;
      db_->GetColumnFamilyMetaData(&cf_meta);
      ASSERT_EQ(5U, cf_meta.levels.size());
      for (int i = 0; i < 4; i++) {
        ASSERT_EQ(0U, cf_meta.levels[i].files.size());
      }
      ASSERT_GT(cf_meta.levels[4U].files.size(), 0U);
      verify_func();
    
      // Open all files and look for the values we've put in there.
  // They should not be found if encrypted, otherwise
  // they should be found.
  std::vector<std::string> fileNames;
  auto status = env_->GetChildren(dbname_, &fileNames);
  ASSERT_OK(status);
    
    #include 'rocksdb/status.h'
    
      const uint64_t kMicrosPerSecond = 1000000;
  const uint64_t kRefillInterval = 1024U;
    
      RateLimiter* low_pri_rate_limiter() { return low_pri_rate_limiter_.get(); }
    
      size_t TruncateToPageBoundary(size_t s) {
    s -= (s & (page_size_ - 1));
    assert((s % page_size_) == 0);
    return s;
  }
    
      int ret = system('rm -rf /tmp/rocksmergetest');
  if (ret != 0) {
    fprintf(stderr, 'Error deleting /tmp/rocksmergetest, code: %d\n', ret);
    return ret;
  }
  rocksdb::Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new MyMerge);
  options.compaction_filter = &filter;
  status = rocksdb::DB::Open(options, '/tmp/rocksmergetest', &raw_db);
  assert(status.ok());
  std::unique_ptr<rocksdb::DB> db(raw_db);
    
    #include 'rocksdb/db.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/options.h'
    
    template <typename ValueType>
class ForEach {
 public:
  template <typename InputIterator>
  ForEach(InputIterator begin, InputIterator end)
      : func_([begin, end](FunctionRef<void(ValueType)> f) {
          for (auto it = begin; it != end; ++it) {
            f(*it);
          }
        }) {}
    }
    
    template <class... Args>
[[noreturn]] void throwSystemErrorExplicit(int err, Args&&... args) {
  throw makeSystemErrorExplicit(err, std::forward<Args>(args)...);
}
    
    template <typename RNG>
using StateSizeT = _t<StateSize<RNG>>;
    
    namespace folly {
    }
    
    
    {
    {} // namespace detail
} // namespace folly

    
    /**
 * Get the default options for gzip compression.
 * A codec created with these options will have type CodecType::GZIP.
 */
Options defaultGzipOptions();
    
    /// Returns the best real CacheLocality information available
static CacheLocality getSystemLocalityInfo() {
  if (kIsLinux) {
    try {
      return CacheLocality::readFromSysfs();
    } catch (...) {
      // keep trying
    }
  }
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    auto newslots = folly::make_unique<Slots>();
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(newslots->slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
    }
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    #endif  // GUETZLI_COMPARATOR_H_

    
    namespace guetzli {
    }
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}
    
    template< >
struct make_storage_type< 8u, true >
{
    typedef mars_boost::int64_t type;
    }