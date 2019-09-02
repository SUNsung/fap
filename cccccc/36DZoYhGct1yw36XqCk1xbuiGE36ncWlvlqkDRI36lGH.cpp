
        
        bool CertificateManagerModel::ImportCACerts(
    const net::ScopedCERTCertificateList& certificates,
    net::NSSCertDatabase::TrustBits trust_bits,
    net::NSSCertDatabase::ImportCertFailureList* not_imported) {
  return cert_db_->ImportCACerts(certificates, trust_bits, not_imported);
}
    
    napi_value Init(napi_env env, napi_value exports) {
  napi_status status;
  napi_property_descriptor descriptors[] = {
      {'Print', NULL, Print, NULL, NULL, NULL, napi_default, NULL}};
    }
    
    namespace electron {
    }
    
    #ifndef SHELL_APP_COMMAND_LINE_ARGS_H_
#define SHELL_APP_COMMAND_LINE_ARGS_H_
    
      // NativeWindowObserver:
  void RequestPreferredWidth(int* width) override;
  void OnCloseButtonClicked(bool* prevent_default) override;
    
    
    {}  // namespace api
    
    class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
            _tableSymbol[i]  = 0xffff;
        _tableCodeLen[i] = 0; 
    
        IMF_EXPORT
    void decode (const unsigned char *src,
                 int numSrcBits,
                 unsigned short *dst,
                 int numDstElems);
    
    #include 'ImfGenericInputFile.h'
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
      // Apply the shard, platform, and version checking.
  // It is important to set each value such that the packs meta-table can report
  // each of the restrictions.
  if ((shard_ > 0 && shard_ < getMachineShard()) || !checkPlatform() ||
      !checkVersion()) {
    return;
  }
    
     private:
  template <typename T>
  Expected<T, DatabaseError> getValue(const std::string& domain,
                                      const std::string& key);
  template <typename T>
  ExpectedSuccess<DatabaseError> putValue(const std::string& domain,
                                          const std::string& key,
                                          const T& value);
    
    ExpectedSuccess<RocksdbMigrationError> RocksdbMigration::moveDb(
    const std::string& src_path, const std::string& dst_path) {
  boost::system::error_code ec;
  if (fs::exists(fs::path(dst_path), ec)) {
    return createError(RocksdbMigrationError::FailMoveDatabase)
           << 'Database at dst path already exists or path is not accessible. '
              'Path: '
           << dst_path << 'Error: ' << ec.value() << ' ' << ec.message();
  }
    }
    
      std::map<std::string, FlagInfo> flags;
  for (const auto& flag : info) {
    if (instance().flags_.count(flag.name) == 0) {
      // This flag info was not defined within osquery.
      continue;
    }
    }
    
    
    {  name_ = name;
}
    
    
    { public:
  Status call(const PluginRequest& request, PluginResponse& response) override;
};
    
      virtual void SetUp() {
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    auto random_name = boost::uuids::to_string(uuid);
    auto path = boost::filesystem::temp_directory_path().append(random_name);
    boost::filesystem::create_directory(path);
    path_ = path.string();
  }
    
    
    {  for (size_t i = 0; i < len;) {
    int h1 = fromHex(data_[i++]);
    if (h1 < 0) {
      return false;
    }
    int h2 = fromHex(data_[i++]);
    if (h2 < 0) {
      return false;
    }
    result->push_back(static_cast<char>((h1 << 4) | h2));
  }
  return true;
}
    
    #include 'utilities/blob_db/blob_compaction_filter.h'
#include 'db/dbformat.h'
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
#include 'utilities/merge_operators.h'
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
        coro_test({
        make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
            int i = 1;
            bool ret;
    }
    }
    
        inline size_t producer_num()
    {
        return producer_queue.size();
    }
    
        swHashMap_del(hm, (char *) SW_STRL('willdel'));
    swHashMap_update(hm, (char *) SW_STRL('willupadte'), (void *) (9999 * 5555));
    
            send_pkg.ptr = ptr;
        send_pkg.size = size;
        send_pkg.serial_num = rand();
    
        fd1 = socket(AF_UNIX,SOCK_DGRAM,0);
    strncpy(un1.sun_path, sock1_path, sizeof(un1.sun_path) - 1); 
    bind(fd1,(struct sockaddr *)&un1,sizeof(un1));
    
        private:
        void addRead() {
            if (m_read) return;
            m_read = new QSocketNotifier(m_ctx->c.fd, QSocketNotifier::Read, 0);
            connect(m_read, SIGNAL(activated(int)), this, SLOT(read()));
        }
    
    
    {    i = l % SIZEOF_LONG;
    l -= i;
    for (addr = l;; addr += SIZEOF_LONG)
    {
        if (0 > trace_get_long(traced_pid, addr, &l))
        {
            return -1;
        }
        for (; i < SIZEOF_LONG; i++)
        {
            --sz;
            if (sz && lc[i])
            {
                *buf++ = lc[i];
                continue;
            }
            *buf = '\0';
            return 0;
        }
        i = 0;
    }
    return 0;
}
    
        template<typename T>
    Rectangle<T> Rectangle<T>::operator*(const T value) const
    {
        try
        {
            return Rectangle<T>{T(x * value), T(y * value), T(width * value), T(height * value)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Rectangle<T>{};
        }
    }