
        
          testReads(
      {{0, 5 * 1024 * 1024}, {kAlign, 5 * 1024 * 1024}}, AsyncIO::NOT_POLLABLE);
    
    std::shared_ptr<LogWriter> FileWriterFactory::createWriter(File file) {
  // Determine whether we should use ImmediateFileWriter or AsyncFileWriter
  if (async_) {
    auto asyncWriter = make_shared<AsyncFileWriter>(std::move(file));
    if (maxBufferSize_.hasValue()) {
      asyncWriter->setMaxBufferSize(maxBufferSize_.value());
    }
    return asyncWriter;
  } else {
    if (maxBufferSize_.hasValue()) {
      throw std::invalid_argument(to<string>(
          'the \'max_buffer_size\' option is only valid for async file '
          'handlers'));
    }
    return make_shared<ImmediateFileWriter>(std::move(file));
  }
}
    
      // The fixed portion of the header takes up 31 bytes.
  //
  // The variable portions that we can't account for here include the line
  // number and the thread ID (just in case it is larger than 6 digits long).
  // Here we guess that 40 bytes will be long enough to include room for this.
  //
  // If this still isn't long enough the string will grow as necessary, so the
  // code will still be correct, but just slightly less efficient than if we
  // had allocated a large enough buffer the first time around.
  size_t headerLengthGuess = 40 + basename.size();
    
    
    {
    {  folly::File file_;
};
} // namespace folly

    
    /*
 * This file contains utility functions for parsing and serializing
 * LogConfig strings.
 *
 * This is separate from the LogConfig class itself, to reduce the dependencies
 * of the core logging library.  Other code that wants to use the logging
 * library to log messages but does not need to parse log config strings
 * therefore does not need to depend on the folly JSON library.
 */
    
    
    {        // see if our best match qualifies
        if (best < 3) { // fast path literals
            ++q;
        } else if (best > 2  &&  best <= 0x80    &&  dist <= 0x100) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out(0x80 + best-1);
            stb_out(dist-1);
        } else if (best > 5  &&  best <= 0x100   &&  dist <= 0x4000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out2(0x4000 + dist-1);       
            stb_out(best-1);
        } else if (best > 7  &&  best <= 0x100   &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x180000 + dist-1);     
            stb_out(best-1);
        } else if (best > 8  &&  best <= 0x10000 &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x100000 + dist-1);     
            stb_out2(best-1);
        } else if (best > 9                      &&  dist <= 0x1000000) {
            if (best > 65536) best = 65536;
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            if (best <= 0x100) {
                stb_out(0x06);
                stb_out3(dist-1);
                stb_out(best-1);
            } else {
                stb_out(0x04);
                stb_out3(dist-1);
                stb_out2(best-1);
            }
        } else {  // fallback literals if no match was a balanced tradeoff
            ++q;
        }
    }
    
    void DebugHUD_InitDefaults( DebugHUD *hud )
{
    hud->show_demo_window = true;
    hud->show_another_window = true;
    hud->rotation_speed = 15.0f;
    
    hud->cubeColor1[0] = 0.4f;
    hud->cubeColor1[1] = 0.4f;
    hud->cubeColor1[2] = 1.0f;
    hud->cubeColor1[3] = 1.0f;
    
    hud->cubeColor2[0] = 1.0f;
    hud->cubeColor2[1] = 0.4f;
    hud->cubeColor2[2] = 0.4f;
    hud->cubeColor2[3] = 1.0f;
    
    hud->clearColor[0] = 0.45f;
    hud->clearColor[1] = 0.55f;
    hud->clearColor[2] = 0.60f;
    hud->clearColor[3] = 1.00f;
}
    
    // Implemented features:
//  [X] User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    int32 ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData)
{
    // pEvent->m_Button is of type s3ePointerButton and indicates which mouse
    // button was pressed.  For touchscreen this should always have the value
    // S3E_POINTER_BUTTON_SELECT
    s3ePointerEvent* pEvent = (s3ePointerEvent*)SystemData;
    }
    
        // Cleanup
    ImGui_Marmalade_Shutdown();
    ImGui::DestroyContext();
    IwGxTerminate();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
      grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cerr << 'Server listening on ' << server_address << std::endl;
    
    inline const char **EnumNamesEnumInNestedNS() {
  static const char *names[] = {
    'A',
    'B',
    'C',
    nullptr
  };
  return names;
}
    
    
    {  WeaponT *AsWeapon() {
    return type == Equipment_Weapon ?
      reinterpret_cast<WeaponT *>(value) : nullptr;
  }
  const WeaponT *AsWeapon() const {
    return type == Equipment_Weapon ?
      reinterpret_cast<const WeaponT *>(value) : nullptr;
  }
};
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>
    
    grpc::string GetHeaderEpilogue(grpc_generator::File *file,
                               const Parameters & /*params*/) {
  grpc::string output;
  {
    // Scope the output stream so it closes and finalizes output to the string.
    auto printer = file->CreatePrinter(&output);
    std::map<grpc::string, grpc::string> vars;
    }
    }
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File* file,
                                   const grpc_generator::Service* service,
                                   grpc_java_generator::Parameters* parameters);
    
    namespace grpc {
    }
    
    class FixedTypedVector : public Object {
 public:
  FixedTypedVector(const uint8_t *data, uint8_t byte_width, Type element_type,
                   uint8_t len)
      : Object(data, byte_width), type_(element_type), len_(len) {}
    }
    
     private:
  bool LoadSchema(const std::string &ident, Parser *parser) {
    // Find the schema, if not, exit.
    auto it = schemas_.find(ident);
    if (it == schemas_.end()) {
      // Don't attach the identifier, since it may not be human readable.
      lasterror_ = 'identifier for this buffer not in the registry';
      return false;
    }
    auto &schema = it->second;
    // Load the schema from disk. If not, exit.
    std::string schematext;
    if (!LoadFile(schema.path_.c_str(), false, &schematext)) {
      lasterror_ = 'could not load schema: ' + schema.path_;
      return false;
    }
    // Parse schema.
    parser->opts = opts_;
    if (!parser->Parse(schematext.c_str(), vector_data(include_paths_),
                       schema.path_.c_str())) {
      lasterror_ = parser->error_;
      return false;
    }
    return true;
  }
    
    using namespace MyGame::Sample;
    
    // pull out the type of messages sent by our config
typedef server::message_ptr message_ptr;
    
            if (!ext->messages.empty()) {
            lws_callback_on_writable(wsi);
        }
    
        auto startPoint = high_resolution_clock::now();
    vector<thread *> threads;
    for (int i = 0; i < THREADS; i++) {
        threads.push_back(new thread([i] {
            while(nextConnection(i));
        }));
    }
    
    template <bool isServer>
void Group<isServer>::startAutoPing(int intervalMs, std::string userMessage) {
    timer = new uS::Timer(loop);
    timer->setData(this);
    timer->start(timerCallback, intervalMs, intervalMs);
    userPingMessage = userMessage;
}
    
    // todo: move this out to examples folder, it is not a test but a stragiht up example of EventSource support
void serveEventSource() {
    uWS::Hub h;
    }
    
    public:
    void addAsync() {
        async = new Async(loop);
        async->setData(this);
        async->start(NodeData::asyncCallback);
    }
    
        static inline size_t formatMessage(char *dst, const char *src, size_t length, OpCode opCode, size_t reportedLength, bool compressed) {
        size_t messageLength;
        size_t headerLength;
        if (reportedLength < 126) {
            headerLength = 2;
            dst[1] = reportedLength;
        } else if (reportedLength <= UINT16_MAX) {
            headerLength = 4;
            dst[1] = 126;
            *((uint16_t *) &dst[2]) = htons(reportedLength);
        } else {
            headerLength = 10;
            dst[1] = 127;
            *((uint64_t *) &dst[2]) = htobe64(reportedLength);
        }
    }