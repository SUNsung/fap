
        
        // Forward declarations
HRESULT CreatePseudoConsoleAndPipes(HPCON*, HANDLE*, HANDLE*);
HRESULT InitializeStartupInfoAttachedToPseudoConsole(STARTUPINFOEX*, HPCON);
void __cdecl PipeListener(LPVOID);
    
    // Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& filename, uint64_t* number,
                   FileType* type) {
  Slice rest(filename);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
std::string CurrentFileName(const std::string& dbname);
    
    TEST(WriteBatchTest, Empty) {
  WriteBatch batch;
  ASSERT_EQ('', PrintContents(&batch));
  ASSERT_EQ(0, WriteBatchInternal::Count(&batch));
}
    
    inline bool operator==(const Slice& x, const Slice& y) {
  return ((x.size() == y.size()) &&
          (memcmp(x.data(), y.data(), x.size()) == 0));
}
    
    inline bool Snappy_Uncompress(const char* input, size_t length, char* output) {
#if HAVE_SNAPPY
  return snappy::RawUncompress(input, length, output);
#else
  // Silence compiler warnings about unused arguments.
  (void)input;
  (void)length;
  (void)output;
  return false;
#endif  // HAVE_SNAPPY
}
    
    // Generate new filter every 2KB of data
static const size_t kFilterBaseLg = 11;
static const size_t kFilterBase = 1 << kFilterBaseLg;
    
    class Comparator;
class Iterator;
    
      const char* p = s.data();
  for (int power = 0; power <= 63; power++) {
    uint64_t v = static_cast<uint64_t>(1) << power;
    uint64_t actual;
    actual = DecodeFixed64(p);
    ASSERT_EQ(v - 1, actual);
    p += sizeof(uint64_t);
    }
    
        // Note that we only apply the TransientTxnError label if the 'autocommit' field is present in
    // the session options. When present, 'autocommit' will always be false, so we don't check its
    // value.
    if (sessionOptions.getAutocommit() &&
        isTransientTransactionError(code,
                                    hasWriteConcernError,
                                    commandName == 'commitTransaction' ||
                                        commandName == 'coordinateCommitTransaction')) {
        // An error code for which isTransientTransactionError() is true indicates a transaction
        // failure with no persistent side effects.
        labelArray << txn::TransientTxnErrorFieldName;
    }
    
    class ServiceContext;
    
        BSONObj query2 = BSON('$where' << BSONCodeWScope(code, BSON('a' << true)));
    auto expr2 = unittest::assertGet(
        ExtensionsCallbackReal(&_opCtx, &_nss).parseWhere(query2.firstElement()));
    
    RemoveTransliterator::RemoveTransliterator() : Transliterator(UnicodeString(TRUE, ::CURR_ID, -1), 0) {}
    
    #include 'unicode/utypes.h'
    
    #if !UCONFIG_NO_FORMATTING
    
        auto nvmlRes = nvmlInit();
    std::array<char, NVML_DEVICE_UUID_BUFFER_SIZE> thisDeviceUUID{ 'C', 'P', 'U', 0 };
    
    #ifdef COMING_SOON
template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::SequenceDecoder(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr pairscore, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<SequenceDecoderNode<ElemType>>(net.GetDeviceId(), nodeName), { label, prediction, pairscore });
}
#endif
    
        // --- properties
    
    // copy constructor, creates a new disconnected copy of this node
// doesn't copy everything, so use for macro expansion only (it's private)
// copyMe - node to copy
template <typename ElemType>
NDLNode<ElemType>::NDLNode(const NDLNode<ElemType>& copyMe)
{
    m_name        = copyMe.m_name;        // value on the left of the equals
    m_value       = copyMe.m_value;       // value on the right of the equals (CN node name, or value)
    m_parent      = copyMe.m_parent;      // parent script
    m_type        = copyMe.m_type;        // type of node
    m_paramString = copyMe.m_paramString; // parameter of a function/array
    m_paramMacro  = copyMe.m_paramMacro;  // parameter of a macro (the variables used in the macro definition)
    // don't copy over m_parameters, they will be reparsed after the copy
    }
    
        inline void transpose(ElemType *src, ElemType *dst, const int N, const int M)
    {
        for (auto n = 0; n < N*M; n++) {
            auto i = n / N;
            auto j = n%N;
            dst[n] = src[M*j + i];
        }
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    #include 'a2netcompat.h'
#include 'DlAbortEx.h'
#include 'message.h'
#include 'fmt.h'
#include 'console.h'
#include 'OptionParser.h'
#include 'prefs.h'
#ifdef HAVE_LIBGMP
#  include 'a2gmp.h'
#endif // HAVE_LIBGMP
#include 'LogFactory.h'
#include 'util.h'
    
      // private key `keyfile' must be decrypted.
  virtual bool addCredentialFile(const std::string& certfile,
                                 const std::string& keyfile) = 0;
    
      if (store_) {
    ::CertCloseStore(store_, 0);
  }
  store_ = store;
  cred_.reset();
    
    /**
 * General preferences
 */
// values: 1*digit
extern PrefPtr PREF_TIMEOUT;
// values: 1*digit
extern PrefPtr PREF_DNS_TIMEOUT;
// values: 1*digit
extern PrefPtr PREF_CONNECT_TIMEOUT;
// values: 1*digit
extern PrefPtr PREF_MAX_TRIES;
// values: 1*digit
extern PrefPtr PREF_AUTO_SAVE_INTERVAL;
// values: a string that your file system recognizes as a file name.
extern PrefPtr PREF_LOG;
// values: a string that your file system recognizes as a directory.
extern PrefPtr PREF_DIR;
// values: a string that your file system recognizes as a file name.
extern PrefPtr PREF_OUT;
// values: 1*digit
extern PrefPtr PREF_SPLIT;
// value: true | false
extern PrefPtr PREF_DAEMON;
// value: a string
extern PrefPtr PREF_REFERER;
// value: 1*digit
extern PrefPtr PREF_LOWEST_SPEED_LIMIT;
// value: 1*digit
extern PrefPtr PREF_PIECE_LENGTH;
// value: 1*digit
extern PrefPtr PREF_MAX_DOWNLOAD_LIMIT;
// value: 1*digit
extern PrefPtr PREF_STARTUP_IDLE_TIME;
// value: prealloc | falloc | none
extern PrefPtr PREF_FILE_ALLOCATION;
// value: 1*digit
extern PrefPtr PREF_NO_FILE_ALLOCATION_LIMIT;
// value: true | false
extern PrefPtr PREF_ALLOW_OVERWRITE;
// value: true | false
extern PrefPtr PREF_REALTIME_CHUNK_CHECKSUM;
// value: true | false
extern PrefPtr PREF_CHECK_INTEGRITY;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_NETRC_PATH;
// value:
extern PrefPtr PREF_CONTINUE;
// value:
extern PrefPtr PREF_NO_NETRC;
// value: 1*digit
extern PrefPtr PREF_MAX_OVERALL_DOWNLOAD_LIMIT;
// value: 1*digit
extern PrefPtr PREF_MAX_DOWNLOADS;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_INPUT_FILE;
// value: true | false
extern PrefPtr PREF_DEFERRED_INPUT;
// value: 1*digit
extern PrefPtr PREF_MAX_CONCURRENT_DOWNLOADS;
// value: true | false
extern PrefPtr PREF_OPTIMIZE_CONCURRENT_DOWNLOADS;
// value: 1*digit ['.' [ 1*digit ] ]
extern PrefPtr PREF_OPTIMIZE_CONCURRENT_DOWNLOADS_COEFFA;
// value: 1*digit ['.' [ 1*digit ] ]
extern PrefPtr PREF_OPTIMIZE_CONCURRENT_DOWNLOADS_COEFFB;
// value: true | false
extern PrefPtr PREF_FORCE_SEQUENTIAL;
// value: true | false
extern PrefPtr PREF_AUTO_FILE_RENAMING;
// value: true | false
extern PrefPtr PREF_PARAMETERIZED_URI;
// value: true | false
extern PrefPtr PREF_ALLOW_PIECE_LENGTH_CHANGE;
// value: true | false
extern PrefPtr PREF_NO_CONF;
// value: string
extern PrefPtr PREF_CONF_PATH;
// value: 1*digit
extern PrefPtr PREF_STOP;
// value: true | false
extern PrefPtr PREF_QUIET;
// value: true | false
extern PrefPtr PREF_ASYNC_DNS;
// value: 1*digit
extern PrefPtr PREF_SUMMARY_INTERVAL;
// value: debug, info, notice, warn, error
extern PrefPtr PREF_LOG_LEVEL;
// value: debug, info, notice, warn, error
extern PrefPtr PREF_CONSOLE_LOG_LEVEL;
// value: inorder | feedback | adaptive
extern PrefPtr PREF_URI_SELECTOR;
// value: 1*digit
extern PrefPtr PREF_SERVER_STAT_TIMEOUT;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_SERVER_STAT_IF;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_SERVER_STAT_OF;
// value: true | false
extern PrefPtr PREF_REMOTE_TIME;
// value: 1*digit
extern PrefPtr PREF_MAX_FILE_NOT_FOUND;
// value: epoll | select
extern PrefPtr PREF_EVENT_POLL;
// value: true | false
extern PrefPtr PREF_ENABLE_RPC;
// value: 1*digit
extern PrefPtr PREF_RPC_LISTEN_PORT;
// value: string
extern PrefPtr PREF_RPC_USER;
// value: string
extern PrefPtr PREF_RPC_PASSWD;
// value: 1*digit
extern PrefPtr PREF_RPC_MAX_REQUEST_SIZE;
// value: true | false
extern PrefPtr PREF_RPC_LISTEN_ALL;
// value: true | false
extern PrefPtr PREF_RPC_ALLOW_ORIGIN_ALL;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_RPC_CERTIFICATE;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_RPC_PRIVATE_KEY;
// value: true | false
extern PrefPtr PREF_RPC_SECURE;
// value: true | false
extern PrefPtr PREF_RPC_SAVE_UPLOAD_METADATA;
// value: true | false
extern PrefPtr PREF_DRY_RUN;
// value: true | false
extern PrefPtr PREF_REUSE_URI;
// value: string
extern PrefPtr PREF_ON_DOWNLOAD_START;
extern PrefPtr PREF_ON_DOWNLOAD_PAUSE;
extern PrefPtr PREF_ON_DOWNLOAD_STOP;
extern PrefPtr PREF_ON_DOWNLOAD_COMPLETE;
extern PrefPtr PREF_ON_DOWNLOAD_ERROR;
// value: string
extern PrefPtr PREF_INTERFACE;
// value: string
extern PrefPtr PREF_MULTIPLE_INTERFACE;
// value: true | false
extern PrefPtr PREF_DISABLE_IPV6;
// value: true | false
extern PrefPtr PREF_HUMAN_READABLE;
// value: true | false
extern PrefPtr PREF_REMOVE_CONTROL_FILE;
// value: true | false
extern PrefPtr PREF_ALWAYS_RESUME;
// value: 1*digit
extern PrefPtr PREF_MAX_RESUME_FAILURE_TRIES;
// value: string that your file system recognizes as a file name.
extern PrefPtr PREF_SAVE_SESSION;
// value: 1*digit
extern PrefPtr PREF_MAX_CONNECTION_PER_SERVER;
// value: 1*digit
extern PrefPtr PREF_MIN_SPLIT_SIZE;
// value: true | false
extern PrefPtr PREF_CONDITIONAL_GET;
// value: true | false
extern PrefPtr PREF_SELECT_LEAST_USED_HOST;
// value: true | false
extern PrefPtr PREF_ENABLE_ASYNC_DNS6;
// value: 1*digit
extern PrefPtr PREF_MAX_DOWNLOAD_RESULT;
// value: 1*digit
extern PrefPtr PREF_RETRY_WAIT;
// value: string
extern PrefPtr PREF_ASYNC_DNS_SERVER;
// value: true | false
extern PrefPtr PREF_SHOW_CONSOLE_READOUT;
// value: default | inorder | geom
extern PrefPtr PREF_STREAM_PIECE_SELECTOR;
// value: true | false
extern PrefPtr PREF_TRUNCATE_CONSOLE_READOUT;
// value: true | false
extern PrefPtr PREF_PAUSE;
// value: default | full | hide
extern PrefPtr PREF_DOWNLOAD_RESULT;
// value: true | false
extern PrefPtr PREF_HASH_CHECK_ONLY;
// values: hashType=digest
extern PrefPtr PREF_CHECKSUM;
// value: pid
extern PrefPtr PREF_STOP_WITH_PROCESS;
// value: true | false
extern PrefPtr PREF_ENABLE_MMAP;
// value: true | false
extern PrefPtr PREF_FORCE_SAVE;
// value: true | false
extern PrefPtr PREF_SAVE_NOT_FOUND;
// value: 1*digit
extern PrefPtr PREF_DISK_CACHE;
// value: string
extern PrefPtr PREF_GID;
// values: 1*digit
extern PrefPtr PREF_SAVE_SESSION_INTERVAL;
// value: true |false
extern PrefPtr PREF_ENABLE_COLOR;
// value: string
extern PrefPtr PREF_RPC_SECRET;
// values: 1*digit
extern PrefPtr PREF_DSCP;
// values: true | false
extern PrefPtr PREF_PAUSE_METADATA;
// values: 1*digit
extern PrefPtr PREF_RLIMIT_NOFILE;
// values: SSLv3 | TLSv1 | TLSv1.1 | TLSv1.2
extern PrefPtr PREF_MIN_TLS_VERSION;
// value: 1*digit
extern PrefPtr PREF_SOCKET_RECV_BUFFER_SIZE;
// value: 1*digit
extern PrefPtr PREF_MAX_MMAP_LIMIT;
// value: true | false
extern PrefPtr PREF_STDERR;
// value: true | false
extern PrefPtr PREF_KEEP_UNFINISHED_DOWNLOAD_RESULT;
    
    void DHTReplaceNodeTask::startup() { sendMessage(); }
    
    namespace aria2 {
    }
    
        // output element at index 2 (third element)
    std::cout << array.at(2) << '\n';
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create a JSON string directly from a string literal
    json j_string_literal('The quick brown fox jumps over the lazy dog.');