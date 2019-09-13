
        
        #include 'native_mate/function_template.h'
    
    
    {}  // namespace api
    
    #ifndef SHELL_BROWSER_API_ATOM_API_COOKIES_H_
#define SHELL_BROWSER_API_ATOM_API_COOKIES_H_
    
    
    {    // Whether or not this source should provide an icon.
    bool fetch_icon = false;
  };
    
      void Pause();
  bool IsPaused() const;
  void Resume();
  bool CanResume() const;
  void Cancel();
  int64_t GetReceivedBytes() const;
  int64_t GetTotalBytes() const;
  std::string GetMimeType() const;
  bool HasUserGesture() const;
  std::string GetFilename() const;
  std::string GetContentDisposition() const;
  const GURL& GetURL() const;
  const std::vector<GURL>& GetURLChain() const;
  download::DownloadItem::DownloadState GetState() const;
  bool IsDone() const;
  void SetSavePath(const base::FilePath& path);
  base::FilePath GetSavePath() const;
  file_dialog::DialogSettings GetSaveDialogOptions() const;
  void SetSaveDialogOptions(const file_dialog::DialogSettings& options);
  std::string GetLastModifiedTime() const;
  std::string GetETag() const;
  double GetStartTime() const;
    
     protected:
  explicit InAppPurchase(v8::Isolate* isolate);
  ~InAppPurchase() override;
    
    // static
mate::WrappableBase* Menu::New(mate::Arguments* args) {
  return new MenuViews(args->isolate(), args->GetThis());
}
    
      void Show();
  void Close();
    
    class PlatformStyle;
class WalletModel;
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
        /* Check bad contexts and NULLs for recovery */
    ecount = 0;
    CHECK(secp256k1_ecdsa_recover(none, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recover(sign, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(vrfy, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, NULL, &recsig, message) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, NULL, message) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, NULL) == 0);
    CHECK(ecount == 5);
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
    
    {
    {}  // namespace log
}  // namespace leveldb

    
    	if (maxTileWidth > 0 &&
	    maxTileWidth < int(tileDesc.xSize))
	{
	    THROW (IEX_NAMESPACE::ArgExc, 'The width of the tiles exceeds the maximum '
				'width of ' << maxTileWidth << 'pixels.');
	}
    
    
//
// Compute Huffman codes (based on frq input) and store them in frq:
//	- code structure is : [63:lsb - 6:msb] | [5-0: bit length];
//	- max code length is 58 bits;
//	- codes outside the range [im-iM] have a null length (unused values);
//	- original frequencies are destroyed;
//	- encoding tables are used by hufEncode() and hufBuildDecTable();
//
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    
        IMF_EXPORT
        void                rawTileData (int &dx, int &dy,
                                         int &lx, int &ly,
                                         const char *&pixelData,
                                         int &pixelDataSize);
    
    	Copyright (c) 2016 Błażej Szczygieł
    
    
    {};
    
    	enum IMAGE_ERROR
	{
		UNSUPPORTED_FRAME = -1,
		NO_ERROR,
		NO_FRAME
	};
    
      Cues(Segment*, long long start, long long size, long long element_start,
       long long element_size);
  ~Cues();
    
    static const vorbis_residue_template _res_16s_0[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__16c0_s_single,&_huff_book__16c0_s_single,
   &_resbook_16s_0,&_resbook_16s_0},
};
static const vorbis_residue_template _res_16s_1[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__16c1_s_short,&_huff_book__16c1_s_short,
   &_resbook_16s_1,&_resbook_16s_1},
    }
    
    #ifndef M_PI
#  define M_PI (3.1415926536f)
#endif
    
    #ifdef __cplusplus
extern 'C' {
#endif
    }
    
    
    {        // If we found a grouping and aren't at the end of the string yet,
        // jump to the next position in the string (the ';').
        // The loop will then increment us to the next character, which should be a number.
        if (next && (static_cast<size_t>(next - groupingString.data()) < groupingString.length()))
        {
            itr = next;
        }
    }
    
            UCM::Category m_curCategory;
        UCM::Unit m_curFrom;
        UCM::Unit m_curTo;
        UCM::Command m_lastCommand;
    
    namespace
{
    void IFT(ResultCode hr)
    {
        if (FAILED(hr))
        {
            throw hr;
        }
    }
}
void CHistoryCollector::ReinitHistory()
{
    m_lastOpStartIndex = -1;
    m_lastBinOpStartIndex = -1;
    m_curOperandIndex = 0;
    m_bLastOpndBrace = false;
    if (m_spTokens != nullptr)
    {
        m_spTokens->Clear();
    }
    if (m_spCommands != nullptr)
    {
        m_spCommands->Clear();
    }
}
    
            CalcInput(wchar_t decSymbol)
            : m_hasExponent(false)
            , m_hasDecimal(false)
            , m_decPtIndex(0)
            , m_decSymbol(decSymbol)
            , m_base()
            , m_exponent()
        {
        }
    
    namespace CalculatorApp::Common::Automation
{
    // These enum types are copied from the types available in
    // Windows::UI::Xaml::Automation::Peers in the RS3 SDK.
    // When this app switches to min version RS3, these custom
    // enums should be removed and the Windows types should be used
    // instead.
    // TODO - MSFT 12735088
public
    enum class AutomationNotificationKind
    {
        ItemAdded = 0,
        ItemRemoved = 1,
        ActionCompleted = 2,
        ActionAborted = 3,
        Other = 4
    };
    }
    
      Status DeleteFile(const std::string& fname) override {
    auto status_and_enc_path = EncodePath(fname);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::DeleteFile(status_and_enc_path.second);
  }
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    tableProperties
 * Signature: (J)Ljava/util/Map;
 */
jobject Java_org_rocksdb_CompactionJobInfo_tableProperties(
    JNIEnv* env, jclass, jlong jhandle) {
  auto* compact_job_info =
      reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  auto* map = &compact_job_info->table_properties;
  
  jobject jhash_map = rocksdb::HashMapJni::construct(
      env, static_cast<uint32_t>(map->size()));
  if (jhash_map == nullptr) {
    // exception occurred
    return nullptr;
  }
    }
    
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
 * Method:    allowTrivialMove
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_CompactionOptionsUniversal_allowTrivialMove(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  return opt->allow_trivial_move;
}
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    useDirectWrites
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_EnvOptions_useDirectWrites(
    JNIEnv*,  jobject, jlong jhandle) {
  return ENV_OPTIONS_GET(jhandle, use_direct_writes);
}
    
          const jbyteArray jcn_ba = reinterpret_cast<jbyteArray>(jcn);
      const jsize jcf_name_len = env->GetArrayLength(jcn_ba);
      if (env->EnsureLocalCapacity(jcf_name_len) != 0) {
        // out of memory
        env->DeleteLocalRef(jcn);
        env->ReleaseLongArrayElements(jcolumn_options_handles, jco, JNI_ABORT);
        env->ReleaseStringUTFChars(jdb_path, db_path);
        return nullptr;
      }
    
    #include 'rocksdb/trace_reader_writer.h'
#include 'rocksjni/jnicallback.h'
    
    /*
 * Class:     org_rocksdb_TransactionDB
 * Method:    disposeInternal
 * Signature: (J)V
 */
void Java_org_rocksdb_TransactionDB_disposeInternal(
    JNIEnv*, jobject, jlong jhandle) {
  auto* txn_db = reinterpret_cast<rocksdb::TransactionDB*>(jhandle);
  assert(txn_db != nullptr);
  delete txn_db;
}
    
    QVariant QmlUtils::binaryListToValue(const QVariantList &binaryList) {
  QByteArray value;
  foreach (QVariant v, binaryList) { value.append((unsigned char)v.toInt()); }
  return value;
}