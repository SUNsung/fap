
        
          // Verify outputs.
  uint8_t* output_tensor = static_cast<uint8_t*>(stage.GetOutputs()->at(0));
  for (int i = 0; i < kTotalElements; i++) {
    EXPECT_EQ(output_tensor[i], static_cast<uint8_t>(6));
  }
    
    template <typename T>
struct MatrixDiagPart<CPUDevice, T> {
  static void Compute(OpKernelContext* context, const CPUDevice& device,
                      typename TTypes<T, 3>::ConstTensor& input,
                      typename TTypes<T>::Tensor& output,
                      const Eigen::Index lower_diag_index,
                      const Eigen::Index upper_diag_index,
                      const Eigen::Index max_diag_len, const T padding_value) {
    // 10 in cost_per_batch is from existing heuristic.
    // TODO(penporn): Tune for the best constant in cost_per_batch.
    const Eigen::Index num_diags = upper_diag_index - lower_diag_index + 1;
    const Eigen::Index output_elements_in_batch = num_diags * max_diag_len;
    const Eigen::Index cost_per_batch = 10 * output_elements_in_batch;
    const Eigen::Index num_batches = input.dimension(0);
    const Eigen::Index num_rows = input.dimension(1);
    const Eigen::Index num_cols = input.dimension(2);
    }
    }
    
    
    {  return metrics;
}
    
    // A list of inputs of a given node of the TensorFlow/Eager graph.
class OpInputs {
 public:
  explicit OpInputs(const TfLiteIntArray* indexes) {
    for (int index : TfLiteIntArrayView(indexes)) {
      inputs_.push_back(index);
    }
    forwardable_.resize(inputs_.size());
  }
  ~OpInputs() {}
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        OP_REQUIRES(
        ctx, TensorShapeUtils::IsVector(shape_tensor.shape()),
        errors::InvalidArgument('Input shape should be a vector, got shape: ',
                                shape_tensor.shape().DebugString()));
    int32 num_batches = shape_tensor.flat<int32>()(0);
    
    static constexpr int kMaxIterations = 1000;
    
    
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    /** Encode a Bech32 string. Returns the empty string in case of failure. */
std::string Encode(const std::string& hrp, const std::vector<uint8_t>& values);
    
        // Erase the data in small chunks
    always_true_key_tester_t key_tester;
    const uint64_t max_erased_per_pass = 100;
    for (continue_bool_t done_erasing = continue_bool_t::CONTINUE;
         done_erasing == continue_bool_t::CONTINUE;) {
        scoped_ptr_t<txn_t> txn;
        scoped_ptr_t<real_superblock_t> superblock;
    }
    
    #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    #if GTEST_HAS_TYPED_TEST
    
    // Macros for testing exceptions.
//
//    * {ASSERT|EXPECT}_THROW(statement, expected_exception):
//         Tests that the statement throws the expected exception.
//    * {ASSERT|EXPECT}_NO_THROW(statement):
//         Tests that the statement doesn't throw any exception.
//    * {ASSERT|EXPECT}_ANY_THROW(statement):
//         Tests that the statement throws an exception.
    
    
    {  GTEST_DISALLOW_ASSIGN_(NativeArray);
};
    
      // Smart pointer members.
  void reset(T* ptr = NULL) {
    depart();
    capture(ptr);
  }
  T* get() const { return value_; }
  T* operator->() const { return value_; }
  T& operator*() const { return *value_; }