
        
          /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
    
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    #include 'llvm/ADT/SetVector.h'
    
    // NOTE: this class is NOT meant to be used in threaded contexts.
@interface ObjectBehaviorVerifier : NSObject
@property (readonly) BOOL wasRetained;
@property (readonly) BOOL wasCopied;
@property (readonly) BOOL wasMutableCopied;
    
      Symbol *getSymbol(size_t index) {
    assert(index < symbols.size());
    return &symbols[index];
  }
    
      size_t NumChildren;
  unsigned Level;
    
    
    {
    {  bool didErrorOccur() {
    return DidErrorOccur;
  }
};
  
}
    
    /// A shorthand to clearly indicate that a value is a reference counted and
/// heap-allocated.
template <typename Inner>
using RC = llvm::IntrusiveRefCntPtr<Inner>;
    
    class CanType;
class SILValue;