
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    #include 'tensorflow/python/lib/core/safe_ptr.h'
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    #ifndef TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_PLATFORM_ID_H_
#define TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_PLATFORM_ID_H_
    
      // Constructs an or-d together set of device options.
  explicit DeviceOptions(unsigned flags) : flags_(flags) {
    CHECK((flags & kMask) == flags);
  }
    
    namespace stream_executor {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {}  // namespace host
}  // namespace stream_executor

    
      // Actually starts (rather than enqueues starting) the timer.
  void StartNow();
    
    // Allows to represent a value that is either a host scalar or a scalar stored
// on the GPU device.
template <typename ElemT>
class HostOrDeviceScalar {
 public:
  // Not marked as explicit because when using this constructor, we usually want
  // to set this to a compile-time constant.
  HostOrDeviceScalar(ElemT value) : value_(value), is_pointer_(false) {}
  explicit HostOrDeviceScalar(const DeviceMemory<ElemT>& pointer)
      : pointer_(pointer), is_pointer_(true) {
    CHECK_EQ(1, pointer.ElementCount());
  }
    }
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = src0[0] >= src1[0] ? src0[0] - src1[0] : src1[0] - src0[0];
    }
};
    
    
    {
    {        for (; dj < size.width; sj += 3, ++dj)
        {
            dst[dj] = src[sj + coi];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)coi;
#endif
}
    
            for (; sj < roiw8; sj += 8, syj += 16, dj += 32)
        {
            uint8x8x2_t v_y = vld2_u8(srcy + syj);
            uint8x8x4_t v_dst;
            v_dst.val[0] = vld1_u8(srcu + sj);
            v_dst.val[1] = v_y.val[0];
            v_dst.val[2] = vld1_u8(srcv + sj);
            v_dst.val[3] = v_y.val[1];
            vst4_u8(dst + dj, v_dst);
        }
    
    #define CVTS_FUNC1(T1, SIMD_SIZE, CVTSINIT, CVTSROW)                             \
    void convertScale(const Size2D &,                                            \
                      const T1 *, ptrdiff_t,                                     \
                      T1 *, ptrdiff_t,                                           \
                      f64, f64)                                                  \
    {                                                                            \
        internal::assertSupportedConfiguration();                                \
    }
    
            result += (s[0] += s[1]);
        if (s[0] < 0 || result < 0)//case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
    
                    d &= tab[ptr[pixel[1]]] | tab[ptr[pixel[9]]];
                d &= tab[ptr[pixel[3]]] | tab[ptr[pixel[11]]];
                d &= tab[ptr[pixel[5]]] | tab[ptr[pixel[13]]];
                d &= tab[ptr[pixel[7]]] | tab[ptr[pixel[15]]];
    
    void gaussianBlur3x3Margin(const Size2D &size,
                           const u8 * srcBase, ptrdiff_t srcStride,
                           u8 * dstBase, ptrdiff_t dstStride,
                           BORDER_MODE border, u8 borderValue, Margin borderMargin)
{
    internal::assertSupportedConfiguration(isGaussianBlur3x3MarginSupported(size, border, borderMargin));
#ifdef CAROTENE_NEON
    internal::sepFilter3x3<internal::RowFilter3x3S16_121, internal::ColFilter3x3U8_121>::process(
                           size, srcBase, srcStride, dstBase, dstStride,
                           0, 0, border, borderValue, borderMargin);
#else
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)borderValue;
#endif
}
    
            int16x8_t tprev = vmovq_n_s16(0x0);
        int16x8_t tcurr = vmovq_n_s16(0x0);
        int16x8_t tnext = vmovq_n_s16(0x0);
        int16x8_t tc = vmovq_n_s16(0x0);
        int16x8_t t0, t2, tcnext;
        ptrdiff_t x = 0;
        const ptrdiff_t bcols = y + 2 < rows ? cols : (cols - 8);
        for( ; x <= bcols; x += 8 )
        {
            internal::prefetch(v0 + x);
            internal::prefetch(v1 + x);
            internal::prefetch(v2 + x);
    }
    
    int os_detect(TO_BLOCK_LIST* port_blocks,
              OSResults* osr,
              tesseract::Tesseract* tess);
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
    enum AmbigType {
  NOT_AMBIG,        // the ngram pair is not ambiguous
  REPLACE_AMBIG,    // ocred ngram should always be substituted with correct
  DEFINITE_AMBIG,   // add correct ngram to the classifier results (1-1)
  SIMILAR_AMBIG,    // use pairwise classifier for ocred/correct pair (1-1)
  CASE_AMBIG,       // this is a case ambiguity (1-1)
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the example_glfw_opengl2/ folder**
// See imgui_impl_glfw.cpp for details.
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextMultiline(label, (char*)str->c_str(), str->capacity() + 1, size, flags, InputTextCallback, &cb_user_data);
}
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    #include 'imgui.h'
#include 'imgui_impl_sdl.h'
#include 'imgui_impl_vulkan.h'
#include <stdio.h>          // printf, fprintf
#include <stdlib.h>         // abort
#include <SDL.h>
#include <SDL_vulkan.h>
#include <vulkan/vulkan.h>
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array.
    io.KeyMap[ImGuiKey_Tab] = SDL_SCANCODE_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = SDL_SCANCODE_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = SDL_SCANCODE_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = SDL_SCANCODE_UP;
    io.KeyMap[ImGuiKey_DownArrow] = SDL_SCANCODE_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = SDL_SCANCODE_PAGEUP;
    io.KeyMap[ImGuiKey_PageDown] = SDL_SCANCODE_PAGEDOWN;
    io.KeyMap[ImGuiKey_Home] = SDL_SCANCODE_HOME;
    io.KeyMap[ImGuiKey_End] = SDL_SCANCODE_END;
    io.KeyMap[ImGuiKey_Insert] = SDL_SCANCODE_INSERT;
    io.KeyMap[ImGuiKey_Delete] = SDL_SCANCODE_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = SDL_SCANCODE_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = SDL_SCANCODE_SPACE;
    io.KeyMap[ImGuiKey_Enter] = SDL_SCANCODE_RETURN;
    io.KeyMap[ImGuiKey_Escape] = SDL_SCANCODE_ESCAPE;
    io.KeyMap[ImGuiKey_A] = SDL_SCANCODE_A;
    io.KeyMap[ImGuiKey_C] = SDL_SCANCODE_C;
    io.KeyMap[ImGuiKey_V] = SDL_SCANCODE_V;
    io.KeyMap[ImGuiKey_X] = SDL_SCANCODE_X;
    io.KeyMap[ImGuiKey_Y] = SDL_SCANCODE_Y;
    io.KeyMap[ImGuiKey_Z] = SDL_SCANCODE_Z;
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2019-04-03: Misc: Renamed imgui_impl_freeglut.cpp/.h to imgui_impl_glut.cpp/.h.
//  2019-03-25: Misc: Made io.DeltaTime always above zero.
//  2018-11-30: Misc: Setting up io.BackendPlatformName so it can be displayed in the About Window.
//  2018-03-22: Added GLUT Platform binding.