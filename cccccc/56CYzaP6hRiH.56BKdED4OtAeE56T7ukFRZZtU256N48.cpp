
        
        OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
    
    {} // namespace caffe2

    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3;
}
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10>
struct Templates10 {
  typedef TemplateSel<T1> Head;
  typedef Templates9<T2, T3, T4, T5, T6, T7, T8, T9, T10> Tail;
};
    
    
    {# endif  // GTEST_HAS_RTTI
}
    
    // This should fail when the --check_for_leaks command line flag is
// specified.
TEST(ListenersTest, LeaksWater) {
  Water* water = new Water;
  EXPECT_TRUE(water != NULL);
}
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    // data file
DEFINE_string(sensor_conf_file, '', 'Sensor conf file');
    
    
    {  int ret = x;
  return ret;
}
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
        pq = swHeap_new(SIZE, SW_MAX_HEAP);
    ASSERT_NE(pq, nullptr);
    
    TEST(rbtree, insert)
{
    swRbtree *tree = swRbtree_new();
    int i;
    std::set<uint32_t> lists;
    }
    
    
    {    ~lru_cache_test_class()
    {
        ++dtor_num;
    }
};
    
        http2_session(int _fd)
    {
        fd = _fd;
        send_window = SW_HTTP2_DEFAULT_WINDOW_SIZE;
        recv_window = SW_HTTP2_DEFAULT_WINDOW_SIZE;
        max_concurrent_streams = SW_HTTP2_MAX_MAX_CONCURRENT_STREAMS;
        max_frame_size = SW_HTTP2_MAX_MAX_FRAME_SIZE;
        deflater = nullptr;
        inflater = nullptr;
    }
    
    TEST(coroutine_base, get_current)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        auto co = Coroutine::get_current();
        *(long *) arg = co->get_cid();
    }, &_cid);
    }