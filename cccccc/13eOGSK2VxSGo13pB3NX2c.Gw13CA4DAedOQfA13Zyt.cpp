
        
          void visitTupleElementAddrInst(TupleElementAddrInst *TEAI) {
    SGM.useConformancesFromType(TEAI->getOperand()->getType().getASTType());
  }
    
    #endif // SWIFT_SIL_PROFILER_H

    
    #if defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__)
static inline locale_t getCLocale() {
  // On these platforms convenience functions from xlocale.h interpret nullptr
  // as C locale.
  return nullptr;
}
#elif defined(__CYGWIN__) || defined(__HAIKU__)
// In Cygwin, getCLocale() is not used.
#elif defined(_WIN32)
static _locale_t makeCLocale() {
  _locale_t CLocale = _create_locale(LC_ALL, 'C');
  if (!CLocale) {
    swift::crash('makeCLocale: _create_locale() returned a null pointer');
  }
  return CLocale;
}
    
    public:
  static constexpr bool offsetCanBeInline(unsigned offset) {
    return offset <= _SwiftKeyPathComponentHeader_MaximumOffsetPayload;
  }
    
    protected:
  /// Determine the total size to allocate.
  static size_t totalSizeToAlloc(ArrayRef<Identifier> argLabels,
                                 ArrayRef<SourceLoc> argLabelLocs,
                                 bool hasTrailingClosure) {
    return TrailingObjects::template totalSizeToAlloc<Identifier, SourceLoc>(
        argLabels.size(), argLabelLocs.size());
  }