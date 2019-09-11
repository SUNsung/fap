
        
        namespace Ui {
    class SignVerifyMessageDialog;
}
    
    static int secp256k1_ecdsa_sig_recover(const secp256k1_ecmult_context *ctx, const secp256k1_scalar *sigr, const secp256k1_scalar* sigs, secp256k1_ge *pubkey, const secp256k1_scalar *message, int recid) {
    unsigned char brx[32];
    secp256k1_fe fx;
    secp256k1_ge x;
    secp256k1_gej xj;
    secp256k1_scalar rn, u1, u2;
    secp256k1_gej qj;
    int r;
    }
    
    bool ParseInt64(const std::string& str, int64_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtoll will not set errno if valid
    long long int n = strtoll(str.c_str(), &endp, 10);
    if(out) *out = (int64_t)n;
    // Note that strtoll returns a *long long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int64_t*.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int64_t>::min() &&
        n <= std::numeric_limits<int64_t>::max();
}
    
        add	rsp, STACK_SIZE
    
    Status FaultInjectionTestEnv::DropUnsyncedFileData() {
  Status s;
  MutexLock l(&mutex_);
  for (std::map<std::string, FileState>::const_iterator it =
           db_file_state_.begin();
       s.ok() && it != db_file_state_.end(); ++it) {
    const FileState& state = it->second;
    if (!state.IsFullySynced()) {
      s = state.DropUnsyncedData();
    }
  }
  return s;
}
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
                    buf_lock_t sindex_block(
                    super_block->expose_buf(),
                    super_block->get_sindex_block_id(),
                    access_t::write);
    
    template <typename T>
class TypeWithoutFormatter<T, kProtobuf> {
 public:
  static void PrintValue(const T& value, ::std::ostream* os) {
    const ::testing::internal::string short_str = value.ShortDebugString();
    const ::testing::internal::string pretty_str =
        short_str.length() <= kProtobufOneLinerMaxLength ?
        short_str : ('\n' + value.DebugString());
    *os << ('<' + pretty_str + '>');
  }
};
    
    
    {}  // namespace internal
    
    TYPED_TEST(FooTest, HasPropertyA) { ... }
    
    #include 'gtest/internal/gtest-string.h'
    
    namespace testing {
namespace internal {
    }
    }
    
    // The empty template list.
struct Templates0 {};
    
                        wchar_t groupingSymbolString[LocaleSettingBufferSize] = L'';
                    result = GetLocaleInfoEx(m_resolvedName.c_str(), LOCALE_STHOUSAND, groupingSymbolString, static_cast<int>(std::size(groupingSymbolString)));
                    if (result == 0)
                    {
                        throw std::runtime_error('Unexpected error while getting locale info');
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

    
    // Include the resource key ID from above into this vector to load it into memory for the engine to use
inline constexpr std::array<std::wstring_view, 120> g_sids = { SIDS_PLUS_MINUS,
                                                               SIDS_C,
                                                               SIDS_CE,
                                                               SIDS_BACKSPACE,
                                                               SIDS_DECIMAL_SEPARATOR,
                                                               SIDS_EMPTY_STRING,
                                                               SIDS_AND,
                                                               SIDS_OR,
                                                               SIDS_XOR,
                                                               SIDS_LSH,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDE,
                                                               SIDS_MULTIPLY,
                                                               SIDS_PLUS,
                                                               SIDS_MINUS,
                                                               SIDS_MOD,
                                                               SIDS_YROOT,
                                                               SIDS_POW_HAT,
                                                               SIDS_INT,
                                                               SIDS_ROL,
                                                               SIDS_ROR,
                                                               SIDS_NOT,
                                                               SIDS_SIN,
                                                               SIDS_COS,
                                                               SIDS_TAN,
                                                               SIDS_SINH,
                                                               SIDS_COSH,
                                                               SIDS_TANH,
                                                               SIDS_LN,
                                                               SIDS_LOG,
                                                               SIDS_SQRT,
                                                               SIDS_XPOW2,
                                                               SIDS_XPOW3,
                                                               SIDS_NFACTORIAL,
                                                               SIDS_RECIPROCAL,
                                                               SIDS_DMS,
                                                               SIDS_CUBEROOT,
                                                               SIDS_POWTEN,
                                                               SIDS_PERCENT,
                                                               SIDS_SCIENTIFIC_NOTATION,
                                                               SIDS_PI,
                                                               SIDS_EQUAL,
                                                               SIDS_MC,
                                                               SIDS_MR,
                                                               SIDS_MS,
                                                               SIDS_MPLUS,
                                                               SIDS_MMINUS,
                                                               SIDS_EXP,
                                                               SIDS_OPEN_PAREN,
                                                               SIDS_CLOSE_PAREN,
                                                               SIDS_0,
                                                               SIDS_1,
                                                               SIDS_2,
                                                               SIDS_3,
                                                               SIDS_4,
                                                               SIDS_5,
                                                               SIDS_6,
                                                               SIDS_7,
                                                               SIDS_8,
                                                               SIDS_9,
                                                               SIDS_A,
                                                               SIDS_B,
                                                               SIDS_C,
                                                               SIDS_D,
                                                               SIDS_E,
                                                               SIDS_F,
                                                               SIDS_FRAC,
                                                               SIDS_SIND,
                                                               SIDS_COSD,
                                                               SIDS_TAND,
                                                               SIDS_ASIND,
                                                               SIDS_ACOSD,
                                                               SIDS_ATAND,
                                                               SIDS_SINR,
                                                               SIDS_COSR,
                                                               SIDS_TANR,
                                                               SIDS_ASINR,
                                                               SIDS_ACOSR,
                                                               SIDS_ATANR,
                                                               SIDS_SING,
                                                               SIDS_COSG,
                                                               SIDS_TANG,
                                                               SIDS_ASING,
                                                               SIDS_ACOSG,
                                                               SIDS_ATANG,
                                                               SIDS_ASINH,
                                                               SIDS_ACOSH,
                                                               SIDS_ATANH,
                                                               SIDS_POWE,
                                                               SIDS_POWTEN2,
                                                               SIDS_SQRT2,
                                                               SIDS_SQR,
                                                               SIDS_CUBE,
                                                               SIDS_CUBERT,
                                                               SIDS_FACT,
                                                               SIDS_RECIPROC,
                                                               SIDS_DEGREES,
                                                               SIDS_NEGATE,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDEBYZERO,
                                                               SIDS_DOMAIN,
                                                               SIDS_UNDEFINED,
                                                               SIDS_POS_INFINITY,
                                                               SIDS_NEG_INFINITY,
                                                               SIDS_ABORTED,
                                                               SIDS_NOMEM,
                                                               SIDS_TOOMANY,
                                                               SIDS_OVERFLOW,
                                                               SIDS_NORESULT,
                                                               SIDS_INSUFFICIENT_DATA,
                                                               SIDS_ERR_UNK_CH,
                                                               SIDS_ERR_UNK_FN,
                                                               SIDS_ERR_UNEX_NUM,
                                                               SIDS_ERR_UNEX_CH,
                                                               SIDS_ERR_UNEX_SZ,
                                                               SIDS_ERR_MISMATCH_CLOSE,
                                                               SIDS_ERR_UNEX_END,
                                                               SIDS_ERR_SG_INV_ERROR,
                                                               SIDS_ERR_INPUT_OVERFLOW,
                                                               SIDS_ERR_OUTPUT_OVERFLOW };

    
        DUPRAT(pint, prat); // previous pint will get freed by this as well
    PRAT prat32 = i32torat(32);
    rshrat(&pint, prat32, radix, precision);
    intrat(&pint, radix, precision);
    andrat(&pint, rat_dword, radix, precision); // & 0xFFFFFFFF   (2 ^ 32 -1)
    uint32_t hi = rattoUi32(pint, radix, precision);
    
        class UnitConverterMock : public UnitConversionManager::IUnitConverter
    {
    public:
        UnitConverterMock();
        void Initialize() override;
        std::vector<UCM::Category> GetCategories() override;
        UCM::CategorySelectionInitializer SetCurrentCategory(const UCM::Category& input) override;
        UCM::Category GetCurrentCategory();
        void SetCurrentUnitTypes(const UCM::Unit& fromType, const UCM::Unit& toType) override;
        void SwitchActive(const std::wstring& newValue);
        std::wstring SaveUserPreferences() override;
        void RestoreUserPreferences(_In_ const std::wstring& userPreferences) override;
        void SendCommand(UCM::Command command) override;
        void SetViewModelCallback(const std::shared_ptr<UCM::IUnitConverterVMCallback>& newCallback) override;
        void SetViewModelCurrencyCallback(_In_ const std::shared_ptr<UCM::IViewModelCurrencyCallback>& /*newCallback*/) override
        {
        }
        void Calculate() override
        {
        }
        void ResetCategoriesAndRatios() override
        {
        }
        std::future<std::pair<bool, std::wstring>> RefreshCurrencyRatios() override
        {
            co_return std::make_pair(true, L'');
        }
    }
    
        for (size_t i = (fNegative ? 1 : 0); i < numStr.length(); i++)
    {
        if (numStr[i] == m_decimalSymbol)
        {
            IFT(commands->Append(IDC_PNT));
            if (!fSciFmt)
            {
                fDecimal = true;
            }
        }
        else if (numStr[i] == L'e')
        {
            IFT(commands->Append(IDC_EXP));
            fSciFmt = true;
        }
        else if (numStr[i] == L'-')
        {
            IFT(commands->Append(IDC_SIGN));
        }
        else if (numStr[i] == L'+')
        {
            // Ignore.
        }
        // Number
        else
        {
            int num = static_cast<int>(numStr[i]) - ASCII_0;
            num += IDC_0;
            IFT(commands->Append(num));
        }
    }
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
    namespace CalculatorApp::Common::Automation
{
    namespace CalculatorActivityIds
    {
        StringReference DisplayUpdated(L'DisplayUpdated');
        StringReference MaxDigitsReached(L'MaxDigitsReached');
        StringReference MemoryCleared(L'MemoryCleared');
        StringReference MemoryItemChanged(L'MemorySlotChanged');
        StringReference MemoryItemAdded(L'MemorySlotAdded');
        StringReference HistoryCleared(L'HistoryCleared');
        StringReference CategoryNameChanged(L'CategoryNameChanged');
        StringReference UpdateCurrencyRates(L'UpdateCurrencyRates');
        StringReference DisplayCopied(L'DisplayCopied');
        StringReference OpenParenthesisCountChanged(L'OpenParenthesisCountChanged');
        StringReference NoParenthesisAdded(L'NoParenthesisAdded');
    }
}
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
      fmap.PushBack(0, 'feat_0', 'i');
  fmap.PushBack(1, 'feat_1', 'q');
  fmap.PushBack(2, 'feat_2', 'int');
    
    SEXP XGBoosterGetAttrNames_R(SEXP handle) {
  SEXP out;
  R_API_BEGIN();
  bst_ulong len;
  const char **res;
  CHECK_CALL(XGBoosterGetAttrNames(R_ExternalPtrAddr(handle),
                                   &len, &res));
  if (len > 0) {
    out = PROTECT(allocVector(STRSXP, len));
    for (size_t i = 0; i < len; ++i) {
      SET_STRING_ELT(out, i, mkChar(res[i]));
    }
  } else {
    out = PROTECT(R_NilValue);
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}

    
    
/*! \brief handle to DMatrix */
typedef void *DMatrixHandle;  // NOLINT(*)
/*! \brief handle to Booster */
typedef void *BoosterHandle;  // NOLINT(*)
/*! \brief handle to a data iterator */
typedef void *DataIterHandle;  // NOLINT(*)
/*! \brief handle to a internal data holder. */
typedef void *DataHolderHandle;  // NOLINT(*)
    
    #if _MSC_VER >= 1800
  return lgamma(v);
#else
#pragma message('Warning: lgamma function was not available until VS2013'\
                ', poisson regression will be disabled')
  utils::Error('lgamma function was not available until VS2013');
  return static_cast<T>(1.0);
#endif  // _MSC_VER >= 1800
    
    /**
 * \class CompressedBufferWriter
 *
 * \brief Writes bit compressed symbols to a memory buffer. Use
 * CompressedIterator to read symbols back from buffer. Currently limited to a
 * maximum symbol size of 28 bits.
 *
 * \author  Rory
 * \date  7/9/2017
 */
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }