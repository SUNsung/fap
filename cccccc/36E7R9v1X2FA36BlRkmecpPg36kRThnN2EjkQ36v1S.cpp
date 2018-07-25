
        
        
    {
    {}  // namespace testing
}  // namespace grpc
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    namespace {
    }
    
    namespace grpc {
namespace testing {
    }
    }
    
    #endif  // TEST_QPS_TIMER_H

    
    struct gpr_subprocess;
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    #include <cstdint>
#include <xgboost/c_api.h>
#include <xgboost/base.h>
#include <xgboost/logging.h>
#include './xgboost4j.h'
#include <cstring>
#include <vector>
#include <string>
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('ndcg@2-');
  ASSERT_STREQ(metric->Name(), 'ndcg@2-');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.3868f, 0.001f);
}
    
    DEFINE_FIND_STATIC_METHOD(KXlog_setConsoleLogOpen, KXlog, 'setConsoleLogOpen', '(Z)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_setConsoleLogOpen
  (JNIEnv *env, jclass, jboolean _is_open) {
	appender_set_console_log((bool)_is_open);
}
    
    namespace mars {
namespace baseevent {
    }
    }
    
    #include <vector>
    
    #ifndef SERVICEBASE_H_
#define SERVICEBASE_H_
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
      const std::shared_ptr<Request>& getProxyRequest() const
  {
    return proxyRequest_;
  }
    
      virtual bool good() const CXX11_OVERRIDE { return true; }
    
    #include 'common.h'