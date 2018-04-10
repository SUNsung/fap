
        
        
    {  while (!got_sigint && !worker.Done()) {
    gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_REALTIME),
                                 gpr_time_from_seconds(5, GPR_TIMESPAN)));
  }
}
    
    #include 'test/cpp/qps/usage_timer.h'
    
    // TODO: make this independent of ElemType. Then these repeated dynamic_pointer_casts will go away
// TODO: why is this a class, and not just a procedure? Then we wouldn't have to include the massive header
template <class ElemType>
class SGD : public SGDParams
{
protected:
    typedef shared_ptr<ComputationNode<ElemType>> ComputationNodePtr;
    typedef ClassBasedCrossEntropyWithSoftmaxNode<ElemType>* ClassBasedCrossEntropyWithSoftmaxNodePtr;
    }
    
    
    {        (*p_model).reset(new Model(std::move(modelProto)));
        if ((*p_model)->MainGraph() != nullptr)
        {
            RETURN_IF_ERROR((*p_model)->MainGraph()->Resolve());
        }
        return Status::OK();
    }
    
    #include <vector>
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Gather)
        .Description('Given data tensor of rank r >= 1, and indices tensor of rank q, gather '
            'entries of the outer-most dimension of data indexed by indices, and concatenate '
            'them in an output tensor of rank q + (r - 1). '
            'Example 1: data = [ [1.0, 1.2], [2.3, 3.4], [4.5, 5.7], ] '
            '           indices = [ [0, 1], [1, 2], ] '
            '           output = [ [ [1.0, 1.2], [2.3, 3.4], ], [ [2.3, 3.4], [4.5, 5.7], ], ]'
            'Example 2: data = [ [1.0, 1.2, 1.9], [2.3, 3.4, 3.9], [4.5, 5.7, 5.9], ] '
            '           indices = [0, 2], ] axis = 1, '
            '           output = [ [ [1.0, 1.9], [2.3, 3.9], [4.5, 5.9], ], ]')
        .Input('data', 'Tensor of rank r >= 1.', 'T')
        .Input('indices', 'Tensor of int32/int64 indices, of any rank q.', 'Tind')
        .Output('output', 'Tensor of rank q + (r - 1).', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input types to float tensors.')
        .TypeConstraint('Tind', { 'tensor(int32)', 'tensor(int64)' },
            'Constrain indices types to float tensors.')
        .Attr('axis',
            'Which axis to gather on, defaults to 0. Negative value means counting dimensions '
            'from the back. Accepted range in [-r, r-1]',
            AttrType::AttributeProto_AttributeType_INT, int64_t(0));
    
        void SetGammarCalculationParam(const double& amf, const double& lmf, const double& wp, const double& bMMIfactor, const bool& sMBR)
    {
        msra::lattices::SeqGammarCalParam param;
        param.amf = amf;
        param.lmf = lmf;
        param.wp = wp;
        param.bMMIfactor = bMMIfactor;
        param.sMBRmode = sMBR;
        m_gammaCalculator.SetGammarCalculationParams(param);
    }
    
            if (!IsInRam())
        {
            LogicError('Cannot page-out data that is not memory.');
        }
    
        // Let's check that there is no outstanding copies.
    // Wait on all events if there are any pending copy operations in flight.
    if (m_dataTransferers[m_currentDataTransferIndex])
        m_dataTransferers[m_currentDataTransferIndex]->WaitForCopyCPUToGPU();
    
        FunctionPtr CosineDistance(const Variable& leftOperand, const Variable& rightOperand, const std::wstring& name)
    {
        return BinaryOp(PrimitiveOpType::CosDistance, leftOperand, rightOperand, Dictionary(), name);
    }
    
        // Note: the necessary update of m_allSEQNodes is hanlded by the InvalidateCompiledNetwork() call above
    
      /*
   * insert --
   *
   *   Returns a pair with iterator to the element at r.first and bool success.
   *   Retrieve the index with ret.first.getIndex().
   *
   *   Fails on key collision (does not overwrite) or if map becomes
   *   full, at which point no element is inserted, iterator is set to end(),
   *   and success is set false.  On collisions, success is set false, but the
   *   iterator is set to the existing entry.
   */
  std::pair<iterator,bool> insert(const value_type& r) {
    return emplace(r.first, r.second);
  }
  std::pair<iterator,bool> insert(value_type&& r) {
    return emplace(r.first, std::move(r.second));
  }
    
    void benchmarkResultsFromDynamic(
    const dynamic& d,
    vector<detail::BenchmarkResult>& results) {
  for (auto& datum : d) {
    results.push_back(
        {datum[0].asString(), datum[1].asString(), datum[2].asDouble()});
  }
}
    
      T* get() {
    return &inner_;
  }
    
        // Append, Flush, Append, Get
    slists.Append('a', 'x');
    slists.Append('b', 'y');
    db->Flush(rocksdb::FlushOptions());
    slists.Append('a', 't');
    slists.Append('a', 'r');
    slists.Append('b', '2');
    
     public: // Insert/Update
  /// Insert value before/after pivot in (list: key). Return the length.
  /// May throw RedisListException
  int InsertBefore(const std::string& key, const std::string& pivot,
                   const std::string& value);
  int InsertAfter(const std::string& key, const std::string& pivot,
                  const std::string& value);
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
      virtual size_t GetSimCapacity() const override {
    return key_only_cache_->GetCapacity();
  }
  virtual size_t GetSimUsage() const override {
    return key_only_cache_->GetUsage();
  }
  virtual void SetSimCapacity(size_t capacity) override {
    key_only_cache_->SetCapacity(capacity);
  }
    
    ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
  return ::grpc::internal::ClientReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), rpcmethod_Retrieve_, context, request);
}
    
    
    {    flatbuffers::grpc::Message<Monster> response;
    auto stream = stub->Retrieve(&context, request);
    while (stream->Read(&response)) {
      auto resp = response.GetRoot()->name();
      std::cout << 'RPC Streaming response: ' << resp->str() << std::endl;
    }
  }
    
      auto name = builder.CreateString('MyMonster');
    
    namespace jsons {
    }
    
    FileExistsFunction SetFileExistsFunction(
    FileExistsFunction file_exists_function) {
  FileExistsFunction previous_function = g_file_exists_function;
  g_file_exists_function =
      file_exists_function ? file_exists_function : FileExistsRaw;
  return previous_function;
}