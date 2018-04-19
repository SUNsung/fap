
        
          static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
      int object_id = args[0]->Int32Value();
  std::string name = *v8::String::Utf8Value(args[1]);
    
    #endif  // CONTENT_NW_SRC_API_DISPATCHER_BINDINGS_H_

    
    class DispatcherHost : public content::WebContentsObserver {
 public:
  explicit DispatcherHost(content::RenderViewHost* render_view_host);
  ~DispatcherHost() final;
    }
    
    
    {}
    
    // Popup menus may get squished if they open up too close to the bottom of the
// screen. This function takes the size of the screen, the size of the menu,
// an optional widget, the Y position of the mouse click, and adjusts the popup
// menu's Y position to make it fit if it's possible to do so.
// Returns the new Y position of the popup menu.
int CalculateMenuYPosition(const GdkRectangle* screen_rect,
                           const GtkRequisition* menu_req,
                           GtkWidget* widget, const int y) {
  CHECK(screen_rect);
  CHECK(menu_req);
  // If the menu would run off the bottom of the screen, and there is enough
  // screen space upwards to accommodate the menu, then pop upwards. If there
  // is a widget, then also move the anchor point to the top of the widget
  // rather than the bottom.
  const int screen_top = screen_rect->y;
  const int screen_bottom = screen_rect->y + screen_rect->height;
  const int menu_bottom = y + menu_req->height;
  int alternate_y = y - menu_req->height;
  if (widget) {
    GtkAllocation allocation;
    gtk_widget_get_allocation(widget, &allocation);
    alternate_y -= allocation.height;
  }
  if (menu_bottom >= screen_bottom && alternate_y >= screen_top)
    return alternate_y;
  return y;
}
    
    void MenuItem::SetChecked(bool checked) {
  // Set active will cause 'activate' to be emitted, so block here
  block_active_ = true;
  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(menu_item_), checked);
  block_active_ = false;
}
    
    
    {  if (enable_shortcut_) {
    focus_manager_->UnregisterAccelerator(accelerator_, this);
  }
  if (submenu_) {
    submenu_->RemoveKeys();
  }
  focus_manager_ = NULL;
}
    
    namespace HPHP {
    }
    
    
    {    insertOrInc(s, d, arc.weight);
  }
    
    
    {}
    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
        for (std::size_t i = 1; i < data_channel->getNumProcesses(); ++i) {
      auto int_tensor = buildTensor<int>({1, 2, 3, 4, 5}, 20);
      data_channel->send(*int_tensor, i);
    }
  } else {
    auto int_tensor1 = buildTensor<int>({1, 2, 3, 4, 5}, -1);
    auto request = std::shared_ptr<thd::DataChannel::Request>(
      data_channel->ireceive(*int_tensor1, 0)
    );
    
    template<> AT_API Half convert(float f);
template<> AT_API float convert(Half f);
template<> AT_API Half convert(double f);
template<> AT_API double convert(Half f);
template<> AT_API Half convert(int64_t f);
template<> AT_API int64_t convert(Half f);
    
    namespace at {
    }
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaFloatTensor(THCudaTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Float).unsafeTensorFromTH((void*)tensor, true);
}