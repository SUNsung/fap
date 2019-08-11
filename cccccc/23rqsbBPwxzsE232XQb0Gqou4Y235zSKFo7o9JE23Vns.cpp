
        
        
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
    IntFeatureDist::IntFeatureDist()
  : size_(0), total_feature_weight_(0.0),
    feature_map_(nullptr), features_(nullptr),
    features_delta_one_(nullptr), features_delta_two_(nullptr) {
}
    
      // Compute the distance between the given feature vector and the last
  // Set feature vector.
  double FeatureDistance(const GenericVector<int>& features) const;
  double DebugFeatureDistance(const GenericVector<int>& features) const;
    
      // Check for input iterator errors
  if (!iter->status().ok()) {
    s = iter->status();
  }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    #include <string>
    
    
    { private:
  std::condition_variable cv_;
  Mutex* const mu_;
};
    
    void FilterBlockBuilder::StartBlock(uint64_t block_offset) {
  uint64_t filter_index = (block_offset / kFilterBase);
  assert(filter_index >= filter_offsets_.size());
  while (filter_index > filter_offsets_.size()) {
    GenerateFilter();
  }
}
    
                    fstream.GetMarker(FileMarker::fileMarkerBeginSection, L'BMomentumAsTimeConstant');
                fstream >> m_blockMomentumAsTimeConstantPerWorker;
                fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EMomentumAsTimeConstant');
    
        // SetMacroDefinitionsAllowed - allow macro definitions
    // macroAllowed - can macros be defined in this script?
    void SetMacroDefinitionsAllowed(bool macroAllowed)
    {
        m_noDefinitions = !macroAllowed;
    }
    
            virtual void BeginBackprop() override {}
        virtual void BackpropTo(const size_t inputIndex, const FrameRange&) override
        {
            NOT_IMPLEMENTED;
        } // ugh, call Backprop() instead
        virtual void EndBackprop() override {}
    
    
template <class ElemType>
std::shared_ptr<IDistGradAggregator<ElemType>> GetSimpleDistGradAggregator(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce)
{
    if (Globals::UseV2Aggregator())
        return std::make_shared<V2SimpleDistGradAggregator<ElemType>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            ::CNTK::MPICommunicator(packThresholdSizeInBytes, useFP16AllReduce));
    else
        return std::make_shared<SimpleDistGradAggregator<ElemType>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            packThresholdSizeInBytes);
}
    
                // If the current node did not process any samples, the gradients should be zero'd
            for (size_t i = 0; i < gradients.size(); ++i)
                gradients[i]->SetValue(0);
    
        // [2,2,2] * [1,2,3]^T etc.
    std::vector<float> expected{ 6, 0, 28 };
    auto buf = outputBuffer[0].m_buffer;
    BOOST_CHECK_EQUAL_COLLECTIONS(buf.begin(), buf.end(), expected.begin(), expected.end());