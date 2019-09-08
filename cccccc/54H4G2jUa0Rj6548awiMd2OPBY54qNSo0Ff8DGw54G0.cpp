
        
        void grpc_set_default_iomgr_platform() {
  grpc_set_tcp_client_impl(&grpc_windows_tcp_client_vtable);
  grpc_set_tcp_server_impl(&grpc_windows_tcp_server_vtable);
  grpc_set_timer_impl(&grpc_generic_timer_vtable);
  grpc_set_pollset_vtable(&grpc_windows_pollset_vtable);
  grpc_set_pollset_set_vtable(&grpc_windows_pollset_set_vtable);
  grpc_set_resolver_impl(&grpc_windows_resolver_vtable);
  grpc_set_iomgr_platform_vtable(&vtable);
}
    
    #ifndef GRPC_CORE_LIB_IOMGR_COMBINER_H
#define GRPC_CORE_LIB_IOMGR_COMBINER_H
    
    
    {}  // namespace grpc