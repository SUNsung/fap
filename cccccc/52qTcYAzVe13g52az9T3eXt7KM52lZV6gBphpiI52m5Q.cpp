
        
        namespace leveldb {
    }
    
    static void AppendWithSpace(std::string* str, Slice msg) {
  if (msg.empty()) return;
  if (!str->empty()) {
    str->push_back(' ');
  }
  str->append(msg.data(), msg.size());
}
    
      void PartialCompactTestPreFault(int num_pre_sync, int num_post_sync) {
    DeleteAllData();
    Build(0, num_pre_sync);
    db_->CompactRange(nullptr, nullptr);
    Build(num_pre_sync, num_post_sync);
  }
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
      void CompactMemTable() { dbfull()->TEST_CompactMemTable(); }
    
      Cache::Handle* handle = nullptr;
  Status s = FindTable(file_number, file_size, &handle);
  if (!s.ok()) {
    return NewErrorIterator(s);
  }
    
          case kLogNumber:
        if (GetVarint64(&input, &log_number_)) {
          has_log_number_ = true;
        } else {
          msg = 'log number';
        }
        break;
    
    
    {  private:
    uint32_t  bits[6];
};
    
    class BreakIterator;
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
    U_CDECL_END
    
        /**
     * Returns a string representation of this replacer.  If the
     * result of calling this function is passed to the appropriate
     * parser, typically TransliteratorParser, it will produce another
     * replacer that is equal to this one.
     * @param result the string to receive the pattern.  Previous
     * contents will be deleted.
     * @param escapeUnprintable if TRUE then convert unprintable
     * character to their hex escape representations, \\uxxxx or
     * \\Uxxxxxxxx.  Unprintable characters are defined by
     * Utility.isUnprintable().
     * @return a reference to 'result'.
     */
    virtual UnicodeString& toReplacerPattern(UnicodeString& result,
                                             UBool escapeUnprintable) const;
    
      const std::shared_ptr<DHTNode>& getLocalNode() const { return localNode_; }
    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
    DHTTokenTracker::~DHTTokenTracker() = default;
    
      // always return false
  virtual bool isReply() const CXX11_OVERRIDE;