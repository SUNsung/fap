
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    #include <stdio.h>
#include 'leveldb/comparator.h'
#include 'leveldb/db.h'
#include 'leveldb/filter_policy.h'
#include 'leveldb/slice.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
#include 'util/logging.h'
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    std::string LockFileName(const std::string& dbname) {
  return dbname + '/LOCK';
}
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    ChannelArguments::ChannelArguments(const ChannelArguments& other)
    : strings_(other.strings_) {
  args_.reserve(other.args_.size());
  auto list_it_dst = strings_.begin();
  auto list_it_src = other.strings_.begin();
  for (auto a = other.args_.begin(); a != other.args_.end(); ++a) {
    grpc_arg ap;
    ap.type = a->type;
    GPR_ASSERT(list_it_src->c_str() == a->key);
    ap.key = const_cast<char*>(list_it_dst->c_str());
    ++list_it_src;
    ++list_it_dst;
    switch (a->type) {
      case GRPC_ARG_INTEGER:
        ap.value.integer = a->value.integer;
        break;
      case GRPC_ARG_STRING:
        GPR_ASSERT(list_it_src->c_str() == a->value.string);
        ap.value.string = const_cast<char*>(list_it_dst->c_str());
        ++list_it_src;
        ++list_it_dst;
        break;
      case GRPC_ARG_POINTER:
        ap.value.pointer = a->value.pointer;
        ap.value.pointer.p = a->value.pointer.vtable->copy(ap.value.pointer.p);
        break;
    }
    args_.push_back(ap);
  }
}
    
    
    {  gpr_setenv(name, value);
  gpr_unsetenv(name);
  retrieved_value = gpr_getenv(name);
  GPR_ASSERT(retrieved_value == nullptr);
}
    
    
    {  bool ret;
  GPR_ASSERT(true == gpr_parse_bool_value('truE', &ret) && true == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('falsE', &ret) && false == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('1', &ret) && true == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('0', &ret) && false == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('Yes', &ret) && true == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('No', &ret) && false == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('Y', &ret) && true == ret);
  GPR_ASSERT(true == gpr_parse_bool_value('N', &ret) && false == ret);
  GPR_ASSERT(false == gpr_parse_bool_value(nullptr, &ret));
  GPR_ASSERT(false == gpr_parse_bool_value('', &ret));
}
    
    TEST_F(HybridEnd2endTest, GenericEchoAsyncRequestStream) {
  typedef EchoTestService::WithAsyncMethod_RequestStream<
      EchoTestService::WithGenericMethod_Echo<TestServiceImpl>>
      SType;
  SType service;
  AsyncGenericService generic_service;
  SetUpServer(&service, nullptr, &generic_service, nullptr);
  ResetStub();
  std::thread generic_handler_thread(HandleGenericCall, &generic_service,
                                     cqs_[0].get());
  std::thread request_stream_handler_thread(HandleClientStreaming<SType>,
                                            &service, cqs_[1].get());
  TestAllMethods();
  generic_handler_thread.join();
  request_stream_handler_thread.join();
}
    
    #include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/security/credentials.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::Sqrt(const ComputationNodePtr a, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<SqrtNode<ElemType>>(net.GetDeviceId(), nodeName), { a });
}
    
                    fstream.GetMarker(FileMarker::fileMarkerBeginSection, L'BMomentumAsTimeConstant');
                fstream >> m_blockMomentumAsTimeConstantPerWorker;
                fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EMomentumAsTimeConstant');
    
            clsweight = builder.CreateLearnableParameter(L'WeightForClassPostProb', m_nbrCls, m_layerSizes[numHiddenLayers]);
        m_net->RandomInitLearnableParameters(clsweight, m_uniformInit, randomSeed++, m_initValueScale);
        clslogpostprob = builder.Times(clsweight, input, 1, L'ClassPostProb');
    
            m_workerArray->Add(m_deltaArray, m_totalModelSize);
        m_workerArray->Get(m_deltaArray, m_totalModelSize);
        WaitAll();
        m_workerArray->Get(m_deltaArray, m_totalModelSize);
    
    public:
    V2SimpleDistGradAggregator(const MPIWrapperPtr& mpi, bool useAsyncAggregation, int deviceId, int syncStatsTrace, ::CNTK::DistributedCommunicatorPtr communicator)
        : IDistGradAggregator<ElemType>(mpi), m_useAsyncAggregation(useAsyncAggregation), m_initialized(false), m_bufferedGradHeader(nullptr), m_syncStatsTrace(syncStatsTrace), m_iterationCount(0),
        m_communicator(communicator), m_nccl(deviceId, mpi)
    {}