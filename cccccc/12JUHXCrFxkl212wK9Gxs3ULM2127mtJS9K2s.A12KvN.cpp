
        
        static const Message* GetCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
static Message* MutableCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
        if (file_contains_extensions) {
      printer->Print(
          'static GPBExtensionDescription descriptions[] = {\n');
      printer->Indent();
      for (std::vector<ExtensionGenerator *>::iterator iter =
               extension_generators_.begin();
           iter != extension_generators_.end(); ++iter) {
        (*iter)->GenerateStaticVariablesInitialization(printer);
      }
      for (std::vector<MessageGenerator *>::iterator iter =
               message_generators_.begin();
           iter != message_generators_.end(); ++iter) {
        (*iter)->GenerateStaticVariablesInitialization(printer);
      }
      printer->Outdent();
      printer->Print(
          '};\n'
          'for (size_t i = 0; i < sizeof(descriptions) / sizeof(descriptions[0]); ++i) {\n'
          '  GPBExtensionDescriptor *extension =\n'
          '      [[GPBExtensionDescriptor alloc] initWithExtensionDescription:&descriptions[i]];\n'
          '  [registry addExtension:extension];\n'
          '  [self globallyRegisterExtension:extension];\n'
          '  [extension release];\n'
          '}\n');
    }
    
    #include <map>
#include <string>
    
    #include <iostream>
#include <set>
    
    static uint32 ComputeCRC32(const string &buf) {
  uint32 x = ~0U;
  for (int i = 0; i < buf.size(); ++i) {
    unsigned char c = buf[i];
    x = kCRC32Table[(x ^ c) & 0xff] ^ (x >> 8);
  }
  return ~x;
}
    
    float SafeDoubleToFloat(double value) {
  if (value > std::numeric_limits<float>::max()) {
    return std::numeric_limits<float>::infinity();
  } else if (value < -std::numeric_limits<float>::max()) {
    return -std::numeric_limits<float>::infinity();
  } else {
    return static_cast<float>(value);
  }
}
    
      uint64 result = 0;
  for (; *ptr != '\0'; ptr++) {
    int digit = DigitValue(*ptr);
    if (digit < 0 || digit >= base) {
      // The token provided by Tokenizer is invalid. i.e., 099 is an invalid
      // token, but Tokenizer still think it's integer.
      return false;
    }
    if (digit > max_value || result > (max_value - digit) / base) {
      // Overflow.
      return false;
    }
    result = result * base + digit;
  }
    
    
    {                      ' trailing block comment\n'
                      ' line 2\n'
                      ' line 3\n',
                      {},
                      ' leading block comment\n'
                      ' line 2\n'
                      ' line 3 '
                    },
    
    namespace mxnet {
/*! \brief runtime functions for NDArray */
class Imperative {
 public:
  /*! \brief */
  class AGInfo {
   public:
    Context ctx;
    OpReqType grad_req;
    OpStatePtr state;
    std::vector<NDArray> outputs;
    std::vector<NDArray> out_grads;
    bool fresh_out_grad;
    }
    }
    }
    
      std::string TypeString() const override {
    return 'CaffeLoss';
  }
    
    When `num_parts` and `part_index` are provided, the data is split into `num_parts` partitions,
and the iterator only reads the `part_index`-th partition. However, the partitions are not
guaranteed to be even.
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}