
        
        
    {  // Make vanilla new/delete illegal.
  void *operator new(size_t Bytes) = delete;
  void operator delete(void *Data) = delete;
};
    
      ArrayRef<MarkupASTNode *> getChildren() {
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren};
  }
    
    #endif

    
      ResultPlanPtr build(Initialization *emitInto, AbstractionPattern origType,
                      CanType substType);
  ResultPlanPtr buildForTuple(Initialization *emitInto,
                              AbstractionPattern origType,
                              CanTupleType substType);
    
      /// Tracks previous replacements so we don't pump the rewrite buffer with
  /// multiple equivalent replacements, which can result in weird behavior.
  llvm::SmallSet<Replacement, 32> Replacements;
    
    
    {  IfConfigClause(SourceLoc Loc, Expr *Cond,
                 ArrayRef<ASTNode> Elements, bool isActive)
    : Loc(Loc), Cond(Cond), Elements(Elements), isActive(isActive) {
  }
};
    
    #include 'base/values.h'
#include 'extensions/common/draggable_region.h'
#include 'content/public/common/common_param_traits.h'
#include 'ipc/ipc_message_macros.h'
#include 'ui/gfx/ipc/gfx_param_traits.h'
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    class ObjectManager;
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    class NwAppSetProxyConfigFunction : public NWSyncExtensionFunction {
 public:
  NwAppSetProxyConfigFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      private:
    bool ReadText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      base::string16 text;
      clipboard_->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
    #include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'