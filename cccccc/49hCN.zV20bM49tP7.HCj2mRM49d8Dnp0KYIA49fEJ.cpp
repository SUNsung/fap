
        
          auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput + 2));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 4));
    }
    input_blob_names.push_back(GO(4));
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    static internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CLIENT_FILTER_H */

    
    // Serializes the outgoing stats context.  Field IDs are 1 byte followed by
// field data. A 1 byte version ID is always encoded first. Tags are directly
// serialized into the given grpc_slice.
size_t StatsContextSerialize(size_t max_tags_len, grpc_slice* tags);
    
    // These measure definitions should be kept in sync across opencensus
// implementations--see
// https://github.com/census-instrumentation/opencensus-java/blob/master/contrib/grpc_metrics/src/main/java/io/opencensus/contrib/grpc/metrics/RpcMeasureConstants.java.
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    namespace grpc {
    }
    
    void RegisterOpenCensusViewsForExport() {
  ClientSentMessagesPerRpcCumulative().RegisterForExport();
  ClientSentBytesPerRpcCumulative().RegisterForExport();
  ClientReceivedMessagesPerRpcCumulative().RegisterForExport();
  ClientReceivedBytesPerRpcCumulative().RegisterForExport();
  ClientRoundtripLatencyCumulative().RegisterForExport();
  ClientServerLatencyCumulative().RegisterForExport();
    }
    
        struct stat sbuf;
    if (stat(fname.c_str(), &sbuf) != 0) {
      const char* msg = strerror(errno);
      ASSERT_TRUE(false) << fname << ': ' << msg;
    }
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    
    {}  // namespace leveldb

    
    void Reader::ReportDrop(uint64_t bytes, const Status& reason) {
  if (reporter_ != nullptr &&
      end_of_buffer_offset_ - buffer_.size() - bytes >= initial_offset_) {
    reporter_->Corruption(static_cast<size_t>(bytes), reason);
  }
}
    
      // Fragment the record if necessary and emit it.  Note that if slice
  // is empty, we still want to iterate once to emit a single
  // zero-length record
  Status s;
  bool begin = true;
  do {
    const int leftover = kBlockSize - block_offset_;
    assert(leftover >= 0);
    if (leftover < kHeaderSize) {
      // Switch to a new block
      if (leftover > 0) {
        // Fill the trailer (literal below relies on kHeaderSize being 7)
        assert(kHeaderSize == 7);
        dest_->Append(Slice('\x00\x00\x00\x00\x00\x00', leftover));
      }
      block_offset_ = 0;
    }
    }
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
    int MemTable::KeyComparator::operator()(const char* aptr, const char* bptr)
    const {
  // Internal keys are encoded as length-prefixed strings.
  Slice a = GetLengthPrefixedSlice(aptr);
  Slice b = GetLengthPrefixedSlice(bptr);
  return comparator.Compare(a, b);
}
    
    
    {}  // namespace leveldb

    
    namespace HPHP { struct UnitEmitter; }
namespace HPHP { namespace HHBBC {
    }
    }
    
    String ArrayDirectory::path() {
  if (!m_it) {
    return empty_string();
  }
    }
    
    #ifndef incl_HPHP_FILE_UTIL_DEFS_H_
#define incl_HPHP_FILE_UTIL_DEFS_H_
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);