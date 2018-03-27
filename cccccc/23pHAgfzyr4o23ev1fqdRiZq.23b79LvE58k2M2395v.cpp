
        
        
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    using namespace swift;
    
      /// The diagnostics are returned in source-order.
  ArrayRef<DiagnosticEntryInfo> getDiagnosticsForBuffer(unsigned BufferID) const {
    ArrayRef<DiagnosticEntryInfo> Diags;
    auto DiagFound = BufferDiagnostics.find(BufferID);
    if (DiagFound != BufferDiagnostics.end())
      Diags = DiagFound->second;
    return Diags;
  }
    
      // The following strings are guaranteed to live at least as long as the
  // current indexing action.
  StringRef name;
  StringRef USR; // USR may be safely compared by pointer.
  StringRef group;
    
      /// Add a #line-defined virtual file region.
  ///
  /// By default, this region continues to the end of the buffer.
  ///
  /// \returns True if the new file was added, false if the file already exists.
  /// The name and line offset must match exactly in that case.
  ///
  /// \sa closeVirtualFile.
  bool openVirtualFile(SourceLoc loc, StringRef name, int lineOffset);
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    	m_world->SetAllowSleeping(settings->enableSleep > 0);
	m_world->SetWarmStarting(settings->enableWarmStarting > 0);
	m_world->SetContinuousPhysics(settings->enableContinuous > 0);
	m_world->SetSubStepping(settings->enableSubStepping > 0);
    
    		for (int32 i = 0; i < 2; ++i)
		{
			b2Vec2 vertices[3];
			vertices[0].Set(-0.5f, 0.0f);
			vertices[1].Set(0.5f, 0.0f);
			vertices[2].Set(0.0f, 1.5f);
    }