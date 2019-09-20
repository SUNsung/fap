
        
        #include 'KeyChord.g.cpp'
    
    bool TextFormatConformanceTestSuite::ParseTextFormatResponse(
    const ConformanceResponse& response,
    const ConformanceRequestSetting& setting, Message* test_message) {
  TextFormat::Parser parser;
  const ConformanceRequest& request = setting.GetRequest();
  if (request.print_unknown_fields()) {
    parser.AllowFieldNumber(true);
  }
  if (!parser.ParseFromString(response.text_payload(), test_message)) {
    GOOGLE_LOG(ERROR) << 'INTERNAL ERROR: internal text->protobuf transcode '
                      << 'yielded unparseable proto. Text payload: '
                      << response.text_payload();
    return false;
  }
    }
    
    extern PyTypeObject* MessageMapContainer_Type;
extern PyTypeObject* ScalarMapContainer_Type;
extern PyTypeObject MapIterator_Type;  // Both map types use the same iterator.
    
    void* ArenaImpl::AllocateAlignedAndAddCleanup(size_t n,
                                              void (*cleanup)(void*)) {
  SerialArena* arena;
  if (PROTOBUF_PREDICT_TRUE(GetSerialArenaFast(&arena))) {
    return arena->AllocateAlignedAndAddCleanup(n, cleanup);
  } else {
    return AllocateAlignedAndAddCleanupFallback(n, cleanup);
  }
}
    
        // Check field accessors for a repeated int32:
    TryInsert('test.pb.h', 'field_get:foo.Bar.repeatedInt', context);
    TryInsert('test.pb.h', 'field_set:foo.Bar.repeatedInt', context);
    
    
    {  // Instantiate extension template functions to test conflicting template
  // parameter names.
  typedef protobuf_unittest::TestConflictingSymbolNamesExtension ExtensionMessage;
  message.AddExtension(ExtensionMessage::repeated_int32_ext, 123);
  EXPECT_EQ(123, message.GetExtension(ExtensionMessage::repeated_int32_ext, 0));
}
    
    class CppMetadataTest : public ::testing::Test {
 public:
  // Tries to capture a FileDescriptorProto, GeneratedCodeInfo, and output
  // code from the previously added file with name `filename`. Returns true on
  // success. If pb_h is non-null, expects a .pb.h and a .pb.h.meta (copied to
  // pb_h and pb_h_info respecfively); similarly for proto_h and proto_h_info.
  bool CaptureMetadata(const std::string& filename, FileDescriptorProto* file,
                       std::string* pb_h, GeneratedCodeInfo* pb_h_info,
                       std::string* proto_h, GeneratedCodeInfo* proto_h_info,
                       std::string* pb_cc) {
    CommandLineInterface cli;
    CppGenerator cpp_generator;
    cli.RegisterGenerator('--cpp_out', &cpp_generator, '');
    std::string cpp_out =
        '--cpp_out=annotate_headers=true,'
        'annotation_pragma_name=pragma_name,'
        'annotation_guard_name=guard_name:' +
        TestTempDir();
    }
    }
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// This file is the public interface to the .proto file parser.
    
      // Does this message class have generated parsing, serialization, and other
  // standard methods for which reflection-based fallback implementations exist?
  bool HasGeneratedMethods(const Descriptor* descriptor) const;
    
    
    { private:
  Context* context_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableGeneratorFactory);
};
    
      // For repeated fields, one bit is used for whether the array is immutable
  // in the parsing constructor.
  (*variables)['get_mutable_bit_parser'] =
      GenerateGetBitMutableLocal(builderBitIndex);
  (*variables)['set_mutable_bit_parser'] =
      GenerateSetBitMutableLocal(builderBitIndex);
    
    
    {}  // namespace grpc_impl

    
    static void winsock_init(void) {
  WSADATA wsaData;
  int status = WSAStartup(MAKEWORD(2, 0), &wsaData);
  GPR_ASSERT(status == 0);
}
    
    void SetGlobalConfigEnvErrorFunction(GlobalConfigEnvErrorFunctionType func) {
  g_global_config_env_error_func = func;
}
    
    #include <grpc/grpc.h>
#include <grpc/support/log.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/ext/health_check_service_server_builder_option.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
    
    class ServerLoadReportingEnd2endTest : public ::testing::Test {
 protected:
  void SetUp() override {
    server_address_ =
        'localhost:' + std::to_string(grpc_pick_unused_port_or_die());
    server_ =
        ServerBuilder()
            .AddListeningPort(server_address_, InsecureServerCredentials())
            .RegisterService(&echo_service_)
            .SetOption(std::unique_ptr<::grpc::ServerBuilderOption>(
                new ::grpc::load_reporter::experimental::
                    LoadReportingServiceServerBuilderOption()))
            .BuildAndStart();
    server_thread_ =
        std::thread(&ServerLoadReportingEnd2endTest::RunServerLoop, this);
  }
    }
    
    PSTokenizer::PSTokenizer(int (*getCharFuncA)(void *), void *dataA) {
  getCharFunc = getCharFuncA;
  data = dataA;
  charBuf = -1;
}
    
      // Get actions
  Object *getActions(Object *obj) { return actions.fetch(xref, obj); }
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
    
    {  if (readAttrs)
  {
    Object tmp;
    Dict *dict = streamObj->getStream()->getDict();
    dict->lookup('F', &tmp);
    if (!tmp.isNull()) {
      Object obj1;
      // valid 'F' key -> external file
      kind = soundExternal;
      if (getFileSpecNameForPlatform (&tmp, &obj1)) {
        fileName = obj1.getString()->copy();
        obj1.free();
      }
    } else {
      // no file specification, then the sound data have to be
      // extracted from the stream
      kind = soundEmbedded;
    }
    tmp.free();
    // sampling rate
    dict->lookup('R', &tmp);
    if (tmp.isNum()) {
      samplingRate = tmp.getNum();
    }
    tmp.free();
    // sound channels
    dict->lookup('C', &tmp);
    if (tmp.isInt()) {
      channels = tmp.getInt();
    }
    tmp.free();
    // bits per sample
    dict->lookup('B', &tmp);
    if (tmp.isInt()) {
      bitsPerSample = tmp.getInt();
    }
    tmp.free();
    // encoding format
    dict->lookup('E', &tmp);
    if (tmp.isName())
    {
      const char *enc = tmp.getName();
      if (strcmp('Raw', enc) == 0) {
        encoding = soundRaw;
      } else if (strcmp('Signed', enc) == 0) {
        encoding = soundSigned;
      } else if (strcmp('muLaw', enc) == 0) {
        encoding = soundMuLaw;
      } else if (strcmp('ALaw', enc) == 0) {
        encoding = soundALaw;
      }
    }
    tmp.free();
  }
}
    
    class SplashOutputDev: public OutputDev {
public:
    }
    
    
    {exit_error:
  free(ret);
  return nullptr;
}
    
    namespace HPHP { namespace alloc {
    }
    }
    
    // Specify the mount point of hugetlbfs with 1G page size.  Returns whether the
// operation succeeded, i.e., the specified path is accessible, and is on a
// hugetlbfs with 1G page size.
bool set_hugetlbfs_path(const char* path);
    
      m_monitor_thread = std::make_unique<std::thread>([] {
    folly::setThreadName('HostHealthMonitor');
    folly::Singleton<HostHealthMonitor>::try_get()->monitor();
  });
    
    /**
 * Java-like base class for synchronization between object methods within the
 * same class. Check pool.h for a typical example.
 */
struct Synchronizable {
  Synchronizable();
  virtual ~Synchronizable();
  Synchronizable(const Synchronizable&) = delete;
  Synchronizable& operator=(const Synchronizable&) = delete;
    }
    
    
    {
    {
    {}}}

    
    
static void check_and_die(int interval, int grace) noexcept {
  assert(interval > 0);
  assert(grace > 0);
  for (;;) {
    // when we get reparented
    // exit immediately
    if (getppid() == 1) {
      sleep(static_cast<unsigned>(grace));
      exit(20);
    }
    sleep(static_cast<unsigned>(interval));
  }
}
    
    namespace HPHP {
////////////////////////////////////////////////////////////////////////////////
    }
    
      /*
   * Costs associated with inlining.
   */
  int cost{0};
  int stackDepth{0};