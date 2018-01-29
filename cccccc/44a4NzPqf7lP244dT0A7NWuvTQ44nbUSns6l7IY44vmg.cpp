#if GTEST_HAS_STD_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::std::wstring& wstr);
#endif  // GTEST_HAS_STD_WSTRING
    
      // Returns true iff the test part passed.
  bool passed() const { return type_ == kSuccess; }
    
    // Makes sure this header is not included before gtest.h.
#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
# error Do not include gtest_pred_impl.h directly.  Include gtest.h instead.
#endif  // GTEST_INCLUDE_GTEST_GTEST_H_
    
    // Protects copying of all linked_ptr objects.
GTEST_API_ GTEST_DECLARE_STATIC_MUTEX_(g_linked_ptr_mutex);
    
    // Sleeps for (roughly) n milli-seconds.  This function is only for
// testing Google Test's own constructs.  Don't use it in user tests,
// either directly or indirectly.
inline void SleepMilliseconds(int n) {
  const timespec time = {
    0,                  // 0 seconds.
    n * 1000L * 1000L,  // And n ms.
  };
  nanosleep(&time, NULL);
}
    
    
    {
    {      // Marks all multiples of i (except i itself) as non-prime.
      for (int j = 2*i; j <= max; j += i) {
        is_prime_[j] = false;
      }
    }
  }
    
    
    {}  // namespace
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
        if (index >= JPGD_MAX_HUFF_TABLES)
      stop_decoding(JPGD_BAD_DHT_INDEX);
    
      public:
    jpeg_decoder_mem_stream() : m_pSrc_data(NULL), m_ofs(0), m_size(0) { }
    jpeg_decoder_mem_stream(const uint8 *pSrc_data, uint size) : m_pSrc_data(pSrc_data), m_ofs(0), m_size(size) { }
    
    
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
    
    /***** residue backends *********************************************/
    
    # if !defined(__ARM_MAX_ARCH__)
#  define __ARM_MAX_ARCH__ __ARM_ARCH__
# endif
    
    	for (j=0; j<6; j++)
		{
		for (i=0; i<1000; i++) /**/
			{
			des_encrypt1(&data[0],key,1);
			GetTSC(s1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			GetTSC(e1);
			GetTSC(s2);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			GetTSC(e2);
			des_encrypt1(&data[0],key,1);
			}
    }
    
    // GLFW callbacks (registered by default to GLFW if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks yourself. You may also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfwGL2_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfwGL2_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfwGL2_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfwGL2_CharCallback(GLFWwindow* window, unsigned int c);

    
    void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}
    
    
    {    return 0;
}
    
        // Setup inputs
    // (we already got mouse wheel, keyboard keys & characters from glfw callbacks polled in glfwPollEvents())
    if (glfwGetWindowAttrib(g_Window, GLFW_FOCUSED))
    {
        if (io.WantMoveMouse)
        {
            glfwSetCursorPos(g_Window, (double)io.MousePos.x, (double)io.MousePos.y);   // Set mouse position if requested by io.WantMoveMouse flag (used when io.NavMovesTrue is enabled by user and using directional navigation)
        }
        else
        {
            double mouse_x, mouse_y;
            glfwGetCursorPos(g_Window, &mouse_x, &mouse_y);
            io.MousePos = ImVec2((float)mouse_x, (float)mouse_y);
        }
    }
    else
    {
        io.MousePos = ImVec2(-FLT_MAX,-FLT_MAX);
    }
    
        for (int i = 0; i < 3; i++)
    {
        // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }