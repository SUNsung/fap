
        
          AcceleratorCallbackMap accelerator_callback_map_;
    
    namespace atom {
    }
    
     private:
  void* operator new(size_t size);
  void operator delete(void*, size_t);
    
    namespace ui {
class Accelerator;
}
    
    
    {  virtual int GetSourceCount() const = 0;
  virtual const Source& GetSource(int index) const = 0;
  virtual std::vector<Source> GetSources() const = 0;
};
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    #include 'chrome/browser/speech/tts_platform.h'
    
    #include <string>
    
    #ifndef TEST_QPS_USAGE_TIMER_H
#define TEST_QPS_USAGE_TIMER_H
    
    void ProtoToCoreStats(const grpc::core::Stats& proto, grpc_stats_data* core) {
  memset(core, 0, sizeof(*core));
  for (const auto& m : proto.metrics()) {
    switch (m.value_case()) {
      case Metric::VALUE_NOT_SET:
        break;
      case Metric::kCount:
        for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
          if (m.name() == grpc_stats_counter_name[i]) {
            core->counters[i] = m.count();
            break;
          }
        }
        break;
      case Metric::kHistogram:
        for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
          if (m.name() == grpc_stats_histogram_name[i]) {
            const auto& h = m.histogram();
            bool valid = true;
            if (grpc_stats_histo_buckets[i] != h.buckets_size()) valid = false;
            for (int j = 0; valid && j < h.buckets_size(); j++) {
              if (grpc_stats_histo_bucket_boundaries[i][j] !=
                  h.buckets(j).start()) {
                valid = false;
              }
            }
            if (!valid) {
              gpr_log(GPR_ERROR,
                      'Found histogram %s but shape is different from proto',
                      m.name().c_str());
            }
            for (int j = 0; valid && j < h.buckets_size(); j++) {
              core->histograms[grpc_stats_histo_start[i] + j] =
                  h.buckets(j).count();
            }
          }
        }
        break;
    }
  }
}
    
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
    
    using std::size_t;
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    #include 'guetzli/gamma_correct.h'
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    void UpdateACHistogramForDCTBlock(const coeff_t* coeffs,
                                  JpegHistogram* ac_histogram);
    
      void SaveToJpegData(JPEGData* jpg) const;
    
     private:
  std::unordered_map<std::string, const Obstacle*> id_obstacle_map_;
    
      /**
   * @brief: recognize light status
   * @param  const Recognize&: recognize options
   * @param  const Image&: input image
   * @param  std::vector<Light>*: recognized light status
   * @return  bool
   */
  bool RecognizeStatus(const Image &image, const RecognizeOption &option,
                       std::vector<LightPtr> *lights) override;
    
    #include 'modules/prediction/container/obstacles/obstacle.h'
#include 'modules/prediction/evaluator/evaluator.h'
#include 'modules/prediction/proto/fnn_vehicle_model.pb.h'
#include 'modules/prediction/proto/lane_graph.pb.h'