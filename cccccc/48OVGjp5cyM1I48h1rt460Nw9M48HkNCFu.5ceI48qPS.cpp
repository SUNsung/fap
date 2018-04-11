
        
        
    {}
    
    /*
 * Order blocks for lowering to machine code.  May use different layout
 * algorithms depending on the TransKind of `unit'.
 *
 * The output is guaranteed to be partitioned by area relative to `text'.  This
 * is almost the same as partitioning by AreaIndex, except we may interleave,
 * e.g., Main and Cold blocks in the same partition if their actual code areas
 * in `text' are the same.
 */
jit::vector<Vlabel> layoutBlocks(Vunit& unit, const Vtext& text);
    
    #endif
#endif

    
      /* Third, try to get magic file relative to dll location */
  dllpath = malloc(sizeof(*dllpath) * (MAX_PATH + 1));
  dllpath[MAX_PATH] = 0;  /* just in case long path gets truncated and not null terminated */
  if (GetModuleFileNameA(NULL, dllpath, MAX_PATH)) {
    PathRemoveFileSpecA(dllpath);
    if (strlen(dllpath) > 3 &&
        stricmp(&dllpath[strlen(dllpath) - 3], 'bin') == 0) {
      if (asprintf(&tmppath,
          '%s/../share/misc/magic.mgc', dllpath) >= 0)
        APPENDPATH();
    } else {
      if (asprintf(&tmppath,
          '%s/share/misc/magic.mgc', dllpath) >= 0)
        APPENDPATH();
      else if (asprintf(&tmppath,
          '%s/magic.mgc', dllpath) >= 0)
        APPENDPATH();
    }
  }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {}  // namespace grpc_node_generator
    
    #include <grpc/grpc_security.h>
    
      NSDictionary *flagNames = @{
#define GRPC_XMACRO_ITEM(methodName, FlagName) \
    @(kSCNetworkReachabilityFlags ## FlagName): @#methodName,
#include 'GRXReachabilityFlagNames.xmacro.h'
#undef GRPC_XMACRO_ITEM
  };
    
      std::unique_ptr<grpc::Server> StartServer(int port);
    
    grpc::string DescribeMethod(const grpc::protobuf::MethodDescriptor* method) {
  std::stringstream result;
  result << '  rpc ' << method->name()
         << (method->client_streaming() ? '(stream ' : '(')
         << method->input_type()->full_name() << ') returns '
         << (method->server_streaming() ? '(stream ' : '(')
         << method->output_type()->full_name() << ') {}\n';
  if (method->options().deprecated()) {
    result << ' DEPRECATED';
  }
  return result.str();
}