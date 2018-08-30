
        
        using base::MessageLoop;
using base::CommandLine;
using content::BrowserThread;
using content::Shell;
using content::ShellBrowserContext;
using content::RenderProcessHost;
    
    
    {  base::ListValue result;
  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method_Sync(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get()),
      &result));
  return converter->ToV8Value(&result, isolate->GetCurrentContext());
}
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    
    {  ignore_result(menu_items_.empty());
}
    
    class NwClipboardSetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardSetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
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
    
    namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    namespace tesseract {
    }
    
      // Rounds the input up to a multiple of the given factor.
  static int Roundup(int input, int factor) {
    return (input + factor - 1) / factor * factor;
  }
    
    #endif  // TESSERACT_CCMAIN_EQUATIONDETECT_H_

    
    class TESS_API LTRResultIterator : public PageIterator {
  friend class ChoiceIterator;
 public:
  // page_res and tesseract come directly from the BaseAPI.
  // The rectangle parameters are copied indirectly from the Thresholder,
  // via the BaseAPI. They represent the coordinates of some rectangle in an
  // original image (in top-left-origin coordinates) and therefore the top-left
  // needs to be added to any output boxes in order to specify coordinates
  // in the original image. See TessBaseAPI::SetRectangle.
  // The scale and scaled_yres are in case the Thresholder scaled the image
  // rectangle prior to thresholding. Any coordinates in tesseract's image
  // must be divided by scale before adding (rect_left, rect_top).
  // The scaled_yres indicates the effective resolution of the binary image
  // that tesseract has been given by the Thresholder.
  // After the constructor, Begin has already been called.
  LTRResultIterator(PAGE_RES* page_res, Tesseract* tesseract,
                    int scale, int scaled_yres,
                    int rect_left, int rect_top,
                    int rect_width, int rect_height);
    }
    
    namespace tesseract {
    }
    
    class ScriptDetector {
 public:
  ScriptDetector(const GenericVector<int>* allowed_scripts,
                 OSResults* osr, tesseract::Tesseract* tess);
  void detect_blob(BLOB_CHOICE_LIST* scores);
  bool must_stop(int orientation);
 private:
  OSResults* osr_;
  static const char* korean_script_;
  static const char* japanese_script_;
  static const char* fraktur_script_;
  int korean_id_;
  int japanese_id_;
  int katakana_id_;
  int hiragana_id_;
  int han_id_;
  int hangul_id_;
  int latin_id_;
  int fraktur_id_;
  tesseract::Tesseract* tess_;
  const GenericVector<int>* allowed_scripts_;
};
    
      /**
   * Returns a binary image of the current object at the given level.
   * The position and size match the return from BoundingBoxInternal, and so
   * this could be upscaled with respect to the original input image.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetBinaryImage(PageIteratorLevel level) const;
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    	GetModuleFileName(NULL, exePath, sizeof(exePath));