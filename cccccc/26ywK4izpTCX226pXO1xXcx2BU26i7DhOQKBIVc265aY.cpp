
        
        v8::Local<v8::Object> Dictionary::GetHandle() const {
  return object_;
}
    
      template <typename T>
  void Return(const T& val) {
    info_->GetReturnValue().Set(ConvertToV8(isolate_, val));
  }
    
    // This function is a convenient way to create a handle from a raw pointer
// without having to write out the type of the object explicitly.
template <typename T>
mate::Handle<T> CreateHandle(v8::Isolate* isolate, T* object) {
  return mate::Handle<T>(object->GetWrapper(), object);
}
    
    void InspectableWebContentsImpl::SendJsonRequest(
    const DispatchCallback& callback,
    const std::string& browser_id,
    const std::string& url) {
  callback.Run(nullptr);
}
    
    #ifndef SHELL_APP_COMMAND_LINE_ARGS_H_
#define SHELL_APP_COMMAND_LINE_ARGS_H_
    
    OPERATOR_SCHEMA(Floor)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
Element-wise application of the floor function ($y=floor(x)$) to the input
tensor `X`. Output tensor shape is the same as the input tensor. This
operator can be used in an in-place fashion by using the same input blob as the
output blob.
    
    
    {REGISTER_CPU_OPERATOR(Glu, GluOp<float, CPUContext>);
} // namespace caffe2

    
    // Helper class really a internal class to CCalcEngine, to accumulate each history line of text by collecting the
// operands, operator, unary operator etc. Since it is a separate entity, it can be unit tested on its own but does
// rely on CCalcEngine calling it in appropriate order.
class CHistoryCollector
{
public:
    CHistoryCollector(ICalcDisplay* pCalcDisplay, std::shared_ptr<IHistoryDisplay> pHistoryDisplay, wchar_t decimalSymbol); // Can throw errors
    ~CHistoryCollector();
    void AddOpndToHistory(std::wstring_view numStr, CalcEngine::Rational const& rat, bool fRepetition = false);
    void RemoveLastOpndFromHistory();
    void AddBinOpToHistory(int nOpCode, bool fNoRepetition = true);
    void ChangeLastBinOp(int nOpCode, bool fPrecInvToHigher);
    void AddUnaryOpToHistory(int nOpCode, bool fInv, ANGLE_TYPE angletype);
    void AddOpenBraceToHistory();
    void AddCloseBraceToHistory();
    void PushLastOpndStart(int ichOpndStart = -1);
    void PopLastOpndStart();
    void EnclosePrecInversionBrackets();
    bool FOpndAddedToHistory();
    void CompleteHistoryLine(std::wstring_view numStr);
    void ClearHistoryLine(std::wstring_view errStr);
    int AddCommand(_In_ const std::shared_ptr<IExpressionCommand>& spCommand);
    void UpdateHistoryExpression(uint32_t radix, int32_t precision);
    void SetDecimalSymbol(wchar_t decimalSymbol);
    }
    
    {
    PRAT ptmp = nullptr;
    DUPRAT(ptmp, (*px));
    subrat(&ptmp, rat_one, precision);
    addrat(px, rat_one, precision);
    divrat(px, ptmp, precision);
    (*px)->pp->sign *= -1;
    lograt(px, precision);
    divrat(px, rat_two, precision);
    destroyrat(ptmp);
}

    
    // This static variable is used only to call the initialization function, to initialize the other static variables.
int NarratorAnnouncementHostFactory::s_init = NarratorAnnouncementHostFactory::Initialize();
int NarratorAnnouncementHostFactory::Initialize()
{
    RegisterHosts();
    NarratorAnnouncementHostFactory::s_hostProducer = GetHostProducer();
    }
    
    /// <summary>
/// Notifies listeners that a property value has changed.
/// </summary>
/// <param name='propertyName'>Name of the property used to notify listeners.</param>
void BindableBase::OnPropertyChanged(String ^ propertyName)
{
    PropertyChanged(this, ref new PropertyChangedEventArgs(propertyName));
}
    
      // create temporary place holders for the initialized NDArrays
  // to be passed back to front end
  std::vector<NDArray> in_arg_vec;
  std::vector<NDArray> arg_grad_vec;
  std::vector<NDArray> aux_state_vec;
  *out = Executor::SimpleBind(*sym, ctx, ctx_map, in_arg_ctx_vec, arg_grad_ctx_vec,
                              aux_state_ctx_vec, arg_shape_map, arg_dtype_map, arg_stype_map,
                              grad_req_type_vec, shared_arg_name_set, &in_arg_vec,
                              &arg_grad_vec, &aux_state_vec,
                              use_shared_buffer ? &shared_buffer_map : nullptr,
                              reinterpret_cast<Executor*>(shared_exec_handle));
    
      std::vector<NDArray*> ndinputs, ndoutputs;
  SetNDInputsOutputs(op, &ndinputs, &ndoutputs, num_inputs, inputs,
      num_outputs, infered_num_outputs, num_visible_outputs, outputs);
    
    /*!
 *  Copyright (c) 2017 by Contributors
 * \file quantize-inl.h
 * \brief implementation of quantize operation
 */
#ifndef MXNET_OPERATOR_QUANTIZATION_QUANTIZE_INL_H_
#define MXNET_OPERATOR_QUANTIZATION_QUANTIZE_INL_H_
    
      mxnet::TShape oshape;
  if (keepdims) {
    oshape = mxnet::TShape(ishape);
  } else if (exclude) {
    oshape = mxnet::TShape(axes.ndim(), 1);
  } else {
    oshape = mxnet::TShape(std::max(1, ishape.ndim() - axes.ndim()), 1);
  }
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_MakeCurrent(window, gl_context);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            err = vkResetCommandPool(g_Device, command_pool, 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo begin_info = {};
        begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        begin_info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(command_buffer, &begin_info);
        check_vk_result(err);
    
            // Start the Dear ImGui frame
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
    
        // Setup desired DX state
    ImGui_ImplDX12_SetupRenderState(draw_data, ctx, fr);
    
    #pragma once