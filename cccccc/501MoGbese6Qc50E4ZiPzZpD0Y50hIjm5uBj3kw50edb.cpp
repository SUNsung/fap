
        
          /// Build the components of an Objective-C method descriptor for the given
  /// property's method implementations.
  void emitObjCSetterDescriptorParts(IRGenModule &IGM,
                                     VarDecl *property,
                                     llvm::Constant *&selectorRef,
                                     llvm::Constant *&atEncoding,
                                     llvm::Constant *&impl);
    
          NameStyle style(completion->getName());
      bool hideUnderscore = options.hideUnderscores && style.leadingUnderscores;
      if (hideUnderscore && options.reallyHideAllUnderscores)
        continue;
    
    
    {  bool checkValue(SILValue Value);
};
    
    typedef NS_ENUM(NSInteger, ObjectBehaviorAction) {
    ObjectBehaviorActionRetain,
    ObjectBehaviorActionCopy,
    ObjectBehaviorActionMutableCopy
};
    
    static std::unique_ptr<IndexRecordingConsumer>
makeRecordingConsumer(std::string Filename, std::string indexStorePath,
                      DiagnosticEngine *diags,
                      std::string *outRecordFile,
                      bool *outFailed) {
  return llvm::make_unique<IndexRecordingConsumer>([=](SymbolTracker &record) {
    *outFailed = writeRecord(record, Filename, indexStorePath, diags,
                             *outRecordFile);
  });
}
    
    namespace swift {
    }
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
    bool Substitution::isCanonical() const {
  if (!getReplacement()->isCanonical())
    return false;
  for (auto conf : getConformances()) {
    if (!conf.isCanonical())
      return false;
  }
  return true;
}

    
    int FlatCompiler::Compile(int argc, const char **argv) {
  if (params_.generators == nullptr || params_.num_generators == 0) {
    return 0;
  }
    }
    
      if (type.base_type == BASE_TYPE_BOOL) {
    text += val != 0 ? 'true' : 'false';
  } else {
    text += NumToString(val);
  }
    
      uint32_t AsUInt32() const { return static_cast<uint32_t>(AsUInt64()); }
  uint16_t AsUInt16() const { return static_cast<uint16_t>(AsUInt64()); }
  uint8_t AsUInt8() const { return static_cast<uint8_t>(AsUInt64()); }
    
    
    {}  // namespace grpc
    
    
    { private:
  std::unique_ptr<Greeter::Stub> stub_;
};
    
    
    {  return 0;
}

    
    #endif  // FLATBUFFERS_CODE_GENERATORS_H_

    
    // Get a field's default, if you know it's floating point and its exact type.
template<typename T> T GetFieldDefaultF(const reflection::Field &field) {
  assert(sizeof(T) == GetTypeSize(field.type()->base_type()));
  return static_cast<T>(field.default_real());
}