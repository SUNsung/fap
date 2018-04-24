
        
                    // Constructor.
            explicit FormalParameter(const std::string& p_name,
                const std::string& p_type,
                const std::string& p_description,
                const TypeConstraintMap& p_constraintMap = TypeConstraintMap());
    
                    if (IsLittleEndianOrder())
                {
                    memcpy((void*)p_data, (void*)buff, raw_data.size() * sizeof(char));
                }
                else
                {
                    for (size_t i = 0; i < raw_data.size(); i += typeSize, buff += typeSize)
                    {
                        T result;
                        const char* tempBytes = reinterpret_cast<char*>(&result);
                        for (size_t j = 0; j < typeSize; ++j)
                        {
                            memcpy((void*)&tempBytes[j], (void*)&buff[typeSize - 1 - i], sizeof(char));
                        }
                        p_data[i] = result;
                    }
                }
    
            bool OpUtils::IsValidDataTypeString(const std::string& p_dataType)
        {
            TypesWrapper& t = TypesWrapper::GetTypesWrapper();
            const auto& allowedSet = t.GetAllowedDataTypes();
            return (allowedSet.find(p_dataType) != allowedSet.end());
        }
    
    namespace ONNXIR {
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Split)
        .Description('Split a tensor into a list of tensors, along the specified 'axis'. '
            'The lengths of the split can be specified using argument 'axis' or '
            'optional second input blob to the operator. Otherwise, the tensor is split '
            'to equal sized parts.')
        .Input('input', 'The tensor to split', 'T')
        .Input('split', 'Optional list of output lengths (see also arg 'split')', 'T')
        .Output('output', 'A list of output tensors', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axis', 'Which axis to split on', AttrType::AttributeProto_AttributeType_INT)
        .Attr('split', 'Number of tensors to output.', AttrType::AttributeProto_AttributeType_INTS);
    
        // Returns all frames of a given utterance.
    msra::dbn::matrixstripe GetUtteranceFrames(size_t index) const
    {
        if (!IsInRam())
        {
            LogicError('GetUtteranceFrames was called when data have not yet been paged in.');
        }
    }
    
        void GetSequence(size_t sequenceIndex, vector<SequenceDataPtr>& result) override
    {
        return GetSequence<float>(sequenceIndex, result);
    }
    
    template<typename T>
std::shared_ptr<thpp::THTensor<T>> buildTensor(std::vector<int64_t> shape, T value) {
  auto tensor = std::make_shared<thpp::THTensor<T>>();
  tensor->resize(shape);
  tensor->fill(value);
  return tensor;
}
    
    
    {  auto int_tensor = buildTensor<int>({1, 2, 3, 4, 5}, -1);
  data_channel->scatter(raw_tensors, *int_tensor, 0);
  ASSERT_TENSOR_VALUE(int, *int_tensor, data_channel->getRank())
}
    
      assert(peekType(msg) == thpp::Type::INT);
  int64_t arg3 = unpackInteger(msg);
  assert(arg3 == -12);
    
      // Record the requested buffer size.
  osquery.buf_size = size;
  // Allocate a contiguous region of memory.
  osquery.buffer = IOMallocAligned(osquery.buf_size, PAGE_SIZE);
  // Cannot proceed if no memory to back the circular queue is available.
  if (osquery.buffer == NULL) {
    err = -EINVAL;
    goto error_exit;
  }