
        
        TEST(EnvPosixTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    
    { private:
  // Dummy head of doubly-linked list of snapshots
  SnapshotImpl list_;
};
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      Benchmark()
  : db_(NULL),
    db_num_(0),
    num_(FLAGS_num),
    reads_(FLAGS_reads < 0 ? FLAGS_num : FLAGS_reads),
    bytes_(0),
    rand_(301) {
    std::vector<std::string> files;
    std::string test_dir;
    Env::Default()->GetTestDirectory(&test_dir);
    Env::Default()->GetChildren(test_dir, &files);
    if (!FLAGS_use_existing_db) {
      for (int i = 0; i < files.size(); i++) {
        if (Slice(files[i]).starts_with('dbbench_sqlite3')) {
          std::string file_name(test_dir);
          file_name += '/';
          file_name += files[i];
          Env::Default()->DeleteFile(file_name.c_str());
        }
      }
    }
  }
    
     private:
  const Comparator* comparator_;
  std::string data_;
  Block* block_;
    
    const char* GetVarint64Ptr(const char* p, const char* limit, uint64_t* value) {
  uint64_t result = 0;
  for (uint32_t shift = 0; shift <= 63 && p < limit; shift += 7) {
    uint64_t byte = *(reinterpret_cast<const unsigned char*>(p));
    p++;
    if (byte & 128) {
      // More bytes are present
      result |= ((byte & 127) << shift);
    } else {
      result |= (byte << shift);
      *value = result;
      return reinterpret_cast<const char*>(p);
    }
  }
  return NULL;
}
    
    namespace leveldb {
    }
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
     protected:
  /*!
   * \brief to be implemented by subclass,
   * get next token, return EOF if end of file
   */
  virtual char GetChar(void) = 0;
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) = 0;
    
    
    {  friend std::ostream &operator<<(std::ostream &os,
                                  const bst_gpair_internal<T> &g) {
    os << g.GetGrad() << '/' << g.GetHess();
    return os;
  }
};
    
    // Saves the COM marker segment as a string to *jpg.
bool ProcessCOM(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  std::string com_str(reinterpret_cast<const char*>(
      &data[*pos - 2]), marker_len);
  *pos += marker_len - 2;
  jpg->com_data.push_back(com_str);
  return true;
}
    
      // Sets the coordinates of the current macro-block for the purpose of
  // CompareBlock() calls.
  virtual void SwitchBlock(int block_x, int block_y,
                           int factor_x, int factor_y) = 0;
    
    
    {}  // namespace guetzli
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    
    {}  // namespace guetzli
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    AsyncIOOp::~AsyncIOOp() {
  CHECK_NE(state_, State::PENDING);
}
    
      std::shared_ptr<LogHandler> createHandler(const Options& options) override;
    
    namespace folly {
    }
    
    
    {private:
  uint8_t Size = 0;
  uint8_t Data[kMaxSize];
};
    
    long GetEpoch(const std::string &Path) {
  struct stat St;
  if (stat(Path.c_str(), &St))
    return 0;  // Can't stat, be conservative.
  return St.st_mtime;
}
    
    void ListFilesInDirRecursive(const std::string &Dir, long *Epoch,
                             std::vector<std::string> *V, bool TopDir) {
  auto E = GetEpoch(Dir);
  if (Epoch)
    if (E && *Epoch >= E) return;
    }
    
    // Crash on a single malloc that exceeds the rss limit.
void Fuzzer::HandleMalloc(size_t Size) {
  if (!Options.RssLimitMb || (Size >> 20) < (size_t)Options.RssLimitMb)
    return;
  Printf('==%d== ERROR: libFuzzer: out-of-memory (malloc(%zd))\n', GetPid(),
         Size);
  Printf('   To change the out-of-memory limit use -rss_limit_mb=<N>\n\n');
  if (EF->__sanitizer_print_stack_trace)
    EF->__sanitizer_print_stack_trace();
  DumpCurrentUnit('oom-');
  Printf('SUMMARY: libFuzzer: out-of-memory\n');
  PrintFinalStats();
  _Exit(Options.ErrorExitCode); // Stop right now.
}