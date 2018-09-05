
        
        
    {}  // namespace tesseract.
    
    #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
    #include 'intsimdmatrixsse.h'
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    namespace tesseract {
    }
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // A list of all possible parameter types used.
enum ParamType {
  VT_INTEGER,
  VT_BOOLEAN,
  VT_STRING,
  VT_DOUBLE
};
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    #include <sys/types.h>
#include <tuple>
    
      if (ini_fd != -1) {
    unlink(ini_path);
  }
    
    inline void ExecutionContext::setVirtualHost(const VirtualHost* vhost) {
  m_vhost = vhost;
}
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
      // If there are null bytes in the path, treat it as the empty string
  if (addpath != pathend) pathlen = 0;
    
     protected:
  char GetChar() override {
    return fin_.get();
  }
  /*! \brief to be implemented by child, check if end of stream */
  bool IsEnd() override {
    return fin_.eof();
  }
    
    namespace xgboost {
namespace common {
using MemoryFixSizeBuffer = rabit::utils::MemoryFixSizeBuffer;
using MemoryBufferStream = rabit::utils::MemoryBufferStream;
    }
    }
    
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
    
      bool DistanceOK(double target_mul) const override {
    return distance_ <= target_mul * target_distance_;
  }
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    
    {}  // namespace guetzli
    
    #include <cmath>
    
    
    {  std::vector<int> values;
  int precision;
  // The index of this quantization table as it was parsed from the input JPEG.
  // Each DQT marker segment contains an 'index' field, and we save this index
  // here. Valid values are 0 to 3.
  int index;
  // Set to true if this table is the last one within its marker segment.
  bool is_last;
};
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    namespace guetzli {
    }
    
    int NullOut(void* data, const uint8_t* buf, size_t count) {
  return count;
}
    
    
    {}  // namespace guetzli