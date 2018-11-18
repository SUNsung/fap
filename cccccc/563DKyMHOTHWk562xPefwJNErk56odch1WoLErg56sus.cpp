
        
        /// Determine whether the given text matches a property name.
static bool textMatchesPropertyName(StringRef text,
                                    const InheritedNameSet *allPropertyNames) {
  if (!allPropertyNames) return false;
    }
    
    
    {    if (Finished) {
      std::string Output = 'Output placeholder\n';
      std::string Errors =
          P.second->SeparateErrors ? 'Error placeholder\n' : '';
      if (Finished(P.first, 0, Output, Errors, TaskProcessInformation(Pid),
                   P.second->Context) == TaskFinishedResponse::StopExecution)
        SubtaskFailed = true;
    }
  }
    
    
    {  memcpy(Value, &uuid, Size);
#else
  uuid_generate_random(Value);
#endif
}
    
      bool isVoid() const {
    assert(isValid());
    return Decl.isNull();
  }
    
    const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
    const GeneratedCodeInfo::Annotation* FindAnnotationOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  FindAnnotationsOnPath(info, source_file, path, &annotations);
  if (annotations.empty()) {
    return NULL;
  }
  return annotations[0];
}
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    // Strip package name from a descriptor's full name.
// For example:
//   Full name   : foo.Bar.Baz
//   Package name: foo
//   After strip : Bar.Baz
string StripPackageName(const string& full_name,
                        const FileDescriptor* file) {
  if (file->package().empty()) {
    return full_name;
  } else {
    // Strip package name
    return full_name.substr(file->package().size() + 1);
  }
}
    
      ObjectiveCType objc_type = GetObjectiveCType(descriptor_);
  string singular_type;
  if (objc_type == OBJECTIVECTYPE_MESSAGE) {
    vars['type'] = string('GPBStringifySymbol(') +
                   ClassName(descriptor_->message_type()) + ')';
  } else {
    vars['type'] = 'NULL';
  }
    
    #define TEGRA_UNARYOPSCALE(type, op, src1, sz1, dst, sz, w, h, scales) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    parallel_for_(Range(0, h), \
    TegraGenOp_##op##_Invoker<const type, type>(src1, sz1, dst, sz, w, h, scales), \
    (w * h) / static_cast<double>(1<<16)), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
            map = (u8*)(mag_buf[2] + magstep);
        memset(map, 1, mapstep);
        memset(map + mapstep*(size.height + 1), 1, mapstep);
        borderyt = std::max<ptrdiff_t>(0, offsetk - (ptrdiff_t)borderMargin.top);
        borderyb = std::max<ptrdiff_t>(0, offsetk - (ptrdiff_t)borderMargin.bottom);
    }
    inline void firstRow(const Size2D &size, s32,
                         const u8 *srcBase, ptrdiff_t srcStride,
                         s16*, ptrdiff_t,
                         s16*, ptrdiff_t,
                         s32** mag_buf)
    {
        //sobelH row #0
        const u8* _src = internal::getRowPtr(srcBase, srcStride, 0);
        sobelRow(_src, ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[0]) + shyOffset, size.width);
        //sobelH row #1
        _src = internal::getRowPtr(srcBase, srcStride, 1);
        sobelRow(_src, ((s16*)mag_buf[1]) + shxOffset, ((s16*)mag_buf[1]) + shyOffset, size.width);
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    void sqrIntegral(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 f64 * sqsumBase, ptrdiff_t sqsumStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    uint16x8_t v_zero8 = vmovq_n_u16(0u);
    }
    
    #include <carotene/definitions.hpp>
    
      void StartBlockComparisons() override;
  void FinishBlockComparisons() override;
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    #include 'guetzli/gamma_correct.h'
    
    #include 'guetzli/output_image.h'
    
    void Quantize(coeff_t* v, int iquant) {
  *v = (*v * iquant + kBias) >> kDCTBits;
}
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    #include <assert.h>
#include <cstdlib>
#include <string.h>