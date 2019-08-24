
        
        grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
     private:
  template <typename T>
  struct ServerThread {
    explicit ServerThread(const grpc::string& type,
                          const grpc::string& server_host, T* service)
        : type_(type), service_(service) {
      grpc::internal::Mutex mu;
      // We need to acquire the lock here in order to prevent the notify_one
      // by ServerThread::Start from firing before the wait below is hit.
      grpc::internal::MutexLock lock(&mu);
      port_ = grpc_pick_unused_port_or_die();
      gpr_log(GPR_INFO, 'starting %s server on port %d', type_.c_str(), port_);
      grpc::internal::CondVar cond;
      thread_.reset(new std::thread(
          std::bind(&ServerThread::Start, this, server_host, &mu, &cond)));
      cond.Wait(&mu);
      gpr_log(GPR_INFO, '%s server startup complete', type_.c_str());
    }
    }
    
    namespace {
    }
    
      cli_stream->Write(send_request_, tag(3));
  srv_stream.Read(&recv_request_buffer_, tag(4));
  Verifier().Expect(3, true).Expect(4, true).Verify(cq_.get());
  ParseFromByteBuffer(&recv_request_buffer_, &recv_request_);
  EXPECT_EQ(send_request_.message(), recv_request_.message());
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key; iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n', read + 1,
            size / 1048576.0, Size(Key(n), Key(kCount)) / 1048576.0);
    if (size <= initial_size / 10) {
      break;
    }
  }
    
      // Returns an estimate of the number of bytes of data in use by this
  // data structure. It is safe to call when MemTable is being modified.
  size_t ApproximateMemoryUsage();
    
    #include <string>
    
    
    {  struct Rep;
  Rep* rep_;
};
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    #endif  // STORAGE_LEVELDB_UTIL_HISTOGRAM_H_

    
    void BlockBuilder::Reset() {
  buffer_.clear();
  restarts_.clear();
  restarts_.push_back(0);  // First restart point is at offset 0
  counter_ = 0;
  finished_ = false;
  last_key_.clear();
}
    
        // Finish and check for builder errors
    s = builder->Finish();
    if (s.ok()) {
      meta->file_size = builder->FileSize();
      assert(meta->file_size > 0);
    }
    delete builder;
    
    
    {}  // namespace leveldb
    
      // Write 2 nodes
  EXPECT_EQ(sizeof(RegTree::Node),
            3 * sizeof(int) + 1 * sizeof(unsigned) + sizeof(float));
  int parent = -1;
  int cleft = 1;
  int cright = -1;
  unsigned sindex = 5;
  float split_or_weight = 0.5;
  fo->Write(&parent, sizeof(int));
  fo->Write(&cleft, sizeof(int));
  fo->Write(&cright, sizeof(int));
  fo->Write(&sindex, sizeof(unsigned));
  fo->Write(&split_or_weight, sizeof(float));
  parent = 0;
  cleft = -1;
  cright = -1;
  sindex = 2;
  split_or_weight = 0.1;
  fo->Write(&parent, sizeof(int));
  fo->Write(&cleft, sizeof(int));
  fo->Write(&cright, sizeof(int));
  fo->Write(&sindex, sizeof(unsigned));
  fo->Write(&split_or_weight, sizeof(float));
    
    namespace xgboost {
namespace common {
    }
    }
    
    template <typename T>
struct TestTransformRange {
  void XGBOOST_DEVICE operator()(size_t _idx,
                                 Span<bst_float> _out, Span<const bst_float> _in) {
    _out[_idx] = _in[_idx];
  }
};
    
      devices = GPUSet::Range(2, 8);  // 2 ~ 10
  EXPECT_EQ(devices.Size(), 8);
  EXPECT_ANY_THROW(devices.DeviceId(8));
    
    template <typename T>
HostDeviceVector<T>::HostDeviceVector(size_t size, T v, const GPUDistribution &)
  : impl_(nullptr) {
  impl_ = new HostDeviceVectorImpl<T>(size, v);
}
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
      bool isMetadataValid() const override;
    
        if (chunk_size <= 0) break;
    
    QString nameOf(unsigned alg);
    
    ValueEditor::EmbeddedFormattersManager::EmbeddedFormattersManager(
    QSharedPointer<QPython> p)
    : m_python(p) {
  QObject::connect(m_python.data(), &QPython::error, this,
                   &EmbeddedFormattersManager::error);
}
    
      auto result = readJsonFromExternalProcess(cmd, data.toBase64(),
                                            formatter['cwd'].toString());
    
      if (!p) return QWeakPointer<TreeItem>();