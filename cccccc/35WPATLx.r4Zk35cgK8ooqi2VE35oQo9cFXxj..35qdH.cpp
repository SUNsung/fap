
        
        template<typename To, typename From> To checked_convert(From f, const char* name) {
  if (overflows<To, From>(f)) {
    std::string msg = 'value cannot be converted to type ';
    msg += name;
    msg += ' without overflow: ';
    msg += std::to_string(f);
    throw std::domain_error(std::move(msg));
  }
  return convert<To, From>(f);
}
    
    #include 'torch/csrc/Exceptions.h'
#include 'torch/csrc/utils/auto_gil.h'
#include 'torch/csrc/utils/python_scalars.h'
    
    #include 'override_macros.h'
    
    void THP_encodeDoubleBuffer(uint8_t* dst, const double* src, THPByteOrder order, size_t len)
{
  memcpy(dst, src, sizeof(double) * len);
  if (order != THP_nativeByteOrder()) {
    for (size_t i = 0; i < len; i++) {
      swapBytes<sizeof(double)>(dst);
      dst += sizeof(double);
    }
  }
}

    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
    #endif /* PCFREAD_H_ */
    
    
# if defined(OC_CLZ32)
/**
 * OC_ILOGNZ_32 - Integer binary logarithm of a non-zero 32-bit value.
 * @_v: A non-zero 32-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_32() instead.
 */
#  define OC_ILOGNZ_32(_v) (OC_CLZ32_OFFS-OC_CLZ32(_v))
/**
 * OC_ILOG_32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_32(_v)   (OC_ILOGNZ_32(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_32(_v) (oc_ilog32(_v))
#  define OC_ILOG_32(_v)   (oc_ilog32(_v))
# endif
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
      We can insert an explicit MOVD or MOVQ using _mm_cvtsi32_si128() or
  _mm_loadl_epi64(), which should have the same semantics as an m32 or m64
  reference in the PMOVSXWD instruction itself, but gcc is not smart enough to
  optimize this out when optimizations ARE enabled.
    
      /// Peek at the incoming data on the stream. Returns the number of bytes read.
  /// Throws an exception on failure.
  template <typename MutableBufferSequence>
  std::size_t peek(const MutableBufferSequence& buffers);
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {  static void init_native_buffer(iovec& iov,
      const boost::asio::const_buffer& buffer)
  {
    init_iov_base(iov.iov_base, const_cast<void*>(
          boost::asio::buffer_cast<const void*>(buffer)));
    iov.iov_len = boost::asio::buffer_size(buffer);
  }
#endif // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
};
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      // Insert a new entry into the map.
  std::pair<iterator, bool> insert(const value_type& v)
  {
    if (size_ + 1 >= num_buckets_)
      rehash(hash_size(size_ + 1));
    size_t bucket = calculate_hash_value(v.first) % num_buckets_;
    iterator it = buckets_[bucket].first;
    if (it == values_.end())
    {
      buckets_[bucket].first = buckets_[bucket].last =
        values_insert(values_.end(), v);
      ++size_;
      return std::pair<iterator, bool>(buckets_[bucket].last, true);
    }
    iterator end_it = buckets_[bucket].last;
    ++end_it;
    while (it != end_it)
    {
      if (it->first == v.first)
        return std::pair<iterator, bool>(it, false);
      ++it;
    }
    buckets_[bucket].last = values_insert(end_it, v);
    ++size_;
    return std::pair<iterator, bool>(buckets_[bucket].last, true);
  }
    
    
    
    
    
    
    
    #endif // __cocos2dx_experimental_video_h__
#endif //#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS) && !defined(CC_TARGET_OS_TVOS)

    
    		// Breakable dynamic body
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 40.0f);
			bd.angle = 0.25f * b2_pi;
			m_body1 = m_world->CreateBody(&bd);
    }
    
    void ImGui_ImplAllegro5_InvalidateDeviceObjects()
{
    if (g_Texture)
    {
        al_destroy_bitmap(g_Texture);
        ImGui::GetIO().Fonts->TexID = NULL;
        g_Texture = NULL;
    }
    if (g_MouseCursorInvisible)
    {
        al_destroy_mouse_cursor(g_MouseCursorInvisible);
        g_MouseCursorInvisible = NULL;
    }
}
    
    bool ImGui_ImplOpenGL2_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);   // Load as RGBA 32-bits (75% of the memory is wasted, but default font is so small) because it is more likely to be compatible with user's existing shaders. If your ImTextureId represent a higher-level concept than just a GL texture id, consider calling GetTexDataAsAlpha8() instead to save on GPU memory.
    }
    
        // Create and grow vertex/index buffers if needed
    if (!g_pVB || g_VertexBufferSize < draw_data->TotalVtxCount)
    {
        if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
        g_VertexBufferSize = draw_data->TotalVtxCount + 5000;
        D3D10_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D10_BUFFER_DESC));
        desc.Usage = D3D10_USAGE_DYNAMIC;
        desc.ByteWidth = g_VertexBufferSize * sizeof(ImDrawVert);
        desc.BindFlags = D3D10_BIND_VERTEX_BUFFER;
        desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
        desc.MiscFlags = 0;
        if (ctx->CreateBuffer(&desc, NULL, &g_pVB) < 0)
            return;
    }
    
    
    {
    {
    {                // Bind texture, Draw
                ctx->PSSetShaderResources(0, 1, (ID3D11ShaderResourceView**)&pcmd->TextureId);
                ctx->DrawIndexed(pcmd->ElemCount, idx_offset, vtx_offset);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
        // Setup display size
    int w, h;
    int display_w, display_h;
    glfwGetWindowSize(g_Window, &w, &h);
    glfwGetFramebufferSize(g_Window, &display_w, &display_h);
    io.DisplaySize = ImVec2((float)w, (float)h);
    io.DisplayFramebufferScale = ImVec2(w > 0 ? ((float)display_w / w) : 0, h > 0 ? ((float)display_h / h) : 0);
    
    int32 ImGui_Marmalade_CharCallback(void* SystemData, void* userData)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardCharEvent* e = (s3eKeyboardCharEvent*)SystemData;
    if ((e->m_Char > 0 && e->m_Char < 0x10000))
        io.AddInputCharacter((unsigned short)e->m_Char);
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    void ImGui_ImplVulkanH_CreateWindowDataSwapChainAndFramebuffer(VkPhysicalDevice physical_device, VkDevice device, ImGui_ImplVulkanH_WindowData* wd, const VkAllocationCallbacks* allocator, int w, int h)
{
    uint32_t min_image_count = 2;	// FIXME: this should become a function parameter
    }
    
        ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
      virtual ~AbstractAuthResolver();
    
      const std::shared_ptr<Request>& getProxyRequest() const
  {
    return proxyRequest_;
  }
    
      void reconfigure(const std::vector<std::vector<std::string>>& announceList);
  void reconfigure(const std::string& url);
    
    #include 'DiskWriterFactory.h'
#include 'a2functional.h'