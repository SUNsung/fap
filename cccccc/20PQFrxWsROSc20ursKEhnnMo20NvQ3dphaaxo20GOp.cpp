
        
          /// DebuggerClient is consulted at two times during name
  /// lookup.  This is the first time: after all names in a
  /// source file have been checked but before external
  /// Modules are checked.  The results in the ResultVector will
  /// be consulted first.  Return true if results have been added
  /// to RV.
  /// FIXME: I don't think this ever does anything useful.
  virtual bool lookupOverrides(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
      /// The list of regular users from the last run of the checker.
  llvm::SmallVector<SILInstruction *, 16> LifetimeEndingUsers;
    
        // Extra copy values that we should visit recursively.
    llvm::SmallVector<CopyValueInst *, 8> NewCopyInsts;
    llvm::SmallVector<SILInstruction *, 8> NewBorrowInsts;
    if (!all_of(Checker.RegularUsers, [&](SILInstruction *I) -> bool {
          if (auto *CVI = dyn_cast<CopyValueInst>(I)) {
            NewCopyInsts.push_back(CVI);
            return true;
          }
    }
    
      ArrayRef<const MarkupASTNode *> getChildren() const {
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren};
  }
    
    /// Options for controlling diagnostics.
class DiagnosticOptions {
public:
  /// Indicates whether textual diagnostics should use color.
  bool UseColor = false;
    }
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    public:
  void setInputBufferIDs(ArrayRef<unsigned> BufferIDs) {
    InputBufIDs.append(BufferIDs.begin(), BufferIDs.end());
    std::sort(InputBufIDs.begin(), InputBufIDs.end());
  }
    
        HHVM_FE(fb_setprofile);
    HHVM_FE(xhprof_frame_begin);
    HHVM_FE(xhprof_frame_end);
    HHVM_FE(xhprof_enable);
    HHVM_FE(xhprof_disable);
    HHVM_FE(xhprof_network_enable);
    HHVM_FE(xhprof_network_disable);
    HHVM_FE(xhprof_sample_enable);
    HHVM_FE(xhprof_sample_disable);
    
    public:
  explicit Timer(Type type, const char *name = nullptr, ReportType r = Log);
  ~Timer();