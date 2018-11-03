
        
        /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
    static void secp256k1_ge_to_storage(secp256k1_ge_storage *r, const secp256k1_ge *a) {
    secp256k1_fe x, y;
    VERIFY_CHECK(!a->infinity);
    x = a->x;
    secp256k1_fe_normalize(&x);
    y = a->y;
    secp256k1_fe_normalize(&y);
    secp256k1_fe_to_storage(&r->x, &x);
    secp256k1_fe_to_storage(&r->y, &y);
}
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    
    {}  // namespace guetzli
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
      bool is_progressive = false;   // default
  do {
    // Read next marker.
    size_t num_skipped = FindNextMarker(data, len, pos);
    if (num_skipped > 0) {
      // Add a fake marker to indicate arbitrary in-between-markers data.
      jpg->marker_order.push_back(0xff);
      jpg->inter_marker_data.push_back(
          std::string(reinterpret_cast<const char*>(&data[pos]),
                                      num_skipped));
      pos += num_skipped;
    }
    EXPECT_MARKER();
    marker = data[pos + 1];
    pos += 2;
    bool ok = true;
    switch (marker) {
      case 0xc0:
      case 0xc1:
      case 0xc2:
        is_progressive = (marker == 0xc2);
        ok = ProcessSOF(data, len, mode, &pos, jpg);
        found_sof = true;
        break;
      case 0xc4:
        ok = ProcessDHT(data, len, mode, &dc_huff_lut, &ac_huff_lut, &pos, jpg);
        break;
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
        // RST markers do not have any data.
        break;
      case 0xd9:
        // Found end marker.
        break;
      case 0xda:
        if (mode == JPEG_READ_ALL) {
          ok = ProcessScan(data, len, dc_huff_lut, ac_huff_lut,
                           scan_progression, is_progressive, &pos, jpg);
        }
        break;
      case 0xdb:
        ok = ProcessDQT(data, len, &pos, jpg);
        break;
      case 0xdd:
        ok = ProcessDRI(data, len, &pos, jpg);
        break;
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
        if (mode != JPEG_READ_TABLES) {
          ok = ProcessAPP(data, len, &pos, jpg);
        }
        break;
      case 0xfe:
        if (mode != JPEG_READ_TABLES) {
          ok = ProcessCOM(data, len, &pos, jpg);
        }
        break;
      default:
        fprintf(stderr, 'Unsupported marker: %d pos=%d len=%d\n',
                marker, static_cast<int>(pos), static_cast<int>(len));
        jpg->error = JPEG_UNSUPPORTED_MARKER;
        ok = false;
        break;
    }
    if (!ok) {
      return false;
    }
    jpg->marker_order.push_back(marker);
    if (mode == JPEG_READ_HEADER && found_sof) {
      break;
    }
  } while (marker != 0xd9);
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num,
                         int* histo_indexes, uint8_t* depth) {
  memset(depth, 0, *num * JpegHistogram::kSize);
  size_t costs[kMaxComponents];
  for (size_t i = 0; i < *num; ++i) {
    histo_indexes[i] = i;
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    CreateHuffmanTree(histo[i].counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0],
                      &depth[i * JpegHistogram::kSize]);
    costs[i] = (HistogramHeaderCost(histo[i]) +
                HistogramEntropyCost(histo[i],
                                     &depth[i * JpegHistogram::kSize]));
  }
  const size_t orig_num = *num;
  while (*num > 1) {
    size_t last = *num - 1;
    size_t second_last = *num - 2;
    JpegHistogram combined(histo[last]);
    combined.AddHistogram(histo[second_last]);
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    uint8_t depth_combined[JpegHistogram::kSize] = { 0 };
    CreateHuffmanTree(combined.counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0], depth_combined);
    size_t cost_combined = (HistogramHeaderCost(combined) +
                            HistogramEntropyCost(combined, depth_combined));
    if (cost_combined < costs[last] + costs[second_last]) {
      histo[second_last] = combined;
      histo[last] = JpegHistogram();
      costs[second_last] = cost_combined;
      memcpy(&depth[second_last * JpegHistogram::kSize], depth_combined,
             sizeof(depth_combined));
      for (size_t i = 0; i < orig_num; ++i) {
        if (histo_indexes[i] == last) {
          histo_indexes[i] = second_last;
        }
      }
      --(*num);
    } else {
      break;
    }
  }
  size_t total_cost = 0;
  for (size_t i = 0; i < *num; ++i) {
    total_cost += costs[i];
  }
  return (total_cost + 7) / 8;
}
    
        static BOOST_FORCEINLINE storage_type fetch_add(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD16_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD16_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD16_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD16(&storage, v));
            break;
        }
        return v;
    }