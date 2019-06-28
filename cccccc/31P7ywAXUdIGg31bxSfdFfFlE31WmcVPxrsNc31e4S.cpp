
        
        // hidden_ops should be a list of Op names that should get a leading _
// in the output. Prints the output to stdout.
// Optional fourth argument is the name of the original C++ source file
// where the ops' REGISTER_OP() calls reside.
void PrintPythonOps(const OpList& ops, const ApiDefMap& api_defs,
                    const std::vector<string>& hidden_ops, bool require_shapes,
                    const string& source_file_name = '');
    
    
    {
    {}  // end namespace grappler
}  // end namespace tensorflow

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Macro used to quickly declare overrides for abstract virtuals in the
// fft::FftSupport base class. Assumes that it's emitted somewhere inside the
// ::stream_executor namespace.
#define TENSORFLOW_STREAM_EXECUTOR_GPU_FFT_SUPPORT_OVERRIDES                   \
  std::unique_ptr<fft::Plan> Create1dPlan(Stream *stream, uint64 num_x,        \
                                          fft::Type type, bool in_place_fft)   \
      override;                                                                \
  std::unique_ptr<fft::Plan> Create2dPlan(Stream *stream, uint64 num_x,        \
                                          uint64 num_y, fft::Type type,        \
                                          bool in_place_fft) override;         \
  std::unique_ptr<fft::Plan> Create3dPlan(                                     \
      Stream *stream, uint64 num_x, uint64 num_y, uint64 num_z,                \
      fft::Type type, bool in_place_fft) override;                             \
  std::unique_ptr<fft::Plan> Create1dPlanWithScratchAllocator(                 \
      Stream *stream, uint64 num_x, fft::Type type, bool in_place_fft,         \
      ScratchAllocator *scratch_allocator) override;                           \
  std::unique_ptr<fft::Plan> Create2dPlanWithScratchAllocator(                 \
      Stream *stream, uint64 num_x, uint64 num_y, fft::Type type,              \
      bool in_place_fft, ScratchAllocator *scratch_allocator) override;        \
  std::unique_ptr<fft::Plan> Create3dPlanWithScratchAllocator(                 \
      Stream *stream, uint64 num_x, uint64 num_y, uint64 num_z,                \
      fft::Type type, bool in_place_fft, ScratchAllocator *scratch_allocator)  \
      override;                                                                \
  std::unique_ptr<fft::Plan> CreateBatchedPlan(                                \
      Stream *stream, int rank, uint64 *elem_count, uint64 *input_embed,       \
      uint64 input_stride, uint64 input_distance, uint64 *output_embed,        \
      uint64 output_stride, uint64 output_distance, fft::Type type,            \
      bool in_place_fft, int batch_count) override;                            \
  std::unique_ptr<fft::Plan> CreateBatchedPlanWithScratchAllocator(            \
      Stream *stream, int rank, uint64 *elem_count, uint64 *input_embed,       \
      uint64 input_stride, uint64 input_distance, uint64 *output_embed,        \
      uint64 output_stride, uint64 output_distance, fft::Type type,            \
      bool in_place_fft, int batch_count, ScratchAllocator *scratch_allocator) \
      override;                                                                \
  void UpdatePlanWithScratchAllocator(Stream *stream, fft::Plan *plan,         \
                                      ScratchAllocator *scratch_allocator)     \
      override;                                                                \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<float>> &input,                   \
             DeviceMemory<std::complex<float>> *output) override;              \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<double>> &input,                  \
             DeviceMemory<std::complex<double>> *output) override;             \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<float> &input,                                 \
             DeviceMemory<std::complex<float>> *output) override;              \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<double> &input,                                \
             DeviceMemory<std::complex<double>> *output) override;             \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<float>> &input,                   \
             DeviceMemory<float> *output) override;                            \
  bool DoFft(Stream *stream, fft::Plan *plan,                                  \
             const DeviceMemory<std::complex<double>> &input,                  \
             DeviceMemory<double> *output) override;
    
    // Allows to represent a value that is either a host scalar or a scalar stored
// on the GPU device.
template <typename ElemT>
class HostOrDeviceScalar {
 public:
  // Not marked as explicit because when using this constructor, we usually want
  // to set this to a compile-time constant.
  HostOrDeviceScalar(ElemT value) : value_(value), is_pointer_(false) {}
  explicit HostOrDeviceScalar(const DeviceMemory<ElemT>& pointer)
      : pointer_(pointer), is_pointer_(true) {
    CHECK_EQ(1, pointer.ElementCount());
  }
    }
    
      // Construct a generic signature builder by collecting the constraints
  // from the requirement and the context of the conformance together,
  // because both define the capabilities of the requirement.
  GenericSignatureBuilder builder(ctx);
    
    #include 'swift/Basic/DiverseList.h'
#include 'swift/Basic/DiverseStack.h'
using namespace swift;
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    /// Determine whether this typedef is a CF type.
bool isCFTypeDecl(const clang::TypedefNameDecl *Decl);
    
      bool isPropertyAccessor() const {
    return accessorKind != IAMAccessorKind::None;
  }
    
    bool Punycode::decodePunycodeUTF8(StringRef InputPunycode,
                                  std::string &OutUTF8) {
  std::vector<uint32_t> OutCodePoints;
  if (!decodePunycode(InputPunycode, OutCodePoints))
    return false;
    }
    
    bool ArgsToFrontendInputsConverter::addFile(StringRef file) {
  if (Files.insert(file))
    return false;
  Diags.diagnose(SourceLoc(), diag::error_duplicate_input_file, file);
  return true;
}
    
      /// Returns the newly set-up FrontendInputsAndOutputs, as well as a set of
  /// any unused primary files (those that do not correspond to an input).
  std::pair<FrontendInputsAndOutputs, std::set<StringRef>>
  createInputFilesConsumingPrimaries(std::set<StringRef> primaryFiles);
    
    /// Sort a set of paths in an order that's (comparatively) stable against
/// variation in filesystem prefix: lexicographic comparison of the
/// byte-reversals of each path. Used for emitting external dependencies.
std::vector<std::string>
reversePathSortedFilenames(const llvm::ArrayRef<std::string> paths);
    
      // Post 'open' event.
  static void EmitOpenEvent(const std::string& path);
    
    namespace base {
class DictionaryValue;
class ListValue;
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return !item->icon_.IsEmpty();
}
    
    
    {  ignore_result(menu_items_.empty());
}
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {}  // namespace leveldb
    
      // Reports dropped bytes to the reporter.
  // buffer_ must be updated to remove the dropped bytes prior to invocation.
  void ReportCorruption(uint64_t bytes, const char* reason);
  void ReportDrop(uint64_t bytes, const Status& reason);
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
      // Calls (*handle_result)(arg, ...) with the entry found after a call
  // to Seek(key).  May not make such a call if filter policy says
  // that key is not present.
  Status InternalGet(const ReadOptions&, const Slice& key, void* arg,
                     void (*handle_result)(void* arg, const Slice& k,
                                           const Slice& v));
    
      // Support for iterating over the contents of a batch.
  Status Iterate(Handler* handler) const;
    
      BlockBuilder(const BlockBuilder&) = delete;
  BlockBuilder& operator=(const BlockBuilder&) = delete;
    
    namespace leveldb {
    }
    
    char* Arena::AllocateAligned(size_t bytes) {
  const int align = (sizeof(void*) > 8) ? sizeof(void*) : 8;
  static_assert((align & (align - 1)) == 0,
                'Pointer size should be a power of 2');
  size_t current_mod = reinterpret_cast<uintptr_t>(alloc_ptr_) & (align - 1);
  size_t slop = (current_mod == 0 ? 0 : align - current_mod);
  size_t needed = bytes + slop;
  char* result;
  if (needed <= alloc_bytes_remaining_) {
    result = alloc_ptr_ + slop;
    alloc_ptr_ += needed;
    alloc_bytes_remaining_ -= needed;
  } else {
    // AllocateFallback always returned aligned memory
    result = AllocateFallback(bytes);
  }
  assert((reinterpret_cast<uintptr_t>(result) & (align - 1)) == 0);
  return result;
}
    
        private:
        std::unordered_set<StreamInformation> m_streamInfos;
        bool m_epochEndReached;
        size_t m_numWorkers;
        size_t m_workerRank;
        size_t m_prevMinibatchSize;
        size_t m_maxNumSamplesToRead;
        size_t m_maxNumSweepsToRead;
        size_t m_truncationLength;
        size_t m_maxErrors;
        std::unordered_map<StreamInformation, MinibatchData> m_minibatchData;
    
        public:
        template <typename ElementType>
        PackedValue(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::Matrix<ElementType>>& packedDataMatrix, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout, bool isReadOnly)
            : Value(nullptr), m_isPacked(true), m_sampleShape(sampleShape), m_sampleDynamicAxes(sampleDynamicAxes), m_packedData(nullptr), m_packedDataLayout(packedDataLayout), m_isReadOnly(isReadOnly)
        {
            NDShape packedMatrixShape({ packedDataMatrix->GetNumRows(), packedDataMatrix->GetNumCols() });
            auto tensorView = new Microsoft::MSR::CNTK::TensorView<ElementType>(packedDataMatrix, AsTensorViewShape(packedMatrixShape));
            m_packedData = MakeSharedObject<NDArrayView>(AsDataType<ElementType>(), AsDeviceDescriptor(packedDataMatrix->GetDeviceId()), AsStorageFormat(packedDataMatrix->GetFormat()), packedMatrixShape, m_isReadOnly, tensorView);
    }
    
            // Now we have three kinds of nodes:
        //  - unmodified nodes that will be shared with the old network
        //  - modified nodes (user edits and their parents)
        //  - original nodes that are no longer referenced
        // The new network will be constructed to have the same roots as the original.
    
    // -----------------------------------------------------------------------
// EpochAccumulatorNode calculates mean values of all samples used in forward pass.
// -----------------------------------------------------------------------
    
    template<class ElemType>
void OptimizedRNNStackNode<ElemType>::TransposeHelper(const MatrixBasePtr matX, const TensorShape &shapeX, MatrixBasePtr matY, TensorShape &shapeY)
{
    // This function transposes the second and third axes of the input (X), creating a transposed copy in the output (Y).
    //
    // In 'frame mode', CNTK will present the data with the final two axes being the recurrent axis followed by the 
    // 'minibatch axis'. CUDNN expects these to be in the reverse order, which is accomplished by TransposeHelper().
    }
    
    
    {    CollationKey &key_;
};
    
    U_NAMESPACE_END
    
    // public get and set methods ----------------------------------------
    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
    U_NAMESPACE_BEGIN
    
    /**
 * Sets the daylight savings ending rule. For example, in the U.S., Daylight
 * Savings Time ends at the last (-1) Sunday in October, at 2 AM in standard time.
 * Therefore, you can set the end rule by calling:
 * setEndRule(TimeFields.OCTOBER, -1, TimeFields.SUNDAY, 2*60*60*1000);
 * Various other types of rules can be specified by manipulating the dayOfWeek
 * and dayOfWeekInMonth parameters.  For complete details, see the documentation
 * for setStartRule().
 * @param month the daylight savings ending month. Month is 0-based.
 * eg, 0 for January.
 * @param dayOfWeekInMonth the daylight savings ending
 * day-of-week-in-month. See setStartRule() for a complete explanation.
 * @param dayOfWeek the daylight savings ending day-of-week. See setStartRule()
 * for a complete explanation.
 * @param time the daylight savings ending time. Please see the member
 * description for an example.
 */
    
    #if !UCONFIG_NO_FORMATTING
    
    StringMatcher::StringMatcher(const StringMatcher& o) :
    UnicodeFunctor(o),
    UnicodeMatcher(o),
    UnicodeReplacer(o),
    pattern(o.pattern),
    data(o.data),
    segmentNumber(o.segmentNumber),
    matchStart(o.matchStart),
    matchLimit(o.matchLimit)
{
}
    
    //////////////////////////////////////////////////////////////////////
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    #include 'hphp/util/perf-event.h'
    
    #include <folly/Random.h>
    
      explicit UrlFile(const char *method = 'GET', const Array& headers = null_array,
                   const String& postData = null_string,
                   int maxRedirect = HttpClient::defaultMaxRedirect,
                   int timeout = -1, bool ignoreErrors = false);
    
        try {
      pt::read_json(stream, tree);
    } catch (const pt::ptree_error& e) {
      stream.close();
      return Status(
          1, 'Error reading docker API response for ' + uri + ': ' + e.what());
    }
    
    TEST_F(CarverTests, test_compression_decompression) {
  auto const test_data_file = getWorkingDir() / 'test.data';
  writeTextFile(test_data_file, R'raw_text(
2TItVMSvAY8OFlbYnx1O1NSsuehfNhNiV4Qw4IPP6exA47HVzAlEXZI3blanlAd2
JSxCUr+3boxWMwsgW2jJPzypSKvfXB9EDbFKiDjVueniBfiAepwta57pZ9tQDnJA
uRioApcqYSWL14OJrnPQFHel5FpXylmVdIkiz()cT82JsOPZmh56vDn62Kk/mU7V
RltGAYEpKmi8e71fuB8d/S6Lau{}AmL1153X7E+4d1G1UfiQa7Q02uVjxLLE5FEj
JTDjVqIQNhi50Pt4J4RVopYzy1AZGwPHLhwFVIPH0s/LmzVW+xbT8/V2UMSzK4XB
oqADd9Ckcdtplx3k7bcLU[U04j8WWUtUccmB+4e2KS]i3x7WDKviPY/sWy9xFapv
)raw_text');
  {
    auto s = osquery::compress(test_data_file,
                               getWorkingDir() / fs::path('test.zst'));
    ASSERT_TRUE(s.ok()) << s.what();
  }
  {
    auto s =
        osquery::decompress(getWorkingDir() / fs::path('test.zst'),
                            getWorkingDir() / fs::path('test.data.extract'));
    ASSERT_TRUE(s.ok()) << s.what();
  }
    }
    
    template <typename StorageType>
void InMemoryStorage<StorageType>::put(const std::string& key,
                                       const StorageType value) {
  storage_[key] = value;
}
    
      Flag::create('logtostderr',
               {'Log messages to stderr in addition to the logger plugin(s)',
                false,
                false,
                true,
                false});
  Flag::create('stderrthreshold',
               {'Stderr log level threshold', false, false, true, false});
    
    
    {  name_ = name;
}
    
      // verify the values are still there
  std::string value;
  for (int i = 1000; i < 99999; ++i) {
    db->Get(ReadOptions(), std::to_string(i),
                           &value);
    assert(value == std::string(500, 'a' + (i % 26)));
  }
    
      // Put key-value
  s = db->Put(WriteOptions(), 'key1', 'value');
  assert(s.ok());
  std::string value;
  // get value
  s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.ok());
  assert(value == 'value');
    
      // Builds an openable snapshot of RocksDB on the same disk, which
  // accepts an output directory on the same disk, and under the directory
  // (1) hard-linked SST files pointing to existing live SST files
  // SST files will be copied if output directory is on a different filesystem
  // (2) a copied manifest files and other files
  // The directory should not already exist and will be created by this API.
  // The directory will be an absolute path
  // log_size_for_flush: if the total log file size is equal or larger than
  // this value, then a flush is triggered for all the column families. The
  // default value is 0, which means flush is always triggered. If you move
  // away from the default, the checkpoint may not contain up-to-date data
  // if WAL writing is not always enabled.
  // Flush will always trigger if it is 2PC.
  virtual Status CreateCheckpoint(const std::string& checkpoint_dir,
                                  uint64_t log_size_for_flush = 0);
    
      // Any internal progress/error information generated by the db will
  // be written to info_log if it is non-NULL, or to a file stored
  // in the same directory as the DB contents if info_log is NULL.
  // Default: NULL
  Logger* info_log;
    
    #pragma once
// lua headers
extern 'C' {
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
}
    
    #pragma once
    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;
    
    namespace rocksdb {
    }