
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_TESTING_SPLIT_H_
#define TENSORFLOW_LITE_TESTING_SPLIT_H_
    
    template <typename T>
__global__ void DynamicStitchKernel(const int32 slice_size,
                                    const int32 output_size,
                                    GpuDeviceArrayStruct<int32> input_indices,
                                    GpuDeviceArrayStruct<const T*> input_ptrs,
                                    T* output) {
  int32* data_indices = GetGpuDeviceArrayOnDevice(&input_indices);
  const T** data_ptrs = GetGpuDeviceArrayOnDevice(&input_ptrs);
  GPU_1D_KERNEL_LOOP(output_index, output_size) {
    const int32 slice_id = output_index / slice_size;
    const int32 slice_offset = output_index % slice_size;
    const int32 input_index = data_indices[slice_id];
    if (input_index != -1) {
      output[output_index] = ldg(data_ptrs[input_index] + slice_offset);
    }
  }
}
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/type_traits.h'
#include 'tensorflow/core/kernels/eye_functor.h'
#include 'tensorflow/core/util/gpu_kernel_helper.h'
    
    TEST(TfliteInferenceStage, IncorrectModelPath) {
  EvaluationStageConfig config = GetTfliteInferenceStageConfig();
  config.mutable_specification()
      ->mutable_tflite_inference_params()
      ->set_model_file_path('xyz.tflite');
  TfliteInferenceStage stage(config);
  EXPECT_EQ(stage.Init(), kTfLiteError);
}
    
    namespace tensorflow {
namespace functor {
    }
    }
    
    #define DEFINE_GPU_SPECS_INDEX(T, Index)    \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 0); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 1); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 2); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 3); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 4); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 5); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 6); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 7);
    
    
    {}  // namespace xla
    
              while (sample < limit_sample) {
            const auto rand = dist(&gen_copy);
            const int size = rand.size();
            // NOTE(ringwalt): These loops seem to only generate packed AVX
            // instructions for float32.
            for (int i = 0; i < size; i++) {
              z[i] = rand[i] * diff + normMin;
            }
            for (int i = 0; i < size; i++) {
              g[i] = (plusFactor - z[i] * z[i]) / T(2.0);
            }
    }
    
    namespace tensorflow {
namespace functor {
    }
    }
    
    #ifdef CV_DOXYGEN
    
                if (src_row < 0)
                src_row = 0;
            if (src_row2 >= (ptrdiff_t)ssize.height)
                src_row2 = ssize.height-1;
    
    
    {    }
    
    
    {
    {        std::vector<cv::Mat> outs(3);
        for (int i = 0; i < 3; i++) {
            outs[i] = out(cv::Rect(0, i*out_sz.height, out_sz.width, out_sz.height));
        }
        cv::split(resized_mat, outs);
    }
};
    
        //! the default constructor
    AutoBuffer();
    //! constructor taking the real buffer size
    explicit AutoBuffer(size_t _size);
    
    // ... and writer
class TiffEncoder CV_FINAL : public BaseImageEncoder
{
public:
    TiffEncoder();
    virtual ~TiffEncoder() CV_OVERRIDE;
    }
    
    void icvCvt_BGR2RGB_8u_C3R( const uchar* bgr, int bgr_step,
                            uchar* rgb, int rgb_step, Size size );
#define icvCvt_RGB2BGR_8u_C3R icvCvt_BGR2RGB_8u_C3R
void icvCvt_BGR2RGB_16u_C3R( const ushort* bgr, int bgr_step,
                             ushort* rgb, int rgb_step, Size size );
#define icvCvt_RGB2BGR_16u_C3R icvCvt_BGR2RGB_16u_C3R
    
    #include 'db/db_impl.h'
#include 'leveldb/cache.h'
#include 'leveldb/db.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
      // Return the latest node with a key < key.
  // Return head_ if there is no such node.
  Node* FindLessThan(const Key& key) const;
    
      // Returns true iff some level needs a compaction.
  bool NeedsCompaction() const {
    Version* v = current_;
    return (v->compaction_score_ >= 1) || (v->file_to_compact_ != nullptr);
  }
    
      // Returns an estimate of the current (uncompressed) size of the block
  // we are building.
  size_t CurrentSizeEstimate() const;
    
    class FilterPolicy;
    
    void TableBuilder::WriteRawBlock(const Slice& block_contents,
                                 CompressionType type, BlockHandle* handle) {
  Rep* r = rep_;
  handle->set_offset(r->offset);
  handle->set_size(block_contents.size());
  r->status = r->file->Append(block_contents);
  if (r->status.ok()) {
    char trailer[kBlockTrailerSize];
    trailer[0] = type;
    uint32_t crc = crc32c::Value(block_contents.data(), block_contents.size());
    crc = crc32c::Extend(crc, trailer, 1);  // Extend crc to cover block type
    EncodeFixed32(trailer + 1, crc32c::Mask(crc));
    r->status = r->file->Append(Slice(trailer, kBlockTrailerSize));
    if (r->status.ok()) {
      r->offset += block_contents.size() + kBlockTrailerSize;
    }
  }
}
    
    char* Arena::AllocateAligned(size_t bytes) {
  const int align = (sizeof(void*) > 8) ? sizeof(void*) : 8;
  static_assert((align & (align - 1)) == 0,
                'Pointer size should be a power of 2');
  size_t current_mod = reinterpret_cast<uintptr_t>(alloc_ptr_) & (align - 1);
  size_t slop = (current_mod == 0 ? 0 : align - current_mod);
  size_t needed = bytes + slop;
  char* result;
  if (needed <= alloc_bytes_remaining_) {
    result = alloc_ptr_ + slop;
    alloc_ptr_ += needed;
    alloc_bytes_remaining_ -= needed;
  } else {
    // AllocateFallback always returned aligned memory
    result = AllocateFallback(bytes);
  }
  assert((reinterpret_cast<uintptr_t>(result) & (align - 1)) == 0);
  return result;
}