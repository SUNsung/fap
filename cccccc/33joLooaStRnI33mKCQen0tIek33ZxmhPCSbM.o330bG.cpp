
        
          desired_output_for_decode = 'abcdefghIJ';
  expected = string('\x0A\x0', 2);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    void MapLiteTestUtil::ExpectArenaMapFieldsSet(
    const unittest::TestArenaMapLite& message) {
  MapTestUtilImpl::ExpectArenaMapFieldsSet<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_BAZ_LITE>(
      message);
}
    
    TEST(StatusOr, TestPointerStatus) {
  const int kI = 0;
  StatusOr<const int*> good(&kI);
  EXPECT_TRUE(good.ok());
  StatusOr<const int*> bad(Status::CANCELLED);
  EXPECT_EQ(Status::CANCELLED, bad.status());
}
    
    
    {  typedef integral_constant<int, 1> one_type;
  EXPECT_EQ(1, one_type::value);
}
    
    int main(int argc, const char** argv) {
  FileInputStream fin(STDIN_FILENO);
  GzipInputStream in(&fin);
    }
    
    using google::protobuf::util::TimeUtil;
    
      virtual void PrintDefaultValueString(std::ostream &os) const {  // NOLINT(*)
    std::string s;
    caffe::NetParameter np;
    // Avoid wasting time making a copy -- just push in out default object's pointer
    np.mutable_layer()->AddAllocated(const_cast<::caffe::LayerParameter *>(&default_value_));
    google::protobuf::TextFormat::PrintToString(np, &s);
    np.mutable_layer()->ReleaseLast();
    os << '\'' << s << '\'';
  }
    
    #if MXNET_USE_OPENCV
#include <opencv2/opencv.hpp>
#include <vector>  // NOLINT(*)
#include <utility> // NOLINT(*)
#include <string> // NOLINT(*)
    
      /*!
   * \brief sets two bit gradient compression
   * \param threshold float value used for thresholding gradients
   */
  void SetTwoBitCompression(const float threshold);
    
    template<typename xpu>
void NDArrayOp<xpu>::Backward(const OpContext &ctx,
                    const std::vector<TBlob> &out_grad,
                    const std::vector<TBlob> &in_data,
                    const std::vector<TBlob> &out_data,
                    const std::vector<OpReqType> &req,
                    const std::vector<TBlob> &in_grad,
                    const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }
    
    MXNET_REGISTER_OP_PROPERTY(IdentityAttachKLSparseReg, IdentityAttachKLSparseRegProp)
.describe('Apply a sparse regularization to the output a sigmoid activation function.')
.add_argument('data', 'NDArray-or-Symbol', 'Input data.')
.add_arguments(IdentityAttachKLSparseRegParam::__FIELDS__());
    
            friend bool operator==(Rational const& lhs, Rational const& rhs);
        friend bool operator!=(Rational const& lhs, Rational const& rhs);
        friend bool operator<(Rational const& lhs, Rational const& rhs);
        friend bool operator>(Rational const& lhs, Rational const& rhs);
        friend bool operator<=(Rational const& lhs, Rational const& rhs);
        friend bool operator>=(Rational const& lhs, Rational const& rhs);
    
    Rational RationalMath::Frac(Rational const& rat)
{
    PRAT prat = rat.ToPRAT();
    try
    {
        fracrat(&prat, RATIONAL_BASE, RATIONAL_PRECISION);
    }
    catch (uint32_t error)
    {
        destroyrat(prat);
        throw(error);
    }
    }
    
        Rational Exp(Rational const& rat);
    Rational Log(Rational const& rat);
    Rational Log10(Rational const& rat);
    
        Rational operator<<(Rational lhs, Rational const& rhs)
    {
        lhs <<= rhs;
        return lhs;
    }
    
        case IDC_MPLUS:
    {
        /* MPLUS adds m_currentVal to immediate memory and kills the 'mem'   */
        /* indicator if the result is zero.                           */
        Rational result = *m_memoryValue + m_currentVal;
        m_memoryValue = make_unique<Rational>(TruncateNumForIntMath(result)); // Memory should follow the current int mode
    }
    
    #define SMALL_ENOUGH_RAT(a, precision) (zernum((a)->pp) || ((((a)->pq->cdigit + (a)->pq->exp) - ((a)->pp->cdigit + (a)->pp->exp) - 1) * g_ratio > precision))
    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
    UBool
FixedSortKeyByteSink::Resize(int32_t /*appendCapacity*/, int32_t /*length*/) {
    return FALSE;
}
    
    UnicodeString &ScientificNumberFormatter::format(
        const Formattable &number,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    UnicodeString original;
    FieldPositionIterator fpi;
    fDecimalFormat->format(number, original, &fpi, status);
    return fStyle->format(
            original,
            fpi,
            fPreExponent,
            *fStaticSets,
            appendTo,
            status);
}
    
    #ifndef __SCRIPTSET_H__
#define __SCRIPTSET_H__
    
    // public get and set methods ----------------------------------------
    
      void BeforeFirst() override {
    parser_->BeforeFirst();
  }
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
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
    
    void SimpleCSRSource::CopyFrom(DMatrix* src) {
  this->Clear();
  this->info = src->Info();
  for (const auto &batch : src->GetRowBatches()) {
    page_.Push(batch);
  }
}