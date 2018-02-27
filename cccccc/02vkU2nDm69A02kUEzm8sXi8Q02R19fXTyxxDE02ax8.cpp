
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    namespace leveldb {
    }
    
    namespace {
class MemTableInserter : public WriteBatch::Handler {
 public:
  SequenceNumber sequence_;
  MemTable* mem_;
    }
    }
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    /// Create a new modifiable buffer from an existing buffer.
/**
 * @returns <tt>mutable_buffers_1(b)</tt>.
 */
inline mutable_buffers_1 buffer(const mutable_buffer& b)
{
  return mutable_buffers_1(b);
}
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      descriptor_read_op(int descriptor,
      const MutableBufferSequence& buffers, Handler& handler)
    : descriptor_read_op_base<MutableBufferSequence>(
        descriptor, buffers, &descriptor_read_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
    #define BOOST_ASIO_SHUTDOWN_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'ShutdownHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
        // Update number of buckets and initialise all buckets to empty.
    bucket_type* tmp = new bucket_type[num_buckets_];
    delete[] buckets_;
    buckets_ = tmp;
    for (std::size_t i = 0; i < num_buckets_; ++i)
      buckets_[i].first = buckets_[i].last = end_iter;
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      r['sycall_addr_modified'] = syscall_addr_modified;
  r['text_segment_hash'] = text_segment_hash;
  results.push_back(r);
    
    /**
 * @brief Singleton for queuing asynchronous tasks to be executed in parallel
 *
 * Dispatcher is a singleton which can be used to coordinate the parallel
 * execution of asynchronous tasks across an application. Internally,
 * Dispatcher is back by the Apache Thrift thread pool.
 */
class Dispatcher : private boost::noncopyable {
 public:
  /**
   * @brief The primary way to access the Dispatcher factory facility.
   *
   * @code{.cpp} auto dispatch = osquery::Dispatcher::instance(); @endcode
   *
   * @return The osquery::Dispatcher instance.
   */
  static Dispatcher& instance() {
    static Dispatcher instance;
    return instance;
  }
    }
    
    /**
 * @brief Request the extensions API to autoload any appropriate extensions.
 *
 * Extensions may be 'autoloaded' using the `extensions_autoload` command line
 * argument. loadExtensions should be called before any plugin or registry item
 * is used. This allows appropriate extensions to expose plugin requirements.
 *
 * An 'appropriate' extension is one within the `extensions_autoload` search
 * path with file ownership equivalent or greater (root) than the osquery
 * process requesting autoload.
 */
void loadExtensions();
    
    #include <ctime>
#include <memory>
#include <string>
    
      /*
   * @brief Helper function to POST a carve to the graph endpoint.
   *
   * Once all of the files have been carved and the tgz has been
   * created, we POST the carved file to an endpoint specified by the
   * carver_start_endpoint and carver_continue_endpoint
   */
  Status postCarve(const boost::filesystem::path& path);
    
    
    {  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  c.reset();
}
    
    template<typename DType>
inline void CompressArray<DType>::Compress(int chunk_id, bool use_hc) {
  CHECK_LT(static_cast<size_t>(chunk_id + 1), raw_chunks_.size());
  std::string& buf = out_buffer_[chunk_id];
  size_t raw_chunk_size = (raw_chunks_[chunk_id + 1] - raw_chunks_[chunk_id]) * sizeof(DType);
  int bound = LZ4_compressBound(raw_chunk_size);
  CHECK_NE(bound, 0);
  buf.resize(bound);
  int encoded_size;
  if (use_hc) {
    encoded_size = LZ4_compress_HC(
        reinterpret_cast<char*>(dmlc::BeginPtr(data) + raw_chunks_[chunk_id]),
        dmlc::BeginPtr(buf), raw_chunk_size, buf.length(), 9);
  } else {
    encoded_size = LZ4_compress_default(
        reinterpret_cast<char*>(dmlc::BeginPtr(data) + raw_chunks_[chunk_id]),
        dmlc::BeginPtr(buf), raw_chunk_size, buf.length());
  }
  CHECK_NE(encoded_size, 0);
  CHECK_LE(static_cast<size_t>(encoded_size), buf.length());
  buf.resize(encoded_size);
}
    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher.reset(TreeUpdater::Create('sync'));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
    syncher->Init(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    for (size_t i = 0; i < trees.size(); ++i) {
      this->DoPrune(*trees[i]);
    }
    param.learning_rate = lr;
    syncher->Update(gpair, p_fmat, trees);
  }
    }
    
        gmat.GetFeatureCounts(&feature_counts_[0]);
    // classify features
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      if (static_cast<double>(feature_counts_[fid])
                 < param.sparse_threshold * nrow) {
        type_[fid] = kSparseColumn;
      } else {
        type_[fid] = kDenseColumn;
      }
    }