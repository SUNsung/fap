
        
          DebuggerClient(ASTContext &C) : Ctx(C) { }
  virtual ~DebuggerClient() = default;
  
  // DebuggerClient is consulted at the beginning of the parsing
  // of various DeclKinds to see whether the decl should be parsed
  // in the global context rather than the current context.
  // This question will only be asked if the decl's current context
  // is a function marked with the LLDBDebuggerFunction attribute.
  virtual bool shouldGlobalize(Identifier Name, DeclKind kind) = 0;
  
  virtual void didGlobalize (Decl *Decl) = 0;
    
        llvm::errs() << '\n=====================================================\n';
    SyntaxNode->dump(llvm::errs());
    llvm::errs() << '\n\n---- Maps to semantic node: ----\n\n';
    
    public:
  ImportDepth() = default;
  ImportDepth(ASTContext &context, CompilerInvocation &invocation);
    
    #endif

    
    typedef NS_ENUM(NSInteger, ObjectBehaviorAction) {
    ObjectBehaviorActionRetain,
    ObjectBehaviorActionCopy,
    ObjectBehaviorActionMutableCopy
};
    
    enum class ASTNodeKind : uint8_t {
#define MARKUP_AST_NODE(Id, Parent) Id,
#define ABSTRACT_MARKUP_AST_NODE(Id, Parent)
#define MARKUP_AST_NODE_RANGE(Id, FirstId, LastId) \
  First_##Id = FirstId, Last_##Id = LastId,
#include 'swift/Markup/ASTNodes.def'
};
    
    
    {} // end namespace swift
    
    #ifndef SWIFT_AST_SUBSTITUTION_H
#define SWIFT_AST_SUBSTITUTION_H
    
    #ifdef __APPLE__
    
        // pass address (value interface)
    iterator find(const K& key)                     { return m.find(&key); }
    const_iterator find(const K& key) const         { return m.find(&key); }
    iterator lower_bound(const K& key)              { return m.lower_bound(&key); }
    const_iterator lower_bound(const K& key) const  { return m.lower_bound(&key); }
    size_type erase(const K& key)                   { return m.erase(&key); }
    size_type count(const K& key) const             { return m.count(&key); }
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    namespace leveldb {
    }
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    namespace leveldb {
    }
    
      // Advanced functions: these are used to reduce the space requirements
  // for internal data structures like index blocks.
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    
    {}  // namespace guetzli
    
    
    {  return total_size;
}
    
    // Preprocesses U and V channel for better results after downsampling.