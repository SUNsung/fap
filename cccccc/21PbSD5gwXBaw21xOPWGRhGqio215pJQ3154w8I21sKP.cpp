
        
        namespace atom {
    }
    
    #endif  // ATOM_BROWSER_UI_X_EVENT_DISABLER_H_

    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
      // Sets size to which the thumbnails should be scaled. If called after
  // StartUpdating() then some thumbnails may be still scaled to the old size
  // until they are updated.
  virtual void SetThumbnailSize(const gfx::Size& thumbnail_size) = 0;
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    #ifndef CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
    
    #define FPL FILE_PATH_LITERAL
    
    
    {}  // namespace chrome
    
    #include 'atom/browser/api/event_emitter.h'
    
      /// Return whether the string is a status index
  bool isStatusIndex(const std::string& index);