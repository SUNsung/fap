
        
          if (!description.empty()) {
    auto I = hideByDescription.find(description);
    if (I != hideByDescription.end())
      return I->getValue();
  }
    
    
    
      ArrayRef<StringRef> getTags() const {
    return llvm::makeArrayRef(Parts.Tags.begin(), Parts.Tags.end());
  }
    
    
    {  StringRef getReceiverUSR() const {
    for (auto Relation: Relations) {
      if (Relation.roles & (SymbolRoleSet) SymbolRole::RelationReceivedBy)
        return Relation.USR;
    }
    return StringRef();
  }
};
    
    // Like ASSERT_DEATH, but continues on to successive tests in the
// test case, if any:
# define EXPECT_DEATH(statement, regex) \
    EXPECT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    
    {    // Then prints the value itself.
    UniversalPrint(value, os);
  }
    
      // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath('dir/file.exe').RemoveExtension('EXE') returns
  // FilePath('dir/file'). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(const char* extension) const;
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
    template <GTEST_$(n)_TYPENAMES_(T), GTEST_$(n)_TYPENAMES_(U)>
inline bool operator==(const GTEST_$(n)_TUPLE_(T)& t,
                       const GTEST_$(n)_TUPLE_(U)& u) {
  return gtest_internal::SameSizeTuplePrefixComparator<
      tuple_size<GTEST_$(n)_TUPLE_(T) >::value,
      tuple_size<GTEST_$(n)_TUPLE_(U) >::value>::Eq(t, u);
}
    
      // Now, we have that n is odd and n >= 3.
    
    
    {    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << 'Leaked ' << difference << ' unit(s) of Water!';
  }
    
      void ResetStub(bool round_robin) {
    ChannelArguments args;
    if (round_robin) args.SetLoadBalancingPolicyName('round_robin');
    std::ostringstream uri;
    uri << 'ipv4:///';
    for (size_t i = 0; i < servers_.size() - 1; ++i) {
      uri << '127.0.0.1:' << servers_[i]->port_ << ',';
    }
    uri << '127.0.0.1:' << servers_[servers_.size() - 1]->port_;
    channel_ =
        CreateCustomChannel(uri.str(), InsecureChannelCredentials(), args);
    stub_ = grpc::testing::EchoTestService::NewStub(channel_);
  }
    
    #ifndef GRPC_TEST_CPP_UTIL_CREATE_TEST_CHANNEL_H
#define GRPC_TEST_CPP_UTIL_CREATE_TEST_CHANNEL_H
    
        void Proceed() {
      if (status_ == CREATE) {
        // Make this instance progress to the PROCESS state.
        status_ = PROCESS;
    }
    }
    
      // Is it the expected marker? If not, something bad happened.
  if (c != (m_next_restart_num + M_RST0))
    stop_decoding(JPGD_BAD_RESTART_MARKER);
    
    static const vorbis_info_residue0 _residue_44p_lo={
  0,-1, -1, 7,-1,-1,
  /* 0   1   2   3   4   5   6   7   8  */
  {0},
  {-1},
  {  0,  1,  2,  7, 17, 31},
  {  0,  0, 99,  7, 17, 31},
};
    
    static const static_bookblock _resbook_8s_0={
  {
    {0},
    {0,0,&_8c0_s_p1_0},
    {0},
    {0,0,&_8c0_s_p3_0},
    {0,0,&_8c0_s_p4_0},
    {0,0,&_8c0_s_p5_0},
    {0,0,&_8c0_s_p6_0},
    {&_8c0_s_p7_0,&_8c0_s_p7_1},
    {&_8c0_s_p8_0,&_8c0_s_p8_1},
    {&_8c0_s_p9_0,&_8c0_s_p9_1,&_8c0_s_p9_2}
   }
};
static const static_bookblock _resbook_8s_1={
  {
    {0},
    {0,0,&_8c1_s_p1_0},
    {0},
    {0,0,&_8c1_s_p3_0},
    {0,0,&_8c1_s_p4_0},
    {0,0,&_8c1_s_p5_0},
    {0,0,&_8c1_s_p6_0},
    {&_8c1_s_p7_0,&_8c1_s_p7_1},
    {&_8c1_s_p8_0,&_8c1_s_p8_1},
    {&_8c1_s_p9_0,&_8c1_s_p9_1,&_8c1_s_p9_2}
   }
};
    
      /**
   * @brief Bind a registered EventSubscriber member function to a Subscription.
   *
   * @param entry A templated EventSubscriber member function.
   * @param sc The subscription context.
   */
  template <class T, typename E>
  void subscribe(Status (T::*entry)(const std::shared_ptr<E>&, const SCRef&),
                 const SCRef& sc) {
    using std::placeholders::_1;
    using std::placeholders::_2;
    using CallbackFunc =
        Status (T::*)(const EventContextRef&, const SubscriptionContextRef&);
    }
    
      /**
   * @brief Sets up the process as an osquery shell.
   *
   * The shell is lighter than a daemon and disables (by default) features.
   */
  void initShell() const;
    
    
    {
    {  c.reset();
}
}

    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    /*!
 * \brief global singleton of a random engine.
 *  This random engine is thread-local and
 *  only visible to current thread.
 */
GlobalRandomEngine& GlobalRandom(); // NOLINT(*)
    
    #include <xgboost/tree_updater.h>
#include <string>
#include <memory>
#include './param.h'
#include '../common/sync.h'
#include '../common/io.h'
    
      void DeleteInput(size_t Idx) {
    InputInfo &II = *Inputs[Idx];
    if (!OutputCorpus.empty() && II.MayDeleteFile)
      RemoveFile(DirPlusFile(OutputCorpus, Sha1ToString(II.Sha1)));
    Unit().swap(II.U);
    if (FeatureDebug)
      Printf('EVICTED %zd\n', Idx);
  }
    
      void HandleMalloc(size_t Size);
    
    
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
    
      // Dictionary provided by the user via -dict=DICT_FILE.
  Dictionary ManualDictionary;
  // Temporary dictionary modified by the fuzzer itself,
  // recreated periodically.
  Dictionary TempAutoDictionary;
  // Persistent dictionary modified by the fuzzer, consists of
  // entries that led to successfull discoveries in the past mutations.
  Dictionary PersistentAutoDictionary;
    
    
    {}  // namespace fuzzer
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_switch(uint64_t Val, uint64_t *Cases) {
  // Updates the value profile based on the relative position of Val and Cases.
  // We want to handle one random case at every call (handling all is slow).
  // Since none of the arguments contain any random bits we use a thread-local
  // counter to choose the random case to handle.
  static thread_local size_t Counter;
  Counter++;
  uint64_t N = Cases[0];
  uint64_t *Vals = Cases + 2;
  char *PC = (char*)__builtin_return_address(0);
  // We need a random number < N using Counter as a seed. But w/o DIV.
  // * find a power of two >= N
  // * mask Counter with this power of two.
  // * maybe subtract N.
  size_t Nlog = sizeof(long) * 8 - __builtin_clzl((long)N);
  size_t PowerOfTwoGeN = 1U << Nlog;
  assert(PowerOfTwoGeN >= N);
  size_t Idx = Counter & (PowerOfTwoGeN - 1);
  if (Idx >= N)
    Idx -= N;
  assert(Idx < N);
  uint64_t TwoIn32 = 1ULL << 32;
  if ((Val | Vals[Idx]) < TwoIn32)
    fuzzer::TPC.HandleCmp(PC + Idx, static_cast<uint32_t>(Val),
                          static_cast<uint32_t>(Vals[Idx]));
  else
    fuzzer::TPC.HandleCmp(PC + Idx, Val, Vals[Idx]);
}
    
      void PrintNewPCs();
  size_t GetNumPCs() const { return Min(kNumPCs, NumGuards + 1); }
  uintptr_t GetPC(size_t Idx) {
    assert(Idx < GetNumPCs());
    return PCs[Idx];
  }
    
    unsigned NumberOfCpuCores();
    
    
    {} // namespace aria2
    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
    
    {  bool currentTierAcceptsCompletedEvent() const;
};