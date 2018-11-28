
        
            private:
        bool m_isReadOnly;
        NDShape m_sampleShape;
        std::vector<Axis> m_sampleDynamicAxes;
        NDShape m_unpackedShape;
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }
    
    
    {    // Render command lists
    int vtx_offset = 0;
    int idx_offset = 0;
    ImVec2 pos = draw_data->DisplayPos;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                const D3D12_RECT r = { (LONG)(pcmd->ClipRect.x - pos.x), (LONG)(pcmd->ClipRect.y - pos.y), (LONG)(pcmd->ClipRect.z - pos.x), (LONG)(pcmd->ClipRect.w - pos.y) };
                ctx->SetGraphicsRootDescriptorTable(1, *(D3D12_GPU_DESCRIPTOR_HANDLE*)&pcmd->TextureId);
                ctx->RSSetScissorRects(1, &r);
                ctx->DrawIndexedInstanced(pcmd->ElemCount, 1, idx_offset, vtx_offset, 0);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
}
    
        // Setup display size (every frame to accommodate for window resizing)
    int w = IwGxGetScreenWidth(), h = IwGxGetScreenHeight();
    io.DisplaySize = ImVec2((float)w, (float)h);
     // For retina display or other situations where window coordinates are different from framebuffer coordinates. User storage only, presently not used by ImGui.
    io.DisplayFramebufferScale = g_scale;
    
        al_get_mouse_state(&mouse);
    io.MouseDown[0] = mouse.buttons & (1 << 0);
    io.MouseDown[1] = mouse.buttons & (1 << 1);
    io.MouseDown[2] = mouse.buttons & (1 << 2);
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows during development. Please read the comments in imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
        bool value_changed = false;
    if ((extra_flags & (ImGuiInputTextFlags_CharsHexadecimal | ImGuiInputTextFlags_CharsScientific)) == 0)
        extra_flags |= ImGuiInputTextFlags_CharsDecimal;
    extra_flags |= ImGuiInputTextFlags_AutoSelectAll;
    
    ImGui_ImplVulkanH_WindowData::ImGui_ImplVulkanH_WindowData()
{
    Width = Height = 0;
    Swapchain = VK_NULL_HANDLE;
    Surface = VK_NULL_HANDLE;
    memset(&SurfaceFormat, 0, sizeof(SurfaceFormat));
    PresentMode = VK_PRESENT_MODE_MAX_ENUM_KHR;
    RenderPass = VK_NULL_HANDLE;
    ClearEnable = true;
    memset(&ClearValue, 0, sizeof(ClearValue));
    BackBufferCount = 0;
    memset(&BackBuffer, 0, sizeof(BackBuffer));
    memset(&BackBufferView, 0, sizeof(BackBufferView));
    memset(&Framebuffer, 0, sizeof(Framebuffer));
    FrameIndex = 0;
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {#ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
}
#endif
    
    		ref=tmp;
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/CircularQueue.hpp#2 $
 */
    
    #include <antlr/config.hpp>
#include <antlr/CommonAST.hpp>
    
    
    {	IOException( ANTLR_USE_NAMESPACE(std)exception& e )
		: ANTLRException(e.what())
	{
	}
	IOException( const ANTLR_USE_NAMESPACE(std)string& mesg )
		: ANTLRException(mesg)
	{
	}
	virtual ~IOException() throw()
	{
	}
};