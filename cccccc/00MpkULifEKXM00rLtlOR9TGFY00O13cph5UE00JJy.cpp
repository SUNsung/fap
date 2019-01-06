
        
        namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + '/' + message->full_name();
  }
}
}  // namespace
    
    #include <memory>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include <google/protobuf/descriptor.pb.h>
    
    void SourceGeneratorBase::WriteGeneratedCodeAttributes(io::Printer* printer) {
  printer->Print('[global::System.Diagnostics.DebuggerNonUserCodeAttribute]\n');
}
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, message);
  printer->Print(
    ' * Protobuf type {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(message->full_name()));
}
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    // Get the name of a service's Java class without package name prefix.
string ClassNameWithoutPackage(const ServiceDescriptor* descriptor,
                               bool immutable) {
  string full_name = StripPackageName(descriptor->full_name(),
                                      descriptor->file());
  // We don't allow nested service definitions.
  GOOGLE_CHECK(full_name.find('.') == string::npos);
  return full_name;
}
    
    void SharedCodeGenerator::Generate(GeneratorContext* context,
                                   std::vector<string>* file_list,
                                   std::vector<string>* annotation_file_list) {
  string java_package = FileJavaPackage(file_);
  string package_dir = JavaPackageToDir(java_package);
    }
    
      virtual io::ZeroCopyOutputStream* OpenForInsert(
      const string& filename, const string& insertion_point) {
    CodeGeneratorResponse::File* file = response_->add_file();
    file->set_name(filename);
    file->set_insertion_point(insertion_point);
    return new io::StringOutputStream(file->mutable_content());
  }
    
    
    {} // namespace CAROTENE_NS

    
    #include 'common.hpp'
#include 'vtransform.hpp'
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
CVTS_FUNC(s8, s16, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s8 q3, d4                                       \n\t'
            'vmovl.s8 q4, d5                                       \n\t'
            'vmovl.s16 q5, d6                                      \n\t'
            'vmovl.s16 q6, d7                                      \n\t'
            'vmovl.s16 q7, d8                                      \n\t'
            'vmovl.s16 q8, d9                                      \n\t'
            'vcvt.f32.s32 q9, q5                                   \n\t'
            'vcvt.f32.s32 q10, q6                                  \n\t'
            'vcvt.f32.s32 q11, q7                                  \n\t'
            'vcvt.f32.s32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vqmovn.s32 d22, q7                                    \n\t'
            'vqmovn.s32 d23, q8                                    \n\t'
            'vqmovn.s32 d24, q9                                    \n\t'
            'vqmovn.s32 d25, q10                                   \n\t'
            'vst1.16 {d22-d23}, [%[dst1]]                          \n\t'
            'vst1.16 {d24-d25}, [%[dst2]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 8),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(s8, s16, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        int8x16_t vline = vld1q_s8(_src + i);
        int16x8_t vline1_s16 = vmovl_s8(vget_low_s8 (vline));
        int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline));
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline1_s16));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
        int32x4_t vline3_s32 = vmovl_s16(vget_low_s16 (vline2_s16));
        int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
        float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vline3_s32 = vcvtq_s32_f32(vline3_f32);
        vline4_s32 = vcvtq_s32_f32(vline4_f32);
        int16x8_t vRes1_s16 = vcombine_s16(vqmovn_s32(vline1_s32), vqmovn_s32(vline2_s32));
        int16x8_t vRes2_s16 = vcombine_s16(vqmovn_s32(vline3_s32), vqmovn_s32(vline4_s32));
        vst1q_s16(_dst + i + 0, vRes1_s16);
        vst1q_s16(_dst + i + 8, vRes2_s16);
    }
})
#endif
    
            // perform vertical convolution
        for ( ; x <= bwidth; x += 8)
        {
            internal::prefetch(srow0 + x);
            internal::prefetch(srow1 + x);
            internal::prefetch(srow2 + x);
    }
    
        std::vector<u8> _buf((size.width+16)*3*(sizeof(ptrdiff_t) + sizeof(u8)) + 128);
    u8* buf[3];
    buf[0] = &_buf[0]; buf[1] = buf[0] + size.width; buf[2] = buf[1] + size.width;
    ptrdiff_t* cpbuf[3];
    cpbuf[0] = (ptrdiff_t*)internal::alignPtr(buf[2] + size.width, sizeof(ptrdiff_t)) + 1;
    cpbuf[1] = cpbuf[0] + size.width + 1;
    cpbuf[2] = cpbuf[1] + size.width + 1;
    memset(buf[0], 0, size.width*3);
    
            // perform vertical convolution
        for ( ; x <= bwidth; x += 8)
        {
            internal::prefetch(srow0 + x);
            internal::prefetch(srow1 + x);
            internal::prefetch(srow2 + x);
    }
    
    namespace caffe2 {
    }
    
    
    {} // namespace caffe2