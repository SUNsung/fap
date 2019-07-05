
        
                for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
    void Canny3x3L1(const Size2D &size,
                const u8 * srcBase, ptrdiff_t srcStride,
                u8 * dstBase, ptrdiff_t dstStride,
                f64 low_thresh, f64 high_thresh,
                Margin borderMargin)
{
    internal::assertSupportedConfiguration(isCanny3x3Supported(size));
#ifdef CAROTENE_NEON
    Canny3x3<false, false>(size, 1,
                           srcBase, srcStride,
                           dstBase, dstStride,
                           NULL, 0,
                           NULL, 0,
                           low_thresh, high_thresh,
                           borderMargin);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)low_thresh;
    (void)high_thresh;
    (void)borderMargin;
#endif
}
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
                    for (; j < roiw16; j += 16)
                {
                    internal::prefetch(src + j);
                    int16x8_t v_src0 = vld1q_s16(src + j), v_src1 = vld1q_s16(src + j + 8);
                    uint8x16_t v_dst = vcombine_u8(vmovn_u16(vcltq_s16(v_src0, v_zero)),
                                                   vmovn_u16(vcltq_s16(v_src1, v_zero)));
                    vst1q_u8(dst + j, v_dst);
                }
                for (; j < roiw8; j += 8)
                {
                    int16x8_t v_src = vld1q_s16(src + j);
                    vst1_u8(dst + j, vmovn_u16(vcltq_s16(v_src, v_zero)));
                }
    
                    int16x8_t t0_16s = vreinterpretq_s16_u16(vmovl_u8(t0));
                int16x8_t t1_16s = vreinterpretq_s16_u16(vmovl_u8(t1));
                int16x8_t t2_16s = vreinterpretq_s16_u16(vmovl_u8(t2));
    
    
    {        for (; i < size.width; i++)
            result += (src[i] != 0)?1:0;
        if (result < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
    }
    return result;
#else
    (void)_size;
    (void)srcBase;
    (void)srcStride;
    
                for( ; i <= lim; i += 4 )
            {
                internal::prefetch(src0 + i);
                internal::prefetch(src1 + i);
                v_sum = vmlaq_f32(v_sum, vld1q_f32(src0 + i), vld1q_f32(src1 + i));
            }
    
    inline void vnst(u8* dst, uint8x16_t v1, uint8x16_t v2) { vst1q_u8(dst, v1); vst1q_u8(dst+16, v2); }
inline void vnst(u8* dst, uint16x8_t v1, uint16x8_t v2) { vst1q_u8(dst, vcombine_u8(vmovn_u16(v1), vmovn_u16(v2))); }
inline void vnst(u8* dst, uint32x4_t v1, uint32x4_t v2) { vst1_u8(dst, vmovn_u16(vcombine_u16(vmovn_u32(v1), vmovn_u32(v2)))); }
    
        for( ptrdiff_t y = 0; y < rows; y++ )
    {
        const u8* v0 = 0;
        const u8* v1 = 0;
        const u8* v2 = internal::getRowPtr(srcBase, srcStride, y);
        const u8* v3 = 0;
        const u8* v4 = 0;
        // make border
        if (border == BORDER_MODE_REPLICATE) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : 0);
            v1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            v3 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 0 ? rows-1 : 0);
            v4 = internal::getRowPtr(srcBase, srcStride, y < rows-2 ? y+2 : rows > 0 ? rows-1 : 0);
        } else if (border == BORDER_MODE_REFLECT) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : rows > 1 ? 1-y : 0);
            v1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            v3 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 0 ? rows-1 : 0);
            v4 = internal::getRowPtr(srcBase, srcStride, y < rows-2 ? y+2 : rows > 1 ? 2*rows-(y+3) : 0);
        } else if (border == BORDER_MODE_REFLECT101) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : rows > 2-y ? 2-y : 0); ///check
            v1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : rows > 1 ? 1 : 0);
            v3 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 1 ? rows-2 : 0);
            v4 = internal::getRowPtr(srcBase, srcStride, y < rows-2 ? y+2 : rows > 2 ? 2*rows-(y+4) : 0);///bad if rows=2 y=1   rows - 4 + (2,1)
        } else if (border == BORDER_MODE_CONSTANT) {
            v0 = y > 1 ? internal::getRowPtr(srcBase, srcStride, y-2) : tmp;
            v1 = y > 0 ? internal::getRowPtr(srcBase, srcStride, y-1) : tmp;
            v3 = y < rows-1 ? internal::getRowPtr(srcBase, srcStride, y+1) : tmp;
            v4 = y < rows-2 ? internal::getRowPtr(srcBase, srcStride, y+2) : tmp;
        }
        s16* drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    
    {        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                // FIXME: Not honoring ClipRect fields.
                CIwMaterial* pCurrentMaterial = IW_GX_ALLOC_MATERIAL();
                pCurrentMaterial->SetShadeMode(CIwMaterial::SHADE_FLAT);
                pCurrentMaterial->SetCullMode(CIwMaterial::CULL_NONE);
                pCurrentMaterial->SetFiltering(false);
                pCurrentMaterial->SetAlphaMode(CIwMaterial::ALPHA_BLEND);
                pCurrentMaterial->SetDepthWriteMode(CIwMaterial::DEPTH_WRITE_NORMAL);
                pCurrentMaterial->SetAlphaTestMode(CIwMaterial::ALPHATEST_DISABLED);
                pCurrentMaterial->SetTexture((CIwTexture*)pcmd->TextureId);
                IwGxSetMaterial(pCurrentMaterial);
                IwGxDrawPrims(IW_GX_TRI_LIST, (uint16*)idx_buffer, pcmd->ElemCount);
            }
            idx_buffer += pcmd->ElemCount;
        }
        IwGxFlush();
    }
    
    
    {    return stb__out - out;
}

    
    // Set default OpenGL3 loader to be gl3w
#if !defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_CUSTOM)
#define IMGUI_IMPL_OPENGL_LOADER_GL3W
#endif
    
    // Issues:
//  [ ] Platform: GLUT is unable to distinguish e.g. Backspace from CTRL+H or TAB from CTRL+I
//  [ ] Platform: Missing mouse cursor shape/visibility support.
//  [ ] Platform: Missing clipboard support (not supported by Glut).
//  [ ] Platform: Missing gamepad support.
    
        // Setup Platform/Renderer bindings
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX10_Init(g_pd3dDevice);
    
    
    {    // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). DisplayPos is (0,0) for single viewport apps.
    // Being agnostic of whether <d3dx9.h> or <DirectXMath.h> can be used, we aren't relying on D3DXMatrixIdentity()/D3DXMatrixOrthoOffCenterLH() or DirectX::XMMatrixIdentity()/DirectX::XMMatrixOrthographicOffCenterLH()
    {
        float L = draw_data->DisplayPos.x + 0.5f;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x + 0.5f;
        float T = draw_data->DisplayPos.y + 0.5f;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y + 0.5f;
        D3DMATRIX mat_identity = { { { 1.0f, 0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f, 1.0f } } };
        D3DMATRIX mat_projection =
        { { {
            2.0f/(R-L),   0.0f,         0.0f,  0.0f,
            0.0f,         2.0f/(T-B),   0.0f,  0.0f,
            0.0f,         0.0f,         0.5f,  0.0f,
            (L+R)/(L-R),  (T+B)/(B-T),  0.5f,  1.0f
        } } };
        g_pd3dDevice->SetTransform(D3DTS_WORLD, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_VIEW, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &mat_projection);
    }
}
    
    static void ImGui_ImplGlfw_UpdateMousePosAndButtons()
{
    // Update buttons
    ImGuiIO& io = ImGui::GetIO();
    for (int i = 0; i < IM_ARRAYSIZE(io.MouseDown); i++)
    {
        // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }
    }
    
    #ifndef STB_RECT_PACK_IMPLEMENTATION        // in case the user already have an implementation in the _same_ compilation unit (e.g. unity builds)
#define STBRP_ASSERT(x)    IM_ASSERT(x)
#define STBRP_STATIC
#define STB_RECT_PACK_IMPLEMENTATION
#include 'imstb_rectpack.h'
#endif
    
    class DelayWriteToken : public WriteControllerToken {
 public:
  explicit DelayWriteToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~DelayWriteToken();
};
    
    using namespace rocksdb;
    
    
    {  const char* Name() const override { return 'MyMerge'; }
};