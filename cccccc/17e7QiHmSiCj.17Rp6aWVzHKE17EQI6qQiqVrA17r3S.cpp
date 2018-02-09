
    {    // passthrough
    bool empty() const              { return m.empty(); }
    size_type size() const          { return m.size(); }
    size_type max_size() const      { return m.max_size(); }
    void clear()                    { m.clear(); }
    iterator begin()                { return m.begin(); }
    iterator end()                  { return m.end(); }
    const_iterator begin() const    { return m.begin(); }
    const_iterator end() const      { return m.end(); }
    const_iterator cbegin() const   { return m.cbegin(); }
    const_iterator cend() const     { return m.cend(); }
};
    
    
    {  if (s.ok() && meta->file_size > 0) {
    // Keep it
  } else {
    env->DeleteFile(fname);
  }
  return s;
}
    
    // Modules in this directory should keep internal keys wrapped inside
// the following class instead of plain strings so that we do not
// incorrectly use string comparisons instead of an InternalKeyComparator.
class InternalKey {
 private:
  std::string rep_;
 public:
  InternalKey() { }   // Leave rep_ as empty to indicate it is invalid
  InternalKey(const Slice& user_key, SequenceNumber s, ValueType t) {
    AppendInternalKey(&rep_, ParsedInternalKey(user_key, s, t));
  }
    }
    
    // Notified when log reader encounters corruption.
class CorruptionReporter : public log::Reader::Reporter {
 public:
  WritableFile* dst_;
  virtual void Corruption(size_t bytes, const Status& status) {
    std::string r = 'corruption: ';
    AppendNumberTo(&r, bytes);
    r += ' bytes; ';
    r += status.ToString();
    r.push_back('\n');
    dst_->Append(r);
  }
};
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options* options, int entries);
  ~TableCache();
    }
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
      void Write(bool sync, Order order, DBState state,
             int num_entries, int value_size, int entries_per_batch) {
    // Create new database if state == FRESH
    if (state == FRESH) {
      if (FLAGS_use_existing_db) {
        message_ = 'skipping (--use_existing_db is true)';
        return;
      }
      delete db_;
      db_ = NULL;
      Open(sync);
      Start();  // Do not count time taken to destroy/open
    }
    }
    
    #include <string>
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
    #ifndef STORAGE_LEVELDB_INCLUDE_FILTER_POLICY_H_
#define STORAGE_LEVELDB_INCLUDE_FILTER_POLICY_H_
    
    #endif

    
    // APPROXIMATIONS of the fractions of the character cell taken by
// the descenders, ascenders, and x-height.
const double CCStruct::kDescenderFraction = 0.25;
const double CCStruct::kXHeightFraction = 0.5;
const double CCStruct::kAscenderFraction = 0.25;
const double CCStruct::kXHeightCapRatio = CCStruct::kXHeightFraction /
    (CCStruct::kXHeightFraction + CCStruct::kAscenderFraction);
    
    namespace tesseract {
    }
    
    namespace tesseract {
    }
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    
    {}  // namespace guetzli
    
    #include <stdint.h>
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
    
    {}  // namespace guetzli
    
    
    {}  // namespace guetzli

    
    
    
    int getKb(int pid) {
    std::string line;
    std::ifstream self((std::string('/proc/') + std::to_string(pid) + std::string('/status')).c_str());
    int vmRSS;
    while(!self.eof()) {
        std::getline(self, line, ':');
        if (line == 'VmRSS') {
            self >> vmRSS;
        }
        std::getline(self, line);
    }
    return vmRSS;
}
    
                                webSocket->cork(true);
                            Group<isServer>::from(webSocket)->connectionHandler(webSocket, req);
                            // todo: should not uncork if closed!
                            webSocket->cork(false);
                            delete httpSocket;
    
        // todo: maybe this function should have a fast path for 0 length?
    void end(const char *message = nullptr, size_t length = 0,
             void(*callback)(void *httpResponse, void *data, bool cancelled, void *reserved) = nullptr,
             void *callbackData = nullptr) {
    }
    
    Context WIN32_EXPORT createContext(std::string certChainFileName, std::string keyFileName, std::string keyFilePassword = std::string());