
        
        void GeneratorContext::GetCompilerVersion(Version* version) const {
  version->set_major(GOOGLE_PROTOBUF_VERSION / 1000000);
  version->set_minor(GOOGLE_PROTOBUF_VERSION / 1000 % 1000);
  version->set_patch(GOOGLE_PROTOBUF_VERSION % 1000);
  version->set_suffix(GOOGLE_PROTOBUF_VERSION_SUFFIX);
}
    
    // Moves are enabled only when compiling with a C++11 compiler or newer.
#if LANG_CXX11
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, value);
  printer->Print(
    ' * <code>$def$</code>\n'
    ' */\n',
    'def', EscapeJavadoc(FirstLineOf(value->DebugString())));
}
    
      for (int i = 0; i < dependencies.size(); i++) {
    const string& dependency = dependencies[i].second;
    printer->Print(
        '      $dependency$.getDescriptor(),\n',
        'dependency', dependency);
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
    
     protected:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             const Options& options);
  virtual ~RepeatedEnumFieldGenerator();
    
     private:
  string method_name_;
  string root_class_and_method_name_;
  const FieldDescriptor* descriptor_;
    
    struct SrcPos {
  bool operator==(SrcPos o) const {
    return line == o.line && col == o.col;
  }
  bool operator!=(SrcPos o) const { return !(*this == o); }
    }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
        // GP Register cannot be greater than 31
    assert(static_cast<uint32_t>(s) < 32);
    assert(static_cast<uint32_t>(ra) < 32);
    assert(static_cast<uint32_t>(rb) < 32);
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    #include <vector>
#include <string>
#include <iostream>
#include <sstream>
    
    #include <sys/types.h>
    
    // CheckHandler is the class constructed by failing CHECK macros. CheckHandler
// will log information about the failures and abort when it is destructed.
class CheckHandler {
 public:
  CheckHandler(const char* check, const char* file, const char* func, int line)
      : log_(GetErrorLogInstance()) {
    log_ << file << ':' << line << ': ' << func << ': Check `' << check
         << '' failed. ';
  }
    }
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
    // Parses a string for a bool flag, in the form of either
// '--flag=value' or '--flag'.
//
// In the former case, the value is taken as true if it passes IsTruthyValue().
//
// In the latter case, the value is taken as true.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseBoolFlag(const char* str, const char* flag, bool* value);
    
    
    {  return best_fit;
}
    
      // Field with embedded double-quote characters must be doubled and the field
  // delimited with double-quotes.
  std::string name = run.benchmark_name;
  ReplaceAll(&name, '\'', '\'\'');
  Out << ''' << name << '\',';
  if (run.error_occurred) {
    Out << std::string(elements.size() - 3, ',');
    Out << 'true,';
    std::string msg = run.error_message;
    ReplaceAll(&msg, '\'', '\'\'');
    Out << ''' << msg << '\'\n';
    return;
  }
    
    double BenchmarkReporter::Run::GetAdjustedRealTime() const {
  double new_time = real_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
    #ifdef BENCHMARK_OS_WINDOWS
#include <Windows.h>
#endif