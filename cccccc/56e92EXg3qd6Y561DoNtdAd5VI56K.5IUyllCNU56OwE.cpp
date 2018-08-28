
        
        // static
void App::Quit(RenderProcessHost* render_process_host) {
  // Send the quit message.
  int no_use;
  if (render_process_host) {
    render_process_host->Send(new ViewMsg_WillQuit(&no_use));
  }else{
    std::set<RenderProcessHost*> rphs;
    std::set<RenderProcessHost*>::iterator it;
    }
    }
    
    
    {}  // namespace nw

    
    #include 'base/memory/weak_ptr.h'
    
    
    {}  // namespace nwapi
    
    namespace nw {
    }
    
    namespace nw {
    }
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    void MenuItem::SetEnabled(bool enabled) {
  gtk_widget_set_sensitive(menu_item_, enabled);
}
    
      nw::Package* package = nw::package();
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::CommandLine::StringVector args = command_line->GetArgs();
  base::CommandLine::StringVector argv = command_line->original_argv();
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    io::ZeroCopyOutputStream* GeneratorContext::OpenForInsert(
    const string& filename, const string& insertion_point) {
  GOOGLE_LOG(FATAL) << 'This GeneratorContext does not support insertion.';
  return NULL;  // make compiler happy
}
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    void MapFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $property_name$.GetHashCode();\n');
}
void MapFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if (!$property_name$.Equals(other.$property_name$)) return false;\n');
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    void PrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  // TODO(jonskeet): Work out whether we want to prevent the fields from ever being
  // null, or whether we just handle it, in the cases of bytes and string.
  // (Basically, should null-handling code be in the getter or the setter?)
  printer->Print(
    variables_,
    'private $type_name$ $name_def_message$;\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ $type_name$ $property_name$ {\n'
    '  get { return $name$_; }\n'
    '  set {\n');
  if (is_value_type) {
    printer->Print(
      variables_,
      '    $name$_ = value;\n');
  } else {
    printer->Print(
      variables_,
      '    $name$_ = pb::ProtoPreconditions.CheckNotNull(value, \'value\');\n');
  }
  printer->Print(
    '  }\n'
    '}\n');
}
    
      SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
    
    namespace grpc {
    }
    
    CompletionQueue::CompletionQueueTLSCache::CompletionQueueTLSCache(
    CompletionQueue* cq)
    : cq_(cq), flushed_(false) {
  grpc_completion_queue_thread_local_cache_init(cq_->cq_);
}
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    using LineNumber = uint32_t;
using ColNumber  = uint32_t;
using LineRange  = std::tuple<LineNumber,LineNumber>;
    
    int execute_program(int argc, char **argv);
    
    #include 'hphp/runtime/base/thread-info.h'
    
    struct CompactionIterationStats {
  // Compaction statistics
    }
    
      // Write 100K keys, these are written to a few files in L0.
  const std::string value(10, 'x');
  for (int i = 0; i < 100000; i++) {
    char key[100];
    snprintf(key, sizeof(key), 'B%010d', i);
    Put(1, key, value);
  }
  ASSERT_OK(Flush(1));
    
    #ifndef ROCKSDB_LITE
    
    std::unique_ptr<WriteControllerToken>
WriteController::GetCompactionPressureToken() {
  ++total_compaction_pressure_;
  return std::unique_ptr<WriteControllerToken>(
      new CompactionPressureToken(this));
}
    
    namespace rocksdb {
    }
    
      Status Append(const Slice& data) {
    MutexLock lock(&mutex_);
    data_.append(data.data(), data.size());
    size_ = data_.size();
    modified_time_ = Now();
    return Status::OK();
  }
    
      virtual Status GetChildren(const std::string& dir,
                             std::vector<std::string>* result) override;
    
    #include 'env/mock_env.h'
    
        std::unique_ptr<DHTRoutingTable> routingTable;
    
    namespace aria2 {
    }
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
    
    {  void deserialize(const std::string& filename);
};
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    #include <cstring>
    
      const std::string& find(const std::string& hostname, uint16_t port) const;