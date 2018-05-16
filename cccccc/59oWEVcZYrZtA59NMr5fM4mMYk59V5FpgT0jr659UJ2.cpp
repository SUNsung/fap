
        
        #endif
// TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_

    
    namespace Eigen {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {    OP_REQUIRES_OK(
        context, context->GetAttr('samples_per_second', &samples_per_second_));
    OP_REQUIRES(context, samples_per_second_ > 0,
                errors::InvalidArgument('samples_per_second must be > 0.'));
    OP_REQUIRES_OK(context,
                   context->GetAttr('bits_per_second', &bits_per_second_));
  }
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/kernels/cuda_device_array_gpu.h'
#include 'tensorflow/core/util/cuda_kernel_helper.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // GOOGLE_CUDA

    
      const std::vector<string> urls({server_data_.url});
  for (int i = 0; i < 3; ++i) {
    server_data_.server->ClearReceivedDebugData();
    const uint64 wall_time = Env::Default()->NowMicros();
    }
    
      class MatchGroundTruth : public QuickTest ,
      public ::testing::WithParamInterface<const char*> {
  };
  
  TEST_P(MatchGroundTruth, FastPhototestOCR) {
    OCRTester(TESTING_DIR '/phototest.tif',
              TESTING_DIR '/phototest.txt',
              TESSDATA_DIR '_fast', GetParam());
  }
  
  INSTANTIATE_TEST_CASE_P( EngLatinDevaArabLang, MatchGroundTruth, 
                        ::testing::Values('eng', 'script/Latin', 'script/Devanagari', 'script/Arabic') );
    
    // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
    // Computes all the cross product distances of the points from the line,
// storing the actual (signed) cross products in distances.
// Ignores distances of points that are further away than the previous point,
// and overlaps the previous point by at least half.
void DetLineFit::ComputeDistances(const ICOORD& start, const ICOORD& end) {
  distances_.truncate(0);
  ICOORD line_vector = end;
  line_vector -= start;
  square_length_ = line_vector.sqlength();
  int line_length = IntCastRounded(sqrt(square_length_));
  // Compute the distance of each point from the line.
  int prev_abs_dist = 0;
  int prev_dot = 0;
  for (int i = 0; i < pts_.size(); ++i) {
    ICOORD pt_vector = pts_[i].pt;
    pt_vector -= start;
    int dot = line_vector % pt_vector;
    // Compute |line_vector||pt_vector|sin(angle between)
    int dist = line_vector * pt_vector;
    int abs_dist = dist < 0 ? -dist : dist;
    if (abs_dist > prev_abs_dist && i > 0) {
      // Ignore this point if it overlaps the previous one.
      int separation = abs(dot - prev_dot);
      if (separation < line_length * pts_[i].halfwidth ||
          separation < line_length * pts_[i - 1].halfwidth)
        continue;
    }
    distances_.push_back(DistPointPair(dist, pts_[i].pt));
    prev_abs_dist = abs_dist;
    prev_dot = dot;
  }
}
    
    static STRING ParagraphJustificationToString(
    tesseract::ParagraphJustification justification) {
  switch (justification) {
    case JUSTIFICATION_LEFT:
      return 'LEFT';
    case JUSTIFICATION_RIGHT:
      return 'RIGHT';
    case JUSTIFICATION_CENTER:
      return 'CENTER';
    default:
      return 'UNKNOWN';
  }
}
    
    #endif  // TESSERACT_CCMAIN_OTSUTHR_H_

    
    // Maximum number of unichars in the small and medium sized words
static const int kMaxSmallWordUnichars = 3;
static const int kMaxMediumWordUnichars = 6;
    
    #ifndef TESSERACT_CCUTIL_UNICODES_H_
#define TESSERACT_CCUTIL_UNICODES_H_
    
    
    {}
    
    
    {  auto& counter = s_counters[m_name];
  counter.total += elapsed;
  ++counter.count;
  counter.max = std::max(counter.max, elapsed);
  counter.wall_time_elapsed += elapsed_wall_clock;
  m_finished = true;
  return elapsed;
}
    
    public const char *
magic_stream(struct magic_set *ms, php_stream *stream)
{
  if (ms == NULL)
    return NULL;
  return file_or_stream(ms, NULL, stream);
}
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
        if (s == nullptr || d == nullptr) continue;
    
    
inline int Instruction::ImmBranch() const {
  switch (BranchType()) {
    case CondBranchType: return ImmCondBranch();
    case UncondBranchType: return ImmUncondBranch();
    case CompareBranchType: return ImmCmpBranch();
    case TestBranchType: return ImmTestBranch();
    default: not_reached();
  }
  return 0;
}
    
      resourceInfo = FindResource(moduleHandle, section, RT_RCDATA);
  if (!resourceInfo) {
    return false;
  }
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    
    {  FileMetaData() : refs(0), allowed_seeks(1 << 30), file_size(0) { }
};
    
    
    {  static void Append(WriteBatch* dst, const WriteBatch* src);
};
    
    Slice BlockBuilder::Finish() {
  // Append restart array
  for (size_t i = 0; i < restarts_.size(); i++) {
    PutFixed32(&buffer_, restarts_[i]);
  }
  PutFixed32(&buffer_, restarts_.size());
  finished_ = true;
  return Slice(buffer_);
}
    
    #include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
#include 'leveldb/slice.h'
#include 'util/hash.h'
    
      memset(buf, 0, sizeof(buf));
  ASSERT_EQ(0x8a9136aa, Value(buf, sizeof(buf)));
    
    namespace leveldb {
    }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
      const char* data_;
  size_t size_;
  uint32_t restart_offset_;     // Offset in data_ of restart array
  bool owned_;                  // Block owns data_[]
    
    
    {  // No copying allowed
  BlockBuilder(const BlockBuilder&);
  void operator=(const BlockBuilder&);
};
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    IMGUI_API bool        ImGui_ImplDX9_Init(void* hwnd, IDirect3DDevice9* device);
IMGUI_API void        ImGui_ImplDX9_Shutdown();
IMGUI_API void        ImGui_ImplDX9_NewFrame();
IMGUI_API void        ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    struct GLFWwindow;
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX11 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    #endif // D_A2_STR_H

    
    void AnnounceList::announceSuccess()
{
  if (currentTrackerInitialized_) {
    (*currentTier_)->nextEvent();
    auto url = *currentTracker_;
    (*currentTier_)->urls.erase(currentTracker_);
    (*currentTier_)->urls.push_front(std::move(url));
    currentTier_ = std::begin(tiers_);
    currentTracker_ = std::begin((*currentTier_)->urls);
  }
}
    
    #endif // D_ANNOUNCE_LIST_H

    
      AnnounceTier(std::deque<std::string> urls);
    
    #include 'common.h'