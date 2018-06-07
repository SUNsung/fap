
        
        namespace atom {
    }
    
      class MatchGroundTruth : public QuickTest ,
      public ::testing::WithParamInterface<const char*> {
  };
  
  TEST_P(MatchGroundTruth, FastPhototestOCR) {
    OCRTester(TESTING_DIR '/phototest.tif',
              TESTING_DIR '/phototest.txt',
              TESSDATA_DIR '_fast', GetParam());
  }
  
  INSTANTIATE_TEST_CASE_P( EngLatinDevaArabLang, MatchGroundTruth, 
                        ::testing::Values('eng', 'script/Latin', 'script/Devanagari', 'script/Arabic') );
    
    
    {  UnicharCompress compressed_;
  UNICHARSET unicharset_;
  int null_char_;
  // The encoding of the null_char_.
  int encoded_null_char_;
};
    
    // Returns the number of blanks before the current word.
int ResultIterator::BlanksBeforeWord() const {
  if (CurrentParagraphIsLtr()) return LTRResultIterator::BlanksBeforeWord();
  return IsAtBeginningOf(RIL_TEXTLINE) ? 0 : 1;
}
    
    
    {
    {
    {        while ((edgept->next->flags[FLAGS] & FIXED)
          && edgept != loopstart)
          edgept = edgept->next; /*look for next non-fixed */
      }
                                 /*do all the loop */
      while (edgept != loopstart);
      edgesum = 0;
      do {
        if (edgept->flags[FLAGS] & FIXED)
          edgesum++;
        edgept = edgept->next;
      }
                                 //count fixed pts
      while (edgept != loopstart);
      if (edgesum < 3)
        area /= 2;               //must have 3 pts
    }
    while (edgesum < 3);
    do {
      linestart = edgept;
      do {
        edgept = edgept->next;
      }
      while ((edgept->flags[FLAGS] & FIXED) == 0);
      linestart->next = edgept;
      edgept->prev = linestart;
      linestart->vec.x = edgept->pos.x - linestart->pos.x;
      linestart->vec.y = edgept->pos.y - linestart->pos.y;
    }
    while (edgept != loopstart);
  }
  else
    edgept = startpt;            /*start of loop */
    
    std::string stringFromCFNumber(const CFDataRef& cf_number) {
  return stringFromCFNumber(cf_number, CFNumberGetType((CFNumberRef)cf_number));
}
    
    /// The following test macros allow pretty test output.
#define CREATE_DATABASE_TESTS(n)                                               \
  TEST_F(n, test_plugin_check) {                                               \
    testPluginCheck();                                                         \
  }                                                                            \
  TEST_F(n, test_reset) {                                                      \
    testReset();                                                               \
  }                                                                            \
  TEST_F(n, test_put) {                                                        \
    testPut();                                                                 \
  }                                                                            \
  TEST_F(n, test_get) {                                                        \
    testGet();                                                                 \
  }                                                                            \
  TEST_F(n, test_delete) {                                                     \
    testDelete();                                                              \
  }                                                                            \
  TEST_F(n, test_delete_range) {                                               \
    testDeleteRange();                                                         \
  }                                                                            \
  TEST_F(n, test_scan) {                                                       \
    testScan();                                                                \
  }                                                                            \
  TEST_F(n, test_scan_limit) {                                                 \
    testScanLimit();                                                           \
  }
    
     private:
  /// For testing only, ask the event stream to publish events immediately.
  bool no_defer_{false};
    
    // Decodes one 8x8 block of DCT coefficients from the bit stream.
bool DecodeDCTBlock(const HuffmanTableEntry* dc_huff,
                    const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* last_dc_coeff,
                    coeff_t* coeffs) {
  int s;
  int r;
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    s = ReadSymbol(dc_huff, br);
    if (s >= kJpegDCAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for DC coefficient.\n', s);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    if (s > 0) {
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
    }
    s += *last_dc_coeff;
    const int dc_coeff = SignedLeftshift(s, Al);
    coeffs[0] = dc_coeff;
    if (dc_coeff != coeffs[0]) {
      fprintf(stderr, 'Invalid DC coefficient %d\n', dc_coeff);
      jpg->error = JPEG_NON_REPRESENTABLE_DC_COEFF;
      return false;
    }
    *last_dc_coeff = s;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  if (*eobrun > 0) {
    --(*eobrun);
    return true;
  }
  for (int k = Ss; k <= Se; k++) {
    s = ReadSymbol(ac_huff, br);
    if (s >= kJpegHuffmanAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
              s, k);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    r = s >> 4;
    s &= 15;
    if (s > 0) {
      k += r;
      if (k > Se) {
        fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                k, Ss, Se);
        jpg->error = JPEG_OUT_OF_BAND_COEFF;
        return false;
      }
      if (s + Al >= kJpegDCAlphabetSize) {
        fprintf(stderr, 'Out of range AC coefficient value: s=%d Al=%d k=%d\n',
                s, Al, k);
        jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
        return false;
      }
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
      coeffs[kJPEGNaturalOrder[k]] = SignedLeftshift(s, Al);
    } else if (r == 15) {
      k += 15;
    } else {
      *eobrun = 1 << r;
      if (r > 0) {
        if (!eobrun_allowed) {
          fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
          jpg->error = JPEG_EOB_RUN_TOO_LONG;
          return false;
        }
        *eobrun += br->ReadBits(r);
      }
      break;
    }
  }
  --(*eobrun);
  return true;
}
    
    #endif  // GUETZLI_COLOR_TRANSFORM_H_

    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);
    
    namespace guetzli {
    }
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);