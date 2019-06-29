
        
        SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
      IAMResult() = default;
    
      /// Emits an error for each file in \p unusedPrimaryFiles.
  ///
  /// \returns true if \p unusedPrimaryFiles is non-empty.
  bool diagnoseUnusedPrimaryFiles(std::set<StringRef> unusedPrimaryFiles);
    
      unsigned LastArgWritten;
    
    #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    #include 'base/logging.h'
#include 'base/values.h'
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    #include 'ui/base/models/simple_menu_model.h'
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.closeAllWindows', UNKNOWN)
};
    
    
    {  return true;
}
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    #include 'extensions/browser/extension_function.h'
    
      Fork() {
    pid = fork();
    if (pid < 0) {
      throw std::system_error(errno, std::system_category(), 'fork');
    }
  }
    
    
    {
    {    return SingleGradientDef(
        'MergeSingleMapFeatureTensorsGradient',
        '',
        input_blob_names,
        output_blob_names);
  }
};
    
    			if ( pImageData )
			{
			
				Image image(pImageData, mipWidth, mipHeight,	a_eErrMetric);
    }
    
    	void EncodeMipmaps(float *a_pafSourceRGBA,
		unsigned int a_uiSourceWidth,
		unsigned int a_uiSourceHeight,
		Image::Format a_format,
		ErrorMetric a_eErrMetric,
		float a_fEffort,
		unsigned int a_uiJobs,
		unsigned int a_uiMaxJobs,
		unsigned int a_uiMaxMipmaps,
		unsigned int a_uiMipFilterFlags,
		RawImage* a_pMipmaps,
		int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		// the alpha mix for a 4x4 block of pixels
		enum class SourceAlphaMix
		{
			UNKNOWN,
			//
			OPAQUE,			// all 1.0
			TRANSPARENT,	// all 0.0 or NAN
			TRANSLUCENT		// not all opaque or transparent
		};
    
    			// Favor Luma accuracy over Chroma, and Red over Blue 
			return LUMA_WEIGHT*fDeltaL*fDeltaL +
					fDeltaCr*fDeltaCr +
					CHROMA_BLUE_WEIGHT*fDeltaCb*fDeltaCb +
					fDAlpha*fDAlpha;
	#if 0
			float fDRed = a_frgbaDecodedPixel.fR - a_frgbaSourcePixel.fR;
			float fDGreen = a_frgbaDecodedPixel.fG - a_frgbaSourcePixel.fG;
			float fDBlue = a_frgbaDecodedPixel.fB - a_frgbaSourcePixel.fB;
			return 2.0f * 3.0f * fDeltaL * fDeltaL + fDRed*fDRed + fDGreen*fDGreen + fDBlue*fDBlue;
#endif
		}
		else if (m_errormetric == ErrorMetric::NORMALXYZ)
		{
			float fDecodedX = 2.0f * a_frgbaDecodedColor.fR - 1.0f;
			float fDecodedY = 2.0f * a_frgbaDecodedColor.fG - 1.0f;
			float fDecodedZ = 2.0f * a_frgbaDecodedColor.fB - 1.0f;
    
    /** Shift by a and round-to-neareast 32-bit value. Result is a 16-bit value */
#define ROUND16(x,a) (EXTRACT16(PSHR32((x),(a))))
/** Divide by two */
#define HALF16(x)  (SHR16(x,1))
#define HALF32(x)  (SHR32(x,1))
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    /* ((a32 >> 16)  * (b32 >> 16)) output have to be 32bit int */
#define silk_SMULTT(a32, b32)               (((a32) >> 16) * ((b32) >> 16))
    
      //----- text drawing
  virtual void drawString(GfxState *state, GooString *s);
  virtual void beginTextObject(GfxState *state);
  virtual GBool deviceHasTextClip(GfxState *state) { return haveTextClip && haveCSPattern; }
  virtual void endTextObject(GfxState *state);
    
      void makeBox(double hDPI, double vDPI, int rotate,
	       GBool useMediaBox, GBool upsideDown,
	       double sliceX, double sliceY, double sliceW, double sliceH,
	       PDFRectangle *box, GBool *crop);
    
    #include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <assert.h>
    
    // if changed remember to keep in sync with frontend enums
enum PageTransitionType {
  transitionReplace = 0,
  transitionSplit,
  transitionBlinds,
  transitionBox,
  transitionWipe,
  transitionDissolve,
  transitionGlitter,
  transitionFly,
  transitionPush,
  transitionCover,
  transitionUncover,
  transitionFade
};
    
    class PopplerCacheKey
{
  public:
    virtual ~PopplerCacheKey();
    virtual bool operator==(const PopplerCacheKey &key) const = 0;
};
    
    
    
      // Create authorization data for the specified owner and user
  // passwords.  If the security handler doesn't support 'batch' mode,
  // this function should return NULL.
  virtual void *makeAuthData(GooString *ownerPassword,
			     GooString *userPassword) = 0;
    
    class Sound
{
public:
  // Try to parse the Object s
  static Sound *parseSound(Object *s);
    }
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
    
    {    return newlocal;
  }
    
      bool found = PrintAllDigits;
  while (powerToPrint) {
    if (found || powerToPrint <= val) {
      IntegralType value = IntegralType(val / powerToPrint);
      if (Base == 10 || value < 10) {
        value += '0';
      } else {
        value += ('a' - 10);
      }
      *(buf++) = char(value);
      val %= powerToPrint;
      found = true;
    }
    }
    
    
    {
    {size_t qfind_first_byte_of_byteset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  SparseByteSet s;
  for (auto needle : needles) {
    s.add(uint8_t(needle));
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s.contains(uint8_t(haystack[index]))) {
      return index;
    }
  }
  return std::string::npos;
}
} // namespace detail
} // namespace folly

    
        ~JStringCache() {}
    
    #include <vector>
    
    
    {
    { public:
  std::map<std::string, std::string> *styles_;
  std::map<std::string, std::string> *attributes_;
  std::set<std::string> *events_;
  WXCoreMargin margins_;
  WXCorePadding paddings_;
  WXCoreBorderWidth borders_;
  std::string page_id_;
  std::string component_type_;
  std::string parent_ref_;
  std::string ref_;
  int index_;
  bool will_layout_;
};
}  // namespace WeexCore
    
    #endif  // CORE_RENDER_ACTION_RENDER_ACTION_ADD_EVENT_H_
