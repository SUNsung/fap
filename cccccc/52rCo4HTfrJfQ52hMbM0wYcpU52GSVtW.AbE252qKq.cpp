
        
        int ImmutableExtensionLiteGenerator::GenerateRegistrationCode(
    io::Printer* printer) {
  printer->Print(
    'registry.add($scope$.$name$);\n',
    'scope', scope_,
    'name', UnderscoresToCamelCase(descriptor_));
  return 7;
}
    
    // Author: liujisi@google.com (Pherl Liu)
    
      // Parsing halted on a '.'.  Perhaps we're in a different locale?  Let's
  // try to replace the '.' with a locale-specific radix character and
  // try again.
  string localized = LocalizeRadix(text, temp_endptr);
  const char* localized_cstr = localized.c_str();
  char* localized_endptr;
  result = strtod(localized_cstr, &localized_endptr);
  if ((localized_endptr - localized_cstr) >
      (temp_endptr - text)) {
    // This attempt got further, so replacing the decimal must have helped.
    // Update original_endptr to point at the right location.
    if (original_endptr != NULL) {
      // size_diff is non-zero if the localized radix has multiple bytes.
      int size_diff = localized.size() - strlen(text);
      // const_cast is necessary to match the strtod() interface.
      *original_endptr = const_cast<char*>(
        text + (localized_endptr - localized_cstr - size_diff));
    }
  }
    
      // If we're in a token, append the rest of the buffer to it.
  if (record_target_ != NULL && record_start_ < buffer_size_) {
    record_target_->append(buffer_ + record_start_, buffer_size_ - record_start_);
    record_start_ = 0;
  }
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    Contrast Example 2 with Example 1. For each data point per feature, the values
are sorted by the corresponding KEY.
)DOC')
    .Input(0, 'DATA', 'Tensor of rank 1.')
    .Input(
        1,
        'RANGES',
        'Tensor of int32/int64 ranges, of dims (N, M, 2). '
        'Where N is number of examples and M is a size of each example. '
        'Last dimention represents a range in the format (start, lengths)')
    .Input(2, 'KEY', 'Tensor of rank 1 and type int64.')
    .Output(0, 'OUTPUT', '1-D tensor of size sum of range lengths')
    .Arg('lengths', 'Expected lengths for ranges')
    .TensorInferenceFunction([](const OperatorDef& def,
                                const vector<TensorShape>& in) {
      ArgumentHelper helper(def);
      auto lengths = helper.GetRepeatedArgument<int>('lengths');
      CAFFE_ENFORCE_EQ(in[0].dims_size(), 1, 'DATA should be 1-D tensor.');
      CAFFE_ENFORCE_EQ(in[1].dims_size(), 3, 'RANGES should be 3-D tensor.');
      if (in.size() > 2) {
        CAFFE_ENFORCE_EQ(in[2].dims_size(), 1, 'KEY should be 1-D tensor.');
      }
      CAFFE_ENFORCE_GT(lengths.size(), 0, 'lengths should be non-empty.');
      std::vector<TensorShape> out(lengths.size());
      for (int i = 0; i < lengths.size(); ++i) {
        out[i].set_data_type(in[0].data_type());
        out[i].add_dims(in[1].dims(0));
        out[i].add_dims(lengths[i]);
      }
      return out;
    });