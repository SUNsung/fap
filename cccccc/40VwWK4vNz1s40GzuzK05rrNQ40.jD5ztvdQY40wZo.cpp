
        
          DebuggerClient(ASTContext &C) : Ctx(C) { }
  virtual ~DebuggerClient() = default;
  
  // DebuggerClient is consulted at the beginning of the parsing
  // of various DeclKinds to see whether the decl should be parsed
  // in the global context rather than the current context.
  // This question will only be asked if the decl's current context
  // is a function marked with the LLDBDebuggerFunction attribute.
  virtual bool shouldGlobalize(Identifier Name, DeclKind kind) = 0;
  
  virtual void didGlobalize (Decl *Decl) = 0;
    
      void compute();
    
    NS_ASSUME_NONNULL_BEGIN
    
      IndexUnitWriter unitWriter(fileMgr, indexStorePath,
    'swift', swiftVersion, indexUnitToken, module->getNameStr(),
    mainFile, isSystem, /*isModuleUnit=*/false, isDebugCompilation,
    targetTriple, sysrootPath, getModuleInfoFromOpaqueModule);
    
    #ifndef LLVM_SOURCEKIT_LIB_SWIFTLANG_SWIFTEDITORDIAGCONSUMER_H
#define LLVM_SOURCEKIT_LIB_SWIFTLANG_SWIFTEDITORDIAGCONSUMER_H