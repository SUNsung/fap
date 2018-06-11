
        
        
    {  virtual SILDebuggerClient *getAsSILDebuggerClient() = 0;
private:
  virtual void anchor();
};
    
    #endif

    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    struct IndexRelation {
  const Decl *decl;
  SymbolInfo symInfo;
  SymbolRoleSet roles = SymbolRoleSet(0);
    }
    
      static ResultPlanPtr computeResultPlan(SILGenFunction &SGF,
                                         const CalleeTypeInfo &calleeTypeInfo,
                                         SILLocation loc,
                                         SGFContext evalContext);
    
    template <typename T>
void HostDeviceVector<T>::Copy(const std::vector<T>& other) {
  CHECK_EQ(Size(), other.size());
  std::copy(other.begin(), other.end(), HostVector().begin());
}
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    // metrics
#include '../src/metric/metric.cc'
#include '../src/metric/elementwise_metric.cc'
#include '../src/metric/multiclass_metric.cc'
#include '../src/metric/rank_metric.cc'
    
    // redefines the logging macro if not existed
#ifndef LOG
#define LOG(severity) LOG_##severity.stream()
#endif