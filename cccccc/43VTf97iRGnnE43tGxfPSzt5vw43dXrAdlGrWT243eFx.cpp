
        
        // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    void SharedCodeGenerator::GenerateDescriptors(io::Printer* printer) {
  // Embed the descriptor.  We simply serialize the entire FileDescriptorProto
  // and embed it as a string literal, which is parsed and built into real
  // descriptors at initialization time.  We unfortunately have to put it in
  // a string literal, not a byte array, because apparently using a literal
  // byte array causes the Java compiler to generate *instructions* to
  // initialize each and every byte of the array, e.g. as if you typed:
  //   b[0] = 123; b[1] = 456; b[2] = 789;
  // This makes huge bytecode files and can easily hit the compiler's internal
  // code size limits (error 'code to large').  String literals are apparently
  // embedded raw, which is what we want.
  FileDescriptorProto file_proto;
  file_->CopyTo(&file_proto);
    }
    
      // write central directory
  io::CodedOutputStream output(raw_output_);
  for (int i = 0; i < num_entries; ++i) {
    const string &filename = files_[i].name;
    uint16 filename_size = filename.size();
    uint32 crc32 = files_[i].crc32;
    uint32 size = files_[i].size;
    uint32 offset = files_[i].offset;
    }
    
    
    {  GOOGLE_LOG_IF(DFATAL, end - start != text.size() || *start == '-')
    << ' Tokenizer::ParseFloat() passed text that could not have been'
       ' tokenized as a float: ' << CEscape(text);
  return result;
}
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    REGISTER_CPU_OPERATOR(
    MergeSingleListFeatureTensorsGradient,
    MergeSingleListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleListFeatureTensorsGradient)
    .SetDoc(
        'Explode multi-feature tensors with list features into '
        'single-feature tensors.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_presence', '.presence')
    .Input(2, 'out_values_values', '.values.values_grad')
    .Output(0, 'out1_values', '.values_grad');
REGISTER_GRADIENT(
    MergeSingleListFeatureTensors,
    GetMergeSingleListFeatureTensorsGradient);
    
    template <typename T, class Context>
class FlexibleTopKGradientOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    OPERATOR_SCHEMA(GivenTensorFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
This op fills an output tensor with the data specified by the *value* and *dtype* arguments.  The output tensor shape is specified by the *shape* argument. Beware, when using this argument *value* should have a value for every element of the *output*, as missing values will not be initialized automatically. If *input_as_shape* is set to *true*, then the *input* should be a 1D tensor containing the desired output shape (the dimensions specified in *extra_shape* will also be appended). In this case, the *shape* argument should **not** be set.
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);