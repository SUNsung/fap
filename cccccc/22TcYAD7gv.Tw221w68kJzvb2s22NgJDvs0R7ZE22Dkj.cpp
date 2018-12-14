StringRef swift::prettyPlatformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return PrettyName;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    
    {    buf = buf.substr(info.bytes);
  }
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
      static CFPointeeInfo forInvalid() {
    CFPointeeInfo info;
    info.IsValid = false;
    return info;
  }
    
    std::string Demangle::getNodeTreeAsString(NodePointer Root) {
  DemanglerPrinter Printer;
  printNode(Printer, Root, 0);
  return std::move(Printer).str();
}
    
    static const int base         = 36;
static const int tmin         = 1;
static const int tmax         = 26;
static const int skew         = 38;
static const int damp         = 700;
static const int initial_bias = 72;
static const uint32_t initial_n = 128;
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    /* Represents the code to parse a protobuf according to a destination
 * Handlers. */
class upb::pb::DecoderMethod {
 public:
  /* Include base methods from upb::ReferenceCounted. */
  UPB_REFCOUNTED_CPPMETHODS
    }
    
    
    {
    {
    {
    {}  // namespace cpp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <memory>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    
    {
    {
    {    printer->Print(
        '$name$$deprecated_attribute$ = $value$,\n',
        'name', EnumValueName(all_values_[i]),
        'deprecated_attribute', GetOptionalDeprecatedAttribute(all_values_[i]),
        'value', SimpleItoa(all_values_[i]->number()));
  }
  printer->Outdent();
  printer->Print(
      '};\n'
      '\n'
      'GPBEnumDescriptor *$name$_EnumDescriptor(void);\n'
      '\n'
      '/**\n'
      ' * Checks to see if the given value is defined by the enum or was not known at\n'
      ' * the time this source was generated.\n'
      ' **/\n'
      'BOOL $name$_IsValidValue(int32_t value);\n'
      '\n',
      'name', name_);
}
    
      printer->Print('\n@end\n\n');
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    
    {	static bool const value = sizeof(test(get_d())) == sizeof(char) &&
							  !TypesAreSame<B volatile const, void volatile const>::value;
};
    
    bool GodotCollisionDispatcher::needsCollision(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsCollision(body0, body1);
}
    
    /**
	@author AndreaCatania
*/
    
    public:
	_FORCE_INLINE_ void set_self(const RID &p_self) { self = p_self; }
	_FORCE_INLINE_ RID get_self() const { return self; }
    
    	ClassDB::register_virtual_class<CSGShape>();
	ClassDB::register_virtual_class<CSGPrimitive>();
	ClassDB::register_class<CSGMesh>();
	ClassDB::register_class<CSGSphere>();
	ClassDB::register_class<CSGBox>();
	ClassDB::register_class<CSGCylinder>();
	ClassDB::register_class<CSGTorus>();
	ClassDB::register_class<CSGPolygon>();
	ClassDB::register_class<CSGCombiner>();
    
    #include 'texture_loader_dds.h'
    
    class FileAccess;
    
    template <class F, class S>
struct Pair {
    }
    
    /*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT0)(const OutputGrad& out_grad,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param out_value the value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT1)(const OutputGrad& out_grad,
                                    const OutputValue& out_value,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes input value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param in_data0 the input value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT2)(const OutputGrad& out_grad,
                                    const Input0& in_data0,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Binary function that takes lhs, rhs and save result to ret.
 *  The result container is pre-allocated with the correct shape.
 * \param lhs The left operand
 * \param rhs The right operand
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryFunction)(const TBlob& lhs,
                               const TBlob& rhs,
                               const EnvArguments& env,
                               TBlob* ret,
                               OpReqType req,
                               RunContext ctx);
    
    
    {  DMLC_DECLARE_PARAMETER(CaffeDataParam) {
    DMLC_DECLARE_FIELD(prototxt).set_default('layer{}')
      .describe('Caffe's layer parameter');
    DMLC_DECLARE_FIELD(flat).set_default(false)
      .describe('Augmentation Param: Whether to flat the data into 1D.');
    DMLC_DECLARE_FIELD(num_examples).set_lower_bound(1).set_default(10000)
      .describe('Number of examples in the epoch.');
  }
};
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    
    {  void DoReads(int n);
};
    
        // Finish and check for file errors
    if (s.ok()) {
      s = file->Sync();
    }
    if (s.ok()) {
      s = file->Close();
    }
    delete file;
    file = nullptr;
    
    
    {  std::string tmp1, tmp2;
  ASSERT_OK(db_->Put(WriteOptions(), Key(1000, &tmp1), Value(1000, &tmp2)));
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
  dbi->TEST_CompactMemTable();
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
}
    
    
    {    // The previous incarnation may not have written any MANIFEST
    // records after allocating this log number.  So we manually
    // update the file number allocation counter in VersionSet.
    versions_->MarkFileNumberUsed(logs[i]);
  }
    
    static bool CompareIterators(int step,
                             DB* model,
                             DB* db,
                             const Snapshot* model_snap,
                             const Snapshot* db_snap) {
  ReadOptions options;
  options.snapshot = model_snap;
  Iterator* miter = model->NewIterator(options);
  options.snapshot = db_snap;
  Iterator* dbiter = db->NewIterator(options);
  bool ok = true;
  int count = 0;
  for (miter->SeekToFirst(), dbiter->SeekToFirst();
       ok && miter->Valid() && dbiter->Valid();
       miter->Next(), dbiter->Next()) {
    count++;
    if (miter->key().compare(dbiter->key()) != 0) {
      fprintf(stderr, 'step %d: Key mismatch: '%s' vs. '%s'\n',
              step,
              EscapeString(miter->key()).c_str(),
              EscapeString(dbiter->key()).c_str());
      ok = false;
      break;
    }
    }
    }
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    TEST(FormatTest, InternalKeyShortSeparator) {
  // When user keys are same
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 99, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 101, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeDeletion)));
    }
    
    #include 'db/db_impl.h'
#include 'db/filename.h'
#include 'db/version_set.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    
    {            // Arithmetic schedule - write at every m_frequency steps or if the update is one of the first m_firstN
            // updates.
            return update % m_frequency == 0 || update <= m_firstN;
        }
    
    #pragma once
    
                std::function<std::pair<Variable, bool>(const FunctionPtr& root)> FindTrainingSampleCountVar;
            FindTrainingSampleCountVar = [&FindTrainingSampleCountVar](const FunctionPtr& root) -> std::pair<Variable, bool> {
                const auto& outputs = root->Outputs();
                auto firstOutputWithDynamicAxes = std::find_if(outputs.begin(), outputs.end(), [](const Variable& var) { return !var.DynamicAxes().empty(); });
                if (firstOutputWithDynamicAxes != outputs.end())
                    return std::make_pair(*firstOutputWithDynamicAxes, true);
    }
    
    #include <sys/types.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
    
    
    {        if (currReaderIter->second->IsLegacyReader())
        {
            return true;
        }
    }
    
    // Rand based on Mersenne Twister.
// We use our own distribution in order to match baselines between different operating systems,
// instead of using std::shuffle which uses unitform_distribution internally.
// TODO: Switching to Boost would eliminate this problem.
template <typename TVector>
inline void RandomShuffleMT(TVector& v, size_t begin, size_t end, std::mt19937_64& rng)
{
    for(size_t i = begin; i < end; ++i)
    {
        const size_t randomLocation = RandMT(i, end, rng);
        std::swap(v[i], v[randomLocation]);
    }
}
    
            const auto& inputSampleLayout = Input(0)->GetSampleLayout();
        const auto& inputDims = inputSampleLayout.GetDims();
        SmallVector<size_t> dims;
        if (m_offset > 0)
        {
            dims.append(inputDims.begin(), inputDims.begin() + m_offset);
        }
        dims.push_back(m_num_class);
        if (m_offset != inputDims.size())
        {
            dims.append(inputDims.begin() + m_offset, inputDims.end());
        }
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
    #include 'rocksdb/env.h'
#include 'util/testharness.h'
    
    std::string kDBPath = '/tmp/rocksdb_column_families_example';
    
    // Verify the checksum of file
Status VerifySstFileChecksum(const Options& options,
                             const EnvOptions& env_options,
                             const std::string& file_path);
#endif  // ROCKSDB_LITE
    
    // Get Thread-local IOStatsContext object pointer
IOStatsContext* get_iostats_context();
    
    TEST(Expected, CoroutineSuccess) {
  auto r0 = []() -> Expected<int, Err> {
    auto x = co_await f1();
    EXPECT_EQ(7, x);
    auto y = co_await f2(x);
    EXPECT_EQ(2.0 * 7, y);
    auto z = co_await f3(x, y);
    EXPECT_EQ(int(2.0 * 7 + 7), *z);
    co_return* z;
  }();
  EXPECT_TRUE(r0.hasValue());
  EXPECT_EQ(21, *r0);
}
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
    using UTF8StringPiece = UTF8Range<const char*>;
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
    #include <zlib.h>
    
    template <
    typename T,
    template <typename> class Atom = std::atomic,
    typename CountedDetail = detail::shared_ptr_internals>
class atomic_shared_ptr {
  using SharedPtr = typename CountedDetail::template CountedPtr<T>;
  using BasePtr = typename CountedDetail::counted_base;
  using PackedPtr = folly::PackedSyncPtr<BasePtr>;
    }