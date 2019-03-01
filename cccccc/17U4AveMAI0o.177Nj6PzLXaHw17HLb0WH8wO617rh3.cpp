
        
            /**
     * System registration hook.
     */
    static void registerIDs();
    
    #define LOW_A             ((UChar)0x0061)
#define LOW_B             ((UChar)0x0062)
#define LOW_C             ((UChar)0x0063)
#define LOW_D             ((UChar)0x0064)
#define LOW_E             ((UChar)0x0065)
#define LOW_F             ((UChar)0x0066)
#define LOW_G             ((UChar)0x0067)
#define LOW_H             ((UChar)0x0068)
#define LOW_I             ((UChar)0x0069)
#define LOW_J             ((UChar)0x006a)
#define LOW_K             ((UChar)0x006B)
#define LOW_L             ((UChar)0x006C)
#define LOW_M             ((UChar)0x006D)
#define LOW_N             ((UChar)0x006E)
#define LOW_O             ((UChar)0x006F)
#define LOW_P             ((UChar)0x0070)
#define LOW_Q             ((UChar)0x0071)
#define LOW_R             ((UChar)0x0072)
#define LOW_S             ((UChar)0x0073)
#define LOW_T             ((UChar)0x0074)
#define LOW_U             ((UChar)0x0075)
#define LOW_V             ((UChar)0x0076)
#define LOW_W             ((UChar)0x0077)
#define LOW_X             ((UChar)0x0078)
#define LOW_Y             ((UChar)0x0079)
#define LOW_Z             ((UChar)0x007A)
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
#include 'unicode/dtfmtsym.h'
    
    class U_I18N_API SharedNumberFormat : public SharedObject {
public:
    SharedNumberFormat(NumberFormat *nfToAdopt) : ptr(nfToAdopt) { }
    virtual ~SharedNumberFormat();
    const NumberFormat *get() const { return ptr; }
    const NumberFormat *operator->() const { return ptr; }
    const NumberFormat &operator*() const { return *ptr; }
private:
    NumberFormat *ptr;
    SharedNumberFormat(const SharedNumberFormat &);
    SharedNumberFormat &operator=(const SharedNumberFormat &);
};
    
        int unit;
    double value;
    
    #include <cstring>
#include <deque>
#include <exception>
#include <functional>
#include <memory>
#include <string>
    
    template <YGMarker M>
struct MarkerData;
    
    #ifdef __cplusplus
namespace facebook {
namespace yoga {
namespace enums {
    }
    }
    }
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    template <typename T> template <typename U>
RefPtr<T>::operator RefPtr<U>() const {
  static_assert(std::is_base_of<T, U>::value, 'Invalid static cast');
  return assumeAlreadyReffedOrNull<U>(static_cast<U*>(m_ptr));
}
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT
    
    
    {} // namespace detail
    
    
/**
 * This needs to be called at library load time, typically in your JNI_OnLoad method.
 *
 * The intended use is to return the result of initialize() directly
 * from JNI_OnLoad and to do nothing else there. Library specific
 * initialization code should go in the function passed to initialize
 * (which can be, and probably should be, a C++ lambda). This approach
 * provides correct error handling and translation errors during
 * initialization into Java exceptions when appropriate.
 *
 * Failure to call this will cause your code to crash in a remarkably
 * unhelpful way (typically a segfault) while trying to handle an exception
 * which occurs later.
 */
FBEXPORT jint initialize(JavaVM*, std::function<void()>&&) noexcept;