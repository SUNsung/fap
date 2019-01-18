
        
        namespace atom {
    }
    
    
    {}  // namespace atom

    
    namespace {
    }
    
    bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto* download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result =
      web_contents_->SavePage(full_path, saved_main_directory_path, save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
     protected:
  virtual ~TrackableObjectBase();
    
    
    {  DISALLOW_COPY_AND_ASSIGN(AtomQuotaPermissionContext);
};
    
    #define CONTENT_IMPLEMENTATION 1
#include 'content/common/content_export.h'
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    
    {
    {
    {      rph->Send(new ViewMsg_WillQuit(&no_use));
    }
    CloseAllWindows(true);
  }
  // Then quit.
  MessageLoop::current()->PostTask(FROM_HERE, MessageLoop::QuitClosure());
}
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
      WebView* view = frame->view();
  if (!view)
    return NULL;  // can happen during closing.
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
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
    
    
    {  is_menu_modified_ = true;
  menu_items_.push_back(menu_item);
  menu_item->menu_ = this;
}
    
     protected:
  ~NwAppCrashBrowserFunction() override {}
    
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
    
      SVMenuNode* std_menu = svMenuRoot->AddChild ('Build Config File');
    
    // Reads all boxes from the given filename.
// Reads a specific target_page number if >= 0, or all pages otherwise.
// Skips blanks if skip_blanks is true.
// The UTF-8 label of the box is put in texts, and the full box definition as
// a string is put in box_texts, with the corresponding page number in pages.
// Each of the output vectors is optional (may be nullptr).
// Returns false if no boxes are found.
bool ReadAllBoxes(int target_page, bool skip_blanks, const STRING& filename,
                  GenericVector<TBOX>* boxes,
                  GenericVector<STRING>* texts,
                  GenericVector<STRING>* box_texts,
                  GenericVector<int>* pages);
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }