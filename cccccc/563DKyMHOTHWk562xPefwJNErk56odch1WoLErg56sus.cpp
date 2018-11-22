
        
        #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
    // Extracts and converts 8x32-bit results from result, adding the bias from wi
// and scaling by scales, before storing in *v. Note that wi, scales and v are
// expected to contain 8 consecutive elements or num_out if less.
inline void ExtractResults(__m256i& result, __m256i& shift_id,
                           const int8_t*& wi, const double*& scales,
                           int num_out, double*& v) {
  for (int out = 0; out < num_out; ++out) {
    int32_t res =
#ifndef _MSC_VER
        _mm256_extract_epi32(result, 0)
#else
        // Workaround MSVC's ICE
        // _mm256_extract_epi32(X, Y) == ((int32_t*)&X)[Y]
        ((int32_t*)&result)[0]
#endif
        ;
    *v++ = (static_cast<double>(res) / INT8_MAX + *wi++) * *scales++;
    // Rotate the results in int32_t units, so the next result is ready.
    result = _mm256_permutevar8x32_epi32(result, shift_id);
  }
}
    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    #endif  // GRAPHICS_DISABLED
#endif  // TESSERACT_CCMAIN_PARAMSD_H_

    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf_ = this->GetChar()) != EOF) {
      switch (ch_buf_) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf_;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf_ = this->GetChar()) != EOF) {
      switch (ch_buf_) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf_;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf_ != EOF) {
      switch (ch_buf_) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf_ = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf_ = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf_ = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf_ = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf_;
          ch_buf_ = this->GetChar();
          break;
      }
    }
    if (tok->length() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
/*!
 * \brief an iterator use stream base, allows use all types of istream
 */
class ConfigStreamReader: public ConfigReaderBase {
 public:
  /*!
   * \brief constructor
   * \param fin istream input stream
   */
  explicit ConfigStreamReader(std::istream &fin) : fin_(fin) {}
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
          ASSERT_TRUE(input == output);
    
    /*!
 * \brief macro to check the call.
 */
#define CHECK_CALL(x)                           \
  if ((x) != 0) {                               \
    error(XGBGetLastError());                   \
  }
    
      /// The inotify file descriptor handle.
  std::atomic<int> inotify_handle_{-1};
    
    #include <gtest/gtest.h>
    
      int num_greetings = 10;
  greeter.SayManyHellos(name, num_greetings, [](const std::string &message) {
    std::cerr << 'Greeter received: ' << message << std::endl;
  });
    
      builder.Finish(orc);  // Serialize the root of the object.
    
    namespace flatbuffers {
    }
    
    #include 'monster_test_generated.h'
#include 'flatbuffers/grpc.h'
    
    template<typename T> const char *EnumName(T tval, const TypeTable *type_table) {
  if (!type_table || !type_table->names) return nullptr;
  auto i = LookupEnum(static_cast<int64_t>(tval), type_table->values,
                      type_table->num_elems);
  if (i >= 0 && i < static_cast<int64_t>(type_table->num_elems)) {
    return type_table->names[i];
  }
  return nullptr;
}
    
    #endif // STATICDISPATCH_H

    
    
    {        /* Drain the queue */
        for (auto &x : loopData->deferQueues[oldDeferQueue]) {
            x();
        }
        loopData->deferQueues[oldDeferQueue].clear();
    }
    
                /* Remove onAborted function if we reach the end */
            if (httpResponseData->offset == totalSize) {
                httpResponseData->onAborted = nullptr;
                /* Also remove onWritable so that we do not emit when draining behind the scenes. */
                httpResponseData->onWritable = nullptr;
            }
    
    
    {            return s;
        });
    
    namespace uWS {
    }
    
        static inline bool consumeContinuation(char *&src, unsigned int &length, WebSocketState<isServer> *wState, void *user) {
        if (wState->remainingBytes <= length) {
            if (isServer) {
                int n = wState->remainingBytes >> 2;
                unmaskInplace(src, src + n * 4, wState->mask);
                for (int i = 0, s = wState->remainingBytes % 4; i < s; i++) {
                    src[n * 4 + i] ^= wState->mask[i];
                }
            }
    }
    }