
        
        
    {
    {} // namespace asio
} // namespace boost
    
    
    {private:
  native_buffer_type buffers_[2];
  std::size_t total_buffer_size_;
};
    
    private:
  // The offset to the beginning of the unread data.
  size_type begin_offset_;
    
    #endif // !defined(BOOST_ASIO_WINDOWS) && !defined(__CYGWIN__)
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    template <typename Handler, typename Arg1>
auto one_arg_handler_test(Handler h, Arg1* a1)
  -> decltype(
    sizeof(Handler(static_cast<const Handler&>(h))),
    ((h)(*a1)),
    char(0));
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {  bool earliest = queue.enqueue_timer(time, timer, op);
  io_service_.work_started();
  if (earliest)
    update_timeout();
}
    
    bool ProcessScan(const uint8_t* data, const size_t len,
                 const std::vector<HuffmanTableEntry>& dc_huff_lut,
                 const std::vector<HuffmanTableEntry>& ac_huff_lut,
                 uint16_t scan_progression[kMaxComponents][kDCTBlockSize],
                 bool is_progressive,
                 size_t* pos,
                 JPEGData* jpg) {
  if (!ProcessSOS(data, len, pos, jpg)) {
    return false;
  }
  JPEGScanInfo* scan_info = &jpg->scan_info.back();
  bool is_interleaved = (scan_info->components.size() > 1);
  int MCUs_per_row;
  int MCU_rows;
  if (is_interleaved) {
    MCUs_per_row = jpg->MCU_cols;
    MCU_rows = jpg->MCU_rows;
  } else {
    const JPEGComponent& c = jpg->components[scan_info->components[0].comp_idx];
    MCUs_per_row =
        DivCeil(jpg->width * c.h_samp_factor, 8 * jpg->max_h_samp_factor);
    MCU_rows =
        DivCeil(jpg->height * c.v_samp_factor, 8 * jpg->max_v_samp_factor);
  }
  coeff_t last_dc_coeff[kMaxComponents] = {0};
  BitReaderState br(data, len, *pos);
  int restarts_to_go = jpg->restart_interval;
  int next_restart_marker = 0;
  int eobrun = -1;
  int block_scan_index = 0;
  const int Al = is_progressive ? scan_info->Al : 0;
  const int Ah = is_progressive ? scan_info->Ah : 0;
  const int Ss = is_progressive ? scan_info->Ss : 0;
  const int Se = is_progressive ? scan_info->Se : 63;
  const uint16_t scan_bitmask = Ah == 0 ? (0xffff << Al) : (1u << Al);
  const uint16_t refinement_bitmask = (1 << Al) - 1;
  for (size_t i = 0; i < scan_info->components.size(); ++i) {
    int comp_idx = scan_info->components[i].comp_idx;
    for (int k = Ss; k <= Se; ++k) {
      if (scan_progression[comp_idx][k] & scan_bitmask) {
        fprintf(stderr, 'Overlapping scans: component=%d k=%d prev_mask=%d '
                'cur_mask=%d\n', comp_idx, k, scan_progression[i][k],
                scan_bitmask);
        jpg->error = JPEG_OVERLAPPING_SCANS;
        return false;
      }
      if (scan_progression[comp_idx][k] & refinement_bitmask) {
        fprintf(stderr, 'Invalid scan order, a more refined scan was already '
                'done: component=%d k=%d prev_mask=%d cur_mask=%d\n', comp_idx,
                k, scan_progression[i][k], scan_bitmask);
        jpg->error = JPEG_INVALID_SCAN_ORDER;
        return false;
      }
      scan_progression[comp_idx][k] |= scan_bitmask;
    }
  }
  if (Al > 10) {
    fprintf(stderr, 'Scan parameter Al=%d is not supported in guetzli.\n', Al);
    jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
    return false;
  }
  for (int mcu_y = 0; mcu_y < MCU_rows; ++mcu_y) {
    for (int mcu_x = 0; mcu_x < MCUs_per_row; ++mcu_x) {
      // Handle the restart intervals.
      if (jpg->restart_interval > 0) {
        if (restarts_to_go == 0) {
          if (ProcessRestart(data, len,
                             &next_restart_marker, &br, jpg)) {
            restarts_to_go = jpg->restart_interval;
            memset(last_dc_coeff, 0, sizeof(last_dc_coeff));
            if (eobrun > 0) {
              fprintf(stderr, 'End-of-block run too long.\n');
              jpg->error = JPEG_EOB_RUN_TOO_LONG;
              return false;
            }
            eobrun = -1;   // fresh start
          } else {
            return false;
          }
        }
        --restarts_to_go;
      }
      // Decode one MCU.
      for (size_t i = 0; i < scan_info->components.size(); ++i) {
        JPEGComponentScanInfo* si = &scan_info->components[i];
        JPEGComponent* c = &jpg->components[si->comp_idx];
        const HuffmanTableEntry* dc_lut =
            &dc_huff_lut[si->dc_tbl_idx * kJpegHuffmanLutSize];
        const HuffmanTableEntry* ac_lut =
            &ac_huff_lut[si->ac_tbl_idx * kJpegHuffmanLutSize];
        int nblocks_y = is_interleaved ? c->v_samp_factor : 1;
        int nblocks_x = is_interleaved ? c->h_samp_factor : 1;
        for (int iy = 0; iy < nblocks_y; ++iy) {
          for (int ix = 0; ix < nblocks_x; ++ix) {
            int block_y = mcu_y * nblocks_y + iy;
            int block_x = mcu_x * nblocks_x + ix;
            int block_idx = block_y * c->width_in_blocks + block_x;
            coeff_t* coeffs = &c->coeffs[block_idx * kDCTBlockSize];
            if (Ah == 0) {
              if (!DecodeDCTBlock(dc_lut, ac_lut, Ss, Se, Al, &eobrun, &br, jpg,
                                  &last_dc_coeff[si->comp_idx], coeffs)) {
                return false;
              }
            } else {
              if (!RefineDCTBlock(ac_lut, Ss, Se, Al,
                                  &eobrun, &br, jpg, coeffs)) {
                return false;
              }
            }
            ++block_scan_index;
          }
        }
      }
    }
  }
  if (eobrun > 0) {
    fprintf(stderr, 'End-of-block run too long.\n');
    jpg->error = JPEG_EOB_RUN_TOO_LONG;
    return false;
  }
  if (!br.FinishStream(pos)) {
    jpg->error = JPEG_INVALID_SCAN;
    return false;
  }
  if (*pos > len) {
    fprintf(stderr, 'Unexpected end of file during scan. pos=%d len=%d\n',
            static_cast<int>(*pos), static_cast<int>(len));
    jpg->error = JPEG_UNEXPECTED_EOF;
    return false;
  }
  return true;
}
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    #include <assert.h>
#include <algorithm>
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
    
    {}  // namespace guetzli