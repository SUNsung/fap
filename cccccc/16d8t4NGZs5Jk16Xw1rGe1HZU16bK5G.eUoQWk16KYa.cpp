    if (useDistributedMBReading)
        dataReader->StartDistributedMinibatchLoop(mbSize, 0, m_mpi->CurrentNodeRank(), m_mpi->NumNodesInUse(), inputMatrices.GetStreamDescriptions(), totalEpochSize);
    else
        dataReader->StartMinibatchLoop(mbSize, 0, inputMatrices.GetStreamDescriptions(), totalEpochSize);
    
    template void DoConvertFromDbn<float>(const ConfigParameters& config);
template void DoConvertFromDbn<double>(const ConfigParameters& config);
template void DoExportToDbn<float>(const ConfigParameters& config);
template void DoExportToDbn<double>(const ConfigParameters& config);

    
    #pragma once
    
    
    {    // SaveMapping - save a map into the file
    // saveId - name of the section to save into (section:subsection format)
    // labelMapping - map we are saving to the file
    virtual void SaveMapping(std::wstring saveId, const std::map<LabelIdType, LabelType>& labelMapping);
    virtual bool SupportMultiUtterances() const 
    {
        return false;
    };
};
    
    #include <string>
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
    
    {public:
    inline hardcoded_array() throw()
    {
    }
    inline hardcoded_array(size_t n) throw()
    {
        check_size(n);
    } // we can instantiate with a size parameter--just checks the size
    inline hardcoded_array(size_t n, const _T& val) throw()
    {
        check_size(n);
        for (size_t i = 0; i < n; i++)
            data[i] = val;
    }
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return _N;
    }
};

    
        float4 operator&(const float4& other) const
    {
        return _mm_and_ps(v, other);
    }
    float4 operator|(const float4& other) const
    {
        return _mm_or_ps(v, other);
    }
    float4 operator+(const float4& other) const
    {
        return _mm_add_ps(v, other);
    }
    float4 operator-(const float4& other) const
    {
        return _mm_sub_ps(v, other);
    }
    float4 operator*(const float4& other) const
    {
        return _mm_mul_ps(v, other);
    }
    float4 operator/(const float4& other) const
    {
        return _mm_div_ps(v, other);
    }
    
    vector<wstring> /*IConfigRecord::*/ ComputationNodeBase::GetMemberIds() const
{
    return vector<wstring>{ L'name', L'operation', L'dim', L'dims', /*L'tag', */L'inputs', OperationName() + L'Args' };
}
    
    const int kServerDefaultResponseStreamsToSend = 3;
const char* const kServerResponseStreamsToSend = 'server_responses_to_send';
const char* const kServerTryCancelRequest = 'server_try_cancel';
const char* const kDebugInfoTrailerKey = 'debug-info-bin';
const char* const kServerFinishAfterNReads = 'server_finish_after_n_reads';
const char* const kServerUseCoalescingApi = 'server_use_coalescing_api';
    
    #endif

    
    // Logic and data behind the server's behavior.
class GreeterServiceImpl final : public Greeter::Service {
  Status SayHello(ServerContext* context, const HelloRequest* request,
                  HelloReply* reply) override {
    std::string prefix('Hello ');
    reply->set_message(prefix + request->name());
    return Status::OK;
  }
};
    
      Status GetFeature(ServerContext* context, const Point* point,
                    Feature* feature) override {
    feature->set_name(GetFeatureName(*point, feature_list_));
    feature->mutable_location()->CopyFrom(*point);
    return Status::OK;
  }
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
      /// Put the runnable into an interruptible sleep.
  virtual void pauseMilli(size_t milli) {
    pauseMilli(std::chrono::milliseconds(milli));
  }
    
    /**
 * @brief A Subscription is used to configure an EventPublisher and bind a
 * callback to a SubscriptionContext.
 *
 * A Subscription is the input to an EventPublisher when the EventPublisher
 * decides on the scope and details of the events it watches/generates.
 * An example includes a filesystem change event. A subscription would include
 * a path with optional recursion and attribute selectors as well as a callback
 * function to fire when an event for that path and selector occurs.
 *
 * A Subscription also functions to greatly scope an EventPublisher%'s work.
 * Using the same filesystem example and the Linux inotify subsystem a
 * Subscription limits the number of inode watches to only those requested by
 * appropriate EventSubscriber%s.
 * Note: EventSubscriber%s and Subscriptions can be configured by the osquery
 * user.
 *
 * Subscriptions are usually created with EventFactory members:
 *
 * @code{.cpp}
 *   EventFactory::addSubscription('MyEventPublisher', my_subscription_context);
 * @endcode
 */
struct Subscription : private boost::noncopyable {
 public:
  // EventSubscriber name.
  std::string subscriber_name;
    }
    
    /// Helper replacement for REGISTER, used within extension modules.
#define REGISTER_MODULE(t, r, n)                                               \
  auto t##Module = Registry::get().registry(r)->add(n, std::make_shared<t>());
    
    namespace osquery {
    }
    
      if (count > nelms) {
    return Status(1, 'Failed to strncpy: dst too small');
  }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    struct ServiceRegister;
    
    
Test_Spy_Sample::Test_Spy_Sample()
{
    SPY_ATTACH_CLASS(NULL);
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {  private:
    virtual void __OnAttach(const char* _key) {}
    virtual void __OnDetach(const char* _key) {}
};

    
    ScopeJEnv::ScopeJEnv(JavaVM* jvm, jint _capacity)
    : vm_(jvm), env_(NULL), we_attach_(false), status_(0) {
    ASSERT(jvm);
    do {
        env_ = (JNIEnv*)pthread_getspecific(g_env_key);
        
        if (NULL != env_) {
            break;
        }
        
        status_ = vm_->GetEnv((void**) &env_, JNI_VERSION_1_6);
    }
    }
    
    
    {  atomic_shared_ptr<foo> asp;
  asp.store(alias);
  a.reset();
  alias.reset();
  auto res1 = asp.load();
  auto res2 = asp.exchange(nullptr);
  EXPECT_EQ(b, res1.get());
  EXPECT_EQ(b, res2.get());
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(0, d_count);
  res1.reset();
  res2.reset();
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(1, d_count);
  delete b;
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(2, d_count);
}
    
    BENCHMARK_DRAW_LINE()
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 1_stripe_0_work, 1, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 2_stripe_0_work, 2, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 4_stripe_0_work, 4, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 8_stripe_0_work, 8, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 16_stripe_0_work, 16, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 32_stripe_0_work, 32, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 64_stripe_0_work, 64, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthThreadLocal, 2_stripe_0_work, 2, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthThreadLocal, 4_stripe_0_work, 4, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthThreadLocal, 8_stripe_0_work, 8, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthThreadLocal, 16_stripe_0_work, 16, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthThreadLocal, 32_stripe_0_work, 32, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthThreadLocal, 64_stripe_0_work, 64, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthPthreadSelf, 2_stripe_0_work, 2, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthPthreadSelf, 4_stripe_0_work, 4, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthPthreadSelf, 8_stripe_0_work, 8, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthPthreadSelf, 16_stripe_0_work, 16, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthPthreadSelf, 32_stripe_0_work, 32, 0)
BENCHMARK_NAMED_PARAM(contentionAtWidthPthreadSelf, 64_stripe_0_work, 64, 0)
BENCHMARK_NAMED_PARAM(atomicIncrBaseline, local_incr_0_work, 0)
BENCHMARK_DRAW_LINE()
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 1_stripe_500_work, 1, 500)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 2_stripe_500_work, 2, 500)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 4_stripe_500_work, 4, 500)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 8_stripe_500_work, 8, 500)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 16_stripe_500_work, 16, 500)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 32_stripe_500_work, 32, 500)
BENCHMARK_NAMED_PARAM(atomicIncrBaseline, local_incr_500_work, 500)
BENCHMARK_DRAW_LINE()
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 1_stripe_1000_work, 1, 1000)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 2_stripe_1000_work, 2, 1000)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 4_stripe_1000_work, 4, 1000)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 8_stripe_1000_work, 8, 1000)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 16_stripe_1000_work, 16, 1000)
BENCHMARK_NAMED_PARAM(contentionAtWidthGetcpu, 32_stripe_1000_work, 32, 1000)
BENCHMARK_NAMED_PARAM(atomicIncrBaseline, local_incr_1000_work, 1000)
    
    static int testingGetcpu(unsigned* cpu, unsigned* node, void* /* unused */) {
  if (cpu != nullptr) {
    *cpu = testingCpu;
  }
  if (node != nullptr) {
    *node = testingCpu;
  }
  return 0;
}
#endif
    
    size_t qfind_first_byte_of_bitset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  std::bitset<256> s;
  for (auto needle : needles) {
    s[(uint8_t)needle] = true;
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s[(uint8_t)haystack[index]]) {
      return index;
    }
  }
  return std::string::npos;
}
    
    #include <folly/Likely.h>
    
    // It's okay if pages are bigger than this (as powers of two), but they should
// not be smaller.
static constexpr size_t kMinPageSize = 4096;
static_assert(
    kMinPageSize >= 16,
    'kMinPageSize must be at least SSE register size');
    
    #include <cstddef>
    
    //
// Implementation of DynamicParser template & inline methods.
//
    
    
    {} // namespace fuzzer
    
    extern 'C' {
// Declare these symbols as weak to allow them to be optionally defined.
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  RETURN_TYPE NAME##Def FUNC_SIG {                                             \
    Printf('ERROR: Function \'%s\' not defined.\n', #NAME);                    \
    exit(1);                                                                   \
  }                                                                            \
  RETURN_TYPE NAME FUNC_SIG __attribute__((weak, alias(#NAME 'Def')));
    }
    
    // Parse a servername and share, like: SomeServer\SomeShare\
// Returns number of characters considered if successful.
static size_t ParseServerAndShare(const std::string &FileName,
                                  const size_t Offset) {
  size_t Pos = Offset, Res;
  if (!(Res = ParseDir(FileName, Pos)))
    return 0;
  Pos += Res;
  if (!(Res = ParseDir(FileName, Pos)))
    return 0;
  Pos += Res;
  return Pos - Offset;
}
    
    void Fuzzer::PrintFinalStats() {
  if (Options.PrintCoverage)
    TPC.PrintCoverage();
  if (Options.DumpCoverage)
    TPC.DumpCoverage();
  if (Options.PrintCorpusStats)
    Corpus.PrintStats();
  if (!Options.PrintFinalStats) return;
  size_t ExecPerSec = execPerSec();
  Printf('stat::number_of_executed_units: %zd\n', TotalNumberOfRuns);
  Printf('stat::average_exec_per_sec:     %zd\n', ExecPerSec);
  Printf('stat::new_units_added:          %zd\n', NumberOfNewUnitsAdded);
  Printf('stat::slowest_unit_time_sec:    %zd\n', TimeOfLongestUnitInSeconds);
  Printf('stat::peak_rss_mb:              %zd\n', GetPeakRSSMb());
}
    
    #ifndef LLVM_FUZZER_MERGE_H
#define LLVM_FUZZER_MERGE_H
    
    size_t MutationDispatcher::Mutate_ShuffleBytes(uint8_t *Data, size_t Size,
                                               size_t MaxSize) {
  if (Size > MaxSize) return 0;
  assert(Size);
  size_t ShuffleAmount =
      Rand(std::min(Size, (size_t)8)) + 1; // [1,8] and <= Size.
  size_t ShuffleStart = Rand(Size - ShuffleAmount);
  assert(ShuffleStart + ShuffleAmount <= Size);
  std::random_shuffle(Data + ShuffleStart, Data + ShuffleStart + ShuffleAmount,
                      Rand);
  return Size;
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
    
    uint32_t sha1_rol32(uint32_t number, uint8_t bits) {
	return ((number << bits) | (number >> (32-bits)));
}
    
    #include 'FuzzerDefs.h'
#include <cstddef>
#include <stdint.h>
    
    // Value profile.
// We keep track of various values that affect control flow.
// These values are inserted into a bit-set-based hash map.
// Every new bit in the map is treated as a new coverage.
//
// For memcmp/strcmp/etc the interesting value is the length of the common
// prefix of the parameters.
// For cmp instructions the interesting value is a XOR of the parameters.
// The interesting value is mixed up with the PC and is then added to the map.
    
    #endif // LIBFUZZER_APPLE

    
      BtMessageFactory* messageFactory_;
    
      int64_t offset_;
    
    const char* AnnounceList::getEventString() const
{
  if (currentTrackerInitialized_) {
    switch ((*currentTier_)->event) {
    case AnnounceTier::STARTED:
    case AnnounceTier::STARTED_AFTER_COMPLETION:
      return 'started';
    case AnnounceTier::STOPPED:
      return 'stopped';
    case AnnounceTier::COMPLETED:
      return 'completed';
    default:
      return '';
    }
  }
  else {
    return '';
  }
}
    
    namespace aria2 {
    }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    #include 'LogFactory.h'
#include 'BufferedFile.h'
#include 'Logger.h'
#include 'MessageDigest.h'
#include 'fmt.h'
#include 'message.h'
#include 'util.h'
    
      virtual TLSSessionSide getSide() const CXX11_OVERRIDE { return side_; }
    
    AuthConfig::~AuthConfig() = default;