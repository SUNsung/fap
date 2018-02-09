
        
        THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    
int             oc_has_mode_metrics;
oc_mode_metrics OC_MODE_METRICS[64][3][2][OC_SAD_BINS];
# endif
    
      {1,0,32,  &_residue_44_low_un,
   &_huff_book__44u3__long,&_huff_book__44u3__long,
   &_resbook_44u_3,&_resbook_44u_3}
};
static const vorbis_residue_template _res_44u_4[]={
  {1,0,16,  &_residue_44_low_un,
   &_huff_book__44u4__short,&_huff_book__44u4__short,
   &_resbook_44u_4,&_resbook_44u_4},
    
    static const vorbis_residue_template _res_8u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__8u0__single,&_huff_book__8u0__single,
   &_resbook_8u_0,&_resbook_8u_0},
};
static const vorbis_residue_template _res_8u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__8u1__single,&_huff_book__8u1__single,
   &_resbook_8u_1,&_resbook_8u_1},
};
    
    #if defined(__SYMBIAN32__) && defined(__WINS__)
void *_alloca(size_t size);
#  define alloca _alloca
#endif
    
    # if !defined(__ARM_MAX_ARCH__)
#  define __ARM_MAX_ARCH__ __ARM_ARCH__
# endif
    
    #  define BF_ENC(LL,R,S,P) ( \
        LL^=P, \
        LL^= (((*(BF_LONG *)((unsigned char *)&(S[  0])+((R>>BF_0)&BF_M))+ \
                *(BF_LONG *)((unsigned char *)&(S[256])+((R>>BF_1)&BF_M)))^ \
                *(BF_LONG *)((unsigned char *)&(S[512])+((R>>BF_2)&BF_M)))+ \
                *(BF_LONG *)((unsigned char *)&(S[768])+((R<<BF_3)&BF_M))) \
        )
# else
    
      /// Perform an IO control command on the acceptor.
  /**
   * This function is used to execute an IO control command on the acceptor.
   *
   * @param command The IO control command to be performed on the acceptor.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @sa IoControlCommand @n
   * boost::asio::socket_base::non_blocking_io
   *
   * @par Example
   * Getting the number of bytes ready to read:
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::acceptor::non_blocking_io command(true);
   * boost::system::error_code ec;
   * socket.io_control(command, ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * @endcode
   */
  template <typename IoControlCommand>
  boost::system::error_code io_control(IoControlCommand& command,
      boost::system::error_code& ec)
  {
    return this->get_service().io_control(
        this->get_implementation(), command, ec);
  }
    
    template <typename Stream>
class buffered_read_stream;
    
      friend class context;
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/pop_options.hpp>
    
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
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::mutable_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    w = al_get_display_width(g_Display);
    h = al_get_display_height(g_Display);
    io.DisplaySize = ImVec2((float)w, (float)h);
    
        // Initialize Direct3D
    LPDIRECT3D9 pD3D;
    if ((pD3D = Direct3DCreate9(D3D_SDK_VERSION)) == NULL)
    {
        UnregisterClass(_T('ImGui Example'), wc.hInstance);
        return 0;
    }
    ZeroMemory(&g_d3dpp, sizeof(g_d3dpp));
    g_d3dpp.Windowed = TRUE;
    g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
    g_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
    g_d3dpp.EnableAutoDepthStencil = TRUE;
    g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
    g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE; // Present with vsync
    //g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE; // Present without vsync, maximum unthrottled framerate
    
    int32 ImGui_Marmalade_CharCallback(void* SystemData, void* userData)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardCharEvent* e = (s3eKeyboardCharEvent*)SystemData;
    if ((e->m_Char > 0 && e->m_Char < 0x10000))
        io.AddInputCharacter((unsigned short)e->m_Char);
    }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the opengl3_example/ folder**
// See imgui_impl_glfw.cpp for details.
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    #include <gtest/gtest.h>
#include <yoga/Yoga.h>
    
      const YGNodeRef root_child0 = YGNodeNew();
  YGNodeStyleSetFlexGrow(root_child0, 1);
  YGNodeStyleSetMargin(root_child0, YGEdgeHorizontal, 10);
  YGNodeStyleSetMargin(root_child0, YGEdgeLeft, 20);
  YGNodeInsertChild(root, root_child0, 0);
    
      YGNodeFreeRecursive(root);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    namespace facebook {
namespace alog {
    }
    }
    
    
    {}

    
      template <typename U> friend class RefPtr;