
        
          // mate::TrackableObject:
  static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    AsarProtocolHandler::AsarProtocolHandler(
    const scoped_refptr<base::TaskRunner>& file_task_runner)
    : file_task_runner_(file_task_runner) {}
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
    
    #endif  // ATOM_BROWSER_RELAUNCHER_H_

    
      Predicate predicate_;
    
    // Set platform accelerator for the Accelerator.
void SetPlatformAccelerator(ui::Accelerator* accelerator);
    
    /// used internally
void throwRuntimeError(std::string const& msg);
/// used internally
void throwLogicError(std::string const& msg);
    
    // Appends all the CMessages in the input iterator to the container.
//
// Returns None if successful; returns NULL and sets an exception if
// unsuccessful.
PyObject* Extend(RepeatedCompositeContainer* self, PyObject* value);
    
    
    {
    {
    {}  // namespace cpp
}  // namespace compiler
}  // namespace protobuf
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    void RepeatedEnumFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.ForEnum($tag$, x => (int) x, x => ($type_name$) x);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    CvRect cvGetValidDisparityROI( CvRect roi1, CvRect roi2, int minDisparity,
                              int numberOfDisparities, int SADWindowSize )
{
    return (CvRect)cv::getValidDisparityROI( roi1, roi2, minDisparity,
                                            numberOfDisparities, SADWindowSize );
}
    
        Mat img = _img.getMat(), cornersM = _corners.getMat();
    int ncorners = cornersM.checkVector(2, CV_32F);
    CV_Assert( ncorners >= 0 );
    Point2f* corners = cornersM.ptr<Point2f>();
    const int nbins = 256;
    float ranges[] = {0, 256};
    const float* _ranges = ranges;
    Mat hist;
    
    // Subclass of TestServiceImpl that increments a request counter for
// every call to the Echo RPC.
class MyTestServiceImpl : public TestServiceImpl {
 public:
  MyTestServiceImpl() : request_count_(0) {}
    }
    
    DEFINE_string(scenario_result_file, '',
              'Write JSON benchmark report to the file specified.');
    
    
    {  if (request->has_param() && request->param().echo_metadata()) {
    const std::multimap<grpc::string_ref, grpc::string_ref>& client_metadata =
        context->client_metadata();
    for (std::multimap<grpc::string_ref, grpc::string_ref>::const_iterator
             iter = client_metadata.begin();
         iter != client_metadata.end(); ++iter) {
      context->AddTrailingMetadata(ToString(iter->first),
                                   ToString(iter->second));
    }
    // Terminate rpc with error and debug info in trailer.
    if (request->param().debug_info().stack_entries_size() ||
        !request->param().debug_info().detail().empty()) {
      grpc::string serialized_debug_info =
          request->param().debug_info().SerializeAsString();
      context->AddTrailingMetadata(kDebugInfoTrailerKey, serialized_debug_info);
      return Status::CANCELLED;
    }
  }
  if (request->has_param() &&
      (request->param().expected_client_identity().length() > 0 ||
       request->param().check_auth_context())) {
    CheckServerAuthContext(context,
                           request->param().expected_transport_security_type(),
                           request->param().expected_client_identity());
  }
  if (request->has_param() && request->param().response_message_length() > 0) {
    response->set_message(
        grpc::string(request->param().response_message_length(), '\0'));
  }
  if (request->has_param() && request->param().echo_peer()) {
    response->mutable_param()->set_peer(context->peer());
  }
  return Status::OK;
}
    
      bool signal_client() {
    std::unique_lock<std::mutex> lock(mu_);
    return signal_client_;
  }
    
    #include <grpc++/create_channel.h>
#include <grpc++/security/credentials.h>
#include <grpc/support/log.h>
    
      ClientConfig client_config;
  client_config.set_client_type(ASYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1000);
  client_config.set_client_channels(8);
  client_config.set_async_client_threads(8);
  client_config.set_rpc_type(STREAMING);
  client_config.mutable_load_params()->mutable_poisson()->set_offered_load(
      1000.0 / grpc_test_slowdown_factor());
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
    }
    
    class RouteGuideClient {
 public:
  RouteGuideClient(std::shared_ptr<Channel> channel, const std::string& db)
      : stub_(RouteGuide::NewStub(channel)) {
    routeguide::ParseDb(db, &feature_list_);
  }
    }
    
    namespace grpc_node_generator {
    }
    
      if (!args[0]->IsString()) {
    return scope.Close(Boolean::New(false));
  }
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowBlockingFlush
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowBlockingFlush(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_blocking_flush);
}
    
    #include <memory>
#include <set>
#include <string>
#include 'rocksdb/statistics.h'
#include 'monitoring/statistics.h'
    
        std::string log_line = 'ADD - ';
    log_line += key.ToString(true);
    log_line += ' - ';
    AppendNumberTo(&log_line, size);
  // @lint-ignore TXT2 T25377293 Grandfathered in
		log_line += '\n';
    
    #include 'rocksdb/compaction_filter.h'
#include 'rocksjni/jnicallback.h'
    
    namespace A2STR {
    }
    
    class AbstractCommand : public Command {
private:
  std::shared_ptr<Request> req_;
  std::shared_ptr<FileEntry> fileEntry_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<SocketRecvBuffer> socketRecvBuffer_;
  std::shared_ptr<SocketCore> readCheckTarget_;
  std::shared_ptr<SocketCore> writeCheckTarget_;
    }
    
      virtual void openFile(int64_t totalLength = 0) CXX11_OVERRIDE;
    
      void updateReadWriteCheck();
    
    
    {} // namespace aria2

    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    namespace aria2 {
    }
    
    #include 'common.h'
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }