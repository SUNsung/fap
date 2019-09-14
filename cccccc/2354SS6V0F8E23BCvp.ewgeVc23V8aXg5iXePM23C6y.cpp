
        
        
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
        strKey = 'spoon';
    BOOST_CHECK(obj.pushKV(strKey, false));
    
    
    {  delete iter;
  delete table;
  delete file;
  return Status::OK();
}
    
      void DoTest() {
    Random rnd(0);
    ASSERT_OK(OpenDB());
    for (size_t idx = 0; idx < kNumIterations; idx++) {
      int num_pre_sync = rnd.Uniform(kMaxNumValues);
      int num_post_sync = rnd.Uniform(kMaxNumValues);
    }
    }
    
      Kind GetKind() const;
  const Block* GetBlock() const;
    
    /*Some specific platforms may have optimized intrinsic or inline assembly
   versions of these functions which can substantially improve performance.
  We define macros for them to allow easy incorporation of these non-ANSI
   features.*/
    
    
static const vorbis_mapping_template _mapres_template_16_uncoupled[3]={
  { _map_nominal_u, _res_16u_0 }, /* 0 */
  { _map_nominal_u, _res_16u_1 }, /* 1 */
  { _map_nominal_u, _res_16u_2 }, /* 2 */
};

    
    static const vorbis_mapping_template _mapres_template_8_stereo[2]={
  { _map_nominal, _res_8s_0 }, /* 0 */
  { _map_nominal, _res_8s_1 }, /* 1 */
};
    
    #if CONFIG_EMULATE_HARDWARE
// When CONFIG_EMULATE_HARDWARE is 1 the transform performs a
// non-normative method to handle overflows. A stream that causes
// overflows  in the inverse transform is considered invalid in VP9,
// and a hardware implementer is free to choose any reasonable
// method to handle overflows. However to aid in hardware
// verification they can use a specific implementation of the
// WRAPLOW() macro below that is identical to their intended
// hardware implementation (and also use configure options to trigger
// the C-implementation of the transform).
//
// The particular WRAPLOW implementation below performs strict
// overflow wrapping to match common hardware implementations.
// bd of 8 uses trans_low with 16bits, need to remove 16bits
// bd of 10 uses trans_low with 18bits, need to remove 14bits
// bd of 12 uses trans_low with 20bits, need to remove 12bits
// bd of x uses trans_low with 8+x bits, need to remove 24-x bits
    
    // Constants:
//  for (int i = 1; i< 32; ++i)
//    printf('static const int cospi_%d_64 = %.0f;\n', i,
//           round(16384 * cos(i*M_PI/64)));
// Note: sin(k*Pi/64) = cos((32-k)*Pi/64)
static const tran_high_t cospi_1_64  = 16364;
static const tran_high_t cospi_2_64  = 16305;
static const tran_high_t cospi_3_64  = 16207;
static const tran_high_t cospi_4_64  = 16069;
static const tran_high_t cospi_5_64  = 15893;
static const tran_high_t cospi_6_64  = 15679;
static const tran_high_t cospi_7_64  = 15426;
static const tran_high_t cospi_8_64  = 15137;
static const tran_high_t cospi_9_64  = 14811;
static const tran_high_t cospi_10_64 = 14449;
static const tran_high_t cospi_11_64 = 14053;
static const tran_high_t cospi_12_64 = 13623;
static const tran_high_t cospi_13_64 = 13160;
static const tran_high_t cospi_14_64 = 12665;
static const tran_high_t cospi_15_64 = 12140;
static const tran_high_t cospi_16_64 = 11585;
static const tran_high_t cospi_17_64 = 11003;
static const tran_high_t cospi_18_64 = 10394;
static const tran_high_t cospi_19_64 = 9760;
static const tran_high_t cospi_20_64 = 9102;
static const tran_high_t cospi_21_64 = 8423;
static const tran_high_t cospi_22_64 = 7723;
static const tran_high_t cospi_23_64 = 7005;
static const tran_high_t cospi_24_64 = 6270;
static const tran_high_t cospi_25_64 = 5520;
static const tran_high_t cospi_26_64 = 4756;
static const tran_high_t cospi_27_64 = 3981;
static const tran_high_t cospi_28_64 = 3196;
static const tran_high_t cospi_29_64 = 2404;
static const tran_high_t cospi_30_64 = 1606;
static const tran_high_t cospi_31_64 = 804;
    
      env = getenv('VPX_SIMD_CAPS_MASK');
    
    
/**
 * \brief          Compute RSA prime moduli P, Q from public modulus N=PQ
 *                 and a pair of private and public key.
 *
 * \note           This is a 'static' helper function not operating on
 *                 an RSA context. Alternative implementations need not
 *                 overwrite it.
 *
 * \param N        RSA modulus N = PQ, with P, Q to be found
 * \param E        RSA public exponent
 * \param D        RSA private exponent
 * \param P        Pointer to MPI holding first prime factor of N on success
 * \param Q        Pointer to MPI holding second prime factor of N on success
 *
 * \return
 *                 - 0 if successful. In this case, P and Q constitute a
 *                   factorization of N.
 *                 - A non-zero error code otherwise.
 *
 * \note           It is neither checked that P, Q are prime nor that
 *                 D, E are modular inverses wrt. P-1 and Q-1. For that,
 *                 use the helper function \c mbedtls_rsa_validate_params.
 *
 */
int mbedtls_rsa_deduce_primes( mbedtls_mpi const *N, mbedtls_mpi const *E,
                               mbedtls_mpi const *D,
                               mbedtls_mpi *P, mbedtls_mpi *Q );
    
    class Env;
class Iterator;
class TableCache;
class VersionEdit;
    
    
    {
    {    if (!s.ok()) {
      assert(table == nullptr);
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
    
    namespace leveldb {
    }
    
    #include 'leveldb/env.h'
#include 'leveldb/export.h'
#include 'leveldb/status.h'
    
      void Lock() EXCLUSIVE_LOCK_FUNCTION() { mu_.lock(); }
  void Unlock() UNLOCK_FUNCTION() { mu_.unlock(); }
  void AssertHeld() ASSERT_EXCLUSIVE_LOCK() {}
    
    void Footer::EncodeTo(std::string* dst) const {
  const size_t original_size = dst->size();
  metaindex_handle_.EncodeTo(dst);
  index_handle_.EncodeTo(dst);
  dst->resize(2 * BlockHandle::kMaxEncodedLength);  // Padding
  PutFixed32(dst, static_cast<uint32_t>(kTableMagicNumber & 0xffffffffu));
  PutFixed32(dst, static_cast<uint32_t>(kTableMagicNumber >> 32));
  assert(dst->size() == original_size + kEncodedLength);
  (void)original_size;  // Disable unused variable warning.
}
    
    Iterator* Table::NewIterator(const ReadOptions& options) const {
  return NewTwoLevelIterator(
      rep_->index_block->NewIterator(rep_->options.comparator),
      &Table::BlockReader, const_cast<Table*>(this), options);
}
    
    
    {  const char* p = s.data();
  const char* limit = p + s.size();
  for (size_t i = 0; i < values.size(); i++) {
    ASSERT_TRUE(p < limit);
    uint64_t actual;
    const char* start = p;
    p = GetVarint64Ptr(p, limit, &actual);
    ASSERT_TRUE(p != nullptr);
    ASSERT_EQ(values[i], actual);
    ASSERT_EQ(VarintLength(actual), p - start);
  }
  ASSERT_EQ(p, limit);
}
    
    
    {    // TODO: Save application state and stop any background activity
}
    
    
    {    float posX = 0;
    auto lastChild = Children->GetAt(Children->Size - 1);
    float lastChildWidth = 0;
    if (Children->Size > 2 && ShouldPrioritizeLastItem())
    {
        lastChildWidth = lastChild->DesiredSize.Width;
    }
    for (auto item : Children)
    {
        auto widthAvailable = finalSize.Width - posX;
        if (item != lastChild)
        {
            widthAvailable -= lastChildWidth;
        }
        float itemWidth = item->DesiredSize.Width;
        if (widthAvailable > 0 && itemWidth <= widthAvailable)
        {
            // stack the items horizontally (left to right)
            item->Arrange(Rect(posX, 0, itemWidth, finalSize.Height));
            AutomationProperties::SetAccessibilityView(item, ::AccessibilityView::Content);
            posX += item->RenderSize.Width;
        }
        else
        {
            // Not display the item
            item->Arrange(Rect(0, 0, 0, 0));
            AutomationProperties::SetAccessibilityView(item, ::AccessibilityView::Raw);
        }
    }
    return finalSize;
}

    
    namespace UCM = UnitConversionManager;
    
    
    {            int command = nOpCode;
            switch (nOpCode)
            {
            case IDC_SIN:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandASIN) : IDC_SIN;
                spExpressionCommand = std::make_shared<CUnaryCommand>(static_cast<int>(angleOpCode), command);
                break;
            case IDC_COS:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandACOS) : IDC_COS;
                spExpressionCommand = std::make_shared<CUnaryCommand>(static_cast<int>(angleOpCode), command);
                break;
            case IDC_TAN:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandATAN) : IDC_TAN;
                spExpressionCommand = std::make_shared<CUnaryCommand>(static_cast<int>(angleOpCode), command);
                break;
            case IDC_SINH:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandASINH) : IDC_SINH;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            case IDC_COSH:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandACOSH) : IDC_COSH;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            case IDC_TANH:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandATANH) : IDC_TANH;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            case IDC_LN:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandPOWE) : IDC_LN;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            default:
                spExpressionCommand = std::make_shared<CUnaryCommand>(nOpCode);
            }
        }
    
    vector<shared_ptr<HISTORYITEM>> const& CalculatorHistory::GetHistory()
{
    return m_historyItems;
}
    
            void Clear();
        bool TryToggleSign(bool isIntegerMode, std::wstring_view maxNumStr);
        bool TryAddDigit(unsigned int value, uint32_t radix, bool isIntegerMode, std::wstring_view maxNumStr, int32_t wordBitWidth, int maxDigits);
        bool TryAddDecimalPt();
        bool HasDecimalPt();
        bool TryBeginExponent();
        void Backspace();
        void SetDecimalSymbol(wchar_t decSymbol);
        std::wstring ToString(uint32_t radix);
        Rational ToRational(uint32_t radix, int32_t precision);
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetNoRightParenthesisAddedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement,
        CalculatorActivityIds::NoParenthesisAdded,
        AutomationNotificationKind::ActionCompleted,
        AutomationNotificationProcessing::ImportantMostRecent);
}

    
        pt::ptree container;
    Status s =
        dockerApi('/containers/' + id + '/stats?stream=false', container);
    if (!s.ok()) {
      VLOG(1) << 'Error getting docker container ' << id << ': ' << s.what();
      continue;
    }
    
      if (toks.size() < 1) {
    LocalFree(sidString);
    return uid_default;
  }
    
    
    {      std::string cmd{''};
      auto s = getProcessCommandLine(
          proc_handle, cmd, static_cast<unsigned long>(proc.th32ProcessID));
      if (!s.ok()) {
        s = getProcessCommandLineLegacy(
            proc_handle, cmd, static_cast<unsigned long>(proc.th32ProcessID));
      }
      r['cmdline'] = cmd;
    }
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    
    {  if (name == '*') {
    // This is a multi-pack, expect the config plugin to have generated a
    // 'name': {pack-content} response similar to embedded pack content
    // within the configuration.
    for (const auto& pack : obj.GetObject()) {
      addSinglePack(pack.name.GetString(), pack.value);
    }
  } else {
    addSinglePack(name, obj);
  }
}
    
    Expected<std::vector<std::string>, DatabaseError> InMemoryDatabase::getKeys(
    const std::string& domain, const std::string& prefix) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  return storage_iter->second->getKeys(prefix);
}
    
      // This method bypass type validation and will silently update value
  // even if type was changed (e.g int->string)
  ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) override;
    
     private:
  rocksdb::Options getOptions();
  std::vector<rocksdb::ColumnFamilyDescriptor> createDefaultColumnFamilies(
      const rocksdb::Options& options);
  ExpectedSuccess<DatabaseError> openInternal(
      const rocksdb::Options& options, const boost::filesystem::path& path);
  Expected<std::string, DatabaseError> getRawBytesInternal(
      Handle* handle, const std::string& key);
  ExpectedSuccess<DatabaseError> putRawBytesInternal(Handle* handle,
                                                     const std::string& key,
                                                     const std::string& value);
  ExpectedSuccess<DatabaseError> checkDbConnection();
  Expected<std::shared_ptr<Handle>, DatabaseError> getHandle(
      const std::string& domain);
    
      Status RenameFile(const std::string& src, const std::string& dst) override {
    PERF_TIMER_GUARD(env_rename_file_nanos);
    return EnvWrapper::RenameFile(src, dst);
  }
    
      bool PartialMergeMulti(const Slice& /*key*/,
                         const std::deque<Slice>& operand_list,
                         std::string* new_value,
                         Logger* /*logger*/) const override {
    Slice max;
    for (const auto& operand : operand_list) {
      if (max.compare(operand) < 0) {
        max = operand;
      }
    }
    }
    
    
    { private:
  std::mutex mutex_;
};
    
    namespace rocksdb {
    }
    
    bool WriteController::IsStopped() const {
  return total_stopped_.load(std::memory_order_relaxed) > 0;
}
// This is inside DB mutex, so we can't sleep and need to minimize
// frequency to get time.
// If it turns out to be a performance issue, we can redesign the thread
// synchronization model here.
// The function trust caller will sleep micros returned.
uint64_t WriteController::GetDelay(Env* env, uint64_t num_bytes) {
  if (total_stopped_.load(std::memory_order_relaxed) > 0) {
    return 0;
  }
  if (total_delayed_.load(std::memory_order_relaxed) == 0) {
    return 0;
  }
    }
    
    #include <rocksdb/compaction_filter.h>
#include <rocksdb/db.h>
#include <rocksdb/merge_operator.h>
#include <rocksdb/options.h>
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = txn_db->Put(write_options, 'xyz', 'zzz');
    
      // Insert to page cache
  //
  // page_key   Identifier to identify a page uniquely across restarts
  // data       Page data
  // size       Size of the page
  virtual Status Insert(const Slice& key, const char* data,
                        const size_t size) = 0;
    
      // If true, an error is raised if the database already exists.
  // Default: false
  bool error_if_exists;
    
    namespace rocksdb {
    }
    
    
    
        // Constant parameters
    const auto FACE_CCN_DECREASE_FACTOR = 8.f;
    const std::string FACE_PROTOTXT{'face/pose_deploy.prototxt'};
    const std::string FACE_TRAINED_MODEL{'face/pose_iter_116000.caffemodel'};
    
        private:
        // PIMPL idiom
        // http://www.cppsamples.com/common-tasks/pimpl.html
        struct ImplGuiAdam;
        std::shared_ptr<ImplGuiAdam> spImpl;
    
        public:
        PersonIdExtractor(const float confidenceThreshold = 0.1f, const float inlierRatioThreshold = 0.5f,
                          const float distanceThreshold = 30.f, const int numberFramesToDeletePerson = 10);