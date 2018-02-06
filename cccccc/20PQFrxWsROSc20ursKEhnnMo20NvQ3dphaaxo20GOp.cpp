
        
        TEST(EnvPosixTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    #endif  // STORAGE_LEVELDB_DB_TABLE_CACHE_H_

    
    
    {  // Check that deleting works.
  ASSERT_TRUE(!env_->DeleteFile('/dir/non_existent').ok());
  ASSERT_OK(env_->DeleteFile('/dir/g'));
  ASSERT_TRUE(!env_->FileExists('/dir/g'));
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(0, children.size());
  ASSERT_OK(env_->DeleteDir('/dir'));
}
    
      // commenting out the line below causes the example to work correctly
  db->CompactRange(&least, &greatest);
    
    void CondVar::Signal() {
  PthreadCall('signal', pthread_cond_signal(&cv_));
}
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetMargin(root, YGEdgeLeft));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetMargin(root, YGEdgeRight));
    
      YGNodeFreeRecursive(root);
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg) noexcept {
  __android_log_write(level, tag, msg);
}
    
    private:
  std::string userDefinedUser_;
  std::string userDefinedPassword_;
    
      void useFasterRequest(const std::shared_ptr<Request>& fasterRequest);
    
    public:
  AbstractProxyRequestCommand(cuid_t cuid, const std::shared_ptr<Request>& req,
                              const std::shared_ptr<FileEntry>& fileEntry,
                              RequestGroup* requestGroup, DownloadEngine* e,
                              const std::shared_ptr<Request>& proxyRequest,
                              const std::shared_ptr<SocketCore>& s);
    
    AdaptiveFileAllocationIterator::AdaptiveFileAllocationIterator(
    BinaryStream* stream, int64_t offset, int64_t totalLength)
    : stream_(stream), offset_(offset), totalLength_(totalLength)
{
}
    
    #include <memory>
#include <deque>
#include <vector>
#include <string>
    
      A2_LOG_ERROR(
      fmt('Failed to lookup %s in your KeyChain', fingerprint.c_str()));
  return false;