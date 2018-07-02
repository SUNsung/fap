
        
        // implementing configure.
template<typename PairIter>
inline void GradientBooster::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
    
    { protected:
  /*! \brief internal base score of the model */
  bst_float base_score_;
  /*! \brief objective function */
  std::unique_ptr<ObjFunction> obj_;
  /*! \brief The gradient booster used by the model*/
  std::unique_ptr<GradientBooster> gbm_;
  /*! \brief The evaluation metrics used to evaluate the model. */
  std::vector<std::unique_ptr<Metric> > metrics_;
};
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(size_t chunk_size, size_t max_nchunk) {
  raw_chunks_.clear();
  raw_chunks_.push_back(0);
  size_t min_chunk_size = data.size() / max_nchunk;
  chunk_size = std::max(min_chunk_size, chunk_size);
  size_t nstep = data.size() / chunk_size;
  for (size_t i = 0; i < nstep; ++i) {
    raw_chunks_.push_back(raw_chunks_.back() + chunk_size);
    CHECK_LE(raw_chunks_.back(), data.size());
  }
  if (nstep == 0) raw_chunks_.push_back(0);
  raw_chunks_.back() = data.size();
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}
    
    
    {
    {XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
.describe('Raw binary data format.')
.set_body([]() {
    return new SparsePageRawFormat();
  });
}  // namespace data
}  // namespace xgboost

    
      int NextFeature(int iteration, const gbm::GBLinearModel &model,
                  int group_idx, const std::vector<GradientPair> &gpair,
                  DMatrix *p_fmat, float alpha, float lambda) override {
    // k-th selected feature for a group
    auto k = counter_[group_idx]++;
    // stop after either reaching top-K or going through all the features in a group
    if (k >= top_k_ || counter_[group_idx] == model.param.num_feature) return -1;
    }
    
      void setUserDefinedCred(std::string user, std::string password);
    
    bool AbstractOptionHandler::getChangeOption() const
{
  return flags_ & FLAG_CHANGE_OPTION;
}
    
    namespace aria2 {
    }
    
    
    {  virtual int64_t getTotalLength() CXX11_OVERRIDE;
};
    
    #include 'AnnounceTier.h'
#include 'ValueBase.h'