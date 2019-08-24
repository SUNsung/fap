
        
        #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
      // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    
    { private:
  tesseract::ParagraphJustification justification_;
  int margin_;
  int first_indent_;
  int body_indent_;
  int tolerance_;
};
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    GPUSet GPUSet::All(GpuIdType gpu_id, GpuIdType n_gpus, int32_t n_rows) {
  CHECK_GE(gpu_id, 0) << 'gpu_id must be >= 0.';
  CHECK_GE(n_gpus, -1) << 'n_gpus must be >= -1.';
    }
    
    /*!
 * \brief Registry entry for sparse page format.
 */
struct SparsePageFormatReg
    : public dmlc::FunctionRegEntryBase<SparsePageFormatReg,
                                        std::function<SparsePageFormat* ()> > {
};
    
    
    {  EXPECT_EQ(pack_count, 1U);
  c.reset();
}
    
    template <typename T>
Expected<T, DatabaseError> InMemoryDatabase::getValue(const std::string& domain,
                                                      const std::string& key) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  if (!is_open_) {
    return createError(DatabaseError::DbIsNotOpen) << 'Database is closed';
  }
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  std::lock_guard<std::mutex> lock(storage_iter->second->getMutex());
  auto result = storage_iter->second->get(key);
  if (result) {
    DataType value = result.take();
    if (value.type() == typeid(T)) {
      return boost::get<T>(value);
    } else {
      auto error = createError(DatabaseError::KeyNotFound)
                   << 'Requested wrong type for: ' << domain << ':' << key
                   << ' stored type: ' << value.type().name()
                   << ' requested type '
                   << boost::core::demangle(typeid(T).name());
      LOG(ERROR) << error.getMessage();
      debug_only::fail(error.getMessage().c_str());
      return std::move(error);
    }
  }
  return result.takeError();
}
    
    template <typename StorageType>
class InMemoryStorage final {
 public:
  void put(const std::string& key, const StorageType value);
  Expected<StorageType, DatabaseError> get(const std::string& key) const;
  std::vector<std::string> getKeys(const std::string& prefix = '') const;
    }
    
    #ifdef OSQUERY_WINDOWS
#include <Winsock2.h>
#else
#include <arpa/inet.h>
#endif
    
    Status Flag::getDefaultValue(const std::string& name, std::string& value) {
  flags::CommandLineFlagInfo info;
  if (!flags::GetCommandLineFlagInfo(name.c_str(), &info)) {
    return Status(1, 'Flags name not found.');
  }
    }
    
      /**
   * @brief Optionally handle each published event via the logger.
   *
   * It is possible to skip the database representation of event subscribers
   * and instead forward each added event to the active logger plugin.
   */
  virtual Status logEvent(const std::string& /*s*/) {
    return Status(1, 'Not enabled');
  }