
        
        // A pass which performs constant folding in order to avoid unnecessary
// computation on constants.
class HloConstantFolding : public HloPassInterface {
 public:
  tensorflow::StringPiece name() const override { return 'constant_folding'; }
    }
    
      void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/inputbuffer.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
        const string file_format =
        str_util::Lowercase(file_format_tensor.scalar<string>()());
    const int32 samples_per_second =
        samples_per_second_tensor.scalar<int32>()();
    const int32 bits_per_second = bits_per_second_tensor.scalar<int32>()();
    
    
    {
    {}  // namespace graph_transforms
}  // namespace tensorflow

    
    
    {#undef REGISTER_COMPLEX
}  // namespace tensorflow

    
      // From the zlib manual (http://www.zlib.net/manual.html):
  // The compression level must be Z_DEFAULT_COMPRESSION, or between 0 and 9:
  // 1 gives best speed, 9 gives best compression, 0 gives no compression at all
  // (the input data is simply copied a block at a time). Z_DEFAULT_COMPRESSION
  // requests a default compromise between speed and compression (currently
  // equivalent to level 6).
  int8 compression_level = Z_DEFAULT_COMPRESSION;
    
    namespace tensorflow {
    }
    
     public:
  /*!
   * \brief change a non leaf node to a leaf node, delete its children
   * \param rid node id of the node
   * \param value new leaf value
   */
  inline void ChangeToLeaf(int rid, bst_float value) {
    CHECK(nodes_[nodes_[rid].LeftChild() ].IsLeaf());
    CHECK(nodes_[nodes_[rid].RightChild()].IsLeaf());
    this->DeleteNode(nodes_[rid].LeftChild());
    this->DeleteNode(nodes_[rid].RightChild());
    nodes_[rid].SetLeaf(value);
  }
  /*!
   * \brief collapse a non leaf node to a leaf node, delete its children
   * \param rid node id of the node
   * \param value new leaf value
   */
  inline void CollapseToLeaf(int rid, bst_float value) {
    if (nodes_[rid].IsLeaf()) return;
    if (!nodes_[nodes_[rid].LeftChild() ].IsLeaf()) {
      CollapseToLeaf(nodes_[rid].LeftChild(), 0.0f);
    }
    if (!nodes_[nodes_[rid].RightChild() ].IsLeaf()) {
      CollapseToLeaf(nodes_[rid].RightChild(), 0.0f);
    }
    this->ChangeToLeaf(rid, value);
  }
    
      // safe factor for better accuracy
  constexpr int kFactor = 8;
  std::vector<WXQSketch> sketchs;
    
    bool SparsePageDMatrix::ColPageIter::Next() {
  // doing clock rotation over shards.
  if (page_ != nullptr) {
    size_t n = prefetchers_.size();
    prefetchers_[(clock_ptr_ + n - 1) % n]->Recycle(&page_);
  }
  if (prefetchers_[clock_ptr_]->Next(&page_)) {
    // advance clock
    clock_ptr_ = (clock_ptr_ + 1) % prefetchers_.size();
    return true;
  } else {
    return false;
  }
}
    
    DMLC_REGISTRY_FILE_TAG(sparse_page_raw_format);
    
      void PredictLeaf(DMatrix *p_fmat,
                   std::vector<bst_float> *out_preds,
                   unsigned ntree_limit) override {
    LOG(FATAL) << 'gblinear does not support prediction of leaf index';
  }
    
    bool ProcessScan(const uint8_t* data, const size_t len,
                 const std::vector<HuffmanTableEntry>& dc_huff_lut,
                 const std::vector<HuffmanTableEntry>& ac_huff_lut,
                 uint16_t scan_progression[kMaxComponents][kDCTBlockSize],
                 bool is_progressive,
                 size_t* pos,
                 JPEGData* jpg) {
  if (!ProcessSOS(data, len, pos, jpg)) {
    return false;
  }
  JPEGScanInfo* scan_info = &jpg->scan_info.back();
  bool is_interleaved = (scan_info->components.size() > 1);
  int MCUs_per_row;
  int MCU_rows;
  if (is_interleaved) {
    MCUs_per_row = jpg->MCU_cols;
    MCU_rows = jpg->MCU_rows;
  } else {
    const JPEGComponent& c = jpg->components[scan_info->components[0].comp_idx];
    MCUs_per_row =
        DivCeil(jpg->width * c.h_samp_factor, 8 * jpg->max_h_samp_factor);
    MCU_rows =
        DivCeil(jpg->height * c.v_samp_factor, 8 * jpg->max_v_samp_factor);
  }
  coeff_t last_dc_coeff[kMaxComponents] = {0};
  BitReaderState br(data, len, *pos);
  int restarts_to_go = jpg->restart_interval;
  int next_restart_marker = 0;
  int eobrun = -1;
  int block_scan_index = 0;
  const int Al = is_progressive ? scan_info->Al : 0;
  const int Ah = is_progressive ? scan_info->Ah : 0;
  const int Ss = is_progressive ? scan_info->Ss : 0;
  const int Se = is_progressive ? scan_info->Se : 63;
  const uint16_t scan_bitmask = Ah == 0 ? (0xffff << Al) : (1u << Al);
  const uint16_t refinement_bitmask = (1 << Al) - 1;
  for (size_t i = 0; i < scan_info->components.size(); ++i) {
    int comp_idx = scan_info->components[i].comp_idx;
    for (int k = Ss; k <= Se; ++k) {
      if (scan_progression[comp_idx][k] & scan_bitmask) {
        fprintf(stderr, 'Overlapping scans: component=%d k=%d prev_mask=%d '
                'cur_mask=%d\n', comp_idx, k, scan_progression[i][k],
                scan_bitmask);
        jpg->error = JPEG_OVERLAPPING_SCANS;
        return false;
      }
      if (scan_progression[comp_idx][k] & refinement_bitmask) {
        fprintf(stderr, 'Invalid scan order, a more refined scan was already '
                'done: component=%d k=%d prev_mask=%d cur_mask=%d\n', comp_idx,
                k, scan_progression[i][k], scan_bitmask);
        jpg->error = JPEG_INVALID_SCAN_ORDER;
        return false;
      }
      scan_progression[comp_idx][k] |= scan_bitmask;
    }
  }
  if (Al > 10) {
    fprintf(stderr, 'Scan parameter Al=%d is not supported in guetzli.\n', Al);
    jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
    return false;
  }
  for (int mcu_y = 0; mcu_y < MCU_rows; ++mcu_y) {
    for (int mcu_x = 0; mcu_x < MCUs_per_row; ++mcu_x) {
      // Handle the restart intervals.
      if (jpg->restart_interval > 0) {
        if (restarts_to_go == 0) {
          if (ProcessRestart(data, len,
                             &next_restart_marker, &br, jpg)) {
            restarts_to_go = jpg->restart_interval;
            memset(last_dc_coeff, 0, sizeof(last_dc_coeff));
            if (eobrun > 0) {
              fprintf(stderr, 'End-of-block run too long.\n');
              jpg->error = JPEG_EOB_RUN_TOO_LONG;
              return false;
            }
            eobrun = -1;   // fresh start
          } else {
            return false;
          }
        }
        --restarts_to_go;
      }
      // Decode one MCU.
      for (size_t i = 0; i < scan_info->components.size(); ++i) {
        JPEGComponentScanInfo* si = &scan_info->components[i];
        JPEGComponent* c = &jpg->components[si->comp_idx];
        const HuffmanTableEntry* dc_lut =
            &dc_huff_lut[si->dc_tbl_idx * kJpegHuffmanLutSize];
        const HuffmanTableEntry* ac_lut =
            &ac_huff_lut[si->ac_tbl_idx * kJpegHuffmanLutSize];
        int nblocks_y = is_interleaved ? c->v_samp_factor : 1;
        int nblocks_x = is_interleaved ? c->h_samp_factor : 1;
        for (int iy = 0; iy < nblocks_y; ++iy) {
          for (int ix = 0; ix < nblocks_x; ++ix) {
            int block_y = mcu_y * nblocks_y + iy;
            int block_x = mcu_x * nblocks_x + ix;
            int block_idx = block_y * c->width_in_blocks + block_x;
            coeff_t* coeffs = &c->coeffs[block_idx * kDCTBlockSize];
            if (Ah == 0) {
              if (!DecodeDCTBlock(dc_lut, ac_lut, Ss, Se, Al, &eobrun, &br, jpg,
                                  &last_dc_coeff[si->comp_idx], coeffs)) {
                return false;
              }
            } else {
              if (!RefineDCTBlock(ac_lut, Ss, Se, Al,
                                  &eobrun, &br, jpg, coeffs)) {
                return false;
              }
            }
            ++block_scan_index;
          }
        }
      }
    }
  }
  if (eobrun > 0) {
    fprintf(stderr, 'End-of-block run too long.\n');
    jpg->error = JPEG_EOB_RUN_TOO_LONG;
    return false;
  }
  if (!br.FinishStream(pos)) {
    jpg->error = JPEG_INVALID_SCAN;
    return false;
  }
  if (*pos > len) {
    fprintf(stderr, 'Unexpected end of file during scan. pos=%d len=%d\n',
            static_cast<int>(*pos), static_cast<int>(len));
    jpg->error = JPEG_UNEXPECTED_EOF;
    return false;
  }
  return true;
}
    
      // Returns the distance map between the baseline image and the image in the
  // last Compare() call (or the baseline image, if Compare() was not called
  // yet).
  // The dimensions of the distance map are the same as the baseline image.
  // The interpretation of the distance values depend on the comparator used.
  virtual const std::vector<float> distmap() const = 0;
    
    void OutputImageComponent::UpdatePixelsForBlock(
    int block_x, int block_y, const uint8_t idct[kDCTBlockSize]) {
  if (factor_x_ == 1 && factor_y_ == 1) {
    for (int iy = 0; iy < 8; ++iy) {
      for (int ix = 0; ix < 8; ++ix) {
        int x = 8 * block_x + ix;
        int y = 8 * block_y + iy;
        if (x >= width_ || y >= height_) continue;
        int p = y * width_ + x;
        pixels_[p] = idct[8 * iy + ix] << 4;
      }
    }
  } else if (factor_x_ == 2 && factor_y_ == 2) {
    // Fill in the 10x10 pixel area in the subsampled image that will be the
    // basis of the upsampling. This area is enough to hold the 3x3 kernel of
    // the fancy upsampler around each pixel.
    static const int kSubsampledEdgeSize = 10;
    uint16_t subsampled[kSubsampledEdgeSize * kSubsampledEdgeSize];
    for (int j = 0; j < kSubsampledEdgeSize; ++j) {
      // The order we fill in the rows is:
      //   8 rows intersecting the block, row below, row above
      const int y0 = block_y * 16 + (j < 9 ? j * 2 : -2);
      for (int i = 0; i < kSubsampledEdgeSize; ++i) {
        // The order we fill in each row is:
        //   8 pixels within the block, left edge, right edge
        const int ix = ((j < 9 ? (j + 1) * kSubsampledEdgeSize : 0) +
                        (i < 9 ? i + 1 : 0));
        const int x0 = block_x * 16 + (i < 9 ? i * 2 : -2);
        if (x0 < 0) {
          subsampled[ix] = subsampled[ix + 1];
        } else if (y0 < 0) {
          subsampled[ix] = subsampled[ix + kSubsampledEdgeSize];
        } else if (x0 >= width_) {
          subsampled[ix] = subsampled[ix - 1];
        } else if (y0 >= height_) {
          subsampled[ix] = subsampled[ix - kSubsampledEdgeSize];
        } else if (i < 8 && j < 8) {
          subsampled[ix] = idct[j * 8 + i] << 4;
        } else {
          // Reconstruct the subsampled pixels around the edge of the current
          // block by computing the inverse of the fancy upsampler.
          const int y1 = std::max(y0 - 1, 0);
          const int x1 = std::max(x0 - 1, 0);
          subsampled[ix] = (pixels_[y0 * width_ + x0] * 9 +
                            pixels_[y1 * width_ + x1] +
                            pixels_[y0 * width_ + x1] * -3 +
                            pixels_[y1 * width_ + x0] * -3) >> 2;
        }
      }
    }
    }
    }
    
    
    {  // Bring back to range 0-255
  for (size_t i = 0; i < yuv[0].size(); i++) {
    yuv[0][i] *= 255.0;
    yuv[1][i] = (yuv[1][i] + 0.5f) * 255.0f;
    yuv[2][i] = (yuv[2][i] + 0.5f) * 255.0f;
  }
  return yuv;
}
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    
    {}  // namespace guetzli
    
      tmp0 = in[5 * stride];
  tmp1 = kIDCTMatrix[ 5] * tmp0;
  tmp2 = kIDCTMatrix[13] * tmp0;
  tmp3 = kIDCTMatrix[21] * tmp0;
  tmp4 = kIDCTMatrix[29] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    
    {}  // namespace guetzli
    
    namespace {
    }
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
    #include <inttypes.h>
    
    class OutputImageComponent {
 public:
  OutputImageComponent(int w, int h);
    }
    
    
    {  return scope.Close(Boolean::New(db_wrapper->status_.ok()));
}
    
    TEST_F(MockEnvTest, FakeSleeping) {
  int64_t now = 0;
  auto s = env_->GetCurrentTime(&now);
  ASSERT_OK(s);
  env_->FakeSleepForMicroseconds(3 * 1000 * 1000);
  int64_t after_sleep = 0;
  s = env_->GetCurrentTime(&after_sleep);
  ASSERT_OK(s);
  auto delta = after_sleep - now;
  // this will be true unless test runs for 2 seconds
  ASSERT_TRUE(delta == 3 || delta == 4);
}
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
        // WaitForSingleObject and GetExitCodeProcess can do what waitpid does.
    // TODO - implement on Windows
    return true;
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(unit, value);
    }
};

    
    
/**
 * Captures and symbolicates a stack trace
 *
 * Beware of a bug on some platforms, which makes the trace loop until the
 * buffer is full when it reaches a noexpr function. It seems to be fixed in
 * newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
 *
 * @param skip The number of frames before capturing the trace
 *
 * @param limit The maximum number of frames captured
 */
FBEXPORT inline std::vector<StackTraceElement> getStackTraceSymbols(
    size_t skip = 0,
    size_t limit = kDefaultLimit) {
  return getStackTraceSymbols(getStackTrace(skip + 1, limit));
}
    
        void setBorder(int edge, double border);
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    #pragma once
    
    
    {
    {
    {  static void OnLoad();
 private:
  bool attachedWithThisScope_;
};
}
}

    
    // Returns the name of the environment variable corresponding to the
// given flag.  For example, FlagToEnvVar('foo') will return
// 'BENCHMARK_FOO' in the open-source version.
static std::string FlagToEnvVar(const char* flag) {
  const std::string flag_str(flag);
    }
    
    #ifndef COMPLEXITY_H_
#define COMPLEXITY_H_
    
    
    {  // Print user counters
  for (const auto &ucn : user_counter_names_) {
    auto it = run.counters.find(ucn);
    if(it == run.counters.end()) {
      Out << ',';
    } else {
      Out << ',' << it->second;
    }
  }
  Out << '\n';
}
    
    #ifndef BENCHMARK_CYCLECLOCK_H_
#define BENCHMARK_CYCLECLOCK_H_