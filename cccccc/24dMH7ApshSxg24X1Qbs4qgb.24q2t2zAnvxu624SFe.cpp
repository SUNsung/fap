
        
        // Get the python wrappers for a list of ops in a OpList.
// `op_list_buf` should be a pointer to a buffer containing
// the binary encoded OpList proto, and `op_list_len` should be the
// length of that buffer.
string GetPythonWrappers(const char* op_list_buf, size_t op_list_len);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow

    
    
    {}  // namespace tensorflow

    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
      // Set the 'os' platform condition.
  if (Target.isMacOSX())
    addPlatformConditionValue(PlatformConditionKind::OS, 'OSX');
  else if (Target.isTvOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'tvOS');
  else if (Target.isWatchOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'watchOS');
  else if (Target.isiOS())
    addPlatformConditionValue(PlatformConditionKind::OS, 'iOS');
  else if (Target.isAndroid())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Android');
  else if (Target.isOSLinux())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Linux');
  else if (Target.isOSFreeBSD())
    addPlatformConditionValue(PlatformConditionKind::OS, 'FreeBSD');
  else if (Target.isOSWindows())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Windows');
  else if (Target.isWindowsCygwinEnvironment())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Cygwin');
  else if (Target.isPS4())
    addPlatformConditionValue(PlatformConditionKind::OS, 'PS4');
  else if (Target.isOSHaiku())
    addPlatformConditionValue(PlatformConditionKind::OS, 'Haiku');
  else
    UnsupportedOS = true;
    
    
    {}%
    
    bool importer::isCFTypeDecl(
       const clang::TypedefNameDecl *Decl) {
  if (CFPointeeInfo::classifyTypedef(Decl))
    return true;
  return false;
}
    
    
    {
    {  bool isInit() const {
    return isStaticMember() && name.getBaseName() == 'init';
  }
};
}
    
    Status DestroyDB(const std::string& dbname, const Options& options) {
  Env* env = options.env;
  std::vector<std::string> filenames;
  Status result = env->GetChildren(dbname, &filenames);
  if (!result.ok()) {
    // Ignore error in case directory does not exist
    return Status::OK();
  }
    }
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type);
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
        switch (record_type) {
      case kFullType:
        if (in_fragmented_record) {
          // Handle bug in earlier versions of log::Writer where
          // it could emit an empty kFirstType record at the tail end
          // of a block followed by a kFullType or kFirstType record
          // at the beginning of the next block.
          if (!scratch->empty()) {
            ReportCorruption(scratch->size(), 'partial record without end(1)');
          }
        }
        prospective_record_offset = physical_record_offset;
        scratch->clear();
        *record = fragment;
        last_record_offset_ = prospective_record_offset;
        return true;
    }
    
      // Return type, or one of the preceding special values
  unsigned int ReadPhysicalRecord(Slice* result);
    
    
    {  // No copying allowed
  MemTableIterator(const MemTableIterator&);
  void operator=(const MemTableIterator&);
};
    
        // Extract metadata by scanning through table.
    int counter = 0;
    Iterator* iter = NewTableIterator(t.meta);
    bool empty = true;
    ParsedInternalKey parsed;
    t.max_sequence = 0;
    for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      if (!ParseInternalKey(key, &parsed)) {
        Log(options_.info_log, 'Table #%llu: unparsable key %s',
            (unsigned long long) t.meta.number,
            EscapeString(key).c_str());
        continue;
      }
    }
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
      // Compares the 8x8 block with offsets (off_x, off_y) within the current
  // macro-block of the baseline image with the same block of img and returns
  // the resulting per-block distance. The interpretation of the returned
  // distance depends on the comparator used.
  virtual double CompareBlock(const OutputImage& img,
                              int off_x, int off_y) const = 0;
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    
    {}  // namespace guetzli

    
    #include 'guetzli/output_image.h'
    
    
    {  return true;
}
    
    #include 'guetzli/jpeg_data.h'
    
    void BENCHFUN(sizeCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size);
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 16)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 128)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 1024)
    
    void compareBenchmarkResults(const std::string& base, const std::string& test) {
  printResultComparison(resultsFromFile(base), resultsFromFile(test));
}
    
    // Check a Posix return code (0 on success, error number on error), throw
// on error.
template <class... Args>
void checkPosixError(int err, Args&&... args) {
  if (UNLIKELY(err != 0)) {
    throwSystemErrorExplicit(err, std::forward<Args>(args)...);
  }
}
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
      ts = to<struct timespec>(microseconds(987654321012LL));
  EXPECT_EQ(987654, ts.tv_sec);
  EXPECT_EQ(321012000, ts.tv_nsec);
    
    
    {    if (levels.size() == 0) {
      // no levels at all for this cpu, we must be done
      break;
    }
    equivClassesByCpu.emplace_back(std::move(levels));
    cpus.push_back(cpu);
  }
    
    void DHTRoutingTableDeserializer::deserialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Loading DHT routing table from %s.', filename.c_str()));
  BufferedFile fp(filename.c_str(), BufferedFile::READ);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to load DHT routing table from %s', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    
    {} // namespace aria2

    
    #include 'common.h'
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    public:
  DHTTaskQueueImpl();
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    
    {  void updateTokenSecret();
};
    
    const std::string DHTUnknownMessage::E('e');
    
    
    {} // namespace aria2