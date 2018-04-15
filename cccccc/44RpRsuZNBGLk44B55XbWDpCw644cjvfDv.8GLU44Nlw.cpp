
        
        #ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
      /*
   * Return true iff this Vunit needs register allocation before it can be
   * emitted, either because it uses virtual registers or contains instructions
   * that must be lowered by xls.
   */
  bool needsRegAlloc() const;
    
    /*
 * Passes.
 */
void allocateRegisters(Vunit&, const Abi&);
void annotateSFUses(Vunit&);
void fuseBranches(Vunit&);
void optimizeCopies(Vunit&, const Abi&);
void optimizeExits(Vunit&);
void optimizeJmps(Vunit&);
void optimizePhis(Vunit&);
void removeDeadCode(Vunit&);
void removeTrivialNops(Vunit&);
void reuseImmq(Vunit&);
template<typename Folder> void foldImms(Vunit&);
void simplify(Vunit&);
    
    
    {}
    
    #ifndef incl_HPHP_JIT_TC_PROLOGUE_H_
#define incl_HPHP_JIT_TC_PROLOGUE_H_
    
      /**
   * Opens a process with given cwd and environment variables.
   *
   * The parameters 'created' and 'desired' describe the pipes that need to
   * be setup for the child process: 'created' contains created fd for child,
   * and 'desired' contains desired fd in child.
   *
   * The parameter env contains strings of the form <name>=<content>.
   */
  static pid_t proc_open(const char *cmd, const std::vector<int> &created,
                         const std::vector<int> &desired,
                         const char *cwd, const std::vector<std::string> &env);
    
    std::string Key1(int i) {
  char buf[100];
  snprintf(buf, sizeof(buf), 'my_key_%d', i);
  return buf;
}
    
    size_t BlockBuilder::CurrentSizeEstimate() const {
  return (buffer_.size() +                        // Raw data buffer
          restarts_.size() * sizeof(uint32_t) +   // Restart array
          sizeof(uint32_t));                      // Restart array length
}
    
    namespace leveldb {
    }
    
    std::string Histogram::ToString() const {
  std::string r;
  char buf[200];
  snprintf(buf, sizeof(buf),
           'Count: %.0f  Average: %.4f  StdDev: %.2f\n',
           num_, Average(), StandardDeviation());
  r.append(buf);
  snprintf(buf, sizeof(buf),
           'Min: %.4f  Median: %.4f  Max: %.4f\n',
           (num_ == 0.0 ? 0.0 : min_), Median(), max_);
  r.append(buf);
  r.append('------------------------------------------------------\n');
  const double mult = 100.0 / num_;
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    if (buckets_[b] <= 0.0) continue;
    sum += buckets_[b];
    snprintf(buf, sizeof(buf),
             '[ %7.0f, %7.0f ) %7.0f %7.3f%% %7.3f%% ',
             ((b == 0) ? 0.0 : kBucketLimit[b-1]),      // left
             kBucketLimit[b],                           // right
             buckets_[b],                               // count
             mult * buckets_[b],                        // percentage
             mult * sum);                               // cumulative percentage
    r.append(buf);
    }
    }
    
      ~Writer();
    
      virtual Status status() const { return Status::OK(); }
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf != EOF) {
      switch (ch_buf) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf;
          ch_buf = this->GetChar();
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
  explicit ConfigStreamReader(std::istream &fin) : fin(fin) {}
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    void OutputImageComponent::ToFloatPixels(float* out, int stride) const {
  assert(factor_x_ == 1);
  assert(factor_y_ == 1);
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      GetCoeffBlock(block_x, block_y, block);
      double blockd[kDCTBlockSize];
      for (int k = 0; k < kDCTBlockSize; ++k) {
        blockd[k] = block[k];
      }
      ComputeBlockIDCTDouble(blockd);
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = block_y * 8 + iy;
          int x = block_x * 8 + ix;
          if (y >= height_ || x >= width_) continue;
          out[(y * width_ + x) * stride] = static_cast<float>(blockd[8 * iy + ix] + 128.0);
        }
      }
    }
  }
}
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    
    {}  // namespace guetzli
    
    
    {}  // namespace guetzli
    
    #include <cmath>
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};