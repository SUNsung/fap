
        
        
/**********************************************************************
 * LLSQ::remove
 *
 * Delete an element from the acculuator.
 **********************************************************************/
    
    void QLSQ::remove(double x, double y) {
  if (n <= 0) {
    tprintf('Can't remove an element from an empty QLSQ accumulator!\n');
    return;
  }
  n--;                           // Count elements.
  sigx -= x;                     // Update accumulators.
  sigy -= y;
  sigxx -= x * x;
  sigxy -= x * y;
  sigyy -= y * y;
  sigxxx -= static_cast<long double>(x) * x * x;
  sigxxy -= static_cast<long double>(x) * x * y;
  sigxxxx -= static_cast<long double>(x) * x * x * x;
}
    
    /* Returns true if the |stream| was successfully started and is now done
 * (succeeded, canceled, or failed).
 * Returns false if the |stream| stream is not yet started or is in progress.
 */
GRPC_SUPPORT_EXPORT
bool bidirectional_stream_is_done(bidirectional_stream* stream);
    
    #endif

    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    
    {}  // namespace
    
    namespace grpc {
namespace testing {
    }
    }
    
    double UsageTimer::Now() {
  auto ts = gpr_now(GPR_CLOCK_REALTIME);
  return ts.tv_sec + 1e-9 * ts.tv_nsec;
}
    
      Result Mark() const;
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    grpc::string DescribeMethod(const grpc::protobuf::MethodDescriptor* method) {
  std::stringstream result;
  result << '  rpc ' << method->name()
         << (method->client_streaming() ? '(stream ' : '(')
         << method->input_type()->full_name() << ') returns '
         << (method->server_streaming() ? '(stream ' : '(')
         << method->output_type()->full_name() << ') {}\n';
  if (method->options().deprecated()) {
    result << ' DEPRECATED';
  }
  return result.str();
}
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    #else
/*!
 * \brief global random engine
 */
typedef RandomEngine GlobalRandomEngine;
#endif
    
    /*! \brief High precision gradient statistics pair with integer backed
 * storage. Operators are associative where floating point versions are not
 * associative. */
typedef detail::bst_gpair_internal<int64_t> bst_gpair_integer;
    
    class SparsePageRawFormat : public SparsePage::Format {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    if (!fi->Read(&(page->offset))) return false;
    CHECK_NE(page->offset.size(), 0U) << 'Invalid SparsePage file';
    page->data.resize(page->offset.back());
    if (page->data.size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(page->data),
                        (page->data).size() * sizeof(SparseBatch::Entry)),
               (page->data).size() * sizeof(SparseBatch::Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
    
    SparsePage::Writer::Writer(
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
          std::unique_ptr<SparsePage::Format> fmt(
              SparsePage::Format::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page.get() == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}