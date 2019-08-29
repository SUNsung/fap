
        
        void ProcessSingleton::LinuxWatcher::SocketReader::FinishWithACK(
    const char* message,
    size_t length) {
  if (message && length) {
    // Not necessary to care about the return value.
    WriteToSocket(fd_, message, length);
  }
    }
    
     protected:
  explicit AutoUpdater(v8::Isolate* isolate);
  ~AutoUpdater() override;
    
    
    {}  // namespace electron

    
    namespace net {
class URLRequestContextGetter;
}
    
    template <>
struct Converter<electron::api::DesktopCapturer::Source> {
  static v8::Local<v8::Value> ToV8(
      v8::Isolate* isolate,
      const electron::api::DesktopCapturer::Source& source) {
    mate::Dictionary dict(isolate, v8::Object::New(isolate));
    content::DesktopMediaID id = source.media_list_source.id;
    dict.Set('name', base::UTF16ToUTF8(source.media_list_source.name));
    dict.Set('id', id.ToString());
    dict.Set('thumbnail',
             electron::api::NativeImage::Create(
                 isolate, gfx::Image(source.media_list_source.thumbnail)));
    dict.Set('display_id', source.display_id);
    if (source.fetch_icon) {
      dict.Set(
          'appIcon',
          electron::api::NativeImage::Create(
              isolate, gfx::Image(GetWindowIcon(source.media_list_source.id))));
    }
    return ConvertToV8(isolate, dict);
  }
};
    
    
    {}  // namespace electron
    
      mate::Dictionary dict(isolate, exports);
  dict.Set('Notification', Notification::GetConstructor(isolate)
                               ->GetFunction(context)
                               .ToLocalChecked());
    
    TEST_F(DBTestXactLogIterator, TransactionLogIteratorBatchOperations) {
  do {
    Options options = OptionsForLogIterTest();
    DestroyAndReopen(options);
    CreateAndReopenWithCF({'pikachu'}, options);
    WriteBatch batch;
    batch.Put(handles_[1], 'key1', DummyString(1024));
    batch.Put(handles_[0], 'key2', DummyString(1024));
    batch.Put(handles_[1], 'key3', DummyString(1024));
    batch.Delete(handles_[0], 'key2');
    dbfull()->Write(WriteOptions(), &batch);
    Flush(1);
    Flush(0);
    ReopenWithColumnFamilies({'default', 'pikachu'}, options);
    Put(1, 'key4', DummyString(1024));
    auto iter = OpenTransactionLogIter(3);
    ExpectRecords(2, iter);
  } while (ChangeCompactOptions());
}
    
      Decision FilterV2(int /*level*/, const Slice& key, ValueType value_type,
                    const Slice& value, std::string* /*new_value*/,
                    std::string* /*skip_until*/) const override {
    if (value_type != kBlobIndex) {
      return Decision::kKeep;
    }
    BlobIndex blob_index;
    Status s = blob_index.DecodeFrom(value);
    if (!s.ok()) {
      // Unable to decode blob index. Keeping the value.
      return Decision::kKeep;
    }
    if (blob_index.HasTTL() && blob_index.expiration() <= current_time_) {
      // Expired
      expired_count_++;
      expired_size_ += key.size() + value.size();
      return Decision::kRemove;
    }
    if (!blob_index.IsInlined() &&
        blob_index.file_number() < context_.next_file_number &&
        context_.current_blob_files.count(blob_index.file_number()) == 0) {
      // Corresponding blob file gone. Could have been garbage collected or
      // evicted by FIFO eviction.
      evicted_count_++;
      evicted_size_ += key.size() + value.size();
      return Decision::kRemove;
    }
    if (context_.fifo_eviction_seq > 0 && blob_index.HasTTL() &&
        blob_index.expiration() < context_.evict_expiration_up_to) {
      // Hack: Internal key is passed to BlobIndexCompactionFilter for it to
      // get sequence number.
      ParsedInternalKey ikey;
      bool ok = ParseInternalKey(key, &ikey);
      // Remove keys that could have been remove by last FIFO eviction.
      // If get error while parsing key, ignore and continue.
      if (ok && ikey.sequence < context_.fifo_eviction_seq) {
        evicted_count_++;
        evicted_size_ += key.size() + value.size();
        return Decision::kRemove;
      }
    }
    return Decision::kKeep;
  }
    
    // A merge operator that mimics Put semantics
// Since this merge-operator will not be used in production,
// it is implemented as a non-associative merge operator to illustrate the
// new interface and for testing purposes. (That is, we inherit from
// the MergeOperator class rather than the AssociativeMergeOperator
// which would be simpler in this case).
//
// From the client-perspective, semantics are the same.
class PutOperator : public MergeOperator {
 public:
  bool FullMerge(const Slice& /*key*/, const Slice* /*existing_value*/,
                 const std::deque<std::string>& operand_sequence,
                 std::string* new_value, Logger* /*logger*/) const override {
    // Put basically only looks at the current/latest value
    assert(!operand_sequence.empty());
    assert(new_value != nullptr);
    new_value->assign(operand_sequence.back());
    return true;
  }
    }
    
      if (timeout_time < 0) {
    // If timeout is negative, do not use a timeout
    cv_.wait(lock);
  } else {
    auto duration = std::chrono::microseconds(timeout_time);
    auto cv_status = cv_.wait_for(lock, duration);
    }
    
    StopWriteToken::~StopWriteToken() {
  assert(controller_->total_stopped_ >= 1);
  --controller_->total_stopped_;
}
    
    
    {}  // namespace rocksdb

    
    
    {// Factor method to create a new persistent cache
Status NewPersistentCache(Env* const env, const std::string& path,
                          const uint64_t size,
                          const std::shared_ptr<Logger>& log,
                          const bool optimized_for_nvm,
                          std::shared_ptr<PersistentCache>* cache);
}  // namespace rocksdb

    
    namespace rocksdb {
    }
    
            Point(const T x = 0, const T y = 0);
    
    
    {        Rectangle<T> operator/(const T value) const;
    };
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};