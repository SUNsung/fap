
        
        /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
    /* Starts the stream by sending request to |url| using |method| and |headers|.
 * If |end_of_stream| is true, then no data is expected to be written. The
 * |method| is HTTP verb, with PUT having a special meaning to mark idempotent
 * request, which could use QUIC 0-RTT.
 */
GRPC_SUPPORT_EXPORT
int bidirectional_stream_start(bidirectional_stream* stream,
                               const char* url,
                               int priority,
                               const char* method,
                               const bidirectional_stream_header_array* headers,
                               bool end_of_stream);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    std::string GetDbFileContent(int argc, char** argv);
    
    namespace grpc_python_generator {
    }
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    namespace grpc {
namespace testing {
    }
    }
    
    #include <grpc/support/log.h>
#include <grpc/support/time.h>
#ifdef __linux__
#include <sys/resource.h>
#include <sys/time.h>
    
     private:
  static Result Sample();
    
    
    {  private:
    std::vector<std::string> vecdump_;
};
    
    
/*
 * CoreServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
    
    {  private:
    void* m_this;
    std::map<const std::string, boost::any> m_variablemap;
};
    
    #ifndef SCOPEDJSTRING_H_
#define SCOPEDJSTRING_H_
    
    
    {  s_rule_factory.Register(TrafficRuleConfig::DESTINATION,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new Destination(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::FRONT_VEHICLE,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new FrontVehicle(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::KEEP_CLEAR,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new KeepClear(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::PULL_OVER,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new PullOver(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::REFERENCE_LINE_END,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new ReferenceLineEnd(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::REROUTING,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new Rerouting(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::SIGNAL_LIGHT,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new SignalLight(config);
                          });
  s_rule_factory.Register(TrafficRuleConfig::STOP_SIGN,
                          [](const TrafficRuleConfig &config) -> TrafficRule * {
                            return new StopSign(config);
                          });
}
    
    #include 'modules/common/math/box2d.h'
#include 'modules/planning/common/obstacle.h'
#include 'modules/planning/common/reference_line_info.h'
#include 'modules/planning/common/trajectory/discretized_trajectory.h'
#include 'modules/planning/lattice/behavior/path_time_graph.h'
    
    Box2d Polygon2d::BoundingBoxWithHeading(const double heading) const {
  CHECK_GE(points_.size(), 3);
  const Vec2d direction_vec = Vec2d::CreateUnitVec2d(heading);
  Vec2d px1;
  Vec2d px2;
  Vec2d py1;
  Vec2d py2;
  ExtremePoints(heading, &px1, &px2);
  ExtremePoints(heading - M_PI_2, &py1, &py2);
  const double x1 = px1.InnerProd(direction_vec);
  const double x2 = px2.InnerProd(direction_vec);
  const double y1 = py1.CrossProd(direction_vec);
  const double y2 = py2.CrossProd(direction_vec);
  return Box2d(
      (x1 + x2) / 2.0 * direction_vec +
          (y1 + y2) / 2.0 * Vec2d(direction_vec.y(), -direction_vec.x()),
      heading, x2 - x1, y2 - y1);
}
    
    TEST_F(DecisionTest, mix_yellow_red_flash) {
  std::vector<double> ts_list = {
      11.784286, 11.822046, 11.860939, 11.899873, 11.938863, 11.976958,
      12.019318, 12.060082, 12.085589, 12.142431, 12.206964, 12.244730,
      12.283630, 12.343854, 12.406436, 12.447242, 12.523147, 12.590790,
      12.637774, 12.739506, 12.778026, 12.816889, 12.854136, 12.902307,
      12.941082, 12.978899, 13.052896, 13.123380, 13.162235, 13.200546,
      13.238770, 13.276381, 13.336628, 13.397770, 13.447470, 13.506018,
      13.556838, 13.595315, 13.638051, 13.758083, 13.798111, 13.833773,
      13.872687, 13.910888, 13.949736, 13.992507, 14.055734, 14.096796,
      14.154976, 14.221338, 14.259621, 14.297711, 14.361917, 14.438549,
      14.501423, 14.565565, 14.603986, 14.670650, 14.738613, 14.777124,
      14.836051, 14.928467, 14.955982, 15.007555, 15.042017, 15.100018,
      15.141860, 15.187705, 15.236564, 15.281425, 15.320009, 15.359252,
      15.398300, 15.424032, 15.461977, 15.500767, 15.538779, 15.576964,
      15.615162, 15.681964, 15.720530, 15.750545, 15.791621, 15.854720,
      15.937057, 16.015527, 16.053107, 16.092126, 16.130880, 16.168330};
  std::vector<int> color_list = {
      3, 3, 3, 3, 3, 3, 4, 1, 4, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2,
      2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 1, 4, 4, 2, 4, 2,
      4, 4, 4, 1, 1, 1, 1, 1, 1, 4, 2, 4, 1, 4, 4, 1, 1, 4, 1, 1, 1};
    }