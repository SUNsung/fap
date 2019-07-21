
        
        static void create_sockets(SOCKET sv[2]) {
  SOCKET svr_sock = INVALID_SOCKET;
  SOCKET lst_sock = INVALID_SOCKET;
  SOCKET cli_sock = INVALID_SOCKET;
  SOCKADDR_IN addr;
  int addr_len = sizeof(addr);
    }
    
    static void iomgr_platform_shutdown_background_closure(void) {}
    
      LOG_TEST_NAME('test_ltoa');
    
    
    {}  // namespace grpc
    
    #include <grpcpp/security/credentials.h>
    
      void CompareService(const grpc::string& service) {
    const protobuf::ServiceDescriptor* service_desc =
        desc_pool_->FindServiceByName(service);
    const protobuf::ServiceDescriptor* ref_service_desc =
        ref_desc_pool_->FindServiceByName(service);
    EXPECT_TRUE(service_desc != nullptr);
    EXPECT_TRUE(ref_service_desc != nullptr);
    EXPECT_EQ(service_desc->DebugString(), ref_service_desc->DebugString());
    }
    
    #include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/impl/server_builder_option.h>
#include <grpcpp/impl/server_builder_plugin.h>
#include <grpcpp/impl/server_initializer.h>
#include <grpcpp/security/credentials.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
    
    namespace swoole
{
void event_init(void)
{
//        SwooleG.main_reactor->setHandle(SwooleG.main_reactor, SW_FD_USER | SW_EVENT_READ, php_swoole_event_onRead);
//        SwooleG.main_reactor->setHandle(SwooleG.main_reactor, SW_FD_USER | SW_EVENT_WRITE, php_swoole_event_onWrite);
//        SwooleG.main_reactor->setHandle(SwooleG.main_reactor, SW_FD_USER | SW_EVENT_ERROR, php_swoole_event_onError);
}
    }
    
            std::string addr1 = System::gethostbyname('www.baidu.com', AF_INET);
        ASSERT_NE(addr1, '');
    
            make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
            int i = 1;
            bool ret;
    }
    
        inline void* pop_data()
    {
        if (data_queue.size() == 0)
        {
            return nullptr;
        }
        void *data = data_queue.front();
        data_queue.pop();
        return data;
    }
    
        void copy(void *_data, size_t _length)
    {
        alloc(_length);
        memcpy(buffer, _data, _length);
    }