
        
          auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_doc_comment.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    string ClassNameResolver::GetClassName(const FileDescriptor* descriptor,
                                       bool immutable) {
  string result = FileJavaPackage(descriptor, immutable);
  if (!result.empty()) result += '.';
  result += GetFileClassName(descriptor, immutable);
  return result;
}
    
    // Author: xiaofeng@google.com (Feng Xiao)
    
      static const int kBytesPerLine = 40;  // allow for escaping
  printer->Print(
      '    static const char *valueNames =');
  for (int i = 0; i < text_blob.size(); i += kBytesPerLine) {
    printer->Print(
        '\n        \'$data$\'',
        'data', EscapeTrigraphs(CEscape(text_blob.substr(i, kBytesPerLine))));
  }
  printer->Print(
      ';\n'
      '    static const int32_t values[] = {\n');
  for (int i = 0; i < all_values_.size(); i++) {
    printer->Print('        $name$,\n',  'name', EnumValueName(all_values_[i]));
  }
  printer->Print('    };\n');
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
    
    {  static const std::string R;
};
    
    #include <cstring>
#include <cstdio>
    
    DHTSetup::DHTSetup() = default;
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
      ~DHTTaskExecutor();
    
    namespace aria2 {
    }
    
      virtual void
  addPeriodicTask2(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    
    {  void setTokenTracker(DHTTokenTracker* tokenTracker);
};
    
      FunctionRef<int(int, char const*)> variant5 = of;
  EXPECT_EQ(100 + 5 * 19, variant5(19, 'foo'));
  FunctionRef<int(int, char const*)> const cvariant5 = of;
  EXPECT_EQ(100 + 5 * 19, cvariant5(19, 'foo'));
    
    #include <iostream>
    
    
    {  /**
   * Returns a double in [min, max), if min == max, returns 0.
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static double randDouble(double min, double max, RNG&& rng) {
    if (std::fabs(max - min) < std::numeric_limits<double>::epsilon()) {
      return 0;
    }
    return std::uniform_real_distribution<double>(min, max)(rng);
  }
};
    
    struct Options {
  /**
   * ZLIB: default option -- write a zlib wrapper as documented in RFC 1950.
   *
   * GZIP: write a simple gzip header and trailer around the compressed data
   * instead of a zlib wrapper.
   *
   * RAW: deflate will generate raw deflate data with no zlib header or
   * trailer, and will not compute a check value.
   *
   * AUTO: enable automatic header detection for decoding gzip or zlib data.
   * For deflation, ZLIB will be used.
   */
  enum class Format { ZLIB, GZIP, RAW, AUTO };
    }