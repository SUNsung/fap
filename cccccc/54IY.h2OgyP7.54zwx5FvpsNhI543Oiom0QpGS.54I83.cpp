
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    namespace nwapi {
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
     protected:
  ~NwAppQuitFunction() override;
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    #if !defined(__AVX__)
// Implementation for non-avx archs.
    
    namespace tesseract {
double DotProductSSE(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductSSE can't be used on Android\n');
  abort();
}
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  fprintf(stderr, 'IntDotProductSSE can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    
    {}  // namespace tesseract.
    
    #include 'platform.h'  // for TESS_API
    
      /**
   * Returns true if the iterator is at the start of an object at the given
   * level.
   *
   * For instance, suppose an iterator it is pointed to the first symbol of the
   * first word of the third line of the second paragraph of the first block in
   * a page, then:
   *   it.IsAtBeginningOf(RIL_BLOCK) = false
   *   it.IsAtBeginningOf(RIL_PARA) = false
   *   it.IsAtBeginningOf(RIL_TEXTLINE) = true
   *   it.IsAtBeginningOf(RIL_WORD) = true
   *   it.IsAtBeginningOf(RIL_SYMBOL) = true
   */
  virtual bool IsAtBeginningOf(PageIteratorLevel level) const;
    
    #include <memory>
    
    #include <memory>
    
    bool AuthPropertyIterator::operator!=(const AuthPropertyIterator& rhs) const {
  return !operator==(rhs);
}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H */

    
    void CensusServerCallData::OnDoneRecvInitialMetadataCb(void* user_data,
                                                       grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusServerCallData* calld =
      reinterpret_cast<CensusServerCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    grpc_metadata_batch* initial_metadata = calld->recv_initial_metadata_;
    GPR_ASSERT(initial_metadata != nullptr);
    ServerMetadataElements sml;
    sml.path = grpc_empty_slice();
    sml.tracing_slice = grpc_empty_slice();
    sml.census_proto = grpc_empty_slice();
    FilterInitialMetadata(initial_metadata, &sml);
    calld->path_ = grpc_slice_ref_internal(sml.path);
    calld->method_ = GetMethod(&calld->path_);
    calld->qualified_method_ = StrCat('Recv.', calld->method_);
    const char* tracing_str =
        GRPC_SLICE_IS_EMPTY(sml.tracing_slice)
            ? ''
            : reinterpret_cast<const char*>(
                  GRPC_SLICE_START_PTR(sml.tracing_slice));
    size_t tracing_str_len = GRPC_SLICE_IS_EMPTY(sml.tracing_slice)
                                 ? 0
                                 : GRPC_SLICE_LENGTH(sml.tracing_slice);
    const char* census_str = GRPC_SLICE_IS_EMPTY(sml.census_proto)
                                 ? ''
                                 : reinterpret_cast<const char*>(
                                       GRPC_SLICE_START_PTR(sml.census_proto));
    size_t census_str_len = GRPC_SLICE_IS_EMPTY(sml.census_proto)
                                ? 0
                                : GRPC_SLICE_LENGTH(sml.census_proto);
    }
    }
    
      /**
   * \fn  virtual void Predictor::Init(const std::vector<std::pair<std::string,
   * std::string> >&cfg ,const std::vector<std::shared_ptr<DMatrix> > &cache);
   *
   * \brief Configure and register input matrices in prediction cache.
   *
   * \param cfg   The configuration.
   * \param cache Vector of DMatrix's to be used in prediction.
   */
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
        /** Returns a new action that performs the exact reverse of the action. 
     *
     * @return A new action that performs the exact reverse of the action.
     * @js NA
     */
    virtual Action* reverse() const
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
    void ActionCamera::setCenter(const Vec3& center)
{
    _center = center;
    updateTransform();
}
    
        /** Creates an action with a Cardinal Spline array of points and tension.
     * @param duration In seconds.
     * @param points An PointArray.
     * @param tension Goodness of fit.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var t,var table)
     * In lua: local create(local t, local table)
     * @endcode
     */
    static CardinalSplineTo* create(float duration, PointArray* points, float tension);
    /**
     * @js NA
     * @lua NA
     */
    virtual ~CardinalSplineTo();
    /**
     * @js ctor
     * @lua NA
     */
    CardinalSplineTo();
    
    StopGrid* StopGrid::clone() const
{
    return StopGrid::create();
}
    
    /** @class ActionInstant
* @brief Instant actions are immediate actions. They don't have a duration like the IntervalAction actions.
**/
class CC_DLL ActionInstant : public FiniteTimeAction
{
public:
    //
    // Overrides
    //
    virtual ActionInstant* clone() const override
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
    virtual ActionInstant * reverse() const override
    {
        CC_ASSERT(0);
        return nullptr;
    }
    }
    
    
    /** Pauses the target: all running actions and newly added actions will be paused.
     *
     * @param target    A certain target.
     */
    virtual void pauseTarget(Node *target);
    
    AnimationFrame* AnimationFrame::create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo)
{
    auto ret = new (std::nothrow) AnimationFrame();
    if (ret && ret->initWithSpriteFrame(spriteFrame, delayUnits, userInfo))
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    return ret;
}
    
    void AtlasNode::updateAtlasValues()
{
    CCASSERT(false, 'CCAtlasNode:Abstract updateAtlasValue not overridden');
}
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
    extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    // DirectX data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGIFactory*            g_pFactory = NULL;
static ID3D11Buffer*            g_pVB = NULL;
static ID3D11Buffer*            g_pIB = NULL;
static ID3D10Blob*              g_pVertexShaderBlob = NULL;
static ID3D11VertexShader*      g_pVertexShader = NULL;
static ID3D11InputLayout*       g_pInputLayout = NULL;
static ID3D11Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob*              g_pPixelShaderBlob = NULL;
static ID3D11PixelShader*       g_pPixelShader = NULL;
static ID3D11SamplerState*      g_pFontSampler = NULL;
static ID3D11ShaderResourceView*g_pFontTextureView = NULL;
static ID3D11RasterizerState*   g_pRasterizerState = NULL;
static ID3D11BlendState*        g_pBlendState = NULL;
static ID3D11DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
    void ImGui_ImplGlfw_NewFrame()
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.Fonts->IsBuilt());     // Font atlas needs to be built, call renderer _NewFrame() function e.g. ImGui_ImplOpenGL3_NewFrame() 
    }