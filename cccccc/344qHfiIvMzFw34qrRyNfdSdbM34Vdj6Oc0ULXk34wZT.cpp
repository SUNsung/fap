
        
        // Reads the Start of Frame (SOF) marker segment and fills in *jpg with the
// parsed data.
bool ProcessSOF(const uint8_t* data, const size_t len,
                JpegReadMode mode, size_t* pos, JPEGData* jpg) {
  if (jpg->width != 0) {
    fprintf(stderr, 'Duplicate SOF marker.\n');
    jpg->error = JPEG_DUPLICATE_SOF;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(8);
  size_t marker_len = ReadUint16(data, pos);
  int precision = ReadUint8(data, pos);
  int height = ReadUint16(data, pos);
  int width = ReadUint16(data, pos);
  int num_components = ReadUint8(data, pos);
  VERIFY_INPUT(precision, 8, 8, PRECISION);
  VERIFY_INPUT(height, 1, 65535, HEIGHT);
  VERIFY_INPUT(width, 1, 65535, WIDTH);
  VERIFY_INPUT(num_components, 1, kMaxComponents, NUMCOMP);
  VERIFY_LEN(3 * num_components);
  jpg->height = height;
  jpg->width = width;
  jpg->components.resize(num_components);
    }
    
    std::vector<float> LinearlyAveragedLuma(const std::vector<float>& rgb) {
  assert(rgb.size() % 3 == 0);
  std::vector<float> y(rgb.size() / 3);
  for (size_t i = 0, p = 0; p < rgb.size(); ++i, p += 3) {
    y[i] = LinearToGamma(RGBToY(GammaToLinear(rgb[p + 0]),
                                GammaToLinear(rgb[p + 1]),
                                GammaToLinear(rgb[p + 2])));
  }
  return y;
}
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #include <cmath>
    
    // Computes out[x] = sum{kIDCTMatrix[8*x+u]*in[u*stride]; for u in [0..7]}
inline void Compute1dIDCT(const coeff_t* in, const int stride, int out[8]) {
  int tmp0, tmp1, tmp2, tmp3, tmp4;
    }
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    #include 'guetzli/jpeg_data.h'
    
    #include 'guetzli/jpeg_data.h'
    
    // Definition of error codes for parsing jpeg files.
    
    
    {  uint8_t bits;     // number of bits used for this symbol
  uint16_t value;   // symbol value or table offset
};
    
    
    {} // namespace rocksdb

    
    /// The Redis functionality (see http://redis.io/commands#list)
/// All functions may THROW a RedisListException
class RedisLists {
 public: // Constructors / Destructors
  /// Construct a new RedisLists database, with name/path of db.
  /// Will clear the database on open iff destructive is true (default false).
  /// Otherwise, it will restore saved changes.
  /// May throw RedisListException
  RedisLists(const std::string& db_path,
             Options options, bool destructive = false);
    }
    
    void UniversalCompactionPicker::SortedRun::Dump(char* out_buf,
                                                size_t out_buf_size,
                                                bool print_path) const {
  if (level == 0) {
    assert(file != nullptr);
    if (file->fd.GetPathId() == 0 || !print_path) {
      snprintf(out_buf, out_buf_size, 'file %' PRIu64, file->fd.GetNumber());
    } else {
      snprintf(out_buf, out_buf_size, 'file %' PRIu64
                                      '(path '
                                      '%' PRIu32 ')',
               file->fd.GetNumber(), file->fd.GetPathId());
    }
  } else {
    snprintf(out_buf, out_buf_size, 'level %d', level);
  }
}
    
    
    {    for (auto fl : {ci.input_files, ci.output_files}) {
      for (auto fn : fl) {
        auto it = ci.table_properties.find(fn);
        ASSERT_NE(it, ci.table_properties.end());
        auto tp = it->second;
        ASSERT_TRUE(tp != nullptr);
        ASSERT_EQ(tp->user_collected_properties.find('0')->second, '1');
      }
    }
  }
    
    void BlockIter::Seek(const Slice& target) {
  PERF_TIMER_GUARD(block_seek_nanos);
  if (data_ == nullptr) {  // Not init yet
    return;
  }
  uint32_t index = 0;
  bool ok = false;
  if (prefix_index_) {
    ok = PrefixSeek(target, &index);
  } else {
    ok = BinarySeek(target, 0, num_restarts_ - 1, &index);
  }
    }
    
    
    {}  // namespace rocksdb
    
      void ResetFeatureSet() {
    assert(Inputs.empty());
    memset(InputSizesPerFeature, 0, sizeof(InputSizesPerFeature));
    memset(SmallestElementPerFeature, 0, sizeof(SmallestElementPerFeature));
  }
    
    void Printf(const char *Fmt, ...);
    
    #include 'FuzzerDefs.h'
#include <cstddef>
#include <stdint.h>
    
    #include 'FuzzerDefs.h'
#include 'FuzzerValueBitMap.h'
#include <set>
    
    void PrintHexArray(const uint8_t *Data, size_t Size,
                   const char *PrintAfter) {
  for (size_t i = 0; i < Size; i++)
    Printf('0x%x,', (unsigned)Data[i]);
  Printf('%s', PrintAfter);
}
    
    void PrintASCII(const Unit &U, const char *PrintAfter = '');
    
          if (sigaction(SIGINT, &IgnoreSignalAction, &OldSigIntAction) == -1) {
        Printf('Failed to ignore SIGINT\n');
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
      if (sigaction(SIGQUIT, &IgnoreSignalAction, &OldSigQuitAction) == -1) {
        Printf('Failed to ignore SIGQUIT\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }