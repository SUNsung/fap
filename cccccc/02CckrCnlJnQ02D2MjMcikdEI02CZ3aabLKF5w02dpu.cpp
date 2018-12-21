
        
        Q_SIGNALS:
    void valueChanged();
    
        Round(a, b, c, d, e, f, g, h, 0x27b70a85, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0x2e1b2138, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x4d2c6dfc, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x53380d13, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x650a7354, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x766a0abb, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x81c2c92e, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x92722c85, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0xa2bfe8a1, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0xa81a664b, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0xc24b8b70, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0xc76c51a3, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0xd192e819, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xd6990624, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0xf40e3585, w14 += sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0x106aa070, w15 += sigma1(w13) + w8 + sigma0(w0));
    
        /* Check bad contexts and NULLs for recovery */
    ecount = 0;
    CHECK(secp256k1_ecdsa_recover(none, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recover(sign, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(vrfy, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, NULL, &recsig, message) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, NULL, message) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, NULL) == 0);
    CHECK(ecount == 5);
    
    BOOST_AUTO_TEST_CASE(get_difficulty_for_very_low_target)
{
    TestDifficulty(0x1f111111, 0.000001);
}
    
        // C escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\nBaz\\t\' Spam=\'\\rEggs\' Octals=\'\\1a\\11\\17\\18\\81\\377\\378\\400\\2222\' Final=Check', {
            {'Foo', 'Bar\nBaz\t'},
            {'Spam', '\rEggs'},
            {'Octals', '\1a\11\17\1' '881\377\37' '8\40' '0\222' '2'},
            {'Final', 'Check'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Escaped=\'Escape\\\\\'', {
            {'Valid', 'Mapping'},
            {'Escaped', 'Escape\\'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Bare=\'Escape\\\'', {});
    CheckParseTorReplyMapping(
        'OneOctal=\'OneEnd\\1\' TwoOctal=\'TwoEnd\\11\'', {
            {'OneOctal', 'OneEnd\1'},
            {'TwoOctal', 'TwoEnd\11'},
        });
    
    
    {} // namespace CAROTENE_NS

    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
        void operator() (const typename VecTraits<f32>::vec128 & v_src0,
                     const typename VecTraits<f32>::vec128 & v_src1,
                     typename VecTraits<f32>::vec128 & v_dst) const
    {
        float32x4_t vs1 = vmlaq_f32(vgamma, v_src0, valpha);
        v_dst = vmlaq_f32(vs1, v_src1, vbeta);
    }
    
    
    {    void operator() (const u8 * src0, const u8 * src1, u8 * dst) const
    {
        dst[0] = src0[0] & src1[0];
    }
};
    
                int32x4_t va = vaddq_s32(lane0a, lane2a);
            int32x4_t vb = vaddq_s32(lane0b, lane2b);
            int32x4_t vc = vaddq_s32(lane0c, lane2c);
            int32x4_t wa = vaddq_s32(va, lane1a);
            int32x4_t wb = vaddq_s32(vb, lane1b);
            int32x4_t wc = vaddq_s32(vc, lane1c);
    
        // now track the edges (hysteresis thresholding)
    while (stack_top > stack_bottom)
    {
        u8* m;
        if ((size_t)(stack_top - stack_bottom) + 8u > maxsize)
        {
            ptrdiff_t sz = (ptrdiff_t)(stack_top - stack_bottom);
            maxsize = maxsize * 3/2;
            stack.resize(maxsize);
            stack_bottom = &stack[0];
            stack_top = stack_bottom + sz;
        }
    }
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1q(dst + x, v_dst);
            x+=16;
        }
        if( x + 8 < width)
        {
            vec64  v_src0, v_src1;
            uvec64 v_dst;
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u8, f32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
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
            'vst1.32 {d6-d7}, [%[dst1]]                            \n\t'
            'vst1.32 {d8-d9}, [%[dst2]]                            \n\t'
            'vst1.32 {d10-d11}, [%[dst3]]                          \n\t'
            'vst1.32 {d12-d13}, [%[dst4]]                          \n\t'
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
CVTS_FUNC(u8, f32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
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
        vst1q_f32(_dst + i + 0,  vline1_f32);
        vst1q_f32(_dst + i + 4,  vline2_f32);
        vst1q_f32(_dst + i + 8,  vline3_f32);
        vst1q_f32(_dst + i + 12, vline4_f32);
    }
})
#endif
    
    
    {            ws = vpadalq_s32(ws, vpaddlq_s16(vmull_s8(vs1, vs2)));
            i += 8;
        }
    
                    int32x4_t ln04 = vaddq_s32(lane0, lane4);
                int32x4_t ln13 = vaddq_s32(lane1, lane3);
    
    #include 'common.hpp'
    
    
    {
    {        for (; j < size.width; ++j)
            sqsum[j] = (prev += src[j]*src[j]) + prevSqSum[j];
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)sqsumBase;
    (void)sqsumStride;
#endif
}
    
    // table lookup with the table in a 128-bit register
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
      // Given two numbers in the sign-and-magnitude representation,
  // returns the distance between them as an unsigned number.
  static Bits DistanceBetweenSignAndMagnitudeNumbers(const Bits &sam1,
                                                     const Bits &sam2) {
    const Bits biased1 = SignAndMagnitudeToBiased(sam1);
    const Bits biased2 = SignAndMagnitudeToBiased(sam2);
    return (biased1 >= biased2) ? (biased1 - biased2) : (biased2 - biased1);
  }
    
    template <GTEST_4_TYPENAMES_(T)>
struct tuple_size<GTEST_4_TUPLE_(T) > {
  static const int value = 4;
};
    
    // GetTypeName<T>() returns a human-readable name of type T.
// NB: This function is also used in Google Mock, so don't move it inside of
// the typed-test-only section below.
template <typename T>
std::string GetTypeName() {
# if GTEST_HAS_RTTI
    }
    
    
    {}  // namespace
    
      // Gets the 0-terminated C string this MyString object represents.
  const char* c_string() const { return c_string_; }
    
    template <typename E>  // E is the element type.
class Queue {
 public:
  // Creates an empty queue.
  Queue() : head_(NULL), last_(NULL), size_(0) {}
    }
    
        TrainerPtr CreateTrainer(const FunctionPtr& model, const FunctionPtr& lossFunction, const std::vector<LearnerPtr>& parameterLearners,
                             const std::vector<ProgressWriterPtr>& progressWriters)
    {
        return MakeSharedObject<Trainer>(model, lossFunction, parameterLearners, progressWriters);
    }
    
    
    {            Microsoft::MSR::CNTK::LearnableParameter<ElementType>::InitRandom(*valueMatrix, AsTensorShape(shape), initializerType, randomSeed, (ElementType)scale,
                                                                              filterRank, outputRank, /*initOnCPUOnly=*/true,
                                                                              AsCNTKImplDeviceId(device));
        }
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        assert(m_handle == NULL);
        m_handle = ::CreateMutexA(NULL /*security attr*/, FALSE /*bInitialOwner*/, m_name.c_str());
        if (m_handle == NULL)
        {
            if (!wait)
                return false;   // can't lock due to access permissions: lock already exists, consider not available
            else
                RuntimeError('Acquire: Failed to create named mutex %s: %d.', m_name.c_str(), GetLastError());
        }
    }
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
        virtual void /*ComputationNode::*/ BackpropTo(const size_t /*inputIndex*/, const FrameRange&) override
    {
        InvalidArgument('PerDimMeanVarNormalizationNode should only be called in the evaluation stage. Is any of its descendents a learnable parameter that requires gradient?');
    }
    
        // request matrices needed to do node function value evaluation
    virtual void RequestMatricesBeforeForwardProp(MatrixPool& matrixPool)
    {
        Base::RequestMatricesBeforeForwardProp(matrixPool);
        RequestMatrixFromPool(m_urlGain0, matrixPool);
        RequestMatrixFromPool(m_urlGain1, matrixPool);
        RequestMatrixFromPool(m_urlDiscount0, matrixPool);
        RequestMatrixFromPool(m_urlDiscount1, matrixPool);
    }
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
      int version;
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
    void DHTTaskQueueImpl::addPeriodicTask2(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue2_.addTask(task);
}
    
      static const std::string E;
    
    static void ParseFile(benchmark::State& state, const char* filename)
{
    while (state.KeepRunning())
    {
        state.PauseTiming();
        auto* f = new std::ifstream(filename);
        auto* j = new json();
        state.ResumeTiming();
    }
    }
    
    
    {}  // end namespace benchmark
    
    void SleepForMilliseconds(int milliseconds) {
  SleepForMicroseconds(milliseconds * kNumMicrosPerMilli);
}
    
    
    {  sender.Update();
  sender.Stop();
  EXPECT_FALSE(sender.IsRunning());
}
    
    #include 'gtest/gtest.h'
    
    namespace apollo {
namespace localization {
namespace msf {
    }
    }
    }
    
    #include 'modules/map/hdmap/adapter/xml_parser/common_define.h'
#include 'modules/map/hdmap/adapter/xml_parser/status.h'
#include 'modules/map/hdmap/adapter/xml_parser/util_xml_parser.h'
    
    #include 'modules/common/util/util.h'
#include 'modules/planning/common/indexed_queue.h'
    
    TEST_F(SpeedLimitTest, SimpleSpeedLimitCreation) {
  SpeedLimit simple_speed_limit;
  EXPECT_TRUE(simple_speed_limit.speed_limit_points().empty());
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
}
    
    TEST(TestPiecewiseLinearConstraint, add_second_derivative_boundary) {
  PiecewiseLinearConstraint constraint(10, 0.1);
  std::vector<uint32_t> index_list;
  std::vector<double> lower_bound;
  std::vector<double> upper_bound;
  for (uint32_t i = 0; i < 10; ++i) {
    index_list.push_back(i);
    lower_bound.push_back(-4.0);
    upper_bound.push_back(2.0);
  }
    }
    
    Spline1dSeg::Spline1dSeg(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}