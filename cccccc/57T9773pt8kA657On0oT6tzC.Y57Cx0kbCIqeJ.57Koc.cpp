
        
        namespace HPHP { struct UnitEmitter; }
namespace HPHP { namespace HHBBC {
    }
    }
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
    #include 'hphp/util/perf-event.h'
    
    #include <folly/String.h>
    
    #include 'hphp/runtime/base/perf-warning-inl.h'
    
    protected:
  FILE *m_stream;
  char *m_buffer;       // For setbuffer.  Needed to reduce mmap
                        // contention due to how glibc allocates memory
                        // for buffered io.
    
    private:
  bool m_get;
  bool m_ignoreErrors;
  const char* m_method;
  Array m_headers;
  String m_postData;
  int m_maxRedirect;
  int m_timeout;
  std::string m_error;
  StringBuffer m_response;
  Array m_responseHeaders;
    
    /**
 * The schedule is an iterable collection of Packs. When you iterate through
 * a schedule, you only get the packs that should be running on the host that
 * you're currently operating on.
 */
class Schedule : private boost::noncopyable {
 public:
  /// Under the hood, the schedule is just a list of the Pack objects
  using container = std::vector<PackRef>;
    }
    
      /// Inspect the refresh rate.
  size_t getRefresh() const;
    
      fpack.platform_ = 'posix';
  if (isPlatform(PlatformType::TYPE_POSIX) ||
      isPlatform(PlatformType::TYPE_LINUX) ||
      isPlatform(PlatformType::TYPE_OSX) ||
      isPlatform(PlatformType::TYPE_FREEBSD)) {
    EXPECT_TRUE(fpack.checkPlatform());
  } else {
    EXPECT_FALSE(fpack.checkPlatform());
  }
    
    Expected<int32_t, DatabaseError> Database::getInt32Or(
    const std::string& domain,
    const std::string& key,
    const int32_t default_value) {
  auto result = getInt32(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
    ExpectedSuccess<RocksdbMigrationError> migrateRocksDBDatabase(
    const std::string& path);
    
      /** @brief Virtual method which should implement custom logging.
   *
   *  LoggerPlugin::logString should be implemented by a subclass of
   *  LoggerPlugin which needs to log a string in a custom way.
   *
   *  @return an instance of osquery::Status which indicates the success or
   *  failure of the operation.
   */
  virtual Status logString(const std::string& s) = 0;
    
    GTEST_TEST(InMemoryDatabaseTest, test_open) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  auto result = db->open();
  EXPECT_TRUE(result);
  db->close();
}