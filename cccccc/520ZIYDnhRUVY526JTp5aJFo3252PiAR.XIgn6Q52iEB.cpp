
        
        struct Parameters {
  //Defines the custom parameter types for methods
  //eg: flatbuffers uses flatbuffers.Builder as input for the client and output for the server
  grpc::string custom_method_io_type;
    }
    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
    // This function implements the server thread.
void RunServer() {
  auto server_address = '0.0.0.0:50051';
  // Callback interface we implemented above.
  ServiceImpl service;
  grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
    }
    
    // Get any struct field as a double, regardless of what type it is.
inline double GetAnyFieldF(const Struct &st, const reflection::Field &field) {
  return GetAnyValueF(field.type()->base_type(),
                      st.GetAddressOf(field.offset()));
}
    
      // Generate text from an arbitrary FlatBuffer by looking up its
  // file_identifier in the registry.
  bool FlatBufferToText(const uint8_t *flatbuf, size_t len, std::string *dest) {
    // Get the identifier out of the buffer.
    // If the buffer is truncated, exit.
    if (len < sizeof(uoffset_t) + FlatBufferBuilder::kFileIdentifierLength) {
      lasterror_ = 'buffer truncated';
      return false;
    }
    std::string ident(
        reinterpret_cast<const char *>(flatbuf) + sizeof(uoffset_t),
        FlatBufferBuilder::kFileIdentifierLength);
    // Load and parse the schema.
    Parser parser;
    if (!LoadSchema(ident, &parser)) return false;
    // Now we're ready to generate text.
    if (!GenerateText(parser, flatbuf, dest)) {
      lasterror_ = 'unable to generate text for FlatBuffer binary';
      return false;
    }
    return true;
  }
    
    static void Warn(const flatbuffers::FlatCompiler *flatc,
                 const std::string &warn, bool show_exe_name) {
  (void)flatc;
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('warning: %s\n', warn.c_str());
}
    
      SliceAllocator(const SliceAllocator &other) = delete;
  SliceAllocator &operator=(const SliceAllocator &other) = delete;