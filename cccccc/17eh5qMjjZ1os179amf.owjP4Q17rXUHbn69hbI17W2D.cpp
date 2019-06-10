
        
        
    {    Lock& lock;
    Lock templock;
};
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
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
    
        int vi = -688;
    UniValue v6(vi);
    BOOST_CHECK(v6.isNum());
    BOOST_CHECK_EQUAL(v6.getValStr(), '-688');
    
    // This class fits a line to a set of ICOORD points.
// There is no restriction on the direction of the line, as it
// uses a vector method, ie no concern over infinite gradients.
// The fitted line has the least upper quartile of squares of perpendicular
// distances of all source points from the line, subject to the constraint
// that the line is made from one of the pairs of [{p1,p2,p3},{pn-2, pn-1, pn}]
// i.e. the 9 combinations of one of the first 3 and last 3 points.
// A fundamental assumption of this algorithm is that one of the first 3 and
// one of the last 3 points are near the best line fit.
// The points must be Added in line order for the algorithm to work properly.
// No floating point calculations are needed* to make an accurate fit,
// and no random numbers are needed** so the algorithm is deterministic,
// architecture-stable, and compiler-stable as well as stable to minor
// changes in the input.
// *A single floating point division is used to compute each line's distance.
// This is unlikely to result in choice of a different line, but if it does,
// it would be easy to replace with a 64 bit integer calculation.
// **Random numbers are used in the nth_item function, but the worst
// non-determinism that can result is picking a different result among equals,
// and that wouldn't make any difference to the end-result distance, so the
// randomness does not affect the determinism of the algorithm. The random
// numbers are only there to guarantee average linear time.
// Fitting time is linear, but with a high constant, as it tries 9 different
// lines and computes the distance of all points each time.
// This class is aimed at replacing the LLSQ (linear least squares) and
// LMS (least median of squares) classes that are currently used for most
// of the line fitting in Tesseract.
class DetLineFit {
 public:
  DetLineFit();
  ~DetLineFit() = default;
    }
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
    bool ParagraphModel::ValidBodyLine(int lmargin, int lindent,
                                   int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
        void setrej_tess_failure();  //Tess generated blank
    void setrej_small_xht();  //Small xht char/wd
    void setrej_edge_char();  //Close to image edge
    void setrej_1Il_conflict();  //Initial reject map
    void setrej_postNN_1Il();  //1Il after NN
    void setrej_rej_cblob();  //Insert duff blob
    void setrej_mm_reject();  //Matrix matcher
                                 //Odd repeated char
    void setrej_bad_repetition();
    void setrej_poor_match();  //Failed Rays heuristic
                                 //TEMP reject_word
    void setrej_not_tess_accepted();
                                 //TEMP reject_word
    void setrej_contains_blanks();
    void setrej_bad_permuter();  //POTENTIAL reject_word
    void setrej_hyphen();  //PostNN dubious hyph or .
    void setrej_dubious();  //PostNN dubious limit
    void setrej_no_alphanums();  //TEMP reject_word
    void setrej_mostly_rej();  //TEMP reject_word
    void setrej_xht_fixup();  //xht fixup
    void setrej_bad_quality();  //TEMP reject_word
    void setrej_doc_rej();  //TEMP reject_word
    void setrej_block_rej();  //TEMP reject_word
    void setrej_row_rej();  //TEMP reject_word
    void setrej_unlv_rej();  //TEMP reject_word
    void setrej_nn_accept();  //NN Flipped a char
    void setrej_hyphen_accept();  //Good aspect ratio
    void setrej_mm_accept();  //Matrix matcher
                                 //Quality flip a char
    void setrej_quality_accept();
                                 //Accept all except blank
    void setrej_minimal_rej_accept();
    
    #endif  // TESSERACT_CCUTIL_GENERICHEAP_H_

    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() = default;
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
    // A simple object cache which maps a string to an object of type T.
// Usually, these are expensive objects that are loaded from disk.
// Reference counting is performed, so every Get() needs to be followed later
// by a Free().  Actual deletion is accomplished by DeleteUnusedObjects().
template<typename T>
class ObjectCache {
 public:
  ObjectCache() = default;
  ~ObjectCache() {
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (cache_[i].count > 0) {
        tprintf('ObjectCache(%p)::~ObjectCache(): WARNING! LEAK! object %p '
                'still has count %d (id %s)\n',
                this, cache_[i].object, cache_[i].count,
                cache_[i].id.string());
      } else {
        delete cache_[i].object;
        cache_[i].object = nullptr;
      }
    }
    mu_.Unlock();
  }
    }
    
        private:
        std::unordered_set<StreamInformation> m_streamInfos;
        bool m_epochEndReached;
        size_t m_numWorkers;
        size_t m_workerRank;
        size_t m_prevMinibatchSize;
        size_t m_maxNumSamplesToRead;
        size_t m_maxNumSweepsToRead;
        size_t m_truncationLength;
        size_t m_maxErrors;
        std::unordered_map<StreamInformation, MinibatchData> m_minibatchData;
    
                m_totalSummaries++;
            auto now = std::chrono::high_resolution_clock::now();
            size_t durationMs = std::chrono::duration_cast<std::chrono::milliseconds>(now - m_lastResetTime).count();
    
    
    {
    {        mutable bool m_isPacked;
        mutable NDArrayViewPtr m_packedData;
        mutable std::shared_ptr<Microsoft::MSR::CNTK::MBLayout> m_packedDataLayout;
    };
}

    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
    template <class ElemType>
class LookupTableNode : public ComputationNode<ElemType>, public NumInputs<2>
{
    typedef ComputationNode<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'LookupTable'; }
    }
    
    TEST(ByteTest, GetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  EXPECT_EQ(0x05, value.get_byte(1, 3));
  EXPECT_EQ(0x01, value.get_byte(1, 1));
  EXPECT_EQ(0x00, value.get_byte(8, 1));
  EXPECT_EQ(0x00, value.get_byte(-1, 1));
  EXPECT_EQ(0x1A, value.get_byte(0, 10));
}
    
    
    {  int ret = x;
  return ret;
}
    
    unsigned int BaseMapMatrix::CreateBinary(unsigned char* buf,
                                         unsigned int buf_size) const {
  return 0;
}
    
    Spline1dSeg::Spline1dSeg(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}
    
      Byte t1(bytes + 5);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }