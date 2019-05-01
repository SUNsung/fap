
        
        void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
        if (node->Further || node->Right) {
      IndentScope ms(this, (childKind == ChildKind::Right ||
                            childKind == ChildKind::Further ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
    }
    
        void emitDiagnosticMessage(clang::FullSourceLoc Loc,
                               clang::PresumedLoc PLoc,
                               clang::DiagnosticsEngine::Level Level,
                               StringRef Message,
                               ArrayRef<clang::CharSourceRange> Ranges,
                               clang::DiagOrStoredDiag Info) override {
      if (isInSwiftBuffers(Loc)) {
        // FIXME: Ideally, we'd report non-suppressed diagnostics on synthetic
        // buffers, printing their names (eg. <swift-imported-modules>:...) but
        // this risks printing _excerpts_ of those buffers to stderr too; at
        // present the synthetic buffers are 'large blocks of null bytes' which
        // we definitely don't want to print out. So until we have some clever
        // way to print the name but suppress printing excerpts, we just replace
        // the Loc with an invalid one here, which suppresses both.
        Loc = clang::FullSourceLoc();
        if (shouldSuppressDiagInSwiftBuffers(Info))
          return;
      }
      callback(Loc, Level, Message);
    }
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
    class LLVM_LIBRARY_VISIBILITY Windows : public ToolChain {
protected:
  InvocationInfo constructInvocation(const LinkJobAction &job,
                                     const JobContext &context) const override;
    }
    
      /// Emits an error for each file in \p unusedPrimaryFiles.
  ///
  /// \returns true if \p unusedPrimaryFiles is non-empty.
  bool diagnoseUnusedPrimaryFiles(std::set<StringRef> unusedPrimaryFiles);
    
            unordered_map<int,int> record;
        for(int i = 0 ; i < nums.size() ; i ++)
            record[nums[i]] = i;
    
        ListNode* head = createLinkedList(arr, n);
    printLinkedList(head);
    
    
    {    return 0;
}
    
        head = Solution().swapPairs(head);
    printLinkedList(head);
    
    
    {
    {        delete dummyHead1;
        delete dummyHead2;
        return ret;
    }
};
    
    #include <iostream>
#include <vector>
#include <stack>
    
            stack<TreeNode*> stack, output;