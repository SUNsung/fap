
        
          EXPECT_EQ(net.op_size(), 3 + 1 + 2); // Inserted 1 Declare and 2 Export
    
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
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    typedef enum {
  DO_NOT_USE_CALLBACK = 0,
  MAYBE_USE_CALLBACK_EARLY_CANCEL,
  MAYBE_USE_CALLBACK_LATE_CANCEL,
  MAYBE_USE_CALLBACK_NO_CANCEL,
} ServerUseCancelCallback;
    
    ChannelArguments::ChannelArguments(const ChannelArguments& other)
    : strings_(other.strings_) {
  args_.reserve(other.args_.size());
  auto list_it_dst = strings_.begin();
  auto list_it_src = other.strings_.begin();
  for (auto a = other.args_.begin(); a != other.args_.end(); ++a) {
    grpc_arg ap;
    ap.type = a->type;
    GPR_ASSERT(list_it_src->c_str() == a->key);
    ap.key = const_cast<char*>(list_it_dst->c_str());
    ++list_it_src;
    ++list_it_dst;
    switch (a->type) {
      case GRPC_ARG_INTEGER:
        ap.value.integer = a->value.integer;
        break;
      case GRPC_ARG_STRING:
        GPR_ASSERT(list_it_src->c_str() == a->value.string);
        ap.value.string = const_cast<char*>(list_it_dst->c_str());
        ++list_it_src;
        ++list_it_dst;
        break;
      case GRPC_ARG_POINTER:
        ap.value.pointer = a->value.pointer;
        ap.value.pointer.p = a->value.pointer.vtable->copy(ap.value.pointer.p);
        break;
    }
    args_.push_back(ap);
  }
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    
    {class SecureChannelCredentials;
class ResourceQuota;
}  // namespace grpc_impl
    
    
    {}  // namespace
    
        request.set_message(msg + '1');
    EXPECT_TRUE(stream->Write(request));
    EXPECT_TRUE(stream->Read(&response));
    EXPECT_EQ(response.message(), request.message());
    
    block_id_t real_superblock_t::get_root_block_id() {
    buf_read_t read(&sb_buf_);
    const reql_btree_superblock_t *sb_data = get_reql_btree_superblock(&read);
    return sb_data->root_block;
}
    
        block_id_t get_root_block_id();
    void set_root_block_id(block_id_t new_root_block);
    
    
    {    // return's true if we got all of the sindexes requested.
    return !sindexes_to_acquire || sindex_sbs_out->size() == sindexes_to_acquire->size();
}
    
    class sindex_not_ready_exc_t : public std::exception {
public:
    explicit sindex_not_ready_exc_t(std::string sindex_name,
                                    const secondary_index_t &sindex,
                                    const std::string &table_name);
    const char* what() const throw();
    ~sindex_not_ready_exc_t() throw();
protected:
    std::string info;
};
    
    // Converts a streamable value to an std::string.  A NULL pointer is
// converted to '(null)'.  When the input value is a ::string,
// ::std::string, ::wstring, or ::std::wstring object, each NUL
// character in it is replaced with '\\0'.
template <typename T>
std::string StreamableToString(const T& streamable) {
  return (Message() << streamable).GetString();
}
    
    // Bool() allows generating tests with parameters in a set of (false, true).
//
// Synopsis:
// Bool()
//   - returns a generator producing sequences with elements {false, true}.
//
// It is useful when testing code that depends on Boolean flags. Combinations
// of multiple flags can be tested when several Bool()'s are combined using
// Combine() function.
//
// In the following example all tests in the test case FlagDependentTest
// will be instantiated twice with parameters false and true.
//
// class FlagDependentTest : public testing::TestWithParam<bool> {
//   virtual void SetUp() {
//     external_flag = GetParam();
//   }
// }
// INSTANTIATE_TEST_CASE_P(BoolSequence, FlagDependentTest, Bool());
//
inline internal::ParamGenerator<bool> Bool() {
  return Values(false, true);
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    #define GTEST_TEST_NO_FATAL_FAILURE_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    ::testing::internal::HasNewFatalFailureHelper gtest_fatal_failure_checker; \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    if (gtest_fatal_failure_checker.has_new_fatal_failure()) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__): \
      fail('Expected: ' #statement ' doesn't generate new fatal ' \
           'failures in the current thread.\n' \
           '  Actual: it does.')
    
    template <class Generator1, class Generator2, class Generator3,
    class Generator4, class Generator5, class Generator6>
class CartesianProductHolder6 {
 public:
CartesianProductHolder6(const Generator1& g1, const Generator2& g2,
    const Generator3& g3, const Generator4& g4, const Generator5& g5,
    const Generator6& g6)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6) {}
  template <typename T1, typename T2, typename T3, typename T4, typename T5,
      typename T6>
  operator ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >() const {
    return ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >(
        new CartesianProductGenerator6<T1, T2, T3, T4, T5, T6>(
        static_cast<ParamGenerator<T1> >(g1_),
        static_cast<ParamGenerator<T2> >(g2_),
        static_cast<ParamGenerator<T3> >(g3_),
        static_cast<ParamGenerator<T4> >(g4_),
        static_cast<ParamGenerator<T5> >(g5_),
        static_cast<ParamGenerator<T6> >(g6_)));
  }
    }
    
    template<typename xpu>
class QuantizeV2Operator {
 public:
  explicit QuantizeV2Operator(const nnvm::NodeAttrs &attrs) : attrs_(attrs) {}
    }
    
    namespace mxnet {
namespace op {
    }
    }
    
     private:
  inline int div_pow2_round_up(size_t s, int divisor_log2) {
    // (1025, 10) -> 2
    // (2048, 10) -> 2
    // (2049, 10) -> 3
    size_t result = s >> divisor_log2;
    return static_cast<int>(result + (s > (result << divisor_log2) ? 1 : 0));
  }
  inline int get_bucket(size_t s) {
    int log_size = common::ilog2ul(s - 1);
    if (log_size > static_cast<int>(cut_off_))
      return div_pow2_round_up(s, cut_off_) - 1 + cut_off_;
    else
      return std::max(log_size, static_cast<int>(page_size_));
  }
  inline size_t get_size(int bucket) {
    if (bucket <= static_cast<int>(cut_off_))
      return 1ul << bucket;
    else
      return (bucket - cut_off_ + 1) * (1ul << cut_off_);
  }
    
      // The following functions differ in signature from the
  // MXNET_LAPACK-signature and have to be wrapped.
  #define MXNET_LAPACK_CWRAP_GELQF(prefix, dtype) \
  inline int MXNET_LAPACK_##prefix##gelqf(int matrix_layout, int m, int n, \
                                          dtype *a, int lda, dtype *tau, \
                                          dtype *work, int lwork) { \
    if (lwork != -1) { \
      return LAPACKE_##prefix##gelqf(matrix_layout, m, n, a, lda, tau); \
    } \
    *work = 0; \
    return 0; \
  }
  MXNET_LAPACK_CWRAP_GELQF(s, float)
  MXNET_LAPACK_CWRAP_GELQF(d, double)
    
    #include <mongo/bson/timestamp.h>
#include <mongo/db/catalog/collection.h>
#include <mongo/db/namespace_string.h>
#include <mongo/db/operation_context.h>
#include <mongo/db/repl/oplog.h>
#include <mongo/db/service_context.h>
#include <mongo/stdx/mutex.h>
    
    
    {}  // namespace mongo

    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    
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
    
    Context::Context(size_t stack_size, coroutine_func_t fn, void* private_data) :
        fn_(fn), stack_size_(stack_size), private_data_(private_data)
{
    if (-1 == getcontext(&ctx_))
    {
        swoole_throw_error(SW_ERROR_CO_GETCONTEXT_FAILED);
        return;
    }
    }
    
    
    {    coro_test_wait(&complete_num, args.size());
}
    
        ~Channel()
    {
        SW_ASSERT(producer_queue.empty() && consumer_queue.empty());
    }
    
    class Exception
{
public:
    int code;
    const char *msg;
    }
    
    TEST(os_wait, wait_after_child_exit)
{
    coro_test([](void *arg)
    {
        swoole_coroutine_signal_init();
    }
    }