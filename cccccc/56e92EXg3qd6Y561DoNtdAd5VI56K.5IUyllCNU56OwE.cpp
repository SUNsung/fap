
        
          std::multimap<grpc::string_ref, grpc::string_ref>* GetRecvTrailingMetadata()
      override {
    return recv_trailing_metadata_->map();
  }
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    class ClientChannelStressTest {
 public:
  void Run() {
    Start();
    // Keep updating resolution for the test duration.
    gpr_log(GPR_INFO, 'Start updating resolution.');
    const auto wait_duration =
        std::chrono::milliseconds(kResolutionUpdateIntervalMs);
    std::vector<AddressData> addresses;
    auto start_time = std::chrono::steady_clock::now();
    while (true) {
      if (std::chrono::duration_cast<std::chrono::seconds>(
              std::chrono::steady_clock::now() - start_time)
              .count() > kTestDurationSec) {
        break;
      }
      // Generate a random subset of balancers.
      addresses.clear();
      for (const auto& balancer_server : balancer_servers_) {
        // Select each address with probability of 0.8.
        if (std::rand() % 10 < 8) {
          addresses.emplace_back(AddressData{balancer_server.port_, true, ''});
        }
      }
      std::shuffle(addresses.begin(), addresses.end(),
                   std::mt19937(std::random_device()()));
      SetNextResolution(addresses);
      std::this_thread::sleep_for(wait_duration);
    }
    gpr_log(GPR_INFO, 'Finish updating resolution.');
    Shutdown();
  }
    }
    
    /* Schedule a shutdown of the socket operations. Will call the pending
   operations to abort them. We need to do that this way because of the
   various callsites of that function, which happens to be in various
   mutex hold states, and that'd be unsafe to call them directly. */
void grpc_winsocket_shutdown(grpc_winsocket* winsocket) {
  /* Grab the function pointer for DisconnectEx for that specific socket.
     It may change depending on the interface. */
  int status;
  GUID guid = WSAID_DISCONNECTEX;
  LPFN_DISCONNECTEX DisconnectEx;
  DWORD ioctl_num_bytes;
    }
    
    UniquePtr<char> GlobalConfigEnvString::Get() {
  UniquePtr<char> str = GetValue();
  if (str == nullptr) {
    return UniquePtr<char>(gpr_strdup(default_value_));
  }
  return str;
}
    
    #include <grpc/grpc_cronet.h>
#include <grpcpp/channel.h>
#include <grpcpp/support/channel_arguments.h>
#include 'src/cpp/client/create_channel_internal.h'
    
        auto stream = stub->ResponseStream(&context, request);
    EXPECT_TRUE(stream->Read(&response));
    EXPECT_EQ(response.message(), request.message() + '0_dup');
    EXPECT_TRUE(stream->Read(&response));
    EXPECT_EQ(response.message(), request.message() + '1_dup');
    EXPECT_TRUE(stream->Read(&response));
    EXPECT_EQ(response.message(), request.message() + '2_dup');
    EXPECT_FALSE(stream->Read(&response));
    
      service->RequestRequestStream(&srv_ctx_, &srv_stream, cq_.get(), cq_.get(),
                                tag(2));