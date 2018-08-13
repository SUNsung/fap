
        
        namespace tensorflow {
REGISTER2(BinaryOp, CPU, 'Mod', functor::safe_mod, int32, int64);
REGISTER2(BinaryOp, CPU, 'Mod', functor::fmod, float, double);
REGISTER2(BinaryOp, CPU, 'TruncateMod', functor::safe_mod, int32, int64);
REGISTER2(BinaryOp, CPU, 'TruncateMod', functor::fmod, float, double);
    }
    
    Status BatchNormExpanderVisitor::HandleBatchNormGrad(
    HloInstruction* batch_norm) {
  // Use the following formulas to calculate gradients:
  // scale_grad =
  //   sum(output_grad * (activation - mean(activation))) * rsqrt(var + epsilon)
  //
  // offset_grad =
  //   sum(output_grad)
  //
  // activation_grad =
  //   1/N * scale * rsqrt(var + epsilon) *
  //   (N * output_grad - sum(output_grad) - (activation - mean(activation)) *
  //   sum(output_grad * (activation - mean(activation))) / (variance +
  //   epsilon))
  if (!rewrite_grad_op_) {
    return Status::OK();
  }
  std::vector<HloInstruction*> added_instructions;
  auto add = [&](std::unique_ptr<HloInstruction> inst) {
    HloInstruction* added_inst = computation_->AddInstruction(std::move(inst));
    added_inst->set_metadata(batch_norm->metadata());
    added_instructions.push_back(added_inst);
    return added_inst;
  };
  auto add_binary = [&](const Shape& shape, const HloOpcode opcode,
                        HloInstruction* a, HloInstruction* b) {
    return add(HloInstruction::CreateBinary(shape, opcode, a, b));
  };
  int64 instruction_count_before = computation_->instruction_count();
    }
    
    TfLiteRegistration* Register_ARG_MIN() {
  static TfLiteRegistration r = {nullptr, nullptr, arg_min_max::Prepare,
                                 arg_min_max::ArgMinEval};
  return &r;
}
    
      partial_run_mgr_.ExecutorDone(step_id, param.executor_status);
  partial_run_mgr_.PartialRunDone(step_id,
                                  [this](Status status) { set_status(status); },
                                  param.partial_run_status);
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
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
    
        NodeDef* const_node1 = graph_def.add_node();
    const_node1->set_name('const_node1');
    const_node1->set_op('Const');
    
    namespace tensorflow {
#define REGISTER_COMPLEX(D, R, C)                         \
  REGISTER_KERNEL_BUILDER(Name('Angle')                   \
                              .Device(DEVICE_##D)         \
                              .TypeConstraint<C>('T')     \
                              .TypeConstraint<R>('Tout'), \
                          UnaryOp<D##Device, functor::get_angle<C>>);
    }
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      static size_t ByteSize(const WriteBatch* batch) {
    return batch->rep_.size();
  }
    
      for (size_t i = 0; i < 3; ++i) {
    std::string res;
    ASSERT_OK(db->Get(ReadOptions(), keys[i], &res));
    ASSERT_TRUE(res == vals[i]);
  }
    
    
    {}  // anonymous namespace
    
    
    {
    {    // Check false positive rate
    double rate = FalsePositiveRate();
    if (kVerbose >= 1) {
      fprintf(stderr, 'False positives: %5.2f%% @ length = %6d ; bytes = %6d\n',
              rate*100.0, length, static_cast<int>(FilterSize()));
    }
    ASSERT_LE(rate, 0.02);   // Must not be over 2%
    if (rate > 0.0125) mediocre_filters++;  // Allowed, but not too often
    else good_filters++;
  }
  if (kVerbose >= 1) {
    fprintf(stderr, 'Filters: %d good, %d mediocre\n',
            good_filters, mediocre_filters);
  }
  ASSERT_LE(mediocre_filters, good_filters/5);
}
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    
    
    
    
    			b2FixtureDef sd2;
			sd2.shape = &poly2;
			sd2.density = 2.0f;