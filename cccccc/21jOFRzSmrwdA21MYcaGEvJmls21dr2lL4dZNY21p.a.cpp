
        
        #if defined(OS_MACOSX) || defined(OS_LINUX)
  void ShowAboutPanel();
  void SetAboutPanelOptions(const base::DictionaryValue& options);
#endif
    
    // Read a message from a socket fd, with an optional timeout.
// If |timeout| <= 0 then read immediately.
// Return number of bytes actually read, or -1 on error.
ssize_t ReadFromSocket(int fd,
                       char* buf,
                       size_t bufsize,
                       const base::TimeDelta& timeout) {
  if (timeout > base::TimeDelta()) {
    int rv = WaitSocketForRead(fd, timeout);
    if (rv <= 0)
      return rv;
  }
    }
    
    
namespace nwapi {
    }
    
    #include 'content/nw/src/api/menu/menu.h'
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    
    {#endif
}  // namespace nwapi
    
    #include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.allocateId', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjAllocateIdFunction);
};
    
      private:
    int GetPrimaryMonitorIndex();
    // DesktopMediaListObserver implementation.
    void OnSourceAdded(DesktopMediaList* list, int index) override;
    void OnSourceRemoved(DesktopMediaList* list, int index) override;
    void OnSourceMoved(DesktopMediaList* list, int old_index, int new_index) override;
    void OnSourceNameChanged(DesktopMediaList* list, int index) override;
    void OnSourceThumbnailChanged(DesktopMediaList* list, int index) override;
    
    	if (cfgRoot.length() != 0)
	{
		swprintf_s(args, L'%s  -loadcfgfile \'%s\'', args, userConEmuCfgPath);
	}