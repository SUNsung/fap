
        
        Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    
    {}  // namespace remote
    
    
    {} // namespace nwapi

    
      focus_manager_ = NULL;
  window_ = NULL;
    
    void MenuItem::OnClick(GtkWidget* widget) {
  if (block_active_)
    return;
    }
    
      focus_manager_ = NULL;
  menu_ = NULL;
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
    namespace tesseract {
    }
    
      /// SetImage makes a copy of all the image data, so it may be deleted
  /// immediately after this call.
  /// Greyscale of 8 and color of 24 or 32 bits per pixel may be given.
  /// Palette color images will not work properly and must be converted to
  /// 24 bit.
  /// Binary images of 1 bit per pixel may also be given but they must be
  /// byte packed with the MSB of the first byte being the first pixel, and a
  /// one pixel is WHITE. For binary images set bytes_per_pixel=0.
  void SetImage(const unsigned char* imagedata, int width, int height,
                int bytes_per_pixel, int bytes_per_line);
    
    void Config::Bind(HackStrictOption& loc, const IniSettingMap& ini,
                  const Hdf& config, const std::string& name /* = '' */,
                  HackStrictOption def) {
  // Currently this doens't bind to ini_get since it is hard to thread through
  // an enum
  loc = GetHackStrictOption(ini, config, name, def);
}
    
    #include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/runtime-error.h'
#include 'hphp/runtime/base/zend-url.h'
#include 'hphp/runtime/base/zend-string.h'
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    struct FatalErrorException : ExtendedException {
  explicit FatalErrorException(const char *msg)
    : ExtendedException('%s', msg)
  {}
  FatalErrorException(int, ATTRIBUTE_PRINTF_STRING const char *msg, ...)
    ATTRIBUTE_PRINTF(3,4);
  FatalErrorException(const std::string&, const Array& backtrace,
                      bool isRecoverable = false);
    }
    
    struct Directory;