
        
        namespace tensorflow {
    }
    
    
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    #include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/gtl/array_slice.h'
#include 'tensorflow/core/platform/types.h'
    
    #ifndef TENSORFLOW_GRAPPLER_COSTS_MEASURING_COST_ESTIMATOR_H_
#define TENSORFLOW_GRAPPLER_COSTS_MEASURING_COST_ESTIMATOR_H_
    
      Status Optimize(Cluster* cluster, const GrapplerItem& item,
                  GraphDef* pruned_graph) override;
    
    
    {
    {}  // namespace io
}  // namespace tensorflow

    
    #include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#if !defined(IS_SLIM_BUILD)
#include 'tensorflow/core/lib/io/zlib_compression_options.h'
#include 'tensorflow/core/lib/io/zlib_outputbuffer.h'
#endif  // IS_SLIM_BUILD
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    REGISTER_KERNEL_BUILDER(Name('TextLineReader').Device(DEVICE_CPU),
                        TextLineReaderOp);
REGISTER_KERNEL_BUILDER(Name('TextLineReaderV2').Device(DEVICE_CPU),
                        TextLineReaderOp);
    
      Status ResetLocked() override {
    offset_ = 0;
    reader_.reset(nullptr);
    file_.reset(nullptr);
    return ReaderBase::ResetLocked();
  }
    
    /*
 * Deprecated in favor of EncodeAudioOpV2.
 */
class EncodeAudioOp : public OpKernel {
 public:
  explicit EncodeAudioOp(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context, context->GetAttr('file_format', &file_format_));
    file_format_ = str_util::Lowercase(file_format_);
    OP_REQUIRES(context, file_format_ == 'wav',
                errors::InvalidArgument('file_format arg must be \'wav\'.'));
    }
    }
    
    In jurisdictions which recognize Public Domain property, the user of this 
software may choose to accept it either as 1) Public Domain, 2) under the 
conditions of the MIT License (see below), or 3) under the terms of dual 
Public Domain/MIT License conditions described here, as they choose.
    
    
    {
    {
    {}  // namespace repeated_composite_container
}  // namespace python
}  // namespace protobuf
    
    // Appends the scalar 'item' to the end of the container 'self'.
//
// Returns None if successful; returns NULL and sets an exception if
// unsuccessful.
PyObject* Append(RepeatedScalarContainer* self, PyObject* item);
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
    
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SourceGeneratorBase);
};
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    // The Message class works like an ostream repeater.
//
// Typical usage:
//
//   1. You stream a bunch of values to a Message object.
//      It will remember the text in a stringstream.
//   2. Then you stream the Message object to an ostream.
//      This causes the text in the Message to be streamed
//      to the ostream.
//
// For example;
//
//   testing::Message foo;
//   foo << 1 << ' != ' << 2;
//   std::cout << foo;
//
// will print '1 != 2'.
//
// Message is not intended to be inherited from.  In particular, its
// destructor is not virtual.
//
// Note that stringstream behaves differently in gcc and in MSVC.  You
// can stream a NULL char pointer to it in the former, but not in the
// latter (it causes an access violation if you do).  The Message
// class hides this difference by treating a NULL char pointer as
// '(null)'.
class GTEST_API_ Message {
 private:
  // The type of basic IO manipulators (endl, ends, and flush) for
  // narrow streams.
  typedef std::ostream& (*BasicNarrowIoManip)(std::ostream&);
    }
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
    // Generates a nonfatal failure at the given source file location with
// a generic message.
#define ADD_FAILURE_AT(file, line) \
  GTEST_MESSAGE_AT_(file, line, 'Failed', \
                    ::testing::TestPartResult::kNonFatalFailure)
    
    // A concrete DeathTestFactory implementation for normal use.
class DefaultDeathTestFactory : public DeathTestFactory {
 public:
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test);
};
    
    // Due to C++ preprocessor weirdness, we need double indirection to
// concatenate two tokens when one of them is __LINE__.  Writing
//
//   foo ## __LINE__
//
// will result in the token foo__LINE__, instead of foo followed by
// the current line number.  For more details, see
// http://www.parashift.com/c++-faq-lite/misc-technical-issues.html#faq-39.6
#define GTEST_CONCAT_TOKEN_(foo, bar) GTEST_CONCAT_TOKEN_IMPL_(foo, bar)
#define GTEST_CONCAT_TOKEN_IMPL_(foo, bar) foo ## bar
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
        static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
        static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
        static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
        static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
        static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
        static_cast<T>(v45_), static_cast<T>(v46_), static_cast<T>(v47_),
        static_cast<T>(v48_), static_cast<T>(v49_)};
    return ValuesIn(array);
  }
    
     protected:
  ParameterizedTestCaseInfoBase() {}
    
    #define GTEST_DEV_EMAIL_ 'googletestframework@@googlegroups.com'
#define GTEST_FLAG_PREFIX_ 'gtest_'
#define GTEST_FLAG_PREFIX_DASH_ 'gtest-'
#define GTEST_FLAG_PREFIX_UPPER_ 'GTEST_'
#define GTEST_NAME_ 'Google Test'
#define GTEST_PROJECT_URL_ 'http://code.google.com/p/googletest/'
    
      // Compares two wide C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike wcscasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL wide C string,
  // including the empty string.
  // NB: The implementations on different platforms slightly differ.
  // On windows, this method uses _wcsicmp which compares according to LC_CTYPE
  // environment variable. On GNU platform this method uses wcscasecmp
  // which compares according to LC_CTYPE category of the current locale.
  // On MacOS X, it uses towlower, which also uses LC_CTYPE category of the
  // current locale.
  static bool CaseInsensitiveWideCStringEquals(const wchar_t* lhs,
                                               const wchar_t* rhs);
    
    template <GTEST_TEMPLATE_ T1>
struct Templates1 {
  typedef TemplateSel<T1> Head;
  typedef Templates0 Tail;
};
    
    int fb_compact_unserialize_from_buffer(
  Variant& out, const char* buf, int n, int& p) {
    }
    
    #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
    
    {
    {    loadSystemlib();
  }
} s_xhprof_extension;
    
    int64_t Timer::stop() {
  if (!RuntimeOption::EvalJitTimer) return 0;
    }
    
    struct PageletServerTaskEvent final : AsioExternalThreadEvent {
  ~PageletServerTaskEvent() override {
    if (m_job) m_job->decRefCount();
  }
    }
    
    
    {
    {
    {}}}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    public:
  struct ServerEventListener {
    virtual ~ServerEventListener() {}
    virtual void serverStopped(Server* /*server*/) {}
  };
    
    namespace HPHP {
    }
    
    namespace HPHP { namespace jit { namespace irgen {
    }
    }
    }
    
      void TearDown() override {
    if (server_) {
      server_->Shutdown();
    }
    void* ignored_tag;
    bool ignored_ok;
    for (auto it = cqs_.begin(); it != cqs_.end(); ++it) {
      (*it)->Shutdown();
      while ((*it)->Next(&ignored_tag, &ignored_ok))
        ;
    }
  }
    
    std::shared_ptr<Reporter> GetReporter() {
  static std::shared_ptr<Reporter> reporter(InitBenchmarkReporters());
  return reporter;
}
    
     protected:
  void AddOp(grpc_op* ops, size_t* nops) {
    if (!send_) return;
    grpc_op* op = &ops[(*nops)++];
    op->op = GRPC_OP_SEND_CLOSE_FROM_CLIENT;
    op->flags = 0;
    op->reserved = NULL;
  }
  void FinishOp(bool* status) { send_ = false; }
    
    
    {    return Status(static_cast<StatusCode>(server_return_status_code), '');
  }
    
      /* Check the SAN first. */
  for (i = 0; i < peer->property_count; i++) {
    const tsi_peer_property* property = &peer->properties[i];
    if (property->name == nullptr) continue;
    if (strcmp(property->name,
               TSI_X509_SUBJECT_ALTERNATIVE_NAME_PEER_PROPERTY) == 0) {
      san_count++;
    }
    }
    
    #include <grpc/support/alloc.h>
#include <grpc/support/useful.h>
    
    #include <string.h>
    
    #include <grpc/support/alloc.h>
#include <grpc/support/log.h>
    
    
    
    
    
    
static const vorbis_info_mapping0 _map_nominal_51[2]={
  {2, {0,0,0,0,0,1}, {0,2}, {0,2}, 4,{0,3,0,0},{2,4,1,3}},
  {2, {0,0,0,0,0,1}, {1,2}, {1,2}, 4,{0,3,0,0},{2,4,1,3}}
};
static const vorbis_info_mapping0 _map_nominal_51u[2]={
  {2, {0,0,0,0,0,1}, {0,2}, {0,2}, 0,{0},{0}},
  {2, {0,0,0,0,0,1}, {1,2}, {1,2}, 0,{0},{0}}
};
    
    static const vorbis_info_residue0 _residue_44_mid_un={
  0,-1, -1, 10,-1,-1,
  /* 0   1   2   3   4   5   6   7   8   9 */
  {0},
  {-1},
  {  0,  1,  1,  2,  2,  4,  4, 16, 60},
  { -1, 30, -1, 50, -1, 80, -1, -1, -1}
};
    
    #define toBARK(n)   (13.1f*atan(.00074f*(n))+2.24f*atan((n)*(n)*1.85e-8f)+1e-4f*(n))
#define fromBARK(z) (102.f*(z)-2.f*pow(z,2.f)+.4f*pow(z,3.f)+pow(1.46f,z)-1.f)
#define toMEL(n)    (log(1.f+(n)*.001f)*1442.695f)
#define fromMEL(m)  (1000.f*exp((m)/1442.695f)-1000.f)
    
    #include <stdio.h>
#include <stdlib.h>
#include <openssl/des.h>