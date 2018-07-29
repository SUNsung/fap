
        
          DebuggerClient(ASTContext &C) : Ctx(C) { }
  virtual ~DebuggerClient() = default;
  
  // DebuggerClient is consulted at the beginning of the parsing
  // of various DeclKinds to see whether the decl should be parsed
  // in the global context rather than the current context.
  // This question will only be asked if the decl's current context
  // is a function marked with the LLDBDebuggerFunction attribute.
  virtual bool shouldGlobalize(Identifier Name, DeclKind kind) = 0;
  
  virtual void didGlobalize (Decl *Decl) = 0;
    
    #pragma mark - NSCalendar verification
    
      size_t NumChildren;
  bool Ordered;
    
    
    {  /// Return a hash code of any components from these options that should
  /// contribute to a Swift Bridging PCH hash.
  llvm::hash_code getPCHHashComponents() const {
    // Nothing here that contributes anything significant when emitting the PCH.
    return llvm::hash_value(0);
  }
};
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
    namespace index {
    }
    
      explicit IndexTrieNode(unsigned V, IndexTrieNode *P): Index(V), Parent(P) {}
    
      /// Compare payload only, not comments etc.
  bool operator<(const Value& other) const;
  bool operator<=(const Value& other) const;
  bool operator>=(const Value& other) const;
  bool operator>(const Value& other) const;
  bool operator==(const Value& other) const;
  bool operator!=(const Value& other) const;
  int compare(const Value& other) const;
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SourceGeneratorBase);
};
    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateNonNestedInitializationCode(io::Printer* printer);
    
      virtual MessageGenerator* NewMessageGenerator(
      const Descriptor* descriptor) const;
    
    
    {  // Pick up remaining bytes
  switch (limit - data) {
    case 3:
      h += static_cast<unsigned char>(data[2]) << 16;
      FALLTHROUGH_INTENDED;
    case 2:
      h += static_cast<unsigned char>(data[1]) << 8;
      FALLTHROUGH_INTENDED;
    case 1:
      h += static_cast<unsigned char>(data[0]);
      h *= m;
      h ^= (h >> r);
      break;
  }
  return h;
}
    
    class SCOPED_LOCKABLE MutexLock {
 public:
  explicit MutexLock(port::Mutex *mu) EXCLUSIVE_LOCK_FUNCTION(mu)
      : mu_(mu)  {
    this->mu_->Lock();
  }
  ~MutexLock() UNLOCK_FUNCTION() { this->mu_->Unlock(); }
    }
    
      // Delete everything
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Delete(WriteOptions(), Key(i)));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
    #endif  // STORAGE_LEVELDB_DB_LOG_WRITER_H_

    
      ~Block();