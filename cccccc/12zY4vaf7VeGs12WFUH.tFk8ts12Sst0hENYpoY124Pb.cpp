
        
        namespace atom {
    }
    
    namespace base {
class SupportsUserData;
}
    
    AboutProtocolHandler::~AboutProtocolHandler() {}
    
    #endif  // ATOM_BROWSER_NET_URL_REQUEST_ABOUT_JOB_H_

    
    #include 'atom/browser/osr/osr_view_proxy.h'
    
    
    {}  // namespace relauncher

    
        Rational Exp(Rational const& rat);
    Rational Log(Rational const& rat);
    Rational Log10(Rational const& rat);
    
    inline constexpr auto IDS_DIVBYZERO = IDS_ERRORS_FIRST;
inline constexpr auto IDS_DOMAIN = IDS_ERRORS_FIRST + 1;
inline constexpr auto IDS_UNDEFINED = IDS_ERRORS_FIRST + 2;
inline constexpr auto IDS_POS_INFINITY = IDS_ERRORS_FIRST + 3;
inline constexpr auto IDS_NEG_INFINITY = IDS_ERRORS_FIRST + 4;
inline constexpr auto IDS_NOMEM = IDS_ERRORS_FIRST + 6;
inline constexpr auto IDS_TOOMANY = IDS_ERRORS_FIRST + 7;
inline constexpr auto IDS_OVERFLOW = IDS_ERRORS_FIRST + 8;
inline constexpr auto IDS_NORESULT = IDS_ERRORS_FIRST + 9;
inline constexpr auto IDS_INSUFFICIENT_DATA = IDS_ERRORS_FIRST + 10;
    
    private:
    std::shared_ptr<IHistoryDisplay> m_pHistoryDisplay;
    ICalcDisplay* m_pCalcDisplay;
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
    /*! \brief interface of objective function */
class ObjFunction {
 public:
  /*! \brief virtual destructor */
  virtual ~ObjFunction() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Configure the objective with the specified parameters.
   * \param args arguments to the objective function.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief Get gradient over each of predictions, given existing information.
   * \param preds prediction of current round
   * \param info information about labels, weights, groups in rank
   * \param iteration current iteration number.
   * \param out_gpair output of get gradient, saves gradient and second order gradient in
   */
  virtual void GetGradient(const HostDeviceVector<bst_float>& preds,
                           const MetaInfo& info,
                           int iteration,
                           HostDeviceVector<GradientPair>* out_gpair) = 0;
    }
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }