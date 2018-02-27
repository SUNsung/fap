DEFINE_string(tag, '', 'Optional tag for the test');
    
      // grpc server config.
  std::ostringstream s;
  int p = grpc_pick_unused_port_or_die();
  s << '[::1]:' << p;
  const string address = s.str();
  testing::EchoTestService::AsyncService service;
  ServerBuilder builder;
  builder.AddListeningPort(address, InsecureServerCredentials());
  auto cq = builder.AddCompletionQueue();
  builder.RegisterService(&service);
  auto server = builder.BuildAndStart();
    
    #include 'src/proto/grpc/testing/control.pb.h'
#include 'test/cpp/qps/histogram.h'
    
    int main(int argc, char** argv) {
  RunServer();
    }
    
    
    {  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << 'Server listening on ' << server_address << std::endl;
  server->Wait();
}
    
    #include <iostream>
#include <vector>
    
    
    
        CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(1,vertexCount);
    
    		{
			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 0.5f);
    }
    
    		// Car
		{
			b2PolygonShape chassis;
			b2Vec2 vertices[8];
			vertices[0].Set(-1.5f, -0.5f);
			vertices[1].Set(1.5f, -0.5f);
			vertices[2].Set(1.5f, 0.0f);
			vertices[3].Set(0.0f, 0.9f);
			vertices[4].Set(-1.15f, 0.9f);
			vertices[5].Set(-1.5f, 0.2f);
			chassis.Set(vertices, 6);
    }
    
        char message[1024];
    
    
    {    return context;
}
    
    
    {    if (addr.ss_family == AF_INET) {
        sockaddr_in *ipv4 = (sockaddr_in *) &addr;
        inet_ntop(AF_INET, &ipv4->sin_addr, buf, sizeof(buf));
        return {ntohs(ipv4->sin_port), buf, 'IPv4'};
    } else {
        sockaddr_in6 *ipv6 = (sockaddr_in6 *) &addr;
        inet_ntop(AF_INET6, &ipv6->sin6_addr, buf, sizeof(buf));
        return {ntohs(ipv6->sin6_port), buf, 'IPv6'};
    }
}
    
        bool write(Queue::Message *message, bool &wasTransferred) {
        ssize_t sent = 0;
        if (messageQueue.empty()) {
    }
    }
    
    #include <string>
    
    
    {    static Group<isServer> *from(uS::Socket *s) {
        return static_cast<Group<isServer> *>(s->getNodeData());
    }
};