
        
        // Reads the DRI marker and saved the restart interval into *jpg.
bool ProcessDRI(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  if (jpg->restart_interval > 0) {
    fprintf(stderr, 'Duplicate DRI marker.\n');
    jpg->error = JPEG_DUPLICATE_DRI;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(4);
  size_t marker_len = ReadUint16(data, pos);
  int restart_interval = ReadUint16(data, pos);
  jpg->restart_interval = restart_interval;
  VERIFY_MARKER_END();
  return true;
}
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  rocksdb::Slice begin  = *v8::String::Utf8Value(args[0]->ToString());
  rocksdb::Slice end    = *v8::String::Utf8Value(args[1]->ToString());
  std::string cf        = *v8::String::Utf8Value(args[2]->ToString());
  db_wrapper->status_    = db_wrapper->db_->CompactRange(
      db_wrapper->columnFamilies_[cf], &begin, &end);
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
      // Generate a list of random keys and values
  const int kWordCount = 15;
  std::string words[] = {'sdasd', 'triejf', 'fnjsdfn', 'dfjisdfsf', '342839',
                         'dsuha', 'mabuais', 'sadajsid', 'jf9834hf', '2d9j89',
                         'dj9823jd', 'a', 'dk02ed2dh', '$(jd4h984$(*', 'mabz'};
  const int kKeyCount = 6;
  std::string keys[] = {'dhaiusdhu', 'denidw', 'daisda', 'keykey', 'muki',
                        'shzassdianmd'};
    
      /// Return (list: key)[first..last] (inclusive)
  /// May throw RedisListException
  std::vector<std::string> Range(const std::string& key,
                                 int32_t first, int32_t last);
    
      // which log number this is
  uint64_t const log_number_;