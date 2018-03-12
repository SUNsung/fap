
        
        
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    
    {}  // namespace caffe
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
        Mat black_comp, white_comp;
    for(int i = 0; i < ncorners; i++)
    {
        int channels = 0;
        Rect roi(cvRound(corners[i].x - region_size.width), cvRound(corners[i].y - region_size.height),
            region_size.width*2 + 1, region_size.height*2 + 1);
        Mat img_roi = img(roi);
        calcHist(&img_roi, 1, &channels, Mat(), hist, 1, &nbins, &_ranges);
    }
    
    // Helper prints the given set of blob choices.
static void PrintPath(int length, const BLOB_CHOICE** blob_choices,
                      const UNICHARSET& unicharset,
                      const char *label, FILE *output_file) {
  float rating = 0.0f;
  float certainty = 0.0f;
  for (int i = 0; i < length; ++i) {
    const BLOB_CHOICE* blob_choice = blob_choices[i];
    fprintf(output_file, '%s',
           unicharset.id_to_unichar(blob_choice->unichar_id()));
    rating += blob_choice->rating();
    if (certainty > blob_choice->certainty())
      certainty = blob_choice->certainty();
  }
  fprintf(output_file, '\t%s\t%.4f\t%.4f\n',
         label, rating, certainty);
}
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(inT64 cost, inT32 steps, const DPPoint* prev,
                             inT32 n, inT32 sig_x, inT64 sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
      ParagraphModel()
      : justification_(tesseract::JUSTIFICATION_UNKNOWN),
         margin_(0),
         first_indent_(0),
         body_indent_(0),
         tolerance_(0) { }
    
        void plot_baseline(                  //draw the baseline
                       ScrollView* window,    //window to draw in
                       ScrollView::Color colour) {  //colour to draw
                                 //draw it
      baseline.plot (window, colour);
    }
    #endif  // GRAPHICS_DISABLED
    ROW& operator= (const ROW & source);
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
    static void get_cpu_usage(unsigned long long* total_cpu_time,
                          unsigned long long* idle_cpu_time) {
#ifdef __linux__
  std::ifstream proc_stat('/proc/stat');
  proc_stat.ignore(5);
  std::string cpu_time_str;
  std::string first_line;
  std::getline(proc_stat, first_line);
  std::stringstream first_line_s(first_line);
  for (int i = 0; i < 10; ++i) {
    std::getline(first_line_s, cpu_time_str, ' ');
    *total_cpu_time += std::stol(cpu_time_str);
    if (i == 3) {
      *idle_cpu_time = std::stol(cpu_time_str);
    }
  }
#else
  gpr_log(GPR_INFO, 'get_cpu_usage(): Non-linux platform is not supported.');
#endif
}
    
    
    {  // We can increment past capacity, but we'll clean up after ourselves.
  auto p = pending_.fetch_add(1, std::memory_order_acq_rel);
  if (p >= capacity_) {
    decrementPending();
    throw std::range_error('AsyncIO: too many pending requests');
  }
  iocb* cb = &op->iocb_;
  cb->data = nullptr; // unused
  if (pollFd_ != -1) {
    io_set_eventfd(cb, pollFd_);
  }
  int rc = io_submit(ctx_, 1, &cb);
  if (rc < 0) {
    decrementPending();
    throwSystemErrorExplicit(-rc, 'AsyncIO: io_submit failed');
  }
  submitted_++;
  DCHECK_EQ(rc, 1);
  op->start();
}
    
    
    { private:
  fs::path path_;
};
    
      /**
   * Set the maximum buffer size for this AsyncFileWriter, in bytes.
   *
   * This controls the upper bound on how much unwritten data will be buffered
   * in memory.  If messages are being logged faster than they can be written
   * to output file, new messages will be discarded if they would cause the
   * amount of buffered data to exceed this limit.
   */
  void setMaxBufferSize(size_t size);
    
    namespace folly {
    }
    
    using folly::StringPiece;
    
    namespace folly {
    }
    
      auto categoryConfigs = parseCategoryConfigs(pieces[0]);
  LogConfig::HandlerConfigMap handlerConfigs;
  for (size_t n = 1; n < pieces.size(); ++n) {
    auto handlerInfo = parseHandlerConfig(pieces[n]);
    auto ret = handlerConfigs.emplace(
        handlerInfo.first, std::move(handlerInfo.second));
    if (!ret.second) {
      throw LogConfigParseError{to<string>(
          'configuration for log category \'',
          handlerInfo.first,
          '\' specified multiple times')};
    }
  }
    
    void AbstractAuthResolver::setDefaultCred(std::string user,
                                          std::string password)
{
  defaultUser_ = std::move(user);
  defaultPassword_ = std::move(password);
}
    
      void setDefaultCred(std::string user, std::string password);
    
      virtual void enableMmap() CXX11_OVERRIDE;
    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
    
    {} // namespace aria2
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
      ~AnnounceTier();