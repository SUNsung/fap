
        
        /*
 * Timing execution of block of codes.
 */
struct Timer {
  enum Type {
    WallTime,
    SystemCPU,
    UserCPU,
    TotalCPU,
  };
  enum ReportType {
    Log,
    Stderr,
    Trace,
  };
  enum Who {
    Self = RUSAGE_SELF,
    Children = RUSAGE_CHILDREN,
#ifdef RUSAGE_THREAD
    Thread = RUSAGE_THREAD,
#endif
  };
    }
    
    std::pair<bool,Variant>
DebuggerProxy::ExecutePHP(const std::string &php, String &output,
                          int frame, int flags) {
  TRACE(2, 'DebuggerProxy::ExecutePHP\n');
  // Wire up stdout and stderr to our own string buffer so we can pass
  // any output back to the client.
  StringBuffer sb;
  StringBuffer *save = g_context->swapOutputBuffer(nullptr);
  DebuggerStdoutHook stdout_hook(sb);
  DebuggerLoggerHook stderr_hook(sb);
  g_context->setStdout(&stdout_hook);
  if (flags & ExecutePHPFlagsLog) {
    Logger::SetThreadHook(&stderr_hook);
  }
  SCOPE_EXIT {
    g_context->setStdout(nullptr);
    g_context->swapOutputBuffer(save);
    if (flags & ExecutePHPFlagsLog) {
      Logger::SetThreadHook(nullptr);
    }
  };
  String code(php.c_str(), php.size(), CopyString);
  // We're about to start executing more PHP. This is typically done
  // in response to commands from the client, and the client expects
  // those commands to send more interrupts since, of course, the
  // user might want to debug the code we're about to run. If we're
  // already processing an interrupt, enable signal polling around
  // the execution of the new PHP to ensure that we can handle
  // signals while doing so.
  //
  // Note: we must switch the thread mode to Sticky so we block
  // other threads which may hit interrupts while we're running,
  // since nested processInterrupt() calls would normally release
  // other threads on the way out.
  assert(m_thread == (int64_t)Process::GetThreadId());
  ThreadMode origThreadMode = m_threadMode;
  switchThreadMode(Sticky, m_thread);
  if (flags & ExecutePHPFlagsAtInterrupt) enableSignalPolling();
  SCOPE_EXIT {
    if (flags & ExecutePHPFlagsAtInterrupt) disableSignalPolling();
    switchThreadMode(origThreadMode, m_thread);
  };
  auto const ret = g_context->evalPHPDebugger(code.get(), frame);
  output = sb.detach();
  return {ret.failed, ret.result};
}
    
      void addToPipeline(const std::string &s);
    
      /////////////////////////////////////////////////////////////////////////////
  // Data members.
    
      for (mapping = enc_name_map; mapping->names != nullptr; mapping++) {
    if (mapping->code == mbctype) {
      return mapping->names;
    }
  }
    
    static bool posix_addlimit(int limit, const char *name, Array &ret) {
  char hard[80]; snprintf(hard, 80, 'hard %s', name);
  char soft[80]; snprintf(soft, 80, 'soft %s', name);
    }
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    namespace leveldb {
    }
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    
TEST(FindFileTest, Multiple) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_EQ(0, Find('100'));
  ASSERT_EQ(0, Find('150'));
  ASSERT_EQ(0, Find('151'));
  ASSERT_EQ(0, Find('199'));
  ASSERT_EQ(0, Find('200'));
  ASSERT_EQ(1, Find('201'));
  ASSERT_EQ(1, Find('249'));
  ASSERT_EQ(1, Find('250'));
  ASSERT_EQ(2, Find('251'));
  ASSERT_EQ(2, Find('299'));
  ASSERT_EQ(2, Find('300'));
  ASSERT_EQ(2, Find('349'));
  ASSERT_EQ(2, Find('350'));
  ASSERT_EQ(3, Find('351'));
  ASSERT_EQ(3, Find('400'));
  ASSERT_EQ(3, Find('450'));
  ASSERT_EQ(4, Find('451'));
    }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
      void SeekToRestartPoint(uint32_t index) {
    key_.clear();
    restart_index_ = index;
    // current_ will be fixed by ParseNextKey();
    }
    
    class FilterBlockReader {
 public:
 // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
    // A internal wrapper class with an interface similar to Iterator that
// caches the valid() and key() results for an underlying iterator.
// This can help avoid virtual function calls and also gives better
// cache locality.
class IteratorWrapper {
 public:
  IteratorWrapper(): iter_(NULL), valid_(false) { }
  explicit IteratorWrapper(Iterator* iter): iter_(NULL) {
    Set(iter);
  }
  ~IteratorWrapper() { delete iter_; }
  Iterator* iter() const { return iter_; }
    }
    
    
    {
    {} // namespace hazptr
} // namespace folly

    
    void list() {
  for (const auto& p : getHugePageSizes()) {
    std::cout << p.size << ' ' << p.mountPoint << '\n';
  }
}
    
    // Get raw huge page sizes (without mount points, they'll be filled later)
HugePageSizeVec readRawHugePageSizes() {
  // We need to parse file names from /sys/kernel/mm/hugepages
  static const boost::regex regex(R'!(hugepages-(\d+)kB)!');
  boost::smatch match;
  HugePageSizeVec vec;
  fs::path path('/sys/kernel/mm/hugepages');
  for (fs::directory_iterator it(path); it != fs::directory_iterator(); ++it) {
    std::string filename(it->path().filename().string());
    if (boost::regex_match(filename, match, regex)) {
      StringPiece numStr(
          filename.data() + match.position(1), size_t(match.length(1)));
      vec.emplace_back(to<size_t>(numStr) * 1024);
    }
  }
  return vec;
}
    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    #include <folly/Optional.h>
#include <folly/Range.h>
#include <memory>
    
    
    {  /**
   * An optional list of LogHandler names to use for this category.
   *
   * When applying config changes to an existing LogCategory, the existing
   * LogHandler list will be left unchanged if this field is unset.
   */
  Optional<std::vector<std::string>> handlers;
};
    
    dynamic logConfigToDynamic(const LogConfig& config) {
  dynamic categories = dynamic::object;
  for (const auto& entry : config.getCategoryConfigs()) {
    categories.insert(entry.first, logConfigToDynamic(entry.second));
  }
    }
    
     public: // Delete / Remove / Pop / Trim
  /// Trim (list: key) so that it will only contain the indices from start..stop
  /// Returns true on success
  /// May throw RedisListException
  bool Trim(const std::string& key, int32_t start, int32_t stop);
    
      AlignedBuffer(const AlignedBuffer&) = delete;
    
    
    {}  // namespace rocksdb
    
    #include <memory>
#include <set>
#include <string>
#include 'rocksdb/statistics.h'
#include 'monitoring/statistics.h'
    
        ASSERT_EQ(props->num_entries, keys.size());
    ASSERT_EQ(props->fixed_key_len, keys.empty() ? 0 : keys[0].size());
    ASSERT_EQ(props->data_size, expected_unused_bucket.size() *
        (expected_table_size + expected_cuckoo_block_size - 1));
    ASSERT_EQ(props->raw_key_size, keys.size()*props->fixed_key_len);
    ASSERT_EQ(props->column_family_id, 0);
    ASSERT_EQ(props->column_family_name, kDefaultColumnFamilyName);
    delete props;
    
    namespace grpc_go_generator {
    }
    
    #include <grpc++/grpc++.h>
    
    void RunServer() {
  std::string server_address('0.0.0.0:50051');
  GreeterServiceImpl service;
    }
    
    struct TableInC FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_REFER_TO_A1 = 4,
    VT_REFER_TO_A2 = 6
  };
  const NamespaceA::TableInFirstNS *refer_to_a1() const {
    return GetPointer<const NamespaceA::TableInFirstNS *>(VT_REFER_TO_A1);
  }
  NamespaceA::TableInFirstNS *mutable_refer_to_a1() {
    return GetPointer<NamespaceA::TableInFirstNS *>(VT_REFER_TO_A1);
  }
  const NamespaceA::SecondTableInA *refer_to_a2() const {
    return GetPointer<const NamespaceA::SecondTableInA *>(VT_REFER_TO_A2);
  }
  NamespaceA::SecondTableInA *mutable_refer_to_a2() {
    return GetPointer<NamespaceA::SecondTableInA *>(VT_REFER_TO_A2);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_REFER_TO_A1) &&
           verifier.VerifyTable(refer_to_a1()) &&
           VerifyOffset(verifier, VT_REFER_TO_A2) &&
           verifier.VerifyTable(refer_to_a2()) &&
           verifier.EndTable();
  }
};
    
    #if (!defined(_MSC_VER) || _MSC_VER > 1600) && \
    (!defined(__GNUC__) || (__GNUC__ * 100 + __GNUC_MINOR__ >= 407))
  #define FLATBUFFERS_FINAL_CLASS final
  #define FLATBUFFERS_OVERRIDE override
#else
  #define FLATBUFFERS_FINAL_CLASS
  #define FLATBUFFERS_OVERRIDE
#endif
    
    // This is an example of parsing text straight into a buffer and then
// generating flatbuffer (JSON) text from the buffer.
int main(int /*argc*/, const char * /*argv*/ []) {
  // load FlatBuffer schema (.fbs) and JSON from disk
  std::string schemafile;
  std::string jsonfile;
  bool ok = flatbuffers::LoadFile('samples/monster.fbs', false, &schemafile) &&
            flatbuffers::LoadFile('samples/monsterdata.json', false, &jsonfile);
  if (!ok) {
    printf('couldn't load files!\n');
    return 1;
  }
    }
    
    extern const std::string NIL;
    
      void setRequest(const std::shared_ptr<Request>& request);
    
    void AbstractOptionHandler::setChangeOption(bool f)
{
  updateFlags(FLAG_CHANGE_OPTION, f);
}
    
    #include 'AbstractCommand.h'
    
      virtual ~AdaptiveFileAllocationIterator();
    
    namespace {
class FindStoppedAllowedTier {
public:
  bool operator()(const std::shared_ptr<AnnounceTier>& tier) const
  {
    switch (tier->event) {
    case AnnounceTier::DOWNLOADING:
    case AnnounceTier::STOPPED:
    case AnnounceTier::COMPLETED:
    case AnnounceTier::SEEDING:
      return true;
    default:
      return false;
    }
  }
};
} // namespace
    
    namespace aria2 {
    }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      CFRef(T ref) : ref_(ref) {}