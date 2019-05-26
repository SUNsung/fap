
        
                        // Now safe to clean-up client app's process-info & thread
                CloseHandle(piClient.hThread);
                CloseHandle(piClient.hProcess);
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    /*!
 * \brief template for all quantile sketch algorithm
 *        that uses merge/prune scheme
 * \tparam DType type of data content
 * \tparam RType type of rank
 * \tparam TSummary actual summary data structure it uses
 */
template<typename DType, typename RType, class TSummary>
class QuantileSketchTemplate {
 public:
  /*! \brief type of summary type */
  using Summary = TSummary;
  /*! \brief the entry type */
  using Entry = typename Summary::Entry;
  /*! \brief same as summary, but use STL to backup the space */
  struct SummaryContainer : public Summary {
    std::vector<Entry> space;
    SummaryContainer(const SummaryContainer &src) : Summary(nullptr, src.size) {
      this->space = src.space;
      this->data = dmlc::BeginPtr(this->space);
    }
    SummaryContainer() : Summary(nullptr, 0) {
    }
    /*! \brief reserve space for summary */
    inline void Reserve(size_t size) {
      if (size > space.size()) {
        space.resize(size);
        this->data = dmlc::BeginPtr(space);
      }
    }
    /*!
     * \brief set the space to be merge of all Summary arrays
     * \param begin beginning position in the summary array
     * \param end ending position in the Summary array
     */
    inline void SetMerge(const Summary *begin,
                         const Summary *end) {
      CHECK(begin < end) << 'can not set combine to empty instance';
      size_t len = end - begin;
      if (len == 1) {
        this->Reserve(begin[0].size);
        this->CopyFrom(begin[0]);
      } else if (len == 2) {
        this->Reserve(begin[0].size + begin[1].size);
        this->SetMerge(begin[0], begin[1]);
      } else {
        // recursive merge
        SummaryContainer lhs, rhs;
        lhs.SetCombine(begin, begin + len / 2);
        rhs.SetCombine(begin + len / 2, end);
        this->Reserve(lhs.size + rhs.size);
        this->SetCombine(lhs, rhs);
      }
    }
    /*!
     * \brief do elementwise combination of summary array
     *        this[i] = combine(this[i], src[i]) for each i
     * \param src the source summary
     * \param max_nbyte maximum number of byte allowed in here
     */
    inline void Reduce(const Summary &src, size_t max_nbyte) {
      this->Reserve((max_nbyte - sizeof(this->size)) / sizeof(Entry));
      SummaryContainer temp;
      temp.Reserve(this->size + src.size);
      temp.SetCombine(*this, src);
      this->SetPrune(temp, space.size());
    }
    /*! \brief return the number of bytes this data structure cost in serialization */
    inline static size_t CalcMemCost(size_t nentry) {
      return sizeof(size_t) + sizeof(Entry) * nentry;
    }
    /*! \brief save the data structure into stream */
    template<typename TStream>
    inline void Save(TStream &fo) const {  // NOLINT(*)
      fo.Write(&(this->size), sizeof(this->size));
      if (this->size != 0) {
        fo.Write(this->data, this->size * sizeof(Entry));
      }
    }
    /*! \brief load data structure from input stream */
    template<typename TStream>
    inline void Load(TStream &fi) {  // NOLINT(*)
      CHECK_EQ(fi.Read(&this->size, sizeof(this->size)), sizeof(this->size));
      this->Reserve(this->size);
      if (this->size != 0) {
        CHECK_EQ(fi.Read(this->data, this->size * sizeof(Entry)),
                 this->size * sizeof(Entry));
      }
    }
  };
  /*!
   * \brief initialize the quantile sketch, given the performance specification
   * \param maxn maximum number of data points can be feed into sketch
   * \param eps accuracy level of summary
   */
  inline void Init(size_t maxn, double eps) {
    LimitSizeLevel(maxn, eps, &nlevel, &limit_size);
    // lazy reserve the space, if there is only one value, no need to allocate space
    inqueue.queue.resize(1);
    inqueue.qtail = 0;
    data.clear();
    level.clear();
  }
    }
    
    #include <dmlc/registry.h>
#include <vector>
#include <utility>
#include <string>
#include <functional>
#include <memory>
#include './base.h'
#include './data.h'
#include './objective.h'
#include './feature_map.h'
#include '../../src/common/host_device_vector.h'
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
    #include <boost/algorithm/string/predicate.hpp>
    
        // We now try to find device information based on any explicit storage
    // controller info.  Once we find one, we can search until the max ID of
    // that controller, and assume that all information with that controller
    // has been retrieved.
    for (size_t i = 0; i <= type->maxID; i++) {
      std::string full_type = type->driver + std::to_string(i);
    }
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    #include <osquery/tests/integration/tables/helper.h>