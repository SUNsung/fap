  /// Construct a basic_socket_acceptor on an existing native acceptor.
  /**
   * This constructor creates an acceptor object to hold an existing native
   * acceptor.
   *
   * @param io_service The io_service object that the acceptor will use to
   * dispatch handlers for any asynchronous operations performed on the
   * acceptor.
   *
   * @param protocol An object specifying protocol parameters to be used.
   *
   * @param native_acceptor A native acceptor.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  basic_socket_acceptor(boost::asio::io_service& io_service,
      const protocol_type& protocol, const native_handle_type& native_acceptor)
    : basic_io_object<SocketAcceptorService>(io_service)
  {
    boost::system::error_code ec;
    this->get_service().assign(this->get_implementation(),
        protocol, native_acceptor, ec);
    boost::asio::detail::throw_error(ec, 'assign');
  }
    
    #include <boost/asio/detail/config.hpp>
    
    struct FrameResources
{
    ID3D12Resource* IB;
    ID3D12Resource* VB;
    int VertexBufferSize;
    int IndexBufferSize;
};
static FrameResources*              g_pFrameResources = NULL;
static UINT                         g_numFramesInFlight = 0;
static UINT                         g_frameIndex = UINT_MAX;
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized
    if (draw_data->DisplaySize.x <= 0.0f || draw_data->DisplaySize.y <= 0.0f)
        return;
    }
    
    static int g_Time = 0;          // Current time, in milliseconds
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;         // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;          // We can honor io.WantSetMousePos requests (optional, rarely used)
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
        // Update the Descriptor Set:
    {
        VkDescriptorImageInfo desc_image[1] = {};
        desc_image[0].sampler = g_FontSampler;
        desc_image[0].imageView = g_FontView;
        desc_image[0].imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        VkWriteDescriptorSet write_desc[1] = {};
        write_desc[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        write_desc[0].dstSet = g_DescriptorSet;
        write_desc[0].descriptorCount = 1;
        write_desc[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        write_desc[0].pImageInfo = desc_image;
        vkUpdateDescriptorSets(g_Device, 1, write_desc, 0, NULL);
    }
    
    #include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions. You may use another OpenGL loader/header such as: glew, glext, glad, glLoadGen, etc.
//#include <glew.h>
//#include <glext.h>
//#include <glad/glad.h>
    
    
    {
    {		err = vkEndCommandBuffer(fd->CommandBuffer);
		check_vk_result(err);
		err = vkQueueSubmit(g_Queue, 1, &info, fd->Fence);
		check_vk_result(err);
	}
}
    
            // Poll and handle inputs
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        s3eKeyboardUpdate();
        s3ePointerUpdate();
    
    
    {    return 0;
}

    
        // Get Present Mode
#ifdef IMGUI_UNLIMITED_FRAME_RATE
    VkPresentModeKHR present_mode = VK_PRESENT_MODE_IMMEDIATE_KHR;
#else
    VkPresentModeKHR present_mode = VK_PRESENT_MODE_FIFO_KHR;
#endif
    wd->PresentMode = ImGui_ImplVulkanH_SelectPresentMode(g_PhysicalDevice, wd->Surface, &present_mode, 1);
    
            // Start the Dear ImGui frame
        ImGui_ImplDX10_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
    
    public:
  AbstractHttpServerResponseCommand(
      cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
      DownloadEngine* e, const std::shared_ptr<SocketCore>& socket);
    
      char shortName_;
    
      size_t countTier() const;