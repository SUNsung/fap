
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_

    
    // Called by python code on initialization.
//
// 'trampoline' must represent a python function which has the
// following signature:
//   (string, list(ndarray)) | (string, list(EagerTensor)) ->
//     ndarray | list(ndarray) | python scalar |
//     EagerTensor | list(EagerTensor) | None
//
// The trampoline takes two arguments, the first is a string token
// used by the python frontend's dispatching logic; the second is a
// list of numpy ndarrays or EagerTensor objects. It can return a
// single numpy ndarray, a list of numpy ndarrays, a python scalar, an
// EagerTensor, a list of EagerTensors, or None.
//
// PyFunc requires inputs and outputs to be ndarrays. EagerPyFunc requires
// inputs to be a list of EagerTensors and outputs to be an EagerTensor, a list
// of EagerTensors, or None.
//
// The C++ runtime converts outputs back to Tensor objects.
//
// This function is called by script_ops.py during its module initialization.
//
// TODO(zhifengc): Support distributed runtime.
void InitializePyTrampoline(PyObject* trampoline);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/core/framework/graph.pb.h'
#include 'tensorflow/core/platform/types.h'
    
      static const unsigned kMask = 0xf;  // Mask of all available flags.
    
    #define SRC_ARG1 ST * src1_data_, size_t src1_step_,
#define SRC_STORE1 src1_data(src1_data_), src1_step(src1_step_),
#define SRC_VAR1 ST * src1_data; \
                 size_t src1_step;
#define SRC_ARG2 ST * src1_data_, size_t src1_step_, \
                 ST * src2_data_, size_t src2_step_,
#define SRC_STORE2 src1_data(src1_data_), src1_step(src1_step_), \
                   src2_data(src2_data_), src2_step(src2_step_),
#define SRC_VAR2 ST * src1_data; \
                 size_t src1_step; \
                 ST * src2_data; \
                 size_t src2_step;
    
                int16x8_t vx2 = vld1q_s16(_dx + j + 8);
            int16x8_t vy2 = vld1q_s16(_dy + j + 8);
    
            for (; dj < roiw8; sj += 32, dj += 8)
        {
            uint8x8x4_t v_src = vld4_u8(src + sj);
            vst1_u8(dst + dj, v_src.val[coi]);
        }
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
                uint32x4_t v_mask0 = vorrq_u32(vceqq_s32(v_src0, v_maxval4), vceqq_s32(v_src0, v_minval4));
            uint32x4_t v_mask1 = vorrq_u32(vceqq_s32(v_src1, v_maxval4), vceqq_s32(v_src1, v_minval4));
    
    
    {} // namespace CAROTENE_NS

    
    void Laplacian1OpenCV(const Size2D &size,
                      const u8 * srcBase, ptrdiff_t srcStride,
                      s16 * dstBase, ptrdiff_t dstStride,
                      BORDER_MODE border, u8 borderValue)
{
    internal::assertSupportedConfiguration(isLaplacianOpenCVSupported(size, border));
#ifdef CAROTENE_NEON
    ptrdiff_t rows = size.height, cols = size.width;
    }
    
    #include 'platform.h'  // for TESS_API
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() = default;
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    
    {    ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (io.MouseDrawCursor || imgui_cursor == ImGuiMouseCursor_None)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        al_set_mouse_cursor(g_Display, g_MouseCursorInvisible);
    }
    else
    {
        ALLEGRO_SYSTEM_MOUSE_CURSOR cursor_id = ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT;
        switch (imgui_cursor)
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
}
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // the literals are everything from lit_start to q
    *pending_literals = (q - lit_start);
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
