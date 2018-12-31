
        
                    v_srclo = vget_low_s16(v_src1);
            v_srchi = vget_high_s16(v_src1);
            v_dst1 = vcombine_s16(vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srclo, v_srclo), shift), vget_low_s16(v_dst1))),
                                  vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srchi, v_srchi), shift), vget_high_s16(v_dst1))));
    
        void operator() (const typename VecTraits<T>::vec64 & v_src0,
                     const typename VecTraits<T>::vec64 & v_src1,
                     typename VecTraits<T>::vec64 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vr;
        wideAdd(vmovl(v_src0), vmovl(v_src1), vr);
    }
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    
    {
    {         vst1q_u8(_dst + i, vcombine_u8(vline1_u8, vline2_u8));
     }
})
#endif
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
CVTS_FUNC(s8, u16, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s8 q3, d4                                       \n\t'
            'vmovl.s8 q4, d5                                       \n\t'
            'vmovl.s16 q5, d6                                      \n\t'
            'vmovl.s16 q6, d7                                      \n\t'
            'vmovl.s16 q7, d8                                      \n\t'
            'vmovl.s16 q8, d9                                      \n\t'
            'vcvt.f32.s32 q9, q5                                   \n\t'
            'vcvt.f32.s32 q10, q6                                  \n\t'
            'vcvt.f32.s32 q11, q7                                  \n\t'
            'vcvt.f32.s32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vqmovun.s32 d22, q7                                   \n\t'
            'vqmovun.s32 d23, q8                                   \n\t'
            'vqmovun.s32 d24, q9                                   \n\t'
            'vqmovun.s32 d25, q10                                  \n\t'
            'vst1.16 {d22-d23}, [%[dst1]]                          \n\t'
            'vst1.16 {d24-d25}, [%[dst2]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 8),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(s8, u16, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        int8x16_t vline = vld1q_s8(_src + i);
        int16x8_t vline1_s16 = vmovl_s8(vget_low_s8 (vline));
        int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline));
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline1_s16));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
        int32x4_t vline3_s32 = vmovl_s16(vget_low_s16 (vline2_s16));
        int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
        float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vline3_s32 = vcvtq_s32_f32(vline3_f32);
        vline4_s32 = vcvtq_s32_f32(vline4_f32);
        uint16x8_t vRes1_u16 = vcombine_u16(vqmovun_s32(vline1_s32), vqmovun_s32(vline2_s32));
        uint16x8_t vRes2_u16 = vcombine_u16(vqmovun_s32(vline3_s32), vqmovun_s32(vline4_s32));
        vst1q_u16(_dst + i + 0, vRes1_u16);
        vst1q_u16(_dst + i + 8, vRes2_u16);
    }
})
#endif
    
    
    {                tprev[2] = tcurr[2];
                tcurr[2] = tnext[2];
            }
    
    
    {
    {            if (s[0] < 0 || s[1] < 0)//saturate in case of overflow ~ 2GB of non-zeros...
            {
                return 0x7fFFffFF;
            }
            result += (s[0] += s[1]);
            if (s[0] < 0 || result < 0)
            {
                return 0x7fFFffFF;
            }
        }
        for (; i < size.width; i++)
            result += (src[i] != 0)?1:0;
        if (result < 0)//saturate in case of overflow ~ 2GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
    }
    return result;
#else
    (void)_size;
    (void)srcBase;
    (void)srcStride;
    
            if (val == maxVal)
        {
            if (maxLocCount < maxLocCapacity)
            {
                maxLocPtr[maxLocCount] = j;
                maxLocPtr[maxLocCount + 1] = i;
            }
            maxLocCount += 2;
        }
    
                uint8x8_t el8shr0 = vld1_u8(src + j);
            uint8x8_t el8shr1 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 8));
            uint8x8_t el8shr2 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 16));
            uint8x8_t el8shr3 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 24));
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'ALLEGRO_BITMAP*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Platform: Clipboard support (from Allegro 5.1.12)
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
// Issues:
//  [ ] Renderer: The renderer is suboptimal as we need to unindex our buffers and convert vertices manually.
//  [ ] Platform: Missing gamepad support.
    
        // Backup the DX9 transform (DX9 documentation suggests that it is included in the StateBlock but it doesn't appear to)
    D3DMATRIX last_world, last_view, last_projection;
    g_pd3dDevice->GetTransform(D3DTS_WORLD, &last_world);
    g_pd3dDevice->GetTransform(D3DTS_VIEW, &last_view);
    g_pd3dDevice->GetTransform(D3DTS_PROJECTION, &last_projection);
    
        VkPipelineRasterizationStateCreateInfo raster_info = {};
    raster_info.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    raster_info.polygonMode = VK_POLYGON_MODE_FILL;
    raster_info.cullMode = VK_CULL_MODE_NONE;
    raster_info.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    raster_info.lineWidth = 1.0f;
    
        // Basic Accessors
    inline ImGuiID          GetItemID()     { ImGuiContext& g = *GImGui; return g.CurrentWindow->DC.LastItemId; }
    inline ImGuiID          GetActiveID()   { ImGuiContext& g = *GImGui; return g.ActiveId; }
    inline ImGuiID          GetFocusID()    { ImGuiContext& g = *GImGui; return g.NavId; }
    IMGUI_API void          SetActiveID(ImGuiID id, ImGuiWindow* window);
    IMGUI_API void          SetFocusID(ImGuiID id, ImGuiWindow* window);
    IMGUI_API void          ClearActiveID();
    IMGUI_API ImGuiID       GetHoveredID();
    IMGUI_API void          SetHoveredID(ImGuiID id);
    IMGUI_API void          KeepAliveID(ImGuiID id);
    IMGUI_API void          MarkItemEdited(ImGuiID id);
    
        const ImRect check_bb(window->DC.CursorPos, window->DC.CursorPos + ImVec2(label_size.y + style.FramePadding.y*2-1, label_size.y + style.FramePadding.y*2-1));
    ItemSize(check_bb, style.FramePadding.y);
    
    // GLFW
#include <GLFW/glfw3.h>
#ifdef _WIN32
#undef APIENTRY
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>   // for glfwGetWin32Window
#endif
#define GLFW_HAS_WINDOW_TOPMOST     (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3200) // 3.2+ GLFW_FLOATING
#define GLFW_HAS_WINDOW_HOVERED     (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ GLFW_HOVERED
#define GLFW_HAS_WINDOW_ALPHA       (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ glfwSetWindowOpacity
#define GLFW_HAS_PER_MONITOR_DPI    (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ glfwGetMonitorContentScale
#define GLFW_HAS_VULKAN             (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3200) // 3.2+ glfwCreateWindowSurface
    
      virtual std::string toString() const CXX11_OVERRIDE;
    
    DHTRoutingTable::DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode)
    : localNode_(localNode),
      root_(make_unique<DHTBucketTreeNode>(
          std::make_shared<DHTBucket>(localNode_))),
      numBucket_(1),
      taskQueue_{nullptr},
      taskFactory_{nullptr}
{
}
    
      std::unique_ptr<DHTBucketTreeNode> root_;
    
    namespace aria2 {
    }
    
    #endif // D_DHT_TASK_H

    
    
    {} // namespace aria2
    
    class DHTTask;
    
      virtual void
  addPeriodicTask1(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;