
        
        class SILDebuggerClient;
    
      // Imports from -import-name such as Playground auxiliary sources are treated
  // specially by applying import depth 0.
  llvm::StringSet<> auxImports;
  for (StringRef moduleName :
       invocation.getFrontendOptions().ImplicitImportModuleNames)
    auxImports.insert(moduleName);
    
      /// The list of regular users from the last run of the checker.
  llvm::SmallVector<SILInstruction *, 16> RegularUsers;
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
      size_t NumChildren;
    
    SILDebugScope::SILDebugScope(SILLocation Loc, SILFunction *SILFn,
                             const SILDebugScope *ParentScope ,
                             const SILDebugScope *InlinedCallSite)
    : Loc(Loc), InlinedCallSite(InlinedCallSite) {
  if (ParentScope)
    Parent = ParentScope;
  else {
    assert(SILFn && 'no parent provided');
    Parent = SILFn;
  }
}
    
    using clang::index::SymbolKind;
using clang::index::SymbolLanguage;
using clang::index::SymbolSubKind;
using clang::index::SymbolProperty;
using clang::index::SymbolPropertySet;
using clang::index::SymbolRole;
using clang::index::SymbolRoleSet;
using clang::index::SymbolRelation;
using clang::index::SymbolInfo;
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
    #ifndef TESSERACT_CCUTIL_QRSEQUENCE_H_
#define TESSERACT_CCUTIL_QRSEQUENCE_H_
    
      // Setup the map for the given indexed_features that have been indexed by
  // feature_map. After use, use Set(..., false) to reset to the initial state
  // as this is faster than calling Init for sparse spaces.
  void Set(const GenericVector<int>& indexed_features,
           int canonical_count, bool value);
    
    
#ifndef TESSERACT_TEXTORD_BLOBGRID_H_
#define TESSERACT_TEXTORD_BLOBGRID_H_
    
      /**
   * In extreme cases only, usually with a subclass of Thresholder, it
   * is possible to provide a different Thresholder. The Thresholder may
   * be preloaded with an image, settings etc, or they may be set after.
   * Note that Tesseract takes ownership of the Thresholder and will
   * delete it when it it is replaced or the API is destructed.
   */
  void SetThresholder(ImageThresholder* thresholder) {
    delete thresholder_;
    thresholder_ = thresholder;
    ClearResults();
  }
    
        /**
     * Starts a new document with the given title.
     * This clears the contents of the output data.
     * Title should use UTF-8 encoding.
     */
    bool BeginDocument(const char* title);
    
    #include 'ATen/Tensor.h'
#include 'ATen/Context.h'
    
    bool cudnn_is_acceptable(const Tensor& self) {
  if (!globalContext().userEnabledCuDNN()) return false;
  if (!self.is_cuda()) return false;
  auto st = self.type().scalarType();
  if (!(st == kDouble || st == kFloat || st == kHalf)) return false;
  if (!AT_CUDNN_ENABLED()) return false;
  // NB: In the old Python code, there was also a test to see if the
  // cuDNN library was actually dynamically linked or not.  I'm not
  // sure if we can actually test this.
  return true;
}
    
    #define THCPDoubleStorage_CData(obj)  (obj)->cdata
#define THCPFloatStorage_CData(obj)   (obj)->cdata
#define THCPLongStorage_CData(obj)    (obj)->cdata
#define THCPIntStorage_CData(obj)     (obj)->cdata
#define THCPShortStorage_CData(obj)   (obj)->cdata
#define THCPCharStorage_CData(obj)    (obj)->cdata
#define THCPByteStorage_CData(obj)    (obj)->cdata