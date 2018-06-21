
        
        namespace tensorflow {
    }
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
    using GPUDevice = Eigen::GpuDevice;
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    Status SubGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForBinaryCwise(g, {
      {{'gx'}, 'Identity', {'dz'}},
      {{'gy'}, 'Neg', {'dz'}},          // -dz
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Sub', SubGrad);
    
    void CalculateAccuracyStats(
    const std::vector<std::pair<string, int64>>& ground_truth_list,
    const std::vector<std::pair<string, int64>>& found_words,
    int64 up_to_time_ms, int64 time_tolerance_ms,
    StreamingAccuracyStats* stats) {
  int64 latest_possible_time;
  if (up_to_time_ms == -1) {
    latest_possible_time = std::numeric_limits<int64>::max();
  } else {
    latest_possible_time = up_to_time_ms + time_tolerance_ms;
  }
  stats->how_many_ground_truth_words = 0;
  for (const std::pair<string, int64>& ground_truth : ground_truth_list) {
    const int64 ground_truth_time = ground_truth.second;
    if (ground_truth_time > latest_possible_time) {
      break;
    }
    ++stats->how_many_ground_truth_words;
  }
    }
    
        // in-place decimation, for use with data-parallel processing
    // returns a subset of parallel sequences
    template <class ElemType>
    static pair<size_t, size_t> DecimateMinibatchInPlace(StreamMinibatchInputs& mb,    // matrix to be decimated
                                                         size_t numprocs, size_t rank, // rank info
                                                         MBLayoutPtr pMBLayout)        // get decimated as well
    {
        if (numprocs == 1)
            return pair<size_t, size_t>(0, pMBLayout->GetNumParallelSequences());
        // no need to do inplace decimation if numproc == 1
    }
    
    template<> inline
dnnError_t dnnReleaseBuffer<float>(void* ptr)
{
    return dnnReleaseBuffer_F32(ptr);
}
template<> inline
dnnError_t dnnReleaseBuffer<double>(void* ptr)
{
    return dnnReleaseBuffer_F64(ptr);
}
    
    
    {    auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(config);
    ComputationNetworkPtr net = netBuilder->BuildNetworkFromDbnFile(dbnModelPath);
    net->Save(modelPath);
}
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    class latticepair : public std::pair<msra::lattices::lattice, msra::lattices::lattice>
{
public:
    // NOTE: we don't check numerator lattice now
    size_t getnumframes() const
    {
        return second.getnumframes();
    }
    size_t getnumnodes() const
    {
        return second.getnumnodes();
    }
    size_t getnumedges() const
    {
        return second.getnumedges();
    }
    std::wstring getkey() const
    {
        return second.getkey();
    }
};
    
    // ===========================================================================
// float4 -- wrapper around the rather ugly SSE intrinsics for float[4]
//
// Do not use the intrinsics outside anymore; instead add all you need into this class.
//
// MSDN links:
// basic: http://msdn.microsoft.com/en-us/library/x5c07e2a%28v=VS.80%29.aspx
// load/store: (add this)
// newer ones: (seems no single list available)
// ===========================================================================
    
    namespace osquery {
    }
    
    #include <osquery/core.h>
#include <osquery/system.h>
    
    TEST_F(RocksDBDatabasePluginTests, test_corruption) {
  ASSERT_TRUE(pathExists(path_));
  ASSERT_FALSE(pathExists(path_ + '.backup'));
    }
    
    #include <osquery/database.h>
    
    
    {/**
 * @brief Generate a row string for query results
 *
 * @param r A row to analyze
 * @param lengths The data returned from computeQueryDataLengths
 * @param columns The order of the keys (since maps are unordered)
 *
 * @return A string, with a newline, representing your row
 */
std::string generateRow(const Row& r,
                        const std::map<std::string, size_t>& lengths,
                        const std::vector<std::string>& columns);
}

    
    
    {
    {  std::map<std::string, size_t> expected = {{'name', 10}};
  EXPECT_EQ(lengths, expected);
}
}

    
      static CGEventRef eventCallback(CGEventTapProxy proxy,
                                  CGEventType type,
                                  CGEventRef event,
                                  void* refcon);
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
bool ImGui_ImplAllegro5_ProcessEvent(ALLEGRO_EVENT *ev)
{
    ImGuiIO& io = ImGui::GetIO();
    }
    
    // CHANGELOG 
// (minor and older changes stripped away, please see git history for details)
//  2018-06-08: Misc: Extracted imgui_impl_opengl2.cpp/.h away from the old combined GLFW/SDL+OpenGL2 examples.
//  2018-06-08: OpenGL: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplGlfwGL2_RenderDrawData() in the .h file so you can call it yourself.
//  2017-09-01: OpenGL: Save and restore current polygon mode.
//  2016-09-10: OpenGL: Uploading font texture as RGBA32 to increase compatibility with users shaders (not ideal).
//  2016-09-05: OpenGL: Fixed save and restore of current scissor rectangle.
    
        IMGUI_API void          ItemSize(const ImVec2& size, float text_offset_y = 0.0f);
    IMGUI_API void          ItemSize(const ImRect& bb, float text_offset_y = 0.0f);
    IMGUI_API bool          ItemAdd(const ImRect& bb, ImGuiID id, const ImRect* nav_bb = NULL);
    IMGUI_API bool          ItemHoverable(const ImRect& bb, ImGuiID id);
    IMGUI_API bool          IsClippedEx(const ImRect& bb, ImGuiID id, bool clip_even_when_logged);
    IMGUI_API bool          FocusableItemRegister(ImGuiWindow* window, ImGuiID id, bool tab_stop = true);      // Return true if focus is requested
    IMGUI_API void          FocusableItemUnregister(ImGuiWindow* window);
    IMGUI_API ImVec2        CalcItemSize(ImVec2 size, float default_x, float default_y);
    IMGUI_API float         CalcWrapWidthForPos(const ImVec2& pos, float wrap_pos_x);
    IMGUI_API void          PushMultiItemsWidths(int components, float width_full = 0.0f);
    IMGUI_API void          PushItemFlag(ImGuiItemFlags option, bool enabled);
    IMGUI_API void          PopItemFlag();
    
            ID3D12Fence* fence = NULL;
        hr = g_pd3dDevice->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&fence));
        IM_ASSERT(SUCCEEDED(hr));
    
    // use this setting to scale the interface - e.g. on device you could use 2 or 3 scale factor
static ImVec2       g_RenderScale = ImVec2(1.0f,1.0f);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
        // Setup GLUT display function
    // We will also call ImGui_ImplFreeGLUT_InstallFuncs() to get all the other functions installed for us, 
    // otherwise it is possible to install our own functions and call the imgui_impl_freeglut.h functions ourselves.
    glutDisplayFunc(glut_display_func);
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    // Old-style macros
#define BENCHMARK_WITH_ARG(n, a) BENCHMARK(n)->Arg((a))
#define BENCHMARK_WITH_ARG2(n, a1, a2) BENCHMARK(n)->Args({(a1), (a2)})
#define BENCHMARK_WITH_UNIT(n, t) BENCHMARK(n)->Unit((t))
#define BENCHMARK_RANGE(n, lo, hi) BENCHMARK(n)->Range((lo), (hi))
#define BENCHMARK_RANGE2(n, l1, h1, l2, h2) \
  BENCHMARK(n)->RangePair({{(l1), (h1)}, {(l2), (h2)}})
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    Benchmark* Benchmark::DenseThreadRange(int min_threads, int max_threads,
                                       int stride) {
  CHECK_GT(min_threads, 0);
  CHECK_GE(max_threads, min_threads);
  CHECK_GE(stride, 1);
    }
    
      // currently there is no error handling for failure, so this is hack.
  CHECK(ret >= 0);
    
    // Returns true if the string matches the flag.
bool IsFlag(const char* str, const char* flag);
    
    
    {  results.push_back(big_o);
  results.push_back(rms);
  return results;
}
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
    
    {} // end namespace benchmark

    
    namespace benchmark {
    }