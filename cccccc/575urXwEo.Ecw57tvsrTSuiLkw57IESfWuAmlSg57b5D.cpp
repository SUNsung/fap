
        
          /// Build the components of an Objective-C method descriptor for the given
  /// subscript's method implementations.
  void emitObjCSetterDescriptorParts(IRGenModule &IGM,
                                     SubscriptDecl *subscript,
                                     llvm::Constant *&selectorRef,
                                     llvm::Constant *&atEncoding,
                                     llvm::Constant *&impl);
    
        // Quickly see if copy has only one use and that use is a destroy_value. In
    // such a case, we can always eliminate both the copy and the destroy.
    if (auto *Op = CVI->getSingleUse()) {
      if (auto *DVI = dyn_cast<DestroyValueInst>(Op->getUser())) {
        DVI->eraseFromParent();
        CVI->eraseFromParent();
        NumEliminatedInsts += 2;
        continue;
      }
    }
    
      llvm::SetVector<const clang::FileEntry *> fileDependencies;
  // FIXME: This is not desirable because:
  // 1. It picks shim header files as file dependencies
  // 2. Having all the other swift files of the module as file dependencies ends
  //   up making all of them associated with all the other files as main files.
  //   It's better to associate each swift file with the unit that recorded it
  //   as the main one.
  // Keeping the code in case we want to revisit.
#if 0
  auto *module = primarySourceFile->getParentModule();
  collectFileDependencies(fileDependencies, dependencyTracker, module, fileMgr);
#endif
    
    /// Profile the substitution list for use in a folding set.
void profileSubstitutionList(llvm::FoldingSetNodeID &id, SubstitutionList subs);
    
    
    {  bool operator==(ConcreteDeclRef rhs) const {
    return Data == rhs.Data;
  }
  
  /// Dump a debug representation of this reference.
  void dump(raw_ostream &os);
  void dump() LLVM_ATTRIBUTE_USED;
};
    
    #endif // SWIFT_BASIC_DIAGNOSTICOPTIONS_H

    
    #endif

    
    void SetProxyConfigCallback(
    base::WaitableEvent* done,
    net::URLRequestContextGetter* url_request_context_getter,
    const net::ProxyConfig& proxy_config) {
  net::ProxyService* proxy_service =
      url_request_context_getter->GetURLRequestContext()->proxy_service();
  proxy_service->ResetConfigService(
      new net::ProxyConfigServiceFixed(proxy_config));
  done->Signal();
}
    
    namespace nwapi {
    }
    
    void DispatcherHost::OnSetForceClose(bool force, int* ret) {
  content::Shell* shell =
      content::Shell::FromRenderViewHost(render_view_host());
  shell->set_force_close(force);
  *ret = 0;
}
    
       bool HasIcon(int command_id) override;
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
    #ifndef CAFFE_LAYER_FACTORY_H_
#define CAFFE_LAYER_FACTORY_H_
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/lrn_layer.hpp'
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif

    
    String TimeStamp::CurrentMicroTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
  char ret[100];
  snprintf(ret, 100, '%.8F %ld', (double)tp.tv_usec / 1000000, tp.tv_sec);
  return String(ret, CopyString);
}
    
    //////////////////////////////////////////////////////////////////////
    
      if ((noffset > 0 && noffset > mbfl_strlen(&mbs_haystack)) ||
      (noffset < 0 && -noffset > mbfl_strlen(&mbs_haystack))) {
    raise_notice('Offset is greater than the length of haystack string');
    return false;
  }
    
    #include 'hphp/util/type-scan.h'
    
    ALWAYS_INLINE
void MixedArray::getArrayElm(ssize_t pos,
                            TypedValue* valOut,
                            TypedValue* keyOut) const {
  assert(size_t(pos) < m_used);
  auto& elm = data()[pos];
  auto const cur = tvToCell(&elm.data);
  cellDup(*cur, *valOut);
  cellCopy(getElmKey(elm), *keyOut);
}
    
    
    {
    {} // namespace fs
} // namespace folly

    
    // Parse the value of a pagesize mount option
// Format: number, optional K/M/G/T suffix, trailing junk allowed
size_t parsePageSizeValue(StringPiece value) {
  static const boost::regex regex(R'!((\d+)([kmgt])?.*)!', boost::regex::icase);
  boost::cmatch match;
  if (!boost::regex_match(value.begin(), value.end(), match, regex)) {
    throw std::runtime_error('Invalid pagesize option');
  }
  char c = '\0';
  if (match.length(2) != 0) {
    c = char(tolower(value[size_t(match.position(2))]));
  }
  StringPiece numStr(value.data() + match.position(1), size_t(match.length(1)));
  auto const size = to<size_t>(numStr);
  auto const mult = [c] {
    switch (c) {
      case 't':
        return 1ull << 40;
      case 'g':
        return 1ull << 30;
      case 'm':
        return 1ull << 20;
      case 'k':
        return 1ull << 10;
      default:
        return 1ull << 0;
    }
  }();
  return size * mult;
}
    
    
    {  size_t size = 0;
  fs::path mountPoint;
  dev_t device = 0;
};
    
      std::shared_ptr<LogHandler> createHandler(const Options& options) override;
    
    
    {} // namespace folly

    
    LogCategory::LogCategory(StringPiece name, LogCategory* parent)
    : effectiveLevel_{parent->getEffectiveLevel()},
      level_{static_cast<uint32_t>(LogLevel::MAX_LEVEL) | FLAG_INHERIT},
      parent_{parent},
      name_{LogName::canonicalize(name)},
      db_{parent->getDB()},
      nextSibling_{parent_->firstChild_} {
  parent_->firstChild_ = this;
}
    
      /**
   * Whether this category should inherit its effective log level from its
   * parent category, if the parent category has a more verbose log level.
   */
  bool inheritParentLevel{true};
    
    namespace folly {
    }
    
    #include 'FuzzerDefs.h'
#include 'FuzzerIO.h'
#include 'FuzzerRandom.h'
#include 'FuzzerSHA1.h'
#include 'FuzzerTracePC.h'
#include <numeric>
#include <random>
#include <unordered_set>
    
    #define LIBFUZZER_POSIX LIBFUZZER_APPLE || LIBFUZZER_LINUX
    
    #include 'FuzzerDefs.h'
#include 'FuzzerIO.h'
#include 'FuzzerUtil.h'
#include <algorithm>
#include <limits>
    
    #endif

    
      DWORD LastError = GetLastError();
  if (LastError != ERROR_NO_MORE_FILES)
    Printf('FindNextFileA failed (Error code: %lu).\n', LastError);
    
    void Fuzzer::RereadOutputCorpus(size_t MaxSize) {
  if (Options.OutputCorpus.empty() || !Options.ReloadIntervalSec) return;
  std::vector<Unit> AdditionalCorpus;
  ReadDirToVectorOfUnits(Options.OutputCorpus.c_str(), &AdditionalCorpus,
                         &EpochOfLastReadOfOutputCorpus, MaxSize,
                         /*ExitOnError*/ false);
  if (Options.Verbosity >= 2)
    Printf('Reload: read %zd new units.\n', AdditionalCorpus.size());
  bool Reloaded = false;
  for (auto &U : AdditionalCorpus) {
    if (U.size() > MaxSize)
      U.resize(MaxSize);
    if (!Corpus.HasUnit(U)) {
      if (size_t NumFeatures = RunOne(U)) {
        CheckExitOnSrcPosOrItem();
        Corpus.AddToCorpus(U, NumFeatures);
        Reloaded = true;
      }
    }
  }
  if (Reloaded)
    PrintStats('RELOAD');
}
    
    
    {  std::ofstream OF(CFPath, std::ofstream::out | std::ofstream::app);
  for (size_t i = M.FirstNotProcessedFile; i < M.Files.size(); i++) {
    auto U = FileToVector(M.Files[i].Name);
    if (U.size() > MaxInputLen) {
      U.resize(MaxInputLen);
      U.shrink_to_fit();
    }
    std::ostringstream StartedLine;
    // Write the pre-run marker.
    OF << 'STARTED ' << std::dec << i << ' ' << U.size() << '\n';
    OF.flush();  // Flush is important since ExecuteCommand may crash.
    // Run.
    TPC.ResetMaps();
    ExecuteCallback(U.data(), U.size());
    // Collect coverage.
    std::set<size_t> Features;
    TPC.CollectFeatures([&](size_t Feature) -> bool {
      Features.insert(Feature);
      return true;
    });
    // Show stats.
    TotalNumberOfRuns++;
    if (!(TotalNumberOfRuns & (TotalNumberOfRuns - 1)))
      PrintStats('pulse ');
    // Write the post-run marker and the coverage.
    OF << 'DONE ' << i;
    for (size_t F : Features)
      OF << ' ' << std::hex << F;
    OF << '\n';
  }
}
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    namespace fuzzer {
    }
    
    static TraceState *TS;
    
    // There is no header for this on macOS so declare here
extern 'C' char **environ;