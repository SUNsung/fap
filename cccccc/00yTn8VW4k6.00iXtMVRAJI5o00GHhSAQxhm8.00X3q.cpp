
        
          /* Invoked when initial response headers are received.
   * Consumer must call bidirectional_stream_read() to start reading.
   * Consumer may call bidirectional_stream_write() to start writing or
   * close the stream. Contents of |headers| is valid for duration of the call.
   */
  void (*on_response_headers_received)(
      bidirectional_stream* stream,
      const bidirectional_stream_header_array* headers,
      const char* negotiated_protocol);
    
    #include <algorithm>
    
    
    {  gpr_subprocess* const subprocess_;
};
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    TEST(Metric, AUC) {
  xgboost::Metric * metric = xgboost::Metric::Create('auc');
  ASSERT_STREQ(metric->Name(), 'auc');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 0}, {0, 0}));
}
    
    class ConsoleLogger : public BaseLogger {
 public:
  ~ConsoleLogger();
};
    
    // This is a helpful data structure to define parameters
// You do not have to use it.
// see http://dmlc-core.readthedocs.org/en/latest/parameter.html
// for introduction of this module.
struct MyLogisticParam : public dmlc::Parameter<MyLogisticParam> {
  float scale_neg_weight;
  // declare parameters
  DMLC_DECLARE_PARAMETER(MyLogisticParam) {
    DMLC_DECLARE_FIELD(scale_neg_weight).set_default(1.0f).set_lower_bound(0.0f)
        .describe('Scale the weight of negative examples by this factor');
  }
};
    
      EXPECT_CALL(transport, writeChain(_, BufMatches(buf.get()), _));
    
    #include <folly/io/IOBuf.h>
#include <folly/io/TypedIOBuf.h>
    
      TypeDescriptor type() const {
    return type_;
  }
  virtual bool hasLiveInstance() = 0;
  virtual void createInstance() = 0;
  virtual bool creationStarted() = 0;
  virtual void preDestroyInstance(ReadMostlyMainPtrDeleter<>&) = 0;
  virtual void destroyInstance() = 0;
    
    #include <atomic>
    
        // int -> int
    if (std::is_signed<Src>::value && std::is_signed<Dst>::value) {
      EXPECT_EQ(kDstMin, folly::constexpr_clamp_cast<Dst>(kSrcMin));
    }
    
      // Move from the registration phase to the 'you can actually instantiate
  // things now' phase.
  folly::SingletonVault::singleton()->registrationComplete();
    
      using UniquePtr = std::unique_ptr<SerialExecutor, Deleter>;
  [[deprecated('Replaced by create')]]
  static UniquePtr createUnique(
      std::shared_ptr<Executor> parent = getCPUExecutor());
    
    namespace aria2 {
    }
    
      std::shared_ptr<HttpConnection> httpConnection_;
    
    protected:
  virtual bool executeInternal() CXX11_OVERRIDE;
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    #include 'a2functional.h'
    
        void        (*GetStringRegion)(JNIEnv*, jstring, jsize, jsize, jchar*);
    void        (*GetStringUTFRegion)(JNIEnv*, jstring, jsize, jsize, char*);
    
      ~YogaTest_HadOverflowTests() {
    YGNodeFreeRecursive(root);
    YGConfigFree(config);
  }
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    Value Node::getMinHeight(void) const
{
    return Value::fromYGValue(YGNodeStyleGetMinHeight(m_node));
}
    
        Value getPadding(int edge) const;
    
    #include <nbind/nbind.h>
    
    #ifdef __ANDROID__
    
      void unref() {
    if (0 == --m_refcount) {
      delete this;
    }
  }
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT
    
    
    {
    {}}
