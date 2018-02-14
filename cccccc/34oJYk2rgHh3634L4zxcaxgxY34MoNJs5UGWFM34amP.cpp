
        
        #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
      // Constructor.
  explicit buffered_stream_storage(std::size_t buffer_capacity)
    : begin_offset_(0),
      end_offset_(0),
      buffer_(buffer_capacity)
  {
  }
    
      STDMETHODIMP get_Capacity(UINT32* value)
  {
    *value = capacity_;
    return S_OK;
  }
    
    
    {  bool first = op_queue_[op_type].enqueue_operation(descriptor, op);
  io_service_.work_started();
  if (first)
  {
    ::pollfd& ev = add_pending_event_change(descriptor);
    ev.events = POLLERR | POLLHUP;
    if (op_type == read_op
        || op_queue_[read_op].has_operation(descriptor))
      ev.events |= POLLIN;
    if (op_type == write_op
        || op_queue_[write_op].has_operation(descriptor))
      ev.events |= POLLOUT;
    if (op_type == except_op
        || op_queue_[except_op].has_operation(descriptor))
      ev.events |= POLLPRI;
    interrupter_.interrupt();
  }
}
    
    
    
    
    
    
    
    
    
    
    {    CHECK_GL_ERROR_DEBUG();
}
    
    	void Step(Settings* settings)
	{
		// Drive the kinematic body.
		if (m_platform->GetType() == b2_kinematicBody)
		{
			b2Vec2 p = m_platform->GetTransform().p;
			b2Vec2 v = m_platform->GetLinearVelocity();
    }
    }
    
      // Returns an index of random unit from the corpus to mutate.
  // Hypothesis: units added to the corpus last are more likely to be
  // interesting. This function gives more weight to the more recent units.
  size_t ChooseUnitIdxToMutate(Random &Rand) {
    size_t Idx = static_cast<size_t>(CorpusDistribution(Rand.Get_mt19937()));
    assert(Idx < Inputs.size());
    return Idx;
  }
    
    
    {private:
  DictionaryEntry DE[kMaxDictSize];
  size_t Size = 0;
};
    
    
    {  // One greedy pass: add the file's features to AllFeatures.
  // If new features were added, add this file to NewFiles.
  for (size_t i = NumFilesInFirstCorpus; i < Files.size(); i++) {
    auto &Cur = Files[i].Features;
    // Printf('%s -> sz %zd ft %zd\n', Files[i].Name.c_str(),
    //       Files[i].Size, Cur.size());
    size_t OldSize = AllFeatures.size();
    AllFeatures.insert(Cur.begin(), Cur.end());
    if (AllFeatures.size() > OldSize)
      NewFiles->push_back(Files[i].Name);
  }
  return AllFeatures.size() - InitialNumFeatures;
}
    
      /// Mutates data by adding a word from the manual dictionary.
  size_t Mutate_AddWordFromManualDictionary(uint8_t *Data, size_t Size,
                                            size_t MaxSize);
    
    TracePC TPC;
    
    
    {}  // namespace fuzzer

    
    namespace aria2 {
    }
    
      virtual bool getInitialOption() const CXX11_OVERRIDE;
    
    
    {} // namespace aria2
    
    #endif // D_ANON_DISK_WRITER_FACTORY_H
