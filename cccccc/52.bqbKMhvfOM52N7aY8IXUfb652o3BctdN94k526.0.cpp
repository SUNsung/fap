
        
          // Set up security params
  SecurityParams security;
  security.set_use_test_ca(true);
  security.set_server_host_override('foo.test.google.fr');
  client_config.mutable_security_params()->CopyFrom(security);
  server_config.mutable_security_params()->CopyFrom(security);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    /*
 * This implements a Metrics server defined in
 * src/proto/grpc/testing/metrics.proto. Any
 * test service can use this to export Metrics (TODO (sreek): Only Gauges for
 * now).
 *
 * Example:
 *    MetricsServiceImpl metricsImpl;
 *    ..
 *    // Create QpsGauge(s). Note: QpsGauges can be created even after calling
 *    // 'StartServer'.
 *    QpsGauge qps_gauge1 = metricsImpl.CreateQpsGauge('foo', is_present);
 *    // qps_gauge1 can now be used anywhere in the program by first making a
 *    // one-time call qps_gauge1.Reset() and then calling qps_gauge1.Incr()
 *    // every time to increment a query counter
 *
 *    ...
 *    // Create the metrics server
 *    std::unique_ptr<grpc::Server> server = metricsImpl.StartServer(port);
 *    server->Wait(); // Note: This is blocking.
 */
namespace grpc {
namespace testing {
    }
    }
    
    
    {  return Status(0, 'OK');
}
    
    #include <boost/lexical_cast.hpp>
    
    class TimeTests : public testing::Test {};
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    
    
    
    int lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPostSolve* cobj = nullptr;
    bool ok  = true;
    }
    
    
    {	b2Body* m_body;
};
    
    			for (int32 i = 0; i < 10; ++i)
			{
				float32 y2 = hs[i];
				shape.Set(b2Vec2(x, y1), b2Vec2(x + dx, y2));
				ground->CreateFixture(&fd);
				y1 = y2;
				x += dx;
			}
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
    Config::~Config(void)
{
    YGConfigFree(m_config);
}
    
    void Node::setMarginPercent(int edge, double margin)
{
    YGNodeStyleSetMarginPercent(m_node, static_cast<YGEdge>(edge), margin);
}