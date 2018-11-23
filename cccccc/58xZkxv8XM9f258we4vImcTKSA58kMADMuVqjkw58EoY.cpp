
        
        void AnyMetadata::PackFrom(const Message& message,
                           const string& type_url_prefix) {
  type_url_->SetNoArena(&::google::protobuf::internal::GetEmptyString(),
                        GetTypeUrl(message.GetDescriptor(), type_url_prefix));
  message.SerializeToString(value_->MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited()));
}
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    
    {  (*variables)['default_entry'] = (*variables)['capitalized_name'] +
      'DefaultEntryHolder.defaultEntry';
  (*variables)['map_field_parameter'] = (*variables)['default_entry'];
  (*variables)['descriptor'] =
      name_resolver->GetImmutableClassName(descriptor->file()) +
      '.internal_' + UniqueFileScopeIdentifier(descriptor->message_type()) +
      '_descriptor, ';
  (*variables)['ver'] = GeneratedCodeVersionSuffix();
}
    
      for (std::vector<EnumGenerator *>::iterator iter = enum_generators_.begin();
       iter != enum_generators_.end(); ++iter) {
    (*iter)->GenerateSource(printer);
  }
  for (std::vector<MessageGenerator *>::iterator iter = message_generators_.begin();
       iter != message_generators_.end(); ++iter) {
    (*iter)->GenerateSource(printer);
  }
    
      std::vector<const FileDescriptor*> parsed_files;
  for (int i = 0; i < request.file_to_generate_size(); i++) {
    parsed_files.push_back(pool.FindFileByName(request.file_to_generate(i)));
    if (parsed_files.back() == NULL) {
      *error_msg = 'protoc asked plugin to generate a file but '
                   'did not provide a descriptor for the file: ' +
                   request.file_to_generate(i);
      return false;
    }
  }
    
    
    {    void operator() (const u8 * src0, const u8 * src1, u8 * dst) const
    {
        dst[0] = ((u16)(src0[0]) + src1[0]) >> 1;
    }
};
    
    
    {        v_dst = vqmovn(vr);
    }
    
    #define FILL_LINES2(macro,type) \
            macro##_LINE(type,0) \
            macro##_LINE(type,1)
#define FILL_LINES3(macro,type) \
            FILL_LINES2(macro,type) \
            macro##_LINE(type,2)
#define FILL_LINES4(macro,type) \
            FILL_LINES3(macro,type) \
            macro##_LINE(type,3)
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, s8, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src1]]                             \n\t'
            'vmovl.s16 q3, d4                                      \n\t'
            'vmovl.s16 q4, d5                                      \n\t'
            'vcvt.f32.s32 q5, q3                                   \n\t'
            'vcvt.f32.s32 q6, q4                                   \n\t'
            'vmul.f32 q7, q5, q0                                   \n\t'
            'vmul.f32 q8, q6, q0                                   \n\t'
            'vadd.f32 q9, q7, q1                                   \n\t'
            'vadd.f32 q10, q8, q1                                  \n\t'
            'vcvt.s32.f32 q11, q9                                  \n\t'
            'vcvt.s32.f32 q12, q10                                 \n\t'
            'vqmovn.s32 d26, q11                                   \n\t'
            'vqmovn.s32 d27, q12                                   \n\t'
            'vqmovn.s16 d28, q13                                   \n\t'
            'vst1.8 {d28}, [%[dst]]                                \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
               'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28'
        );
    }
})
#else
CVTS_FUNC(s16, s8, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        int8x8_t vRes = vqmovn_s16(vcombine_s16(vRes1, vRes2));
        vst1_s8(_dst + i, vRes);
    }
})
#endif
    
    
    {    minLocCount >>= 1;
    maxLocCount >>= 1;
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)minVal;
    (void)minLocPtr;
    (void)minLocCount;
    (void)minLocCapacity;
    (void)maxVal;
    (void)maxLocPtr;
    (void)maxLocCount;
    (void)maxLocCapacity;
#endif
}
    
    #ifdef USE_OPENCV
  /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Mat.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<cv::Mat> & mat_vector,
                Blob<Dtype>* transformed_blob);
    
      bool is_started() const;
    
      // Adds a creator.
  static void AddCreator(const string& type, Creator creator) {
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 0)
        << 'Layer type ' << type << ' already registered.';
    registry[type] = creator;
  }
    
     protected:
  virtual void InternalThreadEntry();
  virtual void load_batch(Batch<Dtype>* batch) = 0;
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline const char* type() const { return 'Concat'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
    #include 'caffe/layers/deconv_layer.hpp'
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
    
    {  // Expand the box.
  *left = std::max(*left - padding, 0);
  *top = std::max(*top - padding, 0);
  right = std::min(right + padding, rect_width_);
  bottom = std::min(bottom + padding, rect_height_);
  Box* box = boxCreate(*left, *top, right - *left, bottom - *top);
  Pix* grey_pix = pixClipRectangle(original_img, box, nullptr);
  boxDestroy(&box);
  if (level == RIL_BLOCK || level == RIL_PARA) {
    // Clip to the block polygon as well.
    TBOX mask_box;
    Pix* mask = it_->block()->block->render_mask(&mask_box);
    // Copy the mask registered correctly into an image the size of grey_pix.
    int mask_x = *left - mask_box.left();
    int mask_y = *top - (pixGetHeight(original_img) - mask_box.top());
    int width = pixGetWidth(grey_pix);
    int height = pixGetHeight(grey_pix);
    Pix* resized_mask = pixCreate(width, height, 1);
    pixRasterop(resized_mask, std::max(0, -mask_x), std::max(0, -mask_y), width, height,
                PIX_SRC, mask, std::max(0, mask_x), std::max(0, mask_y));
    pixDestroy(&mask);
    pixDilateBrick(resized_mask, resized_mask, 2 * padding + 1,
                   2 * padding + 1);
    pixInvert(resized_mask, resized_mask);
    pixSetMasked(grey_pix, resized_mask, UINT32_MAX);
    pixDestroy(&resized_mask);
  }
  return grey_pix;
}
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    #include 'rect.h'    // for TBOX
#include 'strngs.h'  // for STRING
    
    #define MAX_UNDIVIDED_LENGTH 24
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
    // Godot TO Bullet
extern void G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void INVERT_G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void INVERT_G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void G_TO_B(Transform const &inVal, btTransform &outVal);
    
    #include 'collision_object_bullet.h'
#include 'space_bullet.h'
    
    /**
	@author AndreaCatania
*/
    
    class RigidBodyBullet;
class btTypedConstraint;
    
    #ifndef _3D_DISABLED