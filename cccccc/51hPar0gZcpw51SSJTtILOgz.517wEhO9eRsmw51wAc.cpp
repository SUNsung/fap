
        
        static ApplyInst *replaceApplyInst(SILBuilder &B, SILLocation Loc,
                                   ApplyInst *OldAI,
                                   SILValue NewFn,
                                   SubstitutionMap NewSubs,
                                   ArrayRef<SILValue> NewArgs,
                                   ArrayRef<SILValue> NewArgBorrows) {
  auto *NewAI = B.createApply(Loc, NewFn, NewSubs, NewArgs,
                              OldAI->isNonThrowing());
    }
    
      SourceLoc LParenLoc, RParenLoc;
  size_t numParameters;
    
      {
    BCBlockRAII moduleBlock(S.Out, MODULE_DOC_BLOCK_ID, 2);
    S.writeDocHeader();
    {
      BCBlockRAII restoreBlock(S.Out, COMMENT_BLOCK_ID, 4);
      DeclGroupNameContext GroupContext(GroupInfoPath, S.M->getASTContext());
      comment_block::DeclCommentListLayout DeclCommentList(S.Out);
      writeDeclCommentTable(DeclCommentList, S.SF, S.M, GroupContext);
      comment_block::GroupNamesLayout GroupNames(S.Out);
    }
    }
    
    
    {} // end llvm namespace
    
      void appendFunctionSignature(AnyFunctionType *fn,
                               const ValueDecl *forDecl = nullptr);
    
    
    {}
#endif // SWIFT_AST_DIAGNOSTIC_SUPPRESSION_H
