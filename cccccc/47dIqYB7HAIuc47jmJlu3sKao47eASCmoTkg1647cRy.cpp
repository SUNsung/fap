
        
        namespace {
    }
    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
    #ifndef ATOM_RENDERER_PREFERENCES_MANAGER_H_
#define ATOM_RENDERER_PREFERENCES_MANAGER_H_
    
      // Sent when the applications in the NTP app launcher have been reordered.
  // The details, if not NoDetails, is the std::string ID of the extension that
  // was moved.
  NOTIFICATION_EXTENSION_LAUNCHER_REORDERED,
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(PrintingUIWebContentsObserver);
};
    
    #if defined(OS_MACOSX)
const base::FilePath::CharType kFrameworkName[] =
    FPL(ATOM_PRODUCT_NAME ' Framework.framework');
#endif  // OS_MACOSX
    
    #pragma once
    
        // create a section from config parameters
    Section* CreateSection(const ConfigParameters& config, Section* parentSection, size_t p_records, size_t p_windowSize = 0);
    Section* CreateSection(const ScriptableObjects::IConfigRecord& config, Section* parentSection, size_t p_records, size_t p_windowSize = 0);
    
    
    {    // TODO: as soon as beta != 0.0 the 'MultiplyAndWeightedAdd' fails with stack overflow (also in the first test 5 lines above)
    // alpha = 2.4f;
    // beta = 3.4f;
    // mCsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    // Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mBdense, transposeB, beta, mCdense);
    // Matrix<float>::MultiplyAndWeightedAdd(alpha, mAsparse, transposeA, mBsparse, transposeB, beta, mCsparse);
    // mCsparse.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);
    // BOOST_CHECK(mCsparse.IsEqualTo(mCdense, c_epsilonFloatE4));
}
    
        // save model
    if (!useParallelTrain || m_mpi->CurrentNodeRank() == m_mpi->MainNodeRank())
        m_net->Save(newModelPath);
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
    namespace msra { namespace math {
    }
    }
    
    vector<wstring> /*IConfigRecord::*/ ComputationNodeBase::GetMemberIds() const
{
    return vector<wstring>{ L'name', L'operation', L'dim', L'dims', /*L'tag', */L'inputs', OperationName() + L'Args' };
}
    
    
    {
    {            if (m_recordCount != 0)
            {
                // record count must be the same for all the data
                if (recordCount != m_recordCount)
                    RuntimeError('Record Count of %ls (%lux%lu) does not match the record count of previous entries (%lu).', val.c_str(), rows, recordCount, m_recordCount);
            }
            else
            {
                m_recordCount = recordCount;
            }
        }
    }
    
      ASSERT_OK(DB::Open(options, '/dir/db', &db));
  for (size_t i = 0; i < 3; ++i) {
    ASSERT_OK(db->Put(WriteOptions(), keys[i], vals[i]));
  }
    
    namespace leveldb {
    }
    
    size_t BlockBuilder::CurrentSizeEstimate() const {
  return (buffer_.size() +                        // Raw data buffer
          restarts_.size() * sizeof(uint32_t) +   // Restart array
          sizeof(uint32_t));                      // Restart array length
}
    
    
    {
}  // namespace leveldb

    
      // Reset the contents as if the BlockBuilder was just constructed.
  void Reset();
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            ImGui_ImplDX10_InvalidateDeviceObjects();
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
            ImGui_ImplDX10_CreateDeviceObjects();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}
    
        // Upload Fonts
    {
        // Use any command queue
        VkCommandPool command_pool = wd->Frames[wd->FrameIndex].CommandPool;
        VkCommandBuffer command_buffer = wd->Frames[wd->FrameIndex].CommandBuffer;
    }
    
        // Create the vertex shader
    {
        static const char* vertexShader =
            'cbuffer vertexBuffer : register(b0) \
            {\
              float4x4 ProjectionMatrix; \
            };\
            struct VS_INPUT\
            {\
              float2 pos : POSITION;\
              float4 col : COLOR0;\
              float2 uv  : TEXCOORD0;\
            };\
            \
            struct PS_INPUT\
            {\
              float4 pos : SV_POSITION;\
              float4 col : COLOR0;\
              float2 uv  : TEXCOORD0;\
            };\
            \
            PS_INPUT main(VS_INPUT input)\
            {\
              PS_INPUT output;\
              output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));\
              output.col = input.col;\
              output.uv  = input.uv;\
              return output;\
            }';
    }
    
    /*
XXH32() :
    Calculate the 32-bits hash of sequence of length 'len' stored at memory address 'input'.
    The memory between input & input+len must be valid (allocated and read-accessible).
    'seed' can be used to alter the result predictably.
    This function successfully passes all SMHasher tests.
    Speed on Core 2 Duo @ 3 GHz (single thread, SMHasher benchmark) : 5.4 GB/s
    Note that 'len' is type 'int', which means it is limited to 2^31-1.
    If your data is larger, use the advanced functions below.
*/
    
      // Read some more
  bool ReadMore(size_t* drop_size, int *error);
    
    #include 'rocksjni/statisticsjni.h'
    
    // A file abstraction for reading sequentially through a file
class LibradosSequentialFile : public SequentialFile {
  librados::IoCtx * _io_ctx;
  std::string _fid;
  std::string _hint;
  int _offset;
public:
  LibradosSequentialFile(librados::IoCtx * io_ctx, std::string fid, std::string hint):
    _io_ctx(io_ctx), _fid(fid), _hint(hint), _offset(0) {}
    }
    
    DirectComparatorJniCallback::DirectComparatorJniCallback(
    JNIEnv* env, jobject jComparator,
    const ComparatorJniCallbackOptions* copt) :
    BaseComparatorJniCallback(env, jComparator, copt) {
  m_jSliceA = env->NewGlobalRef(DirectSliceJni::construct0(env));
  if(m_jSliceA == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
    }
    
      class LoggerJniCallback : public JniCallback, public Logger {
   public:
     LoggerJniCallback(JNIEnv* env, jobject jLogger);
     ~LoggerJniCallback();
    }
    
    
void SyncPoint::Data::LoadDependency(const std::vector<SyncPointPair>& dependencies) {
  std::lock_guard<std::mutex> lock(mutex_);
  successors_.clear();
  predecessors_.clear();
  cleared_points_.clear();
  for (const auto& dependency : dependencies) {
    successors_[dependency.predecessor].push_back(dependency.successor);
    predecessors_[dependency.successor].push_back(dependency.predecessor);
  }
  cv_.notify_all();
}
    
    #ifndef WAKEUPLOCK_H_
#define WAKEUPLOCK_H_
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
      private:
    int __TestFun1(int i);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    class JSONReporter : public BenchmarkReporter {
 public:
  JSONReporter() : first_report_(true) {}
  virtual bool ReportContext(const Context& context);
  virtual void ReportRuns(const std::vector<Run>& reports);
  virtual void Finalize();
    }
    
      BENCHMARK_NORETURN ~CheckHandler() BENCHMARK_NOEXCEPT_OP(false) {
    log_ << std::endl;
    CallAbortHandler();
  }
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);
    
    namespace benchmark {
    }
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
    
    {
    {
    {  // Native Client does not provide any API to access cycle counter.
  // Use clock_gettime(CLOCK_MONOTONIC, ...) instead of gettimeofday
  // because is provides nanosecond resolution (which is noticable at
  // least for PNaCl modules running on x86 Mac & Linux).
  // Initialize to always return 0 if clock_gettime fails.
  struct timespec ts = { 0, 0 };
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return static_cast<int64_t>(ts.tv_sec) * 1000000000 + ts.tv_nsec;
#elif defined(__aarch64__)
  // System timer of ARMv8 runs at a different frequency than the CPU's.
  // The frequency is fixed, typically in the range 1-50MHz.  It can be
  // read at CNTFRQ special register.  We assume the OS has set up
  // the virtual timer properly.
  int64_t virtual_timer_value;
  asm volatile('mrs %0, cntvct_el0' : '=r'(virtual_timer_value));
  return virtual_timer_value;
#elif defined(__ARM_ARCH)
  // V6 is the earliest arch that has a standard cyclecount
  // Native Client validator doesn't allow MRC instructions.
#if (__ARM_ARCH >= 6)
  uint32_t pmccntr;
  uint32_t pmuseren;
  uint32_t pmcntenset;
  // Read the user mode perf monitor counter access permissions.
  asm volatile('mrc p15, 0, %0, c9, c14, 0' : '=r'(pmuseren));
  if (pmuseren & 1) {  // Allows reading perfmon counters for user mode code.
    asm volatile('mrc p15, 0, %0, c9, c12, 1' : '=r'(pmcntenset));
    if (pmcntenset & 0x80000000ul) {  // Is it counting?
      asm volatile('mrc p15, 0, %0, c9, c13, 0' : '=r'(pmccntr));
      // The counter is set up to count every 64th cycle
      return static_cast<int64_t>(pmccntr) * 64;  // Should optimize to << 6
    }
  }
#endif
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
#elif defined(__mips__)
  // mips apparently only allows rdtsc for superusers, so we fall
  // back to gettimeofday.  It's possible clock_gettime would be better.
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
#else
// The soft failover to a generic implementation is automatic only for ARM.
// For other platforms the developer is expected to make an attempt to create
// a fast implementation and use generic version if nothing better is available.
#error You need to define CycleTimer for your OS and CPU
#endif
}
}  // end namespace cycleclock
}  // end namespace benchmark
    
    double BenchmarkReporter::Run::GetAdjustedRealTime() const {
  double new_time = real_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
    double StatisticsMedian(const std::vector<double>& v) {
  if (v.size() < 3) return StatisticsMean(v);
  std::vector<double> partial;
  // we need roundDown(count/2)+1 slots
  partial.resize(1 + (v.size() / 2));
  std::partial_sort_copy(v.begin(), v.end(), partial.begin(), partial.end());
  // did we have odd number of samples?
  // if yes, then the last element of partially-sorted vector is the median
  // it no, then the average of the last two elements is the median
  if(v.size() % 2 == 1)
    return partial.back();
  return (partial[partial.size() - 2] + partial[partial.size() - 1]) / 2.0;
}