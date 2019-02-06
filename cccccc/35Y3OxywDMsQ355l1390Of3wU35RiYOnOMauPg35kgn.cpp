namespace leveldb {
    }
    
    Status DBImpl::RecoverLogFile(uint64_t log_number, bool last_log,
                              bool* save_manifest, VersionEdit* edit,
                              SequenceNumber* max_sequence) {
  struct LogReporter : public log::Reader::Reporter {
    Env* env;
    Logger* info_log;
    const char* fname;
    Status* status;  // null if options_.paranoid_checks==false
    virtual void Corruption(size_t bytes, const Status& s) {
      Log(info_log, '%s%s: dropping %d bytes; %s',
          (this->status == nullptr ? '(ignoring error) ' : ''),
          fname, static_cast<int>(bytes), s.ToString().c_str());
      if (this->status != nullptr && this->status->ok()) *this->status = s;
    }
  };
    }
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    #include <string>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
#include 'db/skiplist.h'
#include 'util/arena.h'
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    CONFIG_BODY(bool, Bool)
CONFIG_BODY(char, Byte)
CONFIG_BODY(unsigned char, UByte)
CONFIG_BODY(int16_t, Int16)
CONFIG_BODY(uint16_t, UInt16)
CONFIG_BODY(int32_t, Int32)
CONFIG_BODY(uint32_t, UInt32)
CONFIG_BODY(int64_t, Int64)
CONFIG_BODY(uint64_t, UInt64)
CONFIG_BODY(double, Double)
CONFIG_BODY(std::string, String)
    
      private:
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    namespace HPHP {
    }
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
        size_t* it = begin;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].left.begin(), row_split_tloc[tid].left.end(), it);
      it += row_split_tloc[tid].left.size();
    }
    size_t* split_pt = it;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].right.begin(), row_split_tloc[tid].right.end(), it);
      it += row_split_tloc[tid].right.size();
    }
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    
    {// The number of bits required to represent a given unsigned range
static size_t SymbolBits(size_t num_symbols) {
  auto bits = std::ceil(std::log2(num_symbols));
  return std::max(static_cast<size_t>(bits), size_t(1));
}
}  // namespace detail
    
    
    {
    {/*!
 * \brief Quantile sketch use WXQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WXQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WXQSummary<DType, RType> > {
};
/*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class GKQuantileSketch :
      public QuantileSketchTemplate<DType, RType, GKSummary<DType, RType> > {
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_QUANTILE_H_

    
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