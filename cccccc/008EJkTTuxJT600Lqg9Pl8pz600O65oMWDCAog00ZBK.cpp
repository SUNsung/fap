
        
            Rational Sin(Rational const& rat, ANGLE_TYPE angletype);
    Rational Cos(Rational const& rat, ANGLE_TYPE angletype);
    Rational Tan(Rational const& rat, ANGLE_TYPE angletype);
    Rational ASin(Rational const& rat, ANGLE_TYPE angletype);
    Rational ACos(Rational const& rat, ANGLE_TYPE angletype);
    Rational ATan(Rational const& rat, ANGLE_TYPE angletype);
    
    
    {    return result;
}
    
        if (radixtype >= HEX_RADIX && radixtype <= BIN_RADIX)
    {
        m_radix = NRadixFromRadixType(radixtype);
        // radixtype is not even saved
    }
    
    class IUnaryCommand : public IOperatorCommand
{
public:
    virtual const std::shared_ptr<CalculatorVector<int>>& GetCommands() const = 0;
    virtual void SetCommands(int command1, int command2) = 0;
};
    
    TEST(SparsePage, PushCSCAfterTranspose) {
  const int n_entries = 9;
  std::unique_ptr<DMatrix> dmat = CreateSparsePageDMatrix(n_entries, 64UL);
  const int ncols = dmat->Info().num_col_;
  SparsePage page; // Consolidated sparse page
  for (const auto &batch : dmat->GetRowBatches()) {
    // Transpose each batch and push
    SparsePage tmp = batch.GetTranspose(ncols);
    page.PushCSC(tmp);
  }
    }
    
    /*!
 * \brief builder for histograms of gradient statistics
 */
class GHistBuilder {
 public:
  // initialize builder
  inline void Init(size_t nthread, uint32_t nbins) {
    nthread_ = nthread;
    nbins_ = nbins;
    thread_init_.resize(nthread_);
  }
    }
    
      std::vector<std::vector<unsigned>> groups;
  std::vector<std::vector<bool>> conflict_marks;
  std::vector<size_t> group_nnz;
  std::vector<size_t> group_conflict_cnt;
  const auto max_conflict_cnt
    = static_cast<size_t>(param.max_conflict_rate * nrow);
    
    #include <dmlc/registry.h>
#include <xgboost/base.h>
#include <xgboost/data.h>
#include <xgboost/generic_parameters.h>
#include <functional>
#include <string>
#include <utility>
#include <vector>
#include '../../src/gbm/gblinear_model.h'
#include '../../src/common/host_device_vector.h'
    
    
    {}  // namespace xgboost
#endif  // XGBOOST_TREE_UPDATER_H_

    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';