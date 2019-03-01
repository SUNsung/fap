
        
        
    {
    {} // namespace test
} // namespace c10d

    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
    - https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.h
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.cc
    
    OPERATOR_SCHEMA(GivenTensorInt64Fill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(FillerTensorInference<TensorProto_DataType_INT64>);
    
    
    {class GetHalfToFloatGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'FloatToHalf', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(HalfToFloat, GetHalfToFloatGradient);
NO_GRADIENT(Float16ConstantFill);
} // namespace caffe2

    
    // Ensures that there is at least one operator<< in the global namespace.
// See Message& operator<<(...) below for why.
void operator<<(const testing::internal::Secret&, int);
    
    // To distinguish different instances of the pattern, (yes, you
// can instantiate it more then once) the first argument to the
// INSTANTIATE_TEST_CASE_P macro is a prefix that will be added to the
// actual test case name. Remember to pick unique prefixes for different
// instantiations. The tests from the instantiation above will have
// these names:
//
//    * InstantiationName/FooTest.DoesBlah/0 for 'meeny'
//    * InstantiationName/FooTest.DoesBlah/1 for 'miny'
//    * InstantiationName/FooTest.DoesBlah/2 for 'moe'
//    * InstantiationName/FooTest.HasBlahBlah/0 for 'meeny'
//    * InstantiationName/FooTest.HasBlahBlah/1 for 'miny'
//    * InstantiationName/FooTest.HasBlahBlah/2 for 'moe'
//
// You can use these names in --gtest_filter.
//
// This statement will instantiate all tests from FooTest again, each
// with parameter values 'cat' and 'dog':
    
    // Prints the given value to the given ostream.  If the value is a
// protocol message, its debug string is printed; if it's an enum or
// of a type implicitly convertible to BiggestInt, it's printed as an
// integer; otherwise the bytes in the value are printed.  This is
// what UniversalPrinter<T>::Print() does when it knows nothing about
// type T and T has neither << operator nor PrintTo().
//
// A user can override this behavior for a class type Foo by defining
// a << operator in the namespace where Foo is defined.
//
// We put this operator in namespace 'internal2' instead of 'internal'
// to simplify the implementation, as much code in 'internal' needs to
// use << in STL, which would conflict with our own << were it defined
// in 'internal'.
//
// Note that this operator<< takes a generic std::basic_ostream<Char,
// CharTraits> type instead of the more restricted std::ostream.  If
// we define it to take an std::ostream instead, we'll get an
// 'ambiguous overloads' compiler error when trying to print a type
// Foo that supports streaming to std::basic_ostream<Char,
// CharTraits>, as the compiler cannot tell whether
// operator<<(std::ostream&, const T&) or
// operator<<(std::basic_stream<Char, CharTraits>, const Foo&) is more
// specific.
template <typename Char, typename CharTraits, typename T>
::std::basic_ostream<Char, CharTraits>& operator<<(
    ::std::basic_ostream<Char, CharTraits>& os, const T& x) {
  TypeWithoutFormatter<T,
      (internal::IsAProtocolMessage<T>::value ? kProtobuf :
       internal::ImplicitlyConvertible<const T&, internal::BiggestInt>::value ?
       kConvertibleToInteger : kOtherType)>::PrintValue(x, &os);
  return os;
}
    
    // This macro is used for implementing macros such as
// EXPECT_DEATH_IF_SUPPORTED and ASSERT_DEATH_IF_SUPPORTED on systems where
// death tests are not supported. Those macros must compile on such systems
// iff EXPECT_DEATH and ASSERT_DEATH compile with the same parameters on
// systems that support death tests. This allows one to write such a macro
// on a system that does not support death tests and be sure that it will
// compile on a death-test supporting system.
//
// Parameters:
//   statement -  A statement that a macro such as EXPECT_DEATH would test
//                for program termination. This macro has to make sure this
//                statement is compiled but not executed, to ensure that
//                EXPECT_DEATH_IF_SUPPORTED compiles with a certain
//                parameter iff EXPECT_DEATH compiles with it.
//   regex     -  A regex that a macro such as EXPECT_DEATH would use to test
//                the output of statement.  This parameter has to be
//                compiled but not evaluated by this macro, to ensure that
//                this macro only accepts expressions that a macro such as
//                EXPECT_DEATH would accept.
//   terminator - Must be an empty statement for EXPECT_DEATH_IF_SUPPORTED
//                and a return statement for ASSERT_DEATH_IF_SUPPORTED.
//                This ensures that ASSERT_DEATH_IF_SUPPORTED will not
//                compile inside functions where ASSERT_DEATH doesn't
//                compile.
//
//  The branch that has an always false condition is used to ensure that
//  statement and regex are compiled (and thus syntactically correct) but
//  never executed. The unreachable code macro protects the terminator
//  statement from generating an 'unreachable code' warning in case
//  statement unconditionally returns or throws. The Message constructor at
//  the end allows the syntax of streaming additional messages into the
//  macro, for compilational compatibility with EXPECT_DEATH/ASSERT_DEATH.
# define GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, terminator) \
    GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
    if (::testing::internal::AlwaysTrue()) { \
      GTEST_LOG_(WARNING) \
          << 'Death tests are not supported on this platform.\n' \
          << 'Statement '' #statement '' cannot be verified.'; \
    } else if (::testing::internal::AlwaysFalse()) { \
      ::testing::internal::RE::PartialMatch('.*', (regex)); \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
      terminator; \
    } else \
      ::testing::Message()
    
    
    {  std::string pathname_;
};  // class FilePath
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    #include <string.h>
    
    
    {  if (prevE && prevE->OutIdx >= 0 && prevE->Top.Y < Pt.Y && e->Top.Y < Pt.Y) 
  {
    cInt xPrev = TopX(*prevE, Pt.Y);
    cInt xE = TopX(*e, Pt.Y);
    if (xPrev == xE && (e->WindDelta != 0) && (prevE->WindDelta != 0) &&
      SlopesEqual(IntPoint(xPrev, Pt.Y), prevE->Top, IntPoint(xE, Pt.Y), e->Top, m_UseFullRange))
    {
      OutPt* outPt = AddOutPt(prevE, Pt);
      AddJoin(result, outPt, e->Top);
    }
  }
  return result;
}
//------------------------------------------------------------------------------
    
      // Return an internal iterator over the current state of the database.
  // The keys of this iterator are internal keys (see format.h).
  // The returned iterator should be deleted when no longer needed.
  Iterator* TEST_NewInternalIterator();
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
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
    
    // Encode a suitable internal key target for 'target' and return it.
// Uses *scratch as scratch space, and the returned pointer will point
// into this scratch space.
static const char* EncodeKey(std::string* scratch, const Slice& target) {
  scratch->clear();
  PutVarint32(scratch, target.size());
  scratch->append(target.data(), target.size());
  return scratch->data();
}
    
    
    {  // Check that introducing an older log file does not cause it to be re-read.
  Close();
  MakeLogFile(old_log+1, 2000, 'hello', 'stale write');
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
}
    
      void ScanTable(uint64_t number) {
    TableInfo t;
    t.meta.number = number;
    std::string fname = TableFileName(dbname_, number);
    Status status = env_->GetFileSize(fname, &t.meta.file_size);
    if (!status.ok()) {
      // Try alternate file name.
      fname = SSTTableFileName(dbname_, number);
      Status s2 = env_->GetFileSize(fname, &t.meta.file_size);
      if (s2.ok()) {
        status = Status::OK();
      }
    }
    if (!status.ok()) {
      ArchiveFile(TableFileName(dbname_, number));
      ArchiveFile(SSTTableFileName(dbname_, number));
      Log(options_.info_log, 'Table #%llu: dropped: %s',
          (unsigned long long) t.meta.number,
          status.ToString().c_str());
      return;
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
      /**
   * Master Get Methods to get values associated with an ini or hdf setting.
   * These methods just get the value. They do not bind to a variable for
   * enabling ini_get()
   */
  static bool GetBool(const IniSettingMap &ini, const Hdf& config,
                      const std::string& name = '',
                      const bool defValue = false,
                      const bool prepend_hhvm = true);
  static const char *Get(const IniSettingMap &ini, const Hdf& config,
                         const std::string& name = '',
                         const char *defValue = nullptr,
                         const bool prepend_hhvm = true);
  static std::string GetString(const IniSettingMap &ini, const Hdf& config,
                               const std::string& name = '',
                               const std::string defValue = '',
                               const bool prepend_hhvm = true);
  static char GetByte(const IniSettingMap &ini, const Hdf& config,
                      const std::string& name = '', const char defValue = 0,
                      const bool prepend_hhvm = true);
  static unsigned char GetUByte(const IniSettingMap &ini, const Hdf& config,
                                const std::string& name = '',
                                const unsigned char defValue = 0,
                                const bool prepend_hhvm = true);
  static int16_t GetInt16(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int16_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint16_t GetUInt16(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint16_t defValue = 0,
                            const bool prepend_hhvm = true);
  static int32_t GetInt32(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int32_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint32_t GetUInt32(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint32_t defValue = 0,
                            const bool prepend_hhvm = true);
  static int64_t GetInt64(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int64_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint64_t GetUInt64(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint64_t defValue = 0,
                            const bool prepend_hhvm = true);
  static double GetDouble(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const double defValue = 0,
                          const bool prepend_hhvm = true);
  static std::vector<uint32_t>
  GetUInt32Vector(const IniSettingMap& ini, const Hdf& config,
                  const std::string& name = '',
                  const std::vector<uint32_t>& def = std::vector<uint32_t>{},
                  const bool prepend_hhvm = true);
  static std::vector<std::string>
  GetStrVector(const IniSettingMap& ini, const Hdf& config,
               const std::string& name = '',
               const std::vector<std::string>& def = std::vector<std::string>{},
               const bool prepend_hhvm = true);
  static std::unordered_map<std::string, int>
  GetIntMap(const IniSettingMap& ini, const Hdf& config,
            const std::string& name = '',
            const std::unordered_map<std::string, int>& defValue =
              std::unordered_map<std::string, int>{},
            const bool prepend_hhvm = true);
  static ConfigMap GetMap(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigMap& defValue = ConfigMap(),
                          const bool prepend_hhvm = true);
  static ConfigMapC GetMapC(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigMapC& defValue = ConfigMapC(),
                          const bool prepend_hhvm = true);
  static ConfigSet GetSet(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigSet& defValue = ConfigSet(),
                          const bool prepend_hhvm = true);
  static ConfigSetC GetSetC(const IniSettingMap& ini, const Hdf& config,
                            const std::string& name = '',
                            const ConfigSetC& defValue = ConfigSetC(),
                            const bool prepend_hhvm = true);
  static ConfigIMap GetIMap(const IniSettingMap& ini, const Hdf& config,
                            const std::string& name = '',
                            const ConfigIMap& defValue = ConfigIMap(),
                            const bool prepend_hhvm = true);
  static ConfigFlatSet GetFlatSet(const IniSettingMap& ini, const Hdf& config,
                                  const std::string& name = '',
                                  const ConfigFlatSet& defValue
                                    = ConfigFlatSet(),
                                  const bool prepend_hhvm = true);
    
    void PlainDirectory::close() {
  if (m_dir) {
    ::closedir(m_dir);
    m_dir = nullptr;
  }
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }