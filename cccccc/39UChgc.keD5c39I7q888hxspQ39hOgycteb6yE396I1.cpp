
        
        // Implements the part of the interface that caches and returns remote
// device status attributes.
class WorkerCachePartial : public WorkerCacheInterface {
 public:
  bool GetDeviceLocalityNonBlocking(const string& device,
                                    DeviceLocality* locality) override;
    }
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
      // Writes all output to the file. Does *not* close the WritableFile.
  //
  // After calling Close(), any further calls to `WriteRecord()` or `Flush()`
  // are invalid.
  Status Close();
    
    class TFRecordReader : public ReaderBase {
 public:
  TFRecordReader(const string& node_name, const string& compression_type,
                 Env* env)
      : ReaderBase(strings::StrCat('TFRecordReader '', node_name, ''')),
        env_(env),
        offset_(0),
        compression_type_(compression_type) {}
    }
    
    
    {    OP_REQUIRES_OK(
        context, context->GetAttr('samples_per_second', &samples_per_second_));
    OP_REQUIRES(context, samples_per_second_ > 0,
                errors::InvalidArgument('samples_per_second must be > 0.'));
    OP_REQUIRES_OK(context,
                   context->GetAttr('bits_per_second', &bits_per_second_));
  }
    
    template <typename T>
__global__ void DynamicStitchKernel(const int32 slice_size,
                                    const int32 output_size,
                                    CudaDeviceArrayStruct<int32> input_indices,
                                    CudaDeviceArrayStruct<const T*> input_ptrs,
                                    T* output) {
  int32* data_indices = GetCudaDeviceArrayOnDevice(&input_indices);
  const T** data_ptrs = GetCudaDeviceArrayOnDevice(&input_ptrs);
  CUDA_1D_KERNEL_LOOP(output_index, output_size) {
    const int32 slice_id = output_index / slice_size;
    const int32 slice_offset = output_index % slice_size;
    const int32 input_index = data_indices[slice_id];
    if (input_index != -1) {
      output[output_index] = ldg(data_ptrs[input_index] + slice_offset);
    }
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/kernels/cwise_ops_gpu_common.cu.h'
    
    template<> inline
dnnError_t dnnSplitCreate<float>(
    dnnPrimitive_t* pSplit,
    dnnPrimitiveAttributes_t attributes,
    const size_t N,
    dnnLayout_t src,
    size_t dst[])
{
    return dnnSplitCreate_F32(pSplit, attributes, N, src, dst);
}
    
        void Value::GetSequenceStartsAndLengths(const NDMaskPtr& mask, std::vector<ptrdiff_t>& sequenceBeginIndices, std::vector<size_t>& sequenceLengths, size_t numDynamicAxes)
    {
        if (!mask)
            return;
    }
    
        // dot-product of vectors in matrix format (matrix type, but only one column)
    float dotprod(const ssematrixbase &other) const
    {
        // assert(other.cols() == 1);
        // assert(cols() == 1);
        assert(rows() == other.rows());
        assert(cols() == other.cols());
        float result = 0.0f;
        float tmpresult = 0.0f;
        for (size_t j = 0; j < cols(); j++)
        {
            dotprod(this->col(j), other.col(j), tmpresult);
            result += tmpresult;
        }
        return result;
    }
    
    GPUDataTransferer::GPUDataTransferer(int deviceId, bool useConcurrentStreams) 
{
#pragma warning(disable : 4127)
    if (useConcurrentStreams && (s_fetchStream == NULL))
    {
        cudaStreamCreateWithFlags(&s_fetchStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
        cudaStreamCreateWithFlags(&s_assignStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
    }
    }
    
                shared_ptr<ComputationNode<ElemType>> runMeanNode = static_pointer_cast<ComputationNode<ElemType>>(runMeanParameterPtr);
            shared_ptr<ComputationNode<ElemType>> runStdNode  = static_pointer_cast<ComputationNode<ElemType>>(runStdParameterPtr);
    
    // ---------------------------------------------------------------------------
// latticesource -- manages loading of lattices for MMI (in pairs for numer and denom)
// ---------------------------------------------------------------------------
    
    // ===================================================================
// behave like a config
// This allows to access nodes inside a network as if it was an IConfigRecord.
// This is meant to be used by whatever we will replace MEL.
// ===================================================================