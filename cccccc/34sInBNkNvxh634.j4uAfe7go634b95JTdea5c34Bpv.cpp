
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    
    {}  // namespace nwapi
    
    namespace nwapi {
    }
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
      NwScreenDisplayObserver::~NwScreenDisplayObserver() {
    display::Screen* screen = display::Screen::GetScreen();
    if (screen) {
      screen->RemoveObserver(this);
    }
  }
    
      // implement nw.Screen.stopMonitor()
  class NwScreenStopMonitorFunction : public NWSyncExtensionFunction {
  public:
    NwScreenStopMonitorFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
              auto wx_md_0 = mkldnn::memory::desc(
              { weights_layer_tz_0 }, mkldnn_dtype, mkldnn::memory::format::ldgoi);
          auto wx_memory_0 =
              mkldnn::memory({ wx_md_0, cpu_engine });
          auto wh_md_0 = mkldnn::memory::desc(
              { weights_iter_tz_0 }, mkldnn_dtype, mkldnn::memory::format::ldgoi);
          auto wh_memory_0 =
              mkldnn::memory({ wh_md_0, cpu_engine });
          if (D == 2) {
            DType* wx_0 = workptr;  //  D * ngates * I * H
            wx_memory_0.set_data_handle(wx_0);
            DType* wh_0 = wx_0 + D * ngates * I * H;  //  D * ngates * H * H
            wh_memory_0.set_data_handle(wh_0);
            workptr = wh_0 + D * ngates * H * H;
          }
          op.concat_weight_memory.push_back(wx_memory_0);
          op.concat_weight_memory.push_back(wh_memory_0);
    
      auto state = Imperative::Get()->Invoke(Context::CPU(), attrs, ndinputs, ndoutputs);
  if (Imperative::Get()->is_recording()) {
    Imperative::Get()->RecordOp(std::move(attrs), ndinputs, ndoutputs, state);
  }
    
    #endif  // MXNET_GRAPH_ATTR_TYPES_H_

    
      void setBorder(int edge, double border);
    
    
    {
    {
    {      YGNodeFreeRecursive(root);
    }
  }
}

    
        /// <summary>
    /// Gets a global variable and returns the <see cref='JsValueRef' /> result.
    /// </summary>
    /// <param name='szPropertyName'>The property name from global to get.</param>
    /// <param name='result'>[Out] The global property value.</param>
    /// <returns>
    /// JsNoError is no error, else a JsErrorCode with the appropriate error.
    /// </returns>
    JsErrorCode GetGlobalVariable(const wchar_t* szPropertyName, JsValueRef* result);
    
    #include 'pch.h'
    
    #define IfFailRetNullPtr(v) \
    { \
        JsErrorCode status = (v); \
        if (status != JsNoError) \
        { \
            ChakraStringResult stringResult; \
            stringResult.ErrorCode = status; \
            return stringResult; \
        } \
    }
    
    struct property_Microsoft_UI_Composition_Effects_IBorderEffect
{ struct named {
    struct ExtendX
    {
        struct name { static constexpr std::wstring_view value{ L'ExtendX'sv }; };
        using property_type = winrt::Microsoft::UI::Composition::Effects::CanvasEdgeBehavior;
        using target_type = winrt::Microsoft::UI::Composition::Effects::IBorderEffect;
    }
    }
    }
    
      const auto bubblingEventTypesConstants =
      GetExportedCustomBubblingEventTypeConstants();
  if (!bubblingEventTypesConstants.empty())
    constants['bubblingEventTypes'] = bubblingEventTypesConstants;
  const auto directEventTypesConstants =
      GetExportedCustomDirectEventTypeConstants();
  if (!directEventTypesConstants.empty())
    constants['directEventTypes'] = directEventTypesConstants;
    
    namespace Microsoft::React::Test {
    }