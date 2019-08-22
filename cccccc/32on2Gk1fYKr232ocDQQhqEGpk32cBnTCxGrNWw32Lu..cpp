
        
        void SILGenModule::emitLazyConformancesForFunction(SILFunction *F) {
  LazyConformanceEmitter emitter(*this);
    }
    
    /// This describes a list of parameters.  Each parameter descriptor is tail
/// allocated onto this list.
class alignas(ParamDecl *) ParameterList final :
    private llvm::TrailingObjects<ParameterList, ParamDecl *> {
  friend TrailingObjects;
    }
    
    KNOWN_STDLIB_TYPE_DECL(AnyKeyPath, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(PartialKeyPath, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyPath, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(WritableKeyPath, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(ReferenceWritableKeyPath, NominalTypeDecl, 2)
    
            // FIXME: This code needs to be cleaned up and updated
        // to make it work for 32 bit platforms.
        if (SectionName != '.sw5cptr' && SectionName != '.sw5bltn') {
          Begin += 8;
          End -= 8;
        }
    
    void TypeRefBuilder::dumpCaptureSection(std::ostream &OS) {
  for (const auto &sections : ReflectionInfos) {
    uint64_t TypeRefOffset = sections.Capture.SectionOffset
                           - sections.TypeReference.SectionOffset;
    for (const auto &descriptor : sections.Capture.Metadata) {
      auto info = getClosureContextInfo(descriptor, TypeRefOffset);
      info.dump(OS);
    }
  }
}
    
    #endif // SWIFT_ABI_CLASS_H
