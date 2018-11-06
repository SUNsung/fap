
        
        // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    #endif  // CHECK_H_

    
    // Parses 'str' for a double.  If successful, writes the result to *value and
// returns true; otherwise leaves *value unchanged and returns false.
bool ParseDouble(const std::string& src_text, const char* str, double* value) {
  // Parses the environment variable as a decimal integer.
  char* end = nullptr;
  const double double_value = strtod(str, &end);  // NOLINT
    }
    
    namespace benchmark {
    }
    
    namespace benchmark {
namespace internal {
    }
    }
    
    void JSONReporter::ReportRuns(std::vector<Run> const& reports) {
  if (reports.empty()) {
    return;
  }
  std::string indent(4, ' ');
  std::ostream& out = GetOutputStream();
  if (!first_report_) {
    out << ',\n';
  }
  first_report_ = false;
    }
    
    inline bool Regex::Match(const std::string& str) {
  if (!init_) {
    return false;
  }
  return regexec(&re_, str.c_str(), 0, nullptr, 0) == 0;
}
#endif
    
    #include <cerrno>
#include <cstdlib>
#include <ctime>
    
      double CompareBlock(const OutputImage& img,
                      int off_x, int off_y) const override;
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    namespace guetzli {
    }
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
    #include <assert.h>
#include <string.h>
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    #define VERIFY_INPUT(var, low, high, code)                              \
  if (var < low || var > high) {                                        \
    fprintf(stderr, 'Invalid %s: %d\n', #var, static_cast<int>(var));   \
    jpg->error = JPEG_INVALID_ ## code;                                 \
        return false;                                                   \
  }
    
    
    {}  // namespace guetzli