
        
        // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname, Env* env, const Options& options,
                  TableCache* table_cache, Iterator* iter, FileMetaData* meta);
    
    
    {  // Force creation of multiple memtables by reducing the write buffer size.
  Options opt;
  opt.reuse_logs = true;
  opt.write_buffer_size = (kNum * 100) / 2;
  Open(&opt);
  ASSERT_LE(2, NumTables());
  ASSERT_EQ(1, NumLogs());
  ASSERT_NE(old_log_file, FirstLogFile()) << 'must not reuse log';
  for (int i = 0; i < kNum; i++) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%050d', i);
    ASSERT_EQ(buf, Get(buf));
  }
}
    
      Arena arena_;
    
      Cache::Handle* handle = nullptr;
  Status s = FindTable(file_number, file_size, &handle);
  if (!s.ok()) {
    return NewErrorIterator(s);
  }
    
      static Slice Contents(const WriteBatch* batch) { return Slice(batch->rep_); }
    
    #include 'leveldb/export.h'
#include 'leveldb/slice.h'
    
    #ifndef STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
#define STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
    
      RandomAccessFile(const RandomAccessFile&) = delete;
  RandomAccessFile& operator=(const RandomAccessFile&) = delete;
    
    public:
  DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                     const std::shared_ptr<DHTNode>& newNode);
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
    namespace aria2 {
    }
    
    class DownloadContext;
class PeerStorage;
class DHTTask;
class DHTNode;
class DHTBucket;
    
    
    {} // namespace aria2
    
      virtual ~DHTUnknownMessage();
    
        const std::string& getGoodAddr() const;
    
        try {
      pt::read_json(stream, tree);
    } catch (const pt::ptree_error& e) {
      stream.close();
      return Status(
          1, 'Error reading docker API response for ' + uri + ': ' + e.what());
    }
    
    void validate_row(const Row& row, const ValidatatioMap& validation_map) {
  for (auto const& rec : row) {
    EXPECT_NE(validation_map.count(rec.first), std::size_t{0})
        << 'Unexpected column ' << boost::io::quoted(rec.first) << ' in a row';
  }
  for (auto iter : validation_map) {
    std::string key = iter.first;
    auto row_data_iter = row.find(key);
    ASSERT_NE(row_data_iter, row.end())
        << 'Could not find column ' << boost::io::quoted(key)
        << ' in the generated columns';
    std::string value = row_data_iter->second;
    ValidatatioDataType validator = iter.second;
    if (validator.type() == typeid(int)) {
      int flags = boost::get<int>(validator);
      ASSERT_TRUE(validate_value_using_flags(value, flags))
          << 'Standard validator of the column ' << boost::io::quoted(key)
          << ' with value ' << boost::io::quoted(value) << ' failed';
    } else {
      ASSERT_TRUE(boost::get<CustomCheckerType>(validator)(value))
          << 'Custom validator of the column ' << boost::io::quoted(key)
          << ' with value ' << boost::io::quoted(value) << ' failed';
    }
  }
}
void validate_rows(const std::vector<Row>& rows,
                   const ValidatatioMap& validation_map) {
  for (auto row : rows) {
    validate_row(row, validation_map);
  }
}
    
      // Initialize registries and plugins
  registryAndPluginInit();
    
    #include <osquery/utils/info/platform_type.h>
    
      // Running status of the carver
  Status status_;
    
      /**
   * @brief When config sources are updated the config will 'purge'.
   *
   * The general 'purge' action applies to searching for outdated query results,
   * timestamps, saved intervals, etc. This event only occurs before a source
   * is updated. Since updating the configuration may have expected side effects
   * such as changing watched files or overwriting (modifying) pack content,
   * this 'purge' action is assumed to be destructive and potentially expensive.
   */
  void purge();
    
    // Get an example generate config with one static source name to JSON content.
std::map<std::string, std::string> getTestConfigMap(const std::string& file);
    
    
    {  // storage map is built on open, so no need to protect it with locks
  std::unordered_map<std::string, InMemoryStorageRef> storage_;
};
    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};