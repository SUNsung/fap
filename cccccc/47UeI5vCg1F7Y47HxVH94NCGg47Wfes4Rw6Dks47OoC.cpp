
        
        // Tests that the SSE implementation gets the same result as the vanilla.
TEST_F(IntSimdMatrixTest, SSE) {
  if (SIMDDetect::IsSSEAvailable()) {
    tprintf('SSE found! Continuing...');
  } else {
    tprintf('No SSE found! Not Tested!');
    return;
  }
  std::unique_ptr<IntSimdMatrix> matrix(new IntSimdMatrixSSE());
  ExpectEqualResults(matrix.get());
}
    
      const char *stream =
      '/CIDInit /ProcSet findresource begin\n'
      '12 dict begin\n'
      'begincmap\n'
      '/CIDSystemInfo\n'
      '<<\n'
      '  /Registry (Adobe)\n'
      '  /Ordering (UCS)\n'
      '  /Supplement 0\n'
      '>> def\n'
      '/CMapName /Adobe-Identify-UCS def\n'
      '/CMapType 2 def\n'
      '1 begincodespacerange\n'
      '<0000> <FFFF>\n'
      'endcodespacerange\n'
      '1 beginbfrange\n'
      '<0000> <FFFF> <0000>\n'
      'endbfrange\n'
      'endcmap\n'
      'CMapName currentdict /CMap defineresource pop\n'
      'end\n'
      'end\n';
    
    bool TessHOcrRenderer::AddImageHandler(TessBaseAPI* api) {
  const std::unique_ptr<const char[]> hocr(api->GetHOCRText(imagenum()));
  if (hocr == nullptr) return false;
    }
    
    
    {}  // namespace tesseract.
    
      if (flags.bit (CHECK_SPACES) &&
    (strchr(word->best_choice->unichar_string().string(), ' ') != nullptr)) {
    if (tessedit_adaption_debug) tprintf('word contains spaces\n');
    return FALSE;
  }
    
    #define PERFECT_WERDS   999
#define MAXSPACING      128      /*max expected spacing in pix */
    
    // Returns a new x-height maximally compatible with the result in word_res.
// See comment above for overall algorithm.
float Tesseract::ComputeCompatibleXheight(WERD_RES *word_res,
                                          float* baseline_shift) {
  STATS top_stats(0, UINT8_MAX);
  STATS shift_stats(-UINT8_MAX, UINT8_MAX);
  int bottom_shift = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  do {
    top_stats.clear();
    shift_stats.clear();
    for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
      TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
      UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
      if (unicharset.get_isalpha(class_id) ||
          unicharset.get_isdigit(class_id)) {
        int top = blob->bounding_box().top() + bottom_shift;
        // Clip the top to the limit of normalized feature space.
        if (top >= INT_FEAT_RANGE)
          top = INT_FEAT_RANGE - 1;
        int bottom = blob->bounding_box().bottom() + bottom_shift;
        int min_bottom, max_bottom, min_top, max_top;
        unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                  &min_top, &max_top);
        // Chars with a wild top range would mess up the result so ignore them.
        if (max_top - min_top > kMaxCharTopRange)
          continue;
        int misfit_dist = MAX((min_top - x_ht_acceptance_tolerance) - top,
                            top - (max_top + x_ht_acceptance_tolerance));
        int height = top - kBlnBaselineOffset;
        if (debug_x_ht_level >= 2) {
          tprintf('Class %s: height=%d, bottom=%d,%d top=%d,%d, actual=%d,%d: ',
                  unicharset.id_to_unichar(class_id),
                  height, min_bottom, max_bottom, min_top, max_top,
                  bottom, top);
        }
        // Use only chars that fit in the expected bottom range, and where
        // the range of tops is sensibly near the xheight.
        if (min_bottom <= bottom + x_ht_acceptance_tolerance &&
            bottom - x_ht_acceptance_tolerance <= max_bottom &&
            min_top > kBlnBaselineOffset &&
            max_top - kBlnBaselineOffset >= kBlnXHeight &&
            misfit_dist > 0) {
          // Compute the x-height position using proportionality between the
          // actual height and expected height.
          int min_xht = DivRounded(height * kBlnXHeight,
                                   max_top - kBlnBaselineOffset);
          int max_xht = DivRounded(height * kBlnXHeight,
                                   min_top - kBlnBaselineOffset);
          if (debug_x_ht_level >= 2) {
            tprintf(' xht range min=%d, max=%d\n', min_xht, max_xht);
          }
          // The range of expected heights gets a vote equal to the distance
          // of the actual top from the expected top.
          for (int y = min_xht; y <= max_xht; ++y)
            top_stats.add(y, misfit_dist);
        } else if ((min_bottom > bottom + x_ht_acceptance_tolerance ||
                    bottom - x_ht_acceptance_tolerance > max_bottom) &&
                   bottom_shift == 0) {
          // Get the range of required bottom shift.
          int min_shift = min_bottom - bottom;
          int max_shift = max_bottom - bottom;
          if (debug_x_ht_level >= 2) {
            tprintf(' bottom shift min=%d, max=%d\n', min_shift, max_shift);
          }
          // The range of expected shifts gets a vote equal to the min distance
          // of the actual bottom from the expected bottom, spread over the
          // range of its acceptance.
          int misfit_weight = abs(min_shift);
          if (max_shift > min_shift)
            misfit_weight /= max_shift - min_shift;
          for (int y = min_shift; y <= max_shift; ++y)
            shift_stats.add(y, misfit_weight);
        } else {
          if (bottom_shift == 0) {
            // Things with bottoms that are already ok need to say so, on the
            // 1st iteration only.
            shift_stats.add(0, kBlnBaselineOffset);
          }
          if (debug_x_ht_level >= 2) {
            tprintf(' already OK\n');
          }
        }
      }
    }
    if (shift_stats.get_total() > top_stats.get_total()) {
      bottom_shift = IntCastRounded(shift_stats.median());
      if (debug_x_ht_level >= 2) {
        tprintf('Applying bottom shift=%d\n', bottom_shift);
      }
    }
  } while (bottom_shift != 0 &&
           top_stats.get_total() < shift_stats.get_total());
  // Baseline shift is opposite sign to the bottom shift.
  *baseline_shift = -bottom_shift / word_res->denorm.y_scale();
  if (debug_x_ht_level >= 2) {
    tprintf('baseline shift=%g\n', *baseline_shift);
  }
  if (top_stats.get_total() == 0)
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
  // The new xheight is just the median vote, which is then scaled out
  // of BLN space back to pixel space to get the x-height in pixel space.
  float new_xht = top_stats.median();
  if (debug_x_ht_level >= 2) {
    tprintf('Median xht=%f\n', new_xht);
    tprintf('Mode20:A: New x-height = %f (norm), %f (orig)\n',
            new_xht, new_xht / word_res->denorm.y_scale());
  }
  // The xheight must change by at least x_ht_min_change to be used.
  if (fabs(new_xht - kBlnXHeight) >= x_ht_min_change)
    return new_xht / word_res->denorm.y_scale();
  else
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
}
    
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
    
    
    {template<typename IndexType>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
          cbw.Write(buffer.data(), input.begin(), input.end());
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      tmp0 = in[6 * stride];
  tmp1 = kIDCTMatrix[ 6] * tmp0;
  tmp2 = kIDCTMatrix[14] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    // Function pointer type used to write len bytes into buf. Returns the
// number of bytes written or -1 on error.
typedef int (*JPEGOutputHook)(void* data, const uint8_t* buf, size_t len);
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
    #pragma once
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
        method(getComputedLeft);
    method(getComputedRight);
    
    template<typename... ARGS>
inline void loge(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_ERROR, tag, msg, args...);
}
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
    
    // JNI's NIO support has some awkward preconditions and error reporting. This
// class provides much more user-friendly access.
class FBEXPORT JByteBuffer : public JavaClass<JByteBuffer> {
 public:
  static constexpr const char* kJavaDescriptor = 'Ljava/nio/ByteBuffer;';
    }