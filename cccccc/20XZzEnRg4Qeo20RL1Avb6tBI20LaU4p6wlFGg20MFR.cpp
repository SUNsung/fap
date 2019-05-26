
        
        #include 'base/values.h'
#include 'extensions/common/draggable_region.h'
#include 'content/public/common/common_param_traits.h'
#include 'ipc/ipc_message_macros.h'
#include 'ui/gfx/ipc/gfx_param_traits.h'
    
    #endif  // CONTENT_NW_SRC_API_BINDINGS_COMMON_H_

    
    Clipboard::~Clipboard() {
}
    
     private:
  ObjectManager* object_manager_;
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
     protected:
  ~NwAppClearAppCacheFunction() override;
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethodSync(render_frame_host(), id, type, method, *arguments, response);
  return true;
}