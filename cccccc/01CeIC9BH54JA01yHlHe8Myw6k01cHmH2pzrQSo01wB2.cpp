
        
          // Successfully taking the lock means we can replace it with the a new symlink
  // lock. We never flock() the lock file from now on. I.e. we assume that an
  // old version of Chrome will not run with the same user data dir after this
  // version has run.
  if (!base::DeleteFile(lock_path, false)) {
    PLOG(ERROR) << 'Could not delete old singleton lock.';
    return false;
  }
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('autoUpdater', AutoUpdater::Create(isolate));
  dict.Set('AutoUpdater', AutoUpdater::GetConstructor(isolate)
                              ->GetFunction(context)
                              .ToLocalChecked());
}
    
    #endif  // SHELL_BROWSER_API_ATOM_API_AUTO_UPDATER_H_

    
      // Helpers.
    
    #define MB_TITLE L'Cmder Launcher'
#define SHELL_MENU_REGISTRY_PATH_BACKGROUND L'Directory\\Background\\shell\\Cmder'
#define SHELL_MENU_REGISTRY_PATH_LISTITEM L'Directory\\shell\\Cmder'
#define SHELL_MENU_REGISTRY_DRIVE_PATH_BACKGROUND L'Drive\\Background\\shell\\Cmder'
#define SHELL_MENU_REGISTRY_DRIVE_PATH_LISTITEM L'Drive\\shell\\Cmder'
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1)  num_threads(nthread_write_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Compress(i, use_lz4_hc_);
      } else {
        value_.Compress(i - nindex, use_lz4_hc_);
      }
    }
    index_.Write(fo);
    value_.Write(fo);
    // statistics
    raw_bytes_index_ += index_.RawBytes() * sizeof(bst_uint) / sizeof(StorageIndex);
    raw_bytes_value_ += value_.RawBytes();
    encoded_bytes_index_ += index_.EncodedBytes();
    encoded_bytes_value_ += value_.EncodedBytes();
    raw_bytes_ += offset_vec.size() * sizeof(size_t);
  }
    
    
    {// The number of bits required to represent a given unsigned range
static size_t SymbolBits(size_t num_symbols) {
  auto bits = std::ceil(std::log2(num_symbols));
  return std::max(static_cast<size_t>(bits), size_t(1));
}
}  // namespace detail
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
      /**
   * \brief Initialise this object before use.
   *
   * \param num_col
   * \param colsample_bynode
   * \param colsample_bylevel
   * \param colsample_bytree
   * \param skip_index_0      (Optional) True to skip index 0.
   */
  void Init(int64_t num_col, float colsample_bynode, float colsample_bylevel,
            float colsample_bytree, bool skip_index_0 = false) {
    colsample_bylevel_ = colsample_bylevel;
    colsample_bytree_ = colsample_bytree;
    colsample_bynode_ = colsample_bynode;
    }
    
    // allows to write cudaFunction() || 'error'   (CUDA runtime)
static void operator||(cudaError_t rc, const char *msg)
{
    if (rc != cudaSuccess)
        RuntimeError('%s: %s (cuda error %d)', msg, cudaGetErrorString(rc), (int) rc);
}
    
                nodePtr = builder.BatchNormalization(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, spatial, normTimeConst, blendTimeConst, epsilon, useCntkEngine, disableRegularization, imageLayoutKind, name);
    
    
    {
    {                if (m_addDropoutNodes)
                    input = builder.Dropout(output);
                else
                    input = output;
            }
        }
    
        if (config(L'timestamping', false))
        ProgressTracing::SetTimestampingFlag();
    
        // ////////////////////////////////////////////////////////////////////////
    //    sub-graph
    // ////////////////////////////////////////////////////////////////////////
    // subgraph source
    fstream << L'subgraph {\n';
    fstream << L'\t\t rank=source ; ';
    line.clear();
    for (const auto& x : m_featureNodes)
        line = line + msra::strfun::wstrprintf(L'\'%ls\' ', x->GetName().c_str());
    fstream << line << L'\n}\n';
    
    
    {            specifiedMBSize *= numParallelSequences; // assume 'specifiedMBSize' refers to truncation size
        }
        // end bug post-fix
        // TODO: This ^^ should go away once SGD gets fixed to take the truncation size as a parameter.
    
    template std::shared_ptr<IDistGradAggregator<float>> GetSimpleDistGradAggregator<float>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    // WriteController is controlling write stalls in our write code-path. Write
// stalls happen when compaction can't keep up with write rate.
// All of the methods here (including WriteControllerToken's destructors) need
// to be called while holding DB mutex
class WriteController {
 public:
  explicit WriteController(uint64_t _delayed_write_rate = 1024u * 1024u * 32u,
                           int64_t low_pri_rate_bytes_per_sec = 1024 * 1024)
      : total_stopped_(0),
        total_delayed_(0),
        total_compaction_pressure_(0),
        bytes_left_(0),
        last_refill_time_(0),
        low_pri_rate_limiter_(
            NewGenericRateLimiter(low_pri_rate_bytes_per_sec)) {
    set_max_delayed_write_rate(_delayed_write_rate);
  }
  ~WriteController() = default;
    }
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = db->Put(write_options, 'xyz', 'zzz');
    
      // Create column family, and rocksdb will persist the options.
  ColumnFamilyHandle* cf;
  s = db->CreateColumnFamily(ColumnFamilyOptions(), 'new_cf', &cf);
  assert(s.ok());
    
    #ifndef ROCKSDB_LITE
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    // PersistentCache
//
// Persistent cache interface for caching IO pages on a persistent medium. The
// cache interface is specifically designed for persistent read cache.
class PersistentCache {
 public:
  typedef std::vector<std::map<std::string, double>> StatsType;
    }
    
    
    { private:
  DB* db_;
  const Snapshot* snapshot_;
};
    
    namespace rocksdb {
    }