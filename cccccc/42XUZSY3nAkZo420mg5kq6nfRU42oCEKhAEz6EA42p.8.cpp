
        
        void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
    void DiverseStackBase::pushNewStorageSlow(std::size_t needed) {
  bool wasInline = isAllocatedInline();
    }
    
      bool IsFirstLine = true;
    
    uint64_t swift::unicode::getUTF16Length(StringRef Str) {
  uint64_t Length;
  // Transcode the string to UTF-16 to get its length.
  SmallVector<llvm::UTF16, 128> buffer(Str.size() + 1); // +1 for ending nulls.
  const llvm::UTF8 *fromPtr = (const llvm::UTF8 *) Str.data();
  llvm::UTF16 *toPtr = &buffer[0];
  llvm::ConversionResult Result =
    ConvertUTF8toUTF16(&fromPtr, fromPtr + Str.size(),
                       &toPtr, toPtr + Str.size(),
                       llvm::strictConversion);
  assert(Result == llvm::conversionOK &&
         'UTF-8 encoded string cannot be converted into UTF-16 encoding');
  (void)Result;
    }
    
    
    {  return '';
}

    
    public:
  static CFPointeeInfo classifyTypedef(const clang::TypedefNameDecl *decl);
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    #include <google/protobuf/python/python_protobuf.h>
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    void upb_inttable_packedsize(const upb_inttable *t, size_t *size);
void upb_strtable_packedsize(const upb_strtable *t, size_t *size);
upb_inttable *upb_inttable_pack(const upb_inttable *t, void *p, size_t *ofs,
                                size_t size);
upb_strtable *upb_strtable_pack(const upb_strtable *t, void *p, size_t *ofs,
                                size_t size);
    
    bool DecodeMetadata(const string& path, GeneratedCodeInfo* info) {
  string data;
  GOOGLE_CHECK_OK(File::GetContents(path, &data, true));
  io::ArrayInputStream input(data.data(), data.size());
  return info->ParseFromZeroCopyStream(&input);
}
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
      printer->Print(
    '/// <summary>Holder for reflection information generated from $file_name$</summary>\n'
    '$access_level$ static partial class $reflection_class_name$ {\n'
    '\n',
    'file_name', file_->name(),
    'access_level', class_access_level(),
    'reflection_class_name', reflectionClassname_);
  printer->Indent();
}
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    void ImmutableMapFieldGenerator::
GenerateParsingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'if (!$get_mutable_bit_parser$) {\n'
      '  $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '      $map_field_parameter$);\n'
      '  $set_mutable_bit_parser$;\n'
      '}\n');
  if (!SupportUnknownEnumValue(descriptor_->file()) &&
      GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        'com.google.protobuf.ByteString bytes = input.readBytes();\n'
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = $default_entry$.getParserForType().parseFrom(bytes);\n');
    printer->Print(
        variables_,
        'if ($value_enum_type$.forNumber($name$__.getValue()) == null) {\n'
        '  unknownFields.mergeLengthDelimitedField($number$, bytes);\n'
        '} else {\n'
        '  $name$_.getMutableMap().put(\n'
        '      $name$__.getKey(), $name$__.getValue());\n'
        '}\n');
  } else {
    printer->Print(
        variables_,
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = input.readMessage(\n'
        '    $default_entry$.getParserForType(), extensionRegistry);\n'
        '$name$_.getMutableMap().put(\n'
        '    $name$__.getKey(), $name$__.getValue());\n');
  }
}
    
      // Note: For the TextFormat decode info, we can't use the enum value as
  // the key because protocol buffer enums have 'allow_alias', which lets
  // a value be used more than once. Instead, the index into the list of
  // enum value descriptions is used. Note: start with -1 so the first one
  // will be zero.
  TextFormatDecodeData text_format_decode_data;
  int enum_value_description_key = -1;
  string text_blob;
    
    class EnumFieldGenerator : public SingleFieldGenerator {
  friend FieldGenerator* FieldGenerator::Make(const FieldDescriptor* field,
                                              const Options& options);
    }