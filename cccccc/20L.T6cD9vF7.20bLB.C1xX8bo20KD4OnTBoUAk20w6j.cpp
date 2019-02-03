
        
          TemporaryFile() {
    path = tmppath();
  }
    
    ```
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    
    {    // Do it
    std::string contents;
    Status s = ReadFileToString(Env::Default(), fname, &contents);
    ASSERT_TRUE(s.ok()) << s.ToString();
    for (int i = 0; i < bytes_to_corrupt; i++) {
      contents[i + offset] ^= 0x80;
    }
    s = WriteStringToFile(Env::Default(), contents, fname);
    ASSERT_TRUE(s.ok()) << s.ToString();
  }
    
    
    {
    {    fprintf(stdout, '%-12s : %11.3f micros/op;%s%s\n',
            name.ToString().c_str(),
            seconds_ * 1e6 / done_,
            (extra.empty() ? '' : ' '),
            extra.c_str());
    if (FLAGS_histogram) {
      fprintf(stdout, 'Microseconds per op:\n%s\n', hist_.ToString().c_str());
    }
    fflush(stdout);
  }
};
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
      // Returns the physical offset of the last record returned by ReadRecord.
  //
  // Undefined before the first call to ReadRecord.
  uint64_t LastRecordOffset();
    
      // Compute the crc of the record type and the payload.
  uint32_t crc = crc32c::Extend(type_crc_[t], ptr, n);
  crc = crc32c::Mask(crc);                 // Adjust for storage
  EncodeFixed32(buf, crc);
    
      Status WriteDescriptor() {
    std::string tmp = TempFileName(dbname_, 1);
    WritableFile* file;
    Status status = env_->NewWritableFile(tmp, &file);
    if (!status.ok()) {
      return status;
    }
    }
    
    #if DMLC_ENABLE_STD_THREAD
/*!
 * \brief A threaded writer to write sparse batch page to sharded files.
 */
class SparsePageWriter {
 public:
  /*!
   * \brief constructor
   * \param name_shards name of shard files.
   * \param format_shards format of each shard.
   * \param extra_buffer_capacity Extra buffer capacity before block.
   */
  explicit SparsePageWriter(
      const std::vector<std::string>& name_shards,
      const std::vector<std::string>& format_shards,
      size_t extra_buffer_capacity);
  /*! \brief destructor, will close the files automatically */
  ~SparsePageWriter();
  /*!
   * \brief Push a write job to the writer.
   * This function won't block,
   * writing is done by another thread inside writer.
   * \param page The page to be written
   */
  void PushWrite(std::shared_ptr<SparsePage>&& page);
  /*!
   * \brief Allocate a page to store results.
   *  This function can block when the writer is too slow and buffer pages
   *  have not yet been recycled.
   * \param out_page Used to store the allocated pages.
   */
  void Alloc(std::shared_ptr<SparsePage>* out_page);
    }
    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    
    {
    {}  // namespace common
}  // namespace xgboost

    
    
    {  for (size_t i = 0; i < nindptr; ++i) {
    col_ptr_[i] = static_cast<size_t>(p_indptr[i]);
  }
  #pragma omp parallel for schedule(static)
  for (int64_t i = 0; i < static_cast<int64_t>(ndata); ++i) {
    indices_[i] = static_cast<unsigned>(p_indices[i]);
    data_[i] = static_cast<float>(p_data[i]);
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromCSCEx(BeginPtr(col_ptr_), BeginPtr(indices_),
                                      BeginPtr(data_), nindptr, ndata,
                                      nrow, &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    #ifndef XGBOOST_TREE_SPLIT_EVALUATOR_H_
#define XGBOOST_TREE_SPLIT_EVALUATOR_H_
    
      /*!
   * \brief feature contributions to individual predictions; the output will be a vector
   *         of length (nfeats + 1) * num_output_group * nsample, arranged in that order
   * \param dmat feature matrix
   * \param out_contribs output vector to hold the contributions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees
   * \param approximate use a faster (inconsistent) approximation of SHAP values
   * \param condition condition on the condition_feature (0=no, -1=cond off, 1=cond on).
   * \param condition_feature feature to condition on (i.e. fix) during calculations
   */
  virtual void PredictContribution(DMatrix* dmat,
                           std::vector<bst_float>* out_contribs,
                           unsigned ntree_limit = 0, bool approximate = false,
                           int condition = 0, unsigned condition_feature = 0) = 0;
    
    #include <boost/format.hpp>
#include <boost/io/detail/quoted_manip.hpp>
    
      /**
   * @brief Add a new set of results to the persistent storage.
   *
   * Given the results of the execution of a scheduled query, add the results
   * to the database using addNewResults.
   *
   * @param qd the QueryData object, which has the results of the query.
   * @param epoch the epoch associated with QueryData
   * @param counter [output] the output that holds the query execution counter.
   *
   * @return the success or failure of the operation.
   */
  Status addNewResults(QueryData qd, uint64_t epoch, uint64_t& counter) const;
    
      kToolType = ToolType::TEST;
  if (osquery::isPlatform(PlatformType::TYPE_OSX)) {
    kTestWorkingDirectory = '/private/tmp/osquery-tests';
  } else {
    kTestWorkingDirectory =
        (fs::temp_directory_path() / 'osquery-tests').string();
  }
    
    Status deserializeQueryDataJSON(const std::string& json, QueryDataSet& qd) {
  rj::Document doc;
  if (doc.Parse(json.c_str()).HasParseError()) {
    return Status(1, 'Error serializing JSON');
  }
  return deserializeQueryData(doc, qd);
}
    
    
    {  for (const auto& i : doc.GetObject()) {
    std::string name(i.name.GetString());
    if (!name.empty()) {
      if (i.value.IsString()) {
        r[name] = i.value.GetString();
      } else if (i.value.IsDouble()) {
        r[name] = i.value.GetDouble();
      } else if (i.value.IsInt64()) {
        // Cast required for linux-x86_64
        r[name] = (long long)i.value.GetInt64();
      }
    }
  }
  return Status();
}
    
    class ExtensionClient : virtual public ExtensionIf {
 public:
  ExtensionClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ExtensionClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ping(ExtensionStatus& _return);
  void send_ping();
  void recv_ping(ExtensionStatus& _return);
  void call(ExtensionResponse& _return, const std::string& registry, const std::string& item, const ExtensionPluginRequest& request);
  void send_call(const std::string& registry, const std::string& item, const ExtensionPluginRequest& request);
  void recv_call(ExtensionResponse& _return);
  void shutdown();
  void send_shutdown();
  void recv_shutdown();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};
    
    void ExtensionManagerClient::getQueryColumns(ExtensionResponse& _return, const std::string& sql)
{
  send_getQueryColumns(sql);
  recv_getQueryColumns(_return);
}
    
    
    {};
    
      auto diff_doc = doc.getObject();
  diff_doc.Swap(dr.first.doc());
  doc.add('diffResults', diff_doc);
  doc.addRef('name', 'foobar');
  doc.addRef('hostIdentifier', 'foobaz');
  doc.addRef('calendarTime', 'Mon Aug 25 12:10:57 2014');
  doc.add('unixTime', 1408993857);
  doc.add('epoch', std::size_t{0});
  doc.add('counter', std::size_t{0});