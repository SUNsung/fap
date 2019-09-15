
        
        
    {  tensorflow::mutex mu_;
  absl::flat_hash_map<se::Stream*, CusolverContext> contexts_ GUARDED_BY(mu_);
};
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
              const int64 tuple_element_count = ShapeUtil::TupleElementCount(shape);
          index.push_back(0);
          std::vector<void*> inner_tuple_element_addresses;
          for (int64 i = 0; i < tuple_element_count; ++i) {
            index.back() = i;
            copy_tuple_contents(&inner_tuple_element_addresses);
          }
          index.pop_back();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  const int64 replica_count_;
  const int64 element_count_;
  const BufferAllocation::Slice source_buffer_;
  const BufferAllocation::Slice destination_buffer_;
  std::unique_ptr<AuxData> aux_data_;
};
    
    Status SequentialThunk::Initialize(const GpuExecutable& executable,
                                   se::StreamExecutor* executor) {
  for (auto& thunk : thunks_) {
    TF_RETURN_IF_ERROR(thunk->Initialize(executable, executor));
  }
  return Status::OK();
}
    
    // A thunk that wraps a list of sub-thunks. Executing this thunk executes all
// the sub-thunks sequentially. This is useful to implement instructions that
// require multiple kernel launches or library calls.
class SequentialThunk : public Thunk {
 public:
  SequentialThunk(std::vector<std::unique_ptr<Thunk>> thunks,
                  const HloInstruction* hlo);
  SequentialThunk(const SequentialThunk&) = delete;
  SequentialThunk& operator=(const SequentialThunk&) = delete;
    }
    
      const BufferAllocation::Slice a_buffer_;
  const BufferAllocation::Slice b_buffer_;
    
        void BackpropTo_ReduceSequenceAxis(size_t inputIndex)
    {
        auto input0MBLayout = InputRef(0).GetMBLayout();
        auto numSequences = input0MBLayout->GetNumSequences(); // b*
        auto maxNumTimeSteps = input0MBLayout->GetNumTimeSteps(); // s*
        size_t m = InputRef(0).GetSampleLayout()[0];
        size_t k = InputRef(1).GetSampleLayout()[0];
    }
    
                    fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BSyncPeriodInSamples'); 
                fstream << m_syncPeriodPerWorker; 
                fstream.PutMarker(FileMarker::fileMarkerEndSection, L'ESyncPeriodInSamples');
    
        wstring origModelFileName = config(L'origModelFileName', L'');
    wstring refNodeName = config(L'refNodeName', L'');
    
            if (m_doesEveryNodesShouldSynced)
            multiverso::SetCMDFlag('sync', true);
    
    
    // -------------------------------------------------------------------
    // DecimateMinibatch - decimate minibatch for parallelization
    // -------------------------------------------------------------------
    // non-inplace decimation , to be used in subminibatch implementation
    // returns a subset of parallel sequences
    template <class ElemType>
    static pair<size_t, size_t> DecimateMinibatch(const StreamMinibatchInputs& MB,    // input matrices
                                                  StreamMinibatchInputs& decimatedMB, // output decimated matrices.
                                                  MBLayoutPtr pMBLayout,              // input MBLayout
                                                  MBLayoutPtr& pDecimateMBLayout,     // output decimated MBLayout (note: cannot work in-place)
                                                  size_t numProcs, size_t rank)
    {
        size_t numParallelSequences = pMBLayout->GetNumParallelSequences();
        size_t nT = pMBLayout->GetNumTimeSteps();
    }