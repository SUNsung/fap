
        
        
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    #include 'swift/Syntax/Rewriter.h'
    
    #include 'swift/Basic/LLVM.h'
#include 'swift/AST/DiagnosticConsumer.h'
    
    #include 'swift/Runtime/HeapObject.h'
#include <mutex>
    
    /// A LSValue is an abstraction of an object field value in program. It
/// consists of a base that is the tracked SILValue, and a projection path to
/// the represented field.
class LSValue : public LSBase {
  /// If this is a covering value, we need to go to each predecessor to
  /// materialize the value.
  bool CoveringValue;
public:
  /// Constructors.
  LSValue() : LSBase(), CoveringValue(false) {}
  LSValue(KeyKind Kind) : LSBase(Kind), CoveringValue(false) {}
  LSValue(bool CSVal) : LSBase(Normal), CoveringValue(CSVal) {}
  LSValue(SILValue B, const ProjectionPath &P)
      : LSBase(B, P), CoveringValue(false) {}
    }
    
    PyObject* NewMessageEnumsByName(const Descriptor* descriptor);
PyObject* NewMessageEnumsSeq(const Descriptor* descriptor);
PyObject* NewMessageEnumValuesByName(const Descriptor* descriptor);
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
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
    
    void RepeatedEnumFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.Add(other.$name$_);\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    
    {    PyThreadState *_save = NULL;
    try {
      Py_UNBLOCK_THREADS;
      copyFunc(LIBRARY_STATE dst, THDPModule_makeDescriptor(src_));
      Py_BLOCK_THREADS;
    } catch (...) {
      if (_save) {
        Py_BLOCK_THREADS;
      }
      throw;
    }
  };
    
          socklen_t err_len = sizeof(errno);
      errno = 0;
      ::getsockopt(socket, SOL_SOCKET, SO_ERROR, &errno, &err_len);
      /* `errno` is set when:
       *   1. `getsockopt` has failed
       *   2. there is awaiting error in the socket (the error is saved to the `errno` variable)
       */
      if (errno != 0) {
        throw std::system_error(errno, std::system_category());
      }
    
    function<ComputationNetworkPtr(DEVICEID_TYPE)> GetCreateNetworkFn(const ScriptableObjects::IConfigRecord& config)
{
    // createNetwork() is a BrainScript lambda that creates the model
    // We create a C++ wrapper around it, which we then pass to Train().
    auto createNetworkConfigLambda = config[L'createNetwork'].AsPtr<ScriptableObjects::ConfigLambda>();
    return [createNetworkConfigLambda](DEVICEID_TYPE /*deviceId*/)
    {
        // execute the lambda
        vector<ScriptableObjects::ConfigValuePtr> args; // this lambda has no arguments
        ScriptableObjects::ConfigLambda::NamedParams namedArgs;
        let netValue = createNetworkConfigLambda->Apply(move(args), move(namedArgs), L'BuildNetworkFromDescription');
        // typecast the result to the desired type
        return netValue.AsPtr<ComputationNetwork>();
    };
}