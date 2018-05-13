
        
        TCA OfflineCode::collectJmpTargets(FILE *file,
                                   TCA fileStartAddr,
                                   TCA codeStartAddr,
                                   uint64_t codeLen,
                                   vector<TCA> *jmpTargets) {
  return 0;
}
    
        // update funcCluster
    
      /*
   * Update context to begin inlining of callee with cost zero.
   */
  void initWithCallee(const Func* callee);
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Sqrt)
        .Description('Square root takes one input data (Tensor<T>) and produces one output '
            'data Tensor<T>) where the square root is, y = x^0.5, is applied to '
            'the tensor elementwise. If x is negative, then it will return NaN.')
        .Input('X', 'Input tensor of any shape', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Conv)
        .Description('The convolution operator consumes an input tensor and a filter, and'
            'computes the output.')
        .Input('X',
             'Input data tensor from previous layer; has size (N x C x H x W)'
             ', where N is the batch size, C is the number of channels, and'
             ' H and W are the height and width. Note that this is for the 2D image.'
             'Otherwise the size is (N x D1 x D2 ... x Dn)',
             'T')
        .Input('W',
             'The weight tensor that will be used in the convolutions; has size (M x C x kH x kW), '
             'where C is the number of channels, and kH and kW are the height and width of the kernel, '
             'and M is the number of feature maps. For more than 2 dimensions, the kernel shape will be '
             '(M x C x k1 x k2 x ... x kn), where is the dimension of the kernel',
             'T')
        .Input('B',
            'Optional 1D bias to be added to the convolution, has size of M.',
            'T')
        .Output('Y',
              'Output data tensor that contains the result of the convolution. The '
              'output dimensions are functions of the kernel size, stride size, '
              'and pad lengths.',
              'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('auto_pad',
            'auto_pad must be either SAME_UPPER, SAME_LOWER or VALID. Where SAME_UPPER '
            'or SAME_LOWER mean pad the input so that the ouput size match the input. '
            'In case of odd number add the extra padding at the end for SAME_UPPER and '
            'at the begining for SAME_LOWER. VALID mean no padding, therefore, read the '
            'pixel values from the pads attribute.',
            AttrType::AttributeProto_AttributeType_STRING)
        .Attr('kernel_shape',
            'The shape of the convolution kernel.',
             AttrType::AttributeProto_AttributeType_INTS)
        .Attr('dilations',
            'dilation value along each axis of the filter.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('strides',
            'stride along each axis.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('pads',
            'Padding for lower and upper side along each axis, it can take any value greater '
            'than or equal to 0. The value represent the number of pixels added to the lower '
            'and upper part of the corresponding axis. So `pads` will have two values per axis, '
            'first value corresponding to the number of pixels added to the begining of the '
            'axis and the second value corresponding to the number of pixels add at the end '
            'of the axis.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('group',
            'number of groups input channels and output channels are divided into',
            AttrType::AttributeProto_AttributeType_INT);
    
                Notations:
            `X` - input tensor
            `z` - update gate
            `r` - reset gate
            `h` - hidden gate
            `t` - time step (t-1 means previous time step)
            `W[zrh]` - W parameter weight matrix for update, reset, and hidden gates
            `R[zrh]` - R recurrence weight matrix for update, reset, and hidden gates
            `Wb[zrh]` - W bias vectors for update, reset, and hidden gates
            `Rb[zrh]` - R bias vectors for update, reset, and hidden gates
            `WB[zrh]` - W parameter weight matrix for backward update, reset, and hidden gates
            `RB[zrh]` - R recurrence weight matrix for backward update, reset, and hidden gates
            `WBb[zrh]` - W bias vectors for backward update, reset, and hidden gates
            `RBb[zrh]` - R bias vectors for backward update, reset, and hidden gates
            `tanh(X)` - hyperbolic tangent of X
            `sigmoid(X)` - 1 / (1 + e^-X)
            `H` - Hidden state
            `num_directions` - 2 if direction == bidirectional else 1
    
        // Let's check that there is no outstanding copies.
    // Wait on all events if there are any pending copy operations in flight.
    if (m_dataTransferers[m_currentDataTransferIndex])
        m_dataTransferers[m_currentDataTransferIndex]->WaitForCopyCPUToGPU();
    
    
    {
    {            // nodeToDelete is a child
            if (child == nodeToDelete)
            {
                // this used to call DetatchInputs(), but it's better for MEL to retain other inputs
                node->SetInput(i, nullptr);
                break;
            }
        }
    }
    
    
    {    BOOST_CHECK(mD.IsEqualTo(mC, c_epsilonFloatE4));
}
    
    void GPUDataTransferer::CopyCPUToGPUAsync(void* cpuBuffer, size_t totalSize, void* gpuBuffer)
{
    m_inner->CopyCPUToGPUAsync(cpuBuffer, 1, totalSize, gpuBuffer);
    m_inner->RecordCPUToGPUCopy();
}
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
        // Copy and convert all vertices into a single contiguous buffer
    D3D11_MAPPED_SUBRESOURCE vtx_resource, idx_resource;
    if (ctx->Map(g_pVB, 0, D3D11_MAP_WRITE_DISCARD, 0, &vtx_resource) != S_OK)
        return;
    if (ctx->Map(g_pIB, 0, D3D11_MAP_WRITE_DISCARD, 0, &idx_resource) != S_OK)
        return;
    ImDrawVert* vtx_dst = (ImDrawVert*)vtx_resource.pData;
    ImDrawIdx* idx_dst = (ImDrawIdx*)idx_resource.pData;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        memcpy(vtx_dst, cmd_list->VtxBuffer.Data, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        vtx_dst += cmd_list->VtxBuffer.Size;
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    ctx->Unmap(g_pVB, 0);
    ctx->Unmap(g_pIB, 0);
    
        // Hide OS mouse cursor if ImGui is drawing it
    if (io.MouseDrawCursor)
    {
        al_set_mouse_cursor(g_Display, g_MouseCursorInvisible);
    }
    else
    {
        ALLEGRO_SYSTEM_MOUSE_CURSOR cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT;
        switch (ImGui::GetMouseCursor())
        {
        case ImGuiMouseCursor_TextInput:    cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_EDIT; break;
        case ImGuiMouseCursor_ResizeAll:    cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_MOVE; break;
        case ImGuiMouseCursor_ResizeNS:     cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_N; break;
        case ImGuiMouseCursor_ResizeEW:     cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_E; break;
        case ImGuiMouseCursor_ResizeNESW:   cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NE; break;
        case ImGuiMouseCursor_ResizeNWSE:   cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NW; break;
        }
        al_set_system_mouse_cursor(g_Display, cursor_id);
    }
    
    #include 'imgui.h'
#include 'imgui_impl_marmalade.h'
#include <stdio.h>
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    	jint level = JNU_GetField(env, _log_info, 'level', 'I').i;
    
    
    {    _state = EXPECTS_CRASH_DUMP_END;
    return 0;
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        if (st.url_length + st.head_length > st.total_length) return __LINE__;
    
    CommFrequencyLimit::~CommFrequencyLimit()
{}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif

    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    jvalue JNU_CallMethodByName(JNIEnv* _env, jobject obj, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, jclass clazz, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByName(JNIEnv* _env, const char* _class_name, const char* _name, const char* descriptor, ...);
jvalue JNU_CallStaticMethodByMethodInfo(JNIEnv* _env, JniMethodInfo _method_info, ...);
jvalue JNU_GetStaticField(JNIEnv* _env, jclass clazz, const char* _name, const char* sig);
jvalue JNU_GetField(JNIEnv* _env, jobject obj, const char* _name, const char* sig);
    
      if (state->stackTrace.size() == state->stackTrace.capacity()) {
    return _URC_END_OF_STACK;
  }
    
        void setAlignContent(int alignContent);
    void setAlignItems(int alignItems);
    void setAlignSelf(int alignSelf);
    void setFlexDirection(int flexDirection);
    void setFlexWrap(int flexWrap);
    void setJustifyContent(int justifyContent);
    
    namespace facebook {
    }
    
    #pragma once
#include <functional>
#include <string>
#include <jni.h>
    
      /**
   * Access object's member or method through this operator overload.
   */
  T *operator->() const {
    return get();
  }
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
    inline uint8_t  Bswap(uint8_t x)  { return x; }
inline uint16_t Bswap(uint16_t x) { return __builtin_bswap16(x); }
inline uint32_t Bswap(uint32_t x) { return __builtin_bswap32(x); }
inline uint64_t Bswap(uint64_t x) { return __builtin_bswap64(x); }
    
    #include 'FuzzerExtFunctions.def'
    
    
    {  bool InMergeMode = false;
};
    
      ExecuteCallback(Data, Size);
    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    namespace fuzzer {
    }