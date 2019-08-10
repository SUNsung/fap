
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #include <map>
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    bool NwAppGetArgvSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.setListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetListSyncFunction);
};
    
    
    {  for (size_t i = 0; i < nindptr; ++i) {
    col_ptr_[i] = static_cast<size_t>(p_indptr[i]);
  }
  #pragma omp parallel for schedule(static)
  for (int64_t i = 0; i < static_cast<int64_t>(ndata); ++i) {
    indices_[i] = static_cast<unsigned>(p_indices[i]);
    data_[i] = static_cast<float>(p_data[i]);
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromCSCEx(BeginPtr(col_ptr_), BeginPtr(indices_),
                                      BeginPtr(data_), nindptr, ndata,
                                      nrow, &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {
    {}  // namespace common
}  // namespace xgboost

    
    /*!
 * \brief perform numerically safe logsum
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline float LogSum(Iterator begin, Iterator end) {
  float mx = *begin;
  for (Iterator it = begin; it != end; ++it) {
    mx = std::max(mx, *it);
  }
  float sum = 0.0f;
  for (Iterator it = begin; it != end; ++it) {
    sum += std::exp(*it - mx);
  }
  return mx + std::log(sum);
}
    
    namespace xgboost {
namespace obj {
    }
    }
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
    #ifdef HAVE_OPENSSL
#  include <openssl/err.h>
#  include <openssl/ssl.h>
#  include 'libssl_compat.h'
#endif // HAVE_OPENSSL
#ifdef HAVE_LIBGCRYPT
#  include <gcrypt.h>
#endif // HAVE_LIBGCRYPT
#ifdef HAVE_LIBGNUTLS
#  include <gnutls/gnutls.h>
#endif // HAVE_LIBGNUTLS
    
    #include <unistd.h>
    
    int OpenSSLTLSSession::tlsConnect(const std::string& hostname,
                                  TLSVersion& version,
                                  std::string& handshakeErr)
{
  handshakeErr = '';
  int ret;
  ret = handshake(version);
  if (ret != TLS_ERR_OK) {
    return ret;
  }
  if (tlsContext_->getSide() == TLS_CLIENT && tlsContext_->getVerifyPeer()) {
    // verify peer
    X509* peerCert = SSL_get_peer_certificate(ssl_);
    if (!peerCert) {
      handshakeErr = 'certificate not found';
      return TLS_ERR_ERROR;
    }
    std::unique_ptr<X509, decltype(&X509_free)> certDeleter(peerCert,
                                                            X509_free);
    long verifyResult = SSL_get_verify_result(ssl_);
    if (verifyResult != X509_V_OK) {
      handshakeErr = X509_verify_cert_error_string(verifyResult);
      return TLS_ERR_ERROR;
    }
    std::string commonName;
    std::vector<std::string> dnsNames;
    std::vector<std::string> ipAddrs;
    GENERAL_NAMES* altNames;
    altNames = reinterpret_cast<GENERAL_NAMES*>(
        X509_get_ext_d2i(peerCert, NID_subject_alt_name, nullptr, NULL));
    if (altNames) {
      std::unique_ptr<GENERAL_NAMES, decltype(&GENERAL_NAMES_free)>
          altNamesDeleter(altNames, GENERAL_NAMES_free);
      size_t n = sk_GENERAL_NAME_num(altNames);
      for (size_t i = 0; i < n; ++i) {
        const GENERAL_NAME* altName = sk_GENERAL_NAME_value(altNames, i);
        if (altName->type == GEN_DNS) {
          auto name = ASN1_STRING_get0_data(altName->d.ia5);
          if (!name) {
            continue;
          }
          size_t len = ASN1_STRING_length(altName->d.ia5);
          if (len == 0) {
            continue;
          }
          if (name[len - 1] == '.') {
            --len;
            if (len == 0) {
              continue;
            }
          }
          dnsNames.push_back(std::string(name, name + len));
        }
        else if (altName->type == GEN_IPADD) {
          const unsigned char* ipAddr = altName->d.iPAddress->data;
          if (!ipAddr) {
            continue;
          }
          size_t len = altName->d.iPAddress->length;
          ipAddrs.push_back(
              std::string(reinterpret_cast<const char*>(ipAddr), len));
        }
      }
    }
    X509_NAME* subjectName = X509_get_subject_name(peerCert);
    if (!subjectName) {
      handshakeErr = 'could not get X509 name object from the certificate.';
      return TLS_ERR_ERROR;
    }
    int lastpos = -1;
    while (1) {
      lastpos =
          X509_NAME_get_index_by_NID(subjectName, NID_commonName, lastpos);
      if (lastpos == -1) {
        break;
      }
      X509_NAME_ENTRY* entry = X509_NAME_get_entry(subjectName, lastpos);
      unsigned char* out;
      int outlen = ASN1_STRING_to_UTF8(&out, X509_NAME_ENTRY_get_data(entry));
      if (outlen < 0) {
        continue;
      }
      if (outlen == 0) {
        OPENSSL_free(out);
        continue;
      }
      if (out[outlen - 1] == '.') {
        --outlen;
        if (outlen == 0) {
          OPENSSL_free(out);
          continue;
        }
      }
      commonName.assign(&out[0], &out[outlen]);
      OPENSSL_free(out);
      break;
    }
    if (!net::verifyHostname(hostname, dnsNames, ipAddrs, commonName)) {
      handshakeErr = 'hostname does not match';
      return TLS_ERR_ERROR;
    }
  }
    }
    
      if (credentials_.dwMinimumCipherStrength > WEAK_CIPHER_BITS) {
    // Enable strong crypto if we already set a minimum cipher streams.
    // This might actually require even stronger algorithms, which is a good
    // thing.
    credentials_.dwFlags |= SCH_USE_STRONG_CRYPTO;
  }
    
    typedef const Pref* PrefPtr;
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
    
    {} // namespace aria2
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
    class DHTResponseMessage : public DHTAbstractMessage {
protected:
  virtual std::string toStringOptional() const { return A2STR::NIL; }
    }
    
    
    {
    {    nodes.push_back(node);
  }
  localNode_ = localNode;
  nodes_ = nodes;
  A2_LOG_INFO('DHT routing table was loaded successfully');
}
    
      std::shared_ptr<DHTNode> localNode_;
    
    public:
  DHTRoutingTableSerializer(int family);
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    
    {} // namespace aria2
