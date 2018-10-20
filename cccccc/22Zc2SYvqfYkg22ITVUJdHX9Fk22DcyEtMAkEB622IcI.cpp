
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    private:
    PlatformStyle(const QString &name, bool imagesOnButtons, bool colorizeIcons, bool useExtraSpacing);
    
    #endif // BITCOIN_QT_QVALUECOMBOBOX_H

    
    // Verify that difficulty is 1.0 for an empty chain.
BOOST_AUTO_TEST_CASE(get_difficulty_for_null_tip)
{
    double difficulty = GetDifficulty(nullptr);
    RejectDifficultyMismatch(difficulty, 1.0);
}
    
    IntSimdMatrixSSE::IntSimdMatrixSSE() {
#ifdef __SSE4_1__
  partial_funcs_ = {PartialMatrixDotVector1};
#endif  // __SSE4_1__
}
    
    #ifndef GRAPHICS_DISABLED
    
    namespace tesseract {
    }
    
       static size_type length(const char_type* p) 
   { 
      return (std::wcslen)((const wchar_t*)p); 
   }
    
    
    
       const re_repeat* rep = pmp->rep;
   std::size_t count = pmp->count;
   pstate = rep->next.p;
   const re_set_long<m_type>* set = static_cast<const re_set_long<m_type>*>(pstate);
   position = pmp->last_position;
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         basic_regex_creator.cpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Declares template class basic_regex_creator which fills in
  *                the data members of a regex_data object.
  */
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex.cpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Declares boost::basic_regex<> and associated
  *                functions and classes. This header is the main
  *                entry point for the template regex code.
  */
    
    
namespace boost{
    }
    
    
namespace boost{
    }
    
    #endif // partial overload
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1>
inline std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s)
{
   return regex_split(out, s, BOOST_REGEX_DETAIL_NS::get_default_expression(charT(0)), match_default, UINT_MAX);
}
    
      // Copy constructor if different value type - use getters and setters to
  // perform conversion
  template <typename T2>
  XGBOOST_DEVICE explicit GradientPairInternal(const GradientPairInternal<T2> &g) {
    SetGrad(g.GetGrad());
    SetHess(g.GetHess());
  }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi_) {
    fi_.open(fname);
    if (fi_.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator() {
    fi_.close();
  }
    }
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    namespace guetzli {
    }
    
    #include 'guetzli/output_image.h'
    
    // Decodes one 8x8 block of DCT coefficients from the bit stream.
bool DecodeDCTBlock(const HuffmanTableEntry* dc_huff,
                    const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* last_dc_coeff,
                    coeff_t* coeffs) {
  int s;
  int r;
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    s = ReadSymbol(dc_huff, br);
    if (s >= kJpegDCAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for DC coefficient.\n', s);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    if (s > 0) {
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
    }
    s += *last_dc_coeff;
    const int dc_coeff = SignedLeftshift(s, Al);
    coeffs[0] = dc_coeff;
    if (dc_coeff != coeffs[0]) {
      fprintf(stderr, 'Invalid DC coefficient %d\n', dc_coeff);
      jpg->error = JPEG_NON_REPRESENTABLE_DC_COEFF;
      return false;
    }
    *last_dc_coeff = s;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  if (*eobrun > 0) {
    --(*eobrun);
    return true;
  }
  for (int k = Ss; k <= Se; k++) {
    s = ReadSymbol(ac_huff, br);
    if (s >= kJpegHuffmanAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
              s, k);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    r = s >> 4;
    s &= 15;
    if (s > 0) {
      k += r;
      if (k > Se) {
        fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                k, Ss, Se);
        jpg->error = JPEG_OUT_OF_BAND_COEFF;
        return false;
      }
      if (s + Al >= kJpegDCAlphabetSize) {
        fprintf(stderr, 'Out of range AC coefficient value: s=%d Al=%d k=%d\n',
                s, Al, k);
        jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
        return false;
      }
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
      coeffs[kJPEGNaturalOrder[k]] = SignedLeftshift(s, Al);
    } else if (r == 15) {
      k += 15;
    } else {
      *eobrun = 1 << r;
      if (r > 0) {
        if (!eobrun_allowed) {
          fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
          jpg->error = JPEG_EOB_RUN_TOO_LONG;
          return false;
        }
        *eobrun += br->ReadBits(r);
      }
      break;
    }
  }
  --(*eobrun);
  return true;
}
    
    void ConsoleReporter::ReportRuns(const std::vector<Run>& reports) {
  for (const auto& run : reports) {
    // print the header:
    // --- if none was printed yet
    bool print_header = !printed_header_;
    // --- or if the format is tabular and this run
    //     has different fields from the prev header
    print_header |= (output_options_ & OO_Tabular) &&
                    (!internal::SameNames(run.counters, prev_counters_));
    if (print_header) {
      printed_header_ = true;
      prev_counters_ = run.counters;
      PrintHeader(run);
    }
    // As an alternative to printing the headers like this, we could sort
    // the benchmarks by header and then print. But this would require
    // waiting for the full results before printing, or printing twice.
    PrintRunData(run);
  }
}
    
      std::string walltime_value = LocalDateTimeString();
  out << indent << FormatKV('date', walltime_value) << ',\n';
    
    std::string FakeCanClient::GetErrorString(const int32_t /*status*/) {
  return '';
}
    
      /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  std::string GetErrorString(const int32_t status) override;
    
    
    {  SocketCanClientRaw socket_can_client;
  EXPECT_TRUE(socket_can_client.Init(param));
  EXPECT_EQ(socket_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(socket_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(socket_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(socket_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  socket_can_client.Stop();
}
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    /**
 * @class Byte
 * @brief The class of one byte, which is 8 bits.
 *        It includes some operations on one byte.
 */
class Byte {
 public:
  /**
   * @brief Constructor which takes a pointer to a one-byte unsigned integer.
   * @param value The pointer to a one-byte unsigned integer for construction.
   */
  explicit Byte(const uint8_t *value);
    }
    
    
    {  EXPECT_TRUE(value.is_bit_1(0));
  EXPECT_TRUE(value.is_bit_1(1));
  EXPECT_FALSE(value.is_bit_1(3));
  EXPECT_TRUE(value.is_bit_1(6));
  EXPECT_FALSE(value.is_bit_1(7));
}
    
    /**
 * @file
 */
    
    // Sensor gflags
DECLARE_double(sensor_freq);