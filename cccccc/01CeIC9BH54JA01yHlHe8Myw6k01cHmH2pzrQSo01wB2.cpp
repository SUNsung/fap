
        
        namespace api {
    }
    
      // Keeps track of whether shortcut handling is currently suspended.
  bool shortcut_handling_suspended_;
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
    #endif  // EXTENSIONS_BROWSER_APP_WINDOW_SIZE_CONSTRAINTS_H_

    
    namespace atom {
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30>
internal::ValueArray30<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
    T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
    T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24,
    T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30) {
  return internal::ValueArray30<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,
      v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25,
      v26, v27, v28, v29, v30);
}
    
      // Gets the summary of the failure message.
  const char* summary() const { return summary_.c_str(); }
    
    #endif  // GTEST_HAS_DEATH_TEST
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
    template <typename> class ParamGeneratorInterface;
template <typename> class ParamGenerator;
    
        static void SetTracingFlag()
    {
        auto& us = GetStaticInstance();
        us.m_tracingFlag = true;
    }
    
    
    {
    {
    {
    {
    {        // return the 'done with all records' value
        return (m_currentRecord >= m_recordCount);
    }
    virtual void SaveMapping(std::wstring saveId, const std::map<typename EvalWriter<ElemType>::LabelIdType, typename EvalWriter<ElemType>::LabelType>& /*labelMapping*/){};
    virtual bool SupportMultiUtterances() const
    {
        return false;
    };
};
} } }

    
    extern JSClass  *jsb_cocostudio_ProcessBase_class;
extern JSObject *jsb_cocostudio_ProcessBase_prototype;
    
    
    
    
    
    	// Callbacks for derived classes.
	virtual void BeginContact(b2Contact* contact) { B2_NOT_USED(contact); }
	virtual void EndContact(b2Contact* contact) { B2_NOT_USED(contact); }
	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);
	virtual void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse)
	{
		B2_NOT_USED(contact);
		B2_NOT_USED(impulse);
	}
    
    
    {	static Test* Create()
	{
		return new AddPair;
	}
};
    
    		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 4.0f);
    }
    
    #ifndef GUETZLI_COMPARATOR_H_
#define GUETZLI_COMPARATOR_H_
    
    
    {}  // namespace guetzli
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    #endif  // GUETZLI_FDCT_H_

    
    
    {}  // namespace guetzli
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
      // Compute YUV444 DCT coefficients.
  int block_ix = 0;
  for (int block_y = 0; block_y < jpg->MCU_rows; ++block_y) {
    for (int block_x = 0; block_x < jpg->MCU_cols; ++block_x) {
      coeff_t block[3 * kDCTBlockSize];
      // RGB->YUV transform.
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = std::min(h - 1, 8 * block_y + iy);
          int x = std::min(w - 1, 8 * block_x + ix);
          int p = y * w + x;
          RGBToYUV16(&rgb[3 * p], &block[8 * iy + ix]);
        }
      }
      // DCT
      for (int i = 0; i < 3; ++i) {
        ComputeBlockDCT(&block[i * kDCTBlockSize]);
      }
      // Quantization
      for (int i = 0; i < 3 * 64; ++i) {
        Quantize(&block[i], iquant[i]);
      }
      // Copy the resulting coefficients to *jpg.
      for (int i = 0; i < 3; ++i) {
        memcpy(&jpg->components[i].coeffs[block_ix * kDCTBlockSize],
               &block[i * kDCTBlockSize], kDCTBlockSize * sizeof(block[0]));
      }
      ++block_ix;
    }
  }
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
    #include <new>
#include 'CoreClasses.h'
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
    void Node::calculateLayout(double width, double height, int direction)
{
    YGNodeCalculateLayout(m_node, width, height, static_cast<YGDirection>(direction));
}
    
        void setFlex(double flex);
    void setFlexBasis(double flexBasis);
    void setFlexBasisPercent(double flexBasis);
    void setFlexBasisAuto();
    void setFlexGrow(double flexGrow);
    void setFlexShrink(double flexShrink);
    
    /**
 * RAII Object that attaches a thread to the JVM. Failing to detach from a thread before it
 * exits will cause a crash, as will calling Detach an extra time, and this guard class helps
 * keep that straight. In addition, it remembers whether it performed the attach or not, so it
 * is safe to nest it with itself or with non-fbjni code that manages the attachment correctly.
 *
 * Potential concerns:
 *  - Attaching to the JVM is fast (~100us on MotoG), but ideally you would attach while the
 *    app is not busy.
 *  - Having a thread detach at arbitrary points is not safe in Dalvik; you need to be sure that
 *    there is no Java code on the current stack or you run the risk of a crash like:
 *      ERROR: detaching thread with interp frames (count=18)
 *    (More detail at https://groups.google.com/forum/#!topic/android-ndk/2H8z5grNqjo)
 *    ThreadScope won't do a detach if the thread was already attached before the guard is
 *    instantiated, but there's probably some usage that could trip this up.
 *  - Newly attached C++ threads only get the bootstrap class loader -- i.e. java language
 *    classes, not any of our application's classes. This will be different behavior than threads
 *    that were initiated on the Java side. A workaround is to pass a global reference for a
 *    class or instance to the new thread; this bypasses the need for the class loader.
 *    (See http://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/invocation.html#attach_current_thread)
 *    If you need access to the application's classes, you can use ThreadScope::WithClassLoader.
 */
class FBEXPORT ThreadScope {
 public:
  ThreadScope();
  ThreadScope(ThreadScope&) = delete;
  ThreadScope(ThreadScope&&) = default;
  ThreadScope& operator=(ThreadScope&) = delete;
  ThreadScope& operator=(ThreadScope&&) = delete;
  ~ThreadScope();
    }