
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/core/platform/types.h'
    
    Status CustomCallThunk::ExecuteOnStream(const ExecuteParams& params) {
  // gpu_stream is CUstream or e.g. the equivalent type in ROCm.
  auto gpu_stream = se::gpu::AsGpuStreamValue(params.stream);
  auto typed_call_target =
      reinterpret_cast<void (*)(decltype(gpu_stream), void** /*buffers*/,
                                const char* /*opaque*/, size_t /*opaque_len*/)>(
          call_target_);
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    FftThunk::FftThunk(FftType fft_type, absl::Span<const int64> fft_length,
                   const BufferAllocation::Slice& input_buffer,
                   const BufferAllocation::Slice& output_buffer,
                   const Shape& input_shape, const Shape& output_shape,
                   const HloInstruction* hlo)
    : Thunk(Kind::kFft, hlo),
      fft_type_(FftTypeToSeType(fft_type)),
      fft_length_(fft_length.begin(), fft_length.end()),
      scale_factor_(1.0f),
      input_buffer_(input_buffer),
      output_buffer_(output_buffer),
      input_shape_(input_shape),
      output_shape_(output_shape) {}
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_INFEED_THUNK_H_

    
     private:
  // Buffers passed to the kernel as arguments.
  const std::vector<const BufferAllocation*> args_;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Status SequentialThunk::Initialize(const GpuExecutable& executable,
                                   se::StreamExecutor* executor) {
  for (auto& thunk : thunks_) {
    TF_RETURN_IF_ERROR(thunk->Initialize(executable, executor));
  }
  return Status::OK();
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    public:
  /// Introduces a new constraint checker arena, supplanting any
  /// existing constraint checker arena.
  ///
  /// \param self The ASTContext into which this constraint checker arena
  /// will be installed.
  ///
  /// \param allocator The allocator used for allocating any data that
  /// goes into the constraint checker arena.
  ConstraintCheckerArenaRAII(ASTContext &self,
                             llvm::BumpPtrAllocator &allocator);
    
    
    {  auto origKey =
      (uintptr_t)SWIFT_THREAD_GETSPECIFIC(SWIFT_COMPATIBILITY_50_TLS_KEY);
  if ((origKey & 0x1) != 0) {
    auto mask = ((uintptr_t)-1) < 1;
    auto resetKey = origKey & mask;
    SWIFT_THREAD_SETSPECIFIC(SWIFT_COMPATIBILITY_50_TLS_KEY, (void *)resetKey);
    return nullptr;
  }
  return ReplFn;
}
    
        Offset offset = (RelativeOffsetPlusIndirectAndInt & ~getIntMask());
    
    /// RAII class that suppresses diagnostics by temporarily disabling all of
/// the diagnostic consumers.
class DiagnosticSuppression {
  DiagnosticEngine &diags;
  std::vector<DiagnosticConsumer *> consumers;
    }
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    #include 'dppoint.h'
#include 'errcode.h'
#include 'tprintf.h'
    
      // Get the value of the top (smallest, defined by operator< ) element.
  const Pair& PeekTop() const {
    return heap_[0];
  }
  // Get the value of the worst (largest, defined by operator< ) element.
  const Pair& PeekWorst() const { return heap_[IndexOfWorst()]; }
    
      // Insert the given unichar represention in the UNICHARMAP and associate it
  // with the given id. The length of the representation MUST be non-zero.
  void insert(const char* const unichar_repr, UNICHAR_ID id);
    
    // Clear all data.
void IntFeatureDist::Clear() {
  delete [] features_;
  features_ = nullptr;
  delete [] features_delta_one_;
  features_delta_one_ = nullptr;
  delete [] features_delta_two_;
  features_delta_two_ = nullptr;
}
    
    # endif  // NDEBUG for EXPECT_DEBUG_DEATH
#endif  // GTEST_HAS_DEATH_TEST
    
    #if 0
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT3.
// Don't use this in your code.
#define GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, v1, v2, v3), \
                on_failure)
    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_) {}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33>
struct Types33 {
  typedef T1 Head;
  typedef Types32<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33> Tail;
};
    
    // The following family of struct and struct templates are used to
// represent template lists.  In particular, TemplatesN<T1, T2, ...,
// TN> represents a list of N templates (T1, T2, ..., and TN).  Except
// for Templates0, every struct in the family has two member types:
// Head for the selector of the first template in the list, and Tail
// for the rest of the list.