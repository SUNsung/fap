
        
        #include <vector>
    
      std::unique_ptr<gfx::SingletonHwndObserver> singleton_hwnd_observer_;
    
    #include 'content/public/browser/web_contents_observer.h'
#include 'ui/gfx/native_widget_types.h'
    
    #include <string>
    
    #include 'chrome/browser/speech/tts_platform.h'
    
      /// \brief Return a list of the member names.
  ///
  /// If null, return an empty list.
  /// \pre type() is objectValue or nullValue
  /// \post if type() was nullValue, it remains nullValue
  Members getMemberNames() const;
    
    
    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <string>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    #include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/java/java_extension.h>
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
    /**
 * @brief Start status logging to a buffer until the logger plugin is online.
 *
 * This will also call google::InitGoogleLogging. Use the default init_glog
 * to control this in tests to protect against calling the API twice.
 */
void initStatusLogger(const std::string& name, bool init_glog = true);
    
    namespace osquery {
    }
    
    
    {  return Status(0, 'OK');
}
    
    #pragma once
    
    class TestTablePlugin : public TablePlugin {
 public:
  void testSetCache(size_t step, size_t interval) {
    QueryData r;
    QueryContext ctx;
    ctx.useCache(true);
    setCache(step, interval, ctx, r);
  }
    }
    
    
    {  EXPECT_EQ(expected, toAsciiTime(&result));
}
    
    namespace aria2 {
    }
    
      void ensureMmapWrite(size_t len, int64_t offset);
    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
      const std::shared_ptr<HttpConnection>& getHttpConnection() const
  {
    return httpConnection_;
  }
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
    
    {  virtual int64_t getTotalLength() CXX11_OVERRIDE;
};
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
      bool tryAsFingerprint(const std::string& fingerprint);
    
    #include 'a2functional.h'