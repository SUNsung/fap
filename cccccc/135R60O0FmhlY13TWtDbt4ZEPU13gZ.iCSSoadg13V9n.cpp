
        
        bool Value::empty() const {
  if (isNull() || isArray() || isObject())
    return size() == 0u;
  else
    return false;
}
    
    extern 'C' {
  PyMODINIT_FUNC INITFUNC() {
#if PY_MAJOR_VERSION >= 3
    PyObject *module = PyModule_Create(&_module);
#else
    PyObject *module = Py_InitModule3(
        const_cast<char*>(kModuleName),
        NULL,
        const_cast<char*>(kModuleDocstring));
#endif
    if (module == NULL) {
      return INITFUNC_ERRORVAL;
    }
    }
    }
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedEnumFieldGenerator);
};
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    class SourceGeneratorBase {
 protected:
  SourceGeneratorBase(const FileDescriptor* descriptor, const Options* options);
  virtual ~SourceGeneratorBase();
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
    
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
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
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
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Returns true iff the test part non-fatally failed.
  bool nonfatally_failed() const { return type_ == kNonFatalFailure; }
    
      if (expected == actual) {
    return AssertionSuccess();
  }
    
      // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath('dir/file.exe').RemoveExtension('EXE') returns
  // FilePath('dir/file'). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(const char* extension) const;
    
    // Type and function utilities for implementing parameterized tests.
// This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently Google Test supports at most $n arguments in Values,
// and at most $maxtuple arguments in Combine. Please contact
// googletestframework@googlegroups.com if you need more.
// Please note that the number of arguments to Combine is limited
// by the maximum arity of the implementation of tr1::tuple which is
// currently set at $maxtuple.
    
    # define GTEST_DECLARE_STATIC_MUTEX_(mutex) \
  extern ::testing::internal::Mutex mutex
    
    #ifdef __BORLANDC__
// string.h is not guaranteed to provide strcpy on C++ Builder.
# include <mem.h>
#endif
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42>
struct Templates42 {
  typedef TemplateSel<T1> Head;
  typedef Templates41<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41,
      T42> Tail;
};
    
    
    {  int initially_allocated_;
};
    
    	PathCombine(userCfgPath, userConfigDirPath, L'user-ConEmu.xml');
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    Status WmiResultItem::GetLongLong(const std::string& name,
                                  long long& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != VT_I8) {
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  ret = value.lVal;
  VariantClear(&value);
  return Status(0);
}
    
    /// Select all from a table an exit the shell.
DECLARE_string(A);
    
    using KernelSubscriptionContextRef = std::shared_ptr<KernelSubscriptionContext>;
using KernelEventContextRef = std::shared_ptr<KernelEventContext>;
    
    TEST_F(SyslogTests, test_populate_event_context) {
  std::string line =
      R'|('2016-03-22T21:17:01.701882+00:00','vagrant-ubuntu-trusty-64','6','cron','CRON[16538]:',' (root) CMD (   cd / && run-parts --report /etc/cron.hourly)')|';
  SyslogEventPublisher pub;
  auto ec = pub.createEventContext();
  Status status = pub.populateEventContext(line, ec);
    }
    
    
    {
    {    return {r};
  }
};
    
      auto status = isReadable(kLinuxMemPath);
  if (!status.ok()) {
    // For non-su users *hopefully* raw memory is not readable.
    return status;
  }
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Create Descriptor Set:
    {
        VkDescriptorSetAllocateInfo alloc_info = {};
        alloc_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        alloc_info.descriptorPool = g_DescriptorPool;
        alloc_info.descriptorSetCount = 1;
        alloc_info.pSetLayouts = &g_DescriptorSetLayout;
        err = vkAllocateDescriptorSets(g_Device, &alloc_info, &g_DescriptorSet);
        check_vk_result(err);
    }
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
        // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
    {
        static float f = 0.0f;
        static int counter = 0;
    }
    
            // Rendering
        ImGui::Render();
        g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  std::string arg0      = *v8::String::Utf8Value(args[0]->ToString());
  std::string arg1      = *v8::String::Utf8Value(args[1]->ToString());
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-nullptr, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(std::shared_ptr<Logger> info_log,
  // @lint-ignore TXT2 T25377293 Grandfathered in
	 unique_ptr<SequentialFileReader>&& file,
         Reporter* reporter, bool checksum, uint64_t initial_offset,
         uint64_t log_num);
    
    namespace rocksdb {
    }
    
    
    { private:
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jcreate_compaction_filter_methodid;
};
    
      m_jSliceB = env->NewGlobalRef(SliceJni::construct0(env));
  if(m_jSliceB == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
    
    namespace rocksdb {
    }
    
     protected:
  void SeekForPrevImpl(const Slice& target, const Comparator* cmp) {
    Seek(target);
    if (!Valid()) {
      SeekToLast();
    }
    while (Valid() && cmp->Compare(target, key()) < 0) {
      Prev();
    }
  }
    
    namespace folly {
    }
    
    void init(int* argc, char*** argv, bool removeFlags) {
#if FOLLY_USE_SYMBOLIZER
  // Install the handler now, to trap errors received during startup.
  // The callbacks, if any, can be installed later
  folly::symbolizer::installFatalSignalHandler();
#elif !defined(_WIN32)
  google::InstallFailureSignalHandler();
#endif
    }
    
    /** hazptr_mb */
    
      SimpleQuantileEstimator();
    
      /**
   * A readCallback for Subprocess::communicate() that helps you consume
   * lines (or other delimited pieces) from your subprocess's file
   * descriptors.  Use the readLinesCallback() helper to get template
   * deduction.  For example:
   *
   *   subprocess.communicate(
   *     Subprocess::readLinesCallback(
   *       [](int fd, folly::StringPiece s) {
   *         std::cout << fd << ' said: ' << s;
   *         return false;  // Keep reading from the child
   *       }
   *     ),
   *     [](int pdf, int cfd){ return true; }  // Don't write to the child
   *   );
   *
   * If a file line exceeds maxLineLength, your callback will get some
   * initial chunks of maxLineLength with no trailing delimiters.  The final
   * chunk of a line is delimiter-terminated iff the delimiter was present
   * in the input.  In particular, the last line in a file always lacks a
   * delimiter -- so if a file ends on a delimiter, the final line is empty.
   *
   * Like a regular communicate() callback, your fdLineCb() normally returns
   * false.  It may return true to tell Subprocess to close the underlying
   * file descriptor.  The child process may then receive SIGPIPE or get
   * EPIPE errors on writes.
   */
  template <class Callback>
  class ReadLinesCallback {
   private:
    // Binds an FD to the client-provided FD+line callback
    struct StreamSplitterCallback {
      StreamSplitterCallback(Callback& cb, int fd) : cb_(cb), fd_(fd) { }
      // The return value semantics are inverted vs StreamSplitter
      bool operator()(StringPiece s) { return !cb_(fd_, s); }
      Callback& cb_;
      int fd_;
    };
    typedef gen::StreamSplitter<StreamSplitterCallback> LineSplitter;
   public:
    explicit ReadLinesCallback(
      Callback&& fdLineCb,
      uint64_t maxLineLength = 0,  // No line length limit by default
      char delimiter = '\n',
      uint64_t bufSize = 1024
    ) : fdLineCb_(std::forward<Callback>(fdLineCb)),
        maxLineLength_(maxLineLength),
        delimiter_(delimiter),
        bufSize_(bufSize) {}
    }
    
    
    {
    {
    {} // namespace detail
} // namespace f14
} // namespace folly
    
    
    {  static_assert(
      folly::AllocatorHasDefaultObjectConstruct<TestAlloc5<S>, S, S>::value,
      '');
  static_assert(
      !folly::AllocatorHasDefaultObjectDestroy<TestAlloc5<S>, S>::value, '');
}
    
    template <class Type>
class Setting {
 public:
  /**
   * Returns the setting's current value.  Note that the returned
   * reference is not guaranteed to be long-lived and should not be
   * saved anywhere. In particular, a set() call might invalidate a
   * reference obtained here after some amount of time (on the order
   * of minutes).
   */
  const Type& operator*() const {
    return core_.get();
  }
  const Type* operator->() const {
    return &core_.get();
  }
    }
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
    template<typename F>
inline JConstructor<F> JClass::getConstructor(const char* descriptor) const {
  constexpr auto constructor_method_name = '<init>';
  return getMethod<F>(constructor_method_name, descriptor);
}
    
    
    {
}
    
    /// JMethod specialization for references that wraps the return value in a @ref local_ref
template<typename R, typename... Args>
class JMethod<R(Args...)> : public JMethodBase {
 public:
   // TODO: static_assert is jobject-derived or local_ref jobject
  using JniRet = typename detail::Convert<typename std::decay<R>::type>::jniType;
  static_assert(IsPlainJniReference<JniRet>(), 'JniRet must be a JNI reference');
  using JMethodBase::JMethodBase;
  JMethod() noexcept {};
  JMethod(const JMethod& other) noexcept = default;
    }
    
    template <typename Repr>
void ReprStorage<Repr>::set(JniType<Repr> obj) noexcept {
  new (&storage_) Repr;
  ReprAccess<Repr>::set(get(), obj);
}
    
    template<typename F, F func, typename C, typename R, typename... Args>
inline NativeMethodWrapper* exceptionWrapJNIMethod(R (*)(JNIEnv*, C, Args... args)) {
  struct funcWrapper {
    JNI_ENTRY_POINT static R call(JNIEnv* env, jobject obj, Args... args) {
      try {
        return (*func)(env, static_cast<JniType<C>>(obj), args...);
      } catch (...) {
        translatePendingCppExceptionToJavaException();
        return R{};
      }
    }
  };
    }
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
        bool isExperimentalFeatureEnabled(int feature) const;
    
    #pragma once