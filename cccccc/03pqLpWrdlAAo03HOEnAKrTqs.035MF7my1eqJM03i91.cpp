
        
          int32_t ID() const;
    
    template <>
struct Converter<file_dialog::Filter> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::Filter* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    if (!dict.Get('name', &(out->first)))
      return false;
    if (!dict.Get('extensions', &(out->second)))
      return false;
    return true;
  }
};
    
    namespace api {
    }
    
    std::unique_ptr<views::LayoutManager> LayoutManager::TakeOver() {
  if (!managed_by_us_)  // already taken over.
    return nullptr;
  managed_by_us_ = false;
  return std::unique_ptr<views::LayoutManager>(layout_manager_);
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Menu);
};
    
    namespace nwapi {
    }
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    bool NwClipboardSetListSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::unique_ptr<SetListSync::Params> params(SetListSync::Params::Create(*args_));
  EXTENSION_FUNCTION_VALIDATE(params.get());
  std::unique_ptr<ClipboardWriter> writer(new ClipboardWriter());
    }
    
    #include <cstdint>      // for int32_t
    
    #include <cstdint>
#include <vector>
    
    
    {  // The number of pages we have processed.
  int page_count_;
};
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
      /*
   * Ensure the output stream is in a finished state.
   */
  void finalize();
    
    
    {  auto const makeShared = [&] () {
    if (isVectorCollection(obj->collectionType())) {
      return APCArray::MakeSharedVec(const_cast<ArrayData*>(array),
                                     level,
                                     unserializeObj);
    }
    return APCArray::MakeSharedDict(const_cast<ArrayData*>(array),
                                    level,
                                    unserializeObj);
  };
  return WrapArray(makeShared(), obj->collectionType());
}
    
    //////////////////////////////////////////////////////////////////////
    
        if ((se.st_mode & S_IFMT) == S_IFDIR) {
      find(root, spath + ename, php, callback);
      continue;
    }
    
    String FileUtil::canonicalize(const char *addpath, size_t addlen,
                              bool collapse_slashes /* = true */) {
  assertx(strlen(addpath) <= addlen);
  // 4 for slashes at start, after root, and at end, plus trailing
  // null
  size_t maxlen = addlen + 4;
  size_t pathlen = 0; // is the length of the result path
  size_t seglen;  // is the end of the current segment
  auto pathend = addpath + addlen;
    }
    
    Status CompactedDBImpl::Init(const Options& options) {
  SuperVersionContext sv_context(/* create_superversion */ true);
  mutex_.Lock();
  ColumnFamilyDescriptor cf(kDefaultColumnFamilyName,
                            ColumnFamilyOptions(options));
  Status s = Recover({cf}, true /* read only */, false, true);
  if (s.ok()) {
    cfd_ = reinterpret_cast<ColumnFamilyHandleImpl*>(
              DefaultColumnFamily())->cfd();
    cfd_->InstallSuperVersion(&sv_context, &mutex_);
  }
  mutex_.Unlock();
  sv_context.Clean();
  if (!s.ok()) {
    return s;
  }
  NewThreadStatusCfInfo(cfd_);
  version_ = cfd_->GetSuperVersion()->current;
  user_comparator_ = cfd_->user_comparator();
  auto* vstorage = version_->storage_info();
  if (vstorage->num_non_empty_levels() == 0) {
    return Status::NotSupported('no file exists');
  }
  const LevelFilesBrief& l0 = vstorage->LevelFilesBrief(0);
  // L0 should not have files
  if (l0.num_files > 1) {
    return Status::NotSupported('L0 contain more than 1 file');
  }
  if (l0.num_files == 1) {
    if (vstorage->num_non_empty_levels() > 1) {
      return Status::NotSupported('Both L0 and other level contain files');
    }
    files_ = l0;
    return Status::OK();
  }
    }
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
  using DB::MultiGet;
  virtual std::vector<Status> MultiGet(
      const ReadOptions& options,
      const std::vector<ColumnFamilyHandle*>&,
      const std::vector<Slice>& keys, std::vector<std::string>* values)
    override;
    
        virtual ~CompactionProxy() = default;
    virtual int level(size_t /*compaction_input_level*/ = 0) const {
      return compaction_->level();
    }
    virtual bool KeyNotExistsBeyondOutputLevel(
        const Slice& user_key, std::vector<size_t>* level_ptrs) const {
      return compaction_->KeyNotExistsBeyondOutputLevel(user_key, level_ptrs);
    }
    virtual bool bottommost_level() const {
      return compaction_->bottommost_level();
    }
    virtual int number_levels() const { return compaction_->number_levels(); }
    virtual Slice GetLargestUserKey() const {
      return compaction_->GetLargestUserKey();
    }
    virtual bool allow_ingest_behind() const {
      return compaction_->immutable_cf_options()->allow_ingest_behind;
    }
    virtual bool preserve_deletes() const {
      return compaction_->immutable_cf_options()->preserve_deletes;
    }
    
      // Open all files and look for the values we've put in there.
  // They should not be found if encrypted, otherwise
  // they should be found.
  std::vector<std::string> fileNames;
  auto status = env_->GetChildren(dbname_, &fileNames);
  ASSERT_OK(status);
    
    
    {}  //  namespace rocksdb

    
      virtual Status GetFileModificationTime(const std::string& fname,
                                         uint64_t* file_mtime) override {
    auto status_and_enc_path = EncodePath(fname);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::GetFileModificationTime(status_and_enc_path.second,
                                               file_mtime);
  }
    
      // Read up to 'n' bytes from the file.  'scratch[0..n-1]' may be
  // written by this routine.  Sets '*result' to the data that was
  // read (including if fewer than 'n' bytes were successfully read).
  // May set '*result' to point at data in 'scratch[0..n-1]', so
  // 'scratch[0..n-1]' must be live when '*result' is used.
  // If an error was encountered, returns a non-OK status.
  //
  // REQUIRES: External synchronization
  virtual Status Read(size_t n, Slice* result, char* scratch) override {
    assert(scratch);
    Status status = file_->Read(n, result, scratch);
    if (!status.ok()) {
      return status;
    }
    status = stream_->Decrypt(offset_, (char*)result->data(), result->size());
    offset_ += result->size(); // We've already ready data from disk, so update offset_ even if decryption fails.
    return status;
  }
    
    
    { public:
  PosixMmapReadableFile(const int fd, const std::string& fname, void* base,
                        size_t length, const EnvOptions& options);
  virtual ~PosixMmapReadableFile();
  virtual Status Read(uint64_t offset, size_t n, Slice* result,
                      char* scratch) const override;
  virtual Status InvalidateCache(size_t offset, size_t length) override;
};
    
      virtual Status GetChildren(const std::string& dir,
                             std::vector<std::string>* result) override;
    
      // verify the values are still there
  std::string value;
  for (int i = 1000; i < 99999; ++i) {
    db->Get(ReadOptions(), std::to_string(i),
                           &value);
    assert(value == std::string(500, 'a' + (i % 26)));
  }
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    // Represents one component of a jpeg file.
struct JPEGComponent {
  JPEGComponent() : id(0),
                    h_samp_factor(1),
                    v_samp_factor(1),
                    quant_idx(0),
                    width_in_blocks(0),
                    height_in_blocks(0) {}
    }
    
    using apollo::common::ErrorCode;
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
      /**
   * @brief Initialize by a CAN client, message manager.
   * @param can_client The CAN client to use for receiving messages.
   * @param pt_manager The message manager which can parse and
   *        get protocol data by message id.
   * @param enable_log If log the essential information during running.
   * @return An error code indicating the status of this initialization.
   */
  common::ErrorCode Init(CanClient *can_client,
                         MessageManager<SensorType> *pt_manager,
                         bool enable_log);
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    TEST(ByteTest, GetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  EXPECT_EQ(0x05, value.get_byte(1, 3));
  EXPECT_EQ(0x01, value.get_byte(1, 1));
  EXPECT_EQ(0x00, value.get_byte(8, 1));
  EXPECT_EQ(0x00, value.get_byte(-1, 1));
  EXPECT_EQ(0x1A, value.get_byte(0, 10));
}