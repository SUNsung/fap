
        
          void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    min_index_ = page.min_index;
    fo->Write(&min_index_, sizeof(min_index_));
    index_.data.resize(page.data.size());
    value_.data.resize(page.data.size());
    }
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi) {
    fi.open(fname);
    if (fi.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator(void) {
    fi.close();
  }
    }
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << 'abcde';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
      XGBOOST_DEVICE float GetGrad() const { return grad_; }
  XGBOOST_DEVICE float GetHess() const { return hess_; }
    
    XGBOOST_REGISTER_METRIC(GammaDeviance, 'gamma-deviance')
.describe('Residual deviance for gamma regression.')
.set_body([](const char* param) { return new EvalGammaDeviance(); });
    
    path remove_prefix(const path& pth, const path& prefix) {
  path::const_iterator it;
  if (!skipPrefix(pth, prefix, it)) {
    throw filesystem_error(
        'Path does not start with prefix',
        pth,
        prefix,
        bsys::errc::make_error_code(bsys::errc::invalid_argument));
  }
    }
    
    /**
 * FileHandlerFactory is a LogHandlerFactory that constructs log handlers
 * that write to a file.
 *
 * Note that FileHandlerFactory allows opening and appending to arbitrary files
 * based on the handler options.  This may make it unsafe to use
 * FileHandlerFactory in some contexts: for instance, a setuid binary should
 * generally avoid registering the FileHandlerFactory if they allow log
 * handlers to be configured via command line parameters, since otherwise this
 * may allow non-root users to append to files that they otherwise would not
 * have write permissions for.
 */
class FileHandlerFactory : public LogHandlerFactory {
 public:
  StringPiece getType() const override {
    return 'file';
  }
    }
    
    /**
 * Get the type of a folly::dynamic object as a string, for inclusion in
 * exception messages.
 */
std::string dynamicTypename(const dynamic& value) {
  switch (value.type()) {
    case dynamic::NULLT:
      return 'null';
    case dynamic::ARRAY:
      return 'array';
    case dynamic::BOOL:
      return 'boolean';
    case dynamic::DOUBLE:
      return 'double';
    case dynamic::INT64:
      return 'integer';
    case dynamic::OBJECT:
      return 'object';
    case dynamic::STRING:
      return 'string';
  }
  return 'unknown type';
}
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
    // Data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors and ImGuiBackendFlags_HasSetMousePos flags + honor ImGuiConfigFlags_NoSetMouseCursor flag.
//  2018-03-06: OpenGL: Added const char* glsl_version parameter to ImGui_ImplGlfwGL3_Init() so user can override the GLSL version e.g. '#version 150'.
//  2018-02-23: OpenGL: Create the VAO in the render function so the setup can more easily be used with multiple shared GL context.
//  2018-02-20: Inputs: Added support for mouse cursors (ImGui::GetMouseCursor() value and WM_SETCURSOR message handling).
//  2018-02-20: Inputs: Renamed GLFW callbacks exposed in .h to not include GL3 in their name.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplGlfwGL3_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-01-25: Inputs: Added gamepad support if ImGuiConfigFlags_NavEnableGamepad is set.
//  2018-01-25: Inputs: Honoring the io.WantSetMousePos flag by repositioning the mouse (ImGuiConfigFlags_NavEnableSetMousePos is set).
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-18: Inputs: Added mapping for ImGuiKey_Insert.
//  2018-01-07: OpenGL: Changed GLSL shader version from 330 to 150. (Also changed GL context from 3.3 to 3.2 in example's main.cpp)
//  2017-09-01: OpenGL: Save and restore current bound sampler. Save and restore current polygon mode.
//  2017-08-25: Inputs: MousePos set to -FLT_MAX,-FLT_MAX when mouse is unavailable/missing (instead of -1,-1).
//  2017-05-01: OpenGL: Fixed save and restore of current blend function state.
//  2016-10-15: Misc: Added a void* user_data parameter to Clipboard function handlers.
//  2016-09-05: OpenGL: Fixed save and restore of current scissor rectangle.
//  2016-04-30: OpenGL: Fixed save and restore of current GL_ACTIVE_TEXTURE.