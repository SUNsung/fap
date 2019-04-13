
        
        #ifndef UINT32_MAX
    #define UINT32_MAX (4294967295U)
#endif
    
    
    {
    {
    {            for (; j < size.width; j++)
                dst[j] = (s16)((s32)src0[j] + (s32)src1[j]);
        }
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    #define COMBINE64(sgn,n) void combine##n(const Size2D &_size                                                \
                                               FILL_LINES##n(FARG, sgn##64),                                \
                                               sgn##64 * dstBase, ptrdiff_t dstStride)                      \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    Size2D size(_size);                                                                                     \
    if (CONTSRC##n                                                                                          \
        dstStride == (ptrdiff_t)(size.width))                                                               \
    {                                                                                                       \
        size.width *= size.height;                                                                          \
        size.height = 1;                                                                                    \
    }                                                                                                       \
    typedef internal::VecTraits<sgn##64, n>::vec64 vec64;                                                   \
                                                                                                            \
    for (size_t i = 0u; i < size.height; ++i)                                                               \
    {                                                                                                       \
        FILL_LINES##n(VROW, sgn##64)                                                                        \
        sgn##64 * dst = internal::getRowPtr(dstBase, dstStride, i);                                         \
        size_t sj = 0u, dj = 0u;                                                                            \
                                                                                                            \
        for (; sj < size.width; ++sj, dj += n)                                                              \
        {                                                                                                   \
            vec64 v_dst;                                                                                    \
            FILL_LINES##n(VLD1, sgn##64)                                                                    \
            vst##n##_##sgn##64(dst + dj, v_dst);                                                            \
            /*FILL_LINES##n(SLD, sgn##64)*/                                                                 \
        }                                                                                                   \
    }                                                                                                       \
}
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1(dst + x, internal::vmovn(v_dst));
            x+=8;
        }
    }
};
template <typename Op> struct vtail<Op, 1>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<type>::vec64 vec64;
        typedef typename internal::VecTraits<type>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    
             int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
         int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
         int16x4_t vline1_s16 = vqmovn_s32(vline1_s32);
         int16x4_t vline2_s16 = vqmovn_s32(vline2_s32);
    
    void convolution(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 BORDER_MODE border, u8 borderValue,
                 const Size2D & ksize, s16 * kernelBase, u32 scale)
{
    internal::assertSupportedConfiguration(isConvolutionSupported(size, ksize, border));
#ifdef CAROTENE_NEON
    const uint8x8_t v_zero_u8 = vdup_n_u8(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    const int32x4_t v_zero_s32 = vdupq_n_s32(0);
    }
    
    
    {            ws = vpadalq_u32(ws, s1);
            ws = vpadalq_u32(ws, s2);
        }
    
    
    {            if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    #include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
      // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();
    
        template <typename ElementType, typename V1ElemType>
    ElementType NDArrayView::_AsScalar() const
    {
        auto scalarData = this->shared_from_this();
        if (scalarData->Shape().TotalSize() != 1)
            LogicError('NDArrayView::AsScalar: The NDArrayView shaped '%S' is not a scalar.', scalarData->Shape().AsString().c_str());
    }
    
        template <typename T>
    inline void ValidateType(const Dictionary& dict, const std::wstring& typeValue, size_t currentVersion)
    {
        if (!dict.Contains(typeKey))
        {
            const auto& version = GetVersion(dict);
            LogicError('Required key '%ls' is not found in the dictionary (%s).',
                       typeKey.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        } 
    }
    
    
    {        renameOrDie(tempModelFile, modelFilePath);
        renameOrDie(tempCheckpointFile, trainerStateCheckpointFilePath);
    }
    
        static void setupTimeout(int seconds)
    {
        struct sigaction action = {};
        action.sa_handler = &CrossProcessMutex::noOpAlarmHandler;
        sigaction(SIGALRM, &action, NULL);
        alarm(seconds);
    }
    
    
    {            // get the name for the reader we want to use, default to CNTKTextFormatReader
            GetReaderProc getReaderProc = (GetReaderProc) Plugin::Load(readerType, GetReaderName(precision));
            m_ioNames.push_back(ioName);
            assert(getReaderProc != nullptr);
            getReaderProc(&m_dataReaders[ioName]); // instantiates the reader with the default constructor (no config processed at this point)
        }
    }
    else if (hasDeserializers)
    {
        wstring readerType = config(L'readerType', L'Cntk.Composite');
    
    // some older code uses this namespace
namespace DebugUtil
{
    void PrintCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
    }
    
            auto parent = iter->second;
        auto& aliasInfo = m_aliasGroups[parent];
        if (aliasInfo.pMatrixPtr == nullptr)
            LogicError('double releasing aliased matrix, or releasing before any allocation for the matrix');
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    
    {    // Cleanup
    delete[] data;
    if (use_compression)
	    delete[] compressed;
    return true;
}
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
    static void ImGui_ImplGlfw_UpdateGamepads()
{
    ImGuiIO& io = ImGui::GetIO();
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if ((io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad) == 0)
        return;
    }
    
        g_MouseCursors[ImGuiMouseCursor_Arrow] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_ARROW);
    g_MouseCursors[ImGuiMouseCursor_TextInput] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_IBEAM);
    g_MouseCursors[ImGuiMouseCursor_ResizeAll] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEALL);
    g_MouseCursors[ImGuiMouseCursor_ResizeNS] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENS);
    g_MouseCursors[ImGuiMouseCursor_ResizeEW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEWE);
    g_MouseCursors[ImGuiMouseCursor_ResizeNESW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENESW);
    g_MouseCursors[ImGuiMouseCursor_ResizeNWSE] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENWSE);
    g_MouseCursors[ImGuiMouseCursor_Hand] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const std::shared_ptr<DHTNode>& node) const
{
  return getBucketFor(node->getID());
}
    
    #include 'common.h'
    
      virtual void startup() = 0;
    
      void update();
    
      DHTTaskExecutor immediateTaskQueue_;
    
      bool validateToken(const std::string& token, const unsigned char* infoHash,
                     const std::string& ipaddr, uint16_t port) const;
    
    bool DHTUnknownMessage::isReply() const { return false; }