
        
        static const char* kImplVersionName = 'api_version';
    
    #include <google/protobuf/descriptor_database.h>
    
    class EnumGenerator : public SourceGeneratorBase {
 public:
  EnumGenerator(const EnumDescriptor* descriptor, const Options* options);
  ~EnumGenerator();
    }
    
    class RepeatedMessageFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedMessageFieldGenerator(const FieldDescriptor* descriptor,
                                int fieldOrdinal,
                                const Options *options);
  ~RepeatedMessageFieldGenerator();
    }
    
    SourceGeneratorBase::~SourceGeneratorBase() {
}
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}