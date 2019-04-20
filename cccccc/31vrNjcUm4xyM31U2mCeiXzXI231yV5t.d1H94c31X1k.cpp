
        
        #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    
    {
    {  // No default clause, clang will abort if a code is missing from
  // above switch.
  return 'UNKNOWN';
}
}  // namespace error.
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
      while (true) {
    const void* inptr;
    int inlen;
    bool ok;
    ok = in.Next(&inptr, &inlen);
    if (!ok) {
      break;
    }
    if (inlen > 0) {
      int err = write(STDOUT_FILENO, inptr, inlen);
      if (err != inlen) {
        fprintf(stderr, 'write unexpectedly returned %d.\n', err);
        return 1;
      }
    }
  }
    
    using google::protobuf::Descriptor;
using google::protobuf::DescriptorProto;
using google::protobuf::FileDescriptorProto;
using google::protobuf::FieldDescriptorProto;
using google::protobuf::Message;
using google::protobuf::EnumValueDescriptorProto;
    
    using namespace std;
    
    #endif  // GTEST_HAS_TYPED_TEST
    
    // The friend relationship of some of these classes is cyclic.
// If we don't forward declare them the compiler might confuse the classes
// in friendship clauses with same named classes on the scope.
class Test;
class TestCase;
class TestInfo;
class UnitTest;
    
      // Take over ownership of a raw pointer.  This should happen as soon as
  // possible after the object is created.
  explicit linked_ptr(T* ptr = NULL) { capture(ptr); }
  ~linked_ptr() { depart(); }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
      // Asserts that s.c_string() returns NULL.
  //
  // <TechnicalDetails>
  //
  // If we write NULL instead of
  //
  //   static_cast<const char *>(NULL)
  //
  // in this assertion, it will generate a warning on gcc 3.4.  The
  // reason is that EXPECT_EQ needs to know the types of its
  // arguments in order to print them when it fails.  Since NULL is
  // #defined as 0, the compiler will use the formatter function for
  // int to print it.  However, gcc thinks that NULL should be used as
  // a pointer, not an int, and therefore complains.
  //
  // The root of the problem is C++'s lack of distinction between the
  // integer number 0 and the null pointer constant.  Unfortunately,
  // we have to live with this fact.
  //
  // </TechnicalDetails>
  EXPECT_STREQ(NULL, s.c_string());
    
      // We disable the default assignment operator and copy c'tor.
  const QueueNode& operator = (const QueueNode&);
  QueueNode(const QueueNode&);
    
    namespace parallel {
    }
    
    
    {  LineNumber line;
  ColNumber col;
};
    
    #endif

    
    static HackStrictOption GetHackStrictOption(const IniSettingMap& ini,
                                            const Hdf& config,
                                            const std::string& name /* = '' */,
                                            HackStrictOption def
                                           ) {
  auto val = Config::GetString(ini, config, name);
  if (val.empty()) {
    return def;
  }
  if (val == 'warn') {
    return HackStrictOption::WARN;
  }
  bool ret;
  ini_on_update(val, ret);
  return ret ? HackStrictOption::ON : HackStrictOption::OFF;
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
struct Variant;
struct IniSettingMap;
typedef std::map<std::string, std::string> ConfigMap;
typedef std::set<std::string> ConfigSet;
// with comparer
typedef std::set<std::string, stdltistr> ConfigSetC;
typedef std::map<std::string, std::string, stdltistr> ConfigMapC;
typedef boost::container::flat_set<std::string> ConfigFlatSet;
typedef hphp_string_imap<std::string> ConfigIMap;
    }
    
        if (!slash && !semi) {
      raise_warning('rfc2397: invalid meta data');
      return nullptr;
    }
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
      path_str += strlen(prefix);
  path_len -= strlen(prefix);
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);
    
    void logAHMSubMapWarning(folly::StringPiece mapName);
    
    protected:
  FILE *m_stream;
  char *m_buffer;       // For setbuffer.  Needed to reduce mmap
                        // contention due to how glibc allocates memory
                        // for buffered io.
    
    void
RuleBasedCollator::setLocales(const Locale &requested, const Locale &valid,
                              const Locale &actual) {
    if(actual == tailoring->actualLocale) {
        actualLocaleIsSameAsValid = FALSE;
    } else {
        U_ASSERT(actual == valid);
        actualLocaleIsSameAsValid = TRUE;
    }
    // Do not modify tailoring.actualLocale:
    // We cannot be sure that that would be thread-safe.
    validLocale = valid;
    (void)requested;  // Ignore, see also ticket #10477.
}
    
    //----------------------------------------------------------------------------
//
//  ScriptSet implementation
//
//----------------------------------------------------------------------------
ScriptSet::ScriptSet() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
}
    
        UnicodeString &displayScripts(UnicodeString &dest) const; // append script names to dest string.
    ScriptSet & parseScripts(const UnicodeString &scriptsString, UErrorCode &status);  // Replaces ScriptSet contents.
    
    
    {            return handlePrev(matchindex, status); 
        }
    
        int32_t length = fFlagAndLength;
    if (length > getCapacity() && reallocate(length, 0) == NULL) {
        setToBogus();
        return;
    }