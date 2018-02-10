
        
        // Generates Client method signature source
void GenerateClientMethodSignature(const grpc_generator::Method *method, grpc_generator::Printer *printer,
                                   std::map<grpc::string, grpc::string> vars) {
	vars['Method'] = exportName(method->name());
	vars['Request'] = ', in *' + ((vars['CustomMethodIO'] == '') ? method->get_input_type_name() : vars['CustomMethodIO']);
	if (ClientOnlyStreaming(method) || method->BidiStreaming()) {
		vars['Request'] = '';
	}
	vars['Response'] = '* ' + method->get_output_type_name();
	if (ClientOnlyStreaming(method) || method->BidiStreaming() || ServerOnlyStreaming(method)) {
		vars['Response'] = vars['Service'] + '_' + vars['Method'] + 'Client' ;
	}
	printer->Print(vars, '$Method$(ctx $context$.Context$Request$, \n\topts... $grpc$.CallOption) ($Response$, error)');
}
    
    //go generator is used to generate GRPC code for serialization system, such as flatbuffers
#include <memory>
#include <vector>
    
      void SayManyHellos(const std::string &name, int num_greetings,
                     std::function<void(const std::string &)> callback) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset =
        CreateManyHellosRequest(mb, name_offset, num_greetings);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<ManyHellosRequest>();
    }
    
    class GreeterServiceImpl final : public Greeter::Service {
  virtual grpc::Status SayHello(
      grpc::ServerContext *context,
      const flatbuffers::grpc::Message<HelloRequest> *request_msg,
      flatbuffers::grpc::Message<HelloReply> *response_msg) override {
    // flatbuffers::grpc::MessageBuilder mb_;
    // We call GetRoot to 'parse' the message. Verification is already
    // performed by default. See the notes below for more details.
    const HelloRequest *request = request_msg->GetRoot();
    }
    }
    
    std::unique_ptr< MonsterStorage::Stub> MonsterStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< MonsterStorage::Stub> stub(new MonsterStorage::Stub(channel));
  return stub;
}
    
    
    {  virtual void Print(const std::map<grpc::string, grpc::string> &vars,
                     const char *template_string) = 0;
  virtual void Print(const char *string) = 0;
  virtual void Indent() = 0;
  virtual void Outdent() = 0;
};
    
    class ThreadManager {
 public:
  ThreadManager(int num_threads)
      : alive_threads_(num_threads), start_stop_barrier_(num_threads) {}
    }
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
      // Do not print timeLabel on bigO and RMS report
  if (run.report_big_o) {
    Out << GetBigOString(run.complexity);
  } else if (!run.report_rms) {
    Out << GetTimeUnitString(run.time_unit);
  }
  Out << ',';
    
    BenchmarkReporter::Context::Context() : cpu_info(CPUInfo::Get()) {}