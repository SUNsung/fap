
        
        #undef cv_hal_add8u
#define cv_hal_add8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, add, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_add8s
#define cv_hal_add8s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s8, add, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_add16u
#define cv_hal_add16u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u16, add, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_add16s
#define cv_hal_add16s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s16, add, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_add32s
#define cv_hal_add32s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s32, add, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_add32f
#define cv_hal_add32f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f32, addf, src1, sz1, src2, sz2, dst, sz, w, h)
//#undef cv_hal_add64f
//#define cv_hal_add64f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f64, addf, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_sub8u
#define cv_hal_sub8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, sub, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_sub8s
#define cv_hal_sub8s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s8, sub, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_sub16u
#define cv_hal_sub16u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u16, sub, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_sub16s
#define cv_hal_sub16s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s16, sub, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_sub32s
#define cv_hal_sub32s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s32, sub, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_sub32f
#define cv_hal_sub32f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f32, subf, src1, sz1, src2, sz2, dst, sz, w, h)
//#undef cv_hal_sub64f
//#define cv_hal_sub64f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f64, subf, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_max8u
#define cv_hal_max8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, max, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_max8s
#define cv_hal_max8s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s8, max, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_max16u
#define cv_hal_max16u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u16, max, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_max16s
#define cv_hal_max16s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s16, max, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_max32s
#define cv_hal_max32s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s32, max, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_max32f
#define cv_hal_max32f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f32, max, src1, sz1, src2, sz2, dst, sz, w, h)
//#undef cv_hal_max64f
//#define cv_hal_max64f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f64, max, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_min8u
#define cv_hal_min8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, min, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_min8s
#define cv_hal_min8s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s8, min, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_min16u
#define cv_hal_min16u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u16, min, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_min16s
#define cv_hal_min16s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s16, min, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_min32s
#define cv_hal_min32s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s32, min, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_min32f
#define cv_hal_min32f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f32, min, src1, sz1, src2, sz2, dst, sz, w, h)
//#undef cv_hal_min64f
//#define cv_hal_min64f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f64, min, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_absdiff8u
#define cv_hal_absdiff8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_absdiff8s
#define cv_hal_absdiff8s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s8, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_absdiff16u
#define cv_hal_absdiff16u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u16, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_absdiff16s
#define cv_hal_absdiff16s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s16, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_absdiff32s
#define cv_hal_absdiff32s(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::s32, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_absdiff32f
#define cv_hal_absdiff32f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f32, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
//#undef cv_hal_absdiff64f
//#define cv_hal_absdiff64f(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::f64, absDiff, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_and8u
#define cv_hal_and8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, bitwiseAnd, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_or8u
#define cv_hal_or8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, bitwiseOr, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_xor8u
#define cv_hal_xor8u(src1, sz1, src2, sz2, dst, sz, w, h) TEGRA_BINARYOP(CAROTENE_NS::u8, bitwiseXor, src1, sz1, src2, sz2, dst, sz, w, h)
#undef cv_hal_not8u
#define cv_hal_not8u(src1, sz1, dst, sz, w, h) TEGRA_UNARYOP(CAROTENE_NS::u8, bitwiseNot, src1, sz1, dst, sz, w, h)
    
        typedef int8_t   s8;
    typedef uint8_t  u8;
    typedef int16_t  s16;
    typedef uint16_t u16;
    typedef int32_t  s32;
    typedef uint32_t u32;
    typedef float    f32;
    typedef int64_t  s64;
    typedef uint64_t u64;
    typedef double   f64;
    
        void operator() (const typename VecTraits<T>::vec128 & v_src0,
                     const typename VecTraits<T>::vec128 & v_src1,
                     typename VecTraits<T>::vec128 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vrl, vrh;
        wideAdd(vmovl( vget_low(v_src0)), vmovl( vget_low(v_src1)), vrl);
        wideAdd(vmovl(vget_high(v_src0)), vmovl(vget_high(v_src1)), vrh);
    }
    
    #include <cstdlib>
#include <iostream>
    
    namespace CAROTENE_NS { namespace internal {
    }
    }
    
    typedef void (* rshiftConstFunc)(const Size2D &size,
                                const s16 * srcBase, ptrdiff_t srcStride,
                                u8 * dstBase, ptrdiff_t dstStride,
                                CONVERT_POLICY cpolicy);
    
    
    {
    {
    {            vst1_u16(dst + x, ls);
        }
        for (s32 h = 0; h < cn; ++h)
        {
            u32* ln = lane + h;
            u16* dt = dst + h;
            for (size_t k = x; k < colsn; k += cn)
            {
                dt[k] = (u16)((ln[k-2*cn] + ln[k+2*cn] + 4*(ln[k-cn] + ln[k+cn]) + 6*ln[k] + (1<<7))>>8);
            }
        }
    }
#else
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)borderValue;
    (void)borderMargin;
#endif
}
    
    
    { private:
  CensusContext context_;
  // Metadata elements for tracing and census stats data.
  grpc_linked_mdelem stats_bin_;
  grpc_linked_mdelem tracing_bin_;
  // Client method.
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // The recv trailing metadata callbacks.
  grpc_metadata_batch* recv_trailing_metadata_;
  grpc_closure* initial_on_done_recv_trailing_metadata_;
  grpc_closure on_done_recv_trailing_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  // Start time (for measuring latency).
  absl::Time start_time_;
  // Server elapsed time in nanoseconds.
  uint64_t elapsed_time_;
  // The received message--may be null.
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  // Number of messages in this RPC.
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference when adding trace context
  // metatdata to outgoing message.
  char tracing_buf_[kMaxTraceContextLen];
};
    
    // Deserialize the incoming SpanContext and generate a new server context based
// on that. This new span will never be a root span. This should only be called
// with a blank CensusContext as it overwrites it.
void GenerateServerContext(absl::string_view tracing, absl::string_view stats,
                           absl::string_view primary_role,
                           absl::string_view method, CensusContext* context);
    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    #ifdef GPR_APPLE
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    #endif  // GRPC_INTERNAL_CPP_THREAD_POOL_INTERFACE_H

    
    
    {    Rational Sinh(Rational const& rat);
    Rational Cosh(Rational const& rat);
    Rational Tanh(Rational const& rat);
    Rational ASinh(Rational const& rat);
    Rational ACosh(Rational const& rat);
    Rational ATanh(Rational const& rat);
}

    
        try
    {
        powrat(&baseRat, powRat, RATIONAL_BASE, RATIONAL_PRECISION);
        destroyrat(powRat);
    }
    catch (uint32_t error)
    {
        destroyrat(baseRat);
        destroyrat(powRat);
        throw(error);
    }
    
        auto operandCommand = std::make_shared<COpndCommand>(commands, fNegative, fDecimal, fSciFmt);
    operandCommand->Initialize(rat);
    int iCommandEnd = AddCommand(operandCommand);
    m_lastOpStartIndex = IchAddSzToEquationSz(numStr, iCommandEnd);
    
        Number::Number(PNUMBER p) noexcept
        : m_sign{ p->sign }
        , m_exp{ p->exp }
        , m_mantissa{}
    {
        m_mantissa.reserve(p->cdigit);
        copy(p->mant, p->mant + p->cdigit, back_inserter(m_mantissa));
    }
    
    unsigned int CalculatorHistory::AddToHistory(
    _In_ shared_ptr<CalculatorVector<pair<wstring, int>>> const& tokens,
    _In_ shared_ptr<CalculatorVector<shared_ptr<IExpressionCommand>>> const& commands,
    _In_ wstring_view result)
{
    unsigned int addedIndex;
    wstring generatedExpression;
    shared_ptr<HISTORYITEM> spHistoryItem = make_shared<HISTORYITEM>();
    }
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
            void Clear();
        bool IsEmpty()
        {
            return value.empty();
        }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetHistoryClearedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::HistoryCleared, AutomationNotificationKind::ItemRemoved, AutomationNotificationProcessing::MostRecent);
}
    
    
    {            int32_t groupNum  = 0;
            int32_t numDigits = 0;
            UChar32 nextChar = utext_current32(replacement);
            if (nextChar == LEFTBRACKET) {
                // Scan for a Named Capture Group, ${name}.
                UnicodeString groupName;
                utext_next32(replacement);
                while(U_SUCCESS(status) && nextChar != RIGHTBRACKET) {
                    nextChar = utext_next32(replacement);
                    if (nextChar == U_SENTINEL) {
                        status = U_REGEX_INVALID_CAPTURE_GROUP_NAME;
                    } else if ((nextChar >= 0x41 && nextChar <= 0x5a) ||       // A..Z
                               (nextChar >= 0x61 && nextChar <= 0x7a) ||       // a..z
                               (nextChar >= 0x31 && nextChar <= 0x39)) {       // 0..9
                        groupName.append(nextChar);
                    } else if (nextChar == RIGHTBRACKET) {
                        groupNum = uhash_geti(fPattern->fNamedCaptureMap, &groupName);
                        if (groupNum == 0) {
                            status = U_REGEX_INVALID_CAPTURE_GROUP_NAME;
                        }
                    } else {
                        // Character was something other than a name char or a closing '}'
                        status = U_REGEX_INVALID_CAPTURE_GROUP_NAME;
                    }
                }
                        
            } else if (u_isdigit(nextChar)) {
                // $n    Scan for a capture group number
                int32_t numCaptureGroups = fPattern->fGroupMap->size();
                for (;;) {
                    nextChar = UTEXT_CURRENT32(replacement);
                    if (nextChar == U_SENTINEL) {
                        break;
                    }
                    if (u_isdigit(nextChar) == FALSE) {
                        break;
                    }
                    int32_t nextDigitVal = u_charDigitValue(nextChar);
                    if (groupNum*10 + nextDigitVal > numCaptureGroups) {
                        // Don't consume the next digit if it makes the capture group number too big.
                        if (numDigits == 0) {
                            status = U_INDEX_OUTOFBOUNDS_ERROR;
                        }
                        break;
                    }
                    (void)UTEXT_NEXT32(replacement);
                    groupNum=groupNum*10 + nextDigitVal; 
                    ++numDigits;
                }
            } else {
                // $ not followed by capture group name or number.
                status = U_REGEX_INVALID_CAPTURE_GROUP_NAME;
            }
    
    Collator &
RuleBasedCollator::setMaxVariable(UColReorderCode group, UErrorCode &errorCode) {
    if(U_FAILURE(errorCode)) { return *this; }
    // Convert the reorder code into a MaxVariable number, or UCOL_DEFAULT=-1.
    int32_t value;
    if(group == UCOL_REORDER_CODE_DEFAULT) {
        value = UCOL_DEFAULT;
    } else if(UCOL_REORDER_CODE_FIRST <= group && group <= UCOL_REORDER_CODE_CURRENCY) {
        value = group - UCOL_REORDER_CODE_FIRST;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    CollationSettings::MaxVariable oldValue = settings->getMaxVariable();
    if(value == oldValue) {
        setAttributeExplicitly(ATTR_VARIABLE_TOP);
        return *this;
    }
    const CollationSettings &defaultSettings = getDefaultSettings();
    if(settings == &defaultSettings) {
        if(value == UCOL_DEFAULT) {
            setAttributeDefault(ATTR_VARIABLE_TOP);
            return *this;
        }
    }
    CollationSettings *ownedSettings = SharedObject::copyOnWrite(settings);
    if(ownedSettings == NULL) {
        errorCode = U_MEMORY_ALLOCATION_ERROR;
        return *this;
    }
    }
    
    ScientificNumberFormatter *ScientificNumberFormatter::createInstance(
            DecimalFormat *fmtToAdopt,
            Style *styleToAdopt,
            UErrorCode &status) {
    LocalPointer<DecimalFormat> fmt(fmtToAdopt);
    LocalPointer<Style> style(styleToAdopt);
    if (U_FAILURE(status)) {
        return NULL;
    }
    ScientificNumberFormatter *result =
            new ScientificNumberFormatter(
                    fmt.getAlias(),
                    style.getAlias(),
                    status);
    if (result == NULL) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return NULL;
    }
    fmt.orphan();
    style.orphan();
    if (U_FAILURE(status)) {
        delete result;
        return NULL;
    }
    return result;
}
    
    int32_t SearchIterator::getMatchedLength() const
{
    return m_search_->matchedLength;
}
    
void SearchIterator::getMatchedText(UnicodeString &result) const
{
    int32_t matchedindex  = m_search_->matchedIndex;
    int32_t     matchedlength = m_search_->matchedLength;
    if (matchedindex != USEARCH_DONE && matchedlength != 0) {
        result.setTo(m_search_->text + matchedindex, matchedlength); 
    }
    else {
        result.remove();
    }
}
    
void SearchIterator::setBreakIterator(BreakIterator *breakiter, 
                                      UErrorCode &status)
{
    if (U_SUCCESS(status)) {
#if 0
        m_search_->breakIter = NULL;
        // the c++ breakiterator may not make use of ubreakiterator.
        // so we'll have to keep track of it ourselves.
#else
        // Well, gee... the Constructors that take a BreakIterator
        // all cast the BreakIterator to a UBreakIterator and
        // pass it to the corresponding usearch_openFromXXX
        // routine, so there's no reason not to do this.
        //
        // Besides, a UBreakIterator is a BreakIterator, so
        // any subclass of BreakIterator should work fine here...
        m_search_->breakIter = (UBreakIterator *) breakiter;
#endif
        
        m_breakiterator_ = breakiter;
    }
}
    
const BreakIterator * SearchIterator::getBreakIterator(void) const
{
    return m_breakiterator_;
}
    
    /**
 * UnicodeReplacer API
 */
UnicodeString& StringMatcher::toReplacerPattern(UnicodeString& rule,
                                                UBool /*escapeUnprintable*/) const {
    // assert(segmentNumber > 0);
    rule.truncate(0);
    rule.append((UChar)0x0024 /*$*/);
    ICU_Utility::appendNumber(rule, segmentNumber, 10, 1);
    return rule;
}
    
      /*
   * @brief a helper variable for keeping track of the posix tar archive.
   *
   * This variable is the absolute location of the tar archive created from
   * tar'ing all of the carved files from the carve temp dir.
   */
  boost::filesystem::path archivePath_;
    
        // For each key requested by the parser, add a property tree reference.
    std::map<std::string, JSON> parser_config;
    for (const auto& key : parser->keys()) {
      if (obj.HasMember(key) && !obj[key].IsNull()) {
        if (!obj[key].IsArray() && !obj[key].IsObject()) {
          LOG(WARNING) << 'Error config ' << key
                       << ' should be an array or object';
          continue;
        }
    }
    }
    
      // Fail the first config load.
  plugin->fail_ = true;
    
    fs::path getConfDirPathImpl() {
  char const* kEnvVarName = 'TEST_CONF_FILES_DIR';
  auto const value_opt = osquery::getEnvVar(kEnvVarName);
  EXPECT_TRUE(static_cast<bool>(value_opt))
      << 'Env var ' << boost::io::quoted(kEnvVarName) << ' was not found, '
      << ' looks like cxx_test argument 'env' is not set up.';
  return fs::path(value_opt.get());
}
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::putInt32(
    const std::string& domain, const std::string& key, const int32_t value) {
  return putValue(domain, key, value);
}
    
      /**
   * @brief Attach a table at runtime.
   *
   * The SQL implementation plugin may need to manage how virtual tables are
   * attached at run time. In the case of SQLite where a single DB object is
   * managed, tables are enumerated and attached during initialization.
   */
  virtual Status attach(const std::string& /*name*/) {
    return Status::success();
  }
    
    Status WriteBatchBase::SingleDelete(ColumnFamilyHandle* column_family,
                                    const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(column_family, key_slice);
}
    
    class WriteCallback {
 public:
  virtual ~WriteCallback() {}
    }
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
    using namespace rocksdb;
    
      // destroy and open DB
  DB* db;
  Status s = DestroyDB(kDBPath, Options(db_opt, cf_descs[0].options));
  assert(s.ok());
  s = DB::Open(Options(db_opt, cf_descs[0].options), kDBPath, &db);
  assert(s.ok());
    
    
    {}  // namespace rocksdb

    
    #include <string>
#include 'rocksdb/status.h'
    
      auto* checkpoint = reinterpret_cast<rocksdb::Checkpoint*>(jcheckpoint_handle);
  rocksdb::Status s = checkpoint->CreateCheckpoint(checkpoint_path);
    
    void Spline1dSeg::SetSplineFunc(const PolynomialXd& spline_func) {
  spline_func_ = spline_func;
  derivative_ = PolynomialXd::DerivedFrom(spline_func_);
  second_order_derivative_ = PolynomialXd::DerivedFrom(derivative_);
  third_order_derivative_ = PolynomialXd::DerivedFrom(second_order_derivative_);
}
    
    SplineSegKernel::SplineSegKernel() {
  const int reserved_num_params = reserved_order_ + 1;
  CalculateFx(reserved_num_params);
  CalculateDerivative(reserved_num_params);
  CalculateSecondOrderDerivative(reserved_num_params);
  CalculateThirdOrderDerivative(reserved_num_params);
}
    
    // config detail: {'name': 'torque_input', 'offset': 0.0, 'precision': 0.001,
// 'len': 32, 'is_signed_var': True, 'physical_range':
// '[-2147483.648|2147483.647]', 'bit': 39, 'type': 'double', 'order':
// 'motorola', 'physical_unit': 'N-m'}
double Brakemotorrpt372::torque_input(const std::uint8_t* bytes,
                                      int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }
    
    void Latlonheadingrpt82::Parse(const std::uint8_t* bytes, int32_t length,
                               ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_lat_lon_heading_rpt_82()->set_heading(
      heading(bytes, length));
  chassis->mutable_gem()
      ->mutable_lat_lon_heading_rpt_82()
      ->set_longitude_seconds(longitude_seconds(bytes, length));
  chassis->mutable_gem()
      ->mutable_lat_lon_heading_rpt_82()
      ->set_longitude_minutes(longitude_minutes(bytes, length));
  chassis->mutable_gem()
      ->mutable_lat_lon_heading_rpt_82()
      ->set_longitude_degrees(longitude_degrees(bytes, length));
  chassis->mutable_gem()
      ->mutable_lat_lon_heading_rpt_82()
      ->set_latitude_seconds(latitude_seconds(bytes, length));
  chassis->mutable_gem()
      ->mutable_lat_lon_heading_rpt_82()
      ->set_latitude_minutes(latitude_minutes(bytes, length));
  chassis->mutable_gem()
      ->mutable_lat_lon_heading_rpt_82()
      ->set_latitude_degrees(latitude_degrees(bytes, length));
}