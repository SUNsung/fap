
        
        #endif // BITCOIN_QT_OPENURIDIALOG_H

    
    private:
    Ui::SignVerifyMessageDialog *ui;
    WalletModel *model;
    const PlatformStyle *platformStyle;
    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
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
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    static void secp256k1_ge_set_gej_var(secp256k1_ge *r, secp256k1_gej *a) {
    secp256k1_fe z2, z3;
    r->infinity = a->infinity;
    if (a->infinity) {
        return;
    }
    secp256k1_fe_inv_var(&a->z, &a->z);
    secp256k1_fe_sqr(&z2, &a->z);
    secp256k1_fe_mul(&z3, &a->z, &z2);
    secp256k1_fe_mul(&a->x, &a->x, &z2);
    secp256k1_fe_mul(&a->y, &a->y, &z3);
    secp256k1_fe_set_int(&a->z, 1);
    r->x = a->x;
    r->y = a->y;
}
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    
    {    secp256k1_scalar_set_b32(&r, &input64[0], &overflow);
    ret &= !overflow;
    secp256k1_scalar_set_b32(&s, &input64[32], &overflow);
    ret &= !overflow;
    if (ret) {
        secp256k1_ecdsa_recoverable_signature_save(sig, &r, &s, recid);
    } else {
        memset(sig, 0, sizeof(*sig));
    }
    return ret;
}
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    BOOST_FIXTURE_TEST_SUITE(blockchain_tests, BasicTestingSetup)
    
        // Escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\ Baz\'', {
            {'Foo', 'Bar Baz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\Baz\'', {
            {'Foo', 'BarBaz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\@Baz\'', {
            {'Foo', 'Bar@Baz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\\'Baz\' Spam=\'\\\'Eggs\\\'\'', {
            {'Foo', 'Bar\'Baz'},
            {'Spam', '\'Eggs\''},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\\\Baz\'', {
            {'Foo', 'Bar\\Baz'},
        });
    
        BOOST_CHECK_EQUAL(obj['age'].getValStr(), '100');
    BOOST_CHECK_EQUAL(obj['first'].getValStr(), 'John');
    BOOST_CHECK_EQUAL(obj['last'].getValStr(), 'Smith');
    BOOST_CHECK_EQUAL(obj['distance'].getValStr(), '25');
    BOOST_CHECK_EQUAL(obj['time'].getValStr(), '3600');
    BOOST_CHECK_EQUAL(obj['calories'].getValStr(), '12');
    BOOST_CHECK_EQUAL(obj['temperature'].getValStr(), '90.012');
    BOOST_CHECK_EQUAL(obj['moon'].getValStr(), '1');
    BOOST_CHECK_EQUAL(obj['spoon'].getValStr(), '');
    BOOST_CHECK_EQUAL(obj['cat1'].getValStr(), '9000');
    BOOST_CHECK_EQUAL(obj['cat2'].getValStr(), '12345');
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
    void ImmutableExtensionLiteGenerator::Generate(io::Printer* printer) {
  std::map<string, string> vars;
  const bool kUseImmutableNames = true;
  InitTemplateVars(descriptor_, scope_, kUseImmutableNames, name_resolver_,
                   &vars);
  printer->Print(vars,
      'public static final int $constant_name$ = $number$;\n');
    }
    
    
    {
    {
    {
    {
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    void EnumFieldGenerator::DetermineForwardDeclarations(
    std::set<string>* fwd_decls) const {
  SingleFieldGenerator::DetermineForwardDeclarations(fwd_decls);
  // If it is an enum defined in a different file, then we'll need a forward
  // declaration for it.  When it is in our file, all the enums are output
  // before the message, so it will be declared before it is needed.
  if (descriptor_->file() != descriptor_->enum_type()->file()) {
    // Enum name is already in 'storage_type'.
    const string& name = variable('storage_type');
    fwd_decls->insert('GPB_ENUM_FWD_DECLARE(' + name + ')');
  }
}
    
      vars['default_name'] = GPBGenericValueFieldName(descriptor_);
  if (descriptor_->is_repeated()) {
    vars['default'] = 'nil';
  } else {
    vars['default'] = DefaultValue(descriptor_);
  }
  string type = GetCapitalizedType(descriptor_);
  vars['extension_type'] = string('GPBDataType') + type;
    
      static CreatorRegistry& Registry() {
    static CreatorRegistry* g_registry_ = new CreatorRegistry();
    return *g_registry_;
  }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      int label_axis_, outer_num_, inner_num_;
    
    #include <vector>
    
    #endif  // CAFFE_CONV_LAYER_HPP_

    
    
    {}  // namespace caffe
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    namespace tesseract {
double DotProductSSE(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductSSE can't be used on Android\n');
  abort();
}
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  fprintf(stderr, 'IntDotProductSSE can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    #ifndef TESSERACT_ARCH_DOTPRODUCTSSE_H_
#define TESSERACT_ARCH_DOTPRODUCTSSE_H_
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
      // Iterate over the blobs inside to_block, and set the blobs that we want to
  // process to BSTT_NONE. (By default, they should be BSTT_SKIP). The function
  // returns 0 upon success.
  int LabelSpecialText(TO_BLOCK* to_block);
    
    int orientation_and_script_detection(STRING& filename,
                                     OSResults*,
                                     tesseract::Tesseract*);
    
      // go through the list again and this time create the menu structure.
  vc_it.move_to_first();
  for (vc_it.mark_cycle_pt(); !vc_it.cycled_list(); vc_it.forward()) {
    ParamContent* vc = vc_it.data();
    STRING tag;
    STRING tag2;
    STRING tag3;
    GetPrefixes(vc->GetName(), &tag, &tag2, &tag3);
    }
    
    
    {  // Create temporary file
  auto fd = mkstemp(&tmp[0]);
  if (fd == -1) {
    throw std::system_error(errno, std::system_category());
  }
  close(fd);
  return std::string(tmp.data(), tmp.size());
}
    
    ```