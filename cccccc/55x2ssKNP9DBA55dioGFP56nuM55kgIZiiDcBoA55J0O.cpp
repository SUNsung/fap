
        
            if (isa<StructInst>(V) || isa<TupleInst>(V) || isa<EnumInst>(V)) {
      if (ResultType && ResultType != V->getType())
        return SILType();
      ResultType = V->getType();
      continue;
    }
    
      SILCoverageMap *CovMap = nullptr;
    
    
    {} // end swift namespace
    
    
    {#ifndef NDEBUG
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SourceManager &SM, llvm::raw_ostream &OS = llvm::errs(),
                            unsigned Indent = 0) const,
                  'only for use in the debugger');
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SILModule &Mod) const, 'only for use in the debugger');
#endif
};
    
    
    {  bool operator!=(FieldDescriptorIterator const &other) const {
    return !(*this == other);
  }
};
    
        const MetadataSource *MS = nullptr;
    if (i->hasMangledMetadataSource()) {
      auto MangledMetadataSource = i->getMangledMetadataSource(TypeRefOffset);
      MS = MetadataSource::decode(MSB, MangledMetadataSource);
    }
    
    #ifndef SWIFT_ABI_CLASS_H
#define SWIFT_ABI_CLASS_H
    
      constexpr KeyPathBufferHeader withHasReferencePrefix(bool hasPrefix) const {
    return (Data & ~_SwiftKeyPathBufferHeader_HasReferencePrefixFlag)
      | (hasPrefix ? _SwiftKeyPathBufferHeader_HasReferencePrefixFlag : 0);
  }
    
    class GenericRequirementFlags {
  uint32_t Value;
  
  explicit constexpr GenericRequirementFlags(uint32_t Value)
    : Value(Value) {}
public:
  constexpr GenericRequirementFlags(GenericRequirementKind kind,
                                    bool hasKeyArgument,
                                    bool hasExtraArgument)
    : GenericRequirementFlags(GenericRequirementFlags(0)
                         .withKind(kind)
                         .withKeyArgument(hasKeyArgument)
                         .withExtraArgument(hasExtraArgument))
  {}
  
  constexpr bool hasKeyArgument() const {
    return (Value & 0x80u) != 0;
  }
    }
    
    class DiagnosticConsumer;
class DiagnosticEngine;
    
    // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    namespace nwapi {
    }
    
     private:
  ObjectManager* object_manager_;
    
    
    {  base::WaitableEvent done(base::WaitableEvent::ResetPolicy::AUTOMATIC,
                           base::WaitableEvent::InitialState::NOT_SIGNALED);
  base::PostTaskWithTraits(
      FROM_HERE, {content::BrowserThread::IO},
      base::BindOnce(&SetProxyConfigCallback, &done,
                 base::WrapRefCounted(context_getter), config));
  done.Wait();
  return true;
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
      bool NwScreenRegisterStreamFunction::RunNWSync(base::ListValue* response, std::string* error) {
    std::string id;
    EXTENSION_FUNCTION_VALIDATE(args_->GetString(0, &id));
    }
    
    void first(void) {
  printf('first\n');  // prints
  emscripten_sleep(1);
  longjmp(buf, 1);  // jumps back to where setjmp was called - making setjmp now
                    // return 1
}
    
      // Get the next PostScript token.  Returns false at end-of-stream.
  GBool getToken(char *buf, int size, int *length);
    
    void Page::displaySlice(OutputDev *out, double hDPI, double vDPI,
			int rotate, GBool useMediaBox, GBool crop,
			int sliceX, int sliceY, int sliceW, int sliceH,
			GBool printing, Catalog *catalog,
			GBool (*abortCheckCbk)(void *data),
			void *abortCheckCbkData,
                        GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
                        void *annotDisplayDecideCbkData) {
  Gfx *gfx;
  Object obj;
  Annots *annotList;
  int i;
  
  if (!out->checkPageSlice(this, hDPI, vDPI, rotate, useMediaBox, crop,
			   sliceX, sliceY, sliceW, sliceH,
			   printing, catalog,
			   abortCheckCbk, abortCheckCbkData)) {
    return;
  }
    }
    
    #ifndef PROFILE_DATA_H
#define PROFILE_DATA_H
    
      struct Color {
    double r, g, b;
  };
    
    
    {  opw = ownerPassword ? ownerPassword->getCString() : (char *)NULL;
  upw = userPassword ? userPassword->getCString() : (char *)NULL;
  if (!(*xsh->makeAuthData)(xsh->handlerData, docData, opw, upw, &authData)) {
    return NULL;
  }
  return authData;
}
    
      // Destructor
  ~Sound();
    
      // Returns the last rasterized bitmap, transferring ownership to the
  // caller.
  SplashBitmap *takeBitmap();