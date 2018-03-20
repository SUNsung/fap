
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      partial_run_mgr_.ExecutorDone(step_id, param.executor_status);
  partial_run_mgr_.PartialRunDone(step_id,
                                  [this](Status status) { set_status(status); },
                                  param.partial_run_status);
    
    class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    
    {
    {      auto h = handle_.AccessTensor(context)->template flat<string>();
      h(0) = cinfo_.container();
      h(1) = cinfo_.name();
      resource_ = resource;
    }
    if (context->expected_output_dtype(0) == DT_RESOURCE) {
      OP_REQUIRES_OK(context, MakeResourceHandleToOutput(
                                  context, 0, cinfo_.container(), cinfo_.name(),
                                  MakeTypeIndex<T>()));
    } else {
      context->set_output_ref(0, &mu_, handle_.AccessTensor(context));
    }
  }
    
      bool ret = false;
  if (running && (pid > 1)) {
    pid_t cpid;
    int cstat;
    bool done = false;
    while (!done) {
      cpid = waitpid(pid, &cstat, 0);
      if ((cpid < 0) && !retry(errno)) {
        done = true;
      } else if ((cpid == pid) && (WIFEXITED(cstat) || WIFSIGNALED(cstat))) {
        *status = cstat;
        ret = true;
        done = true;
      }
    }
  }
    
      // Sets the appropriate library kind to that passed in.
  PluginConfig& SetBlas(PluginId blas);
  PluginConfig& SetDnn(PluginId dnn);
  PluginConfig& SetFft(PluginId fft);
  PluginConfig& SetRng(PluginId rng);
    
    class SYCLDeviceContext : public DeviceContext {
 public:
  SYCLDeviceContext() {}
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    class TFRecordReader : public ReaderBase {
 public:
  TFRecordReader(const string& node_name, const string& compression_type,
                 Env* env)
      : ReaderBase(strings::StrCat('TFRecordReader '', node_name, ''')),
        env_(env),
        offset_(0),
        compression_type_(compression_type) {}
    }
    
        OP_REQUIRES(context, TensorShapeUtils::IsMatrix(contents.shape()),
                errors::InvalidArgument(
                    'sampled_audio must be a rank-2 tensor but got shape ',
                    contents.shape().DebugString()));
    OP_REQUIRES(
        context, contents.NumElements() <= std::numeric_limits<int32>::max(),
        errors::InvalidArgument(
            'sampled_audio cannot have more than 2^31 entries. Shape = ',
            contents.shape().DebugString()));
    OP_REQUIRES(context, TensorShapeUtils::IsScalar(file_format_tensor.shape()),
                errors::InvalidArgument(
                    'file_format must be a rank-0 tensor but got shape ',
                    file_format_tensor.shape().DebugString()));
    OP_REQUIRES(context,
                TensorShapeUtils::IsScalar(samples_per_second_tensor.shape()),
                errors::InvalidArgument(
                    'samples_per_second must be a rank-0 tensor but got shape ',
                    samples_per_second_tensor.shape().DebugString()));
    OP_REQUIRES(context,
                TensorShapeUtils::IsScalar(bits_per_second_tensor.shape()),
                errors::InvalidArgument(
                    'bits_per_second must be a rank-0 tensor but got shape ',
                    bits_per_second_tensor.shape().DebugString()));
    
    TF_CALL_GPU_NUMBER_TYPES(REGISTER_DYNAMIC_STITCH_GPU);
TF_CALL_complex64(REGISTER_DYNAMIC_STITCH_GPU);
TF_CALL_complex128(REGISTER_DYNAMIC_STITCH_GPU);
TF_CALL_int64(REGISTER_DYNAMIC_STITCH_GPU);
TF_CALL_int32(REGISTER_DYNAMIC_STITCH_GPU);
#undef REGISTER_DYNAMIC_STITCH_GPU
    
    static std::unique_ptr<Result> make_result(Completion *result) {
  auto r = llvm::make_unique<Result>(result);
  r->name = result->getName();
  r->description = result->getDescription();
  return r;
}
    
    
    {} // end swift namespace
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    
    {  StringRef getReceiverUSR() const {
    for (auto Relation: Relations) {
      if (Relation.roles & (SymbolRoleSet) SymbolRole::RelationReceivedBy)
        return Relation.USR;
    }
    return StringRef();
  }
};
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    
    {}  // namespace leveldb
    
    Status VersionEdit::DecodeFrom(const Slice& src) {
  Clear();
  Slice input = src;
  const char* msg = NULL;
  uint32_t tag;
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
      // Return the length (in bytes) of the referenced data
  size_t size() const { return size_; }
    
    // EXPECT_DEATH_IF_SUPPORTED(statement, regex) and
// ASSERT_DEATH_IF_SUPPORTED(statement, regex) expand to real death tests if
// death tests are supported; otherwise they just issue a warning.  This is
// useful when you are combining death test assertions with normal test
// assertions in one test.
#if GTEST_HAS_DEATH_TEST
# define EXPECT_DEATH_IF_SUPPORTED(statement, regex) \
    EXPECT_DEATH(statement, regex)
# define ASSERT_DEATH_IF_SUPPORTED(statement, regex) \
    ASSERT_DEATH(statement, regex)
#else
# define EXPECT_DEATH_IF_SUPPORTED(statement, regex) \
    GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, )
# define ASSERT_DEATH_IF_SUPPORTED(statement, regex) \
    GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, return)
#endif
    
    // The tests from the instantiation above will have these names:
//
//    * AnotherInstantiationName/FooTest.DoesBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.DoesBlah/1 for 'dog'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/1 for 'dog'
//
// Please note that INSTANTIATE_TEST_CASE_P will instantiate all tests
// in the given test case, whether their definitions come before or
// AFTER the INSTANTIATE_TEST_CASE_P statement.
//
// Please also note that generator expressions (including parameters to the
// generators) are evaluated in InitGoogleTest(), after main() has started.
// This allows the user on one hand, to adjust generator parameters in order
// to dynamically determine a set of tests to run and on the other hand,
// give the user a chance to inspect the generated tests with Google Test
// reflection API before RUN_ALL_TESTS() is executed.
//
// You can see samples/sample7_unittest.cc and samples/sample8_unittest.cc
// for more examples.
//
// In the future, we plan to publish the API for defining new parameter
// generators. But for now this interface remains part of the internal
// implementation and is subject to change.
//
//
// A parameterized test fixture must be derived from testing::Test and from
// testing::WithParamInterface<T>, where T is the type of the parameter
// values. Inheriting from TestWithParam<T> satisfies that requirement because
// TestWithParam<T> inherits from both Test and WithParamInterface. In more
// complicated hierarchies, however, it is occasionally useful to inherit
// separately from Test and WithParamInterface. For example:
    
      // Leave whatever circle we're part of.  Returns true if we were the
  // last member of the circle.  Once this is done, you can join() another.
  bool depart()
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
      // Try to divide n by every odd number i, starting from 3
  for (int i = 3; ; i += 2) {
    // We only have to try i up to the squre root of n
    if (i > n/i) break;
    }
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
      explicit WorkloadStats(State guardedState);
  ~WorkloadStats();
    
      int reverse = 0;
  int n = mbfl_strpos(&mbs_haystack, &mbs_needle, offset, reverse);
  if (n >= 0) {
    return n;
  }
    
      if (asprintf(&default_magic, '%s:%s', hmagicpath, MAGIC) < 0)
    goto out;
  free(hmagicpath);
  return default_magic;
out:
  default_magic = NULL;
  free(hmagicpath);
  return MAGIC;
#else
  char *hmagicp = hmagicpath;
  char *tmppath = NULL;
  LPTSTR dllpath;
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
    /*
 * Emit checks for (and hooks into) an attached debugger in front of each
 * translation in `unit' or for `SrcKey{func, offset, resumed}'.
 */
bool addDbgGuards(const Unit* unit);
bool addDbgGuard(const Func* func, Offset offset, ResumeMode resumeMode);
    
    #include 'hphp/util/arch.h'
#include 'hphp/util/assertions.h'