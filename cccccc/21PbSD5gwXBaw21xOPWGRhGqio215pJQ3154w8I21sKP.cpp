
        
        #ifndef KNOWN_STDLIB_TYPE_DECL
/// KNOWN_STDLIB_TYPE_DECL(NAME, DECL_CLASS, NUM_GENERIC_PARAMS)
///
/// The macro is expanded for each known standard library type. NAME is
/// bound to the unqualified name of the type. DECL_CLASS is bound to the
/// Decl subclass it is expected to be an instance of. NUM_GENERIC_PARAMS is
/// bound to the number of generic parameters the type is expected to have.
#define KNOWN_STDLIB_TYPE_DECL(NAME, DECL_CLASS, NUM_GENERIC_PARAMS)
#endif
    
      void emitAbstractFuncDecl(AbstractFunctionDecl *AFD);
  
  /// Generate code for a source file of the module.
  void emitSourceFile(SourceFile *sf);
  
  /// Generates code for the given FuncDecl and adds the
  /// SILFunction to the current SILModule under the name SILDeclRef(decl). For
  /// curried functions, curried entry point Functions are also generated and
  /// added to the current SILModule.
  void emitFunction(FuncDecl *fd);
  
  /// Generates code for the given closure expression and adds the
  /// SILFunction to the current SILModule under the name SILDeclRef(ce).
  SILFunction *emitClosure(AbstractClosureExpr *ce);
  /// Generates code for the given ConstructorDecl and adds
  /// the SILFunction to the current SILModule under the name SILDeclRef(decl).
  void emitConstructor(ConstructorDecl *decl);
    
      /// The metadata is ready for the layout of other types that store values
  /// of this type.
  ///
  /// In addition to the requirements of Abstract, metadata in this state
  /// must have a valid value witness table, meaning that its size,
  /// alignment, and basic type properties (such as POD-ness) have been
  /// computed.
  LayoutComplete = 0x3F,
    
        // Ignore first non-switch arg if it's not a standalone package.
    bool ignore_arg = !package->self_extract();
    for (unsigned i = 1; i < argv.size(); ++i) {
      if (ignore_arg && argv[i] == args[0]) {
        ignore_arg = false;
        continue;
      }
    }
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    #include 'content/nw/src/api/menu/menu.h'
    
    namespace {
    }
    
    #include 'extensions/browser/extension_function.h'
    
    namespace tesseract {
    }
    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
    const int kHistogramSize = 256;  // The size of a histogram of pixel values.
    
    #define           MAP_ACCEPT '1'
#define           MAP_REJECT_PERM '0'
#define           MAP_REJECT_TEMP '2'
#define           MAP_REJECT_POTENTIAL '3'
    
     private:
  // A hole in the heap exists at hole_index, and we want to fill it with the
  // given pair. SiftUp sifts the hole upward to the correct position and
  // returns the destination index without actually putting pair there.
  int SiftUp(int hole_index, const Pair& pair) {
    int parent;
    while (hole_index > 0 && pair < heap_[parent = ParentNode(hole_index)]) {
      heap_[hole_index] = heap_[parent];
      hole_index = parent;
    }
    return hole_index;
  }
    
    // Provides access to the ShapeTable that this classifier works with.
const ShapeTable* TessClassifier::GetShapeTable() const {
  return classify_->shape_table();
}
// Provides access to the UNICHARSET that this classifier works with.
// Only needs to be overridden if GetShapeTable() can return nullptr.
const UNICHARSET& TessClassifier::GetUnicharset() const {
  return classify_->unicharset;
}
    
    	void set_region_merge_size(float p_value);
	float get_region_merge_size() const;
    
    public:
	virtual size_t get_position() const; ///< get position in the file
	virtual size_t get_len() const; ///< get size of the file
    
    #ifdef ALSAMIDI_ENABLED
    
    
    {		list.push_back(name);
	}
    
    
    {	MIDIDriverCoreMidi();
	virtual ~MIDIDriverCoreMidi();
};
    
    	virtual PoolStringArray get_connected_inputs();
    
    static SDL_bool LocalReferenceHolder_IsActive(void) {
	return s_active > 0;
}
    
    	PowerAndroid();
	virtual ~PowerAndroid();
	static bool LocalReferenceHolder_Init(struct LocalReferenceHolder *refholder, JNIEnv *env);
	static struct LocalReferenceHolder LocalReferenceHolder_Setup(const char *func);
	static void LocalReferenceHolder_Cleanup(struct LocalReferenceHolder *refholder);
    
    public:
	PowerIphone();
	virtual ~PowerIphone();
    
    class SemaphoreIphone : public Semaphore {
    }
    
    #pragma once
    
    namespace mongo {
namespace {
    }
    }
    
    void TemporaryKVRecordStore::deleteTemporaryTable(OperationContext* opCtx) {
    // Need at least Global IS before calling into the storage engine, to protect against it being
    // destructed while we're using it.
    invariant(opCtx->lockState()->isReadLocked());
    }
    
                    // If we are positioned just before a new-line that is located at the
                //   end of input, succeed.
                UChar32 c = UTEXT_NEXT32(fInputText);
                if (UTEXT_GETNATIVEINDEX(fInputText) >= fAnchorLimit) {
                    if (isLineTerminator(c)) {
                        // If not in the middle of a CR/LF sequence
                        if ( !(c==0x0a && fp->fInputIdx>fAnchorStart && ((void)UTEXT_PREVIOUS32(fInputText), UTEXT_PREVIOUS32(fInputText))==0x0d)) {
                            // At new-line at end of input. Success
                            fHitEnd = TRUE;
                            fRequireEnd = TRUE;
    }
    }
    }
    
        case URX_STRING:
    case URX_STRING_I:
        {
            int32_t lengthOp       = fCompiledPat->elementAti(index+1);
            U_ASSERT(URX_TYPE(lengthOp) == URX_STRING_LEN);
            int32_t length = URX_VAL(lengthOp);
            UnicodeString str(fLiteralText, val, length);
            printf('%s', CStr(str)());
        }
        break;
    
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
    
    UnicodeString &ScientificNumberFormatter::format(
        const Formattable &number,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    UnicodeString original;
    FieldPositionIterator fpi;
    fDecimalFormat->format(number, original, &fpi, status);
    return fStyle->format(
            original,
            fpi,
            fPreExponent,
            *fStaticSets,
            appendTo,
            status);
}
    
    int32_t SearchIterator::first(UErrorCode &status)
{
    if (U_FAILURE(status)) {
        return USEARCH_DONE;
    }
    setOffset(0, status);
    return handleNext(0, status);
}
    
    Format* SelectFormat::clone() const
{
    return new SelectFormat(*this);
}
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        IDXGISwapChain1* swapChain1 = NULL;
    dxgiFactory->CreateSwapChainForHwnd(g_pd3dCommandQueue, hWnd, &sd, NULL, NULL, &swapChain1);
    swapChain1->QueryInterface(IID_PPV_ARGS(&g_pSwapChain));
    swapChain1->Release();
    dxgiFactory->Release();
    
    int main()
{
    // create JSON object
    json object =
    {
        {'the good', 'il buono'},
        {'the bad', 'il cattivo'},
        {'the ugly', 'il brutto'}
    };
    }
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }