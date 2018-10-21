
        
        float ButteraugliComparator::BlockErrorLimit() const {
  return target_distance_;
}
    
    
    {}  // namespace guetzli
    
    #include <assert.h>
#include <algorithm>
    
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
    
      tmp0 = in[5 * stride];
  tmp1 = kIDCTMatrix[ 5] * tmp0;
  tmp2 = kIDCTMatrix[13] * tmp0;
  tmp3 = kIDCTMatrix[21] * tmp0;
  tmp4 = kIDCTMatrix[29] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    
    {}  // namespace guetzli

    
    
    {}  // namespace guetzli
    
    bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg) {
  size_t pos = 0;
  // Check SOI marker.
  EXPECT_MARKER();
  int marker = data[pos + 1];
  pos += 2;
  if (marker != 0xd8) {
    fprintf(stderr, 'Did not find expected SOI marker, actual=%d\n', marker);
    jpg->error = JPEG_SOI_NOT_FOUND;
    return false;
  }
  int lut_size = kMaxHuffmanTables * kJpegHuffmanLutSize;
  std::vector<HuffmanTableEntry> dc_huff_lut(lut_size);
  std::vector<HuffmanTableEntry> ac_huff_lut(lut_size);
  bool found_sof = false;
  uint16_t scan_progression[kMaxComponents][kDCTBlockSize] = { { 0 } };
    }
    
      Mutex& GetBenchmarkMutex() const RETURN_CAPABILITY(benchmark_mutex_) {
    return benchmark_mutex_;
  }
    
    // Parses a string for an Int32 flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseInt32Flag(const char* str, const char* flag, int32_t* value);