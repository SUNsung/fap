
        
        namespace mxnet {
    }
    
    #define CHECK_NEXT_TIMING
    
    void OpenMP::set_reserve_cores(int cores) {
  CHECK_GE(cores, 0);
  reserve_cores_ = cores;
#ifdef _OPENMP
  if (reserve_cores_ >= omp_thread_max_) {
    omp_set_num_threads(1);
  } else {
    omp_set_num_threads(omp_thread_max_ - reserve_cores_);
  }
#endif
}
    
    
    { private:
  /*! \brief Concurrency for thread pool */
  static constexpr std::size_t kNumWorkingThreads = 16;
  /*! \brief Maximum number of GPUs */
  static constexpr std::size_t kMaxNumGpus = 16;
  /*!\brief number of streams allocated for each GPU */
  static constexpr std::size_t kNumStreamsPerGpu = 16;
  /*!
   * \brief Streams.
   */
  std::unique_ptr<StreamManager<kMaxNumGpus, kNumStreamsPerGpu>> streams_;
  /*!
   * \brief Task queues.
   */
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue_;
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> io_task_queue_;
  /*!
   * \brief Thread pools.
   */
  std::unique_ptr<ThreadPool> thread_pool_;
  std::unique_ptr<ThreadPool> io_thread_pool_;
  /*!
   * \brief Worker.
   * \param task_queue Queue to work on.
   *
   * The method to pass to thread pool to parallelize.
   */
  void ThreadWorker(std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue,
                    const std::shared_ptr<dmlc::ManualEvent>& ready_event) {
    OprBlock* opr_block;
    ready_event->signal();
    while (task_queue->Pop(&opr_block)) {
      DoExecute(opr_block);
    }
  }
  /*!
   * \brief Execute an operation.
   * \param opr_block The operator block.
   */
  void DoExecute(OprBlock* opr_block) {
    assert(opr_block->wait.load() == 0);
    if (opr_block->ctx.dev_mask() == gpu::kDevMask) {
      #if MXNET_USE_CUDA
      CUDA_CALL(cudaSetDevice(opr_block->ctx.dev_id));
      #else   // MXNET_USE_CUDA
      LOG(FATAL) << 'Please compile with CUDA enabled';
      #endif  // MXNET_USE_CUDA
    }
    bool is_copy = (opr_block->opr->prop == FnProperty::kCopyFromGPU ||
                    opr_block->opr->prop == FnProperty::kCopyToGPU);
    auto&& rctx = is_copy
        ? streams_->GetIORunContext(opr_block->ctx)
        : streams_->GetRunContext(opr_block->ctx);
    this->ExecuteOprBlock(rctx, opr_block);
  }
  /*!
   * \brief Push the operation to the queue.
   * \param opr_block The operator block.
   */
  void DoPushToQueue(OprBlock* opr_block) {
    switch (opr_block->opr->prop) {
      case FnProperty::kCopyFromGPU:
      case FnProperty::kCopyToGPU: {
        io_task_queue_->Push(opr_block);
        break;
      }
      default: {
        task_queue_->Push(opr_block);
        break;
      }
    }
  }
};
    
      // get the shape hints
  std::string shape_hints_key = std::string(attr_name) + '_hints';
  if (ret.attrs.count(shape_hints_key)) {
    nnvm::NodeEntryMap<AttrType> shape_hints =
      ret.GetAttr<nnvm::NodeEntryMap<AttrType>>(shape_hints_key);
    for (const auto& kv : shape_hints) {
      nnvm::NodeEntry e = kv.first;
      if (idx.exist(e.node.get())) {
        rshape[idx.entry_id(kv.first)] = kv.second;
      }
    }
  }
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Liquid);
};
    
    
    {    return nullptr;
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
                // We scale z here to avoid the animation being
            // too much bigger than the screen due to perspective transform
    
    bool ShuffleTiles::initWithDuration(float duration, const Size& gridSize, unsigned int seed)
{
    if (TiledGrid3DAction::initWithDuration(duration, gridSize))
    {
        _seed = seed;
        _tilesOrder = nullptr;
        _tiles = nullptr;
    }
    }
    
    protected:
    unsigned int _cols;
    Size _winSize;
    
    void AnimationCache::parseVersion2(const ValueMap& animations)
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    }