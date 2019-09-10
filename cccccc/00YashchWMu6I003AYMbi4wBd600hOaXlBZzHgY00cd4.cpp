
        
        // Author: kenton@google.com (Kenton Varda)
    
    void MapLiteTestUtil::ExpectArenaMapFieldsSet(
    const unittest::TestArenaMapLite& message) {
  MapTestUtilImpl::ExpectArenaMapFieldsSet<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_BAZ_LITE>(
      message);
}
    
    TEST(StatusOr, TestPointerCopyCtorStatusOk) {
  const int kI = 0;
  StatusOr<const int*> original(&kI);
  StatusOr<const int*> copy(original);
  EXPECT_EQ(original.status(), copy.status());
  EXPECT_EQ(original.ValueOrDie(), copy.ValueOrDie());
}
    
    int main(int argc, char *argv[]) {
  if (argc % 2 == 0 || argc == 1) {
    std::cerr << 'Usage: [input_files] [output_file_names] where ' <<
        'input_files are one to one mapping to output_file_names.' <<
        std::endl;
    return 1;
  }
    }
    
        std::unique_ptr<google::protobuf::io::ZeroCopyOutputStream> output(
        context->Open(basename + '.proto'));
    string content = new_pool_.BuildFile(new_file)->DebugString();
    Printer printer(output.get(), '$');
    printer.WriteRaw(content.c_str(), content.size());
    
    
    {  const std::multimap<grpc::string, grpc::string> additional_metadata_;
};
    
    
    {  thr.join();
}
    
    #include <errno.h>
#include <fcntl.h>
#include <string.h>
    
      void SetUpServer(bool register_sync_test_service, bool add_async_cq,
                   bool explicit_health_service,
                   std::unique_ptr<HealthCheckServiceInterface> service) {
    int port = grpc_pick_unused_port_or_die();
    server_address_ << 'localhost:' << port;
    }
    
    int maybe_assert_non_blocking_poll(struct pollfd* pfds, nfds_t nfds,
                                   int timeout) {
  if (gpr_tls_get(&g_is_nonblocking_test)) {
    GPR_ASSERT(timeout == 0);
  }
  return poll(pfds, nfds, timeout);
}
    
    
    {    const protobuf::Descriptor* desc = desc_pool_->FindMessageTypeByName(type);
    const protobuf::Descriptor* ref_desc =
        ref_desc_pool_->FindMessageTypeByName(type);
    EXPECT_TRUE(desc != nullptr);
    EXPECT_TRUE(ref_desc != nullptr);
    EXPECT_EQ(desc->DebugString(), ref_desc->DebugString());
  }
    
    
    {  Status Echo(ServerContext* context, const EchoRequest* request,
              EchoResponse* response) override {
    if (request->message() == kServerErrorMessage) {
      return Status(StatusCode::UNKNOWN, 'Server error requested');
    }
    if (request->message() == kClientErrorMessage) {
      return Status(StatusCode::FAILED_PRECONDITION, 'Client error requested');
    }
    response->set_message(request->message());
    ::grpc::load_reporter::experimental::AddLoadReportingCost(
        context, kMetricName, kMetricValue);
    return Status::OK;
  }
};
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
      Open();
  std::string new_manifest = ManifestFileName();
  ASSERT_NE(old_manifest, new_manifest);
  ASSERT_GT(10000, FileSize(new_manifest));
  ASSERT_EQ('bar', Get('foo'));
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    TEST(WriteBatchTest, Multiple) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  batch.Put(Slice('baz'), Slice('boo'));
  WriteBatchInternal::SetSequence(&batch, 100);
  ASSERT_EQ(100, WriteBatchInternal::Sequence(&batch));
  ASSERT_EQ(3, WriteBatchInternal::Count(&batch));
  ASSERT_EQ(
      'Put(baz, boo)@102'
      'Delete(box)@101'
      'Put(foo, bar)@100',
      PrintContents(&batch));
}
    
    #include 'leveldb/export.h'
    
    // Thinly wraps std::mutex.
class LOCKABLE Mutex {
 public:
  Mutex() = default;
  ~Mutex() = default;
    }
    
    Iterator* Table::NewIterator(const ReadOptions& options) const {
  return NewTwoLevelIterator(
      rep_->index_block->NewIterator(rep_->options.comparator),
      &Table::BlockReader, const_cast<Table*>(this), options);
}
    
    
    {  Slice input(s);
  Slice v;
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ('', v.ToString());
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ('foo', v.ToString());
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ('bar', v.ToString());
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ(std::string(200, 'x'), v.ToString());
  ASSERT_EQ('', input.ToString());
}