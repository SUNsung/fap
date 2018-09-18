
        
          /// Returns true on failure.
  bool doIt(Type ty) {
    // Do the pre-order visitation.  If it returns false, we just
    // skip entering subnodes of this tree.
    switch (Walker.walkToTypePre(ty)) {
    case TypeWalker::Action::Continue:
      break;
    case TypeWalker::Action::SkipChildren:
      return false;
    case TypeWalker::Action::Stop:
      return true;
    }
    }
    
        if (info.status == serialization::Status::Valid) {
      assert(info.bytes != 0);
      if (!info.name.empty()) {
        StringRef moduleData = buf.substr(0, info.bytes);
        std::unique_ptr<llvm::MemoryBuffer> bitstream(
          llvm::MemoryBuffer::getMemBuffer(moduleData, info.name, false));
    }
    }
    
    void DiverseStackBase::pushNewStorageSlow(std::size_t needed) {
  bool wasInline = isAllocatedInline();
    }
    
    
    {} // end anonymous namespace
    
    static SourceLoc findEndOfLine(SourceManager &SM, SourceLoc loc,
                               unsigned bufferID) {
  CharSourceRange entireBuffer = SM.getRangeForBuffer(bufferID);
  CharSourceRange rangeFromLoc{SM, loc, entireBuffer.getEnd()};
  StringRef textFromLoc = SM.extractText(rangeFromLoc);
  size_t newlineOffset = textFromLoc.find_first_of({'\r\n\0', 3});
  if (newlineOffset == StringRef::npos)
    return entireBuffer.getEnd();
  return loc.getAdvancedLoc(newlineOffset);
}
    
    
    {        Clear();
    }
    
    #pragma once
    
        Variable::Variable(const NDShape& shape, VariableKind varType, CNTK::DataType dataType, const NDArrayViewPtr& value, bool needsGradient, const std::vector<Axis>& dynamicAxes, bool isSparse, const std::wstring& name, const std::wstring& uid)
        : m_dataFields(MakeSharedObject<VariableFields>(shape, varType, dataType, std::weak_ptr<Function>(), value, needsGradient, dynamicAxes, isSparse, name, uid))
    {}
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
        EditDistanceErrorNode(const ScriptableObjects::IConfigRecordPtr configp)
        : EditDistanceErrorNode(configp->Get(L'deviceId'), L'<placeholder>', configp->Get(L'subPen'), configp->Get(L'delPen'), configp->Get(L'insPen'), configp->Get(L'squashInputs'), {})
    {
        AttachInputsFromConfig(configp, this->GetExpectedNumInputs());
        m_tokensToIgnore = ScriptableObjects::ConfigArray::FlattenedVectorFrom<size_t>(configp->Get(L'tokensToIgnore'));
    }
    
        std::unique_ptr<DHTPeerAnnounceStorage> peerAnnounceStorage;
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node)
{
  return addNode(node, false);
}
    
      DHTTaskQueue* taskQueue_;
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createBucketRefreshTask()
{
  auto task = std::make_shared<DHTBucketRefreshTask>();
  setCommonProperty(task);
  return task;
}
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2

    
    DHTUnknownMessage::~DHTUnknownMessage() { delete[] data_; }
    
    bool DNSCache::CacheEntry::operator<(const CacheEntry& e) const
{
  int r = hostname_.compare(e.hostname_);
  if (r != 0) {
    return r < 0;
  }
  return port_ < e.port_;
}