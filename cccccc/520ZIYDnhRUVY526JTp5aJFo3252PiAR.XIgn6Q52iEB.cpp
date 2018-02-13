
        
          inline void SkipLine(void) {
    do {
      ch_buf = this->GetChar();
    } while (ch_buf != EOF && ch_buf != '\n' && ch_buf != '\r');
  }
    
    DMLC_REGISTRY_FILE_TAG(updater_prune);
    
    TEST(SparsePageDMatrix, MetaInfo) {
  std::string tmp_file = CreateSimpleTestData();
  xgboost::DMatrix * dmat = xgboost::DMatrix::Load(
    tmp_file + '#' + tmp_file + '.cache', true, false);
  std::remove(tmp_file.c_str());
  EXPECT_TRUE(FileExists(tmp_file + '.cache'));
    }
    
    
    {  vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3,2,1';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
}
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }