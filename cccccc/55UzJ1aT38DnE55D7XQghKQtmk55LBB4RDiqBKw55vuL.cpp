
        
        class GetSubGradient final : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
    }
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    namespace leveldb {
    }
    
      // Is this a trivial compaction that can be implemented by just
  // moving a single input file to the next level (no merging or splitting)
  bool IsTrivialMove() const;
    
      // Random reads.
  ASSERT_OK(env_->NewRandomAccessFile('/dir/f', &rand_file));
  ASSERT_OK(rand_file->Read(6, 5, &result, scratch));  // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(rand_file->Read(0, 5, &result, scratch));  // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(rand_file->Read(10, 100, &result, scratch));  // Read 'd'.
  ASSERT_EQ(0, result.compare('d'));
    
    namespace leveldb {
    }
    
      // Given a key, return an approximate byte offset in the file where
  // the data for that key begins (or would begin if the key were
  // present in the file).  The returned value is in terms of file
  // bytes, and so includes effects like compression of the underlying data.
  // E.g., the approximate offset of the last key in the table will
  // be close to the file length.
  uint64_t ApproximateOffsetOf(const Slice& key) const;
    
      if (r->pending_index_entry) {
    assert(r->data_block.empty());
    r->options.comparator->FindShortestSeparator(&r->last_key, key);
    std::string handle_encoding;
    r->pending_handle.EncodeTo(&handle_encoding);
    r->index_block.Add(r->last_key, Slice(handle_encoding));
    r->pending_index_entry = false;
  }
    
    
    {}  // namespace leveldb

    
      // Return a pointer to a newly allocated memory block of 'bytes' bytes.
  char* Allocate(size_t bytes);
    
    
    {  int cached_weight = 0;
  for (int i = 0; i < index; i++) {
    const int weight = (i & 1 ? kLight : kHeavy);
    int r = Lookup(i);
    if (r >= 0) {
      cached_weight += weight;
      ASSERT_EQ(1000 + i, r);
    }
  }
  ASSERT_LE(cached_weight, kCacheSize + kCacheSize / 10);
}
    
      HANDLE get() const { return handle_; }
    
            // Inner state of the underlying reader.
        // Is set in the RestoreFromCheckpoint call and used in the next GetNextMinibatch
        // when the reader state is restored after the first StartEpoch call.
        Internal::Optional<Dictionary> m_state;
    
    
    {protected:
    std::string m_callStack;
};
    
    #include <string>
    
    
    {
    {        // Remaining elements
        if (squashInputs)
        {
            //squash sequences of identical samples
            for (size_t i = 1; i < columnIndices.size(); i++)
            {
                size_t refId = (int)firstSeq(0, columnIndices[i]);
                if (lastId != refId)
                {
                    lastId = refId;
                    if (std::find(tokensToIgnore.begin(), tokensToIgnore.end(), refId) == tokensToIgnore.end())
                        out_SampleSeqVec.push_back(refId);
                }
            }
        }
        else
        {
            for (size_t i = 1; i < columnIndices.size(); i++)
            {
                auto refId = (int)firstSeq(0, columnIndices[i]);
                if (std::find(tokensToIgnore.begin(), tokensToIgnore.end(), refId) == tokensToIgnore.end())
                    out_SampleSeqVec.push_back(refId);
            }
        }
    }
};
    
    SEXP XGDMatrixSaveBinary_R(SEXP handle, SEXP fname, SEXP silent) {
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixSaveBinary(R_ExternalPtrAddr(handle),
                                 CHAR(asChar(fname)),
                                 asInteger(silent)));
  R_API_END();
  return R_NilValue;
}
    
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
    
      bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    if (!fi->Read(&(offset_vec))) return false;
    CHECK_NE(offset_vec.size(), 0) << 'Invalid SparsePage file';
    this->LoadIndexValue(fi);
    }
    
      TestIterRef(int * _status): status_(_status) {}