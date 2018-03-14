
        
        void
SyntaxASTMap::recordSyntaxMapping(RC<syntax::SyntaxData> FromNode,
                                  ASTNode ToNode) {
  if (FromNode->getKind() == SyntaxKind::Unknown) {
    return;
  }
    }
    
    NS_ASSUME_NONNULL_END

    
    
    {  if (!failed && !recordFile.empty())
    callback(recordFile, SF->getFilename());
  return failed;
}
    
    public:
  static BlockQuote *create(MarkupContext &MC, ArrayRef<MarkupASTNode *> Children);
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
    namespace swift {
class Decl;
class ValueDecl;
enum class AccessorKind;
    }
    
    // Get render process host.
RenderProcessHost* GetRenderProcessHost() {
  RenderProcessHost* render_process_host = NULL;
  std::vector<Shell*> windows = Shell::windows();
  for (size_t i = 0; i < windows.size(); ++i) {
    if (!windows[i]->is_devtools()) {
      render_process_host = windows[i]->web_contents()->GetRenderProcessHost();
      break;
    }
  }
    }
    
    namespace base {
class DictionaryValue;
class ListValue;
}
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    
    {  net::CertificateList merged_trust_anchors(*params.additional_trust_anchors());
  merged_trust_anchors.insert(merged_trust_anchors.begin(),
                              trust_anchors_.begin(), trust_anchors_.end());
  net::CertVerifier::RequestParams new_params(
      params.certificate(), params.hostname(), params.flags(),
      params.ocsp_response(), merged_trust_anchors);
  int error = delegate_->Verify(new_params, crl_set, verify_result,
                                wrapped_callback, out_req, net_log);
  MaybeSignalAnchorUse(error, anchor_used_callback_, *verify_result);
  return error;
}
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    namespace nwapi {
    }
    
    
#include 'base/basictypes.h'
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    namespace {
    }
    
        cost__ = 9999;
    
    CV_EXPORTS Mat NormalizePixels(const Mat& imagePoints, const IntrinsicParams& param);
    
    
    {}
    
    #include '../../precomp.hpp'
    
    bool OutputImageComponent::IsAllZero() const {
  int numcoeffs = num_blocks_ * kDCTBlockSize;
  for (int i = 0; i < numcoeffs; ++i) {
    if (coeffs_[i] != 0) return false;
  }
  return true;
}
    
    namespace guetzli {
    }
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    // kIDCTMatrix[8*x+u] = alpha(u)*cos((2*x+1)*u*M_PI/16)*sqrt(2), with fixed 13
// bit precision, where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
// Some coefficients are off by +-1 to mimick libjpeg's behaviour.
static const int kIDCTMatrix[kDCTBlockSize] = {
  8192,  11363,  10703,   9633,   8192,   6437,   4433,   2260,
  8192,   9633,   4433,  -2259,  -8192, -11362, -10704,  -6436,
  8192,   6437,  -4433, -11362,  -8192,   2261,  10704,   9633,
  8192,   2260, -10703,  -6436,   8192,   9633,  -4433, -11363,
  8192,  -2260, -10703,   6436,   8192,  -9633,  -4433,  11363,
  8192,  -6437,  -4433,  11362,  -8192,  -2261,  10704,  -9633,
  8192,  -9633,   4433,   2259,  -8192,  11362, -10704,   6436,
  8192, -11363,  10703,  -9633,   8192,  -6437,   4433,  -2260,
};
    
    namespace {
    }
    
    #include <stdint.h>
#include <string.h>
#include <vector>
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    template <>
FutexResult Futex<std::atomic>::futexWaitImpl(
    uint32_t expected,
    system_clock::time_point const* absSystemTime,
    steady_clock::time_point const* absSteadyTime,
    uint32_t waitMask) {
#ifdef __linux__
  return nativeFutexWaitImpl(
      this, expected, absSystemTime, absSteadyTime, waitMask);
#else
  return emulatedFutexWaitImpl(
      this, expected, absSystemTime, absSteadyTime, waitMask);
#endif
}
    
        // By default jemalloc has 4 arenas per cpu, and then assigns each
    // thread to one of those arenas.  This means that in any service
    // that doesn't perform a lot of context switching, the chances that
    // another thread will be using the current thread's arena (and hence
    // doing the appropriate dirty-page purging) are low.  Some good
    // tuned configurations (such as that used by hhvm) use fewer arenas
    // and then pin threads to avoid contended access.  In that case,
    // purging the arenas is counter-productive.  We use the heuristic
    // that if narenas <= 2 * num_cpus then we shouldn't do anything here,
    // which detects when the narenas has been reduced from the default
    unsigned narenas;
    unsigned arenaForCurrent;
    size_t mib[3];
    size_t miblen = 3;
    
    TEST(AtomicSharedPtr, foo) {
  c_count = 0;
  d_count = 0;
  {
    atomic_shared_ptr<foo> fooptr;
    fooptr.store(make_shared<foo>());
    EXPECT_EQ(1, c_count);
    EXPECT_EQ(0, d_count);
    {
      auto res = fooptr.load();
      EXPECT_EQ(1, c_count);
      EXPECT_EQ(0, d_count);
    }
    EXPECT_EQ(1, c_count);
    EXPECT_EQ(0, d_count);
  }
  EXPECT_EQ(1, c_count);
  EXPECT_EQ(1, d_count);
}
    
    template <
    class T,
    class I,
    class U = std::decay_t<T>,
    std::enable_if_t<Not<std::is_base_of<PolyBase, U>>::value, int> = 0,
    std::enable_if_t<std::is_constructible<AddCvrefOf<U, I>, T>::value, int> =
        0,
    class = MembersOf<std::decay_t<I>, U>>
std::true_type modelsInterface_(int);
template <class T, class I>
std::false_type modelsInterface_(long);
    
    
    {
    {inline size_t qfind_first_byte_of_nosse(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  if (UNLIKELY(needles.empty() || haystack.empty())) {
    return std::string::npos;
  }
  // The thresholds below were empirically determined by benchmarking.
  // This is not an exact science since it depends on the CPU, the size of
  // needles, and the size of haystack.
  if ((needles.size() >= 4 && haystack.size() <= 10) ||
      (needles.size() >= 16 && haystack.size() <= 64) || needles.size() >= 32) {
    return qfind_first_byte_of_byteset(haystack, needles);
  }
  return qfind_first_byte_of_std(haystack, needles);
}
} // namespace detail
} // namespace folly

    
      __m128i arr1;
  if (HAYSTACK_ALIGNED) {
    arr1 = _mm_load_si128(
        reinterpret_cast<const __m128i*>(haystack.data() + blockStartIdx));
  } else {
    arr1 = _mm_loadu_si128(
        reinterpret_cast<const __m128i*>(haystack.data() + blockStartIdx));
  }
    
    /**
 * ScopeGuard is a general implementation of the 'Initialization is
 * Resource Acquisition' idiom.  Basically, it guarantees that a function
 * is executed upon leaving the currrent scope unless otherwise told.
 *
 * The makeGuard() function is used to create a new ScopeGuard object.
 * It can be instantiated with a lambda function, a std::function<void()>,
 * a functor, or a void(*)() function pointer.
 *
 *
 * Usage example: Add a friend to memory if and only if it is also added
 * to the db.
 *
 * void User::addFriend(User& newFriend) {
 *   // add the friend to memory
 *   friends_.push_back(&newFriend);
 *
 *   // If the db insertion that follows fails, we should
 *   // remove it from memory.
 *   auto guard = makeGuard([&] { friends_.pop_back(); });
 *
 *   // this will throw an exception upon error, which
 *   // makes the ScopeGuard execute UserCont::pop_back()
 *   // once the Guard's destructor is called.
 *   db_->addFriend(GetName(), newFriend.GetName());
 *
 *   // an exception was not thrown, so don't execute
 *   // the Guard.
 *   guard.dismiss();
 * }
 *
 * Examine ScopeGuardTest.cpp for some more sample usage.
 *
 * Stolen from:
 *   Andrei's and Petru Marginean's CUJ article:
 *     http://drdobbs.com/184403758
 *   and the loki library:
 *     http://loki-lib.sourceforge.net/index.php?n=Idioms.ScopeGuardPointer
 *   and triendl.kj article:
 *     http://www.codeproject.com/KB/cpp/scope_guard.aspx
 */
template <typename F>
detail::ScopeGuardImplDecay<F> makeGuard(F&& f) noexcept(
    noexcept(detail::ScopeGuardImplDecay<F>(static_cast<F&&>(f)))) {
  return detail::ScopeGuardImplDecay<F>(static_cast<F&&>(f));
}
    
      // Returns an index of random unit from the corpus to mutate.
  // Hypothesis: units added to the corpus last are more likely to be
  // interesting. This function gives more weight to the more recent units.
  size_t ChooseUnitIdxToMutate(Random &Rand) {
    size_t Idx = static_cast<size_t>(CorpusDistribution(Rand.Get_mt19937()));
    assert(Idx < Inputs.size());
    return Idx;
  }
    
    #ifdef __x86_64
#define ATTRIBUTE_TARGET_POPCNT __attribute__((target('popcnt')))
#else
#define ATTRIBUTE_TARGET_POPCNT
#endif
    
    void DupAndCloseStderr();
    
    // Parse disk designators, like 'C:\'. If Relative == true, also accepts: 'C:'.
// Returns number of characters considered if successful.
static size_t ParseDrive(const std::string &FileName, const size_t Offset,
                         bool Relative = true) {
  if (Offset + 1 >= FileName.size() || FileName[Offset + 1] != ':')
    return 0;
  if (Offset + 2 >= FileName.size() || !IsSeparator(FileName[Offset + 2])) {
    if (!Relative) // Accept relative path?
      return 0;
    else
      return 2;
  }
  return 3;
}
    
    
    {}  // namespace fuzzer
    
    std::string Sha1ToString(const uint8_t Sha1[kSHA1NumBytes]);
    
    void TracePC::DumpCoverage() {
  __sanitizer_dump_coverage(PCs, GetNumPCs());
}
    
    template <class Callback>
size_t TracePC::CollectFeatures(Callback CB) {
  if (!UsingTracePcGuard()) return 0;
  size_t Res = 0;
  const size_t Step = 8;
  assert(reinterpret_cast<uintptr_t>(Counters) % Step == 0);
  size_t N = Min(kNumCounters, NumGuards + 1);
  N = (N + Step - 1) & ~(Step - 1);  // Round up.
  for (size_t Idx = 0; Idx < N; Idx += Step) {
    uint64_t Bundle = *reinterpret_cast<uint64_t*>(&Counters[Idx]);
    if (!Bundle) continue;
    for (size_t i = Idx; i < Idx + Step; i++) {
      uint8_t Counter = (Bundle >> ((i - Idx) * 8)) & 0xff;
      if (!Counter) continue;
      Counters[i] = 0;
      unsigned Bit = 0;
      /**/ if (Counter >= 128) Bit = 7;
      else if (Counter >= 32) Bit = 6;
      else if (Counter >= 16) Bit = 5;
      else if (Counter >= 8) Bit = 4;
      else if (Counter >= 4) Bit = 3;
      else if (Counter >= 3) Bit = 2;
      else if (Counter >= 2) Bit = 1;
      size_t Feature = (i * 8 + Bit);
      if (CB(Feature))
        Res++;
    }
  }
  if (UseValueProfile)
    ValueProfileMap.ForEach([&](size_t Idx) {
      if (CB(NumGuards * 8 + Idx))
        Res++;
    });
  return Res;
}
    
    void PrintASCII(const Unit &U, const char *PrintAfter) {
  PrintASCII(U.data(), U.size(), PrintAfter);
}
    
    FILE *OpenProcessPipe(const char *Command, const char *Mode);