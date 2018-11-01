
        
        
    {    Lock& lock;
    Lock templock;
};
    
    /** Check bounds on a command line confirm target */
unsigned int ParseConfirmTarget(const UniValue& value);
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
        /* Generate a random key and message. */
    {
        secp256k1_scalar msg, key;
        random_scalar_order_test(&msg);
        random_scalar_order_test(&key);
        secp256k1_scalar_get_b32(privkey, &key);
        secp256k1_scalar_get_b32(message, &msg);
    }
    
    // Verify that difficulty is 1.0 for an empty chain.
BOOST_AUTO_TEST_CASE(get_difficulty_for_null_tip)
{
    double difficulty = GetDifficulty(nullptr);
    RejectDifficultyMismatch(difficulty, 1.0);
}
    
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
    
    
    {} // namespace detail
    
    namespace
{
static bool ParsePrechecks(const std::string& str)
{
    if (str.empty()) // No empty string allowed
        return false;
    if (str.size() >= 1 && (json_isspace(str[0]) || json_isspace(str[str.size()-1]))) // No padding allowed
        return false;
    if (str.size() != strlen(str.c_str())) // No embedded NUL characters allowed
        return false;
    return true;
}
    }
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_AllocateId, int)
    
    #include <string>
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
     protected:
  ~NwClipboardGetListSyncFunction() override;
    
      bool NwScreenStopMonitorFunction::RunNWSync(base::ListValue* response, std::string* error) {
    NwDesktopCaptureMonitor::GetInstance()->Stop();
    return true;
  }
    
    
struct SepFilterCtx
{
    int16_t kernelx_data[3];
    int16_t kernely_data[3];
    CAROTENE_NS::BORDER_MODE border;
};
inline int TEGRA_SEPFILTERINIT(cvhalFilter2D **context, int src_type, int dst_type, int kernel_type,
                               uchar *kernelx_data, int kernelx_length,
                               uchar *kernely_data, int kernely_length,
                               int anchor_x, int anchor_y, double delta, int borderType)
{
    if(!context || !kernelx_data || !kernely_data || src_type != CV_8UC1 || dst_type != CV_16SC1 ||
       kernelx_length != 3 || kernely_length != 3 ||
       delta != 0 || anchor_x != 1 || anchor_y != 1)
        return CV_HAL_ERROR_NOT_IMPLEMENTED;
    }
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        typename internal::VecTraits<T>::vec128 v_min = internal::vminq(v_src0, v_src1);
        typename internal::VecTraits<T>::vec128 v_max = internal::vmaxq(v_src0, v_src1);
        v_dst = internal::vqsubq(v_max, v_min);
    }
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vhaddq_u8(v_src0, v_src1);
    }
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = internal::saturate_cast<T>((WT)src0[0] + (WT)src1[0]);
    }
};
    
        f32 alpha, beta, gamma;
    float32x4_t valpha, vbeta, vgamma;
    wAdd(f32 _alpha, f32 _beta, f32 _gamma):
        alpha(_alpha), beta(_beta), gamma(_gamma)
    {
        valpha = vdupq_n_f32(_alpha);
        vbeta = vdupq_n_f32(_beta);
        vgamma = vdupq_n_f32(_gamma + 0.5);
    }
    
    #ifdef CAROTENE_NEON
#include <arm_neon.h>
#include 'intrinsics.hpp'
#endif
    
    void lshift(const Size2D &size,
            const u8 * srcBase, ptrdiff_t srcStride,
            s16 * dstBase, ptrdiff_t dstStride,
            u32 shift)
{
    internal::assertSupportedConfiguration();
    }
    
                {
                // combine 3 'shifted' vectors
                t0 = vext_u8(tprev[0], tcurr[0], 7);
                t1 = tcurr[0];
                t2 = vext_u8(tcurr[0], tnext[0], 1);
    }
    
                for( ; i <= lim; i += 4 )
            {
                internal::prefetch(src0 + i);
                internal::prefetch(src1 + i);
                v_sum = vmlaq_f32(v_sum, vld1q_f32(src0 + i), vld1q_f32(src1 + i));
            }
    
    namespace CAROTENE_NS { namespace internal {
    }
    }
    
      inline Dtype data_at(const int n, const int c, const int h,
      const int w) const {
    return cpu_data()[offset(n, c, h, w)];
  }
    
    #endif  // CAFFE_BATCHREINDEX_LAYER_HPP_

    
    
    {}  // namespace caffe
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    // The following list of PrintTo() overloads tells
// UniversalPrinter<T>::Print() how to print standard types (built-in
// types, strings, plain arrays, and pointers).
    
    
    {}  // namespace testing
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
    template <>
class Get<4> {
 public:
  template <class Tuple>
  static GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(4, Tuple))
  Field(Tuple& t) { return t.f4_; }  // NOLINT
    }
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
    
    {REGISTER_INTERNAL(PrometheusMetricsConfigParserPlugin,
                  'config_parser',
                  'prometheus_targets');
}

    
      QueryData r;
  if (views.IsObject()) {
    for (const auto& view : views.GetObject()) {
      std::string name = view.name.GetString();
      if (!view.value.IsString()) {
        continue;
      }
      std::string query = view.value.GetString();
      if (query.empty()) {
        continue;
      }
    }
    }
    
    #include <vector>
    
        // Call the diffing utility directly.
    DiffResults expected = diff(previous_qd, result.second);
    EXPECT_EQ(dr, expected);
    
      // If a constraint list does not exist, then all checks will match.
  // If there is no predicate clause then all results will match.
  EXPECT_TRUE(cm['not_path'].matches('some'));
  EXPECT_TRUE(cm['not_path'].notExistsOrMatches('some'));
  EXPECT_FALSE(cm['not_path'].exists());
  EXPECT_FALSE(cm['not_path'].existsAndMatches('some'));
    
      /// Check if the worker and watcher's fates are bound.
  bool fatesBound() const {
    return !restart_worker_;
  }
    
    
    {void alarm(int /* noop */) {
  /* This function is a noop. */
}
} // namespace osquery

    
    /// Internal audit subscriber (socket events) testable methods.
extern void parseSockAddr(const std::string& saddr, Row& r, bool& unix_socket);
    
      auto subscription = Subscription::create('subscriber');
  auto status =
      EventFactory::addSubscription(basic_publisher_type, subscription);
  status = EventFactory::addSubscription(basic_publisher_type, subscription);
  EXPECT_TRUE(status.ok());
    
    DHTReplaceNodeTask::~DHTReplaceNodeTask() = default;
    
    #include 'DHTAbstractTask.h'
#include 'a2time.h'
    
    DHTRoutingTableSerializer::~DHTRoutingTableSerializer() = default;
    
    #include 'common.h'
    
    #endif // D_DHT_UNKNOWN_MESSAGE_H

    
    const std::string& DNSCache::find(const std::string& hostname,
                                  uint16_t port) const
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i == entries_.end()) {
    return A2STR::NIL;
  }
  else {
    return (*i)->getGoodAddr();
  }
}
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    
    {}  // namespace guetzli
    
      tmp0 = in[5 * stride];
  tmp1 = kIDCTMatrix[ 5] * tmp0;
  tmp2 = kIDCTMatrix[13] * tmp0;
  tmp3 = kIDCTMatrix[21] * tmp0;
  tmp4 = kIDCTMatrix[29] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;