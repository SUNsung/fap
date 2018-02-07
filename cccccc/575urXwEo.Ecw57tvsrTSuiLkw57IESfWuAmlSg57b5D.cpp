
        
        char* grpc_dump_slice(grpc_slice s, uint32_t flags) {
  return gpr_dump((const char*)GRPC_SLICE_START_PTR(s), GRPC_SLICE_LENGTH(s),
                  flags);
}
    
    #include 'test/core/end2end/end2end_tests.h'
    
    static void* zalloc_aligned(size_t size) {
  void* ptr = gpr_malloc_aligned(size, GPR_MAX_ALIGNMENT);
  memset(ptr, 0, size);
  return ptr;
}
    
    static void test_custom_allocs() {
  const gpr_allocation_functions default_fns = gpr_get_allocation_functions();
  intptr_t addr_to_free = 0;
  char* i;
  gpr_allocation_functions fns = {fake_malloc, nullptr, fake_realloc,
                                  fake_free};
    }
    
      // Sets *pos to the next stream position where parsing should continue.
  // Returns false if the stream ended too early.
  bool FinishStream(size_t* pos) {
    // Give back some bytes that we did not use.
    int unused_bytes_left = bits_left_ >> 3;
    while (unused_bytes_left-- > 0) {
      --pos_;
      // If we give back a 0 byte, we need to check if it was a 0xff/0x00 escape
      // sequence, and if yes, we need to give back one more byte.
      if (pos_ < next_marker_pos_ &&
          data_[pos_] == 0 && data_[pos_ - 1] == 0xff) {
        --pos_;
      }
    }
    if (pos_ > next_marker_pos_) {
      // Data ran out before the scan was complete.
      fprintf(stderr, 'Unexpected end of scan.\n');
      return false;
    }
    *pos = pos_;
    return true;
  }
    
    std::vector<float> LinearlyDownsample2x2(const std::vector<float>& rgb_in,
                                         const int width, const int height) {
  assert(rgb_in.size() == 3 * width * height);
  int w = (width + 1) / 2;
  int h = (height + 1) / 2;
  std::vector<float> rgb_out(3 * w * h);
  for (int y = 0, p = 0; y < h; ++y) {
    for (int x = 0; x < w; ++x) {
      for (int i = 0; i < 3; ++i, ++p) {
        rgb_out[p] = 0.0;
        for (int iy = 0; iy < 2; ++iy) {
          for (int ix = 0; ix < 2; ++ix) {
            int yy = std::min(height - 1, 2 * y + iy);
            int xx = std::min(width - 1, 2 * x + ix);
            rgb_out[p] += GammaToLinear(rgb_in[3 * (yy * width + xx) + i]);
          }
        }
        rgb_out[p] = LinearToGamma(0.25f * rgb_out[p]);
      }
    }
  }
  return rgb_out;
}
    
    void ComputeBlockIDCT(const coeff_t* block, uint8_t* out) {
  coeff_t colidcts[kDCTBlockSize];
  const int kColScale = 11;
  const int kColRound = 1 << (kColScale - 1);
  for (int x = 0; x < 8; ++x) {
    int colbuf[8] = { 0 };
    Compute1dIDCT(&block[x], 8, colbuf);
    for (int y = 0; y < 8; ++y) {
      colidcts[8 * y + x] = (colbuf[y] + kColRound) >> kColScale;
    }
  }
  const int kRowScale = 18;
  const int kRowRound = 257 << (kRowScale - 1);  // includes offset by 128
  for (int y = 0; y < 8; ++y) {
    const int rowidx = 8 * y;
    int rowbuf[8] = { 0 };
    Compute1dIDCT(&colidcts[rowidx], 1, rowbuf);
    for (int x = 0; x < 8; ++x) {
      out[rowidx + x] =
          std::max(0, std::min(255, (rowbuf[x] + kRowRound) >> kRowScale));
    }
  }
}
    
    // Returns the table width of the next 2nd level table, count is the histogram
// of bit lengths for the remaining symbols, len is the code length of the next
// processed symbol.
static inline int NextTableBitSize(const int* count, int len) {
  int left = 1 << (len - kJpegHuffmanRootTableBits);
  while (len < kJpegHuffmanMaxBitLength) {
    left -= count[len];
    if (left <= 0) break;
    ++len;
    left <<= 1;
  }
  return len - kJpegHuffmanRootTableBits;
}
    
      // If sharpen or blur are enabled, preprocesses image before downsampling U or
  // V to improve butteraugli score and/or reduce file size.
  // u_sharpen: sharpen the u channel in red areas to improve score (not as
  // effective as v_sharpen, blue is not so important)
  // u_blur: blur the u channel in some areas to reduce file size
  // v_sharpen: sharpen the v channel in red areas to improve score
  // v_blur: blur the v channel in some areas to reduce file size
  struct DownsampleConfig {
    // Default is YUV420.
    DownsampleConfig() : u_factor_x(2), u_factor_y(2),
                         v_factor_x(2), v_factor_y(2),
                         u_sharpen(true), u_blur(true),
                         v_sharpen(true), v_blur(true),
                         use_silver_screen(false) {}
    int u_factor_x;
    int u_factor_y;
    int v_factor_x;
    int v_factor_y;
    bool u_sharpen;
    bool u_blur;
    bool v_sharpen;
    bool v_blur;
    bool use_silver_screen;
  };
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
        // want to compute storage boundary for each feature
    // using variants of prefix sum scan
    boundary_.resize(nfeature);
    size_t accum_index_ = 0;
    size_t accum_row_ind_ = 0;
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      boundary_[fid].index_begin = accum_index_;
      boundary_[fid].row_ind_begin = accum_row_ind_;
      if (type_[fid] == kDenseColumn) {
        accum_index_ += static_cast<size_t>(nrow);
      } else {
        accum_index_ += feature_counts_[fid];
        accum_row_ind_ += feature_counts_[fid];
      }
      boundary_[fid].index_end = accum_index_;
      boundary_[fid].row_ind_end = accum_row_ind_;
    }
    
    
    {  std::string defaultUser_;
  std::string defaultPassword_;
};
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    std::string AbstractOptionHandler::toTagString() const
{
  std::string s;
  for (int i = 0; i < MAX_HELP_TAG; ++i) {
    if (tags_ & (1 << i)) {
      s += strHelpTag(i);
      s += ', ';
    }
  }
  if (!s.empty()) {
    s.resize(s.size() - 2);
  }
  return s;
}
    
    namespace {
class FindStoppedAllowedTier {
public:
  bool operator()(const std::shared_ptr<AnnounceTier>& tier) const
  {
    switch (tier->event) {
    case AnnounceTier::DOWNLOADING:
    case AnnounceTier::STOPPED:
    case AnnounceTier::COMPLETED:
    case AnnounceTier::SEEDING:
      return true;
    default:
      return false;
    }
  }
};
} // namespace
    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};
    
    
    {} // namespace aria2