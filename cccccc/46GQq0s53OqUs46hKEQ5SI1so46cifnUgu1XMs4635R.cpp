
        
        
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    #ifndef CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
#define CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
    
    OPERATOR_SCHEMA(HalfToFloat)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT);
    }
    
            checkpoint[versionKey] = CurrentVersion();
        checkpoint[typeKey] = s_learnerTypeValue;
        checkpoint[sampleCountKey] = m_sampleCount;
        checkpoint[minibatchCountKey] = m_minibatchCount;
        checkpoint[sweepCountKey] = m_sweepCount;
        checkpoint[learningRateScheduleKey] = m_learningRateSchedule.Serialize();
        checkpoint[noiseInjectionSeedKey] = m_noiseInjectionSeed;
        checkpoint[masterParameterUpdatedKey] = m_masterParameterUpdated;
    
                tensorView = new TensorView<double>(slicedMatrixView, AsTensorViewShape(sliceViewShape));
            break;
        }
        case DataType::Float16:
        {
            auto currentMatrix = GetMatrix<half>();
            std::pair<size_t, size_t> currentMatrixDims = { currentMatrix->GetNumRows(), currentMatrix->GetNumCols() };
            std::shared_ptr<Matrix<half>> slicedMatrixView;
            if (sliceViewMatrixDims.first != currentMatrixDims.first)
                slicedMatrixView = make_shared<Matrix<half>>(currentMatrix->Reshaped(1, currentMatrix->GetNumElements()).ColumnSlice(flatBufferOffset, sliceViewShape.TotalSize()));
            else
                slicedMatrixView = make_shared<Matrix<half>>(currentMatrix->ColumnSlice(sliceMatrixColumnOffset, sliceViewMatrixDims.second));
    
    
    {    // Explicit template instantiations
    template /*static*/ CNTK_API ValuePtr Value::Create<float>(const NDShape& sampleShape, const std::vector<std::vector<float>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<double>(const NDShape& sampleShape, const std::vector<std::vector<double>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float16>(const NDShape& sampleShape, const std::vector<std::vector<float16>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<double>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float16>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float>(const NDShape& sampleShape, const std::vector<float>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<double>(const NDShape& sampleShape, const std::vector<double>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float16>(const NDShape& sampleShape, const std::vector<float16>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(const NDShape& sampleShape, const std::vector<float>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(const NDShape& sampleShape, const std::vector<double>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16> (const NDShape& sampleShape, const std::vector<float16>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float>(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<double>(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float16> (size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const float* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const double* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const float16* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template CNTK_API void Value::CopyVariableValueToVector<float>(const Variable& outputVariable, std::vector<std::vector<float>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<double>(const Variable& outputVariable, std::vector<std::vector<double>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float16>(const Variable& outputVariable, std::vector<std::vector<float16>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<double>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float16>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<float>(const Variable& outputVariable);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<double>(const Variable& outputVariable);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<float16>(const Variable& outputVariable);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<float>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<float>& nonZeroValues, size_t& numNonZeroValues);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<double>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<double>& nonZeroValues, size_t& numNonZeroValues);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<float16>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<float16>& nonZeroValues, size_t& numNonZeroValues);
    template float Value::AsScalar<float>() const;
    template double Value::AsScalar<double>() const;
    template float16 Value::AsScalar<float16>() const;
}

    
        // Executing this function from BrainScript merely sets up a lambda, but does not actually create any clone.
    // This is so that the function can be called multiple times in order to create multiple clones.
    CloneFunctionConfigLambda(const IConfigRecordPtr configp) :
        ConfigLambda(CreateParamNames(*configp), NamedParams(), [this](vector<ConfigValuePtr> &&args, NamedParams &&namedArgs, const std::wstring &exprName){ return this->DoClone(args, exprName); })
    {
        let& config = *configp;
        // input nodes
        inputNodes = GetInputNodes(config);
        // output nodes
        let outputNodesParam = config[L'outputNodes'];  // can be a node or a record
        if (outputNodesParam.Is<ComputationNodeBase>()) // scalar case: result is a single node
            outputNodes[L''] = outputNodesParam.AsPtr<ComputationNodeBase>(); // indicated by a '' node name in outputNodes[]
        else                                            // multi-valued case: result is a record of nodes
        {
            let& outputNodesRecord = outputNodesParam.AsRef<IConfigRecord>();
            for (let& nodeName : outputNodesRecord.GetMemberIds())
                outputNodes[nodeName] = outputNodesRecord[nodeName].AsPtr<ComputationNodeBase>();
            if (outputNodes.empty())
                InvalidArgument('CloneFunction: At least one output nodes must be specified.');
        }
        // treatment of parameters
        wstring parametersOption = config[L'parameters'];
        if      (parametersOption == L'learnable') parameterTreatment = ParameterTreatment::learnable;
        else if (parametersOption == L'constant')  parameterTreatment = ParameterTreatment::constant;
        else if (parametersOption == L'shared')    parameterTreatment = ParameterTreatment::shared;
        else InvalidArgument('CloneFunction: 'parameters' option must be 'learnable', 'constant', or 'shared'.');
    }
    
        /** Returns a new action that performs the exact reverse of the action. 
     *
     * @return A new action that performs the exact reverse of the action.
     * @js NA
     */
    virtual Action* reverse() const
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
    OrbitCamera * OrbitCamera::create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    OrbitCamera * obitCamera = new (std::nothrow) OrbitCamera();
    if(obitCamera && obitCamera->initWithDuration(t, radius, deltaRadius, angleZ, deltaAngleZ, angleX, deltaAngleX))
    {
        obitCamera->autorelease();
        return obitCamera;
    }
    
    delete obitCamera;
    return nullptr;
}
    
        /** 
     * Creates the action with and X factor and a Y factor.
     * @param duration Duration time, in seconds.
     * @param sx Scale factor of x.
     * @param sy Scale factor of y.
     * @return An autoreleased ScaleBy object.
     */
    static ScaleBy* create(float duration, float sx, float sy);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionPageTurn3D.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    void PolygonInfo::setTriangles(const TrianglesCommand::Triangles& other)
{
    this->releaseVertsAndIndices();
    _isVertsOwner = false;
    
    this->triangles.vertCount = other.vertCount;
    this->triangles.indexCount = other.indexCount;
    this->triangles.verts = other.verts;
    this->triangles.indices = other.indices;
}
    
        /**
     * set the data to be a pointer to a number of Quads
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad quads
     */
    void setQuads(V3F_C4B_T2F_Quad *quads, int numberOfQuads);
    
    class DB;
    
      virtual Status Read(uint64_t offset, size_t n, Slice* result,
                      char* scratch) const override;
    
      // In this example, we set the snapshot multiple times.  This is probably
  // only necessary if you have very strict isolation requirements to
  // implement.
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = txn_db->Put(write_options, 'xyz', 'zzz');
    
      bool term_supports_color = false;
  for (const char* candidate : SUPPORTED_TERM_VALUES) {
    if (term && 0 == strcmp(term, candidate)) {
      term_supports_color = true;
      break;
    }
  }
    
    // Parses 'str' for a double.  If successful, writes the result to *value and
// returns true; otherwise leaves *value unchanged and returns false.
bool ParseDouble(const std::string& src_text, const char* str, double* value) {
  // Parses the environment variable as a decimal integer.
  char* end = nullptr;
  const double double_value = strtod(str, &end);  // NOLINT
    }
    
    
    {}  // end namespace benchmark
    
    #ifdef BENCHMARK_OS_EMSCRIPTEN
#include <emscripten.h>
#endif
    
    namespace {
    }
    
    #endif

    
    #define RELEASE(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(release_capability(__VA_ARGS__))
    
            // We don't care for comparison result here; the previous value will be stored into value anyway.
        // Also we don't care for rbx and rcx values, they just have to be equal to rax and rdx before cmpxchg16b.
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %%rbx, %%rax\n\t'
            'movq %%rcx, %%rdx\n\t'
            'lock; cmpxchg16b %[storage]\n\t'
            'movq %%rax, %[value]\n\t'
            'movq %%rdx, 8+%[value]\n\t'
            : [value] '=o' (value)
            : [storage] 'm' (storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %%rbx, %%rax\n\t'
            'movq %%rcx, %%rdx\n\t'
            'lock; cmpxchg16b %[storage]\n\t'
            'movq %%rax, 0(%[value])\n\t'
            'movq %%rdx, 8(%[value])\n\t'
            :
            : [storage] 'm' (storage), [value] 'r' (&value)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    
        static BOOST_FORCEINLINE storage_type fetch_or(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR16_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR16_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR16_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR16(&storage, v));
            break;
        }
        return v;
    }