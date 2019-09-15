
        
          Status block_status = stream.BlockHostUntilDone();
  if (!block_status.ok()) {
    return InternalError(
        'Failed to retrieve branch_index value on stream %p: %s.', &stream,
        block_status.error_message());
  }
  if (branch_index_is_bool_) {
    branch_index = pred ? 0 : 1;
  } else {
    // Handle default scenario for branch_index not in [0, num_branches).
    if (branch_index < 0 || branch_index >= hlo_instruction()->branch_count()) {
      branch_index = hlo_instruction()->branch_count() - 1;
    }
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/compiler/xla/service/gpu/copy_thunk.h'
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    // Thunk to run a GPU custom call.
//
// This thunk's `ExecuteOnStream` implementation executes a host function
// `call_target` which is expected to enqueue operations onto the GPU.
//
// For information about the calling convention, see xla/g3doc/custom_call.md
//
// Note that not all kCustomCall HLOs in XLA:GPU end up being run by this thunk.
// XLA itself creates kCustomCall instructions when lowering kConvolution HLOs
// into calls to cudnn.  These internally-created custom-calls are run using
// ConvolutionThunk, not CustomCallThunk.  There's no ambiguity because they
// have special call target names (e.g. '__cudnn$convForward') that only the
// compiler is allowed to create.
class CustomCallThunk : public Thunk {
 public:
  CustomCallThunk(
      void* call_target,
      std::vector<ShapeTree<BufferAllocation::Slice>> operand_slices,
      ShapeTree<BufferAllocation::Slice> result_slices, std::string opaque,
      const HloInstruction* instr);
    }
    
    namespace xla {
namespace gpu {
    }
    }
    
    
    {          // Create a buffer of pointers for non-leaf buffers.
          CHECK_EQ(tuple_element_count, inner_tuple_element_addresses.size());
          auto host_size = inner_tuple_element_addresses.size() * sizeof(void*);
          se::DeviceMemoryBase tuple_address =
              buffer_allocations.GetDeviceAddress(
                  infeed_slices_.element(index));
          stream.ThenMemcpy(&tuple_address,
                            inner_tuple_element_addresses.data(), host_size);
          tuple_element_addresses->push_back(tuple_address.opaque());
        };
    
    Status Memset32BitValueThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase dest_data =
      params.buffer_allocations->GetDeviceAddress(dest_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemset32(&dest_data, value_, dest_data.size());
  return Status::OK();
}
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_MEMSET_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_MEMSET_THUNK_H_
    
    #include 'absl/strings/str_cat.h'
#include 'absl/strings/str_format.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/types.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/stream_executor/blas.h'
#include 'tensorflow/stream_executor/device_memory.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  EXPECT_EQ(5, computation->instruction_count());
  EXPECT_FALSE(HasInstruction(*computation, dead_negate));
  EXPECT_FALSE(HasInstruction(*computation, dead_add));
  EXPECT_TRUE(HasInstruction(*computation, dead_negate_with_control_dep));
  EXPECT_TRUE(HasInstruction(*computation, dead_add_with_control_dep));
}
    
        xla::XlaBuilder* builder = ctx->builder();
    xla::XlaOp labels;
    OP_REQUIRES_OK(ctx,
                   XlaHelpers::OneHot(
                       builder, depth, /*axis=*/1, input_type(1), labels_shape,
                       indices, XlaHelpers::One(builder, logits_type),
                       XlaHelpers::Zero(builder, logits_type), &labels));
    
    #endif  // NATIVE_MATE_NATIVE_MATE_PERSISTENT_DICTIONARY_H_

    
    namespace {
    }
    
    #include 'base/bind.h'
#include 'base/debug/leak_annotations.h'
#include 'base/logging.h'
#include 'content/public/browser/browser_thread.h'
#include 'shell/browser/ui/views/global_menu_bar_x11.h'
    
    
    {}  // namespace electron
    
    void DesktopCapturer::OnSourceNameChanged(DesktopMediaList* list, int index) {}
    
    namespace api {
    }
    
    KNOWN_STDLIB_TYPE_DECL(AnyKeyPath, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(PartialKeyPath, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyPath, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(WritableKeyPath, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(ReferenceWritableKeyPath, NominalTypeDecl, 2)
    
    static uint64_t uint64ToStringImpl(char *Buffer, uint64_t Value,
                                   int64_t Radix, bool Uppercase,
                                   bool Negative) {
  char *P = Buffer;
  uint64_t Y = Value;
    }
    
    /// This class stores a lexical scope as it is represented in the
/// debug info. In contrast to LLVM IR, SILDebugScope also holds all
/// the inlining information. In LLVM IR the inline info is part of
/// DILocation.
class SILDebugScope : public SILAllocated<SILDebugScope> {
public:
  /// The AST node this lexical scope represents.
  SILLocation Loc;
  /// Always points to the parent lexical scope.
  /// For top-level scopes, this is the SILFunction.
  PointerUnion<const SILDebugScope *, SILFunction *> Parent;
  /// An optional chain of inlined call sites.
  ///
  /// If this scope is inlined, this points to a special 'scope' that
  /// holds the location of the call site.
  const SILDebugScope *InlinedCallSite;
    }
    
    /// The different components that can appear in a TypeImportInfo sequence.
///
/// The declaration order here is the canonical order for these components
/// in the sequence; the sequence is ill-formed if they are out of order.
///
/// Note that the ABI name (or the ordinary formal name, which
/// immediately precedes it), symbol namespace, and related entity
/// name together form the identity of the TypeImportInfo.
enum class TypeImportComponent : char {
  ABIName = 'N',
  SymbolNamespace = 'S',
  RelatedEntityName = 'R',
};
    
      std::string mangleWitnessThunk(const ProtocolConformance *Conformance,
                                 const ValueDecl *Requirement);
    
    
    {  /// Retrieve the location of the ith argument label.
  SourceLoc getArgumentLabelLoc(unsigned i) const {
    auto locs = getArgumentLabelLocs();
    return i < locs.size() ? locs[i] : SourceLoc();
  }
};
    
    #endif // SWIFT_AST_TYPE_RESOLUTION_STAGE_H

    
    	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
    
      const long long element_size = element_stop - element_start;
    
    ogg_int64_t oc_bexp64(ogg_int64_t _z);
ogg_int64_t oc_blog64(ogg_int64_t _w);
    
    #if CONFIG_VP9_HIGHBITDEPTH
static INLINE tran_high_t highbd_check_range(tran_high_t input,
                                             int bd) {
#if CONFIG_COEFFICIENT_RANGE_CHECKING
  // For valid highbitdepth VP9 streams, intermediate stage coefficients will
  // stay within the ranges:
  // - 8 bit: signed 16 bit integer
  // - 10 bit: signed 18 bit integer
  // - 12 bit: signed 20 bit integer
  const int32_t int_max = (1 << (7 + bd)) - 1;
  const int32_t int_min = -int_max - 1;
  assert(int_min <= input);
  assert(input <= int_max);
  (void) int_min;
#endif  // CONFIG_COEFFICIENT_RANGE_CHECKING
  (void) bd;
  return input;
}
    
    #ifndef VPX_PORTS_VPX_ONCE_H_
#define VPX_PORTS_VPX_ONCE_H_
    
    #if defined(MBEDTLS_GCM_C) && (                                        \
        !defined(MBEDTLS_AES_C) && !defined(MBEDTLS_CAMELLIA_C) )
#error 'MBEDTLS_GCM_C defined, but not all prerequisites'
#endif
    
    
    {
    {
    {      // 'key5' would be written in a new memtable and log
      Put('key5', DummyString(1024));
      dbfull()->FlushWAL(false);
      {
        // this iter would miss 'key4' if not fixed
        auto iter = OpenTransactionLogIter(0);
        ExpectRecords(5, iter);
      }
    } while (ChangeCompactOptions());
  }
}
#endif
    
    
    {}  // namespace rocksdb
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
      // initialize BlockBasedTableOptions
  auto cache = NewLRUCache(1 * 1024 * 1024 * 1024);
  BlockBasedTableOptions bbt_opts;
  bbt_opts.block_size = 32 * 1024;
  bbt_opts.block_cache = cache;
    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }