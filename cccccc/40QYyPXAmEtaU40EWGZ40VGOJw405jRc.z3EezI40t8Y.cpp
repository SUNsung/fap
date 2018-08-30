
        
        
    {    QWidget *m_dummyWidget;
    QMenu *m_dockMenu;
    QMainWindow *mainWindow;
};
    
    Q_SIGNALS:
    void valueChanged();
    
        void setModel(WalletModel *model);
    void setAddress_SM(const QString &address);
    void setAddress_VM(const QString &address);
    
    public:
    explicit TransactionDescDialog(const QModelIndex &idx, QWidget *parent = 0);
    ~TransactionDescDialog();
    
    /** Generate blocks (mine) */
UniValue generateBlocks(std::shared_ptr<CReserveScript> coinbaseScript, int nGenerate, uint64_t nMaxTries, bool keepScript);
    
    inline void format(std::ostream& out, const char* fmt)
{
    vformat(out, fmt, makeFormatList());
}
    
    static void initJsonEscape()
{
    // Escape all lower control characters (some get overridden with smaller sequences below)
    for (int ch=0x00; ch<0x20; ++ch) {
        char tmpbuf[20];
        snprintf(tmpbuf, sizeof(tmpbuf), '\\u%04x', ch);
        escapes[ch] = std::string(tmpbuf);
    }
    }
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    namespace remote {
    }
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    namespace {
void SetProxyConfigCallback(
    base::WaitableEvent* done,
    const scoped_refptr<net::URLRequestContextGetter>& url_request_context_getter,
    const net::ProxyConfigWithAnnotation& proxy_config) {
  net::ProxyResolutionService* proxy_service =
      url_request_context_getter->GetURLRequestContext()->proxy_resolution_service();
  proxy_service->ResetConfigService(base::WrapUnique(new net::ProxyConfigServiceFixed(proxy_config)));
  done->Signal();
}
} // namespace
    
    namespace extensions {
    }
    
      // implement nw.Screen.registerStream()
  class NwScreenRegisterStreamFunction : public NWSyncExtensionFunction {
  public:
    NwScreenRegisterStreamFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    bool AtLeastOneAnnotationMatchesSubstring(
    const string& file_content,
    const std::vector<const GeneratedCodeInfo::Annotation*>& annotations,
    const string& expected_text) {
  for (std::vector<const GeneratedCodeInfo::Annotation*>::const_iterator
           i = annotations.begin(),
           e = annotations.end();
       i != e; ++i) {
    const GeneratedCodeInfo::Annotation* annotation = *i;
    uint32 begin = annotation->begin();
    uint32 end = annotation->end();
    if (end < begin || end > file_content.size()) {
      return false;
    }
    if (file_content.substr(begin, end - begin) == expected_text) {
      return true;
    }
  }
  return false;
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    void EnumOneofFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'if ($has_property_check$) {\n'
    '  size += $tag_size$ + pb::CodedOutputStream.ComputeEnumSize((int) $property_name$);\n'
    '}\n');
}
    
    void FieldGeneratorBase::GenerateFreezingCode(io::Printer* printer) {
  // No-op: only message fields and repeated fields need
  // special handling for freezing, so default to not generating any code.
}
    
    // Attempt to remove a prefix from a value, ignoring casing and skipping underscores.
// (foo, foo_bar) => bar - underscore after prefix is skipped
// (FOO, foo_bar) => bar - casing is ignored
// (foo_bar, foobarbaz) => baz - underscore in prefix is ignored
// (foobar, foo_barbaz) => baz - underscore in value is ignored
// (foo, bar) => bar - prefix isn't matched; return original value
std::string TryRemovePrefix(const std::string& prefix, const std::string& value) {
  // First normalize to a lower-case no-underscores prefix to match against
  std::string prefix_to_match = '';
  for (size_t i = 0; i < prefix.size(); i++) {
    if (prefix[i] != '_') {
      prefix_to_match += ascii_tolower(prefix[i]);
    }
  }
  
  // This keeps track of how much of value we've consumed
  size_t prefix_index, value_index;
  for (prefix_index = 0, value_index = 0;
      prefix_index < prefix_to_match.size() && value_index < value.size();
      value_index++) {
    // Skip over underscores in the value
    if (value[value_index] == '_') {
      continue;
    }
    if (ascii_tolower(value[value_index]) != prefix_to_match[prefix_index++]) {
      // Failed to match the prefix - bail out early.
      return value;
    }
  }
    }
    
    
  WriteGeneratedCodeAttributes(printer);
  printer->Print('public void MergeFrom(pb::CodedInputStream input) {\n');
  printer->Indent();
  printer->Print(
    'uint tag;\n'
    'while ((tag = input.ReadTag()) != 0) {\n'
    '  switch(tag) {\n');
  printer->Indent();
  printer->Indent();
  // Option messages need to store unknown fields so that options can be parsed later.
  if (IsDescriptorOptionMessage(descriptor_)) {
    printer->Print(
      'default:\n'
      '  CustomOptions = CustomOptions.ReadOrSkipUnknownField(input);\n'
      '  break;\n');
  } else {
    printer->Print(
      'default:\n'
      '  _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);\n'
      '  break;\n');
  }
  for (int i = 0; i < fields_by_number().size(); i++) {
    const FieldDescriptor* field = fields_by_number()[i];
    internal::WireFormatLite::WireType wt =
        internal::WireFormat::WireTypeForFieldType(field->type());
    uint32 tag = internal::WireFormatLite::MakeTag(field->number(), wt);
    // Handle both packed and unpacked repeated fields with the same Read*Array call;
    // the two generated cases are the packed and unpacked tags.
    // TODO(jonskeet): Check that is_packable is equivalent to
    // is_repeated && wt in { VARINT, FIXED32, FIXED64 }.
    // It looks like it is...
    if (field->is_packable()) {
      printer->Print(
        'case $packed_tag$:\n',
        'packed_tag',
        SimpleItoa(
            internal::WireFormatLite::MakeTag(
                field->number(),
                internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED)));
    }
    }
    }
    }
    }
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
    #ifdef CAROTENE_NEON
    
            mag_buf[1][0] = mag_buf[1][size.width+1] = 0;
        if (borderyt == 0)
        {
            //sobelH row #-1
            _src = internal::getRowPtr(srcBase, srcStride, -1);
            sobelRow(_src, ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[2]) + shyOffset, size.width);
    }
    
    template <typename Op, int elsize> struct vtail
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        //do nothing since there couldn't be enough data
        (void)src0;
        (void)src1;
        (void)dst;
        (void)op;
        (void)x;
        (void)width;
    }
};
template <typename Op> struct vtail<Op, 2>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    }
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, s16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u16 q3, d4                                       \n\t'
            'vmovl.u16 q4, d5                                       \n\t'
            'vcvt.f32.u32 q5, q3                                    \n\t'
            'vcvt.f32.u32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vcvt.s32.f32 q12, q10                                  \n\t'
            'vqmovn.s32 d26, q11                                    \n\t'
            'vqmovn.s32 d27, q12                                    \n\t'
            'vst1.16 {d26-d27}, [%[dst]]                            \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
              'w' (vshift), 'w' (vscale)
            : 'd6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27'
        );
    }
})
#else
CVTS_FUNC(u16, s16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        vst1q_s16(_dst + i, vcombine_s16(vRes1, vRes2));
    }
})
#endif
    
            for (; i < roiw4; i += 4 )
        {
            internal::prefetch(src + i);
            uint32x4_t vln = vld1q_u32(src + i);
            uint32x4_t vnz = vminq_u32(vln, vc1);
            vs = vqaddq_u32(vs, vnz);
        }
    
        //fin
    int16x8_t q = vmaxq_s16(q0, vsubq_s16(vmovq_n_s16(0), q1));
    int16x4_t q2 = vmax_s16(vget_low_s16(q), vget_high_s16(q));
    int32x4_t q2w = vmovl_s16(q2);
    int32x2_t q4 = vmax_s32(vget_low_s32(q2w), vget_high_s32(q2w));
    int32x2_t q8 = vmax_s32(q4, vreinterpret_s32_s64(vshr_n_s64(vreinterpret_s64_s32(q4), 32)));
    
    
    {
    {        for (--jd; js < size.width; ++js, --jd)
            dst[jd] = src[js];
    }
}
    
                    ptrdiff_t* lidx0 = lane + x - 2*4;
                ptrdiff_t* lidx1 = lane + x - 1*4;
                ptrdiff_t* lidx3 = lane + x + 1*4;
                ptrdiff_t* lidx4 = lane + x + 2*4;
    
    // To distinguish different instances of the pattern, (yes, you
// can instantiate it more then once) the first argument to the
// INSTANTIATE_TEST_CASE_P macro is a prefix that will be added to the
// actual test case name. Remember to pick unique prefixes for different
// instantiations. The tests from the instantiation above will have
// these names:
//
//    * InstantiationName/FooTest.DoesBlah/0 for 'meeny'
//    * InstantiationName/FooTest.DoesBlah/1 for 'miny'
//    * InstantiationName/FooTest.DoesBlah/2 for 'moe'
//    * InstantiationName/FooTest.HasBlahBlah/0 for 'meeny'
//    * InstantiationName/FooTest.HasBlahBlah/1 for 'miny'
//    * InstantiationName/FooTest.HasBlahBlah/2 for 'moe'
//
// You can use these names in --gtest_filter.
//
// This statement will instantiate all tests from FooTest again, each
// with parameter values 'cat' and 'dog':
    
      // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 const char* a_file_name,
                 int a_line_number,
                 const char* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? '' : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_TYPED_TEST_H_

    
    #endif  // GTEST_SAMPLES_PRIME_TABLES_H_

    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    
    {  leveldb::Benchmark benchmark;
  benchmark.Run();
  return 0;
}

    
      // Simulate no-space errors while this pointer is non-null.
  port::AtomicPointer no_space_;
    
    // A wrapper around WritableFile which informs another Env whenever this file
// is written to or sync'ed.
class TestWritableFile : public WritableFile {
 public:
  TestWritableFile(const FileState& state,
                   WritableFile* f,
                   FaultInjectionTestEnv* env);
  virtual ~TestWritableFile();
  virtual Status Append(const Slice& data);
  virtual Status Close();
  virtual Status Flush();
  virtual Status Sync();
    }
    
    static const int kBlockSize = 32768;
    
        if (resyncing_) {
      if (record_type == kMiddleType) {
        continue;
      } else if (record_type == kLastType) {
        resyncing_ = false;
        continue;
      } else {
        resyncing_ = false;
      }
    }
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
     private:
  MemTable::Table::Iterator iter_;
  std::string tmp_;       // For passing to EncodeKey
    
      std::string ManifestFileName() {
    std::string current;
    ASSERT_OK(ReadFileToString(env_, CurrentFileName(dbname_), &current));
    size_t len = current.size();
    if (len > 0 && current[len-1] == '\n') {
      current.resize(len - 1);
    }
    return dbname_ + '/' + current;
  }
    
    // Same as FFT8, but all inputs are real.
// TODO(szabadka): Since this does not need to be in-place, maybe there is a
// faster FFT than this one, which is derived from DJB's in-place complex FFT.
void RealFFT8(const double* in, Complex* out) {
  double t1, t2, t3, t5, t6, t7, t8;
  t8 = in[6];
  t5 = in[2] - t8;
  t8 += in[2];
  out[2].real = t8;
  out[6].imag = -t5;
  out[4].imag = t5;
  t8 = in[4];
  t3 = in[0] - t8;
  t8 += in[0];
  out[0].real = t8;
  out[4].real = t3;
  out[6].real = t3;
  t7 = in[5];
  t3 = in[1] - t7;
  t7 += in[1];
  out[1].real = t7;
  t8 = in[7];
  t5 = in[3] - t8;
  t8 += in[3];
  out[3].real = t8;
  t2 = -t5;
  t6 = t3 - t5;
  t8 = kSqrtHalf;
  t6 *= t8;
  out[5].real = out[4].real - t6;
  t1 = t3 + t5;
  t1 *= t8;
  out[5].imag = out[4].imag - t1;
  t6 += out[4].real;
  out[4].real = t6;
  t1 += out[4].imag;
  out[4].imag = t1;
  t5 = t2 - t3;
  t5 *= t8;
  out[7].imag = out[6].imag - t5;
  t2 += t3;
  t2 *= t8;
  out[7].real = out[6].real - t2;
  t2 += out[6].real;
  out[6].real = t2;
  t5 += out[6].imag;
  out[6].imag = t5;
  t5 = out[2].real;
  t1 = out[0].real - t5;
  t7 = out[3].real;
  t5 += out[0].real;
  t3 = out[1].real - t7;
  t7 += out[1].real;
  t8 = t5 + t7;
  out[0].real = t8;
  t5 -= t7;
  out[1].real = t5;
  out[2].imag = t3;
  out[3].imag = -t3;
  out[3].real = t1;
  out[2].real = t1;
  out[0].imag = 0;
  out[1].imag = 0;
    }
    
      // Returns an aggregate distance or similarity value between the baseline
  // image and the image in the last Compare() call (or the baseline image, if
  // Compare() was not called yet).
  // The interpretation of this aggregate value depends on the comparator used.
  virtual float distmap_aggregate() const = 0;
    
    #include 'guetzli/stats.h'
    
    inline void ColumnDct(coeff_t* in) {
  for (int i = 0; i < 8; ++i) {
    int m0, m1, m2, m3, m4, m5, m6, m7;
    COLUMN_DCT8(in + i);
  }
}
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out);