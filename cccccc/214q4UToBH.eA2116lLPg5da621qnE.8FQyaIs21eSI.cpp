
        
        
    {  if (word->word->flag(W_DONT_CHOP)) {
    saved_enable_assoc = wordrec_enable_assoc;
    saved_chop_enable = chop_enable;
    wordrec_enable_assoc.set_value(0);
    chop_enable.set_value(0);
  }
  if (pass_n == 1)
    set_pass1();
  else
    set_pass2();
  recog_word(word);
  if (word->best_choice == NULL)
    word->SetupFake(*word->uch_set);
  if (word->word->flag(W_DONT_CHOP)) {
    wordrec_enable_assoc.set_value(saved_enable_assoc);
    chop_enable.set_value(saved_chop_enable);
  }
}
    
      // Backwards compatible fit returning a gradient and constant.
  // Deprecated. Prefer Fit(ICOORD*, ICOORD*) where possible, but use this
  // function in preference to the LMS class.
  double Fit(float* m, float* c);
    
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
    
    
    {  auto const ret = make_map_array(
    s_sec, (int)tp.tv_sec,
    s_usec, (int)tp.tv_usec,
    s_minuteswest, (int)(-offset->offset / 60),
    s_dsttime, (int)offset->is_dst
  );
  timelib_time_offset_dtor(offset);
  return ret;
}
    
    namespace {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {
    {}}

    
    SSATmp* implInstanceOfD(IRGS& env, SSATmp* src, const StringData* className);
    
      if (!variantToGMPData('gmp_pow', gmpData, data)) {
    return false;
  }
    
    // MaxSizeIndex corresponds to HashTableCommon::MaxSize - 1 (which is the same
// as MixedArray::MaxSize - 1) because HashTableCommon::MaxSize - 1 exactly fits
// into a MM size class, PackedArray::capacity is a function of MM size class,
// and we can't allow a capacity > MaxSize since most operations only check
// that size <= capacity stays true (and don't explicitly check size <= MaxSize)
static_assert(
  kSizeIndex2PackedArrayCapacity[PackedArray::MaxSizeIndex]
    == array::HashTableCommon::MaxSize - 1,
  'MaxSizeIndex must be the largest possible size class index for PackedArrays'
);
    
    String PageletServer::TaskResult(const Resource& task, Array &headers, int &code,
                                 int64_t timeout_ms) {
  auto ptask = cast<PageletTask>(task);
  return ptask->getJob()->getResults(headers, code, timeout_ms);
}
    
    
    {private:
  int m_timeout;
};
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
    
    {  /* We cannot open it, but we were able to stat it. */
  if (access(file, W_OK) == 0)
    if (file_printf(ms, 'writable, ') == -1)
      return -1;
  if (access(file, X_OK) == 0)
    if (file_printf(ms, 'executable, ') == -1)
      return -1;
  if (S_ISREG(md))
    if (file_printf(ms, 'regular file, ') == -1)
      return -1;
  if (file_printf(ms, 'no read permission') == -1)
    return -1;
  return 0;
}
    
    
    {  String ttyname(ttyname_maxlen, ReserveString);
  char *p = ttyname.mutableData();
  if (ttyname_r(php_posix_get_fd(fd), p, ttyname_maxlen)) {
    return false;
  }
  ttyname.setSize(strlen(p));
  return ttyname;
}
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
        void TrainOneMiniEpochAndReloadModel(ComputationNetworkPtr net,
                                         ComputationNetworkPtr refNet,
                                         const ComputationNodeBasePtr& refNode, const int epochNumber,
                                         const size_t epochSize, IDataReader* trainSetDataReader,
                                         const double learnRatePerSample,
                                         const size_t minibatchSize,
                                         const std::vector<ComputationNodeBasePtr>& featureNodes,
                                         const std::vector<ComputationNodeBasePtr>& labelNodes,
                                         const std::vector<ComputationNodeBasePtr>& criterionNodes,
                                         const std::vector<ComputationNodeBasePtr>& evaluationNodes,
                                         StreamMinibatchInputs* inputMatrices,
                                         const std::list<ComputationNodeBasePtr>& learnableNodes,
                                         std::list<Matrix<ElemType>>& smoothedGradients, std::vector<double> smoothedCounts,
                                         /*out*/ EpochCriterion& epochCriterion,
                                         /*out*/ std::vector<EpochCriterion>& epochEvalErrors,
                                         std::string prefixMsg,
                                         const size_t maxNumOfSamples);
    
        // relink the input of those nodes whose child is oldNode to point to the new one instead
    for (auto nodeIter = m_nameToNodeMap.begin(); nodeIter != m_nameToNodeMap.end(); nodeIter++)
    {
        ComputationNodeBasePtr node = nodeIter->second;
        for (int i = 0; i < node->GetNumInputs(); i++)
            if (node->GetInputs()[i] == oldNode)
                node->SetInput(i, newNode);
    }
    
    #include <vector>
    
    void OutputImageComponent::CopyFromJpegComponent(const JPEGComponent& comp,
                                                 int factor_x, int factor_y,
                                                 const int* quant) {
  Reset(factor_x, factor_y);
  assert(width_in_blocks_ <= comp.width_in_blocks);
  assert(height_in_blocks_ <= comp.height_in_blocks);
  const size_t src_row_size = comp.width_in_blocks * kDCTBlockSize;
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    const coeff_t* src_coeffs = &comp.coeffs[block_y * src_row_size];
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      for (int i = 0; i < kDCTBlockSize; ++i) {
        block[i] = src_coeffs[i] * quant[i];
      }
      SetCoeffBlock(block_x, block_y, block);
      src_coeffs += kDCTBlockSize;
    }
  }
  memcpy(quant_, quant, sizeof(quant_));
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    void AddApp0Data(JPEGData* jpg) {
  const unsigned char kApp0Data[] = {
      0xe0, 0x00, 0x10,              // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
  };
  jpg->app_data.push_back(
      std::string(reinterpret_cast<const char*>(kApp0Data),
                                 sizeof(kApp0Data)));
}
    
    
    {  return p;
}
    
      /**
   * Construct an ImmediateFileWriter that writes to the specified File object.
   */
  explicit ImmediateFileWriter(folly::File&& file);
    
    LogCategoryConfig::LogCategoryConfig(LogLevel l, bool inherit)
    : level{l}, inheritParentLevel{inherit} {}
    
    void LogConfig::update(const LogConfig& other) {
  // Update handlerConfigs_ with all of the entries from the other LogConfig.
  // Any entries already present in our handlerConfigs_ are replaced wholesale.
  for (const auto& entry : other.handlerConfigs_) {
    if (entry.second.type.hasValue()) {
      // This is a complete LogHandlerConfig that should be inserted
      // or completely replace an existing handler config with this name.
      auto result = handlerConfigs_.insert(entry);
      if (!result.second) {
        result.first->second = entry.second;
      }
    } else {
      // This config is updating an existing LogHandlerConfig rather than
      // completely replacing it.
      auto iter = handlerConfigs_.find(entry.first);
      if (iter == handlerConfigs_.end()) {
        throw std::invalid_argument(to<std::string>(
            'cannot update configuration for unknown log handler \'',
            entry.first,
            '\''));
      }
      iter->second.update(entry.second);
    }
  }
    }
    
    void AbstractAuthResolver::setDefaultCred(std::string user,
                                          std::string password)
{
  defaultUser_ = std::move(user);
  defaultPassword_ = std::move(password);
}
    
    void AbstractBtMessage::setBtRequestFactory(BtRequestFactory* factory)
{
  requestFactory_ = factory;
}
    
      const char* name_;
    
      // Returns proxy method for given protocol. Either V_GET or V_TUNNEL
  // is returned.  For HTTPS, always returns V_TUNNEL.
  const std::string& resolveProxyMethod(const std::string& protocol) const;
    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
    void AbstractOptionHandler::hide() { updateFlags(FLAG_HIDDEN, true); }
    
      const std::shared_ptr<Request>& getProxyRequest() const
  {
    return proxyRequest_;
  }
    
      virtual bool execute() CXX11_OVERRIDE;
    
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
    
    #include 'common.h'
    
      virtual ~AppleTLSContext();
    
    AuthConfig::AuthConfig(std::string user, std::string password)
    : user_(std::move(user)), password_(std::move(password))
{
}