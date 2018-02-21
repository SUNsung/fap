
        
          Slice user_key() const { return ExtractUserKey(rep_); }
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
     private:
  Env* const env_;
  const std::string dbname_;
  const Options* options_;
  Cache* cache_;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    TEST(WriteBatchTest, Multiple) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  batch.Put(Slice('baz'), Slice('boo'));
  WriteBatchInternal::SetSequence(&batch, 100);
  ASSERT_EQ(100, WriteBatchInternal::Sequence(&batch));
  ASSERT_EQ(3, WriteBatchInternal::Count(&batch));
  ASSERT_EQ('Put(baz, boo)@102'
            'Delete(box)@101'
            'Put(foo, bar)@100',
            PrintContents(&batch));
}
    
    
    {    FILE* cpuinfo = fopen('/proc/cpuinfo', 'r');
    if (cpuinfo != NULL) {
      char line[1000];
      int num_cpus = 0;
      std::string cpu_type;
      std::string cache_size;
      while (fgets(line, sizeof(line), cpuinfo) != NULL) {
        const char* sep = strchr(line, ':');
        if (sep == NULL) {
          continue;
        }
        Slice key = TrimSpace(Slice(line, sep - 1 - line));
        Slice val = TrimSpace(Slice(sep + 1));
        if (key == 'model name') {
          ++num_cpus;
          cpu_type = val.ToString();
        } else if (key == 'cache size') {
          cache_size = val.ToString();
        }
      }
      fclose(cpuinfo);
      fprintf(stderr, 'CPU:            %d * %s\n', num_cpus, cpu_type.c_str());
      fprintf(stderr, 'CPUCache:       %s\n', cache_size.c_str());
    }
#endif
  }
    
    
    {}  // namespace leveldb
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
      static Slice Contents(const WriteBatch* batch) {
    return Slice(batch->rep_);
  }
    
        // Change SQLite cache size
    char cache_size[100];
    snprintf(cache_size, sizeof(cache_size), 'PRAGMA cache_size = %d',
             FLAGS_num_pages);
    status = sqlite3_exec(db_, cache_size, NULL, NULL, &err_msg);
    ExecErrorCheck(status, err_msg);
    
      // Check that opening non-existent file fails.
  SequentialFile* seq_file;
  RandomAccessFile* rand_file;
  ASSERT_TRUE(!env_->NewSequentialFile('/dir/non_existent', &seq_file).ok());
  ASSERT_TRUE(!seq_file);
  ASSERT_TRUE(!env_->NewRandomAccessFile('/dir/non_existent', &rand_file).ok());
  ASSERT_TRUE(!rand_file);
    
    
    {  // Check last filter
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'hello'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'bar'));
}
    
      // The block handle for the index block of the table
  const BlockHandle& index_handle() const {
    return index_handle_;
  }
  void set_index_handle(const BlockHandle& h) {
    index_handle_ = h;
  }
    
    
    {}  // namespace leveldb
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern Iterator* NewMergingIterator(
    const Comparator* comparator, Iterator** children, int n);
    
    
    {}
    
    
    {
    {}
}
    
    #ifndef DUMPCRASHSTACK_H_
#define DUMPCRASHSTACK_H_
    
    
/*
 * WakeUpLock.cpp
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
      private:
    virtual void __OnAttach(const char* _key) = 0;
    virtual void __OnDetach(const char* _key) = 0;
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_
    
    typedef GRPC_CUSTOM_STRING string;
    
      std::string SayHello(const std::string &name) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset = CreateHelloRequest(mb, name_offset);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<HelloRequest>();
    }
    
        // `flatbuffers::grpc::MessageBuilder` is a `FlatBufferBuilder` with a
    // special allocator for efficient gRPC buffer transfer, but otherwise
    // usage is the same as usual.
    auto msg_offset = mb_.CreateString('Hello, ' + name);
    auto hello_offset = CreateHelloReply(mb_, msg_offset);
    mb_.Finish(hello_offset);
    
      // If schemas used contain include statements, call this function for every
  // directory the parser should search them for.
  void AddIncludeDirectory(const char *path) { include_paths_.push_back(path); }
    
    #ifndef LLVM_FUZZER_EXT_FUNCTIONS_H
#define LLVM_FUZZER_EXT_FUNCTIONS_H
    
    std::string FileToString(const std::string &Path);
    
      // Merge Corpora[1:] into Corpora[0].
  void Merge(const std::vector<std::string> &Corpora);
  void CrashResistantMerge(const std::vector<std::string> &Args,
                           const std::vector<std::string> &Corpora);
  void CrashResistantMergeInternalStep(const std::string &ControlFilePath);
  // Returns a subset of 'Extra' that adds coverage to 'Initial'.
  UnitVector FindExtraUnits(const UnitVector &Initial, const UnitVector &Extra);
  MutationDispatcher &GetMD() { return MD; }
  void PrintFinalStats();
  void SetMaxInputLen(size_t MaxInputLen);
  void SetMaxMutationLen(size_t MaxMutationLen);
  void RssLimitCallback();
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    std::string Hash(const Unit &U) {
  uint8_t Hash[kSHA1NumBytes];
  ComputeSHA1(U.data(), U.size(), Hash);
  return Sha1ToString(Hash);
}
    
    // Value profile.
// We keep track of various values that affect control flow.
// These values are inserted into a bit-set-based hash map.
// Every new bit in the map is treated as a new coverage.
//
// For memcmp/strcmp/etc the interesting value is the length of the common
// prefix of the parameters.
// For cmp instructions the interesting value is a XOR of the parameters.
// The interesting value is mixed up with the PC and is then added to the map.
    
      // We don't want to create too many trace-based mutations as it is both
  // expensive and useless. So after some number of mutations is collected,
  // start rejecting some of them. The more there are mutations the more we
  // reject.
  bool WantToHandleOneMoreMutation() {
    const size_t FirstN = 64;
    // Gladly handle first N mutations.
    if (NumMutations <= FirstN) return true;
    size_t Diff = NumMutations - FirstN;
    size_t DiffLog = sizeof(long) * 8 - __builtin_clzl((long)Diff);
    assert(DiffLog > 0 && DiffLog < 64);
    bool WantThisOne = MD.GetRand()(1 << DiffLog) == 0;  // 1 out of DiffLog.
    return WantThisOne;
  }