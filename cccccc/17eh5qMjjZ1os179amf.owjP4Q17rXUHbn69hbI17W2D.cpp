
        
            StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
    static int adapt(int delta, int numpoints, bool firsttime) {
  if (firsttime)
    delta = delta / damp;
  else
    delta = delta / 2;
  
  delta += delta / numpoints;
  int k = 0;
  while (delta > ((base - tmin) * tmax) / 2) {
    delta /= base - tmin;
    k += base;
  }
  return k + (((base - tmin + 1) * delta) / (delta + skew));
}
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    void OneofGenerator::GeneratePublicCasePropertyDeclaration(
    io::Printer* printer) {
  printer->Print(
      variables_,
      '$comments$'
      '@property(nonatomic, readonly) $enum_name$ $name$OneOfCase;\n'
      '\n');
}
    
    TEST(ByteSourceTest, LimitByteSource) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  LimitByteSource limit_source(&source, 6);
  EXPECT_EQ(6, limit_source.Available());
  limit_source.Skip(1);
  EXPECT_EQ(5, limit_source.Available());
    }
    
    TEST(StatusOr, TestPointerAssignmentStatusOKConverting) {
  Derived derived;
  StatusOr<Derived*> source(&derived);
  StatusOr<Base2*>   target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(static_cast<const Base2*>(source.ValueOrDie()),
            target.ValueOrDie());
}
    
    
    {}  // namespace leveldb

    
    class DBImpl;
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
    
    {  ASSERT_EQ('correct', Read());
  ASSERT_EQ('EOF', Read());
  const size_t dropped = DroppedBytes();
  ASSERT_LE(dropped, 2*kBlockSize + 100);
  ASSERT_GE(dropped, 2*kBlockSize);
}
    
    class MemTableIterator: public Iterator {
 public:
  explicit MemTableIterator(MemTable::Table* table) : iter_(table) { }
    }
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-null, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or to nullptr if no Table object
  // underlies the returned iterator.  The returned '*tableptr' object is owned
  // by the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = nullptr);
    
    #include 'db/version_set.h'
#include 'util/coding.h'
    
    #include 'db/dbformat.h'
#include 'leveldb/write_batch.h'
    
     protected:
  /*! \brief prefetcher parameters */
  PrefetcherParam param_;
  /*! \brief backend thread */
  dmlc::ThreadedIter<DataBatch> iter;
  /*! \brief internal batch loader */
  std::unique_ptr<IIterator<TBlobBatch> > loader_;
    
    template<typename xpu>
void Dequantize2BitKernelLaunch(mshadow::Stream<xpu> *s, const std::vector<mxnet::TBlob> &inputs,
                                const float threshold) {
  mxnet::op::mxnet_op::Kernel<dequantize_2bit, xpu>
  ::Launch(s,
          inputs[1].Size(),         // original size
          inputs[1].dptr<float>(),  // out array
          inputs[0].dptr<float>(),  // compressed array
          -1 *threshold,            // negative threshold
          threshold);               // positive threshold
}
    
    KVStore* KVStore::Create(const char *type_name) {
  std::string tname = type_name;
  std::transform(tname.begin(), tname.end(), tname.begin(), ::tolower);
  KVStore* kv = nullptr;
  bool use_device_comm = false;
  auto has = [tname](const std::string& pattern) {
    return tname.find(pattern) != std::string::npos;
  };
  if (has('device')) {
    use_device_comm = true;
  }
    }
    
    
    {
    {.add_argument('data', 'Symbol or Symbol[]', 'Tensor or List of Tensors, the second input '
'will be used as crop_like shape reference')
.add_arguments(CropParam::__FIELDS__())
.set_key_var_num_args('num_args');
}  // namespace op
}  // namespace mxnet

    
    
    {    Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid = in_data[bs::kGrid].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid_tmp = out_data[bs::kTmp].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
    // grid_tmp : (batch, h, w, 2)
    grid_tmp = transpose(grid, Shape4(0, 2, 3, 1));
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    CHECK_EQ(grid_tmp.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid_tmp.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    Operator* NDArrayOpProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
      /*!
   * \brief generate predictions for given feature matrix
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictBatch(DMatrix* dmat,
                            HostDeviceVector<bst_float>* out_preds,
                            unsigned ntree_limit = 0) = 0;
  /*!
   * \brief online prediction function, predict score for one instance at a time
   *  NOTE: use the batch prediction interface if possible, batch prediction is usually
   *        more efficient than online prediction
   *        This function is NOT threadsafe, make sure you only call from one thread
   *
   * \param inst the instance you want to predict
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction
   * \param root_index the root index
   * \sa Predict
   */
  virtual void PredictInstance(const SparsePage::Inst& inst,
                       std::vector<bst_float>* out_preds,
                       unsigned ntree_limit = 0,
                       unsigned root_index = 0) = 0;
  /*!
   * \brief predict the leaf index of each tree, the output will be nsample * ntree vector
   *        this is only valid in gbtree predictor
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictLeaf(DMatrix* dmat,
                           std::vector<bst_float>* out_preds,
                           unsigned ntree_limit = 0) = 0;
    
    namespace xgboost {
namespace obj {
    }
    }
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(
    const std::vector<bst_uint>& chunk_ptr) {
  raw_chunks_ = chunk_ptr;
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}
    
    
    {      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, 'extensions failed: unknown result');
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);
    
      uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionHandler> handler(new ExtensionHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }
    
      bool operator == (const InternalExtensionInfo & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(version == rhs.version))
      return false;
    if (!(sdk_version == rhs.sdk_version))
      return false;
    if (!(min_sdk_version == rhs.min_sdk_version))
      return false;
    return true;
  }
  bool operator != (const InternalExtensionInfo &rhs) const {
    return !(*this == rhs);
  }
    
    
    {
    {
    {  for (const auto& share_line : osquery::split(content, '\n')) {
    genNFSShare(share_line, results);
  }
  return results;
}
}
}

    
      // Join results..
  for (auto& entry : hw_info) {
    bool matched = false;
    for (auto& row : results) {
      auto serial = row.find('serial_number');
      if (serial == row.end()) {
        continue;
      }
    }
    }
    
    #pragma once
    
    namespace osquery {
    }
    
    #pragma once
    
    namespace rocksdb {
    }
    
      // Restore rate limiter. Used to control transfer speed during restore. If
  // this is not null, restore_rate_limit is ignored.
  // Default: nullptr
  std::shared_ptr<RateLimiter> restore_rate_limiter{nullptr};
    
      static LDBCommandExecuteResult Failed(std::string msg) {
    return LDBCommandExecuteResult(EXEC_FAILED, msg);
  }