
        
          if (!wasInline) delete[] oldBegin;
    
    
    {  OutLines.append(Lines.begin(), Lines.end());
}

    
      if (camel_case::sameWordIgnoreFirstCase(preposition, 'to')) {
    if (camel_case::sameWordIgnoreFirstCase(word, 'visible') ||
        camel_case::sameWordIgnoreFirstCase(word, 'backing'))
      return true;
  }
    
    
    {
    {void TaskProcessInformation::provideMapping(json::Output &out) {
  out.mapRequired('real_pid', OSPid);
  if (ProcessUsage.hasValue())
    out.mapRequired('usage', ProcessUsage.getValue());
}
}
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
      // TODO(jonskeet): Consider a C#-escaping format here instead of just Base64.
  std::string base64 = FileDescriptorToBase64(file_);
  while (base64.size() > 60) {
    printer->Print('\'$base64$\',\n', 'base64', base64.substr(0, 60));
    base64 = base64.substr(60);
  }
  printer->Print('\'$base64$\'));\n', 'base64', base64);
  printer->Outdent();
  printer->Outdent();
  printer->Outdent();
    
    // Author: kenton@google.com (Kenton Varda)
    
    // Get the name of a message's Java class without package name prefix.
string ClassNameWithoutPackage(const Descriptor* descriptor,
                               bool immutable) {
  return StripPackageName(descriptor->full_name(),
                          descriptor->file());
}
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, i);
        const u8 * src1 = internal::getRowPtr(src1Base, src1Stride, i);
        u16 * dst = internal::getRowPtr((u16 *)dstBase, dstStride, i);
        size_t j = 0;
    }
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
                // make extrapolation for the first elements
            if (!x)
            {
                // make border
                if (border == BORDER_MODE_CONSTANT)
                    tcurr = v_border_x3;
                else if (border == BORDER_MODE_REPLICATE)
                    tcurr = vdupq_n_u16(vgetq_lane_u16(tnext, 0));
    }
    
    #define MERGE_ASM2(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vst2.' #bits ' {d0, d2}, [%[out0]]           \n\t' \
                                          'vst2.' #bits ' {d1, d3}, [%[out1]]           \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define MERGE_ASM3(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vst3.' #bits ' {d0, d2, d4}, [%[out0]]       \n\t' \
                                          'vst3.' #bits ' {d1, d3, d5}, [%[out1]]       \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define MERGE_ASM4(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vld1.' #bits ' {d6-d7}, [%[in3]]             \n\t' \
                                          'vst4.' #bits ' {d0, d2, d4, d6}, [%[out0]]   \n\t' \
                                          'vst4.' #bits ' {d1, d3, d5, d7}, [%[out1]]   \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), [in3] 'r' (src3 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
    
    {
    {
    {            v_src0 = internal::vld1(src0 + x);
            v_src1 = internal::vld1(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1(dst + x, v_dst);
            x+=8;
        }
    }
};
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
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
            'vst1.32 {d18-d19}, [%[dst1]]                           \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(u16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
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
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
                s32 val = 0;
            for (s32 _y = 0; _y < 3; ++_y)
                val += prevx[_y] * kernelBase[(2 - _y) * 3 + 2] +
                       currx[_y] * kernelBase[(2 - _y) * 3 + 1] +
                       nextx[_y] * kernelBase[(2 - _y) * 3 + 0];
    
            if (s[0] < 0 || s[1] < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
        result += (s[0] += s[1]);
        if (s[0] < 0 || result < 0)
        {
            return 0x7fFFffFF;
        }
    
            if( i < (ptrdiff_t)size.height - 3 )
        {
            j = 3;
    }
    
    void fillMinMaxLocs(const Size2D & size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    u8 minVal, size_t * minLocPtr, s32 & minLocCount, s32 minLocCapacity,
                    u8 maxVal, size_t * maxLocPtr, s32 & maxLocCount, s32 maxLocCapacity)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        ptrdiff_t idx_l1 = internal::borderInterpolate(-1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_l2 = internal::borderInterpolate(-2, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r1 = internal::borderInterpolate(size.width + 0, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r2 = internal::borderInterpolate(size.width + 1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    
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
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    // 4-ary predicate assertion macros.
#define EXPECT_PRED_FORMAT4(pred_format, v1, v2, v3, v4) \
  GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED4(pred, v1, v2, v3, v4) \
  GTEST_PRED4_(pred, v1, v2, v3, v4, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT4(pred_format, v1, v2, v3, v4) \
  GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED4(pred, v1, v2, v3, v4) \
  GTEST_PRED4_(pred, v1, v2, v3, v4, GTEST_FATAL_FAILURE_)
    
    // A helper for implementing get<k>().
template <int k> class Get;
    
    
    {  return result;
}
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    
    {    return new_queue;
  }
    
      uint64_t Size(const Slice& start, const Slice& limit) {
    Range r(start, limit);
    uint64_t size;
    db_->GetApproximateSizes(&r, 1, &size);
    return size;
  }
    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
    TEST(DBTest, DeletionMarkers2) {
  Put('foo', 'v1');
  ASSERT_OK(dbfull()->TEST_CompactMemTable());
  const int last = config::kMaxMemCompactLevel;
  ASSERT_EQ(NumTableFilesAtLevel(last), 1);   // foo => v1 is now in last level
    }
    
    // Return the length of the encoding of 'key'.
inline size_t InternalKeyEncodingLength(const ParsedInternalKey& key) {
  return key.user_key.size() + 8;
}
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
    
    {  // Check that introducing an older log file does not cause it to be re-read.
  Close();
  MakeLogFile(old_log+1, 2000, 'hello', 'stale write');
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
}
    
        //fprintf(stderr, 'NewDescriptor:\n%s\n', edit_.DebugString().c_str());
    {
      log::Writer log(file);
      std::string record;
      edit_.EncodeTo(&record);
      status = log.AddRecord(record);
    }
    if (status.ok()) {
      status = file->Close();
    }
    delete file;
    file = nullptr;
    
    Action::Action()
:_originalTarget(nullptr)
,_target(nullptr)
,_tag(Action::INVALID_TAG)
,_flags(0)
{
#if CC_ENABLE_SCRIPT_BINDING
    ScriptEngineProtocol* engine = ScriptEngineManager::getInstance()->getScriptEngine();
    _scriptType = engine != nullptr ? engine->getScriptType() : kScriptTypeNone;
#endif
}
    
    PointArray* PointArray::reverse() const
{
    vector<Vec2> newArray;
    newArray.reserve(_controlPoints.size());
    for (auto iter = _controlPoints.rbegin(), iterRend = _controlPoints.rend(); iter != iterRend; ++iter)
    {
        newArray.push_back(*iter);
    }
    PointArray *config = PointArray::create(0);
    config->setControlPoints(std::move(newArray));
    
    return config;
}
    
    AccelAmplitude* AccelAmplitude::create(Action *action, float duration)
{
    AccelAmplitude *ret = new (std::nothrow) AccelAmplitude();
    if (ret && ret->initWithAction(action, duration))
    {
        ret->autorelease();
        return ret;
    }
    }
    
        //
    // Override
    //
    virtual void startWithTarget(Node *target) override;
    virtual JumpTo* clone() const override;
    virtual JumpTo* reverse() const override;
    
    
    {    return count;
}
    
    #include '2d/CCAction.h'
#include 'base/CCVector.h'
#include 'base/CCRef.h'
    
    Animation* Animation::create(const Vector<AnimationFrame*>& arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops /* = 1 */)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithAnimationFrames(arrayOfAnimationFrameNames, delayPerUnit, loops);
    animation->autorelease();
    return animation;
}
    
    unsigned int PolygonInfo::getTriaglesCount() const
{
    return getTrianglesCount();
}