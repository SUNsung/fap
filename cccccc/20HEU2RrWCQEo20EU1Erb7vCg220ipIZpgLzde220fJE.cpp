
        
        /// Get a parsed documentation comment for the declaration, if there is one.
Optional<DocComment *>getSingleDocComment(swift::markup::MarkupContext &Context,
                                          const Decl *D);
    
      /// Creates a copy of a \c MemoryBuffer and adds it to the \c SourceManager,
  /// taking ownership of the copy.
  unsigned addMemBufferCopy(llvm::MemoryBuffer *Buffer);
    
    // The compiler generates the swift_once_t values as word-sized zero-initialized
// variables, so we want to make sure swift_once_t isn't larger than the
// platform word or the function below might overwrite something it shouldn't.
static_assert(sizeof(swift_once_t) <= sizeof(void*),
              'swift_once_t must be no larger than the platform word');
    
    #include 'Callee.h'
#include 'ManagedValue.h'
#include 'swift/AST/Types.h'
#include 'swift/Basic/LLVM.h'
#include 'swift/SIL/SILLocation.h'
#include <memory>
    
    #include 'swift/SIL/InstructionUtils.h'
#include 'swift/SIL/Projection.h'
#include 'swift/SILOptimizer/Analysis/AliasAnalysis.h'
#include 'swift/SILOptimizer/Analysis/EscapeAnalysis.h'
#include 'swift/SILOptimizer/Analysis/TypeExpansionAnalysis.h'
#include 'swift/SILOptimizer/Analysis/ValueTracking.h'
#include 'swift/SILOptimizer/Utils/Local.h'
#include 'llvm/ADT/DenseMap.h'
#include 'llvm/ADT/DenseSet.h'
#include 'llvm/ADT/Hashing.h'
#include 'llvm/ADT/SmallVector.h'
#include 'llvm/Support/Debug.h'
#include <utility> 
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
      void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    #include '../master_worker/common/RPC.hpp'
#include 'TH/THStorage.h'
    
    #include '../ChannelUtils.hpp'
#include '../DataChannel.hpp'
#include 'DataChannelUtils.hpp'
    
    #define THCPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPDoubleStorageClass)
#define THCPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPFloatStorageClass)
#define THCPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPHalfStorageClass)
#define THCPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPLongStorageClass)
#define THCPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPIntStorageClass)
#define THCPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPShortStorageClass)
#define THCPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPCharStorageClass)
#define THCPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPByteStorageClass)
    
    #ifdef _THP_CORE
#define THPStorageType TH_CONCAT_3(THP,Real,StorageType)
#define THPStorageBaseStr TH_CONCAT_STRING_2(Real,StorageBase)
#endif
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    double Histogram::StandardDeviation() const {
  if (num_ == 0.0) return 0;
  double variance = (sum_squares_ * num_ - sum_ * sum_) / (num_ * num_);
  return sqrt(variance);
}
    
    
    {  double Median() const;
  double Percentile(double p) const;
  double Average() const;
  double StandardDeviation() const;
};
    
    #include 'port/port.h'
#include 'port/thread_annotations.h'
    
        // Invariant: we never leave < kHeaderSize bytes in a block.
    assert(kBlockSize - block_offset_ - kHeaderSize >= 0);
    
    #endif  // STORAGE_LEVELDB_DB_LOG_WRITER_H_

    
      const char* data_;
  size_t size_;
  uint32_t restart_offset_;     // Offset in data_ of restart array
  bool owned_;                  // Block owns data_[]
    
    #include <xgboost/logging.h>
#include <cctype>
#include <cstdio>
#include <string>
#include './io.h'
    
    // try to load weight information from file, if exists
inline bool MetaTryLoadFloatInfo(const std::string& fname,
                                 std::vector<bst_float>* data) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  data->clear();
  bst_float value;
  while (is >> value) {
    data->push_back(value);
  }
  return true;
}
    
    // implementing configure.
template<typename PairIter>
inline void Learner::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
      virtual void UpdatePredictionCache(
      const gbm::GBTreeModel& model,
      std::vector<std::unique_ptr<TreeUpdater>>* updaters,
      int num_new_trees) = 0;
    
        double sum = 0;
    for (size_t i = 0; i < kernel.size(); i++) sum += kernel[i];
    const double mul = 1.0 / sum;
    
    #include 'guetzli/gamma_correct.h'
    
    namespace guetzli {
    }
    
    #include <stdint.h>
#include <vector>
    
      // Reports dropped bytes to the reporter.
  // buffer_ must be updated to remove the dropped bytes prior to invocation.
  void ReportCorruption(size_t bytes, const char* reason);
  void ReportDrop(size_t bytes, const Status& reason);
    
    
    {
    {    return true;
  }
// @lint-ignore TXT4 T25377293 Grandfathered in
};
    
    /**
 * @brief check if fname is exist
 * @details [long description]
 *
 * @param fname [description]
 * @return [description]
 */
Status EnvLibrados::FileExists(const std::string& fname)
{
  LOG_DEBUG('[IN]%s\n', fname.c_str());
  std::string fid, dir, file;
  split(fname, &dir, &file);
  Status s = _GetFid(dir + '/' + file, fid);
    }
    
    SyncPoint:: ~SyncPoint() {
  delete impl_;
}
    
    namespace rocksdb {
// Kill the process with probability 1/odds for testing.
extern void TestKillRandom(std::string kill_point, int odds,
                           const std::string& srcfile, int srcline);
    }
    
    #include 'db/column_family.h'
#include 'db/db_impl.h'
#include 'db/db_iter.h'
#include 'db/dbformat.h'
#include 'rocksdb/env.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/slice_transform.h'
#include 'table/merging_iterator.h'
    
      // An iterator is either positioned at a key/value pair, or
  // not valid.  This method returns true iff the iterator is valid.
  // Always returns false if !status().ok().
  virtual bool Valid() const = 0;