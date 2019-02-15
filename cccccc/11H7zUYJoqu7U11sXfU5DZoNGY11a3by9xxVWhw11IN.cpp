
        
        
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    static void secp256k1_gej_double_var(secp256k1_gej *r, const secp256k1_gej *a, secp256k1_fe *rzr) {
    /* Operations: 3 mul, 4 sqr, 0 normalize, 12 mul_int/add/negate.
     *
     * Note that there is an implementation described at
     *     https://hyperelliptic.org/EFD/g1p/auto-shortw-jacobian-0.html#doubling-dbl-2009-l
     * which trades a multiply for a square, but in practice this is actually slower,
     * mainly because it requires more normalizations.
     */
    secp256k1_fe t1,t2,t3,t4;
    /** For secp256k1, 2Q is infinity if and only if Q is infinity. This is because if 2Q = infinity,
     *  Q must equal -Q, or that Q.y == -(Q.y), or Q.y is 0. For a point on y^2 = x^3 + 7 to have
     *  y=0, x^3 must be -7 mod p. However, -7 has no cube root mod p.
     *
     *  Having said this, if this function receives a point on a sextic twist, e.g. by
     *  a fault attack, it is possible for y to be 0. This happens for y^2 = x^3 + 6,
     *  since -6 does have a cube root mod p. For this point, this function will not set
     *  the infinity flag even though the point doubles to infinity, and the result
     *  point will be gibberish (z = 0 but infinity = 0).
     */
    r->infinity = a->infinity;
    if (r->infinity) {
        if (rzr != NULL) {
            secp256k1_fe_set_int(rzr, 1);
        }
        return;
    }
    }
    
    int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
    }
    
    void test_bad_scalar(void) {
    unsigned char s_zero[32] = { 0 };
    unsigned char s_overflow[32] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
        0xba, 0xae, 0xdc, 0xe6, 0xaf, 0x48, 0xa0, 0x3b,
        0xbf, 0xd2, 0x5e, 0x8c, 0xd0, 0x36, 0x41, 0x41
    };
    unsigned char s_rand[32] = { 0 };
    unsigned char output[32];
    secp256k1_scalar rand;
    secp256k1_pubkey point;
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
    
        // Special handling for null case
    // (needed because string comparison reads the null as end-of-string)
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(Null=\'\\0\')'));
    auto ret = ParseTorReplyMapping('Null=\'\\0\'');
    BOOST_CHECK_EQUAL(ret.size(), 1U);
    auto r_it = ret.begin();
    BOOST_CHECK_EQUAL(r_it->first, 'Null');
    BOOST_CHECK_EQUAL(r_it->second.size(), 1U);
    BOOST_CHECK_EQUAL(r_it->second[0], '\0');
    
    static const unsigned char sigma[] = 'expand 32-byte k';
static const unsigned char tau[] = 'expand 16-byte k';
    
    #include <climits>
#include <cmath>
#include <fstream>  // NOLINT(readability/streams)
#include <iostream>  // NOLINT(readability/streams)
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>  // pair
#include <vector>
    
    /** @brief Fills a Blob with values @f$ x \in [0, 1] @f$
 *         such that @f$ \forall i \sum_j x_{ij} = 1 @f$.
 */
template <typename Dtype>
class PositiveUnitballFiller : public Filler<Dtype> {
 public:
  explicit PositiveUnitballFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    DCHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), 0, 1, blob->mutable_cpu_data());
    // We expect the filler to not be called very frequently, so we will
    // just use a simple implementation
    int dim = blob->count() / blob->shape(0);
    CHECK(dim);
    for (int i = 0; i < blob->shape(0); ++i) {
      Dtype sum = 0;
      for (int j = 0; j < dim; ++j) {
        sum += data[i * dim + j];
      }
      for (int j = 0; j < dim; ++j) {
        data[i * dim + j] /= sum;
      }
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      // If there are two top blobs, then the second blob will contain
  // accuracies per class.
  virtual inline int MinTopBlobs() const { return 1; }
  virtual inline int MaxTopBlobs() const { return 2; }
    
    #include <vector>
    
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
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
      /**
   * Moves the iterator to point to the start of the page to begin an
   * iteration.
   */
  virtual void Begin();
    
    #define UNLV_EXT  '.uzn'  // unlv zone file
    
    #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
    namespace osquery {
namespace table_tests {
namespace {
    }
    }
    }
    
    
    {Status startDistributed() {
  if (!FLAGS_disable_distributed) {
    Dispatcher::addService(std::make_shared<DistributedRunner>());
    return Status(0, 'OK');
  } else {
    return Status(1, 'Distributed query service not enabled.');
  }
}
} // namespace osquery

    
    
    {
    {  // Start the scheduler;
  auto expire = static_cast<unsigned long int>(getUnixTime() + 1);
  FLAGS_schedule_reload = 1;
  SchedulerRunner runner(expire, 1);
  FLAGS_schedule_reload = backup_reload;
}
}

    
      _ExtensionManager_registerExtension_result__isset __isset;
    
    
    {  return std::make_pair(std::move(doc), std::move(i));
}
    
    #include <vector>
#include <string>
    
    #include <fstream>
    
    
    {  BIND(&runtime);
  {
    // We are not using Parameter(Descriptor::kJSTarget) and loading the value
    // from the current frame here in order to reduce register pressure on the
    // fast path.
    TNode<JSFunction> target = LoadTargetFromFrame();
    TailCallBuiltin(Builtins::kConsoleAssert, context, target, new_target,
                    argc);
  }
}
    
    void Builtins::Generate_InterpreterPushArgsThenConstructArrayFunction(
    MacroAssembler* masm) {
  return Generate_InterpreterPushArgsThenConstructImpl(
      masm, InterpreterPushArgsMode::kArrayFunction);
}
    
    struct NumberFormatSpan {
  int32_t field_id;
  int32_t begin_pos;
  int32_t end_pos;
    }
    
      // If we've reached this spot, the target builtin has been deserialized and
  // we simply need to copy it over to the target function.
  StoreObjectField(function, JSFunction::kCodeOffset, code);
    
    
    {        BIND(&if_xisnotpositive);
        {
          // Try to negate the {x} value.
          TNode<Smi> result = TrySmiSub(SmiConstant(0), CAST(x), &if_overflow);
          Return(result);
        }
      }
    
      void SayManyHellos(const std::string &name, int num_greetings,
                     std::function<void(const std::string &)> callback) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset =
        CreateManyHellosRequest(mb, name_offset, num_greetings);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<ManyHellosRequest>();
    }
    
    
    {}  // namespace grpc
    
    template<typename T> FLATBUFFERS_CONSTEXPR_CPP14 T HashFnv1(const char *input) {
  T hash = FnvTraits<T>::kOffsetBasis;
  for (const char *c = input; *c; ++c) {
    hash *= FnvTraits<T>::kFnvPrime;
    hash ^= static_cast<unsigned char>(*c);
  }
  return hash;
}
    
      flatbuffers::FlatBufferBuilder builder;
  auto name = builder.CreateString('Dog');
  auto sound = builder.CreateString('Bark');
  auto animal_buffer = sample::CreateAnimal(builder, name, sound);
  builder.Finish(animal_buffer);
    
    
    {  std::string schema;
  schema += '// Generated from ' + file_name + '.proto\n\n';
  if (parser.opts.include_dependence_headers) {
    // clang-format off
    #ifdef FBS_GEN_INCLUDES  // TODO: currently all in one file.
    int num_includes = 0;
    for (auto it = parser.included_files_.begin();
         it != parser.included_files_.end(); ++it) {
      if (it->second.empty())
        continue;
      auto basename = flatbuffers::StripPath(
                        flatbuffers::StripExtension(it->second));
      schema += 'include \'' + basename + '.fbs\';\n';
      num_includes++;
    }
    if (num_includes) schema += '\n';
    #endif
    // clang-format on
  }
  // Generate code for all the enum declarations.
  const Namespace *last_namespace = nullptr;
  for (auto enum_def_it = parser.enums_.vec.begin();
       enum_def_it != parser.enums_.vec.end(); ++enum_def_it) {
    EnumDef &enum_def = **enum_def_it;
    GenNameSpace(*enum_def.defined_namespace, &schema, &last_namespace);
    GenComment(enum_def.doc_comment, &schema, nullptr);
    if (enum_def.is_union)
      schema += 'union ' + enum_def.name;
    else
      schema += 'enum ' + enum_def.name + ' : ';
    schema += GenType(enum_def.underlying_type, true) + ' {\n';
    for (auto it = enum_def.vals.vec.begin(); it != enum_def.vals.vec.end();
         ++it) {
      auto &ev = **it;
      GenComment(ev.doc_comment, &schema, nullptr, '  ');
      if (enum_def.is_union)
        schema += '  ' + GenType(ev.union_type) + ',\n';
      else
        schema += '  ' + ev.name + ' = ' + NumToString(ev.value) + ',\n';
    }
    schema += '}\n\n';
  }
  // Generate code for all structs/tables.
  for (auto it = parser.structs_.vec.begin(); it != parser.structs_.vec.end();
       ++it) {
    StructDef &struct_def = **it;
    GenNameSpace(*struct_def.defined_namespace, &schema, &last_namespace);
    GenComment(struct_def.doc_comment, &schema, nullptr);
    schema += 'table ' + struct_def.name + ' {\n';
    for (auto field_it = struct_def.fields.vec.begin();
         field_it != struct_def.fields.vec.end(); ++field_it) {
      auto &field = **field_it;
      if (field.value.type.base_type != BASE_TYPE_UTYPE) {
        GenComment(field.doc_comment, &schema, nullptr, '  ');
        schema += '  ' + field.name + ':' + GenType(field.value.type);
        if (field.value.constant != '0') schema += ' = ' + field.value.constant;
        if (field.required) schema += ' (required)';
        schema += ';\n';
      }
    }
    schema += '}\n\n';
  }
  return schema;
}
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File *file,
                                   const grpc_generator::Service *service,
                                   grpc_go_generator::Parameters *parameters);
    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
      if (flatbuffers::FileExists(filename.c_str())) {
    std::cout << 'File ' << filename << ' exists.\n';
  } else {
    std::cout << 'File ' << filename << ' does not exist.\n';
    return EXIT_FAILURE;
  }
    
    bool release_n_verify(flatbuffers::FlatBufferBuilder &fbb, const std::string &expected_name, Color color) {
  flatbuffers::DetachedBuffer buf = fbb.Release();
  return verify(buf, expected_name, color);
}
    
    // Get any table field as a 64bit int, regardless of what type it is.
inline int64_t GetAnyFieldI(const Table &table,
                            const reflection::Field &field) {
  auto field_ptr = table.GetAddressOf(field.offset());
  return field_ptr ? GetAnyValueI(field.type()->base_type(), field_ptr)
                   : field.default_integer();
}
    
    Type BasicTokenizedFile::readOneToken(StartWithWhitespace condition) {
	skipWhitespaces();
	if (tokenStartWhitespace_ && condition == StartWithWhitespace::Deny) {
		return Type::Invalid;
	}
	if (reader_.atEnd()) {
		return Type::Invalid;
	}
    }
    
    CheckedUtf8String::CheckedUtf8String(const QByteArray &string) : CheckedUtf8String(string.constData(), string.size()) {
}
    
    
private:
	CleanFile file_;
	const char *pos_ = nullptr;
	const char *end_ = nullptr;
    
    
    {
    {} // namespace emoji
} // namespace codegen

    
    
    {
    {} // namespace lang
} // namespace codegen

    
    // Parsing failed if inputPath is empty in the result.
Options parseOptions();
    
    	// Returns 0 on success.
	int launch();
    
    namespace codegen {
namespace numbers {
    }
    }
    
    // The idea here is quite simple:
//    1) A Map to index the key.  O(1) key search time-complexity.
//    2) A List to sort the cache data by accessed time.
// 
//  Considering there are too many insert/delete opreations for the List, 
//  The ouble linked list is the good data structure to performance it.
    
    /********************************************************************************** 
 * 
 * Design a data structure that supports the following two operations:
 * 
 * void addWord(word)
 * bool search(word)
 * 
 * search(word) can search a literal word or a regular expression string containing only letters `a-z` or `.`
 * A `.` means it can represent any one letter.
 * 
 * For example:
 * 
 *   addWord('bad')
 *   addWord('dad')
 *   addWord('mad')
 *   search('pad') -> false
 *   search('bad') -> true
 *   search('.ad') -> true
 *   search('b..') -> true
 * 
 * Note:
 * You may assume that all words are consist of lowercase letters a-z.
 * 
 * click to show hint.
 * 
 * You should be familiar with how a Trie works. If not, please work on this problem: Implement Trie (Prefix Tree) first.
 * 
 *               
 **********************************************************************************/
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
    
    
    {        }
    
    
int calculate(string s) {
    return calculate_two_stacks(s);
}
    
    /********************************************************************************** 
* 
* Given a binary tree, find the maximum path sum.
* 
* The path may start and end at any node in the tree.
* 
* For example:
* Given the below binary tree,
* 
*        1
*       / \
*      2   3
* 
* Return 6.
* 
*               
**********************************************************************************/