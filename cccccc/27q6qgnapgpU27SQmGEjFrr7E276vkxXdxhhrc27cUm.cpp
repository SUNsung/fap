
        
        
    { private:
  DebugOptions debug_options_;
};
    
    #include 'tensorflow/compiler/xla/service/hlo_module.h'
#include 'tensorflow/compiler/xla/service/hlo_pass_interface.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
    #if !TENSORFLOW_USE_SYCL
#error This file must only be included when building TensorFlow with SYCL support
#endif
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_CUDNN_POOLING_LAYER_HPP_

    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    #include <vector>
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \gamma ^ {\alpha x + \beta}
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #endif

    
    
    {    case KindOfObject:
    case KindOfResource:
    case KindOfRef:
      fb_compact_serialize_code(sb, FB_CS_NULL);
      raise_warning(
        'fb_compact_serialize(): unable to serialize object/resource/ref'
      );
      break;
  }
    
    template<class SerDe>
typename std::enable_if<SerDe::deserializing>::type
ArrayTypeTable::serde(SerDe& sd) {
  TRACE_SET_MOD(rat);
  uint32_t size;
  sd(size);
  FTRACE(1, 'ArrayTypeTable size = {}\n', size);
  decltype(m_arrTypes)(size).swap(m_arrTypes);
  for (auto i = uint32_t{0}; i < size; ++i) {
    m_arrTypes[i] = RepoAuthType::Array::deserialize(sd, *this);
    assert(m_arrTypes[i] != nullptr);
    assert(m_arrTypes[i]->id() == i);
    assert(check(m_arrTypes[i]));
    FTRACE(2, '  {} {}\n', i, show(*m_arrTypes[i]));
  }
}
    
    protected:
  Sweepable();
  enum class Init {};
  explicit Sweepable(Init) { init(); }
  virtual ~Sweepable() { delist(); }
    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }
    }
    
    
    {
    {
    { private:
  std::ifstream fi;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_CONFIG_H_

    
      fs = dmlc::Stream::Create(tmp_file.c_str(), 'r');
  xgboost::MetaInfo inforead;
  inforead.LoadBinary(fs);
  EXPECT_EQ(inforead.labels, info.labels);
  EXPECT_EQ(inforead.num_col, info.num_col);
  EXPECT_EQ(inforead.num_row, info.num_row);
    
      XGBOOST_DEVICE float GetGrad() const { return grad_; }
  XGBOOST_DEVICE float GetHess() const { return hess_; }
    
    /*!
 * \brief base class of multi-class evaluation
 * \tparam Derived the name of subclass
 */
template<typename Derived>
struct EvalMClassBase : public Metric {
  bst_float Eval(const std::vector<bst_float> &preds,
                 const MetaInfo &info,
                 bool distributed) const override {
    CHECK_NE(info.labels.size(), 0U) << 'label set cannot be empty';
    CHECK(preds.size() % info.labels.size() == 0)
        << 'label and prediction size not match';
    const size_t nclass = preds.size() / info.labels.size();
    CHECK_GE(nclass, 1U)
        << 'mlogloss and merror are only used for multi-class classification,'
        << ' use logloss for binary classification';
    const bst_omp_uint ndata = static_cast<bst_omp_uint>(info.labels.size());
    double sum = 0.0, wsum = 0.0;
    int label_error = 0;
    #pragma omp parallel for reduction(+: sum, wsum) schedule(static)
    for (bst_omp_uint i = 0; i < ndata; ++i) {
      const bst_float wt = info.GetWeight(i);
      int label =  static_cast<int>(info.labels[i]);
      if (label >= 0 && label < static_cast<int>(nclass)) {
        sum += Derived::EvalRow(label,
                                dmlc::BeginPtr(preds) + i * nclass,
                                nclass) * wt;
        wsum += wt;
      } else {
        label_error = label;
      }
    }
    CHECK(label_error >= 0 && label_error < static_cast<int>(nclass))
        << 'MultiClassEvaluation: label must be in [0, num_class),'
        << ' num_class=' << nclass << ' but found ' << label_error << ' in label';
    }
    }
    
    using namespace folly;
    
    /**
 * Return the mount point for the requested huge page size.
 * 0 = use smallest available.
 * Returns nullptr if the requested huge page size is not available.
 */
const HugePageSize* getHugePageSize(size_t size = 0);
    
    std::shared_ptr<LogHandler> FileHandlerFactory::createHandler(
    const Options& options) {
  WriterFactory writerFactory;
  return StandardLogHandlerFactory::createHandler(
      getType(), &writerFactory, options);
}
    
    
    {void ImmediateFileWriter::flush() {}
} // namespace folly

    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
      bool operator==(const LogConfig& other) const;
  bool operator!=(const LogConfig& other) const;
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }
    
    
    {    // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
    if (hud->show_demo_window)
    {
        ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
        ImGui::ShowDemoWindow(&hud->show_demo_window);
    }
}

    
    bool Imgui_ImplA5_CreateDeviceObjects()
{
    // Build texture atlas
    ImGuiIO &io = ImGui::GetIO();
    unsigned char *pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
    // Implemented features:
//  [X] User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    #include 'imgui.h'
#include 'imgui_impl_sdl_gl3.h'
#include <stdio.h>
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
#include <SDL.h>
    
        // Create the vertex shader
    {
        static const char* vertexShader =
            'cbuffer vertexBuffer : register(b0) \
            {\
            float4x4 ProjectionMatrix; \
            };\
            struct VS_INPUT\
            {\
            float2 pos : POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            PS_INPUT main(VS_INPUT input)\
            {\
            PS_INPUT output;\
            output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));\
            output.col = input.col;\
            output.uv  = input.uv;\
            return output;\
            }';
    }
    
    #include 'FuzzerExtFunctions.def'
    
    template <typename T>
static T *GetFnPtr(T *Fun, T *FunDef, const char *FnName, bool WarnIfMissing) {
  if (Fun == FunDef) {
    if (WarnIfMissing)
      Printf('WARNING: Failed to find function \'%s\'.\n', FnName);
    return nullptr;
  }
  return Fun;
}
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <iterator>
#include <libgen.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
    
    int CloseFile(int Fd) {
  return _close(Fd);
}
    
    
    {  std::ofstream OF(CFPath, std::ofstream::out | std::ofstream::app);
  for (size_t i = M.FirstNotProcessedFile; i < M.Files.size(); i++) {
    auto U = FileToVector(M.Files[i].Name);
    if (U.size() > MaxInputLen) {
      U.resize(MaxInputLen);
      U.shrink_to_fit();
    }
    std::ostringstream StartedLine;
    // Write the pre-run marker.
    OF << 'STARTED ' << std::dec << i << ' ' << U.size() << '\n';
    OF.flush();  // Flush is important since ExecuteCommand may crash.
    // Run.
    TPC.ResetMaps();
    ExecuteCallback(U.data(), U.size());
    // Collect coverage.
    std::set<size_t> Features;
    TPC.CollectFeatures([&](size_t Feature) -> bool {
      Features.insert(Feature);
      return true;
    });
    // Show stats.
    TotalNumberOfRuns++;
    if (!(TotalNumberOfRuns & (TotalNumberOfRuns - 1)))
      PrintStats('pulse ');
    // Write the post-run marker and the coverage.
    OF << 'DONE ' << i;
    for (size_t F : Features)
      OF << ' ' << std::hex << F;
    OF << '\n';
  }
}
    
    typedef struct sha1nfo {
	uint32_t buffer[BLOCK_LENGTH/4];
	uint32_t state[HASH_LENGTH/4];
	uint32_t byteCount;
	uint8_t bufferOffset;
	uint8_t keyBuffer[BLOCK_LENGTH];
	uint8_t innerHash[HASH_LENGTH];
} sha1nfo;
    
    #if LLVM_FUZZER_DEFINES_SANITIZER_WEAK_HOOOKS
void __sanitizer_weak_hook_memcmp(void *caller_pc, const void *s1,
                                  const void *s2, size_t n, int result) {
  fuzzer::TPC.AddValueForMemcmp(caller_pc, s1, s2, n);
  if (!RecordingMemcmp) return;
  if (result == 0) return;  // No reason to mutate.
  if (n <= 1) return;  // Not interesting.
  TS->TraceMemcmpCallback(n, reinterpret_cast<const uint8_t *>(s1),
                          reinterpret_cast<const uint8_t *>(s2));
}
    
    
    {} // namespace aria2

    
    protected:
  void createFile(int addFlags = 0);
    
    
    {} // namespace aria2

    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
    
    {} // namespace aria2
    
    namespace aria2 {
    }
    
    AuthConfig::AuthConfig() {}