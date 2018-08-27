
        
          // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    namespace nwapi {
    }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    namespace nw {
    }
    
      base::RunLoop run_loop_;
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    #include 'extensions/browser/extension_function.h'
    
    //
// NOTE: Converting these macros into Templates is desirable, but please see
// issue #16159 [https://github.com/cocos2d/cocos2d-x/pull/16159] for further info
//
#define EASEELASTIC_TEMPLATE_IMPL(CLASSNAME, TWEEN_FUNC, REVERSE_CLASSNAME) \
CLASSNAME* CLASSNAME::create(cocos2d::ActionInterval *action, float period /* = 0.3f*/) \
{ \
    CLASSNAME *ease = new (std::nothrow) CLASSNAME(); \
    if (ease) \
    { \
        if (ease->initWithAction(action, period)) \
            ease->autorelease(); \
        else \
            CC_SAFE_RELEASE_NULL(ease); \
    } \
    return ease; \
} \
CLASSNAME* CLASSNAME::clone() const \
{ \
    if(_inner) return CLASSNAME::create(_inner->clone(), _period); \
    return nullptr; \
} \
void CLASSNAME::update(float time) { \
    _inner->update(TWEEN_FUNC(time, _period)); \
} \
EaseElastic* CLASSNAME::reverse() const { \
    return REVERSE_CLASSNAME::create(_inner->reverse(), _period); \
}
    
    Place * Place::reverse() const
{
    // no reverse, just clone
    return this->clone();
}
    
    //
// TintBy
//
    
    bool AtlasNode::initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender)
{
    CCASSERT(tile.size() > 0, 'file size should not be empty');
    Texture2D *texture = Director::getInstance()->getTextureCache()->addImage(tile);
    return initWithTexture(texture, tileWidth, tileHeight, itemsToRender);
}
    
    
    {        // update font info
        FT_Size_Metrics metrics = FreetypeFace->size->metrics;
        Info.PixelHeight = (uint32_t)pixel_height;
        Info.Ascender = (float)FT_CEIL(metrics.ascender);
        Info.Descender = (float)FT_CEIL(metrics.descender);
        Info.LineSpacing = (float)FT_CEIL(metrics.height);
        Info.LineGap = (float)FT_CEIL(metrics.height - metrics.ascender + metrics.descender);
        Info.MaxAdvanceWidth = (float)FT_CEIL(metrics.max_advance);
    }
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
    }
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        desc.NumDescriptors = 1;
        desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dSrvDescHeap)) != S_OK)
            return E_FAIL;
    }
    
        if (device->QueryInterface(IID_PPV_ARGS(&pDXGIDevice)) == S_OK)
        if (pDXGIDevice->GetParent(IID_PPV_ARGS(&pDXGIAdapter)) == S_OK)
            if (pDXGIAdapter->GetParent(IID_PPV_ARGS(&pFactory)) == S_OK)
            {
                g_pd3dDevice = device;
                g_pFactory = pFactory;
            }
    if (pDXGIDevice) pDXGIDevice->Release();
    if (pDXGIAdapter) pDXGIAdapter->Release();
    
    using Clock = common::time::Clock;
using micros = common::time::micros;
using apollo::common::ErrorCode;
    
      int32_t ret = bcan_recv(_dev_handler, _recv_frames, *frame_num);
  // don't log timeout
  if (ret == RX_TIMEOUT) {
    *frame_num = 0;
    return ErrorCode::OK;
  }
  if (ret < 0) {
    int ret_rece_error = bcan_get_status(_dev_handler);
    AERROR << 'receive message failed, error code:' << ret
           << 'receive error:' << ret_rece_error;
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
  *frame_num = ret;
    
    #ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_HERMES_CAN_CLIENT_H
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_HERMES_CAN_CLIENT_H
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    // (SUM(input))^0xFF
template <typename SensorType>
uint8_t ProtocolData<SensorType>::CalculateCheckSum(const uint8_t *input,
                                                    const uint32_t length) {
  return std::accumulate(input, input + length, 0) ^ 0xFF;
}
    
    
    {  EXPECT_TRUE(value.is_bit_1(0));
  EXPECT_TRUE(value.is_bit_1(1));
  EXPECT_FALSE(value.is_bit_1(3));
  EXPECT_TRUE(value.is_bit_1(6));
  EXPECT_FALSE(value.is_bit_1(7));
}
    
    const int32_t CAN_FRAME_SIZE = 8;
const int32_t MAX_CAN_SEND_FRAME_LEN = 1;
const int32_t MAX_CAN_RECV_FRAME_LEN = 10;