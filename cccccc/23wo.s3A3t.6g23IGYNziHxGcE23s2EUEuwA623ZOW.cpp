
        
          // Window XIDs which want to be registered, but haven't yet been because
  // we're waiting for the proxy to become available.
  std::set<unsigned long> live_xids_;
    
    // static
void CallbackHolderBase::SecondWeakCallback(
    const v8::WeakCallbackInfo<CallbackHolderBase>& data) {
  delete data.GetParameter();
}
    
    bool Converter<PersistentDictionary>::FromV8(v8::Isolate* isolate,
                                             v8::Local<v8::Value> val,
                                             PersistentDictionary* out) {
  if (!val->IsObject())
    return false;
  *out = PersistentDictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
    
    {  ArgumentHolder(Arguments* args, int create_flags) : ok(false) {
    if (index == 0 && (create_flags & HolderIsFirstArgument) &&
        Destroyable::IsDestroyed(args)) {
      args->ThrowError('Object has been destroyed');
      return;
    }
    ok = GetNextArgument(args, create_flags, index == 0, &value);
    if (!ok) {
      // Ideally we would include the expected c++ type in the error
      // message which we can access via typeid(ArgType).name()
      // however we compile with no-rtti, which disables typeid.
      args->ThrowError();
    }
  }
};
    
     private:
  static gin::WrapperInfo kWrapperInfo;
    
      // Path in file system to the cookie file.
  base::FilePath cookie_path_;
    
    // A helper class that releases the given |mutex| while the AutoUnlockMutex is
// in scope and immediately re-acquires it when going out of scope.
class AutoUnlockMutex {
 public:
  explicit AutoUnlockMutex(HANDLE mutex) : mutex_(mutex) {
    BOOL released = ::ReleaseMutex(mutex_);
    DPCHECK(released);
  }
    }
    
      std::map<uv_timer_t*, base::OnceClosure> tasks_;
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    %define XTMP0 xmm0
%define XTMP1 xmm1
%define XTMP2 xmm2
%define XTMP3 xmm3
%define XTMP4 xmm8
%define XFER  xmm9
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
        do {
      rocksdb::SyncPoint::GetInstance()->ClearTrace();
      rocksdb::SyncPoint::GetInstance()->DisableProcessing();
      Options options = OptionsForLogIterTest();
      DestroyAndReopen(options);
      Put('key1', DummyString(1024));
      dbfull()->Flush(FlushOptions());
      Put('key2', DummyString(1024));
      dbfull()->Flush(FlushOptions());
      Put('key3', DummyString(1024));
      dbfull()->Flush(FlushOptions());
      Put('key4', DummyString(1024));
      ASSERT_EQ(dbfull()->GetLatestSequenceNumber(), 4U);
      dbfull()->FlushWAL(false);
    }
    
      ~BlobIndexCompactionFilter() override {
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EXPIRED_COUNT, expired_count_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EXPIRED_SIZE, expired_size_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EVICTED_COUNT, evicted_count_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EVICTED_SIZE, evicted_size_);
  }
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
#include 'utilities/merge_operators.h'
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
      // reopen the db using the loaded options.
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(loaded_db_opt, kDBPath, loaded_cf_descs, &handles, &db);
  assert(s.ok());
    
    class DB;
    
      /*
   * @brief a helper variable for keeping track of the compressed tar.
   *
   * This variable is the absolute location of the tar archive created from
   * zstd of the archive.
   */
  boost::filesystem::path compressPath_;
    
      // Iterate the queries (or schedule) and check platform/version/sanity.
  for (const auto& q : obj['queries'].GetObject()) {
    if (!q.value.IsObject()) {
      VLOG(1) << 'The pack ' << name << ' must contain a dictionary of queries';
      continue;
    }
    }
    
      // This funcion should completely destroy db, so after next open
  // db should be fresh new
  // Implementation can expect that db is closed before
  // calling destroyDB and should crash/fail in case when db is still open
  virtual ExpectedSuccess<DatabaseError> destroyDB() = 0;
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::putStringsUnsafe(
    const std::string& domain,
    const std::vector<std::pair<std::string, std::string>>& data) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  std::lock_guard<std::mutex> lock(storage_iter->second->getMutex());
  for (const auto& pair : data) {
    storage_iter->second->put(pair.first, pair.second);
  }
  return Success();
}
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putString(
    const std::string& domain,
    const std::string& key,
    const std::string& value) {
  auto result = putRawBytes(domain, key, value);
  if (result) {
    return Success();
  }
  return result.takeError();
}
    
    #include <osquery/core/database/database.h>
#include <osquery/database/plugins/rocksdb.h>