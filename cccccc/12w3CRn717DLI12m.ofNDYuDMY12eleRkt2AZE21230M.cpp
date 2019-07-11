
        
            void split2(const Size2D &size,
                const u16* srcBase, ptrdiff_t srcStride,
                u16 * dst0Base, ptrdiff_t dst0Stride,
                u16 * dst1Base, ptrdiff_t dst1Stride);
    
    void absDiff(const Size2D &size,
             const s16 *src0Base, ptrdiff_t src0Stride,
             const s16 *src1Base, ptrdiff_t src1Stride,
             s16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        v_dst = internal::vqaddq(v_src0, v_src1);
    }
    
    
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
    
    #define MERGE_QUAD(sgn, bits, n) { \
                                     FILL_LINES##n(PREF, sgn##bits) \
                                     MERGE_ASM##n(sgn, bits) \
                                 }
    
    #include <vector>
#include <cstring>
    
        for (u32 v = vgetq_lane_u32(prev, 3); j < size.width; ++j)
        sum[j] = (v += src[j]);
    
    // Gamma Correct Blending:
//  FreeType assumes blending in linear space rather than gamma space.
//  See https://www.freetype.org/freetype2/docs/reference/ft2-base_interface.html#FT_Render_Glyph
//  For correct results you need to be using sRGB and convert to linear space in the pixel shader output.
//  The default imgui styles will be impacted by this change (alpha values will need tweaking).
    
    // Win32 message handler
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
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
    
    static bool ImGui_ImplDX9_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixel);
    }
    
    out gl_PerVertex { vec4 gl_Position; };
layout(location = 0) out struct { vec4 Color; vec2 UV; } Out;
    
    #if ALLEGRO_HAS_CLIPBOARD
static const char* ImGui_ImplAllegro5_GetClipboardText(void*)
{
    if (g_ClipboardTextData)
        al_free(g_ClipboardTextData);
    g_ClipboardTextData = al_get_clipboard_text(g_Display);
    return g_ClipboardTextData;
}
    
        // Setup back-end capabilities flags
    g_hWnd = (HWND)hwnd;
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;         // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;          // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = 'imgui_impl_win32';
    io.ImeWindowHandle = hwnd;
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX10_CreateDeviceObjects();

    
    // Functions
bool    ImGui_ImplOpenGL3_Init(const char* glsl_version)
{
    // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendRendererName = 'imgui_impl_opengl3';
#if IMGUI_IMPL_OPENGL_HAS_DRAW_WITH_BASE_VERTEX
    io.BackendFlags |= ImGuiBackendFlags_RendererHasVtxOffset;  // We can honor the ImDrawCmd::VtxOffset field, allowing for large meshes.
#endif
    }