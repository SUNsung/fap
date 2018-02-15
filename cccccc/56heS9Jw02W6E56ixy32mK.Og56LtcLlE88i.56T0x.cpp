
    {} // namespace Json
    
    namespace file_descriptor {
PyObject* NewFileMessageTypesByName(const FileDescriptor* descriptor);
    }
    
    typedef struct RepeatedScalarContainer {
  PyObject_HEAD;
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedEnumFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.WriteTo(output, _repeated_$name$_codec);\n');
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_EXTENSION_LITE_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_EXTENSION_LITE_H__