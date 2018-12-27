
        
        static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    void AnyMetadata::PackFrom(const Message& message,
                           const string& type_url_prefix) {
  type_url_->SetNoArena(&::google::protobuf::internal::GetEmptyString(),
                        GetTypeUrl(message.GetDescriptor(), type_url_prefix));
  message.SerializeToString(value_->MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited()));
}
    
    void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
    ReflectionClassGenerator::ReflectionClassGenerator(const FileDescriptor* file,
                                                   const Options* options)
    : SourceGeneratorBase(file, options),
      file_(file) {
  namespace_ = GetFileNamespace(file);
  reflectionClassname_ = GetReflectionClassUnqualifiedName(file);
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    GzipOutputStream::GzipOutputStream(ZeroCopyOutputStream* sub_stream) {
  Init(sub_stream, Options());
}
    
    namespace CAROTENE_NS {
    using std::size_t;
    using std::ptrdiff_t;
    }
    
    void accumulate(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                s16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, i);
        const s16 * src1 = internal::getRowPtr(src1Base, src1Stride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
            int16x8_t l02 = vaddq_s16(line0x, line2x);
        int16x8_t l1x2 = vshlq_n_s16(line1x, 1);
        int16x8_t dy = vsubq_s16(line2y, line0y);
        int16x8_t dx = vaddq_s16(l1x2, l02);
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
    template <>
void lshiftConst<0>(const Size2D &size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    s16 * dstBase, ptrdiff_t dstStride)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u8, s32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u8 q3, d4                                       \n\t'
            'vmovl.u8 q4, d5                                       \n\t'
            'vmovl.u16 q5, d6                                      \n\t'
            'vmovl.u16 q6, d7                                      \n\t'
            'vmovl.u16 q7, d8                                      \n\t'
            'vmovl.u16 q8, d9                                      \n\t'
            'vcvt.f32.u32 q9, q5                                   \n\t'
            'vcvt.f32.u32 q10, q6                                  \n\t'
            'vcvt.f32.u32 q11, q7                                  \n\t'
            'vcvt.f32.u32 q12, q8                                  \n\t'
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
            'vst1.32 {d14-d15}, [%[dst1]]                          \n\t'
            'vst1.32 {d16-d17}, [%[dst2]]                          \n\t'
            'vst1.32 {d18-d19}, [%[dst3]]                          \n\t'
            'vst1.32 {d20-d21}, [%[dst4]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              [dst3] 'r' (_dst + i + 8),
              [dst4] 'r' (_dst + i + 12),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10',
            'd11','d12','d13','d14','d15','d16','d17',
            'd18','d19','d20','d21','d22','d23','d24',
            'd25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(u8, s32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        uint8x16_t vline = vld1q_u8(_src + i);
        uint16x8_t vline1_u16 = vmovl_u8(vget_low_u8 (vline));
        uint16x8_t vline2_u16 = vmovl_u8(vget_high_u8(vline));
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline1_u16));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline1_u16));
        uint32x4_t vline3_u32 = vmovl_u16(vget_low_u16 (vline2_u16));
        uint32x4_t vline4_u32 = vmovl_u16(vget_high_u16(vline2_u16));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        float32x4_t vline3_f32 = vcvtq_f32_u32(vline3_u32);
        float32x4_t vline4_f32 = vcvtq_f32_u32(vline4_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int32x4_t vline3_s32 = vcvtq_s32_f32(vline3_f32);
        int32x4_t vline4_s32 = vcvtq_s32_f32(vline4_f32);
        vst1q_s32(_dst + i + 0,  vline1_s32);
        vst1q_s32(_dst + i + 4,  vline2_s32);
        vst1q_s32(_dst + i + 8,  vline3_s32);
        vst1q_s32(_dst + i + 12, vline4_s32);
    }
})
#endif
    
                    v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t0_16s), kernelBase[2]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t1_16s), kernelBase[1]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t2_16s), kernelBase[0]);
    
            result += (double)vget_lane_u64(vadd_u64(vget_low_u64(ws), vget_high_u64(ws)), 0);
    
            for (; js < roiw_base; js += step_base, jd -= step_base)
        {
            prefetch(src + js);
    }
    
                uint8x8_t x0 = vld1_u8(v0 + x);
            uint8x8_t x1 = vld1_u8(v1 + x);
            uint8x8_t x2 = vld1_u8(v2 + x);
            tcnext = vreinterpretq_s16_u16(vshll_n_u8(x1, 2));
    
    
    {}  // namespace grpc

    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
      protobuf::FileDescriptorProto file_desc_proto;
  grpc::string data;
  file_desc->CopyTo(&file_desc_proto);
  file_desc_proto.SerializeToString(&data);
  response->mutable_file_descriptor_response()->add_file_descriptor_proto(data);
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include <numeric>
#include <functional>
    
        // TODO: This could actually be strided?
    template <typename ElementType>
    ElementType* NDArrayView::WritableDataBuffer()
    {
        if (IsReadOnly())
            InvalidArgument('NDArrayView::WritableDataBuffer: Cannot get writable data buffer from a read-only NDArrayView.');
    }
    
            static bool IsUDF(const FunctionPtr& f);
    
    
    {            Microsoft::MSR::CNTK::LearnableParameter<ElementType>::InitRandom(*valueMatrix, AsTensorShape(shape), initializerType, randomSeed, (ElementType)scale,
                                                                              filterRank, outputRank, /*initOnCPUOnly=*/true,
                                                                              AsCNTKImplDeviceId(device));
        }
    
            VariableFields(const NDShape& shape, VariableKind varType, ::CNTK::DataType type, const std::weak_ptr<Function>& ownerFunction, const NDArrayViewPtr& value, bool needsGradient, const std::vector<Axis>& dynamicAxes, bool isSparse, const std::wstring& name, const std::wstring& uid)
            : m_shape(shape), m_varKind(varType), m_dataType(type), m_ownerFunction(ownerFunction), m_value(value), m_needsGradient(needsGradient), m_dynamicAxes(dynamicAxes), m_isSparse(isSparse), m_name(name), m_uid(uid), m_valueTimeStamp(0)
        {
            if (value && (type != value->GetDataType()))
                InvalidArgument('The DataType of the Parameter/Constant Variable '%S' does not match the DataType of the associated Value', AsString().c_str());
    }
    
        // now pass that to concurrent reader so we can read ahead
    // m_DataReader = new ConcurrentReader<ElemType>(m_DataReader);
    // NOW we can init
    // TODO: merge with the code above, but we first need to get the nbrUttPerMinibatch initialized inside each reader
    for (const auto& ioName : m_ioNames)
    {
        const ConfigRecordType& thisIO = hasMultipleReaders ? config(ioName) : config /*legacy*/;
        m_dataReaders[ioName]->Init(thisIO);
    }
    
    
    {}  // namespace internal
    
    Benchmark* Benchmark::ArgName(const std::string& name) {
  CHECK(ArgsCnt() == -1 || ArgsCnt() == 1);
  arg_names_ = {name};
  return this;
}
    
    
    {}  // end namespace benchmark
    
    
    {// Returns true unless value starts with one of: '0', 'f', 'F', 'n' or 'N', or
// some non-alphanumeric character. As a special case, also returns true if
// value is the empty string.
bool IsTruthyFlagValue(const std::string& value);
}  // end namespace benchmark
    
    #if defined(BENCHMARK_OS_MACOSX)
#include <mach/mach_time.h>
#endif
// For MSVC, we want to use '_asm rdtsc' when possible (since it works
// with even ancient MSVC compilers), and when not possible the
// __rdtsc intrinsic, declared in <intrin.h>.  Unfortunately, in some
// environments, <windows.h> and <intrin.h> have conflicting
// declarations of some other intrinsics, breaking compilation.
// Therefore, we simply declare __rdtsc ourselves. See also
// http://connect.microsoft.com/VisualStudio/feedback/details/262047
#if defined(COMPILER_MSVC) && !defined(_M_IX86)
extern 'C' uint64_t __rdtsc();
#pragma intrinsic(__rdtsc)
#endif
    
      CPUInfo const& info = context.cpu_info;
  out << indent << FormatKV('num_cpus', static_cast<int64_t>(info.num_cpus))
      << ',\n';
  out << indent
      << FormatKV('mhz_per_cpu',
                  RoundDouble(info.cycles_per_second / 1000000.0))
      << ',\n';
  out << indent << FormatKV('cpu_scaling_enabled', info.scaling_enabled)
      << ',\n';