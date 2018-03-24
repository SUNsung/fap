
        
        std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    // Return the length of the encoding of 'key'.
inline size_t InternalKeyEncodingLength(const ParsedInternalKey& key) {
  return key.user_key.size() + 8;
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
          case kLogNumber:
        if (GetVarint64(&input, &log_number_)) {
          has_log_number_ = true;
        } else {
          msg = 'log number';
        }
        break;
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
      ASSERT_TRUE(! Overlaps('a', 'b'));
  ASSERT_TRUE(! Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
      // Return true iff the length of the referenced data is zero
  bool empty() const { return size_ == 0; }
    
    // redirect the nath functions.
bool CheckNAN(double v) {
  return ISNAN(v);
}
double LogGamma(double v) {
  return lgammafn(v);
}
    
    #include <dmlc/logging.h>
#include <sstream>
#include './base.h'
    
     protected:
  virtual char GetChar(void) {
    return fin.get();
  }
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) {
    return fin.eof();
  }
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    if (page.data.size() != 0) {
      fo->Write(dmlc::BeginPtr(page.data), page.data.size() * sizeof(SparseBatch::Entry));
    }
  }
    
    SparsePage::Writer::~Writer() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    std::string TextMakeRule(const Parser &parser, const std::string &path,
                         const std::string &file_name) {
  if (!parser.builder_.GetSize() || !parser.root_struct_def_) return '';
  std::string filebase =
      flatbuffers::StripPath(flatbuffers::StripExtension(file_name));
  std::string make_rule = TextFileName(path, filebase) + ': ' + file_name;
  auto included_files =
      parser.GetIncludedFilesRecursive(parser.root_struct_def_->file);
  for (auto it = included_files.begin(); it != included_files.end(); ++it) {
    make_rule += ' ' + *it;
  }
  return make_rule;
}
    
    
    {  const Parser &parser_;
  const std::string &path_;
  const std::string &file_name_;
  const std::string qualifying_start_;
  const std::string qualifying_separator_;
};
    
    // 'smart' pointer for use with resizing vectors: turns a pointer inside
// a vector into a relative offset, such that it is not affected by resizes.
template<typename T, typename U> class pointer_inside_vector {
 public:
  pointer_inside_vector(T *ptr, std::vector<U> &vec)
      : offset_(reinterpret_cast<uint8_t *>(ptr) -
                reinterpret_cast<uint8_t *>(flatbuffers::vector_data(vec))),
        vec_(vec) {}
    }
    
    // Returns the method name for use with add/put calls.
static std::string GenMethod(const FieldDef &field) {
  return IsScalar(field.value.type.base_type)
             ? MakeCamel(GenTypeBasic(field.value.type))
             : (IsStruct(field.value.type) ? 'Struct' : 'UOffsetTRelative');
}
    
    struct ScopedDoingMyOwnMemmem {
  ScopedDoingMyOwnMemmem();
  ~ScopedDoingMyOwnMemmem();
};
    
    
    {
    {    if (NewSize + 5 >= OldSize)
      break;
    OldSize = NewSize;
  }
  return Res;
}
    
    #include 'FuzzerDefs.h'
    
    /* public API - prototypes - TODO: doxygen*/
    
    std::string Sha1ToString(const uint8_t Sha1[kSHA1NumBytes]);
    
    static std::mutex SignalMutex;
// Global variables used to keep track of how signal handling should be
// restored. They should **not** be accessed without holding `SignalMutex`.
static int ActiveThreadCount = 0;
static struct sigaction OldSigIntAction;
static struct sigaction OldSigQuitAction;
static sigset_t OldBlockedSignalsSet;