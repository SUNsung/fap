
        
        namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
        // Operator signature declaration.
    // It defines input formal parameter, output formal parameters and
    // attributes.
    // Once an operator signature created, it's 'Read-Only'.
    class OpSignature
    {
    public:
    }
    
            std::string Status::ToString() const
        {
            if (m_state == nullptr)
            {
                return std::string('OK');
            }
    }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(ScaledTanh)
        .Description('ScaledTanh takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the scaled hyperbolic tangent function, '
            'f(x) = alpha*tanh⁡(beta*x), is applied to the  tensor elementwise.')
        .Input('input', 'Input tensor, typically 1-D.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT);
    
    // This class stores sequence data for HTK for doubles.
struct HTKDoubleSequenceData : DenseSequenceData
{
    HTKDoubleSequenceData(FeatureMatrix& data, const NDShape& frameShape)
        : m_buffer(data.GetData(), data.GetData() + data.GetTotalSize()),
          m_frameShape(frameShape)
    {
        m_numberOfSamples = (uint32_t)data.GetNumberOfColumns();
        if (m_numberOfSamples != data.GetNumberOfColumns())
            RuntimeError('Maximum number of samples per sequence exceeded.');
    }
    }
    
    void THDTensor_(_resize5d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2, int64_t size3, int64_t size4) {
  int64_t sizes[] = {size0, size1, size2, size3, size4};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
      assert(peekType(msg) == thpp::Type::LONG_STORAGE);
  THLongStorage *storage2 = unpackTHLongStorage(msg);
  assert(storage2->size == STORAGE_SIZE);
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    assert(storage2->data[i] == i);
  
  int vec_size = unpackInteger(msg);
  assert(vec_size == VEC_SIZE);
  for (int i = 0; i < VEC_SIZE; i++)
    assert(unpackInteger(msg) == 7);
    
    static uint64_t createSeed(std::random_device& rd)
{
  // limit to 53 bits to ensure unique representation in double
  uint64_t seed = (((uint64_t)rd()) << 32) + rd();
  return seed & 0x1FFFFFFFFFFFFF;
}
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    
    {  // input * weights + bias -> output_features
  Tensor output = self.type().tensor({
    olen,
    input_size[1],
    weight_size[2],
  });
  output.copy_(bias.expand(output.sizes()));
  for (int k = 0; k < kw; k++) {
    int iShift = std::max(0, static_cast<int>(k - real_pad));
    int oShift = std::max(0, static_cast<int>(real_pad - k));
    int t = std::min(ilen + real_pad - k, olen) - oShift;
    // Note: gemm assumes column-major matrices
    // input    is l*m (row-major)
    // weight   is m*r (row-major)
    // output   is l*r (row-major)
    if (t > 0) {
      auto W = weight[k];
      auto I = self.narrow(0, iShift, t).view({t * batchSize, inputPlanes});
      auto O = output.narrow(0, oShift, t).view({t * batchSize, outputPlanes});
      O.addmm_(I, W);
    }
  }
  return output;
}
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHShortTensor(THShortTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Short).unsafeTensorFromTH((void*)tensor, true);
}