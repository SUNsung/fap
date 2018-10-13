
        
        bool AnyMetadata::UnpackTo(Message* message) const {
  if (!InternalIs(message->GetDescriptor())) {
    return false;
  }
  return message->ParseFromString(value_->GetNoArena());
}
    
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
    
    string EscapeJavadoc(const string& input) {
  string result;
  result.reserve(input.size() * 2);
    }
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
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
    
    string TypeName(const FieldDescriptor* field,
                ClassNameResolver* name_resolver,
                bool boxed) {
  if (GetJavaType(field) == JAVATYPE_MESSAGE) {
    return name_resolver->GetImmutableClassName(field->message_type());
  } else if (GetJavaType(field) == JAVATYPE_ENUM) {
    return name_resolver->GetImmutableClassName(field->enum_type());
  } else {
    return boxed ? BoxedPrimitiveTypeName(GetJavaType(field))
                 : PrimitiveTypeName(GetJavaType(field));
  }
}
    
     private:
  const EnumDescriptor* descriptor_;
  std::vector<const EnumValueDescriptor*> base_values_;
  std::vector<const EnumValueDescriptor*> all_values_;
  const string name_;
    
    class RepeatedEnumFieldGenerator : public RepeatedFieldGenerator {
  friend FieldGenerator* FieldGenerator::Make(const FieldDescriptor* field,
                                              const Options& options);
    }
    
    void CoreCodegen::assert_fail(const char* failed_assertion, const char* file,
                              int line) {
  gpr_log(file, line, GPR_LOG_SEVERITY_ERROR, 'assertion failed: %s',
          failed_assertion);
  abort();
}
    
      grpc_error* Init(grpc_call_element* elem,
                   const grpc_call_element_args* args) override;
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
    //////////////////////////////////////////////////////////////////////
    
    inline APCLocalArray* APCLocalArray::Make(const APCArray* aa) {
  auto size = sizeof(APCLocalArray) + aa->size() * sizeof(TypedValue);
  auto local = new (tl_heap->objMalloc(size)) APCLocalArray(aa);
  assertx(local->heapSize() == size);
  return local;
}
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    struct RequestTimeoutException : ResourceExceededException {
  RequestTimeoutException(const std::string& msg, const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestTimeoutException);
};
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }