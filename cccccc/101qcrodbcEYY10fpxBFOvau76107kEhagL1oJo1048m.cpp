
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
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
    
    
    {    count = 0;
    for (i = 0; i < len; i++) {
        r[i].infinity = a[i].infinity;
        if (!a[i].infinity) {
            secp256k1_ge_set_gej_zinv(&r[i], &a[i], &azi[count++]);
        }
    }
    free(azi);
}
    
    void test_ecdh_api(void) {
    /* Setup context that just counts errors */
    secp256k1_context *tctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    secp256k1_pubkey point;
    unsigned char res[32];
    unsigned char s_one[32] = { 0 };
    int32_t ecount = 0;
    s_one[31] = 1;
    }
    
    
    {    /* Serialize/parse compact and verify/recover. */
    extra[0] = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[0], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign(ctx, &signature[0], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[4], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[1], message, privkey, NULL, extra) == 1);
    extra[31] = 1;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[2], message, privkey, NULL, extra) == 1);
    extra[31] = 0;
    extra[0] = 1;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[3], message, privkey, NULL, extra) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(ctx, sig, &recid, &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(memcmp(&signature[4], &signature[0], 64) == 0);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 1);
    memset(&rsignature[4], 0, sizeof(rsignature[4]));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 1);
    /* Parse compact (with recovery id) and recover. */
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recover(ctx, &recpubkey, &rsignature[4], message) == 1);
    CHECK(memcmp(&pubkey, &recpubkey, sizeof(pubkey)) == 0);
    /* Serialize/destroy/parse signature and verify again. */
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(ctx, sig, &recid, &rsignature[4]) == 1);
    sig[secp256k1_rand_bits(6)] += 1 + secp256k1_rand_int(255);
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 0);
    /* Recover again */
    CHECK(secp256k1_ecdsa_recover(ctx, &recpubkey, &rsignature[4], message) == 0 ||
          memcmp(&pubkey, &recpubkey, sizeof(pubkey)) != 0);
}
    
    
    {    // Inputs that are effectively invalid under the target grammar.
    // PROTOCOLINFO accepts an OtherLine that is just an OptArguments, which
    // would make these inputs valid. However,
    // - This parser is never used in that situation, because the
    //   SplitTorReplyLine parser enables OtherLine to be skipped.
    // - Even if these were valid, an OptArguments contains no semantic data,
    //   so there is no point in parsing it.
    CheckParseTorReplyMapping('ARGS', {});
    CheckParseTorReplyMapping('MORE ARGS', {});
    CheckParseTorReplyMapping('MORE  ARGS', {});
    CheckParseTorReplyMapping('EVEN more=ARGS', {});
    CheckParseTorReplyMapping('EVEN+more ARGS', {});
}
    
    static const Message* GetCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
static Message* MutableCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
    
      const char* argv[] = {'protoc', proto_path.c_str(),
                        plugin_specific_args.c_str(), capture_out.c_str(),
                        filename.c_str()};
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    namespace {
// Whether two fields have conflicting accessors (assuming name1 and name2
// are different). name1 and name2 are field1 and field2's camel-case name
// respectively.
bool IsConflicting(const FieldDescriptor* field1, const string& name1,
                   const FieldDescriptor* field2, const string& name2,
                   string* info) {
  if (field1->is_repeated()) {
    if (field2->is_repeated()) {
      // Both fields are repeated.
      return false;
    } else {
      // field1 is repeated, and field2 is not.
      if (name1 + 'Count' == name2) {
        *info = 'both repeated field \'' + field1->name() + '\' and singular ' +
                'field \'' + field2->name() + '\' generate the method \'' +
                'get' + name1 + 'Count()\'';
        return true;
      }
      if (name1 + 'List' == name2) {
        *info = 'both repeated field \'' + field1->name() + '\' and singular ' +
                'field \'' + field2->name() + '\' generate the method \'' +
                'get' + name1 + 'List()\'';
        return true;
      }
      // Well, there are obviously many more conflicting cases, but it probably
      // doesn't worth the effort to exhaust all of them because they rarely
      // happen and as we are continuing adding new methods/changing existing
      // methods the number of different conflicting cases will keep growing.
      // We can just add more cases here when they are found in the real world.
      return false;
    }
  } else {
    if (field2->is_repeated()) {
      return IsConflicting(field2, name2, field1, name1, info);
    } else {
      // None of the two fields are repeated.
      return false;
    }
  }
}
}  // namespace
    
      // We start the comment with the main body based on the comments from the
  // .proto file (if present). We then end with the field declaration, e.g.:
  //   optional string foo = 5;
  // If the field is a group, the debug string might end with {.
  printer->Print('/**\n');
  WriteDocCommentBody(printer, field);
  printer->Print(
    ' * <code>$def$</code>\n',
    'def', EscapeJavadoc(FirstLineOf(field->DebugString())));
  printer->Print(' */\n');
}
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    #include <google/protobuf/compiler/objectivec/objectivec_oneof.h>
#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
    /// @brief Fills a Blob with uniformly distributed values @f$ x\sim U(a, b) @f$.
template <typename Dtype>
class UniformFiller : public Filler<Dtype> {
 public:
  explicit UniformFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), Dtype(this->filler_param_.min()),
        Dtype(this->filler_param_.max()), blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
     protected:
  /**
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the predictions @f$ x @f$, a Blob with values in
   *      @f$ [-\infty, +\infty] @f$ indicating the predicted score for each of
   *      the @f$ K = CHW @f$ classes. Each @f$ x_n @f$ is mapped to a predicted
   *      label @f$ \hat{l}_n @f$ given by its maximal index:
   *      @f$ \hat{l}_n = \arg\max\limits_k x_{nk} @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the labels @f$ l @f$, an integer-valued Blob with values
   *      @f$ l_n \in [0, 1, 2, ..., K - 1] @f$
   *      indicating the correct class label among the @f$ K @f$ classes
   * @param top output Blob vector (length 1)
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      the computed accuracy: @f$
   *        \frac{1}{N} \sum\limits_{n=1}^N \delta\{ \hat{l}_n = l_n \}
   *      @f$, where @f$
   *      \delta\{\mathrm{condition}\} = \left\{
   *         \begin{array}{lr}
   *            1 & \mbox{if condition} \\
   *            0 & \mbox{otherwise}
   *         \end{array} \right.
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
    
    {  // extra temporarary variables is used to carry out sums/broadcasting
  // using BLAS
  Blob<Dtype> batch_sum_multiplier_;
  Blob<Dtype> num_by_chans_;
  Blob<Dtype> spatial_sum_multiplier_;
};
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of DeConvolutionLayer.
 *        Fallback to DeConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates deconvolution through forward kernels for filtering and
 * bias plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
*/
template <typename Dtype>
class CuDNNDeconvolutionLayer : public DeconvolutionLayer<Dtype> {
 public:
  explicit CuDNNDeconvolutionLayer(const LayerParameter& param)
    : DeconvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
                          const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
                       const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNDeconvolutionLayer();
    }
    
    namespace caffe {
    }
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {
    {			char      *lPr = (char *)malloc(MAX_PATH);
			char      *pR = (char *)malloc(MAX_PATH);
			size_t i;
			wcstombs_s(&i, lPr, (size_t)MAX_PATH,
				legacyUserAliasesPath, (size_t)MAX_PATH);
			wcstombs_s(&i, pR, (size_t)MAX_PATH,
				userAliasesPath, (size_t)MAX_PATH);
			rename(lPr, pR);
		}
	}
    
    int32_t RegexPattern::groupNumberFromName(const char *groupName, int32_t nameLength, UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return 0;
    }
    UnicodeString name(groupName, nameLength, US_INV);
    return groupNumberFromName(name, status);
}
    
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
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
    //----------------------------------------------------------------------
    
    
SimpleDateFormatStaticSets::~SimpleDateFormatStaticSets() {
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
}