
        
        #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    template <class R, class C, class P1, class P2, class P3>
inline MethodSig3<R, C, P1, P2, P3> MatchFunc(R (C::*f)(P1, P2, P3)) {
  UPB_UNUSED(f);  /* Only used for template parameter deduction. */
  return MethodSig3<R, C, P1, P2, P3>();
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    void Context::InitializeFieldGeneratorInfoForMessage(
    const Descriptor* message) {
  for (int i = 0; i < message->nested_type_count(); ++i) {
    InitializeFieldGeneratorInfoForMessage(message->nested_type(i));
  }
  std::vector<const FieldDescriptor*> fields;
  for (int i = 0; i < message->field_count(); ++i) {
    fields.push_back(message->field(i));
  }
  InitializeFieldGeneratorInfoForFields(fields);
    }
    
    void ImmutableMapFieldGenerator::
GenerateBuilderMembers(io::Printer* printer) const {
  printer->Print(
      variables_,
      'private com.google.protobuf.MapField<\n'
      '    $type_parameters$> $name$_;\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGet$capitalized_name$() {\n'
      '  if ($name$_ == null) {\n'
      '    return com.google.protobuf.MapField.emptyMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGetMutable$capitalized_name$() {\n'
      '  $on_changed$;\n'
      '  if ($name$_ == null) {\n'
      '    $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  if (!$name$_.isMutable()) {\n'
      '    $name$_ = $name$_.copy();\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n');
  GenerateMapGetters(printer);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public Builder ${$clear$capitalized_name$$}$() {\n'
      '  internalGetMutable$capitalized_name$().getMutableMap()\n'
      '      .clear();\n'
      '  return this;\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public Builder ${$remove$capitalized_name$$}$(\n'
      '    $key_type$ key) {\n'
      '  $key_null_check$\n'
      '  internalGetMutable$capitalized_name$().getMutableMap()\n'
      '      .remove(key);\n'
      '  return this;\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use alternate mutation accessors instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$getMutable$capitalized_name$$}$() {\n'
        '  return internalGetAdapted$capitalized_name$Map(\n'
        '       internalGetMutable$capitalized_name$().getMutableMap());\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(variables_,
                   '$deprecation$public Builder ${$put$capitalized_name$$}$(\n'
                   '    $key_type$ key,\n'
                   '    $value_enum_type$ value) {\n'
                   '  $key_null_check$\n'
                   '  $value_null_check$\n'
                   '  internalGetMutable$capitalized_name$().getMutableMap()\n'
                   '      .put(key, $name$ValueConverter.doBackward(value));\n'
                   '  return this;\n'
                   '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$public Builder ${$putAll$capitalized_name$$}$(\n'
        '    java.util.Map<$boxed_key_type$, $value_enum_type$> values) {\n'
        '  internalGetAdapted$capitalized_name$Map(\n'
        '      internalGetMutable$capitalized_name$().getMutableMap())\n'
        '          .putAll(values);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    if (SupportUnknownEnumValue(descriptor_->file())) {
      printer->Print(
          variables_,
          '/**\n'
          ' * Use alternate mutation accessors instead.\n'
          ' */\n'
          '@java.lang.Deprecated\n'
          'public java.util.Map<$boxed_key_type$, $boxed_value_type$>\n'
          '${$getMutable$capitalized_name$Value$}$() {\n'
          '  return internalGetMutable$capitalized_name$().getMutableMap();\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$public Builder ${$put$capitalized_name$Value$}$(\n'
          '    $key_type$ key,\n'
          '    $value_type$ value) {\n'
          '  $key_null_check$\n'
          '  internalGetMutable$capitalized_name$().getMutableMap()\n'
          '      .put(key, value);\n'
          '  return this;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$public Builder ${$putAll$capitalized_name$Value$}$(\n'
          '    java.util.Map<$boxed_key_type$, $boxed_value_type$> values) {\n'
          '  internalGetMutable$capitalized_name$().getMutableMap()\n'
          '      .putAll(values);\n'
          '  return this;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
    }
  } else {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use alternate mutation accessors instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$type_parameters$>\n'
        '${$getMutable$capitalized_name$$}$() {\n'
        '  return internalGetMutable$capitalized_name$().getMutableMap();\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$'
        'public Builder ${$put$capitalized_name$$}$(\n'
        '    $key_type$ key,\n'
        '    $value_type$ value) {\n'
        '  $key_null_check$\n'
        '  $value_null_check$\n'
        '  internalGetMutable$capitalized_name$().getMutableMap()\n'
        '      .put(key, value);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public Builder ${$putAll$capitalized_name$$}$(\n'
        '    java.util.Map<$type_parameters$> values) {\n'
        '  internalGetMutable$capitalized_name$().getMutableMap()\n'
        '      .putAll(values);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
  }
}
    
    // Get the name of a message's Java class without package name prefix.
string ClassNameWithoutPackage(const Descriptor* descriptor,
                               bool immutable) {
  return StripPackageName(descriptor->full_name(),
                          descriptor->file());
}
    
    void EnumGenerator::GenerateHeader(io::Printer* printer) {
  string enum_comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    enum_comments = BuildCommentsString(location, true);
  } else {
    enum_comments = '';
  }
    }
    
    bool IsDirectDependency(const FileDescriptor* dep, const FileDescriptor* file) {
  for (int i = 0; i < file->dependency_count(); i++) {
    if (dep == file->dependency(i)) {
      return true;
    }
  }
  return false;
}
    
      EXPECT_EXIT(decode_data.AddString(1, '', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(decode_data.AddString(1, 'a', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(decode_data.AddString(1, '', 'a'),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/io_win32.h>
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
    // 5-ary predicate assertion macros.
#define EXPECT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
    
      void Set(const FilePath& rhs) {
    pathname_ = rhs.pathname_;
  }
    
    // ImplicitlyConvertible<From, To>::value is a compile-time bool
// constant that's true iff type From can be implicitly converted to
// type To.
template <typename From, typename To>
class ImplicitlyConvertible {
 private:
  // We need the following helper functions only for their types.
  // They have no implementations.
    }
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    
    {
}  // namespace internal
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    
    {    return new_queue;
  }
    
      /**
   * \fn  static Predictor* Predictor::Create(std::string name);
   *
   * \brief Creates a new Predictor*.
   *
   */
    
    
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
    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    
    {
    {    // Eject all bytes
    int tmp_bytes =
        static_cast<int>(std::ceil(static_cast<float>(stored_bits) / 8));
    for (int j = 0; j < tmp_bytes; j++) {
      int shift_bits = static_cast<int>(stored_bits) - (j + 1) * 8;
      if (shift_bits >= 0) {
        buffer[buffer_position] =
            static_cast<CompressedByteT>(tmp >> shift_bits);
      } else {
        buffer[buffer_position] =
            static_cast<CompressedByteT>(tmp << std::abs(shift_bits));
      }
      buffer_position++;
    }
  }
};
    
      void moveBucketTail(const std::shared_ptr<DHTNode>& node);
    
    public:
  DHTTaskFactoryImpl();
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
    const std::string DHTUnknownMessage::E('e');
    
      // do nothing
  virtual void doReceivedAction() CXX11_OVERRIDE;
    
      SuperVersion* GetSuperVersion() { return super_version_; }
  // thread-safe
  // Return a already referenced SuperVersion to be used safely.
  SuperVersion* GetReferencedSuperVersion(InstrumentedMutex* db_mutex);
  // thread-safe
  // Get SuperVersion stored in thread local storage. If it does not exist,
  // get a reference from a current SuperVersion.
  SuperVersion* GetThreadLocalSuperVersion(InstrumentedMutex* db_mutex);
  // Try to return SuperVersion back to thread local storage. Retrun true on
  // success and false on failure. It fails when the thread local storage
  // contains anything other than SuperVersion::kSVInUse flag.
  bool ReturnThreadLocalSuperVersion(SuperVersion* sv);
  // thread-safe
  uint64_t GetSuperVersionNumber() const {
    return super_version_number_.load();
  }
  // will return a pointer to SuperVersion* if previous SuperVersion
  // if its reference count is zero and needs deletion or nullptr if not
  // As argument takes a pointer to allocated SuperVersion to enable
  // the clients to allocate SuperVersion outside of mutex.
  // IMPORTANT: Only call this from DBImpl::InstallSuperVersion()
  void InstallSuperVersion(SuperVersionContext* sv_context,
                           InstrumentedMutex* db_mutex,
                           const MutableCFOptions& mutable_cf_options);
  void InstallSuperVersion(SuperVersionContext* sv_context,
                           InstrumentedMutex* db_mutex);
    
    
    {}  //  namespace rocksdb

    
      env.now_micros_ += 100u;  // sleep credit 200
  // One refill: 10240 fileed, sleep credit generates 2000. 8000 used
  //             7240 + 10240 + 2000 - 8000 = 11480 left
  ASSERT_EQ(static_cast<uint64_t>(1024u), controller.GetDelay(&env, 8000u));
    
    
    { private:
  int fd_;
};
    
    using namespace rocksdb;
    
    
    {}  // rocksdb

    
    // Some utility routines relating to unicode.
    
    
    {     private:
      Executor::KeepAlive<VirtualExecutor> keepAlive_;
      Func f_;
    };
    
        // Test the lower boundary of conversion to uint64_t nanoseconds
    ts.tv_sec = 0;
    ts.tv_nsec = 0;
    EXPECT_EQ(0, to<nsec_u64>(ts).count());
    ts.tv_sec = -1;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<nsec_u64>(ts), std::range_error);
    
    #endif // FOLLY_HAVE_LIBZ
