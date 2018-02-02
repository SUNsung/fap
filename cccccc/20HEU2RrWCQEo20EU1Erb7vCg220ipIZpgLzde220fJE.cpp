
        
        Value::Value(const char* beginValue, const char* endValue) {
  initBasic(stringValue, true);
  value_.string_ =
      duplicateAndPrefixStringValue(beginValue, static_cast<unsigned>(endValue - beginValue));
}
    
    namespace message_descriptor {
PyObject* NewMessageFieldsByName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByCamelcaseName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByNumber(const Descriptor* descriptor);
PyObject* NewMessageFieldsSeq(const Descriptor* descriptor);
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);