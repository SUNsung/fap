
        
        /// Define a map of decoration points to their expected configuration key.
extern const std::map<DecorationPoint, std::string> kDecorationPointKeys;
    
    /**
 * @brief Subscription details for KernelEventPublisher events.
 */
struct KernelSubscriptionContext : public SubscriptionContext {
  /// The kernel event subscription type.
  osquery_event_t event_type;
    }
    
    TEST_F(SyslogTests, test_populate_event_context) {
  std::string line =
      R'|('2016-03-22T21:17:01.701882+00:00','vagrant-ubuntu-trusty-64','6','cron','CRON[16538]:',' (root) CMD (   cd / && run-parts --report /etc/cron.hourly)')|';
  SyslogEventPublisher pub;
  auto ec = pub.createEventContext();
  Status status = pub.populateEventContext(line, ec);
    }
    
    // try to load weight information from file, if exists
inline bool MetaTryLoadFloatInfo(const std::string& fname,
                                 std::vector<bst_float>* data) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  data->clear();
  bst_float value;
  while (is >> value) {
    data->push_back(value);
  }
  return true;
}
    
      uint64_t uint64_t2[2] = {1U, 2U};
  EXPECT_EQ(info.group_ptr_.size(), 0);
  info.SetInfo('group', uint64_t2, xgboost::kUInt64, 2);
  ASSERT_EQ(info.group_ptr_.size(), 3);
  EXPECT_EQ(info.group_ptr_[2], 3);
    
      EXPECT_ANY_THROW(xgboost::Metric::Create('error@abc'));
  delete metric;
  metric = xgboost::Metric::Create('error@0.5f');
  EXPECT_STREQ(metric->Name(), 'error');
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    TEST(Metric, AUCPR) {
  xgboost::Metric *metric = xgboost::Metric::Create('aucpr');
  ASSERT_STREQ(metric->Name(), 'aucpr');
  EXPECT_NEAR(GetMetricEval(metric, {0, 0, 1, 1}, {0, 0, 1, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric, {0.1f, 0.9f, 0.1f, 0.9f}, {0, 0, 1, 1}),
              0.5f, 0.001f);
  EXPECT_NEAR(
      GetMetricEval(metric,
                    {0.4f, 0.2f, 0.9f, 0.1f, 0.2f, 0.4f, 0.1f, 0.1f, 0.2f, 0.1f},
                    {0, 0, 0, 0, 0, 1, 0, 0, 1, 1}),
      0.2908445f, 0.001f);
  EXPECT_NEAR(GetMetricEval(
                  metric, {0.87f, 0.31f, 0.40f, 0.42f, 0.25f, 0.66f, 0.95f,
                           0.09f, 0.10f, 0.97f, 0.76f, 0.69f, 0.15f, 0.20f,
                           0.30f, 0.14f, 0.07f, 0.58f, 0.61f, 0.08f},
                  {0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1}),
              0.2769199f, 0.001f);
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 0}, {0, 0}));
}
    
    template <typename C>
struct compare_not_equal_to : detail::cmp_pred<C, ordering::eq, 1> {
  using detail::cmp_pred<C, ordering::eq, 1>::cmp_pred;
};
    
    TEST_F(OrderingTest, compare_not_equal_to) {
  compare_not_equal_to<OddCompare<int>> op;
  EXPECT_TRUE(op(3, 4));
  EXPECT_FALSE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
    template <typename T>
bool SingletonHolder<T>::hasLiveInstance() {
  return !instance_weak_.expired();
}
    
        Node* next() {
      return next_;
    }
    
    #include <exception>
#include <stdexcept>
    
    /**
 * This function tries to reallocate a buffer of which only the first
 * currentSize bytes are used. The problem with using realloc is that
 * if currentSize is relatively small _and_ if realloc decides it
 * needs to move the memory chunk to a new buffer, then realloc ends
 * up copying data that is not used. It's generally not a win to try
 * to hook in to realloc() behavior to avoid copies - at least in
 * jemalloc, realloc() almost always ends up doing a copy, because
 * there is little fragmentation / slack space to take advantage of.
 */
FOLLY_MALLOC_CHECKED_MALLOC FOLLY_MALLOC_NOINLINE inline void* smartRealloc(
    void* p,
    const size_t currentSize,
    const size_t currentCapacity,
    const size_t newCapacity) {
  assert(p);
  assert(currentSize <= currentCapacity &&
         currentCapacity < newCapacity);
    }
    
    #include <glog/logging.h>
    
    #include <atomic>
#include <memory>
#include <mutex>
#include <queue>
    
      // Call the helpers function in XlogFile1.cpp and XlogFile2.cpp and makes
  // sure their categories are reported correctly.
  testXlogFile1Dbg1('foobar 1234');
  ASSERT_EQ(1, messages.size());
  EXPECT_EQ('file1: foobar 1234', messages[0].first.getMessage());
  EXPECT_EQ(
      'folly.logging.test.XlogFile1.cpp',
      messages[0].first.getCategory()->getName());
  messages.clear();
    
    #pragma once