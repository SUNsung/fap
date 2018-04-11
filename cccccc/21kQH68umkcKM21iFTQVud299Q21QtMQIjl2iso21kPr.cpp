
        
        // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
      mpz_init(gmpReturn);
  mpz_and(gmpReturn, gmpDataA, gmpDataB);
    
      [[noreturn]]
  void reportFull(size_t nbytes) const;
    
    /*
 * Read data from the named section and place it into the given buffer (of size
 * len) Returns the number of bytes (not null-terminated) read or -1 if
 * unsuccessful
 */
ssize_t hphp_read_embedded_data(const char* section, char* buf, size_t len);
    
    #include 'hphp/runtime/vm/jit/types.h'
    
    #endif // incl_HPHP_LIGHT_PROCESS_H_

    
    
    {  public:
    DNS(DNSFunc _dnsfunc=NULL);
    ~DNS();
    
  public:
    bool GetHostByName(const std::string& _host_name, std::vector<std::string>& ips, long millsec = 2 * 1000, DNSBreaker* _breaker = NULL);
    void Cancel(const std::string& _host_name = std::string());
    void Cancel(DNSBreaker& _breaker);
    
    void SetMonitorFunc(const boost::function<void (int _key)>& _monitor_func) {
    	monitor_func_ = _monitor_func;
    }
  private:
    DNSFunc dnsfunc_;
    boost::function<void (int _key)> monitor_func_;
    static const int kDNSThreadIDError = 0;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    void Test_Spy_Sample::TestFun0()
{
    SPY_HOOK_THIS_API(TestFun0);
    int i = 0;
    SPY_ATTACH_VARIABLE('TestFun0 i', i);
    i++;
    xinfo2(TSF'Test');
    }
    
    class ScopeJEnv {
  public:
    ScopeJEnv(JavaVM* jvm, jint _capacity = 16);
    ~ScopeJEnv();
    }
    
      void PrintStats() {
    for (size_t i = 0; i < Inputs.size(); i++) {
      const auto &II = *Inputs[i];
      Printf('  [%zd %s]\tsz: %zd\truns: %zd\tsucc: %zd\n', i,
             Sha1ToString(II.Sha1).c_str(), II.U.size(),
             II.NumExecutedMutations, II.NumSuccessfullMutations);
    }
  }
    
    static void PrintHelp() {
  Printf('Usage:\n');
  auto Prog = ProgName->c_str();
  Printf('\nTo run fuzzing pass 0 or more directories.\n');
  Printf('%s [-flag1=val1 [-flag2=val2 ...] ] [dir1 [dir2 ...] ]\n', Prog);
    }
    
    #include 'FuzzerExtFunctions.def'
    
    using namespace fuzzer;
    
    
    {#undef EXT_FUNC
}
    
      std::string CoveredDirsStr;
  for (auto &Dir : CoveredDirs) {
    if (!CoveredDirsStr.empty())
      CoveredDirsStr += ',';
    CoveredDirsStr += Dir;
  }
  Printf('COVERED_DIRS: %s\n', CoveredDirsStr.c_str());
    
    class TraceState {
public:
  TraceState(MutationDispatcher &MD, const FuzzingOptions &Options,
             const Fuzzer *F)
      : MD(MD), Options(Options), F(F) {}
    }
    
    bool ToASCII(uint8_t *Data, size_t Size) {
  bool Changed = false;
  for (size_t i = 0; i < Size; i++) {
    uint8_t &X = Data[i];
    auto NewX = X;
    NewX &= 127;
    if (!isspace(NewX) && !isprint(NewX))
      NewX = ' ';
    Changed |= NewX != X;
    X = NewX;
  }
  return Changed;
}