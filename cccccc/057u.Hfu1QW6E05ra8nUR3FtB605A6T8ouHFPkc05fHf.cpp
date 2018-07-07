
        
        
    {}  // namespace atom
    
    namespace internal {
    }
    
    class WindowListObserver {
 public:
  // Called immediately after a window is added to the list.
  virtual void OnWindowAdded(NativeWindow* window) {}
    }
    
    class PreferencesManager : public content::RenderThreadObserver {
 public:
  PreferencesManager();
  ~PreferencesManager() override;
    }
    
    namespace base {
class FilePath;
}
    
    
    {}  // namespace extensions
    
    #include 'base/strings/string16.h'
#include 'base/time/time.h'
#include 'content/public/browser/desktop_media_id.h'
#include 'ui/gfx/image/image_skia.h'
    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
}
    
    #include 'chrome/common/chrome_constants.h'
    
            break;
      }
      case JPGD_YH1V1:
      {
        H1V1Convert();
        *pScan_line = m_pScan_line_0;
        break;
      }
      case JPGD_GRAYSCALE:
      {
        gray_convert();
        *pScan_line = m_pScan_line_0;
    
    # define OC_STATIC_ILOG0(_v) (!!(_v))
# define OC_STATIC_ILOG1(_v) (((_v)&0x2)?2:OC_STATIC_ILOG0(_v))
# define OC_STATIC_ILOG2(_v) \
 (((_v)&0xC)?2+OC_STATIC_ILOG1((_v)>>2):OC_STATIC_ILOG1(_v))
# define OC_STATIC_ILOG3(_v) \
 (((_v)&0xF0)?4+OC_STATIC_ILOG2((_v)>>4):OC_STATIC_ILOG2(_v))
# define OC_STATIC_ILOG4(_v) \
 (((_v)&0xFF00)?8+OC_STATIC_ILOG3((_v)>>8):OC_STATIC_ILOG3(_v))
# define OC_STATIC_ILOG5(_v) \
 (((_v)&0xFFFF0000)?16+OC_STATIC_ILOG4((_v)>>16):OC_STATIC_ILOG4(_v))
# define OC_STATIC_ILOG6(_v) \
 (((_v)&0xFFFFFFFF00000000ULL)?32+OC_STATIC_ILOG5((_v)>>32):OC_STATIC_ILOG5(_v))
/**
 * OC_STATIC_ILOG_32 - The integer logarithm of an (unsigned, 32-bit) constant.
 * @_v: A non-negative 32-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_32(_v) (OC_STATIC_ILOG5((ogg_uint32_t)(_v)))
/**
 * OC_STATIC_ILOG_64 - The integer logarithm of an (unsigned, 64-bit) constant.
 * @_v: A non-negative 64-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_64(_v) (OC_STATIC_ILOG6((ogg_int64_t)(_v)))