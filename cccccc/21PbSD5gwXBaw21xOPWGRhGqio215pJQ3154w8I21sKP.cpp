
        
        
    {  class EuroText : public QuickTest {
  };
  
  TEST_F(EuroText, FastOCR) {
    OCRTester(TESTING_DIR '/eurotext.tif',
              TESTING_DIR '/eurotext.txt',
              TESSDATA_DIR '_fast', 'script/Latin');
  }
  
}  // namespace

    
    // dims=[5, 4, 3, 2]->[4, 3, 5, 2]
TEST_F(MatrixTest, RotatingTranspose_0_2) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 0, 2, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][24, 25][48, 49][72, 73][96, 97]]
  //                 [[2, 3][26, 27][50, 51][74, 75][98, 99]]
  //                 [[4, 5][28, 29][52, 53][76, 77][100, 101]]]
  //                [[[6, 7]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(24, m(1, 0));
  EXPECT_EQ(25, m(1, 1));
  EXPECT_EQ(96, m(4, 0));
  EXPECT_EQ(97, m(4, 1));
  EXPECT_EQ(2, m(5, 0));
  EXPECT_EQ(6, m(15, 0));
}
    
    TESS_API void TESS_CALL TessBaseAPISetThresholder(TessBaseAPI* handle, TessImageThresholder* thresholder)
{
    handle->SetThresholder(thresholder);
}
    
    // Returns the pointer to the string with misadaption information for this word.
// Assumes that the word's blamer_bundle is not nullptr.
const char *LTRResultIterator::GetBlamerMisadaptionDebug() const {
  return it_->word()->blamer_bundle->misadaption_debug().string();
}
    
      // ============= Moving around within the page ============.
    
    // This function takes tif/box pair of files and runs recognition on the image,
// while making sure that the word bounds that tesseract identified roughly
// match to those specified by the input box file. For each word (ngram in a
// single bounding box from the input box file) it outputs the ocred result,
// the correct label, rating and certainty.
void Tesseract::recog_training_segmented(const STRING &fname,
                                         PAGE_RES *page_res,
                                         volatile ETEXT_DESC *monitor,
                                         FILE *output_file) {
  STRING box_fname = fname;
  const char *lastdot = strrchr(box_fname.string(), '.');
  if (lastdot != nullptr) box_fname[lastdot - box_fname.string()] = '\0';
  box_fname += '.box';
  // ReadNextBox() will close box_file
  FILE *box_file = open_file(box_fname.string(), 'r');
    }
    
    
    {  int chopped_start = LeadingUnicharsToChopped(word, rebuilt_blob_index);
  int num_chopped_pieces = word->best_state[rebuilt_blob_index];
  ScriptPos last_pos = SP_NORMAL;
  int trailing_outliers = 0;
  for (int i = 0; i < num_chopped_pieces; i++) {
    TBOX box = word->chopped_word->blobs[chopped_start + i]->bounding_box();
    ScriptPos pos = SP_NORMAL;
    if (box.bottom() >= super_y_bottom) {
      pos = SP_SUPERSCRIPT;
    } else if (box.top() <= sub_y_top) {
      pos = SP_SUBSCRIPT;
    }
    if (pos == SP_NORMAL) {
      if (trailing_outliers == i) {
        *num_leading_outliers = trailing_outliers;
        *leading_pos = last_pos;
      }
      trailing_outliers = 0;
    } else {
      if (pos == last_pos) {
        trailing_outliers++;
      } else {
        trailing_outliers = 1;
      }
    }
    last_pos = pos;
  }
  *num_trailing_outliers = trailing_outliers;
  *trailing_pos = last_pos;
}
    
    	ClassDB::bind_method(D_METHOD('poll'), &StreamPeerSSL::poll);
	ClassDB::bind_method(D_METHOD('accept_stream', 'stream'), &StreamPeerSSL::accept_stream);
	ClassDB::bind_method(D_METHOD('connect_to_stream', 'stream', 'validate_certs', 'for_hostname'), &StreamPeerSSL::connect_to_stream, DEFVAL(false), DEFVAL(String()));
	ClassDB::bind_method(D_METHOD('get_status'), &StreamPeerSSL::get_status);
	ClassDB::bind_method(D_METHOD('disconnect_from_stream'), &StreamPeerSSL::disconnect_from_stream);
    
    
    {    bool open(const uint8 *pSrc_data, uint size);
    void close() { m_pSrc_data = NULL; m_ofs = 0; m_size = 0; }
    
    virtual int read(uint8 *pBuf, int max_bytes_to_read, bool *pEOF_flag);
  };
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
    SEXP XGBoosterLoadModelFromRaw_R(SEXP handle, SEXP raw) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterLoadModelFromBuffer(R_ExternalPtrAddr(handle),
                                          RAW(raw),
                                          length(raw)));
  R_API_END();
  return R_NilValue;
}
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
      XGBOOST_DEVICE GradientPairInternal<T> operator+(
      const GradientPairInternal<T> &rhs) const {
    GradientPairInternal<T> g;
    g.grad_ = grad_ + rhs.grad_;
    g.hess_ = hess_ + rhs.hess_;
    return g;
  }
    
    #ifndef COMM_COMM_DNS_H_
#define COMM_COMM_DNS_H_
    
        st.total_length = ntohl(st.total_length);
    st.sequence = ntohl(st.sequence);
    st.hash = ntohl(st.hash);
    
    
    {}
    
    
    {  private:
//    int m_t;
};
    
    void TSpy::TestFun0()
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->TestFun0();
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class ScopeJEnv {
  public:
    ScopeJEnv(JavaVM* jvm, jint _capacity = 16);
    ~ScopeJEnv();
    }