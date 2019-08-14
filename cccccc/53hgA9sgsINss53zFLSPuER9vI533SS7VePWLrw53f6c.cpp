
        
        static PyObject* FindServiceByName(PyObject* self, PyObject* arg) {
  Py_ssize_t name_size;
  char* name;
  if (PyString_AsStringAndSize(arg, &name, &name_size) < 0) {
    return NULL;
  }
    }
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    TEST(ByteSourceTest, LimitByteSource) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  LimitByteSource limit_source(&source, 6);
  EXPECT_EQ(6, limit_source.Available());
  limit_source.Skip(1);
  EXPECT_EQ(5, limit_source.Available());
    }
    
    namespace google {
namespace protobuf {
namespace internal {
namespace {
    }
    }
    }
    }
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    /* Most of the code in the `btree/` directory doesn't 'know' about the format of the
superblock; instead it manipulates the superblock using the abstract `superblock_t`. This
file provides the concrete superblock implementation used for ReQL primary and sindex
B-trees. It also provides functions for working with the secondary index block and the
metainfo, which are unrelated to the B-tree but stored on the ReQL primary superblock.
    
        for (const auto &pair : to_put_back) {
        set_secondary_index(&sindex_block, sindex_name_t(pair.first), pair.second.first);
        pair.second.second->rename(&perfmon_collection, 'index-' + pair.first);
    }
    
    class datum_replacer_t : public btree_batched_replacer_t {
public:
    explicit datum_replacer_t(ql::env_t *_env,
                              const batched_insert_t &bi)
        : env(_env),
          datums(&bi.inserts),
          conflict_behavior(bi.conflict_behavior),
          pkey(bi.pkey),
          return_changes(bi.return_changes) {
        if (bi.conflict_func.has_value()) {
            conflict_func.set(bi.conflict_func->compile_wire_func());
        }
        if (bi.write_hook.has_value()) {
            write_hook = bi.write_hook->compile_wire_func();
        }
    }
    ql::datum_t replace(const ql::datum_t &d,
                        size_t index) const {
        guarantee(index < datums->size());
        ql::datum_t newd = (*datums)[index];
        ql::datum_t res = resolve_insert_conflict(env,
                                             pkey,
                                             d,
                                             newd,
                                             conflict_behavior,
                                             conflict_func);
        const ql::datum_t &write_timestamp = env->get_deterministic_time();
        r_sanity_check(write_timestamp.has());
        res = apply_write_hook(datum_string_t(pkey), d, res, write_timestamp,
                               write_hook);
        return res;
    }
    return_changes_t should_return_changes() const { return return_changes; }
private:
    ql::env_t *env;
    }
    
    void _check_keys_are_present(store_t *store,
        sindex_name_t sindex_name) {
    ql::configured_limits_t limits;
    for (int i = 0; i < TOTAL_KEYS_TO_INSERT; ++i) {
        ql::grouped_t<ql::stream_t> groups =
            read_row_via_sindex(store, sindex_name, i * i);
        ASSERT_EQ(1, groups.size());
        // The order of `groups` doesn't matter because this is a small unit test.
        ql::stream_t *stream = &groups.begin()->second;
        ASSERT_TRUE(stream != nullptr);
        ASSERT_EQ(1ul, stream->substreams.size());
        ql::raw_stream_t *raw_stream = &stream->substreams.begin()->second.stream;
        ASSERT_EQ(1ul, raw_stream->size());
    }
    }
    
    #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7>
internal::CartesianProductHolder7<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7) {
  return internal::CartesianProductHolder7<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7>(
      g1, g2, g3, g4, g5, g6, g7);
}
    
      // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 const char* a_file_name,
                 int a_line_number,
                 const char* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? '' : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }
    
      // Increments the death test count, returning the new count.
  int increment_death_test_count() { return ++death_test_count_; }
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
    TEST(CorruptionTest, CorruptedDescriptor) {
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'hello'));
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
  dbi->TEST_CompactMemTable();
  dbi->TEST_CompactRange(0, nullptr, nullptr);
    }
    
    namespace leveldb {
    }
    
      const char kWrite2Data[] = 'Write #2 data';
  ASSERT_OK(WriteStringToFile(env_, kWrite2Data, kTestFileName));
    
      ~Arena();
    
      WritableFile* appendable_file;
  ASSERT_OK(env_->NewAppendableFile(test_file_name, &appendable_file));
  std::string data('hello world!');
  ASSERT_OK(appendable_file->Append(data));
  ASSERT_OK(appendable_file->Close());
  delete appendable_file;
    
      // Add '<shared><non_shared><value_size>' to buffer_
  PutVarint32(&buffer_, shared);
  PutVarint32(&buffer_, non_shared);
  PutVarint32(&buffer_, value.size());
    
    #include <memory>
#include <string>
    
    const float INNER_TIME_64E_S3[12][32] = {
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f}};
    
    TEST(RecordTest, iterator_test) {
  uint64_t msg_num = 200;
  uint64_t begin_time = 100000000;
  uint64_t step_time = 100000000;  // 100ms
  uint64_t end_time = begin_time + step_time * (msg_num - 1);
  ConstructRecord(msg_num, begin_time, step_time);
    }
    
      int week = 0;
    
    
    {  void print() {
    AINFO << 'conf: ' << conf.ShortDebugString()
          << ', total send: ' << send_cnt + send_err_cnt << '/'
          << FLAGS_agent_mutual_send_frames << ', send_ok: ' << send_cnt
          << ' , send_err_cnt: ' << send_err_cnt
          << ', send_lost_cnt: ' << send_lost_cnt << ', recv_cnt: ' << recv_cnt
          << ', send_time: ' << send_time << ', recv_time: ' << recv_time;
  }
};
    
    #include 'modules/perception/base/distortion_model.h'
#include 'modules/perception/base/object_types.h'
#include 'modules/perception/camera/lib/interface/base_obstacle_detector.h'
#include 'modules/perception/camera/lib/interface/base_obstacle_transformer.h'
#include 'modules/perception/common/io/io_util.h'
    
    /**
 * @file
 **/
    
      Status NewRandomAccessFile(const std::string& fname,
                             std::unique_ptr<RandomAccessFile>* result,
                             const EnvOptions& options) override {
    auto status_and_enc_path = EncodePathWithNewBasename(fname);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::NewRandomAccessFile(status_and_enc_path.second, result,
                                           options);
  }
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    compression
 * Signature: (J)B
 */
jbyte Java_org_rocksdb_CompactionJobInfo_compression(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_job_info =
    reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  return rocksdb::CompressionTypeJni::toJavaCompressionType(
      compact_job_info->compression);
}
    
    /*
 * Class:     org_rocksdb_Env
 * Method:    setBackgroundThreads
 * Signature: (JIB)V
 */
void Java_org_rocksdb_Env_setBackgroundThreads(
    JNIEnv*, jobject, jlong jhandle, jint jnum, jbyte jpriority_value) {
  auto* rocks_env = reinterpret_cast<rocksdb::Env*>(jhandle);
  rocks_env->SetBackgroundThreads(static_cast<int>(jnum),
      rocksdb::PriorityJni::toCppPriority(jpriority_value));
}
    
    /*
 * Class:     org_rocksdb_RocksDB
 * Method:    getPropertiesOfTablesInRange
 * Signature: (JJ[J)Ljava/util/Map;
 */
jobject Java_org_rocksdb_RocksDB_getPropertiesOfTablesInRange(
    JNIEnv* env, jobject, jlong jdb_handle, jlong jcf_handle,
    jlongArray jrange_slice_handles) {
  auto* db = reinterpret_cast<rocksdb::DB*>(jdb_handle);
  rocksdb::ColumnFamilyHandle* cf_handle;
  if (jcf_handle == 0) {
    cf_handle = db->DefaultColumnFamily();
  } else {
    cf_handle = 
        reinterpret_cast<rocksdb::ColumnFamilyHandle*>(jcf_handle);
  }
  const jsize jlen = env->GetArrayLength(jrange_slice_handles);
  jboolean jrange_slice_handles_is_copy = JNI_FALSE;
  jlong *jrange_slice_handle = env->GetLongArrayElements(
      jrange_slice_handles, &jrange_slice_handles_is_copy);
  if (jrange_slice_handle == nullptr) {
    // exception occurred
    return nullptr;
  }
    }
    
    namespace rocksdb {
    }
    
    /*
 * Class:     org_rocksdb_ThreadStatus
 * Method:    getThreadTypeName
 * Signature: (B)Ljava/lang/String;
 */
jstring Java_org_rocksdb_ThreadStatus_getThreadTypeName(
    JNIEnv* env, jclass, jbyte jthread_type_value) {
  auto name = rocksdb::ThreadStatus::GetThreadTypeName(
      rocksdb::ThreadTypeJni::toCppThreadType(jthread_type_value));
  return rocksdb::JniUtil::toJavaString(env, &name, true);
}
    
    
    {}  //namespace rocksdb
    
    /*
 * Class:     org_rocksdb_TtlDB
 * Method:    open
 * Signature: (JLjava/lang/String;IZ)J
 */
jlong Java_org_rocksdb_TtlDB_open(
    JNIEnv* env, jclass, jlong joptions_handle, jstring jdb_path, jint jttl,
    jboolean jread_only) {
  const char* db_path = env->GetStringUTFChars(jdb_path, nullptr);
  if (db_path == nullptr) {
    // exception thrown: OutOfMemoryError
    return 0;
  }
    }