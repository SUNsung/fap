
        
        
    {  // No-ops since the C binding does not support key shortening methods.
  virtual void FindShortestSeparator(std::string*, const Slice&) const { }
  virtual void FindShortSuccessor(std::string* key) const { }
};
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
    
    {  input.remove_prefix(kHeader);
  Slice key, value;
  int found = 0;
  while (!input.empty()) {
    found++;
    char tag = input[0];
    input.remove_prefix(1);
    switch (tag) {
      case kTypeValue:
        if (GetLengthPrefixedSlice(&input, &key) &&
            GetLengthPrefixedSlice(&input, &value)) {
          handler->Put(key, value);
        } else {
          return Status::Corruption('bad WriteBatch Put');
        }
        break;
      case kTypeDeletion:
        if (GetLengthPrefixedSlice(&input, &key)) {
          handler->Delete(key);
        } else {
          return Status::Corruption('bad WriteBatch Delete');
        }
        break;
      default:
        return Status::Corruption('unknown WriteBatch tag');
    }
  }
  if (found != WriteBatchInternal::Count(this)) {
    return Status::Corruption('WriteBatch has wrong count');
  } else {
    return Status::OK();
  }
}
    
      // Return a string that contains the copy of the referenced data.
  std::string ToString() const { return std::string(data_, size_); }
    
            enum Type
        {
            // A main graph.
            Main = 1,
            // A sub graph (function).
            Sub = 2,
            // A graph with strict type checking.
            Strict = 4,
        };
    
    namespace ONNXIR
{
    namespace Common
    {
        Status::Status(StatusCategory p_category, int p_code, const std::string& p_msg)
        {
            m_state.reset(new State());
            m_state->m_category = p_category;
            m_state->m_code = p_code;
            m_state->m_msg = p_msg;
        }
    }
    }
    
    namespace ONNXIR
{
    namespace Utils
    {
        class TensorUtils
        {
        public:
#define DEFINE_UNPACK_TENSOR(T, Type, fieldName, fieldSize)                                                                    \
    static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/T* p_data, int64_t p_expected_size)           \
    {                                                                                                                          \
        if (Type != p_tensor.data_type()                                                                                       \
            || nullptr == p_data)                                                                                              \
        {                                                                                                                      \
            return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::INVALID_ARGUMENT);                        \
        }                                                                                                                      \
        if (p_tensor.has_raw_data())                                                                                           \
        {                                                                                                                      \
            if (p_tensor.raw_data().size() != (p_expected_size) * sizeof(T))                                                   \
                return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::FAIL,                                 \
                                               'UnpackTensor: the pre-allocate size does not match the raw data size');        \
            UnpackTensorWithRawData(p_tensor, p_data);                                                                         \
            return Common::Status::OK();                                                                                       \
        }                                                                                                                      \
        if (p_tensor.fieldSize() != p_expected_size)                                                                           \
            return Common::Status(Common::StatusCategory::ONNX, Common::StatusCode::FAIL,                                     \
                                            'UnpackTensor: the pre-allocate size does not match the size in proto');           \
        for (auto elem : p_tensor.fieldName())                                                                                 \
        {                                                                                                                      \
            *p_data++ = static_cast<T>(elem);                                                                                  \
        }                                                                                                                      \
        return Common::Status::OK();                                                                                           \
    }
    }
    }
    }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Identity)
        .Description('Identity takes one input data (Tensor<T>) and produces one '
            'output data (Tensor<T>) where the function, y = x, is applied to the '
            'tensor elementwise.')
        .Input('input', 'input tensor', 'T')
        .Output('output', 'output tensor', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Ceil)
        .Description('Ceil takes one input data (Tensor<T>) and produces one output data'
            '(Tensor<T>) where the ceil is, y = ceil(x), is applied to'
            'the tensor elementwise.')
        .Input('input', 'Input tensor of any shape', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
    // Gets sequences for a particular chunk.
// This information is used by the randomizer to fill in current windows of sequences.
void HTKDeserializer::SequenceInfosForChunk(ChunkIdType chunkId, vector<SequenceInfo>& result)
{
    const HTKChunkInfo& chunk = m_chunks[chunkId];
    result.reserve(m_frameMode ? chunk.GetTotalFrames() : chunk.GetNumberOfUtterances());
    size_t offsetInChunk = 0;
    for (size_t i = 0; i < chunk.GetNumberOfUtterances(); ++i)
    {
        auto utterance = chunk.GetUtterance(i);
        // Currently we do not support common prefix, so simply assign the minor to the key.
        size_t sequence = utterance->GetId();
    }
    }
    
        // Let's check that there is no outstanding copies.
    // Wait on all events if there are any pending copy operations in flight.
    if (m_dataTransferers[m_currentDataTransferIndex])
        m_dataTransferers[m_currentDataTransferIndex]->WaitForCopyCPUToGPU();
    
            // get data as long vectors
        // ... why do I need to explicitly use operator T ()?
        array_ref<msra::math::float4> us4(us.operator array_ref<msra::math::float4>());
        const_array_ref<msra::math::float4> other4(other.operator const_array_ref<msra::math::float4>());
        assert(us4.size() == other4.size());
    
    struct ExceptionInfo {
  const std::type_info* type{nullptr};
  // The values in frames are IP (instruction pointer) addresses.
  // They are only filled if the low-level exception tracer library is
  // linked in or LD_PRELOADed.
  std::vector<uintptr_t> frames; // front() is top of stack
};
    
      /**
   * Return true if all IOBufs in this chain are managed by the usual
   * refcounting mechanism (and so the lifetime of the underlying memory
   * can be extended by clone()).
   */
  bool isManaged() const {
    const IOBuf* current = this;
    while (true) {
      if (!current->isManagedOne()) {
        return false;
      }
      current = current->next_;
      if (current == this) {
        return true;
      }
    }
  }
    
    #include <folly/Exception.h>
    
    [[noreturn]] void usage(const char* name) {
  std::cerr << folly::format(
      'Usage: {0}\n'
      '         list all huge page sizes and their mount points\n'
      '       {0} -cp <src_file> <dest_nameprefix>\n'
      '         copy src_file to a huge page file\n',
      name);
  exit(1);
}
    
      /**
   * Get the maximum buffer size for this AsyncFileWriter, in bytes.
   */
  size_t getMaxBufferSize() const;