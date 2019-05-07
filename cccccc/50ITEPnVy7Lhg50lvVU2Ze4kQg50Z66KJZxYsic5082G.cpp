
        
        
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    
    {  if (has('dist')) {
#if MXNET_USE_DIST_KVSTORE
    kv = new kvstore::KVStoreDist(use_device_comm);
    if (!has('_async') && kv->IsWorkerNode() && kv->get_rank() == 0) {
      // configure the server to be the sync mode
      kv->SendCommandToServers(static_cast<int>(kvstore::CommandType::kSyncMode), '');
    }
#else
    LOG(FATAL) << 'compile with USE_DIST_KVSTORE=1 to use ' << tname;
    return nullptr;
#endif  // MXNET_USE_DIST_KVSTORE
  } else {
    if (has('nccl')) {
#if MXNET_USE_NCCL
      kv = new kvstore::KVStoreNCCL();
#else
      LOG(FATAL) << 'compile with USE_NCCL=1 to use ' << tname;
      return nullptr;
#endif
    } else {
      kv =  new kvstore::KVStoreLocal(use_device_comm);
    }
  }
  kv->type_ = tname;
  return kv;
}
    
    namespace mxnet {
    }
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    CHECK_EQ(out_grad.size(), 1U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grad = out_grad[st::kOut].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> ddata = in_grad[st::kData].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(grad.size(0), grad.size(2), grad.size(3), 2);
    Tensor<gpu, 3, DType> dloc = in_grad[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                    .get_with_shape<gpu, 4, DType>(grid_shape, s);
    // do not use out_grad[st::kGridSrc], because dgrid is a intermediate tensor, and not include in
    // DeclareBackwardDependency, another, we can we reuse grid for inplace operator
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             ddata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid.dptr_,
                                             &beta_dgrid,
                                             grid.dptr_));
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorBackward(s->dnn_handle_,
                                                     st_desc_,
                                                     grid.dptr_,
                                                     dloc.dptr_/*out*/));
    }
  }
    
    
    {
    {NNVM_REGISTER_OP(IdentityAttachKLSparseReg)
.set_attr<nnvm::FSetInputVarAttrOnCompose>('FSetInputVarAttrOnCompose',
    [](const nnvm::NodeAttrs& attrs, nnvm::NodePtr var, const int index) {
      if (var->attrs.dict.find('__init__') != var->attrs.dict.end()) return;
      if (index == 1) {
        var->attrs.dict['__init__'] = '[\'zero\', {}]';
      }
    });
}  // namespace op
}  // namespace mxnet
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
    void DataReader::InitProposals(StreamMinibatchInputs* matrices)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->InitProposals(matrices);
}
    
    
    {
    {            if (map.size() > RAND_MAX * (size_t) RAND_MAX)
                RuntimeError('RandomOrdering: too large training set: need to change to different random generator!');
            srand((unsigned int) seed);
            size_t retries = 0;
            foreach_index (t, map)
            {
                for (int tries = 0; tries < 5; tries++)
                {
                    // swap current pos with a random position
                    // Random positions are limited to t+randomizationrange.
                    // This ensures some locality suitable for paging with a sliding window.
                    const size_t tbegin = max((size_t) t, randomizationrange / 2) - randomizationrange / 2; // range of window  --TODO: use bounds() function above
                    const size_t tend = min(t + randomizationrange / 2, map.size());
                    assert(tend >= tbegin);                  // (guard against potential numeric-wraparound bug)
                    const size_t trand = rand(tbegin, tend); // random number within windows
                    assert((size_t) t <= trand + randomizationrange / 2 && trand < (size_t) t + randomizationrange / 2);
                    // if range condition is fulfilled then swap
                    if (trand <= map[t] + randomizationrange / 2 && map[t] < trand + randomizationrange / 2 && (size_t) t <= map[trand] + randomizationrange / 2 && map[trand] < (size_t) t + randomizationrange / 2)
                    {
                        std::swap(map[t], map[trand]);
                        break;
                    }
                    // but don't multi-swap stuff out of its range (for swapping positions that have been swapped before)
                    // instead, try again with a different random number
                    retries++;
                }
            }
            fprintf(stderr, 'RandomOrdering: %lu retries for %lu elements (%.1f%%) to ensure window condition\n', (unsigned long) retries, (unsigned long) map.size(), 100.0 * retries / map.size());
            // ensure the window condition
            foreach_index (t, map)
                assert((size_t) t <= map[t] + randomizationrange / 2 && map[t] < (size_t) t + randomizationrange / 2);
#if 0 // and a live check since I don't trust myself here yet
            foreach_index (t, map) if (!((size_t) t <= map[t] + randomizationrange/2 && map[t] < (size_t) t + randomizationrange/2))
            {
                fprintf (stderr, 'RandomOrdering: windowing condition violated %d -> %d\n', t, map[t]);
                LogicError('RandomOrdering: windowing condition violated');
            }
#endif
#if 0 // test whether it is indeed a unique complete sequence
            auto map2 = map;
            ::sort (map2.begin(), map2.end());
            foreach_index (t, map2) assert (map2[t] == (size_t) t);
#endif
            fprintf(stderr, 'RandomOrdering: recached sequence for seed %d: %d, %d, ...\n', (int) seed, (int) map[0], (int) map[1]);
            currentseed = seed;
        }
        return map; // caller can now access it through operator[]
    }
    
    #include <string>
    
            if (
            // Test condition 1.
            (dimsA.size() == 3 && dimsA[0] == 1 && dimsA[1] == 1) &&
            // Test condition 2.
            (dimsB.size() == 2 && dimsB[1] == 1) &&
            (dimsC.size() == 2 && dimsC[1] == 1) &&
            // Test condition 3. and condition 4.
            (dimsB[0] == dimsC[0] && dimsB[0] == dimsA[2])
            )
        {
            // for error messages
            string dimsBstring = string(Input(1)->GetSampleLayout());
            string dimsCstring = string(Input(2)->GetSampleLayout());
    }
    
    template <class ElemType>
EpochAccumulatorNode<ElemType>::EpochAccumulatorNode(DEVICEID_TYPE deviceId, const wstring& name)
    : Base(deviceId, name), m_numSamples(0)
{
    m_accumulator = make_shared<Matrix<ElemType>>(deviceId);
}
    
    
    {
    {}  // namespace internal
}  // namespace v8
    
    #include 'src/heap/heap.h'
    
    #ifndef V8_IA32_ASSEMBLER_IA32_INL_H_
#define V8_IA32_ASSEMBLER_IA32_INL_H_
    
      // Check if the {lhs} is a Smi or a HeapObject.
  Label if_lhsissmi(this);
  // If rhs is known to be an Smi we want to fast path Smi operation. This is
  // for AddSmi operation. For the normal Add operation, we want to fast path
  // both Smi and Number operations, so this path should not be marked as
  // Deferred.
  Label if_lhsisnotsmi(this,
                       rhs_is_smi ? Label::kDeferred : Label::kNonDeferred);
  Branch(TaggedIsNotSmi(lhs), &if_lhsisnotsmi, &if_lhsissmi);