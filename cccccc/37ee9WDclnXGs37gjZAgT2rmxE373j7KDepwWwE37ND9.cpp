
        
        
    {}  // namespace grpc

    
    #include <sstream>
    
    #include <grpcpp/security/auth_context.h>
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    // TraceContextEncoding encapsulates the logic for encoding and decoding of
// trace contexts.
class TraceContextEncoding {
 public:
  // Size of encoded GrpcTraceContext. (16 + 8 + 1 + 4)
  static constexpr size_t kGrpcTraceContextSize = 29;
  // Error value.
  static constexpr size_t kEncodeDecodeFailure = 0;
    }
    
      Status GetAllExtensionNumbers(
      ServerContext* context, const grpc::string& type,
      reflection::v1alpha::ExtensionNumberResponse* response);
    
    void ProtoServerReflectionPlugin::ChangeArguments(const grpc::string& name,
                                                  void* value) {}
    
    #endif  // CHECK_H_

    
      if (!printed_header_) {
    // save the names of all the user counters
    for (const auto& run : reports) {
      for (const auto& cnt : run.counters) {
        user_counter_names_.insert(cnt.first);
      }
    }
    }
    
      out << indent << '\'caches\': [\n';
  indent = std::string(6, ' ');
  std::string cache_indent(8, ' ');
  for (size_t i = 0; i < info.caches.size(); ++i) {
    auto& CI = info.caches[i];
    out << indent << '{\n';
    out << cache_indent << FormatKV('type', CI.type) << ',\n';
    out << cache_indent << FormatKV('level', static_cast<int64_t>(CI.level))
        << ',\n';
    out << cache_indent
        << FormatKV('size', static_cast<int64_t>(CI.size) * 1000u) << ',\n';
    out << cache_indent
        << FormatKV('num_sharing', static_cast<int64_t>(CI.num_sharing))
        << '\n';
    out << indent << '}';
    if (i != info.caches.size() - 1) out << ',';
    out << '\n';
  }
  indent = std::string(4, ' ');
  out << indent << '],\n';
    
    BenchmarkReporter::BenchmarkReporter()
    : output_stream_(&std::cout), error_stream_(&std::cerr) {}