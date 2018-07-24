Value& Path::make(Value& root) const {
  Value* node = &root;
  for (Args::const_iterator it = args_.begin(); it != args_.end(); ++it) {
    const PathArgument& arg = *it;
    if (arg.kind_ == PathArgument::kindIndex) {
      if (!node->isArray()) {
        // Error: node is not an array at position ...
      }
      node = &((*node)[arg.index_]);
    } else if (arg.kind_ == PathArgument::kindKey) {
      if (!node->isObject()) {
        // Error: node is not an object at position...
      }
      node = &((*node)[arg.key_]);
    }
  }
  return *node;
}
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
      void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    void SourceGeneratorBase::WriteGeneratedCodeAttributes(io::Printer* printer) {
  printer->Print('[global::System.Diagnostics.DebuggerNonUserCodeAttribute]\n');
}
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
    
    {
    {    if (i % kSampleEvery == 0) {
      REQUIRE(
          expected_parameters.at(i / kSampleEvery).size() == parameters.size());
      for (size_t p = 0; p < parameters.size(); ++p) {
        REQUIRE(parameters.at(p)->defined());
        auto computed = parameters.at(p)->flatten();
        auto expected = expected_parameters.at(i / kSampleEvery).at(p);
        if (!computed.allclose(expected, /*rtol=*/1e-3, /*atol=*/1e-5)) {
          std::cout << 'Iteration ' << i << ': ' << computed
                    << ' != ' << expected << ' (parameter ' << p << ')'
                    << std::endl;
          REQUIRE(false);
        }
      }
    }
  }
}
    
    
    {  // Sum with broadcasting to compute the full index
  linearIndex = unsqueezeN(linearIndex, emptyBefore, emptyAfter);
  if (beforeIndex.defined()) {
    linearIndex = linearIndex + beforeIndex;
  }
  if (afterIndex.defined()) {
    linearIndex = linearIndex + afterIndex;
  }
  return linearIndex;
}
    
    Tensor irfft(const Tensor& self, const int64_t signal_ndim, const bool normalized,
             const bool onesided,  IntList signal_sizes) {
  return _fft(self, signal_ndim, /* complex_input */ true,
              /* complex_output */ false, /* inverse */ true, signal_sizes,
              normalized, onesided);
}
    
      const AttributeProto* remove(const std::string& key) {
    const AttributeProto* result = nullptr;
    auto iter = onnx_attrs_.find(key);
    if (iter != onnx_attrs_.end()) {
      result = iter->second;
      onnx_attrs_.erase(iter);
    }
    return result;
  }
    
    /* Can we use 32 bit math for indexing? */
THC_API bool THCTensor_canUse32BitIndexMath(THCState* state, const THCTensor* t, ptrdiff_t max_elem=INT32_MAX);
/* Are all tensors 32-bit indexable? */
THC_API bool THCTensor_all32BitIndexable(THCState* state, THCTensor** inputs, int numInputs);
THC_API void THCTensor_preserveReduceDimSemantics(THCState *state, THCTensor *tensor, int in_dims,
                                                  int64_t dimension, int keepdim);
/* Returns false if there is no possibility that the tensor    */
/* has more than one index that references the same datapoint, */
/* true otherwise.                                             */
THC_API bool THCTensor_maybeOverlappingIndices(THCState* state, const THCTensor* t);

    
        if (adaptive_) {
      const auto& alpha = Input(5);
      num_alpha = alpha.dim(0);
      auto* grad_alpha = Output(2);
      grad_alpha->ResizeLike(alpha);
      grad_alpha_data = grad_alpha->template mutable_data<T>();
      memset(grad_alpha_data, 0, sizeof(T) * num_alpha);
    }
    
      // TODO: enable the filler
  DISABLE_INPUT_FILLERS(Context)