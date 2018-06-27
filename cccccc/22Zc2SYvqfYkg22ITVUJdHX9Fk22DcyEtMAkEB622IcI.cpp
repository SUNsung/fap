
        
        
    {  /* reduction */
  const uint32_t nbins = nbins_;
  #pragma omp parallel for num_threads(nthread) schedule(static)
  for (bst_omp_uint bin_id = 0; bin_id < bst_omp_uint(nbins); ++bin_id) {
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      hist.begin[bin_id].Add(data_[tid * nbins_ + bin_id]);
    }
  }
}
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    if (page.data.size() != 0) {
      fo->Write(dmlc::BeginPtr(page.data), page.data.size() * sizeof(Entry));
    }
  }
    
      std::vector<std::string> DumpModel(const FeatureMap& fmap,
                                     bool with_stats,
                                     std::string format) const override {
    return model_.DumpModel(fmap, with_stats, format);
  }