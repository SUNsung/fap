
        
        void PartialRunMgr::ExecutorDone(int step_id, const Status& executor_status) {
  StatusCallback done;
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    // If we found the partial_run, we call the final callback, if it
    // exists.
    // It is guaranteed that run_it->second->final_callback is left empty
    // after the std::move call.
    done = std::move(run_it->second->final_callback);
    if (!executor_status.ok()) {
      run_it->second->final_status = executor_status;
    }
    callback_status = run_it->second->final_status;
    run_it->second->executor_done = true;
  }
  if (done != nullptr) {
    done(callback_status);
    mutex_lock l(mu_);
    step_id_to_partial_run_.erase(step_id);
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
namespace functor {
    }
    }
    
      // Iterates through loaded DSOs with DlIteratePhdrCallback to find the
  // driver-interfacing DSO version number. Returns it as a string.
  static port::StatusOr<DriverVersion> FindDsoVersion();
    
      ExpectSuccess(Builder().Attr('T', {DT_FLOAT}), {}, {DT_FLOAT}, R'proto(
      op: 'OutTypeList'
      attr { key: 'T' value { list { type: DT_FLOAT } } } )proto');
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    class Env;
class Iterator;
class TableCache;
class VersionEdit;
    
    std::string TableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'ldb');
}
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
      // Return the name of this policy.  Note that if the filter encoding
  // changes in an incompatible way, the name returned by this method
  // must be changed.  Otherwise, old incompatible filters may be
  // passed to methods of this type.
  virtual const char* Name() const = 0;
    
    
#endif  // STORAGE_LEVELDB_INCLUDE_SLICE_H_

    
            struct glob
        {
            static __device__ __forceinline__ int atomicAdd(int* address, int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ unsigned int atomicAdd(unsigned int* address, unsigned int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ float atomicAdd(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 200
                return ::atomicAdd(address, val);
            #else
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(val + __int_as_float(assumed)));
                } while (assumed != old);
                return __int_as_float(old);
            #endif
            }
            static __device__ __forceinline__ double atomicAdd(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(val + __longlong_as_double(assumed)));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    }
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdFft.Runtime.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdFft.Runtime.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
    
      explicit WorkloadStats(State guardedState);
  ~WorkloadStats();
    
      timelib_time_offset *offset =
    timelib_get_time_zone_info(tp.tv_sec, TimeZone::Current()->get());
    
    void DebuggerProxy::processInterrupt(CmdInterrupt &cmd) {
  TRACE_RB(2, 'DebuggerProxy::processInterrupt\n');
  // Do the server-side work for this interrupt, which just notifies the client.
  if (!cmd.onServer(*this)) {
    TRACE_RB(1, 'Failed to send CmdInterrupt to client\n');
    Debugger::UsageLog('server', getSandboxId(), 'ProxyError',
                       'Send interrupt');
    stopAndThrow();
  }
    }
    
    namespace jit {
    }
    
    #include 'hphp/runtime/vm/jit/vasm-unit.h'
    
      /**
   * To enable SSL in addition to plaintext of the current server.
   */
  virtual bool enableSSLWithPlainText() {
    return false;
  }
    
    void emitSSwitch(IRGS& env, const ImmVector& iv) {
  const int numCases = iv.size() - 1;
    }
    
        jobject ToReflectedField(jclass cls, jfieldID fieldID, jboolean isStatic)
    { return functions->ToReflectedField(this, cls, fieldID, isStatic); }
    
      InstructionPointer libraryBase() const noexcept { return libraryBase_; }
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
#include <yoga/Yoga.h>
    
    NBIND_CLASS(Value)
{
    construct<>();
    construct<int, double>();
}
    
    void setAssertHandler(AssertHandler assertHandler) {
    gAssertHandler = assertHandler;
}
    
    
    {}

    
    
    {}

    
    #define FBCRASH(msg, ...) facebook::assertInternal('Fatal error (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__)
#define FBUNREACHABLE() facebook::assertInternal('This code should be unreachable (%s:%d)', __FILE__, __LINE__)
    
    namespace facebook {
namespace jni {
    }
    }