
        
        
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {
    {  c.reset();
}
}

    
      // We use a restricted scope below to change the data structure from
  // an array to a set. This lets us do deletes much more efficiently
  std::vector<std::string> created_views;
  std::set<std::string> erase_views;
  {
    std::vector<std::string> old_views_vec;
    scanDatabaseKeys(kQueries, old_views_vec, kConfigViews);
    for (const auto& view : old_views_vec) {
      erase_views.insert(view.substr(kConfigViews.size()));
    }
  }
    
    TEST_F(PacksTests, test_get_discovery_queries) {
  std::vector<std::string> expected;
    }
    
    /**
 * @brief Compute multiple hashes from a files contents simultaneously.
 *
 * @param mask Bitmask specifying target osquery-supported algorithms.
 * @param path Filesystem path (the hash target).
 * @return A struct containing string (hex) representations
 *         of the hash digests.
 */
MultiHashes hashMultiFromFile(int mask, const std::string& path);
    
    #include <osquery/system.h>
    
    Status deserializeDistributedQueryRequest(const rj::Value& obj,
                                          DistributedQueryRequest& r) {
  if (!obj.HasMember('query') || !obj.HasMember('id') ||
      !obj['query'].IsString() || !obj['id'].IsString()) {
    return Status(1, 'Malformed distributed query request');
  }
    }
    
    
    {  // Reorder to the correct output order.
  // TODO(szabadka): Modify the above computation so that this is not needed.
  Complex tmp = a[2];
  a[2] = a[3];
  a[3] = a[5];
  a[5] = a[7];
  a[7] = a[4];
  a[4] = a[1];
  a[1] = a[6];
  a[6] = tmp;
}
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    void ComputeBlockDCT(coeff_t* coeffs) {
  ColumnDct(coeffs);
  RowDct(coeffs + 0 * 8, kTable04);
  RowDct(coeffs + 1 * 8, kTable17);
  RowDct(coeffs + 2 * 8, kTable26);
  RowDct(coeffs + 3 * 8, kTable35);
  RowDct(coeffs + 4 * 8, kTable04);
  RowDct(coeffs + 5 * 8, kTable35);
  RowDct(coeffs + 6 * 8, kTable26);
  RowDct(coeffs + 7 * 8, kTable17);
}
    
    #include 'guetzli/jpeg_data.h'
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
      // Cluster AC histograms.
  size_t num_ac_histo = ncomps;
  int ac_histo_indexes[kMaxComponents];
  ClusterHistograms(&histograms[num_dc_histo], &num_ac_histo, ac_histo_indexes,
                    &depths[num_dc_histo * JpegHistogram::kSize]);
    
    namespace guetzli {
    }