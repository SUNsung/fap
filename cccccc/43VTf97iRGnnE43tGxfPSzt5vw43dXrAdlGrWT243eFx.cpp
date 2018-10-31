
        
          /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  void Profile(llvm::FoldingSetNodeID &id) const {
    Profile(id, getGenericSignature(), getReplacementTypes(),
            getConformances());
  }
    
      // But if we are, we need to be constantly mixing values.
  ChunkType prevChunk = 0;
  size_t bitsRemaining = 0;
  appendReserved(numBits, [&](size_t numBitsWanted) -> ChunkType {
    auto resultMask = (numBitsWanted == ChunkSizeInBits
                         ? ~ChunkType(0)
                         : ((ChunkType(1) << numBitsWanted) - 1));
    }
    
    PrepositionKind swift::getPrepositionKind(StringRef word) {
#define DIRECTIONAL_PREPOSITION(Word)           \
  if (word.equals_lower(#Word))                 \
    return PK_Directional;
#define PREPOSITION(Word)                       \
  if (word.equals_lower(#Word))                 \
    return PK_Nondirectional;
#include 'PartsOfSpeech.def'
    }
    
    // HACK: Allow support for many newer emoji by overriding behavior of ZWJ and
// emoji modifiers. This does not make the breaks correct for any version of
// Unicode, but shifts the ways in which it is incorrect to be less harmful.
//
// TODO: Remove this hack and reevaluate whether we should have any static
// notion of what a grapheme is.
//
// Returns true if lhs and rhs shouldn't be considered as having a grapheme
// break between them. That is, whether we're overriding the behavior of the
// hard coded Unicode 8 rules surrounding ZWJ and emoji modifiers.
static inline bool graphemeBreakOverride(llvm::UTF32 lhs, llvm::UTF32 rhs) {
  return lhs == 0x200D || (rhs >= 0x1F3FB && rhs <= 0x1F3FF);
}
    
    
    
    
    {    // Must be 'const' or nothing.
    clang::Qualifiers quals = pointee.getQualifiers();
    bool isConst = quals.hasConst();
    quals.removeConst();
    if (quals.empty()) {
      if (auto record = pointee->getAs<clang::RecordType>()) {
        auto recordDecl = record->getDecl();
        if (recordDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeMutableAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeRelatedAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return forRecord(isConst, record->getDecl());
        }
      } else if (pointee->isVoidType()) {
        if (typedefDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return isConst ? forConstVoid() : forVoid();
        }
      }
    }
  }
    
      if (clangDiag.getID() == clang::diag::err_module_not_built &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    SourceLoc loc = DiagLoc;
    if (clangDiag.getLocation().isValid())
      loc = resolveSourceLocation(clangDiag.getSourceManager(),
                                  clangDiag.getLocation());
    }
    
      bool isInstanceMember() const {
    return isImportAsMember() && selfIndex.hasValue();
  }
    
      // Returns the mode: running on CPU or GPU.
  inline static Brew mode() { return Get().mode_; }
  // The setters for the variables
  // Sets the mode. It is recommended that you don't change the mode halfway
  // into the program since that may cause allocation of pinned memory being
  // freed in a non-pinned way, which may cause problems - I haven't verified
  // it personally but better to note it here in the header file.
  inline static void set_mode(Brew mode) { Get().mode_ = mode; }
  // Sets the random seed of both boost and curand
  static void set_random_seed(const unsigned int seed);
  // Sets the device. Since we have cublas and curand stuff, set device also
  // requires us to reset those values.
  static void SetDevice(const int device_id);
  // Prints the current GPU status.
  static void DeviceQuery();
  // Check if specified device is available
  static bool CheckDevice(const int device_id);
  // Search from start_id to the highest possible device ordinal,
  // return the ordinal of the first available device.
  static int FindDevice(const int start_id = 0);
  // Parallel training
  inline static int solver_count() { return Get().solver_count_; }
  inline static void set_solver_count(int val) { Get().solver_count_ = val; }
  inline static int solver_rank() { return Get().solver_rank_; }
  inline static void set_solver_rank(int val) { Get().solver_rank_ = val; }
  inline static bool multiprocess() { return Get().multiprocess_; }
  inline static void set_multiprocess(bool val) { Get().multiprocess_ = val; }
  inline static bool root_solver() { return Get().solver_rank_ == 0; }
    
      static CreatorRegistry& Registry() {
    static CreatorRegistry* g_registry_ = new CreatorRegistry();
    return *g_registry_;
  }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe
    
    namespace testing {
    }
    
    // A helper class for implementing EXPECT_FATAL_FAILURE() and
// EXPECT_NONFATAL_FAILURE().  Its destructor verifies that the given
// TestPartResultArray contains exactly one failure that has the given
// type and contains the given substring.  If that's not the case, a
// non-fatal failure will be generated.
class GTEST_API_ SingleFailureChecker {
 public:
  // The constructor remembers the arguments.
  SingleFailureChecker(const TestPartResultArray* results,
                       TestPartResult::Type type,
                       const string& substr);
  ~SingleFailureChecker();
 private:
  const TestPartResultArray* const results_;
  const TestPartResult::Type type_;
  const string substr_;
    }
    
    // A simple Linear Congruential Generator for generating random
// numbers with a uniform distribution.  Unlike rand() and srand(), it
// doesn't use global state (and therefore can't interfere with user
// code).  Unlike rand_r(), it's portable.  An LCG isn't very random,
// but it's good enough for our purposes.
class GTEST_API_ Random {
 public:
  static const UInt32 kMaxRange = 1u << 31;
    }
    
    # define GTEST_BIND_(TmplSel, T) \
  TmplSel::template Bind<T>::type
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      // Fill database
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Put(WriteOptions(), Key(i), value));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    #include 'leveldb/status.h'
    
      void RepairDB() {
    delete db_;
    db_ = nullptr;
    ASSERT_OK(::leveldb::RepairDB(dbname_, options_));
  }
    
    Status DBImpl::Get(const ReadOptions& options,
                   const Slice& key,
                   std::string* value) {
  Status s;
  MutexLock l(&mutex_);
  SequenceNumber snapshot;
  if (options.snapshot != nullptr) {
    snapshot =
        static_cast<const SnapshotImpl*>(options.snapshot)->sequence_number();
  } else {
    snapshot = versions_->LastSequence();
  }
    }
    
    
    {}  // namespace leveldb
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = nullptr;
  Table* table = nullptr;
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
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      // Don't search a block if we'd be in the trailer
  if (offset_in_block > kBlockSize - 6) {
    block_start_location += kBlockSize;
  }
    
        // Create builder.
    std::string copy = TableFileName(dbname_, next_file_number_++);
    WritableFile* file;
    Status s = env_->NewWritableFile(copy, &file);
    if (!s.ok()) {
      return;
    }
    TableBuilder* builder = new TableBuilder(options_, file);
    
    
    { private:
  // Dummy head of doubly-linked list of snapshots
  SnapshotImpl head_;
};
    
    // Represents a baseline image, a comparison metric and an image acceptance
// criteria based on this metric.
class Comparator {
 public:
  Comparator() {}
  virtual ~Comparator() {}
    }
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    
    {}  // namespace guetzli

    
    #ifndef GUETZLI_JPEG_BIT_WRITER_H_
#define GUETZLI_JPEG_BIT_WRITER_H_
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
      // Cluster DC histograms.
  size_t num_dc_histo = ncomps;
  int dc_histo_indexes[kMaxComponents];
  std::vector<uint8_t> depths(ncomps * JpegHistogram::kSize);
  ClusterHistograms(&histograms[0], &num_dc_histo, dc_histo_indexes,
                    &depths[0]);