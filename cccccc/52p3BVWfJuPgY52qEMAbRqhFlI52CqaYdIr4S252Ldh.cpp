
        
        namespace llvm {
template<> struct DenseMapInfo<DefaultCacheKey> {
  static inline DefaultCacheKey getEmptyKey() {
    return { DenseMapInfo<void*>::getEmptyKey(), nullptr };
  }
  static inline DefaultCacheKey getTombstoneKey() {
    return { DenseMapInfo<void*>::getTombstoneKey(), nullptr };
  }
  static unsigned getHashValue(const DefaultCacheKey &Val) {
    uintptr_t Hash = Val.CBs->keyHashCB(Val.Key, nullptr);
    return DenseMapInfo<uintptr_t>::getHashValue(Hash);
  }
  static bool isEqual(const DefaultCacheKey &LHS, const DefaultCacheKey &RHS) {
    if (LHS.Key == RHS.Key)
      return true;
    if (LHS.Key == DenseMapInfo<void*>::getEmptyKey() ||
        LHS.Key == DenseMapInfo<void*>::getTombstoneKey() ||
        RHS.Key == DenseMapInfo<void*>::getEmptyKey() ||
        RHS.Key == DenseMapInfo<void*>::getTombstoneKey())
      return false;
    return LHS.CBs->keyIsEqualCB(LHS.Key, RHS.Key, nullptr);
  }
};
} // namespace llvm
    
    StringRef importer::getCFTypeName(
            const clang::TypedefNameDecl *decl) {
  if (auto pointee = CFPointeeInfo::classifyTypedef(decl)) {
    auto name = decl->getName();
    if (pointee.isRecord() || pointee.isTypedef())
      if (name.endswith(SWIFT_CFTYPE_SUFFIX))
        return name.drop_back(strlen(SWIFT_CFTYPE_SUFFIX));
    }
    }
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
      auto mirrorIter = mirroredBuffers.find(buffer);
  if (mirrorIter != mirroredBuffers.end()) {
    mirrorID = mirrorIter->second;
  } else {
    std::unique_ptr<llvm::MemoryBuffer> mirrorBuffer{
      llvm::MemoryBuffer::getMemBuffer(buffer->getBuffer(),
                                       buffer->getBufferIdentifier(),
                                       /*RequiresNullTerminator=*/true)
    };
    mirrorID = swiftSrcMgr.addNewSourceBuffer(std::move(mirrorBuffer));
    mirroredBuffers[buffer] = mirrorID;
  }
  loc = swiftSrcMgr.getLocForOffset(mirrorID, decomposedLoc.second);
    
    void GeneratePCHJobAction::anchor() {}

    
    
    {public:
  Windows(const Driver &D, const llvm::Triple &Triple) : ToolChain(D, Triple) {}
  ~Windows() = default;
  std::string sanitizerRuntimeLibName(StringRef Sanitizer,
                                      bool shared = true) const override;
};
    
    //////////////////////////////////////////////////////////////////////
    
    namespace php {
struct Program;
}
struct Index;
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    ///////////////////////////////////////////////////////////////////////////////
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 0, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 0, rate, fillCols);
}
    
    /*
 * Attempt to log an entry to the perf warning service.
 *
 * If StructuredLog::enabled() returns false or this event is discarded by the
 * effective sample rate, nothing will be logged. If both of those checks pass,
 * fillCols will be passed a StructuredLogEntry& to populate, which will then
 * be logged. The column names 'event_name' and 'priority' are reserved and
 * will be overwritten is fillCols() sets them.
 *
 * The effective sample rate is determined by Eval.PerfWarningSampleRate * rate
 * (or kDefaultPerfWarningRate for the overloads that don't take a rate). If
 * the effective sample rate is 0, all events will be discarded.
 */
template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
    ScriptSet &ScriptSet::reset(UScriptCode script, UErrorCode &status) {
    if (U_FAILURE(status)) {
        return *this;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    bits[index] &= ~bit;
    return *this;
}
    
    SelectFormat::SelectFormat(const UnicodeString& pat,
                           UErrorCode& status) : msgPattern(status) {
   applyPattern(pat, status);
}
    
    class Calendar;
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
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
    
    
/**
 * A formatter for small, positive integers.
 */
class U_I18N_API SmallIntFormatter : public UMemory {
public:
    /**
     * Estimates the actual digit count needed to format positiveValue
     * using the given range of digit counts.
     * Returns a value that is at least the actual digit count needed.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static int32_t estimateDigitCount(
            int32_t positiveValue, const IntDigitCountRange &range);
    }
    
            if (!cal.isSet(UCAL_HOUR) && !cal.isSet(UCAL_HOUR_OF_DAY)) {
            // If hour is not set, set time to the midpoint of current day period, overwriting
            // minutes if it's set.
            double midPoint = ruleSet->getMidPointForDayPeriod(dayPeriod, status);
    }
    
    #include 'unicode/udat.h'
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}