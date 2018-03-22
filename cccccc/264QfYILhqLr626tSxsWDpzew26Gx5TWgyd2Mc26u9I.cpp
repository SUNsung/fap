
        
        IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    namespace nwapi {
    }
    
    DispatcherHost::DispatcherHost(content::RenderViewHost* host)
  : content::WebContentsObserver(content::WebContents::FromRenderViewHost(host)),
    render_view_host_(host),
    weak_ptr_factory_(this),
    run_loop_(NULL) {
  g_dispatcher_host_map[render_view_host_] = this;
}
    
      // RenderViewHostObserver implementation.
  // WebContentsObserver implementation:
  bool OnMessageReceived(
                         content::RenderViewHost* render_view_host,
                         const IPC::Message& message) override;
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    #include 'content/nw/src/api/menu/menu.h'
    
     protected:
  ~NwAppClearCacheFunction() override;
    
    #include <grpc/support/log.h>
    
      grpc::testing::RunQPS();
    
    #include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include 'route_guide.grpc.pb.h'
    
    #if TARGET_OS_IPHONE
GRPC_XMACRO_ITEM(isWWAN, IsWWAN)
#endif
GRPC_XMACRO_ITEM(reachable, Reachable)
GRPC_XMACRO_ITEM(transientConnection, TransientConnection)
GRPC_XMACRO_ITEM(connectionRequired, ConnectionRequired)
GRPC_XMACRO_ITEM(connectionOnTraffic, ConnectionOnTraffic)
GRPC_XMACRO_ITEM(interventionRequired, InterventionRequired)
GRPC_XMACRO_ITEM(connectionOnDemand, ConnectionOnDemand)
GRPC_XMACRO_ITEM(isLocalAddress, IsLocalAddress)
GRPC_XMACRO_ITEM(isDirect, IsDirect)

    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {  const Result start_;
};
    
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
    
    
    {  gpr_subprocess* const subprocess_;
};
    
      std::shared_ptr<ChannelCredentials> GetChannelCredentials(
      const grpc::string& type, ChannelArguments* args) override {
    if (type == grpc::testing::kInsecureCredentialsType) {
      return InsecureChannelCredentials();
    } else if (type == grpc::testing::kTlsCredentialsType) {
      SslCredentialsOptions ssl_opts = {test_root_cert, '', ''};
      args->SetSslTargetNameOverride('foo.test.google.fr');
      return SslCredentials(ssl_opts);
    } else {
      std::unique_lock<std::mutex> lock(mu_);
      auto it(std::find(added_secure_type_names_.begin(),
                        added_secure_type_names_.end(), type));
      if (it == added_secure_type_names_.end()) {
        gpr_log(GPR_ERROR, 'Unsupported credentials type %s.', type.c_str());
        return nullptr;
      }
      return added_secure_type_providers_[it - added_secure_type_names_.begin()]
          ->GetChannelCredentials(args);
    }
  }