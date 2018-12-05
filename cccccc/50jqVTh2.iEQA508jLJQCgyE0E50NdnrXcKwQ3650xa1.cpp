
        
        // Parses a set of comma-delimited name/value pairs.
void ParseGeneratorParameter(const string& text,
                             std::vector<std::pair<string, string> >* output) {
  std::vector<string> parts = Split(text, ',', true);
    }
    
    void EnumGenerator::Generate(io::Printer* printer) {
  WriteEnumDocComment(printer, descriptor_);
  printer->Print('$access_level$ enum $name$ {\n',
                 'access_level', class_access_level(),
                 'name', descriptor_->name());
  printer->Indent();
  std::set<string> used_names;
  std::set<int> used_number;
  for (int i = 0; i < descriptor_->value_count(); i++) {
      WriteEnumValueDocComment(printer, descriptor_->value(i));
      string original_name = descriptor_->value(i)->name();
      string name = GetEnumValueName(descriptor_->name(), descriptor_->value(i)->name());
      // Make sure we don't get any duplicate names due to prefix removal.
      while (!used_names.insert(name).second) {
        // It's possible we'll end up giving this warning multiple times, but that's better than not at all.
        GOOGLE_LOG(WARNING) << 'Duplicate enum value ' << name << ' (originally ' << original_name
          << ') in ' << descriptor_->name() << '; adding underscore to distinguish';
        name += '_';
      }
      int number = descriptor_->value(i)->number();
      if (!used_number.insert(number).second) {
          printer->Print('[pbr::OriginalName(\'$original_name$\', PreferredAlias = false)] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      } else {
          printer->Print('[pbr::OriginalName(\'$original_name$\')] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      }
  }
  printer->Outdent();
  printer->Print('}\n');
  printer->Print('\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
    GeneratorFactory::GeneratorFactory() {}
GeneratorFactory::~GeneratorFactory() {}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    OneofGenerator::OneofGenerator(const OneofDescriptor* descriptor)
    : descriptor_(descriptor) {
  variables_['enum_name'] = OneofEnumName(descriptor_);
  variables_['name'] = OneofName(descriptor_);
  variables_['capitalized_name'] = OneofNameCapitalized(descriptor_);
  variables_['raw_index'] = SimpleItoa(descriptor_->index());
  const Descriptor* msg_descriptor = descriptor_->containing_type();
  variables_['owning_message_class'] = ClassName(msg_descriptor);
    }
    
    
    {}  // namespace testing
    
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
    
    INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
      // Assumes one of the above roles.
  virtual TestRole AssumeRole() = 0;
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
    // Helper for suppressing false warning from Clang on a const char*
// variable declared in a conditional expression always being NULL in
// the else branch.
struct GTEST_API_ ConstCharPtr {
  ConstCharPtr(const char* str) : value(str) {}
  operator bool() const { return true; }
  const char* value;
};
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10>
class ValueArray10 {
 public:
  ValueArray10(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10) {}
    }
    
      template <GTEST_8_TYPENAMES_(U)>
  tuple(const GTEST_8_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_) {}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47, typename T48, typename T49, typename T50>
struct Types50 {
  typedef T1 Head;
  typedef Types49<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
      T44, T45, T46, T47, T48, T49, T50> Tail;
};
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
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
    
    
    {    return element;
  }
    
    void BENCHFUN(fillCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size_t(size), randomObject<VECTOR::value_type>());
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(fillCtor), 16)
BENCHMARK_PARAM(BENCHFUN(fillCtor), 128)
BENCHMARK_PARAM(BENCHFUN(fillCtor), 1024)
    
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
    
      /**
   * 'The memLevel parameter specifies how much memory should be allocated for
   * the internal compression state. memLevel=1 uses minimum memory but is slow
   * and reduces compression ratio; memLevel=9 uses maximum memory for optimal
   * speed. The default value is 8.'
   */
  int memLevel;
    
        SharedPtr old_ptr;
    
    namespace {
    }
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    #include <math.h>
    
    void ComputeBlockDCT(coeff_t* coeffs) {
  ColumnDct(coeffs);
  RowDct(coeffs + 0 * 8, kTable04);
  RowDct(coeffs + 1 * 8, kTable17);
  RowDct(coeffs + 2 * 8, kTable26);
  RowDct(coeffs + 3 * 8, kTable35);
  RowDct(coeffs + 4 * 8, kTable04);
  RowDct(coeffs + 5 * 8, kTable35);
  RowDct(coeffs + 6 * 8, kTable26);
  RowDct(coeffs + 7 * 8, kTable17);
}
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    
    {}  // namespace guetzli

    
      std::unique_ptr<char[]> buf(new char[buffer_size]);
  while (!feof(f)) {
    size_t read_bytes = fread(buf.get(), sizeof(char), buffer_size, f);
    if (ferror(f)) {
      perror('fread');
      exit(1);
    }
    result.append(buf.get(), read_bytes);
  }
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    bool JPEGData::Is420() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 2 &&
          max_v_samp_factor == 2 &&
          components[0].h_samp_factor == 2 &&
          components[0].v_samp_factor == 2 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    #define VERIFY_LEN(n)                                                   \
  if (*pos + (n) > len) {                                               \
    fprintf(stderr, 'Unexpected end of input: pos=%d need=%d len=%d\n', \
            static_cast<int>(*pos), static_cast<int>(n),                \
            static_cast<int>(len));                                     \
    jpg->error = JPEG_UNEXPECTED_EOF;                                   \
    return false;                                                       \
  }
    
    // Function pointer type used to write len bytes into buf. Returns the
// number of bytes written or -1 on error.
typedef int (*JPEGOutputHook)(void* data, const uint8_t* buf, size_t len);