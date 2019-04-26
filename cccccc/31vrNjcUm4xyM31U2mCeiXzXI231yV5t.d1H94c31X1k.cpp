
        
        
    {  if (debug) {
    const OpRegistrationData* op_reg_data;
    Status status = OpRegistry::Global()->LookUp(node->op(), &op_reg_data);
    if (!status.ok()) {
      os << '\tCouldn't find op registration for ' << node->op() << std::endl;
    } else if (!op_reg_data->shape_inference_fn) {
      os << '\tCouldn't find shape function for op ' << node->op() << std::endl;
    } else if (properties.HasInputProperties(node->name())) {
      const std::vector<OpInfo::TensorProperties>& props =
          properties.GetInputProperties(node->name());
      for (int i = 0; i < props.size(); ++i) {
        const OpInfo::TensorProperties& prop = props[i];
        if (prop.has_value()) {
          os << '\t'
             << 'input ' << i << ' (' << DataTypeString(prop.dtype())
             << ') has known value' << std::endl;
        }
      }
    }
  }
}
    
    namespace io {
    }
    
      // Acquire the per-Entry mutex without holding the map mutex. Initializing
  // an Executor may be expensive, so we want to allow concurrent
  // initialization of different entries.
  mutex_lock lock{entry->configurations_mutex};
  for (const auto& iter : entry->configurations) {
    if (iter.first.plugin_config == config.plugin_config &&
        iter.first.device_options == config.device_options) {
      VLOG(2) << 'hit in cache';
      return iter.second.get();
    }
  }
    
    
    {
    {}  // namespace host
}  // namespace stream_executor

    
      // Returns the most recent value recorded for a start/stopcycle, in
  // microseconds.
  uint64 Microseconds() const override;
    
    #define SRC_ARG1 ST * src1_data_, size_t src1_step_,
#define SRC_STORE1 src1_data(src1_data_), src1_step(src1_step_),
#define SRC_VAR1 ST * src1_data; \
                 size_t src1_step;
#define SRC_ARG2 ST * src1_data_, size_t src1_step_, \
                 ST * src2_data_, size_t src2_step_,
#define SRC_STORE2 src1_data(src1_data_), src1_step(src1_step_), \
                   src2_data(src2_data_), src2_step(src2_step_),
#define SRC_VAR2 ST * src1_data; \
                 size_t src1_step; \
                 ST * src2_data; \
                 size_t src2_step;
    
        /*
        Convert BGR image to HSV
    */
    void bgr2hsv(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 s32 hrange);
    
    
    {
    {
    {            vst1q_s32(dsta + x, wa);
            vst1q_s32(dstb + x, wb);
        }
        if(x < colsn)
        {
            x = colsn-4;
            goto box3x3s32_horiz_last2;
        }
    }
#else
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)borderValue;
    (void)borderMargin;
#endif
}
    
    
    {
    {                if (y < tg22x)
                {
                    if (m > _mag[j-1] && m >= _mag[j+1]) goto __push;
                }
                else
                {
                    s32 tg67x = tg22x + (x << (CANNY_SHIFT+1));
                    if (y > tg67x)
                    {
                        if (m > _mag[j+magstep2] && m >= _mag[j+magstep1]) goto __push;
                    }
                    else
                    {
                        s32 s = (xs ^ ys) < 0 ? -1 : 1;
                        if(m > _mag[j+magstep2-s] && m > _mag[j+magstep1+s]) goto __push;
                    }
                }
            }
            prev_flag = 0;
            _map[j] = u8(1);
            continue;
            __push:
            if (!prev_flag && m > high && _map[j-mapstep] != 2)
            {
                CANNY_PUSH(_map + j);
                prev_flag = 1;
            }
            else
                _map[j] = 0;
        }
    
    #define SPLIT(sgn,bits,n) void split##n(const Size2D &_size,                                            \
                                    const sgn##bits * srcBase, ptrdiff_t srcStride                      \
                                    FILL_LINES##n(FARG, sgn##bits) )                                    \
{                                                                                                       \
    internal::assertSupportedConfiguration();                                                           \
    Size2D size(_size);                                                                                 \
    if (CONTDST##n                                                                                      \
        dst0Stride == (ptrdiff_t)(size.width))                                                          \
    {                                                                                                   \
        size.width *= size.height;                                                                      \
        size.height = 1;                                                                                \
    }                                                                                                   \
    typedef internal::VecTraits<sgn##bits, n>::vec128 vec128;                                           \
    size_t roiw16 = size.width >= (16/sizeof(sgn##bits)-1) ? size.width - (16/sizeof(sgn##bits)-1) : 0; \
    typedef internal::VecTraits<sgn##bits, n>::vec64 vec64;                                             \
    size_t roiw8 = size.width >= (8/sizeof(sgn##bits)-1) ? size.width - (8/sizeof(sgn##bits)-1) : 0;    \
                                                                                                        \
    for (size_t i = 0u; i < size.height; ++i)                                                           \
    {                                                                                                   \
        const sgn##bits * src = internal::getRowPtr(srcBase, srcStride, i);                             \
        FILL_LINES##n(VROW, sgn##bits)                                                                  \
        size_t sj = 0u, dj = 0u;                                                                        \
                                                                                                        \
        for (; dj < roiw16; sj += MUL##n(16)/sizeof(sgn##bits), dj += 16/sizeof(sgn##bits))             \
            SPLIT_QUAD(sgn, bits, n)                                                                    \
                                                                                                        \
        if (dj < roiw8)                                                                                 \
        {                                                                                               \
            vec64 v_src = vld##n##_##sgn##bits(src + sj);                                               \
            FILL_LINES##n(VST1, sgn##bits)                                                              \
            sj += MUL##n(8)/sizeof(sgn##bits);                                                          \
            dj += 8/sizeof(sgn##bits);                                                                  \
        }                                                                                               \
                                                                                                        \
        for (; dj < size.width; sj += n, ++dj)                                                          \
        {                                                                                               \
            FILL_LINES##n(SST, sgn##bits)                                                               \
        }                                                                                               \
    }                                                                                                   \
}
    
    
    {            if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
    #define INRANGEFUNC(T)                                       \
void inRange(const Size2D &_size,                            \
             const T * srcBase, ptrdiff_t srcStride,         \
             const T * rng1Base, ptrdiff_t rng1Stride,       \
             const T * rng2Base, ptrdiff_t rng2Stride,       \
             u8 * dstBase, ptrdiff_t dstStride)              \
{                                                            \
    internal::assertSupportedConfiguration();                \
    inRangeCheck(_size, srcBase, srcStride,                  \
                 rng1Base, rng1Stride, rng2Base, rng2Stride, \
                 dstBase, dstStride);                        \
}
#else
#define INRANGEFUNC(T)                                       \
void inRange(const Size2D &,                                 \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             u8 *, ptrdiff_t)                                \
{                                                            \
    internal::assertSupportedConfiguration();                \
}
#endif
    
                vsuml = vaddq_u32(vsuml, prev);
            vsumh = vaddq_u32(vsumh, prev);
    
                if(x) {
                tcurr = tnext;
            }
            tnext = vsubq_s16(vreinterpretq_s16_u16(vaddl_u8(x0, x2)),
                              vreinterpretq_s16_u16(vshll_n_u8(x1, 2)));
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    OPERATOR_SCHEMA(GivenTensorFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
This op fills an output tensor with the data specified by the *value* and *dtype* arguments.  The output tensor shape is specified by the *shape* argument. Beware, when using this argument *value* should have a value for every element of the *output*, as missing values will not be initialized automatically. If *input_as_shape* is set to *true*, then the *input* should be a 1D tensor containing the desired output shape (the dimensions specified in *extra_shape* will also be appended). In this case, the *shape* argument should **not** be set.
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
            static bool IsUDF(const FunctionPtr& f);
    
        Variable Variable::Clone() const
    {
        Variable clonedVariable;
        clonedVariable.m_dataFields = m_dataFields->Clone();
    }
    
        static void setupTimeout(int seconds)
    {
        struct sigaction action = {};
        action.sa_handler = &CrossProcessMutex::noOpAlarmHandler;
        sigaction(SIGALRM, &action, NULL);
        alarm(seconds);
    }
    
                if (numFrames > 0)
            {
                totalframeNum += numFrames;
    }
    
        size_t dst_frame = 0;
    for (size_t fr = 0; fr < maxSeqLength; fr++)
    {
        for (size_t j = 0; j < numSequences && seq[sequenceOrder[j]].GetNumTimeSteps()>fr; j++)
        {
            m_packingIndex->SetValue(0, dst_frame++, (ElemType)mb->GetColumnIndex(seq[sequenceOrder[j]], fr));
            numSequencesForFrame2[fr]++;
        }
    }