
        
              T* resource;
      OP_REQUIRES_OK(
          context,
          mgr->LookupOrCreate<T>(cinfo_.container(), cinfo_.name(), &resource,
                                 [this](T** ret) EXCLUSIVE_LOCKS_REQUIRED(mu_) {
                                   Status s = CreateResource(ret);
                                   if (!s.ok() && *ret != nullptr) {
                                     CHECK((*ret)->Unref());
                                   }
                                   return s;
                                 }));
    
    void SubProcess::SetProgram(const string& file,
                            const std::vector<string>& argv) {
  mutex_lock procLock(proc_mu_);
  mutex_lock dataLock(data_mu_);
  if (running_) {
    LOG(FATAL) << 'SetProgram called after the process was started.';
    return;
  }
    }
    
      // Given the driver version file contents, finds the kernel module version and
  // returns it as a string.
  //
  // This is solely used for more informative log messages when the user is
  // running on a machine that happens to have a libcuda/kernel driver mismatch.
  static port::StatusOr<DriverVersion> FindKernelModuleVersion(
      const string &driver_version_file_contents);
    
    
    { private:
  PluginId blas_, dnn_, fft_, rng_;
};
    
    // ---------------------------------------------------------------------------
// Inline implementation
// ---------------------------------------------------------------------------
template <PrefetchHint hint>
inline void prefetch(const void* x) {
// Check of COMPILER_GCC macro below is kept only for backward-compatibility
// reasons. COMPILER_GCC3 is the macro that actually enables prefetch.
#if defined(__llvm__) || defined(COMPILER_GCC) || defined(COMPILER_GCC3)
  __builtin_prefetch(x, 0, hint);
#else
// You get no effect.  Feel free to add more sections above.
#endif
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    HloReachabilityMap::HloReachabilityMap(
    const std::list<HloInstruction*>& instructions)
    : size_(instructions.size()) {
  bit_vectors_.reserve(size_);
  for (const HloInstruction* hlo : instructions) {
    indices_[hlo] = bit_vectors_.size();
    bit_vectors_.emplace_back(size_);
  }
  CHECK_EQ(size_, indices_.size());  // instructions should be unique
}
    
    sampled_audio: A rank-2 float tensor containing all tracks of the audio.
    Dimension 0 is time and dimension 1 is the channel.
file_format: A string or rank-0 string tensor describing the audio file
    format. This value must be `'wav'`.
samples_per_second: The number of samples per second that the audio should
    have, as an int or rank-0 `int32` tensor. This value must be
    positive.
bits_per_second: The approximate bitrate of the encoded audio file, as
    an int or rank-0 `int32` tensor. This is ignored by the 'wav' file
    format.
contents: The binary audio file contents, as a rank-0 string tensor.
)doc');
    
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
    
    
    {  v << vcall{
    CallSpec::direct(pthread_getspecific),
    v.makeVcallArgs({{v.cns(datum.tls->m_key)}}),
    v.makeTuple({d}),
    Fixup{},
    DestType::SSA
  };
}
    
    
    {  jit::array<Section, kNumAreas> sections;
};
    
      OnigEncoding default_mbctype;
  OnigEncoding current_mbctype;
  RegexCache ht_rc;
  std::string search_str;
  unsigned int search_pos;
  php_mb_regex_t *search_re;
  OnigRegion *search_regs;
  OnigOptionType regex_default_options;
  OnigSyntaxType *regex_default_syntax;
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    void PageletServer::Stop() {
  if (s_dispatcher) {
    auto monitor = getSingleton<HostHealthMonitor>();
    monitor->unsubscribe(s_dispatcher);
    s_dispatcher->stop();
    Lock l(s_dispatchMutex);
    delete s_dispatcher;
    s_dispatcher = nullptr;
  }
}
    
    void numa_bind_to(void* start, size_t size, int node) {
  if (!use_numa) return;
  numa_tonode_memory(start, size, node);
}
    
    extern uint32_t numa_node_set;
extern uint32_t numa_node_mask;
extern uint32_t numa_num_nodes;
extern std::vector<bitmask*> node_to_cpu_mask;
extern bool use_numa;
    
    void ThriftBuffer::read(std::string &data) {
  String sdata;
  read(sdata);
  data = std::string(sdata.data(), sdata.size());
}
    
    
    {  return geteuid();
}
    
      std::vector<LdSSwitchData::Elm> cases(numCases);
  for (int i = 0; i < numCases; ++i) {
    auto const& kv = iv.strvec()[i];
    cases[i].str  = curUnit(env)->lookupLitstrId(kv.str);
    cases[i].dest = SrcKey{curSrcKey(env), bcOff(env) + kv.dest};
  }
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    #include <string>
#include <stdint.h>
#include 'db/dbformat.h'
#include 'leveldb/cache.h'
#include 'leveldb/table.h'
#include 'port/port.h'
    
    // Tag numbers for serialized VersionEdit.  These numbers are written to
// disk and should not be changed.
enum Tag {
  kComparator           = 1,
  kLogNumber            = 2,
  kNextFileNumber       = 3,
  kLastSequence         = 4,
  kCompactPointer       = 5,
  kDeletedFile          = 6,
  kNewFile              = 7,
  // 8 was used for large value refs
  kPrevLogNumber        = 9
};
    
    #include <set>
#include <utility>
#include <vector>
#include 'db/dbformat.h'
    
      void Stop(const Slice& name) {
    double finish = Env::Default()->NowMicros() * 1e-6;
    }
    
    namespace leveldb {
    }
    
      // create first key range
  leveldb::WriteBatch batch;
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key1(i), 'value for range 1 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    void Mutex::Lock() { PthreadCall('lock', pthread_mutex_lock(&mu_)); }
    
      // Check third filter (empty)
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'hello'));
    
      virtual Slice value() const {
    assert(Valid());
    return current_->value();
  }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        LongLinkPack st = {0};
    memcpy(&st, _rawbuf, sizeof(LongLinkPack));
    
    
class ServiceBase;
typedef std::map<std::string, ServiceBase*> TServicesMap;
    
    int ScopeJEnv::Status() {
    return status_;
}
