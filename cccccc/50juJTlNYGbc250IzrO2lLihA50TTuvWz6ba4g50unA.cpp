
        
          class StringSource : public SequentialFile {
   public:
    Slice contents_;
    bool force_error_;
    bool returned_partial_;
    StringSource() : force_error_(false), returned_partial_(false) { }
    }
    
    class FilterBlockReader {
 public:
 // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
    Status BlockHandle::DecodeFrom(Slice* input) {
  if (GetVarint64(input, &offset_) &&
      GetVarint64(input, &size_)) {
    return Status::OK();
  } else {
    return Status::Corruption('bad block handle');
  }
}
    
    
    {
    {    // Check false positive rate
    double rate = FalsePositiveRate();
    if (kVerbose >= 1) {
      fprintf(stderr, 'False positives: %5.2f%% @ length = %6d ; bytes = %6d\n',
              rate*100.0, length, static_cast<int>(FilterSize()));
    }
    ASSERT_LE(rate, 0.02);   // Must not be over 2%
    if (rate > 0.0125) mediocre_filters++;  // Allowed, but not too often
    else good_filters++;
  }
  if (kVerbose >= 1) {
    fprintf(stderr, 'Filters: %d good, %d mediocre\n',
            good_filters, mediocre_filters);
  }
  ASSERT_LE(mediocre_filters, good_filters/5);
}
    
    #if 0
static void DumpInternalIter(Iterator* iter) {
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey k;
    if (!ParseInternalKey(iter->key(), &k)) {
      fprintf(stderr, 'Corrupt '%s'\n', EscapeString(iter->key()).c_str());
    } else {
      fprintf(stderr, '@ '%s'\n', k.DebugString().c_str());
    }
  }
}
#endif
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    
    {
    {}  // namespace
}  // namespace leveldb
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    namespace leveldb {
    }
    
    
    {}  // namespace leveldb