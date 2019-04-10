
        
        #endif  // ATOM_APP_UV_TASK_RUNNER_H_

    
    
    {}  // namespace api
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    
    {}  // namespace atom

    
    #endif  // ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_

    
    void URLRequestAboutJob::Start() {
  base::ThreadTaskRunnerHandle::Get()->PostTask(
      FROM_HERE, base::BindOnce(&URLRequestAboutJob::StartAsync,
                                weak_ptr_factory_.GetWeakPtr()));
}
    
    void OffScreenOutputDevice::OnPaint(const gfx::Rect& damage_rect) {
  gfx::Rect rect = damage_rect;
  if (!pending_damage_rect_.IsEmpty()) {
    rect.Union(pending_damage_rect_);
    pending_damage_rect_.SetRect(0, 0, 0, 0);
  }
    }
    
    class RootViewMac : public views::View {
 public:
  explicit RootViewMac(NativeWindow* window);
  ~RootViewMac() override;
    }
    
    
    {}  // namespace atom
    
    #ifndef BITCOIN_QT_OPENURIDIALOG_H
#define BITCOIN_QT_OPENURIDIALOG_H
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    void test_ecdsa_recovery_api(void) {
    /* Setup contexts that just count errors */
    secp256k1_context *none = secp256k1_context_create(SECP256K1_CONTEXT_NONE);
    secp256k1_context *sign = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    secp256k1_context *vrfy = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY);
    secp256k1_context *both = secp256k1_context_create(SECP256K1_CONTEXT_SIGN | SECP256K1_CONTEXT_VERIFY);
    secp256k1_pubkey pubkey;
    secp256k1_pubkey recpubkey;
    secp256k1_ecdsa_signature normal_sig;
    secp256k1_ecdsa_recoverable_signature recsig;
    unsigned char privkey[32] = { 1 };
    unsigned char message[32] = { 2 };
    int32_t ecount = 0;
    int recid = 0;
    unsigned char sig[74];
    unsigned char zero_privkey[32] = { 0 };
    unsigned char over_privkey[32] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
    }
    
    BOOST_AUTO_TEST_SUITE_END()

    
    #include <boost/test/unit_test.hpp>
    
    #endif // TINYFORMAT_H_INCLUDED

    
        std::map<std::string, UniValue::VType> objTypes;
    objTypes['age'] = UniValue::VNUM;
    objTypes['first'] = UniValue::VSTR;
    objTypes['last'] = UniValue::VSTR;
    objTypes['distance'] = UniValue::VNUM;
    objTypes['time'] = UniValue::VNUM;
    objTypes['calories'] = UniValue::VNUM;
    objTypes['temperature'] = UniValue::VNUM;
    objTypes['moon'] = UniValue::VBOOL;
    objTypes['spoon'] = UniValue::VBOOL;
    objTypes['cat1'] = UniValue::VNUM;
    objTypes['cat2'] = UniValue::VNUM;
    BOOST_CHECK(obj.checkObject(objTypes));
    
    REGISTER_CPU_OPERATOR(
    MergeMultiScalarFeatureTensorsGradient,
    MergeMultiScalarFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiScalarFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with scalar features into many.' +
        doc)
    .NumInputs([](int n) { return n >= 2; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'out_values_grad', '.values_grad')
    .Output(0, 'in1_values_grad', '.values_grad');
REGISTER_GRADIENT(
    MergeMultiScalarFeatureTensors,
    GetMergeMultiScalarFeatureTensorsGradient);
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    #include <cstdint>  // for int16_t
    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
     private:
  // Sets the value of total_pages_ behind a mutex.
  void set_total_pages(int total) {
    SVAutoLock lock(&general_mutex_);
    total_pages_ = total;
  }
  void set_memory_used(int64_t memory_used) {
    SVAutoLock lock(&general_mutex_);
    memory_used_ = memory_used;
  }
  // Locks the pages_mutex_ and Loads as many pages can fit in max_memory_
  // starting at index pages_offset_.
  bool ReCachePages();
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    #endif

    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    #include 'hphp/runtime/base/perf-warning.h'
    
      // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    
//--------------------------------------------------------------------------
//
//   Clone
//
//--------------------------------------------------------------------------
RegexPattern  *RegexPattern::clone() const {
    RegexPattern  *copy = new RegexPattern(*this);
    return copy;
}
    
        UBool numeric = settings->isNumeric();
    if(equalPrefixLength > 0) {
        UBool unsafe = FALSE;
        if(equalPrefixLength != leftLength) {
            int32_t i = equalPrefixLength;
            UChar32 c;
            U8_NEXT_OR_FFFD(left, i, leftLength, c);
            unsafe = data->isUnsafeBackward(c, numeric);
        }
        if(!unsafe && equalPrefixLength != rightLength) {
            int32_t i = equalPrefixLength;
            UChar32 c;
            U8_NEXT_OR_FFFD(right, i, rightLength, c);
            unsafe = data->isUnsafeBackward(c, numeric);
        }
        if(unsafe) {
            // Identical prefix: Back up to the start of a contraction or reordering sequence.
            UChar32 c;
            do {
                U8_PREV_OR_FFFD(left, 0, equalPrefixLength, c);
            } while(equalPrefixLength > 0 && data->isUnsafeBackward(c, numeric));
        }
        // See the notes in the UTF-16 version.
    }
    
        UBool operator == (const ScriptSet &other) const;
    ScriptSet & operator = (const ScriptSet &other);
    
    #define DOT               ((UChar)0x002E)
#define SINGLE_QUOTE      ((UChar)0x0027)
#define SLASH             ((UChar)0x002F)
#define BACKSLASH         ((UChar)0x005C)
#define SPACE             ((UChar)0x0020)
#define TAB               ((UChar)0x0009)
#define QUOTATION_MARK    ((UChar)0x0022)
#define ASTERISK          ((UChar)0x002A)
#define COMMA             ((UChar)0x002C)
#define HYPHEN            ((UChar)0x002D)
#define U_ZERO            ((UChar)0x0030)
#define U_ONE             ((UChar)0x0031)
#define U_TWO             ((UChar)0x0032)
#define U_THREE           ((UChar)0x0033)
#define U_FOUR            ((UChar)0x0034)
#define U_FIVE            ((UChar)0x0035)
#define U_SIX             ((UChar)0x0036)
#define U_SEVEN           ((UChar)0x0037)
#define U_EIGHT           ((UChar)0x0038)
#define U_NINE            ((UChar)0x0039)
#define COLON             ((UChar)0x003A)
#define SEMI_COLON        ((UChar)0x003B)
#define CAP_A             ((UChar)0x0041)
#define CAP_B             ((UChar)0x0042)
#define CAP_R             ((UChar)0x0052)
#define CAP_Z             ((UChar)0x005A)
#define LOWLINE           ((UChar)0x005F)
#define LEFTBRACE         ((UChar)0x007B)
#define RIGHTBRACE        ((UChar)0x007D)
    
    U_NAMESPACE_END
    
    #ifndef __SHARED_PLURALRULES_H__
#define __SHARED_PLURALRULES_H__
    
    
SimpleDateFormatStaticSets::~SimpleDateFormatStaticSets() {
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
}
    
    U_NAMESPACE_BEGIN