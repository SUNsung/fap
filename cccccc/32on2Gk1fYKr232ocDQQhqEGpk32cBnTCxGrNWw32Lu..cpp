
        
        #ifndef CHROME_BROWSER_UI_VIEWS_FRAME_GLOBAL_MENU_BAR_REGISTRAR_X11_H_
#define CHROME_BROWSER_UI_VIEWS_FRAME_GLOBAL_MENU_BAR_REGISTRAR_X11_H_
    
    napi_value Init(napi_env env, napi_value exports) {
  napi_status status;
  napi_property_descriptor descriptors[] = {
      {'Print', NULL, Print, NULL, NULL, NULL, napi_default, NULL}};
    }
    
    v8::MaybeLocal<v8::Object> WrappableBase::GetWrapper(
    v8::Isolate* isolate) const {
  if (!wrapper_.IsEmpty())
    return v8::MaybeLocal<v8::Object>(
        v8::Local<v8::Object>::New(isolate, wrapper_));
  else
    return v8::MaybeLocal<v8::Object>();
}
    
    // Arguments is a wrapper around v8::FunctionCallbackInfo that integrates
// with Converter to make it easier to marshall arguments and return values
// between V8 and C++.
class Arguments {
 public:
  Arguments();
  explicit Arguments(const v8::FunctionCallbackInfo<v8::Value>& info);
  ~Arguments();
    }
    
    namespace mate {
    }
    
    U_NAMESPACE_END
    
        if(attributeHasBeenSetExplicitly(UCOL_ALTERNATE_HANDLING)) {
        appendAttribute(result, 'A', getAttribute(UCOL_ALTERNATE_HANDLING, errorCode), errorCode);
    }
    // ATTR_VARIABLE_TOP not supported because 'B' was broken.
    // See ICU tickets #10372 and #10386.
    if(attributeHasBeenSetExplicitly(UCOL_CASE_FIRST)) {
        appendAttribute(result, 'C', getAttribute(UCOL_CASE_FIRST, errorCode), errorCode);
    }
    if(attributeHasBeenSetExplicitly(UCOL_NUMERIC_COLLATION)) {
        appendAttribute(result, 'D', getAttribute(UCOL_NUMERIC_COLLATION, errorCode), errorCode);
    }
    if(attributeHasBeenSetExplicitly(UCOL_CASE_LEVEL)) {
        appendAttribute(result, 'E', getAttribute(UCOL_CASE_LEVEL, errorCode), errorCode);
    }
    if(attributeHasBeenSetExplicitly(UCOL_FRENCH_COLLATION)) {
        appendAttribute(result, 'F', getAttribute(UCOL_FRENCH_COLLATION, errorCode), errorCode);
    }
    // Note: UCOL_HIRAGANA_QUATERNARY_MODE is deprecated and never changes away from default.
    length = uloc_getKeywordValue(resultLocale, 'collation', subtag, UPRV_LENGTHOF(subtag), &errorCode);
    appendSubtag(result, 'K', subtag, length, errorCode);
    length = uloc_getLanguage(resultLocale, subtag, UPRV_LENGTHOF(subtag), &errorCode);
    appendSubtag(result, 'L', subtag, length, errorCode);
    if(attributeHasBeenSetExplicitly(UCOL_NORMALIZATION_MODE)) {
        appendAttribute(result, 'N', getAttribute(UCOL_NORMALIZATION_MODE, errorCode), errorCode);
    }
    length = uloc_getCountry(resultLocale, subtag, UPRV_LENGTHOF(subtag), &errorCode);
    appendSubtag(result, 'R', subtag, length, errorCode);
    if(attributeHasBeenSetExplicitly(UCOL_STRENGTH)) {
        appendAttribute(result, 'S', getAttribute(UCOL_STRENGTH, errorCode), errorCode);
    }
    length = uloc_getVariant(resultLocale, subtag, UPRV_LENGTHOF(subtag), &errorCode);
    appendSubtag(result, 'V', subtag, length, errorCode);
    length = uloc_getScript(resultLocale, subtag, UPRV_LENGTHOF(subtag), &errorCode);
    appendSubtag(result, 'Z', subtag, length, errorCode);
    
    static UBool copyAsSuperscript(
        const UnicodeString &s,
        int32_t beginIndex,
        int32_t endIndex,
        UnicodeString &result,
        UErrorCode &status) {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    for (int32_t i = beginIndex; i < endIndex;) {
        UChar32 c = s.char32At(i);
        int32_t digit = u_charDigitValue(c);
        if (digit < 0) {
            status = U_INVALID_CHAR_FOUND;
            return FALSE;
        }
        result.append(kSuperscriptDigits[digit]);
        i += U16_LENGTH(c);
    }
    return TRUE;
}
    
    U_NAMESPACE_END
    
    #include 'unicode/uniset.h'
#include 'unicode/udat.h'
#include 'cmemory.h'
#include 'uassert.h'
#include 'ucln_in.h'
#include 'umutex.h'