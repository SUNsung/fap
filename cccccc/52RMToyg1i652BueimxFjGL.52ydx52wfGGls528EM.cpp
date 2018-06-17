
        
        /** \brief Abstract class for writers.
 * \deprecated Use StreamWriter. (And really, this is an implementation detail.)
 */
class JSON_API Writer {
public:
  virtual ~Writer();
    }
    
    bool Reader::decodeUnicodeEscapeSequence(Token& token,
                                         Location& current,
                                         Location end,
                                         unsigned int& unicode) {
  if (end - current < 4)
    return addError(
        'Bad unicode escape sequence in string: four digits expected.',
        token,
        current);
  unicode = 0;
  for (int index = 0; index < 4; ++index) {
    Char c = *current++;
    unicode *= 16;
    if (c >= '0' && c <= '9')
      unicode += c - '0';
    else if (c >= 'a' && c <= 'f')
      unicode += c - 'a' + 10;
    else if (c >= 'A' && c <= 'F')
      unicode += c - 'A' + 10;
    else
      return addError(
          'Bad unicode escape sequence in string: hexadecimal digit expected.',
          token,
          current);
  }
  return true;
}
    
    PyObject* NewFileExtensionsByName(const FileDescriptor* descriptor);
    
      // Implement the abstract interface. All these functions fill the output
  // with a copy of FileDescriptorProto.
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    void RepeatedPrimitiveFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
void RepeatedPrimitiveFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
void RepeatedPrimitiveFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateNonNestedInitializationCode(io::Printer* printer);
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
        f3coeff[1] = 2*D[1][2] - 2*D[1][4] + 2*D[2][1] + 2*D[2][5] + 2*D[2][9] - 2*D[4][1] - 2*D[4][5] - 2*D[4][9] + 2*D[5][2] - 2*D[5][4] + 2*D[9][2] - 2*D[9][4]; // constant term
    f3coeff[2] = 2*D[1][6] + 2*D[1][8] + 4*D[2][3] + 4*D[2][7] + 4*D[3][2] + 4*D[3][4] + 4*D[4][3] + 4*D[4][7] - 2*D[5][6] - 2*D[5][8] + 2*D[6][1] - 2*D[6][5] - 2*D[6][9] + 4*D[7][2] + 4*D[7][4] + 2*D[8][1] - 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s1^2  * s2
    f3coeff[3] = 8*D[2][2] - 8*D[3][3] - 8*D[4][4] + 8*D[6][6] + 8*D[7][7] - 8*D[8][8]; // s1 * s2
    f3coeff[4] = 4*D[1][8] - 4*D[1][6] + 8*D[2][3] + 8*D[2][7] + 8*D[3][2] - 8*D[3][4] - 8*D[4][3] - 8*D[4][7] - 4*D[5][6] + 4*D[5][8] - 4*D[6][1] - 4*D[6][5] + 4*D[6][9] + 8*D[7][2] - 8*D[7][4] + 4*D[8][1] + 4*D[8][5] - 4*D[8][9] + 4*D[9][6] - 4*D[9][8]; // s1 * s3
    f3coeff[5] = 4*D[1][3] - 4*D[1][7] + 8*D[2][6] + 8*D[2][8] + 4*D[3][1] + 4*D[3][5] - 4*D[3][9] - 8*D[4][6] - 8*D[4][8] + 4*D[5][3] - 4*D[5][7] + 8*D[6][2] - 8*D[6][4] - 4*D[7][1] - 4*D[7][5] + 4*D[7][9] + 8*D[8][2] - 8*D[8][4] - 4*D[9][3] + 4*D[9][7]; // s2 * s3
    f3coeff[6] = 4*D[1][1] - 4*D[5][5] + 4*D[5][9] + 8*D[6][6] + 8*D[6][8] + 8*D[8][6] + 8*D[8][8] + 4*D[9][5] - 4*D[9][9]; // s2^2 * s3
    f3coeff[7] = 2*D[5][6] - 2*D[1][8] - 2*D[1][6] + 2*D[5][8] - 2*D[6][1] + 2*D[6][5] - 2*D[6][9] - 2*D[8][1] + 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s2^3
    f3coeff[8] = 6*D[3][9] - 6*D[1][7] - 6*D[3][1] - 6*D[3][5] - 6*D[1][3] - 6*D[5][3] - 6*D[5][7] - 6*D[7][1] - 6*D[7][5] + 6*D[7][9] + 6*D[9][3] + 6*D[9][7]; // s1 * s3^2
    f3coeff[9] = 2*D[1][3] + 2*D[1][7] + 4*D[2][6] - 4*D[2][8] + 2*D[3][1] + 2*D[3][5] + 2*D[3][9] - 4*D[4][6] + 4*D[4][8] + 2*D[5][3] + 2*D[5][7] + 4*D[6][2] - 4*D[6][4] + 2*D[7][1] + 2*D[7][5] + 2*D[7][9] - 4*D[8][2] + 4*D[8][4] + 2*D[9][3] + 2*D[9][7]; // s1
    f3coeff[10] = 8*D[2][2] - 4*D[1][5] - 4*D[1][1] - 8*D[2][4] - 8*D[4][2] + 8*D[4][4] - 4*D[5][1] - 4*D[5][5] + 4*D[9][9]; // s3
    f3coeff[11] = 2*D[1][6] + 2*D[1][8] - 4*D[2][3] + 4*D[2][7] - 4*D[3][2] + 4*D[3][4] + 4*D[4][3] - 4*D[4][7] + 2*D[5][6] + 2*D[5][8] + 2*D[6][1] + 2*D[6][5] + 2*D[6][9] + 4*D[7][2] - 4*D[7][4] + 2*D[8][1] + 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s2
    f3coeff[12] = 6*D[6][9] - 6*D[1][8] - 6*D[5][6] - 6*D[5][8] - 6*D[6][1] - 6*D[6][5] - 6*D[1][6] - 6*D[8][1] - 6*D[8][5] + 6*D[8][9] + 6*D[9][6] + 6*D[9][8]; // s2 * s3^2
    f3coeff[13] = 2*D[1][2] - 2*D[1][4] + 2*D[2][1] - 2*D[2][5] - 2*D[2][9] + 4*D[3][6] - 4*D[3][8] - 2*D[4][1] + 2*D[4][5] + 2*D[4][9] - 2*D[5][2] + 2*D[5][4] + 4*D[6][3] + 4*D[6][7] + 4*D[7][6] - 4*D[7][8] - 4*D[8][3] - 4*D[8][7] - 2*D[9][2] + 2*D[9][4]; // s1^2
    f3coeff[14] = 6*D[1][4] - 6*D[1][2] - 6*D[2][1] - 6*D[2][5] + 6*D[2][9] + 6*D[4][1] + 6*D[4][5] - 6*D[4][9] - 6*D[5][2] + 6*D[5][4] + 6*D[9][2] - 6*D[9][4]; // s3^2
    f3coeff[15] = 2*D[1][4] - 2*D[1][2] - 2*D[2][1] + 2*D[2][5] - 2*D[2][9] - 4*D[3][6] - 4*D[3][8] + 2*D[4][1] - 2*D[4][5] + 2*D[4][9] + 2*D[5][2] - 2*D[5][4] - 4*D[6][3] + 4*D[6][7] + 4*D[7][6] + 4*D[7][8] - 4*D[8][3] + 4*D[8][7] - 2*D[9][2] + 2*D[9][4]; // s2^2
    f3coeff[16] = 4*D[1][1] + 4*D[1][5] - 4*D[1][9] + 4*D[5][1] + 4*D[5][5] - 4*D[5][9] - 4*D[9][1] - 4*D[9][5] + 4*D[9][9]; // s3^3
    f3coeff[17] = 4*D[2][9] - 4*D[1][4] - 4*D[2][1] - 4*D[2][5] - 4*D[1][2] + 8*D[3][6] + 8*D[3][8] - 4*D[4][1] - 4*D[4][5] + 4*D[4][9] - 4*D[5][2] - 4*D[5][4] + 8*D[6][3] + 8*D[6][7] + 8*D[7][6] + 8*D[7][8] + 8*D[8][3] + 8*D[8][7] + 4*D[9][2] + 4*D[9][4]; // s1 * s2 * s3
    f3coeff[18] = 4*D[2][6] - 2*D[1][7] - 2*D[1][3] + 4*D[2][8] - 2*D[3][1] + 2*D[3][5] - 2*D[3][9] + 4*D[4][6] + 4*D[4][8] + 2*D[5][3] + 2*D[5][7] + 4*D[6][2] + 4*D[6][4] - 2*D[7][1] + 2*D[7][5] - 2*D[7][9] + 4*D[8][2] + 4*D[8][4] - 2*D[9][3] - 2*D[9][7]; // s1 * s2^2
    f3coeff[19] = 4*D[1][9] - 4*D[1][1] + 8*D[3][3] + 8*D[3][7] + 4*D[5][5] + 8*D[7][3] + 8*D[7][7] + 4*D[9][1] - 4*D[9][9]; // s1^2 * s3
    f3coeff[20] = 2*D[1][3] + 2*D[1][7] + 2*D[3][1] - 2*D[3][5] - 2*D[3][9] - 2*D[5][3] - 2*D[5][7] + 2*D[7][1] - 2*D[7][5] - 2*D[7][9] - 2*D[9][3] - 2*D[9][7]; // s1^3
    
        double quantile_sum = 0.0;
    //double min_quantile = 0.2;
    double low_sum = 0;
    double max_segment_length = 0;
    int max_start_x = -1;
    int max_end_x = -1;
    int start_x = 0;
    const double out_of_bells_fraction = 0.1;
    for(int x = 0; x < hist.size[0]; x++)
    {
        quantile_sum += hist.at<float>(x);
        if(quantile_sum < 0.2*total_sum) continue;
    }
    
    #ifndef GL_VERSION_1_5
    // GL types for handling large vertex buffer objects
    typedef ptrdiff_t GLintptr;
    typedef ptrdiff_t GLsizeiptr;
#endif
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
    static void* openclamdfft_check_fn(int ID)
{
    assert(ID >= 0 && ID < (int)(sizeof(openclamdfft_fn)/sizeof(openclamdfft_fn[0])));
    const struct DynamicFnEntry* e = openclamdfft_fn[ID];
    void* func = CV_CL_GET_PROC_ADDRESS(e->fnName);
    if (!func)
    {
        throw cv::Exception(cv::Error::OpenCLApiCallError,
                cv::format('OpenCL AMD FFT function is not available: [%s]', e->fnName),
                CV_Func, __FILE__, __LINE__);
    }
    *(e->ppFn) = func;
    return func;
}
    
    struct DynamicFnEntry
{
    const char* fnName; // 'clCreateContext'
    void** ppFn; // &clCreateContext_pfn
};
    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
    /* (a32 * (opus_int32)((opus_int16)(b32))) >> 16 output have to be 32bit int */
#undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB_armv4(opus_int32 a, opus_int16 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#silk_SMULWB\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(a), 'r'(b<<16)
  );
  return rd_hi;
}
#define silk_SMULWB(a, b) (silk_SMULWB_armv4(a, b))
    
    
    {    unsigned char *GetData() { return data; }
};
    
    // Size of everything except the Huffman codes and the entropy coded data.
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata) {
  size_t num_bytes = 0;
  num_bytes += 2;  // SOI
  if (strip_metadata) {
    num_bytes += 18;  // APP0
  } else {
    for (size_t i = 0; i < jpg.app_data.size(); ++i) {
      num_bytes += 1 + jpg.app_data[i].size();
    }
    for (size_t i = 0; i < jpg.com_data.size(); ++i) {
      num_bytes += 2 + jpg.com_data[i].size();
    }
  }
  // DQT
  num_bytes += 4;
  for (size_t i = 0; i < jpg.quant.size(); ++i) {
    num_bytes += 1 + (jpg.quant[i].precision ? 2 : 1) * kDCTBlockSize;
  }
  num_bytes += 10 + 3 * jpg.components.size();  // SOF
  num_bytes += 4;  // DHT (w/o actual Huffman code data)
  num_bytes += 8 + 2 * jpg.components.size();  // SOS
  num_bytes += 2;  // EOI
  num_bytes += jpg.tail_data.size();
  return num_bytes;
}
    
    namespace {
    }
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    bool SetDepth(int p, HuffmanTree *pool, uint8_t *depth, int max_depth);
    
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
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    
    {}  // namespace guetzli
    
    void YGNode::setAndPropogateUseLegacyFlag(bool useLegacyFlag) {
  config_->useLegacyStretchBehaviour = useLegacyFlag;
  for_each(children_.begin(), children_.end(), [=](YGNodeRef childNode) {
    childNode->getConfig()->useLegacyStretchBehaviour = useLegacyFlag;
  });
}
    
    class IosFlagsSaver {
  ios_base& ios_;
  ios_base::fmtflags flags_;
    }
    
    
    {}

    
      // Only allow implicit upcasts. A downcast will result in a compile error
  // unless you use static_cast (which will end up invoking the explicit
  // operator below).
  template <typename U>
  RefPtr(const RefPtr<U>& ref, typename std::enable_if<std::is_base_of<T,U>::value, U>::type* = nullptr) :
    m_ptr(ref.get())
  {
    refIfNecessary(m_ptr);
  }