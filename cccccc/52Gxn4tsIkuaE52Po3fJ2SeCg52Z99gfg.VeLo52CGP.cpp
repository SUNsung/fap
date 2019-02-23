
        
        // Add a _ to the end of s if necessary to avoid a Python keyword or built-in.
string AvoidPythonReserved(const string& s);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Must be included first.
#include 'tensorflow/python/lib/core/numpy.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    // Given an numpy ndarray object 'obj', creates a corresponding tf
// Tensor in '*ret'.
Status ConvertNdarrayToTensor(PyObject* obj, Tensor* ret);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/stream_executor/platform.h'
    
    port::StatusOr<StreamExecutor*> ExecutorCache::GetOrCreate(
    const StreamExecutorConfig& config,
    const std::function<ExecutorFactory>& factory) {
  // In the fast path case, the cache already has an entry and we can just
  // return after Get() which only takes a shared lock and not a unique lock.
  // If we need to create, we take a unique lock on cache_.
  auto fast_result = Get(config);
  if (fast_result.ok()) {
    return fast_result;
  }
    }
    
    // TaskRunner implementation that posts tasks into libuv's default loop.
class UvTaskRunner : public base::SingleThreadTaskRunner {
 public:
  explicit UvTaskRunner(uv_loop_t* loop);
    }
    
    #ifndef ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
#define ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
    
    namespace gfx {
class Point;
class Rect;
class Screen;
}  // namespace gfx
    
      // TrayIconObserver:
  void OnClicked(const gfx::Rect& bounds,
                 const gfx::Point& location,
                 int modifiers) override;
  void OnDoubleClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnRightClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnBalloonShow() override;
  void OnBalloonClicked() override;
  void OnBalloonClosed() override;
  void OnDrop() override;
  void OnDropFiles(const std::vector<std::string>& files) override;
  void OnDropText(const std::string& text) override;
  void OnDragEntered() override;
  void OnDragExited() override;
  void OnDragEnded() override;
  void OnMouseEntered(const gfx::Point& location, int modifiers) override;
  void OnMouseExited(const gfx::Point& location, int modifiers) override;
  void OnMouseMoved(const gfx::Point& location, int modifiers) override;
    
    Event::~Event() {}
    
     private:
  void OnMessageBoxCallback(DialogClosedCallback callback,
                            const std::string& origin,
                            int code,
                            bool checkbox_checked);
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    #endif  // ATOM_BROWSER_AUTO_UPDATER_H_

    
    void OffScreenOutputDevice::OnPaint(const gfx::Rect& damage_rect) {
  gfx::Rect rect = damage_rect;
  if (!pending_damage_rect_.IsEmpty()) {
    rect.Union(pending_damage_rect_);
    pending_damage_rect_.SetRect(0, 0, 0, 0);
  }
    }
    
    void OffscreenViewProxy::OnEvent(ui::Event* event) {
  if (view_) {
    view_->OnEvent(event);
  }
}
    
    
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
      public:
    ClangDiagRenderer(const clang::LangOptions &langOpts,
                      clang::DiagnosticOptions *diagOpts,
                      decltype(callback) fn)
       : DiagnosticNoteRenderer(langOpts, diagOpts),
         callback(fn) {}
    
    
    {  return 0;
}
    
    #include 'swift/Demangling/Punycode.h'
#include 'swift/Demangling/ManglingUtils.h'
#include <vector>
#include <cstdint>
    
    class LLVM_LIBRARY_VISIBILITY GenericUnix : public ToolChain {
protected:
  InvocationInfo constructInvocation(const InterpretJobAction &job,
                                     const JobContext &context) const override;
  InvocationInfo constructInvocation(const AutolinkExtractJobAction &job,
                                     const JobContext &context) const override;
    }
    
    OPERATOR_SCHEMA(HalfToFloat)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT);
    }
    
    template <typename T, class Context>
class BernoulliJSDOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
        Matrix<char>* NDMask::GetMatrix() const
    {
        return m_matrixView.get();
    }
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
        //
    // Create NDMask for the 'sequences' if the 'sequences' do not have the same length.
    // It returns null if all the 'sequences' have the same length.
    //
    template <typename T>
    static NDMaskPtr CreateMask(size_t numElementsPerSample, const std::vector<std::vector<T>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device)
    {
        size_t numSequences = sequences.size();
        std::vector<size_t> sequenceLengths(numSequences);
        for (size_t i = 0; i < numSequences; ++i)
            sequenceLengths[i] = sequences[i].size() / numElementsPerSample;
    }
    
        Parameter::Parameter(const NDShape& shape, DataType dataType, const ParameterInitializer& initializer, const DeviceDescriptor& device, const std::wstring& name)
        : Variable(shape, VariableKind::Parameter, dataType, nullptr, true, {}, name, Internal::GenerateUid(VariableKind::Parameter))
    {
    }
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    static inline size_t rand(const size_t begin, const size_t end)
{
    const size_t randno = ::rand() * RAND_MAX + ::rand(); // BUGBUG: still only covers 32-bit range
    return begin + randno % (end - begin);
}
    
    
    {    ~ScopeTimer()
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Stop();
            double time = m_aggregateTimer.ElapsedSeconds();
            fprintf(stderr, m_message.c_str(), time);
        }
    }
};
    
                // replace input if needed
            let iter = replacements.find(input);
            if (iter != replacements.end())
            {
                assert(input->GetEnvironmentPtr()); // must be in some network if mapped
                input = iter->second;
                numRelinked++;
                node->SetInput(i, input);
            }
    
        virtual void UpdateFunctionMBSize() override
    {
        UpdateCounts();
    }
    
    //---- Tip: You can add extra functions within the ImGui:: namespace, here or in your own headers files.
/*
namespace ImGui
{
    void MyFunction(const char* name, const MyMatrix44& v);
}
*/

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    static void FrameRender(ImGui_ImplVulkanH_WindowData* wd)
{
	VkResult err;
    }
    
            // Rendering
        ImGui::Render();
        IwGxSetColClear(clear_color.x * 255, clear_color.y * 255, clear_color.z * 255, clear_color.w * 255);
        IwGxClear();
        ImGui_Marmalade_RenderDrawData(ImGui::GetDrawData());
        IwGxSwapBuffers();
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
        // Cleanup
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();
    
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