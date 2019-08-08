
        
          // Methods used during initialization, see the comment at the top of the .cc
  // file for details.
  static void DidGetCertDBOnUIThread(net::NSSCertDatabase* cert_db,
                                     bool is_user_db_available,
                                     const CreationCallback& callback);
  static void DidGetCertDBOnIOThread(const CreationCallback& callback,
                                     net::NSSCertDatabase* cert_db);
  static void GetCertDBOnIOThread(content::ResourceContext* context,
                                  const CreationCallback& callback);
    
    CallbackHolderBase::~CallbackHolderBase() {
  DCHECK(v8_ref_.IsEmpty());
}
    
      template <typename T>
  void Return(const T& val) {
    info_->GetReturnValue().Set(ConvertToV8(isolate_, val));
  }
    
      static Promise Create(v8::Isolate* isolate);
  static Promise Create();
    
      v8::Local<T> NewHandle(v8::Isolate* isolate) const {
    if (handle_.IsEmpty())
      return v8::Local<T>();
    return v8::Local<T>::New(isolate, handle_);
  }
    
    namespace mate {
    }
    
    ///////////////////////////////////////////////////////////////////////////////
// ProcessSingleton
//
ProcessSingleton::ProcessSingleton(
    const base::FilePath& user_data_dir,
    const NotificationCallback& notification_callback)
    : notification_callback_(notification_callback),
      current_pid_(base::GetCurrentProcId()) {
  // The user_data_dir may have not been created yet.
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  base::CreateDirectoryAndGetError(user_data_dir, nullptr);
    }
    
    bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv);
    
    #include 'base/time/time.h'
#include 'native_mate/dictionary.h'
#include 'native_mate/object_template_builder.h'
#include 'shell/browser/browser.h'
#include 'shell/browser/native_window.h'
#include 'shell/browser/window_list.h'
#include 'shell/common/api/event_emitter_caller.h'
#include 'shell/common/native_mate_converters/callback.h'
#include 'shell/common/node_includes.h'
    
        /** Colorize an icon (given filename) with the text color */
    QIcon TextColorIcon(const QString& filename) const;
    
    #ifndef STORAGE_LEVELDB_DB_DBFORMAT_H_
#define STORAGE_LEVELDB_DB_DBFORMAT_H_
    
        UMat tmp(Size(dst_frame1.cols / (1 << src_scale), dst_frame1.rows / (1 << src_scale)), CV_8U);
    randu(tmp, 0, 255);
    resize(tmp, dst_frame1, dst_frame1.size(), 0.0, 0.0, INTER_LINEAR_EXACT);
    resize(tmp, dst_frame2, dst_frame2.size(), 0.0, 0.0, INTER_LINEAR_EXACT);
    
    class FastHufDecoder
{
  public:
    }
    
    
    
    
template <>
void
FloatVectorAttribute::writeValueTo
    (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &os, int version) const
{
    int n = _value.size();
    }
    
    
inline
FrameBuffer::ConstIterator::ConstIterator (): _i()
{
    // empty
}
    
    
    {    if (!supportsFlags (getFlags (version)))
    {
        THROW (IEX_NAMESPACE::InputExc, 'The file format version number's flag field '
                              'contains unrecognized flags.');
    }
}
    
    
#endif /* IMFGENERICINPUTFILE_H_ */

    
        void		initialize ();
    void                multiPartInitialize(InputPartData* part);
    void                compatibilityInitialize(OPENEXR_IMF_INTERNAL_NAMESPACE::IStream& is);
    TiledInputFile *	tFile ();
    
    friend void TiledOutputFile::copyPixels (InputFile &);
    
    Data *		_data;
    
    class AdditionalMetadataInterceptor : public experimental::Interceptor {
 public:
  AdditionalMetadataInterceptor(
      std::multimap<grpc::string, grpc::string> additional_metadata)
      : additional_metadata_(std::move(additional_metadata)) {}
    }
    
    static void on_alarm(void* acp, grpc_error* error) {
  async_connect* ac = (async_connect*)acp;
  gpr_mu_lock(&ac->mu);
  grpc_winsocket* socket = ac->socket;
  ac->socket = NULL;
  if (socket != NULL) {
    grpc_winsocket_shutdown(socket);
  }
  async_connect_unlock_and_cleanup(ac, socket);
}
    
    #include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/string_util.h>
    
    
    {  gpr_setenv(name, value);
  retrieved_value = gpr_getenv(name);
  GPR_ASSERT(retrieved_value != nullptr);
  GPR_ASSERT(strcmp(value, retrieved_value) == 0);
  gpr_free(retrieved_value);
}
    
    static void expect_dump(const char* buf, size_t len, uint32_t flags,
                        const char* result) {
  char* got = gpr_dump(buf, len, flags);
  GPR_ASSERT(0 == strcmp(got, result));
  gpr_free(got);
}
    
      SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
    
        SendHealthCheckRpc('', Status::OK, HealthCheckResponse::SERVING);
    SendHealthCheckRpc(kHealthyService, Status::OK,
                       HealthCheckResponse::SERVING);
    SendHealthCheckRpc(kUnhealthyService, Status::OK,
                       HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kNotRegisteredService,
                       Status(StatusCode::NOT_FOUND, ''));
    
    
    {    // If there is a generic callback service, this setup is only successful if
    // we have an iomgr that can run in the background or are inprocess
    return !callback_generic_service || grpc_iomgr_run_in_background() ||
           inproc_;
  }
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // This is a static filter used for filtering
// kvs during the compaction process.
static std::string NEW_VALUE = 'NewValue';
    
        ASSERT_OK(dbfull()->Put(writeOpt, handles_[1], 'k3', big_value));
    ASSERT_TRUE(dbfull()->GetProperty(
        handles_[1], 'rocksdb.cur-size-active-mem-table', &num));
    ASSERT_TRUE(dbfull()->GetProperty(handles_[1],
                                      'rocksdb.num-immutable-mem-table', &num));
    ASSERT_EQ(num, '2');
    ASSERT_TRUE(dbfull()->GetProperty(
        handles_[1], 'rocksdb.num-entries-active-mem-table', &num));
    ASSERT_EQ(num, '1');
    ASSERT_TRUE(dbfull()->GetProperty(
        handles_[1], 'rocksdb.num-entries-imm-mem-tables', &num));
    ASSERT_EQ(num, '2');
    get_perf_context()->Reset();
    Get(1, 'k2');
    ASSERT_EQ(2, static_cast<int>(get_perf_context()->get_from_memtable_count));
    get_perf_context()->Reset();
    Get(1, 'k3');
    ASSERT_EQ(1, static_cast<int>(get_perf_context()->get_from_memtable_count));
    get_perf_context()->Reset();
    Get(1, 'k1');
    ASSERT_EQ(3, static_cast<int>(get_perf_context()->get_from_memtable_count));
    
    Status WriteBatchBase::SingleDelete(ColumnFamilyHandle* column_family,
                                    const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(column_family, key_slice);
}
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // Load the options file.
  DBOptions loaded_db_opt;
  std::vector<ColumnFamilyDescriptor> loaded_cf_descs;
  s = LoadLatestOptions(kDBPath, Env::Default(), &loaded_db_opt,
                        &loaded_cf_descs);
  assert(s.ok());
  assert(loaded_db_opt.create_if_missing == db_opt.create_if_missing);
    
      txn->Rollback();
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }
    
    #include <stddef.h>
    
      enum class RestoreConfigError { DatabaseError = 1 };
  /**
   * @brief restoreConfigBackup retrieve backed up config
   * @return config persisted int the database
   */
  static Expected<std::map<std::string, std::string>,
                  Config::RestoreConfigError>
  restoreConfigBackup();
    
    #include <osquery/config/tests/test_utils.h>
    
    Expected<int, DatabaseError> InMemoryDatabase::getInt32(
    const std::string& domain, const std::string& key) {
  return getValue<int32_t>(domain, key);
}
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::checkDbConnection() {
  if (db_ == nullptr) {
    return createError(DatabaseError::DbIsNotOpen, 'Database is closed');
  }
  return Success();
}
    
    class RocksdbMigration final {
 public:
  RocksdbMigration(const std::string& path);
  ExpectedSuccess<RocksdbMigrationError> migrateIfNeeded();
    }
    
    
    {  value = info.default_value;
  return Status::success();
}
    
    #include 'plugin.h'