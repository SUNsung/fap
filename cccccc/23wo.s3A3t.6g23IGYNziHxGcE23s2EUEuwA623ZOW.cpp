
        
        TEST_F(UnicharcompressTest, DoesChinese) {
  LOG(INFO) << 'Testing chi_tra';
  LoadUnicharset('chi_tra.unicharset');
  ExpectCorrect('chi_tra');
  LOG(INFO) << 'Testing chi_sim';
  LoadUnicharset('chi_sim.unicharset');
  ExpectCorrect('chi_sim');
}
    
      /**
   * Return an LTR Result Iterator -- used only for training, as we really want
   * to ignore all BiDi smarts at that point.
   * delete once you're done with it.
   */
  TESS_LOCAL LTRResultIterator* GetLTRIterator();
    
    TESS_API char* TESS_CALL TessBaseAPIGetUNLVText(TessBaseAPI* handle)
{
    return handle->GetUNLVText();
}
    
    // Extracts and converts 8x32-bit results from result, adding the bias from wi
// and scaling by scales, before storing in *v. Note that wi, scales and v are
// expected to contain 8 consecutive elements or num_out if less.
inline void ExtractResults(__m256i& result, __m256i& shift_id,
                           const int8_t*& wi, const double*& scales,
                           int num_out, double*& v) {
  for (int out = 0; out < num_out; ++out) {
    int32_t res =
#ifndef _MSC_VER
        _mm256_extract_epi32(result, 0)
#else
        // Workaround MSVC's ICE
        // _mm256_extract_epi32(X, Y) == ((int32_t*)&X)[Y]
        ((int32_t*)&result)[0]
#endif
        ;
    *v++ = (static_cast<double>(res) / INT8_MAX + *wi++) * *scales++;
    // Rotate the results in int32_t units, so the next result is ready.
    result = _mm256_permutevar8x32_epi32(result, shift_id);
  }
}
    
    #include 'intsimdmatrixsse.h'
    
      const std::shared_ptr<HttpConnection>& getHttpConnection() const
  {
    return httpConnection_;
  }
    
      void setBtRuntime(const std::shared_ptr<BtRuntime>& btRuntime);
    
    #include 'FileAllocationIterator.h'
    
      TLSVersion getMinTLSVersion() const { return minTLSVer_; }