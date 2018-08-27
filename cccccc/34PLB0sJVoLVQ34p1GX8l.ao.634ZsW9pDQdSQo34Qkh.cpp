
        
        /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
        /** Colorize an icon (given filename) with the text color */
    QIcon TextColorIcon(const QString& filename) const;
    
    public:
    explicit SignVerifyMessageDialog(const PlatformStyle *platformStyle, QWidget *parent);
    ~SignVerifyMessageDialog();
    
    
    {    count = 0;
    for (i = 0; i < len; i++) {
        r[i].infinity = a[i].infinity;
        if (!a[i].infinity) {
            secp256k1_ge_set_gej_zinv(&r[i], &a[i], &azi[count++]);
        }
    }
    free(azi);
}
    
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
    
    #include <bech32.h>
#include <test/test_bitcoin.h>
    
    cog.outl()
makeCommaSepLists('#define TINYFORMAT_PASSARGS_%(j)d %(list)s', 'v%(i)d')
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
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
    
    #if defined(X86_BUILD)
#if defined(__GNUC__)
#include <cpuid.h>
#elif defined(_WIN32)
#include <intrin.h>
#endif
#endif
    
    
    {}  // namespace tesseract.

    
    namespace grpc {
    }
    
    Alarm::Alarm() : alarm_(new internal::AlarmImpl()) {
  g_gli_initializer.summon();
}
    
    AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    void ChannelArguments::SetString(const grpc::string& key,
                                 const grpc::string& value) {
  grpc_arg arg;
  arg.type = GRPC_ARG_STRING;
  strings_.push_back(key);
  arg.key = const_cast<char*>(strings_.back().c_str());
  strings_.push_back(value);
  arg.value.string = const_cast<char*>(strings_.back().c_str());
    }
    
    size_t ServerStatsSerialize(uint64_t server_elapsed_time, char* buf,
                            size_t buf_size) {
  return RpcServerStatsEncoding::Encode(server_elapsed_time, buf, buf_size);
}
    
    grpc_error* CensusServerCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  start_time_ = absl::Now();
  gc_ =
      grpc_call_from_top_element(grpc_call_stack_element(args->call_stack, 0));
  GRPC_CLOSURE_INIT(&on_done_recv_initial_metadata_,
                    OnDoneRecvInitialMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  auth_context_ = grpc_call_auth_context(gc_);
  return GRPC_ERROR_NONE;
}
    
    using folly::dynamic;
using folly::TypeError;
    
    #include <folly/FBVector.h>
#include <folly/Traits.h>
#include <folly/container/Foreach.h>
#include <folly/portability/GFlags.h>
#include <folly/small_vector.h>
#include <folly/test/FBVectorTestUtil.h>
    
    BENCHMARK_PARAM(BENCHFUN(insertFront), 16)
BENCHMARK_PARAM(BENCHFUN(insertFront), 128)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024)
BENCHMARK_PARAM(BENCHFUN(insertFront), 10240)
BENCHMARK_PARAM(BENCHFUN(insertFront), 102400)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024000)
    
    #include <folly/FBString.h>
#include <folly/Random.h>
#include <folly/Traits.h>
#include <folly/container/Foreach.h>
#include <folly/portability/GTest.h>
#include <folly/test/FBVectorTestUtil.h>
    
    TEST(File, Simple) {
  // Open a file, ensure it's indeed open for reading
  char buf = 'x';
  {
    File f('/etc/hosts');
    EXPECT_NE(-1, f.fd());
    EXPECT_EQ(1, ::read(f.fd(), &buf, 1));
    f.close();
    EXPECT_EQ(-1, f.fd());
  }
}
    
      EXPECT_EQ(u8[0], u32[0]);
  EXPECT_EQ(u8[1], u32[1]);
  EXPECT_EQ(u8[0], u64[0]);
  EXPECT_EQ(u8[1], u64[1]);
  EXPECT_EQ(u8[0], usp[0]);
  EXPECT_EQ(u8[1], usp[1]);
  EXPECT_EQ(u8[0], uconv[0]);
  EXPECT_EQ(u8[1], uconv[1]);
    
    TEST(FormatOther, fbvector) {
  testFormatSeq<fbvector<int>>();
}
    
      // Test booleans
  EXPECT_EQ('true', sformat('{}', true));
  EXPECT_EQ('1', sformat('{:d}', true));
  EXPECT_EQ('false', sformat('{}', false));
  EXPECT_EQ('0', sformat('{:d}', false));
    
      FunctionRef<int(int)> const cfref = lambda;
  EXPECT_EQ(1023, cfref(5));
  EXPECT_EQ(1029, cfref(6));
  EXPECT_EQ(1036, cfref(7));
    
    template <template <typename> class Atom>
void run_wake_blocked_test() {
  for (auto delay = std::chrono::milliseconds(1);; delay *= 2) {
    bool success = false;
    Futex<Atom> f(0);
    auto thr = DSched::thread(
        [&] { success = FutexResult::AWOKEN == f.futexWait(0); });
    /* sleep override */ std::this_thread::sleep_for(delay);
    f.store(1);
    f.futexWake(1);
    DSched::join(thr);
    LOG(INFO) << 'delay=' << delay.count() << '_ms, success=' << success;
    if (success) {
      break;
    }
  }
}