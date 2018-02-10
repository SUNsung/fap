
        
        DEFINE_string(test_name, '', 'Name of the test being executed');
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
      void push_back(T&& value) { emplace_back(std::move(value)); }
    
    
    {    HistogramEntry entry;
    HistogramEntry* entry_ptr = &entry;
    if (!cli_cqs_[cq_[thread_idx]]->Next(&got_tag, &ok)) {
      return;
    }
    std::mutex* shutdown_mu = &shutdown_state_[thread_idx]->mutex;
    shutdown_mu->lock();
    ClientRpcContext* ctx = ProcessTag(thread_idx, got_tag);
    if (ctx == nullptr) {
      shutdown_mu->unlock();
      return;
    }
    while (cli_cqs_[cq_[thread_idx]]->DoThenAsyncNext(
        [&, ctx, ok, entry_ptr, shutdown_mu]() {
          if (!ctx->RunNextState(ok, entry_ptr)) {
            // The RPC and callback are done, so clone the ctx
            // and kickstart the new one
            ctx->StartNewClone(cli_cqs_[cq_[thread_idx]].get());
            delete ctx;
          }
          shutdown_mu->unlock();
        },
        &got_tag, &ok, gpr_inf_future(GPR_CLOCK_REALTIME))) {
      t->UpdateHistogram(entry_ptr);
      entry = HistogramEntry();
      shutdown_mu->lock();
      ctx = ProcessTag(thread_idx, got_tag);
      if (ctx == nullptr) {
        shutdown_mu->unlock();
        return;
      }
    }
  }
    
        gpr_sleep_until(gpr_time_add(
        gpr_now(GPR_CLOCK_MONOTONIC),
        gpr_time_from_micros(server_delay_before_return_us, GPR_TIMESPAN)));
    
    const int kServerDefaultResponseStreamsToSend = 3;
const char* const kServerResponseStreamsToSend = 'server_responses_to_send';
const char* const kServerTryCancelRequest = 'server_try_cancel';
const char* const kDebugInfoTrailerKey = 'debug-info-bin';
const char* const kServerFinishAfterNReads = 'server_finish_after_n_reads';
const char* const kServerUseCoalescingApi = 'server_use_coalescing_api';
    
    namespace grpc {
namespace testing {
    }
    }
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, true);
    
    using grpc::Server;
using grpc::ServerAsyncResponseWriter;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerCompletionQueue;
using grpc::Status;
using helloworld::HelloRequest;
using helloworld::HelloReply;
using helloworld::Greeter;
    
    int main(int argc, char* argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_cp) {
    if (argc != 3) {
      usage(argv[0]);
    }
    copy(argv[1], argv[2]);
  } else {
    if (argc != 1) {
      usage(argv[0]);
    }
    list();
  }
  return 0;
}

    
    #include <boost/operators.hpp>
    
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
    
        for (const auto& entry : categories->items()) {
      if (!entry.first.isString()) {
        // This shouldn't really ever happen.
        // We deserialize the json with allow_non_string_keys set to False.
        throw LogConfigParseError{'category name must be a string'};
      }
      auto categoryName = entry.first.asString();
      auto categoryConfig = parseJsonCategoryConfig(entry.second, categoryName);
    }
    
    /**
 * Parse a log configuration string.
 *
 * See the documentation in logging/docs/Config.md for a description of the
 * configuration string syntax.
 *
 * Throws a LogConfigParseError on error.
 */
LogConfig parseLogConfig(StringPiece value);
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
    using namespace v8;
    
    #pragma once
#include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
    
    {  std::string res;
  slists.Get('random_key', &res);
  ASSERT_EQ(res, 'single_val');
}
    
      AlignedBuffer& operator=(AlignedBuffer&& o) ROCKSDB_NOEXCEPT {
    alignment_ = std::move(o.alignment_);
    buf_ = std::move(o.buf_);
    capacity_ = std::move(o.capacity_);
    cursize_ = std::move(o.cursize_);
    bufstart_ = std::move(o.bufstart_);
    return *this;
  }
    
      std::shared_ptr<Cache> cache = NewLRUCache(0, 0, false);
  table_options.block_cache = cache;
  options.table_factory.reset(new BlockBasedTableFactory(table_options));
  Reopen(options);
  RecordCacheCounters(options);
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-nullptr, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(std::shared_ptr<Logger> info_log,
  // @lint-ignore TXT2 T25377293 Grandfathered in
	 unique_ptr<SequentialFileReader>&& file,
         Reporter* reporter, bool checksum, uint64_t initial_offset,
         uint64_t log_num);
    
      std::string GetInternalKey(Slice user_key, bool zero_seqno) {
    IterKey ikey;
    ikey.SetInternalKey(user_key, zero_seqno ? 0 : 1000, kTypeValue);
    return ikey.GetInternalKey().ToString();
  }
    
    
    {}  // namespace grpc_cpp_generator
    
    	int unary_methods = 0, streaming_methods = 0;
	vars['ServiceDesc'] = '_' + vars['Service'] + '_serviceDesc';
	for (int i = 0; i < service->method_count(); i++) {
		auto method = service->method(i);
		if (method->NoStreaming()) {
			vars['MethodDesc'] = vars['ServiceDesc'] + '.Method[' + as_string(unary_methods) + ']';
			unary_methods++;
		} else {
			vars['MethodDesc'] = vars['ServiceDesc'] + '.Streams[' + as_string(streaming_methods) + ']';
			streaming_methods++;
		}
		GenerateClientMethod(method.get(), printer, vars);
	}
    
      std::string SayHello(const std::string &name) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset = CreateHelloRequest(mb, name_offset);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<HelloRequest>();
    }
    
    
    {}  // namespace NamespaceC
    
    struct TableInNestedNSBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_foo(int32_t foo) {
    fbb_.AddElement<int32_t>(TableInNestedNS::VT_FOO, foo, 0);
  }
  explicit TableInNestedNSBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TableInNestedNSBuilder &operator=(const TableInNestedNSBuilder &);
  flatbuffers::Offset<TableInNestedNS> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TableInNestedNS>(end);
    return o;
  }
};
    
    class LogMessageVoidify {
 public:
  LogMessageVoidify() {}
  // This has to be an operator with a precedence lower than << but
  // higher than ?:
  void operator&(std::ostream&) {}
};
    
    namespace flatbuffers {
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