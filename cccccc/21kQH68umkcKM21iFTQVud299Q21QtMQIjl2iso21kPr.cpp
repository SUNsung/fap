
        
        #include <unordered_set>
#include <vector>
    
    TEST_P(StatusPropagationTest, PartialRunDoneFirst) {
  // Tests error propagation when PartialRunDone is called first.
  StatusTestParam param = GetParam();
  int step_id = 1;
    }
    
    #endif  // TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_

    
    HloReachabilityMap::HloReachabilityMap(
    const std::list<HloInstruction*>& instructions)
    : size_(instructions.size()) {
  bit_vectors_.reserve(size_);
  for (const HloInstruction* hlo : instructions) {
    indices_[hlo] = bit_vectors_.size();
    bit_vectors_.emplace_back(size_);
  }
  CHECK_EQ(size_, indices_.size());  // instructions should be unique
}
    
        EXPECT_EQ(a_1_1.get(), a_1_2.get());
    EXPECT_EQ(d_4_1.get(), d_4_2.get());
    EXPECT_EQ(e_5_1.get(), e_5_2.get());
    
      // Size of the buffer used for caching the data read from source file.
  int64 input_buffer_size = 256 << 10;
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
      virtual inline const char* type() const { return 'Exp'; }
    
    void HHVM_FUNCTION(xhprof_frame_begin, const String& name) {
  Profiler *prof = ThreadInfo::s_threadInfo->m_profiler;
  if (prof) {
    s_profiler_factory->cacheString(name);
    prof->beginFrame(name.data());
  }
}
    
    namespace irgen {
    }
    
      bool ret = true;
  bitmask* run_nodes = numa_get_run_node_mask();
  bitmask* mem_nodes = numa_get_mems_allowed();
  for (int i = 0; i <= max_node; i++) {
    if (!numa_bitmask_isbitset(run_nodes, i) ||
        !numa_bitmask_isbitset(mem_nodes, i)) {
      // Only deal with the case of a contiguous set of nodes where we can
      // run/allocate memory on each node.
      ret = false;
      break;
    }
    numa_node_set |= (uint32_t)1 << i;
    numa_num_nodes++;
  }
  numa_bitmask_free(run_nodes);
  numa_bitmask_free(mem_nodes);
    
      SSATmp* const switchVal = popC(env);
  Type type = switchVal->type();
  assertx(IMPLIES(!(type <= TInt), bounded));
  assertx(IMPLIES(bounded, iv.size() > 2));
  SSATmp* index;
  SSATmp* ssabase = cns(env, base);
  SSATmp* ssatargets = cns(env, nTargets);
    
    
    {    auto const need = nBytes - available();
    auto const amt = std::min(std::max(m_size + need, 2 * m_size), m_maxGrow);
    if (amt < m_size + need) return false;
    if (!m_destBuf) {
      m_destBuf.reset((Address)::malloc(amt));
      ::memcpy(m_destBuf.get(), m_destBase, used());
    } else {
      m_destBuf.reset((Address)::realloc(m_destBuf.release(), amt));
    }
    if (!m_destBuf) reportMallocError(amt);
    m_destBase = m_destBuf.get();
    m_size = amt;
    return true;
  }
    
    
    {  // Finished copying the file; now load it.
  auto const handle = dlopen(tmp_filename, RTLD_NOW);
  if (!handle) {
    Logger::Error('dlopen_embedded_data: dlopen failed: %s', dlerror());
    return nullptr;
  }
  return handle;
}
    
    #include 'hphp/runtime/vm/jit/code-cache.h'
#include 'hphp/runtime/vm/jit/code-gen-helpers.h'
#include 'hphp/runtime/vm/jit/func-guard.h'
#include 'hphp/runtime/vm/jit/irgen-func-prologue.h'
#include 'hphp/runtime/vm/jit/irgen.h'
#include 'hphp/runtime/vm/jit/irlower.h'
#include 'hphp/runtime/vm/jit/phys-reg.h'
#include 'hphp/runtime/vm/jit/print.h'
#include 'hphp/runtime/vm/jit/relocation.h'
#include 'hphp/runtime/vm/jit/srcdb.h'
#include 'hphp/runtime/vm/jit/tc.h'
#include 'hphp/runtime/vm/jit/translator.h'
#include 'hphp/runtime/vm/jit/types.h'
#include 'hphp/runtime/vm/jit/unique-stubs.h'
#include 'hphp/runtime/vm/jit/vasm-emit.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm.h'
    
                // Verify that there's indeed a single layout
            for (const auto& iter : inputMatrices)
            {
                assert(iter.second.pMBLayout == pMBLayout);
                // TODO: This must be a runtime check, not an assert().
                UNUSED(iter);
            }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Flatten)
        .Description('Flattens the input tensor into a 2D matrix, '
            'keeping the first dimension unchanged.')
        .Input('input', 'A tensor of rank >= 2.', 'T')
        .Output('output', 'A tensor of rank 2 with the contents of the input tensor, '
            'with first dimension equal first dimension of input, and remaining '
            'input dimensions flatenned into the inner dimension of the output.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
    enum
{
    CNTKRNNWeightIndex = 0,
    CNTKRNNHweightIndex = 1,
    CNTKRNNBiasIndex = 2,
    CNTKRNNDelayIndex = 3,
    CNTKRNNInputIndex = 4,
    CNTKRNNInputCount = 5
};
    
    using namespace std;
    
                m_gradHeader->numSamples = actualMBSize ? 1 : actualMBSize;
            distGradAgg.AggregateGradients(learnParamsValues, m_gradHeader.get(), 0);
    
    namespace osquery {
    }
    
      // Now set the watchdog to no delay.
  FLAGS_watchdog_delay = 0;
  // This will call stopChild as there is no delay and the child is unhealthy.
  EXPECT_FALSE(runner.watch(fake_test_process));
    
    #include <string>
    
    std::string wstringToString(const wchar_t* src) {
  if (src == nullptr) {
    return std::string('');
  }
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
            // FIXME-OPT: Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats
        static ImVector<ImDrawVertAllegro> vertices;
        vertices.resize(cmd_list->VtxBuffer.Size);
        for (int i = 0; i < cmd_list->VtxBuffer.Size; ++i)
        {
            const ImDrawVert &dv = cmd_list->VtxBuffer[i];
            ImDrawVertAllegro v;
            v.pos = dv.pos;
            v.uv = dv.uv;
            unsigned char *c = (unsigned char*)&dv.col;
            v.col = al_map_rgba(c[0], c[1], c[2], c[3]);
            vertices[i] = v;
        }
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized
    ImGuiIO& io = ImGui::GetIO();
    if (io.DisplaySize.x <= 0.0f || io.DisplaySize.y <= 0.0f)
        return;
    }
    
    
    {        ImGui::Render();
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
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
    
    #define       XXH32_SIZEOFSTATE 48
typedef struct { long long ll[(XXH32_SIZEOFSTATE+(sizeof(long long)-1))/sizeof(long long)]; } XXH32_stateSpace_t;
/*
These functions allow user application to make its own allocation for state.
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
        // Append, Get
    slists.Append('a', 'gh');
    slists.Append('a', 'jk');
    slists.Append('b', 'l;');
    slists.Append('c', 'rogosh');
    slists.Get('a', &a);
    slists.Get('b', &b);
    slists.Get('c', &c);
    ASSERT_EQ(a, 'x\nt\nr\nsa\ngh\njk');
    ASSERT_EQ(b, 'y\n2\nmonkey\ndf\nl;');
    ASSERT_EQ(c, 'asdasd\nasdasd\nbbnagnagsx\nrogosh');
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
    /**
 * @brief not support
 * @details [long description]
 *
 * @param src [description]
 * @param target_in [description]
 *
 * @return [description]
 */
Status EnvLibrados::LinkFile(
  const std::string& src,
  const std::string& target_in)
{
  LOG_DEBUG('[IO]%s => %s\n', src.c_str(), target_in.c_str());
  return Status::NotSupported();
}
    
    #ifndef NDEBUG
namespace rocksdb {
struct SyncPoint::Data {
  // Enable proper deletion by subclasses
  virtual ~Data() {}
  // successor/predecessor map loaded from LoadDependency
  std::unordered_map<std::string, std::vector<std::string>> successors_;
  std::unordered_map<std::string, std::vector<std::string>> predecessors_;
  std::unordered_map<std::string, std::function<void(void*)> > callbacks_;
  std::unordered_map<std::string, std::vector<std::string> > markers_;
  std::unordered_map<std::string, std::thread::id> marked_thread_id_;
    }
    }
    
    namespace rocksdb {
CompactionFilterFactoryJniCallback::CompactionFilterFactoryJniCallback(
    JNIEnv* env, jobject jcompaction_filter_factory)
    : JniCallback(env, jcompaction_filter_factory) {
  
  // Note: The name of a CompactionFilterFactory will not change during
  // it's lifetime, so we cache it in a global var
  jmethodID jname_method_id =
      AbstractCompactionFilterFactoryJni::getNameMethodId(env);
  if(jname_method_id == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
      // Updates the probability distribution for the units in the corpus.
  // Must be called whenever the corpus or unit weights are changed.
  void UpdateCorpusDistribution() {
    size_t N = Inputs.size();
    Intervals.resize(N + 1);
    Weights.resize(N);
    std::iota(Intervals.begin(), Intervals.end(), 0);
    if (CountingFeatures)
      for (size_t i = 0; i < N; i++)
        Weights[i] = Inputs[i]->NumFeatures * (i + 1);
    else
      std::iota(Weights.begin(), Weights.end(), 1);
    CorpusDistribution = std::piecewise_constant_distribution<double>(
        Intervals.begin(), Intervals.end(), Weights.begin());
  }
  std::piecewise_constant_distribution<double> CorpusDistribution;
    
    #include 'FuzzerExtFunctions.def'
    
      bool TimedOut() {
    return Options.MaxTotalTimeSec > 0 &&
           secondsSinceProcessStartUp() >
               static_cast<size_t>(Options.MaxTotalTimeSec);
  }
    
      // Sort. Give preference to
  //   * smaller files
  //   * files with more features.
  std::sort(Files.begin() + NumFilesInFirstCorpus, Files.end(),
            [&](const MergeFileInfo &a, const MergeFileInfo &b) -> bool {
              if (a.Size != b.Size)
                return a.Size < b.Size;
              return a.Features.size() > b.Features.size();
            });
    
      size_t InsertPartOf(const uint8_t *From, size_t FromSize, uint8_t *To,
                      size_t ToSize, size_t MaxToSize);
  size_t CopyPartOf(const uint8_t *From, size_t FromSize, uint8_t *To,
                    size_t ToSize);
  size_t ApplyDictionaryEntry(uint8_t *Data, size_t Size, size_t MaxSize,
                              DictionaryEntry &DE);
    
    bool ParseOneDictionaryEntry(const std::string &Str, Unit *U) {
  U->clear();
  if (Str.empty()) return false;
  size_t L = 0, R = Str.size() - 1;  // We are parsing the range [L,R].
  // Skip spaces from both sides.
  while (L < R && isspace(Str[L])) L++;
  while (R > L && isspace(Str[R])) R--;
  if (R - L < 2) return false;
  // Check the closing '
  if (Str[R] != ''') return false;
  R--;
  // Find the opening '
  while (L < R && Str[L] != ''') L++;
  if (L >= R) return false;
  assert(Str[L] == '\'');
  L++;
  assert(L <= R);
  for (size_t Pos = L; Pos <= R; Pos++) {
    uint8_t V = (uint8_t)Str[Pos];
    if (!isprint(V) && !isspace(V)) return false;
    if (V =='\\') {
      // Handle '\\'
      if (Pos + 1 <= R && (Str[Pos + 1] == '\\' || Str[Pos + 1] == ''')) {
        U->push_back(Str[Pos + 1]);
        Pos++;
        continue;
      }
      // Handle '\xAB'
      if (Pos + 3 <= R && Str[Pos + 1] == 'x'
           && isxdigit(Str[Pos + 2]) && isxdigit(Str[Pos + 3])) {
        char Hex[] = '0xAA';
        Hex[2] = Str[Pos + 2];
        Hex[3] = Str[Pos + 3];
        U->push_back(strtol(Hex, nullptr, 16));
        Pos += 3;
        continue;
      }
      return false;  // Invalid escape.
    } else {
      // Any other character.
      U->push_back(V);
    }
  }
  return true;
}