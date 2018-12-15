
        
        int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
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
    
    // Convert an arbitrary type to integer.  The version with convertible=false
// throws an error.
template<typename T, bool convertible = is_convertible<T,int>::value>
struct convertToInt
{
    static int invoke(const T& /*value*/)
    {
        TINYFORMAT_ERROR('tinyformat: Cannot convert from argument type to '
                         'integer for use as variable width or precision');
        return 0;
    }
};
// Specialization for convertToInt when conversion is possible
template<typename T>
struct convertToInt<T,true>
{
    static int invoke(const T& value) { return static_cast<int>(value); }
};
    
    bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
    class ScriptDetector {
 public:
  ScriptDetector(const GenericVector<int>* allowed_scripts,
                 OSResults* osr, tesseract::Tesseract* tess);
  void detect_blob(BLOB_CHOICE_LIST* scores);
  bool must_stop(int orientation);
 private:
  OSResults* osr_;
  static const char* korean_script_;
  static const char* japanese_script_;
  static const char* fraktur_script_;
  int korean_id_;
  int japanese_id_;
  int katakana_id_;
  int hiragana_id_;
  int han_id_;
  int hangul_id_;
  int latin_id_;
  int fraktur_id_;
  tesseract::Tesseract* tess_;
  const GenericVector<int>* allowed_scripts_;
};
    
    /** Returns the polygon outline of the current block. The returned Pta must
 *  be ptaDestroy-ed after use. */
Pta* PageIterator::BlockPolygon() const {
  if (it_->block() == nullptr || it_->block()->block == nullptr)
    return nullptr;  // Already at the end!
  if (it_->block()->block->pdblk.poly_block() == nullptr)
    return nullptr;  // No layout analysis used - no polygon.
  ICOORDELT_IT it(it_->block()->block->pdblk.poly_block()->points());
  Pta* pta = ptaCreate(it.length());
  int num_pts = 0;
  for (it.mark_cycle_pt(); !it.cycled_list(); it.forward(), ++num_pts) {
    ICOORD* pt = it.data();
    // Convert to top-down coords within the input image.
    float x = static_cast<float>(pt->x()) / scale_ + rect_left_;
    float y = rect_top_ + rect_height_ - static_cast<float>(pt->y()) / scale_;
    ptaAddPt(pta, x, y);
  }
  return pta;
}
    
      // ============= Accessing data ==============.
  // Coordinate system:
  // Integer coordinates are at the cracks between the pixels.
  // The top-left corner of the top-left pixel in the image is at (0,0).
  // The bottom-right corner of the bottom-right pixel in the image is at
  // (width, height).
  // Every bounding box goes from the top-left of the top-left contained
  // pixel to the bottom-right of the bottom-right contained pixel, so
  // the bounding box of the single top-left pixel in the image is:
  // (0,0)->(1,1).
  // If an image rectangle has been set in the API, then returned coordinates
  // relate to the original (full) image, rather than the rectangle.
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    #endif  // TESSERACT_CCUTIL_BOXREAD_H_

    
     private:
  void ComputeBoundingBox();
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput + 2));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 4));
    }
    input_blob_names.push_back(GO(4));
    
    <summary> <b>Example</b> </summary>
    
    template <typename T, class Context>
class FlexibleTopKGradientOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    
    {} // namespace caffe2
    
    **Code**
    
    namespace caffe2 {
OPERATOR_SCHEMA(FloatToHalf)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT16);
    }
    }
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    
    {#define XO2(name, arg3, oe, xop)                                          \
    EmitXOForm(31, rn(rt), rn(ra), rn(arg3), oe, xop, rc);                \
}
    
    
    {      dword(dq_formater.instruction);
   }
    
      /*
   * Create an uncounted array if we can.
   *
   * If this collection is an OuterHandle, then we need to do a full check on
   * this array for things like circularity.  If we're an InnerHandle, someone
   * already checked that, but we want to check for whether it's uncounted to
   * use a better representation.  For the OuterHandle case, we just delegate
   * to APCArray below (which will do the full DataWalker pass).
   */
  if (level == APCHandleLevel::Inner && apcExtension::UseUncounted &&
      !array->empty()) {
    DataWalker walker(DataWalker::LookupFeature::HasObjectOrResource);
    auto const features = walker.traverseData(const_cast<ArrayData*>(array));
    assertx(!features.isCircular);
    if (!features.hasObjectOrResource) {
      auto const makeUncounted = [&] () {
        if (isVectorCollection(obj->collectionType())) {
          return APCArray::MakeUncountedVec(const_cast<ArrayData*>(array));
        }
        return APCArray::MakeUncountedDict(const_cast<ArrayData*>(array));
      };
      return WrapArray(
        { makeUncounted(), getMemSize(array) + sizeof(APCTypedValue) },
        obj->collectionType()
      );
    }
  }
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
      // Parse and process a .hdf string (e.g., -v)
  static void ParseHdfString(const std::string &hdfStr, Hdf &hdf);
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace xgboost {
/*!
 * \brief interface of gradient boosting model.
 */
class GradientBooster {
 public:
  /*! \brief virtual destructor */
  virtual ~GradientBooster() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Set the configuration of gradient boosting.
   *  User must call configure once before InitModel and Training.
   *
   * \param cfg configurations on both training and model parameters.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  virtual void Load(dmlc::Stream* fi) = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  virtual void Save(dmlc::Stream* fo) const = 0;
  /*!
   * \brief whether the model allow lazy checkpoint
   * return true if model is only updated in DoBoost
   * after all Allreduce calls
   */
  virtual bool AllowLazyCheckPoint() const {
    return false;
  }
  /*!
   * \brief perform update to the model(boosting)
   * \param p_fmat feature matrix that provide access to features
   * \param in_gpair address of the gradient pair statistics of the data
   * \param obj The objective function, optional, can be nullptr when use customized version
   * the booster may change content of gpair
   */
  virtual void DoBoost(DMatrix* p_fmat,
                       HostDeviceVector<GradientPair>* in_gpair,
                       ObjFunction* obj = nullptr) = 0;
    }
    }