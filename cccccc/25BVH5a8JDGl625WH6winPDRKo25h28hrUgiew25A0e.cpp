
        
        
    {} // namespace swift
    
    @interface TimeZoneBridgingTester : NSObject
- (NSTimeZone *)autoupdatingCurrentTimeZone;
- (BOOL)verifyAutoupdatingTimeZone:(NSTimeZone *)tz;
@end
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    namespace swift {
    }
    
    template <> struct DenseMapInfo<LSLocation> {
  static inline LSLocation getEmptyKey() {
    return LSLocation(LSBase::Empty);
  }
  static inline LSLocation getTombstoneKey() {
    return LSLocation(LSBase::Tombstone);
  }
  static inline unsigned getHashValue(const LSLocation &Loc) {
    return hash_value(Loc);
  }
  static bool isEqual(const LSLocation &LHS, const LSLocation &RHS) {
    return LHS == RHS;
  }
};
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
            // Create values for key-value pair
        const int k = (order == SEQUENTIAL) ? i + j :
                      (rand_.Next() % num_entries);
        char key[100];
        snprintf(key, sizeof(key), '%016d', k);
    
    // Number of read operations to do.  If negative, do FLAGS_num reads.
static int FLAGS_reads = -1;