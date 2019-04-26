
        
        static internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    #include 'absl/strings/str_cat.h'
#include 'absl/strings/string_view.h'
#include 'opencensus/stats/stats.h'
#include 'src/core/lib/surface/call.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
#include 'src/cpp/ext/filters/census/measures.h'
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusServerCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusServerCallData : public CallData {
 public:
  // Maximum size of server stats that are sent on the wire.
  static constexpr uint32_t kMaxServerStatsLen = 16;
    }