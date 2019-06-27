
        
        #include 'native_mate/function_template.h'
    
    
    {}  // namespace mate

    
    #include 'base/logging.h'
#include 'native_mate/dictionary.h'
#include 'native_mate/object_template_builder.h'
    
    // This set of templates invokes a base::Callback by converting the Arguments
// into native types. It relies on the function_template.h to provide helper
// templates.
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*()>& callback) {
  return callback.Run();
}
    
      void Clear() {
    wrapper_.Clear();
    object_ = NULL;
  }
    
    // This specialization allows people to construct function templates directly if
// they need to do fancier stuff.
template <>
struct CallbackTraits<v8::Local<v8::FunctionTemplate>> {
  static v8::Local<v8::FunctionTemplate> CreateTemplate(
      v8::Local<v8::FunctionTemplate> templ) {
    return templ;
  }
};
    
    // Wrappable is a base class for C++ objects that have corresponding v8 wrapper
// objects. To retain a Wrappable object on the stack, use a gin::Handle.
//
// USAGE:
// // my_class.h
// class MyClass : Wrappable<MyClass> {
//  public:
//   ...
// };
//
// Subclasses should also typically have private constructors and expose a
// static Create function that returns a mate::Handle. Forcing creators through
// this static Create function will enforce that clients actually create a
// wrapper for the object. If clients fail to create a wrapper for a wrappable
// object, the object will leak because we use the weak callback from the
// wrapper as the signal to delete the wrapped object.
class WrappableBase {
 public:
  WrappableBase();
  virtual ~WrappableBase();
    }
    
    void ProcessSingleton::LinuxWatcher::StartListening(int socket) {
  DCHECK_CURRENTLY_ON(BrowserThread::IO);
  // Watch for client connections on this socket.
  socket_watcher_ = base::FileDescriptorWatcher::WatchReadable(
      socket, base::BindRepeating(&LinuxWatcher::OnSocketCanReadWithoutBlocking,
                                  base::Unretained(this), socket));
}
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
    // metrics
#include '../src/metric/metric.cc'
#include '../src/metric/elementwise_metric.cc'
#include '../src/metric/multiclass_metric.cc'
#include '../src/metric/rank_metric.cc'
    
        NDArrayView::NDArrayView(CNTK::DataType dataType, CNTK::StorageFormat storageType, const NDShape& viewShape, const DeviceDescriptor& device)
        : NDArrayView(dataType, device, storageType, viewShape, false, AllocateTensorView(dataType, storageType, viewShape, device))
    {}
    
            if (!m_distributed)
        {
            return externalState;
        }
    
    namespace CNTK
{
    struct VariableFields final : public std::enable_shared_from_this<VariableFields>
    {
        friend class CompositeFunction;
    }
    }
    
    #include 'stdafx.h'
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
    
        // process 'special nodes'
    ProcessSpecialNodes(config, workList);
    
            // update after inference
        rows0 = Input(0)->GetAsMatrixNumRows();
        rows1 = Input(1)->HasMBLayout() ? Input(1)->GetSampleMatrixNumRows() : Input(1)->GetAsMatrixNumRows();
        if (isFinalValidationPass && rows0 != rows1)
            InvalidArgument('The inner matrix dimension in the %ls %ls operation does not match (%d vs. %d).', NodeName().c_str(), OperationName().c_str(), (int) rows1, (int) rows0);
        size_t cols0 = Input(0)->GetAsMatrixNumCols();
        if (isFinalValidationPass && cols0 != 1)
            InvalidArgument('The first matrix should be a column vector representing the diagonal of a square matrix in the DiagTimes operation.');
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        ReadOutVariable(); // read out the value once, with the purpose of validating the variableName
        Base::Validate(isFinalValidationPass);
        // this node does not hold mini-batch data
        m_pMBLayout = nullptr;
        // for now, anything this node returns is a scalar
        SetDims(TensorShape(1), false);
    }
    
    // -----------------------------------------------------------------------
// EpochAccumulatorNode calculates mean values of all samples used in forward pass.
// -----------------------------------------------------------------------
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
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
    
    
    {    io.BackendFlags |= ImGuiBackendFlags_HasGamepad;
    #undef MAP_BUTTON
    #undef MAP_ANALOG
}
    
    
    {        // Rendering
        ImGui::Render();
        al_clear_to_color(al_map_rgba_f(clear_color.x, clear_color.y, clear_color.z, clear_color.w));
        ImGui_ImplAllegro5_RenderDrawData(ImGui::GetDrawData());
        al_flip_display();
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();
