
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Status BatchNormExpanderVisitor::HandleBatchNormGrad(
    HloInstruction* batch_norm) {
  // Use the following formulas to calculate gradients:
  // scale_grad =
  //   sum(output_grad * (activation - mean(activation))) * rsqrt(var + epsilon)
  //
  // offset_grad =
  //   sum(output_grad)
  //
  // activation_grad =
  //   1/N * scale * rsqrt(var + epsilon) *
  //   (N * output_grad - sum(output_grad) - (activation - mean(activation)) *
  //   sum(output_grad * (activation - mean(activation))) / (variance +
  //   epsilon))
  if (!rewrite_grad_op_) {
    return Status::OK();
  }
  std::vector<HloInstruction*> added_instructions;
  auto add = [&](std::unique_ptr<HloInstruction> inst) {
    HloInstruction* added_inst = computation_->AddInstruction(std::move(inst));
    added_inst->set_metadata(batch_norm->metadata());
    added_instructions.push_back(added_inst);
    return added_inst;
  };
  auto add_binary = [&](const Shape& shape, const HloOpcode opcode,
                        HloInstruction* a, HloInstruction* b) {
    return add(HloInstruction::CreateBinary(shape, opcode, a, b));
  };
  int64 instruction_count_before = computation_->instruction_count();
    }
    
    class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
    The input audio has one row of the tensor for each channel in the audio file.
Each channel contains audio samples starting at the beginning of the audio and
having `1/samples_per_second` time between them. The output file will contain
all of the audio channels contained in the tensor.
    
    
    {
    {    std::map<string, const NodeDef*> node_lookup;
    MapNamesToNodes(result, &node_lookup);
    EXPECT_EQ('', node_lookup.at('mul_node1')->device());
    EXPECT_EQ('', node_lookup.at('add_node2')->device());
  }
};
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  std::lock_guard<std::mutex> guard(mutex);
  return handles[device].handle;
}
    
        // Checks if input strides can be viewed as embedded.
    // See NOTE [ cuFFT Embedded Strides ].
    //
    // TODO: Figure out why windows fails to compile
    //         at::optional<std::vector<long long int>> inembed_opt = at::nullopt;
    //       Then move the following to a helper function.
    std::vector<long long int> inembed(signal_ndim);
    if (!clone_input) {
      auto istrides = input.strides();
      auto last_istride = istrides[signal_ndim];
      clone_input = last_istride <= 0;
      for (auto i = signal_ndim - 1; !clone_input && i > 0 /* inembed[0] doesn't matteer */; i--) {
        auto istride = istrides[i];
        if (istride > 0 && istride % last_istride == 0) {
          inembed[i] = istride / last_istride;
          last_istride = istride;
        } else {
          clone_input = true;
        }
      }
    }
    
      // Tests that moving works as expected and preserves the stream
  at::cuda::CUDAStream moveStream;
  {
    auto s = at::cuda::createCUDAStream();
    device = s.device();
    cuda_stream = s.stream();
    }
    
        auto it = free_blocks.lower_bound(&search_key);
    if (it != free_blocks.end() && (*it)->device == device && (*it)->stream == stream) {
      block = *it;
      free_blocks.erase(it);
    } else {
      void* ptr;
      size_t alloc_size = small ? kSmallAlloc : size;
      err = cuda_malloc_retry(device, &ptr, alloc_size);
      if (err != cudaSuccess) {
        return err;
      }
      stats.increaseCached(alloc_size);
      block = new Block(device, stream, alloc_size, (char*)ptr);
    }
    
          case CUBLAS_STATUS_ARCH_MISMATCH:
        errmsg = 'an absent device architectural feature is required';
        break;
    
    THC_API THCStream* THCStream_newWithPriority(int flags, int priority) {
  return at::cuda::detail::CUDAStream_createAndRetainWithOptions(flags, priority);
}
    
            typedef std::vector<shared_ptr<const msra::dbn::latticesource::latticepair>>* LatticePtr;
        typedef std::vector<size_t>* UidPtr;
        typedef std::vector<size_t>* ExtrauttMapPtr;
        typedef std::vector<size_t>* BoundariesPtr;
        typedef StreamMinibatchInputs Matrices;
    
    enum MappingType
{
    mappingNone = 0,          // not a mapped file
    mappingParent = 1,        // parent owns view mapping for this section
    mappingFile = 2,          // map the entire file in one view
    mappingSectionAll = 3,    // each section has it's own view (and all subsections)
    mappingSection = 4,       // each section has it's own view (but doesn't include subsections)
    mappingElementWindow = 5, // each subsection has it's own view, and this section has a separate view window for elements
};
    
    
    {
    {            // get the average mean and variance across all the workers
            for (auto& parameter : learnParamsValues)
            {
                (*parameter) /= (ElemType)m_mpi->NumNodesInUse();
            }
        }
    }
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
    vector<wstring> /*IConfigRecord::*/ ComputationNodeBase::GetMemberIds() const
{
    return vector<wstring>{ L'name', L'operation', L'dim', L'dims', /*L'tag', */L'inputs', OperationName() + L'Args' };
}
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    
    {  ASSERT_TRUE(YGNodeLayoutGetHadOverflow(root));
}

    
        Size callMeasureFunc(double width, int widthMode, double height, int heightMode) const;
    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
      // Only allow implicit upcasts. A downcast will result in a compile error
  // unless you use static_cast (which will end up invoking the explicit
  // operator below).
  template <typename U>
  RefPtr(RefPtr<U>&& ref, typename std::enable_if<std::is_base_of<T,U>::value, U>::type* = nullptr) :
    m_ptr(nullptr)
  {
    *this = std::move(ref);
  }