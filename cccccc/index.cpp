
        
        #include 'base/command_line.h'
    
    void AutoUpdater::OnError(const std::string& message,
                          const int code,
                          const std::string& domain) {
  v8::Locker locker(isolate());
  v8::HandleScope handle_scope(isolate());
  auto error = v8::Exception::Error(mate::StringToV8(isolate(), message));
  auto errorObject =
      error->ToObject(isolate()->GetCurrentContext()).ToLocalChecked();
    }
    
    
    {}  // namespace electron

    
      // NotificationDelegate:
  void NotificationAction(int index) override;
  void NotificationClick() override;
  void NotificationReplied(const std::string& reply) override;
  void NotificationDisplayed() override;
  void NotificationDestroyed() override;
  void NotificationClosed() override;
    
    #endif  // SHELL_BROWSER_API_ATOM_API_POWER_MONITOR_H_

    
    namespace grpc_impl {
    }
    
      LoadBalanceResponse BuildRandomResponseForBackends() {
    // Generate a random serverlist with varying size (if N =
    // all_backend_ports_.size(), num_non_drop_entry is in [0, 2N],
    // num_drop_entry is in [0, N]), order, duplicate, and drop rate.
    size_t num_non_drop_entry =
        std::rand() % (all_backend_ports_.size() * 2 + 1);
    size_t num_drop_entry = std::rand() % (all_backend_ports_.size() + 1);
    std::vector<int> random_backend_indices;
    for (size_t i = 0; i < num_non_drop_entry; ++i) {
      random_backend_indices.push_back(std::rand() % all_backend_ports_.size());
    }
    for (size_t i = 0; i < num_drop_entry; ++i) {
      random_backend_indices.push_back(-1);
    }
    std::shuffle(random_backend_indices.begin(), random_backend_indices.end(),
                 std::mt19937(std::random_device()()));
    // Build the response according to the random list generated above.
    LoadBalanceResponse response;
    for (int index : random_backend_indices) {
      auto* server = response.mutable_server_list()->add_servers();
      if (index < 0) {
        server->set_drop(true);
        server->set_load_balance_token('load_balancing');
      } else {
        server->set_ip_address(Ip4ToPackedString('127.0.0.1'));
        server->set_port(all_backend_ports_[index]);
      }
    }
    return response;
  }
    
      // shutdown should trigger cancellation causing everything to shutdown
  auto deadline =
      std::chrono::system_clock::now() + std::chrono::microseconds(100);
  server_->Shutdown(deadline);
  EXPECT_GE(std::chrono::system_clock::now(), deadline);
    
    #endif /* GRPC_WINSOCK_SOCKET */

    
    
    { private:
  bool default_value_;
};
    
    #include <grpc/support/atm.h>
#include 'src/core/lib/debug/trace.h'
#include 'src/core/lib/gpr/mpscq.h'
#include 'src/core/lib/iomgr/exec_ctx.h'
    
    static inline std::shared_ptr<::grpc::Channel>
CreateCustomChannelWithInterceptors(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds,
    const ChannelArguments& args,
    std::vector<
        std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
        interceptor_creators) {
  return ::grpc_impl::experimental::CreateCustomChannelWithInterceptors(
      target, creds, args, std::move(interceptor_creators));
}
    
    
    {class SecureChannelCredentials;
class ResourceQuota;
}  // namespace grpc_impl
    
    int maybe_assert_non_blocking_poll(struct pollfd* pfds, nfds_t nfds,
                                   int timeout) {
  if (gpr_tls_get(&g_is_nonblocking_test)) {
    GPR_ASSERT(timeout == 0);
  }
  return poll(pfds, nfds, timeout);
}
    
    #if defined(__MAC_10_8)
  if (!ctx->getVerifyPeer()) {
    // This disables client verification
    (void)SSLSetSessionOption(sslCtx_, kSSLSessionOptionBreakOnServerAuth,
                              true);
  }
#else
  (void)SSLSetEnableCertVerify(sslCtx_, ctx->getVerifyPeer());
#endif
    
      if (!pkey || !cert) {
    A2_LOG_ERROR(fmt('Failed to use PKCS12 file: no pkey or cert %s',
                     ERR_error_string(ERR_get_error(), nullptr)));
    return false;
  }
  if (!SSL_CTX_use_PrivateKey(sslCtx_, pkey)) {
    A2_LOG_ERROR(fmt('Failed to use PKCS12 file pkey: %s',
                     ERR_error_string(ERR_get_error(), nullptr)));
    return false;
  }
  if (!SSL_CTX_use_certificate(sslCtx_, cert)) {
    A2_LOG_ERROR(fmt('Failed to use PKCS12 file cert: %s',
                     ERR_error_string(ERR_get_error(), nullptr)));
    return false;
  }
  if (ca && sk_X509_num(ca) && !SSL_CTX_add_extra_chain_cert(sslCtx_, ca)) {
    A2_LOG_ERROR(fmt('Failed to use PKCS12 file chain: %s',
                     ERR_error_string(ERR_get_error(), nullptr)));
    return false;
  }
    
    std::string OpenSSLTLSSession::getLastErrorString()
{
  if (rv_ <= 0) {
    int sslError = SSL_get_error(ssl_, rv_);
    switch (sslError) {
    case SSL_ERROR_NONE:
    case SSL_ERROR_WANT_READ:
    case SSL_ERROR_WANT_WRITE:
    case SSL_ERROR_WANT_X509_LOOKUP:
    case SSL_ERROR_ZERO_RETURN:
      return '';
    case SSL_ERROR_SYSCALL: {
      int err = ERR_get_error();
      if (err == 0) {
        if (rv_ == 0) {
          return 'EOF was received';
        }
        else if (rv_ == -1) {
          return 'SSL I/O error';
        }
        else {
          return 'unknown syscall error';
        }
      }
      else {
        return ERR_error_string(err, nullptr);
      }
    }
    case SSL_ERROR_SSL:
      return 'protocol error';
    default:
      return 'unknown error';
    }
  }
  else {
    return '';
  }
}
    
    #include <string>
    
    bool WinTLSContext::getVerifyPeer() const
{
  return credentials_.dwFlags & SCH_CRED_AUTO_CRED_VALIDATION;
}
    
      std::shared_ptr<DHTNode> newNode_;
    
    
    {} // namespace aria2

    
    #include <vector>
#include <string>
#include <memory>
    
    /*
 * Class:     org_rocksdb_CompactionOptionsFIFO
 * Method:    setAllowCompaction
 * Signature: (JZ)V
 */
void Java_org_rocksdb_CompactionOptionsFIFO_setAllowCompaction(
    JNIEnv*, jobject, jlong jhandle, jboolean allow_compaction) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsFIFO*>(jhandle);
  opt->allow_compaction = static_cast<bool>(allow_compaction);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    newCompactionOptionsUniversal
 * Signature: ()J
 */
jlong Java_org_rocksdb_CompactionOptionsUniversal_newCompactionOptionsUniversal(
    JNIEnv*, jclass) {
  const auto* opt = new rocksdb::CompactionOptionsUniversal();
  return reinterpret_cast<jlong>(opt);
}
    
    void build_column_family_descriptor_list(
    JNIEnv* env, jobject jcfds,
    std::vector<rocksdb::ColumnFamilyDescriptor>& cf_descs) {
  jmethodID add_mid = rocksdb::ListJni::getListAddMethodId(env);
  if (add_mid == nullptr) {
    // exception occurred accessing method
    return;
  }
    }
    
    #include <jni.h>
#include <functional>
#include <memory>
    
    #ifndef JAVA_ROCKSJNI_TRACE_WRITER_JNICALLBACK_H_
#define JAVA_ROCKSJNI_TRACE_WRITER_JNICALLBACK_H_
    
      if (GetFileInformationByHandle(file_handle, &file_info) == 0) {
    CloseHandle(file_handle);
    return Status(-1,
                  'GetFileInformationByHandle failed for ' + path.string() +
                      ' with ' + std::to_string(GetLastError()));
  }
    
    #include <boost/asio.hpp>
#include <boost/foreach.hpp>
    
      // In case of special values like @reboot or @yearly time columns are empty
  if (string.empty()) {
    return true;
  }
    
    
    { private:
  /**
   * @brief Stores the native handle denoting the process
   *
   * 'Handle' of the process. On Windows, this will be a HANDLE. On POSIX
   * systems, this will be a pid_t.
   */
  PlatformPidType id_;
};
    
    #include <osquery/utils/system/system.h>
    
    
    {  // Also request each parse to reset state.
  for (const auto& plugin : RegistryFactory::get().plugins('config_parser')) {
    std::shared_ptr<ConfigParserPlugin> parser = nullptr;
    try {
      parser = std::dynamic_pointer_cast<ConfigParserPlugin>(plugin.second);
    } catch (const std::bad_cast& /* e */) {
      continue;
    }
    if (parser == nullptr || parser.get() == nullptr) {
      continue;
    }
    parser->reset();
  }
}
    
      /// Update the refresh rate.
  void setRefresh(size_t refresh_sec);
    
    size_t splayValue(size_t original, size_t splayPercent) {
  if (splayPercent == 0 || splayPercent > 100) {
    return original;
  }
    }
    
      auto s = get().update(getTestConfigMap('test_parse_items.conf'));
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    JSON getExamplePacksConfig();
JSON getUnrestrictedPack();
JSON getRestrictedPack();
JSON getPackWithDiscovery();
JSON getPackWithValidDiscovery();
JSON getPackWithFakeVersion();
    
      // This funcion should completely destroy db, so after next open
  // db should be fresh new
  // Implementation can expect that db is closed before
  // calling destroyDB and should crash/fail in case when db is still open
  virtual ExpectedSuccess<DatabaseError> destroyDB() = 0;
    
    template <typename T>
ExpectedSuccess<DatabaseError> InMemoryDatabase::putValue(
    const std::string& domain, const std::string& key, const T& value) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  if (!is_open_) {
    return createError(DatabaseError::DbIsNotOpen) << 'Database is closed';
  }
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  std::lock_guard<std::mutex> lock(storage_iter->second->getMutex());
  debug_only::verify(
      [&storage_iter, &key]() {
        auto result = storage_iter->second->get(key);
        return result ? result.get().type() == typeid(T) : true;
      },
      'changing type is not allowed');
  storage_iter->second->put(key, value);
  return Success();
}
    
    template <typename StorageType>
class InMemoryStorage final {
 public:
  void put(const std::string& key, const StorageType value);
  Expected<StorageType, DatabaseError> get(const std::string& key) const;
  std::vector<std::string> getKeys(const std::string& prefix = '') const;
    }