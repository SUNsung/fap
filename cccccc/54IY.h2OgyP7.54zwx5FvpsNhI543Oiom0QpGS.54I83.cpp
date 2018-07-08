
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    IPC_SYNC_MESSAGE_ROUTED1_1(ShellViewHostMsg_SetForceClose, bool, int)
    
    #include 'content/nw/src/api/bindings_common.h'
    
    
    {
} // namespace extensions
#endif

    
          displayResult->id = gfx_display.id();
      displayResult->scale_factor = gfx_display.device_scale_factor();
      displayResult->is_built_in = gfx_display.IsInternal();
      displayResult->rotation = gfx_display.RotationAsDegree();
      displayResult->touch_support = (int)gfx_display.touch_support();
    
    NwShellShowItemInFolderFunction::~NwShellShowItemInFolderFunction() {
}
    
    #endif // JSON_FORWARDS_H_INCLUDED
    
    void BuiltStyledStreamWriter::indent() { indentString_ += indentation_; }
    
    #ifndef GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
#define GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    class SourceGeneratorBase {
 protected:
  SourceGeneratorBase(const FileDescriptor* descriptor, const Options* options);
  virtual ~SourceGeneratorBase();
    }
    
    #include <google/protobuf/descriptor.h>
    
    
#define REGISTER_LAYER_CREATOR(type, creator)                                  \
  static LayerRegisterer<float> g_creator_f_##type(#type, creator<float>);     \
  static LayerRegisterer<double> g_creator_d_##type(#type, creator<double>)    \
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      if ((req_comps != 1) && (req_comps != 3) && (req_comps != 4))
    return NULL;
    
    # if !defined(__OPTIMIZE__)
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(_mm_loadl_epi64((__m128i *)(x))))
# else
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(*(__m128i *)(x)))
# endif
    
    /*! \file silk_Inlines.h
 *  \brief silk_Inlines.h defines OPUS_INLINE signal processing functions.
 */
    
    #undef    silk_SMLAWW
static OPUS_INLINE opus_int32 silk_SMLAWW(opus_int32 a32, opus_int32 b32, opus_int32 c32){
    opus_int32 ret;
    /* Nb will be counted in sub-macros*/
    ret = silk_MLA(silk_SMLAWB((a32), (b32), (c32)), (b32), silk_RSHIFT_ROUND((c32), 16));
    return ret;
}
    
    #ifndef SILK_SIGPROC_FIX_MIPSR1_H
#define SILK_SIGPROC_FIX_MIPSR1_H
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
      tmp0 = in[5 * stride];
  tmp1 = kIDCTMatrix[ 5] * tmp0;
  tmp2 = kIDCTMatrix[13] * tmp0;
  tmp3 = kIDCTMatrix[21] * tmp0;
  tmp4 = kIDCTMatrix[29] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #endif  // GUETZLI_JPEG_DATA_DECODER_H_

    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out);
    
      // Fill in root table.
  key = 0;
  idx = 0;
  for (len = 1; len <= kJpegHuffmanRootTableBits; ++len) {
    for (; count[len] > 0; --count[len]) {
      code.bits = len;
      code.value = symbols[idx++];
      reps = 1 << (kJpegHuffmanRootTableBits - len);
      while (reps--) {
        table[key++] = code;
      }
    }
  }
    
      OutputImageComponent& component(int c) { return components_[c]; }
  const OutputImageComponent& component(int c) const { return components_[c]; }
    
    #include 'guetzli/quality.h'
    
      // Support for running multiple copies of the same benchmark concurrently
  // in multiple threads.  This may be useful when measuring the scaling
  // of some piece of code.
    
    void FunctionBenchmark::Run(State& st) { func_(st); }
    
    // CheckHandler is the class constructed by failing CHECK macros. CheckHandler
// will log information about the failures and abort when it is destructed.
class CheckHandler {
 public:
  CheckHandler(const char* check, const char* file, const char* func, int line)
      : log_(GetErrorLogInstance()) {
    log_ << file << ':' << line << ': ' << func << ': Check `' << check
         << '' failed. ';
  }
    }
    
    
    {  for (auto it = reports.begin(); it != reports.end(); ++it) {
    out << indent << '{\n';
    PrintRunData(*it);
    out << indent << '}';
    auto it_cp = it;
    if (++it_cp != reports.end()) {
      out << ',\n';
    }
  }
}