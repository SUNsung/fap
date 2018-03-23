//////////////////////////////////////////////////////////////////////
    
    bool HHVM_FUNCTION(mb_ereg_search_init,
                   const String& str,
                   const Variant& opt_pattern,
                   const Variant& opt_option) {
  const String pattern = convertArg(opt_pattern);
  const String option = convertArg(opt_option);
    }
    
    
    {  Vunit&                    m_unit;
  const Scale&              m_scale;
  const jit::vector<Vlabel> m_blocks;
  jit::vector<Cluster>      m_clusters;
  jit::vector<Vlabel>       m_blockCluster; // maps block to current cluster
  jit::vector<Vlabel>       m_clusterOrder; // final sorted list of cluster ids
};
    
    /*
 * Vlabel wraps a block number.
 */
DECLARE_VNUM(Vlabel, true, 'B');
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
    void ThriftBuffer::write(const std::vector<std::string> &data) {
  int32_t size = data.size();
  write(size);
  for (int i = 0; i < size; i++) {
    write(data[i]);
  }
}
    
                Equations:
              - Ht = Activation(Wi*Xt + Ri*Ht-1 + Wbi + Rbi)
            )DOC')
        .FillUsing(RNNDocGeneratorInputX())
        .Input('W',
            'The weight tensor for input gate. Concatenation of `Wi` and `WBi` '
            '(if bidirectional). The tensor has shape '
            '`[num_directions, hidden_size, input_size]`.', 'T')
        .Input('R',
            'The recurrence weight tensor. Concatenation of `Ri` and `RBi` '
            '(if bidirectional). The tensor has shape '
            '`[num_directions, hidden_size, hidden_size]`.', 'T')
        .Input('B',
            'The bias tensor for input gate. Concatenation of `[Wbi, Rbi]` '
            'and `[WBbi, RBbi]` (if bidirectional). The tensor has shape '
            '`[num_directions, 2*hidden_size]`, Optional: If not specified - assumed '
            'to be 0.', 'T',
            true)
        .FillUsing(RNNDocGeneratorInputSeqLen())
        .FillUsing(RNNDocGeneratorInputInitialH())
        .Attr('activations', 'One (or two if bidirectional) activation function for '
            'input gate. It must be one of tanh and ReLU. Default `tanh`.',
            AttrType::AttributeProto_AttributeType_STRINGS)
        .FillUsing(RNNDocGeneratorActivationArgs())
        .FillUsing(RNNDocGeneratorAttrOutput());
    
        // Returns all frames of a given utterance.
    msra::dbn::matrixstripe GetUtteranceFrames(size_t index) const
    {
        if (!IsInRam())
        {
            LogicError('GetUtteranceFrames was called when data have not yet been paged in.');
        }
    }
    
            // Make sure we always have 3 at the end for buffer overrun, i.e. 4 byte alignment
        // This is required because currently lattices are exposed as an array of floats, because CPUMatrix does not support chars.
        // TODO: switch to char when possible.
        vector<char> buffer(sizeInBytes + sizeof(float) - 1);
        for (int fl = 0; fl < sizeof(float) - 1; fl++)
        {
            buffer[sizeInBytes + fl] = 0;
        }
    
        // We need to make sure that the compute for the current transfer is finished before we start prefetch.
    if (m_dataTransferers[currentDataTransferIndex])
        m_dataTransferers[currentDataTransferIndex]->WaitForSyncPointOnAssignStreamAsync();
    
            // we stripe V
        // This is to ensure that we only touch a subset of columns of V at once that fit into
        // the cache. E.g. for a 1024-row V, that would be 195 columns. We then 'stream'
        // through M, where each row of M is applied to all those columns of V. This way,
        // both V and M come from the cache except for the first time. Each 'float' of V
        // is loaded once into cache. Each row of M is loaded into cache once per stripe of V,
        // in the example every 195 columns.
        const size_t cacheablerowsV = 512; // at most
        const size_t cacheablecolsV = 16;  // V.cacheablecols();    // don't get more than this of V per row of M
        // 512 * 16 -> 32 KB
    
      std::vector<std::string> line_exports;
  unsigned int readonly = 0;
  int options_index = -1;
    
    #pragma once
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }