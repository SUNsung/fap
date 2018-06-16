
        
        // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
      // The type used for offsets into the buffer.
  typedef std::size_t size_type;
    
    
    {private:
  Handler handler_;
};
    
      // Constructor for a half fenced block.
  explicit gcc_arm_fenced_block(half_t)
  {
  }
    
    
    {
    {
    {      if ((events[i].events & (POLLERR | POLLHUP)) != 0
            && !more_except && !more_reads && !more_writes)
      {
        // If we have an event and no operations associated with the
        // descriptor then we need to delete the descriptor from /dev/poll.
        // The poll operation can produce POLLHUP or POLLERR events when there
        // is no operation pending, so if we do not remove the descriptor we
        // can end up in a tight polling loop.
        ::pollfd ev = { 0, 0, 0 };
        ev.fd = descriptor;
        ev.events = POLLREMOVE;
        ev.revents = 0;
        ::write(dev_poll_fd_, &ev, sizeof(ev));
      }
      else
      {
        ::pollfd ev = { 0, 0, 0 };
        ev.fd = descriptor;
        ev.events = POLLERR | POLLHUP;
        if (more_reads)
          ev.events |= POLLIN;
        if (more_writes)
          ev.events |= POLLOUT;
        if (more_except)
          ev.events |= POLLPRI;
        ev.revents = 0;
        int result = ::write(dev_poll_fd_, &ev, sizeof(ev));
        if (result != sizeof(ev))
        {
          boost::system::error_code ec(errno,
              boost::asio::error::get_system_category());
          for (int j = 0; j < max_ops; ++j)
            op_queue_[j].cancel_operations(descriptor, ops, ec);
        }
      }
    }
  }
  timer_queues_.get_ready_timers(ops);
}
    
    
    {
    {
    {  for (const auto& share_line : osquery::split(content, '\n')) {
    genNFSShare(share_line, results);
  }
  return results;
}
}
}

    
      // All control should be from a single daemon.
  // Wrap all IOCTL API handling in locks to guarantee proper use.
  lck_mtx_lock(osquery.mtx);
  switch (cmd) {
  // Daemon is requesting a new subscription (e.g., monitored path).
  case OSQUERY_IOCTL_SUBSCRIPTION:
    sub = (osquery_subscription_args_t *)data;
    if ((err = subscribe_to_event(sub->event, sub->subscribe))) {
      goto error_exit;
    }
    break;
    }
    
    
    {
    {  // Set something that doesn't make sense
  mPlatformType = PlatformType::TYPE_WINDOWS | PlatformType::TYPE_BSD;
  EXPECT_FALSE(isPlatform(PlatformType::TYPE_LINUX, mPlatformType));
  EXPECT_FALSE(isPlatform(PlatformType::TYPE_OSX, mPlatformType));
}
}

    
      // Wait for the permissions thread to write once.
  EXPECT_TRUE(waitForTick(pool_thread));
    
      auto status = ::asctime_s(buffer.data(), buffer.size(), timeptr);
  if (status != 0) {
    return '';
  }
    
    // Define the default set of database plugin operation tests.
CREATE_DATABASE_TESTS(RocksDBDatabasePluginTests);
    
    /**
 * @brief Pretty print a QueryData object
 *
 * This is a helper method which called osquery::beautify on the supplied
 * QueryData object and prints the results to stdout.
 *
 * @param results The QueryData object to print
 * @param columns The order of the keys (since maps are unordered)
 * @param lengths A mutable set of column lengths
 */
void prettyPrint(const QueryData& results,
                 const std::vector<std::string>& columns,
                 std::map<std::string, size_t>& lengths);
    
    /*!
 * \brief Internal data structured used by XGBoost during training.
 *  There are two ways to create a customized DMatrix that reads in user defined-format.
 *
 *  - Provide a dmlc::Parser and pass into the DMatrix::Create
 *  - Alternatively, if data can be represented by an URL, define a new dmlc::Parser and register by DMLC_REGISTER_DATA_PARSER;
 *      - This works best for user defined data input source, such as data-base, filesystem.
 *  - Provide a DataSource, that can be passed to DMatrix::Create
 *      This can be used to re-use inmemory data structure into DMatrix.
 */
class DMatrix {
 public:
  /*! \brief default constructor */
  DMatrix()  = default;
  /*! \brief meta information of the dataset */
  virtual MetaInfo& Info() = 0;
  /*! \brief meta information of the dataset */
  virtual const MetaInfo& Info() const = 0;
  /*!
   * \brief get the row iterator, reset to beginning position
   * \note Only either RowIterator or  column Iterator can be active.
   */
  virtual dmlc::DataIter<SparsePage>* RowIterator() = 0;
  /*!\brief get column iterator, reset to the beginning position */
  virtual dmlc::DataIter<SparsePage>* ColIterator() = 0;
  /*!
   * \brief check if column access is supported, if not, initialize column access.
   * \param max_row_perbatch auxiliary information, maximum row used in each column batch.
   *         this is a hint information that can be ignored by the implementation.
   * \param sorted If column features should be in sorted order           
   * \return Number of column blocks in the column access.
   */
  virtual void InitColAccess(size_t max_row_perbatch, bool sorted) = 0;
  // the following are column meta data, should be able to answer them fast.
  /*! \return whether column access is enabled */
  virtual bool HaveColAccess(bool sorted) const = 0;
  /*! \return Whether the data columns single column block. */
  virtual bool SingleColBlock() const = 0;
  /*! \brief get number of non-missing entries in column */
  virtual size_t GetColSize(size_t cidx) const = 0;
  /*! \brief get column density */
  virtual float GetColDensity(size_t cidx) const = 0;
  /*! \return reference of buffered rowset, in column access */
  virtual const RowSet& BufferedRowset() const = 0;
  /*! \brief virtual destructor */
  virtual ~DMatrix() = default;
  /*!
   * \brief Save DMatrix to local file.
   *  The saved file only works for non-sharded dataset(single machine training).
   *  This API is deprecated and dis-encouraged to use.
   * \param fname The file name to be saved.
   * \return The created DMatrix.
   */
  virtual void SaveToLocalFile(const std::string& fname);
  /*!
   * \brief Load DMatrix from URI.
   * \param uri The URI of input.
   * \param silent Whether print information during loading.
   * \param load_row_split Flag to read in part of rows, divided among the workers in distributed mode.
   * \param file_format The format type of the file, used for dmlc::Parser::Create.
   *   By default 'auto' will be able to load in both local binary file.
   * \return The created DMatrix.
   */
  static DMatrix* Load(const std::string& uri,
                       bool silent,
                       bool load_row_split,
                       const std::string& file_format = 'auto');
  /*!
   * \brief create a new DMatrix, by wrapping a row_iterator, and meta info.
   * \param source The source iterator of the data, the create function takes ownership of the source.
   * \param cache_prefix The path to prefix of temporary cache file of the DMatrix when used in external memory mode.
   *     This can be nullptr for common cases, and in-memory mode will be used.
   * \return a Created DMatrix.
   */
  static DMatrix* Create(std::unique_ptr<DataSource>&& source,
                         const std::string& cache_prefix = '');
  /*!
   * \brief Create a DMatrix by loading data from parser.
   *  Parser can later be deleted after the DMatrix i created.
   * \param parser The input data parser
   * \param cache_prefix The path to prefix of temporary cache file of the DMatrix when used in external memory mode.
   *     This can be nullptr for common cases, and in-memory mode will be used.
   * \sa dmlc::Parser
   * \note dmlc-core provides efficient distributed data parser for libsvm format.
   *  User can create and register customized parser to load their own format using DMLC_REGISTER_DATA_PARSER.
   *  See 'dmlc-core/include/dmlc/data.h' for detail.
   * \return A created DMatrix.
   */
  static DMatrix* Create(dmlc::Parser<uint32_t>* parser,
                         const std::string& cache_prefix = '');
    }
    
      /*!
   * \brief generate predictions for given feature matrix
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictBatch(DMatrix* dmat,
                            HostDeviceVector<bst_float>* out_preds,
                            unsigned ntree_limit = 0) = 0;
  /*!
   * \brief online prediction function, predict score for one instance at a time
   *  NOTE: use the batch prediction interface if possible, batch prediction is usually
   *        more efficient than online prediction
   *        This function is NOT threadsafe, make sure you only call from one thread
   *
   * \param inst the instance you want to predict
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction
   * \param root_index the root index
   * \sa Predict
   */
  virtual void PredictInstance(const SparsePage::Inst& inst,
                       std::vector<bst_float>* out_preds,
                       unsigned ntree_limit = 0,
                       unsigned root_index = 0) = 0;
  /*!
   * \brief predict the leaf index of each tree, the output will be nsample * ntree vector
   *        this is only valid in gbtree predictor
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictLeaf(DMatrix* dmat,
                           std::vector<bst_float>* out_preds,
                           unsigned ntree_limit = 0) = 0;
    
    namespace xgboost {
/*!
 * \brief Learner class that does training and prediction.
 *  This is the user facing module of xgboost training.
 *  The Load/Save function corresponds to the model used in python/R.
 *  \code
 *
 *  std::unique_ptr<Learner> learner(new Learner::Create(cache_mats));
 *  learner.Configure(configs);
 *
 *  for (int iter = 0; iter < max_iter; ++iter) {
 *    learner->UpdateOneIter(iter, train_mat);
 *    LOG(INFO) << learner->EvalOneIter(iter, data_sets, data_names);
 *  }
 *
 *  \endcode
 */
class Learner : public rabit::Serializable {
 public:
  /*! \brief virtual destructor */
  ~Learner() override = default;
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
   * \brief Initialize the model using the specified configurations via Configure.
   *  An model have to be either Loaded or initialized before Update/Predict/Save can be called.
   */
  virtual void InitModel() = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  void Load(dmlc::Stream* fi) override = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  void Save(dmlc::Stream* fo) const override = 0;
  /*!
   * \brief update the model for one iteration
   *  With the specified objective function.
   * \param iter current iteration number
   * \param train reference to the data matrix.
   */
  virtual void UpdateOneIter(int iter, DMatrix* train) = 0;
  /*!
   * \brief Do customized gradient boosting with in_gpair.
   *  in_gair can be mutated after this call.
   * \param iter current iteration number
   * \param train reference to the data matrix.
   * \param in_gpair The input gradient statistics.
   */
  virtual void BoostOneIter(int iter,
                            DMatrix* train,
                            HostDeviceVector<GradientPair>* in_gpair) = 0;
  /*!
   * \brief evaluate the model for specific iteration using the configured metrics.
   * \param iter iteration number
   * \param data_sets datasets to be evaluated.
   * \param data_names name of each dataset
   * \return a string corresponding to the evaluation result
   */
  virtual std::string EvalOneIter(int iter,
                                  const std::vector<DMatrix*>& data_sets,
                                  const std::vector<std::string>& data_names) = 0;
  /*!
   * \brief get prediction given the model.
   * \param data input data
   * \param output_margin whether to only predict margin value instead of transformed prediction
   * \param out_preds output vector that stores the prediction
   * \param ntree_limit limit number of trees used for boosted tree
   *   predictor, when it equals 0, this means we are using all the trees
   * \param pred_leaf whether to only predict the leaf index of each tree in a boosted tree predictor
   * \param pred_contribs whether to only predict the feature contributions
   * \param approx_contribs whether to approximate the feature contributions for speed
   * \param pred_interactions whether to compute the feature pair contributions
   */
  virtual void Predict(DMatrix* data,
                       bool output_margin,
                       HostDeviceVector<bst_float> *out_preds,
                       unsigned ntree_limit = 0,
                       bool pred_leaf = false,
                       bool pred_contribs = false,
                       bool approx_contribs = false,
                       bool pred_interactions = false) const = 0;
    }
    }
    
    #include <dmlc/io.h>
#include <dmlc/parameter.h>
#include <limits>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <tuple>
#include './base.h'
#include './data.h'
#include './logging.h'
#include './feature_map.h'
    
      /*! \brief page size 256 MB */
  static const size_t kPageSize = 256UL << 20UL;
  /*! \brief Maximum number of rows per batch. */
  static const size_t kMaxRowPerBatch = 64UL << 10UL;
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    if (!fi->Read(&(page->offset))) return false;
    CHECK_NE(page->offset.size(), 0U) << 'Invalid SparsePage file';
    page->data.resize(page->offset.back());
    if (page->data.size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(page->data),
                        (page->data).size() * sizeof(Entry)),
               (page->data).size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
    
    
    {  // read in the cache files.
  for (size_t i = 0; i < cache_shards.size(); ++i) {
    std::string name_row = cache_shards[i] + '.row.page';
    files_[i].reset(dmlc::SeekStream::CreateForRead(name_row.c_str()));
    dmlc::SeekStream* fi = files_[i].get();
    std::string format;
    CHECK(fi->Read(&format)) << 'Invalid page format';
    formats_[i].reset(SparsePageFormat::Create(format));
    SparsePageFormat* fmt = formats_[i].get();
    size_t fbegin = fi->Tell();
    prefetchers_[i].reset(new dmlc::ThreadedIter<SparsePage>(4));
    prefetchers_[i]->Init([fi, fmt] (SparsePage** dptr) {
        if (*dptr == nullptr) {
          *dptr = new SparsePage();
        }
        return fmt->Read(*dptr, fi);
      }, [fi, fbegin] () { fi->Seek(fbegin); });
  }
}
    
      // Returns the distance map between the baseline image and the image in the
  // last Compare() call (or the baseline image, if Compare() was not called
  // yet).
  // The dimensions of the distance map are the same as the baseline image.
  // The interpretation of the distance values depend on the comparator used.
  virtual const std::vector<float> distmap() const = 0;
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    
    {}  // namespace guetzli
    
    #include 'guetzli/jpeg_data.h'
    
    #include <algorithm>
#include <string.h>
    
      std::vector<uint8_t> ToSRGB(int xmin, int ymin, int xsize, int ysize) const;
    
    
    {}  // namespace guetzli