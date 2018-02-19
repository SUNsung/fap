
        
        
    {}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    SubProcess::SubProcess(int nfds)
    : running_(false), pid_(-1), exec_path_(nullptr), exec_argv_(nullptr) {
  // The input 'nfds' parameter is currently ignored and the internal constant
  // 'kNFds' is used to support the 3 channels (stdin, stdout, stderr).
  for (int i = 0; i < kNFds; i++) {
    action_[i] = ACTION_CLOSE;
    parent_pipe_[i] = -1;
    child_pipe_[i] = -1;
  }
}
    
    TF_CALL_GPU_NUMBER_TYPES(REGISTER_GPU);
TF_CALL_complex64(REGISTER_GPU);
TF_CALL_complex128(REGISTER_GPU);
TF_CALL_int64(REGISTER_GPU);
TF_CALL_int32(REGISTER_GPU)
    
    // Appends all the elements in the input iterator to the container.
//
// Returns None if successful; returns NULL and sets an exception if
// unsuccessful.
PyObject* Extend(RepeatedScalarContainer* self, PyObject* value);
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    
    
    
    {			b2EdgeShape shape;
			shape.Set(b2Vec2(-40.0f, 0.0f), b2Vec2(40.0f, 0.0f));
			ground->CreateFixture(&shape, 0.0f);
		}
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '1a';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const std::vector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   std::vector<bst_gpair> *out_gpair) override {
    out_gpair->resize(preds.size());
    for (size_t i = 0; i < preds.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (info.labels[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds[i]));
      // this is the gradient
      bst_float grad = (p - info.labels[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair->at(i) = bst_gpair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(std::vector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = *io_preds;
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
      XGBOOST_DEVICE bst_gpair_internal<T> operator-(
      const bst_gpair_internal<T> &rhs) const {
    bst_gpair_internal<T> g;
    g.grad_ = grad_ - rhs.grad_;
    g.hess_ = hess_ - rhs.hess_;
    return g;
  }
    
    path executable_path() {
  return read_symlink('/proc/self/exe');
}
    
    
    {        // Store mount point
        fs::path path(parts[1].begin(), parts[1].end());
        struct stat st;
        const int ret = stat(path.string().c_str(), &st);
        if (ret == -1 && errno == ENOENT) {
          return;
        }
        checkUnixError(ret, 'stat hugepage mountpoint failed');
        pos->mountPoint = fs::canonical(path);
        pos->device = st.st_dev;
      };
    
    using std::make_shared;
using std::string;
    
    std::string GlogStyleFormatter::formatMessage(
    const LogMessage& message,
    const LogCategory* /* handlerCategory */) {
  // Get the local time info
  struct tm ltime;
  auto timeSinceEpoch = message.getTimestamp().time_since_epoch();
  auto epochSeconds =
      std::chrono::duration_cast<std::chrono::seconds>(timeSinceEpoch);
  std::chrono::microseconds usecs =
      std::chrono::duration_cast<std::chrono::microseconds>(timeSinceEpoch) -
      epochSeconds;
  time_t unixTimestamp = epochSeconds.count();
  if (!localtime_r(&unixTimestamp, &ltime)) {
    memset(&ltime, 0, sizeof(ltime));
  }
    }
    
      /**
   * handleMessage() is called when a log message is processed by a LogCategory
   * that this handler is attached to.
   *
   * This must be implemented by LogHandler subclasses.
   *
   * handleMessage() will always be invoked from the thread that logged the
   * message.  LogMessage::getThreadID() contains the thread ID, but the
   * LogHandler can also include any other thread-local state they desire, and
   * this will always be data for the thread that originated the log message.
   *
   * @param message The LogMessage objet.
   * @param handlerCategory  The LogCategory that invoked handleMessage().
   *     This is the category that this LogHandler is attached to.  Note that
   *     this may be different than the category that this message was
   *     originally logged at.  message->getCategory() returns the category of
   *     the log message.
   */
  virtual void handleMessage(
      const LogMessage& message,
      const LogCategory* handlerCategory) = 0;
    
    Handle<Value> DBWrapper::CompactRangeDefault(const Arguments& args) {
  HandleScope scope;
    }
    
      bool PrefixSeek(const Slice& target, uint32_t* index);
    
    TEST_P(DBTestUniversalCompaction, UniversalCompactionTargetLevel) {
  Options options = CurrentOptions();
  options.compaction_style = kCompactionStyleUniversal;
  options.write_buffer_size = 100 << 10;     // 100KB
  options.num_levels = 7;
  options.disable_auto_compactions = true;
  DestroyAndReopen(options);
    }
    
            if (!s.ok()) {
          return s;
        }
    
    static void stb__write(unsigned char v)
{
    fputc(v, stb__outfile);
    ++stb__outbytes;
}
    
    //---- Don't define obsolete functions names. Consider enabling from time to time or when updating to reduce likelihood of using already obsolete function/names
//#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    
    void    ImGui_ImplSdlGL2_InvalidateDeviceObjects()
{
    if (g_FontTexture)
    {
        glDeleteTextures(1, &g_FontTexture);
        ImGui::GetIO().Fonts->TexID = 0;
        g_FontTexture = 0;
    }
}
    
        // Setup viewport
    D3D10_VIEWPORT vp;
    memset(&vp, 0, sizeof(D3D10_VIEWPORT));
    vp.Width = (UINT)ImGui::GetIO().DisplaySize.x;
    vp.Height = (UINT)ImGui::GetIO().DisplaySize.y;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    vp.TopLeftX = vp.TopLeftY = 0;
    ctx->RSSetViewports(1, &vp);
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // Data
static double       g_Time = 0.0f;
static bool         g_MousePressed[3] = { false, false, false };
static CIwTexture*  g_FontTexture = NULL;
static char*        g_ClipboardText = NULL;
static bool         g_osdKeyboardEnabled = false;
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSdlGL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
        ImGui_ImplSdlGL2_NewFrame(window);
    }