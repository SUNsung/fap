
        
          auto channel =
      grpc::CreateChannel(server_address, grpc::InsecureChannelCredentials());
  GreeterClient greeter(channel);
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>
    
      for (int i = 0; i < service->method_count(); ++i) {
    (*vars)['method_name'] = service->method(i).get()->name();
    printer->Print(*vars, 'WithAsyncMethod_$method_name$<');
  }
  printer->Print('Service');
  for (int i = 0; i < service->method_count(); ++i) {
    printer->Print(' >');
  }
  printer->Print(' AsyncService;\n');
    
      void Error(const std::string &err, bool usage = true,
             bool show_exe_name = true) const;
    
    inline Reference Map::operator[](const char *key) const {
  auto keys = Keys();
  // We can't pass keys.byte_width_ to the comparison function, so we have
  // to pick the right one ahead of time.
  int (*comp)(const void *, const void *) = nullptr;
  switch (keys.byte_width_) {
    case 1: comp = KeyCompare<uint8_t>; break;
    case 2: comp = KeyCompare<uint16_t>; break;
    case 4: comp = KeyCompare<uint32_t>; break;
    case 8: comp = KeyCompare<uint64_t>; break;
  }
  auto res = std::bsearch(key, keys.data_, keys.size(), keys.byte_width_, comp);
  if (!res) return Reference(nullptr, 1, NullPackedType());
  auto i = (reinterpret_cast<uint8_t *>(res) - keys.data_) / keys.byte_width_;
  return (*static_cast<const Vector *>(this))[i];
}
    
      auto name = builder.CreateString('MyMonster');
    
      // here, parser.builder_ contains a binary buffer that is the parsed data.
    
    
    {  std::string &code = *code_ptr;
  if (config != nullptr && config->first_line != nullptr) {
    code += std::string(prefix) + std::string(config->first_line) + '\n';
  }
  std::string line_prefix =
      std::string(prefix) +
      ((config != nullptr && config->content_line_prefix != nullptr)
           ? config->content_line_prefix
           : '///');
  for (auto it = dc.begin(); it != dc.end(); ++it) {
    code += line_prefix + *it + '\n';
  }
  if (config != nullptr && config->last_line != nullptr) {
    code += std::string(prefix) + std::string(config->last_line) + '\n';
  }
}
    
    std::string GenNativeType(BaseType type) {
  switch (type) {
    case BASE_TYPE_BOOL: return 'boolean';
    case BASE_TYPE_CHAR:
    case BASE_TYPE_UCHAR:
    case BASE_TYPE_SHORT:
    case BASE_TYPE_USHORT:
    case BASE_TYPE_INT:
    case BASE_TYPE_UINT:
    case BASE_TYPE_LONG:
    case BASE_TYPE_ULONG:
    case BASE_TYPE_FLOAT:
    case BASE_TYPE_DOUBLE: return 'number';
    case BASE_TYPE_STRING: return 'string';
    default: return '';
  }
}
    
    // Generate the receiver for function signatures.
static void GenReceiver(const StructDef &struct_def, std::string *code_ptr) {
  std::string &code = *code_ptr;
  code += Indent + '# ' + struct_def.name + '\n';
  code += Indent + 'def ';
}
    
        Printf('CRASH_MIN: executing: %s\n', Cmd.c_str());
    int ExitCode = ExecuteCommand(Cmd);
    if (ExitCode == 0) {
      Printf('ERROR: the input %s did not crash\n', CurrentFilePath.c_str());
      exit(1);
    }
    Printf('CRASH_MIN: '%s' (%zd bytes) caused a crash. Will try to minimize '
           'it further\n',
           CurrentFilePath.c_str(), U.size());
    
    // Parse a directory ending in separator, like: SomeDir\
// Returns number of characters considered if successful.
static size_t ParseDir(const std::string &FileName, const size_t Offset) {
  size_t Pos = Offset;
  const size_t End = FileName.size();
  if (Pos >= End || IsSeparator(FileName[Pos]))
    return 0;
  for(; Pos < End && !IsSeparator(FileName[Pos]); ++Pos)
    ;
  if (Pos >= End)
    return 0;
  ++Pos; // Include separator.
  return Pos - Offset;
}
    
      bool HasMoreMallocsThanFrees = false;
  size_t NumberOfLeakDetectionAttempts = 0;
    
    ATTRIBUTE_NO_SANITIZE_MEMORY
void FreeHook(const volatile void *ptr) {
  size_t N = AllocTracer.Frees++;
  if (int TraceLevel = AllocTracer.TraceLevel) {
    Printf('FREE[%zd]   %p\n', N, ptr);
    if (TraceLevel >= 2 && EF)
      EF->__sanitizer_print_stack_trace();
  }
}
    
    #endif  // LLVM_FUZZER_OPTIONS_H

    
    // We may need to avoid defining weak hooks to stay compatible with older clang.
#ifndef LLVM_FUZZER_DEFINES_SANITIZER_WEAK_HOOOKS
# define LLVM_FUZZER_DEFINES_SANITIZER_WEAK_HOOOKS 1
#endif