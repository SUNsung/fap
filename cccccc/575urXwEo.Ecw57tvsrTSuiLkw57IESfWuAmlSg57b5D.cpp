
        
        #include <osquery/registry.h>
#include <osquery/status.h>
    
      /// Protector for broadcast lookups and external registry mutations.
  mutable Mutex mutex_;
    
    /**
 * @brief Mimic the REGISTER macro, extensions should use this helper.
 *
 * The SDK does not provide a REGISTER macro for modules or extensions.
 * Tools built with the osquery SDK should use REGISTER_EXTERNAL to add to
 * their own 'external' registry. This registry will broadcast to the osquery
 * extension manager (core) in an extension.
 *
 * osquery 'modules' should not construct their plugin registrations in
 * global scope (global construction time). Instead they should use the
 * module call-in well defined symbol, declare their SDK constraints, then
 * use the REGISTER_MODULE call within `initModule`.
 */
#define REGISTER_EXTERNAL(t, r, n)                                             \
  namespace registries {                                                       \
  const ::osquery::registries::PI<t> k##ExtensionRegistryItem##t(r, n, false); \
  }
    
    /**
 * @brief Converts a struct tm to ASCII time UTC by converting the tm_time to
 * epoch and then running gmtime() on the new epoch
 *
 * @param tm_time the local time/date to covert to UTC ASCII time
 *
 * @return the data/time of tm_time in the format: 'Wed Sep 21 10:27:52 2011'
 */
std::string toAsciiTimeUTC(const struct tm* tm_time);
    
    #pragma once
    
    
    {
    {  return readFile(value, pack);
}
}

    
    #include 'osquery/config/plugins/tls_config.h'
#include 'osquery/core/conversions.h'
#include 'osquery/core/json.h'
#include 'osquery/dispatcher/scheduler.h'
#include 'osquery/remote/requests.h'
#include 'osquery/remote/serializers/json.h'
#include 'osquery/remote/transports/tls.h'
#include 'osquery/remote/utility.h'
    
    Status TLSConfigPlugin::setUp() {
  if (FLAGS_enroll_always && !FLAGS_disable_enrollment) {
    // clear any cached node key
    clearNodeKey();
    auto node_key = getNodeKey('tls');
    if (node_key.size() == 0) {
      // Could not generate a node key, continue logging to stderr.
      return Status(1, 'No node key, TLS config failed.');
    }
  }
    }
    
      std::stringstream result;
  CFDataGetBytes(cf_data, range, (UInt8*)buffer);
  for (CFIndex i = 0; i < range.length; ++i) {
    uint8_t byte = buffer[i];
    if (isprint(byte)) {
      result << byte;
    } else if (buffer[i] == 0) {
      result << ' ';
    } else {
      result << '%' << std::setfill('0') << std::setw(2) << std::hex
             << (int)byte;
    }
  }
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        if (pEvent->m_Pressed == 1)
    {
        if (pEvent->m_Button == S3E_POINTER_BUTTON_LEFTMOUSE)
            g_MousePressed[0] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_RIGHTMOUSE)
            g_MousePressed[1] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MIDDLEMOUSE)
            g_MousePressed[2] = true;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELUP)
            io.MouseWheel += pEvent->m_y;
        if (pEvent->m_Button == S3E_POINTER_BUTTON_MOUSEWHEELDOWN)
            io.MouseWheel += pEvent->m_y;
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    
    {    // At this point note that we set ImGui::GetIO().Fonts->TexID to be == g_FontTexture, so clear both.
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(g_FontTexture == io.Fonts->TexID);
    if (g_FontTexture)
        g_FontTexture->Release();
    g_FontTexture = NULL;
    io.Fonts->TexID = NULL;
}
    
    struct GLFWwindow;
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        g_Window = window;