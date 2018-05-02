
        
        /* Cancels the stream. Can be called at any time after
 * bidirectional_stream_start(). The on_canceled() method of
 * bidirectional_stream_callback will be invoked when cancelation
 * is complete and no further callback methods will be invoked. If the
 * stream has completed or has not started, calling
 * bidirectional_stream_cancel() has no effect and on_canceled() will not
 * be invoked. At most one callback method may be invoked after
 * bidirectional_stream_cancel() has completed.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_cancel(bidirectional_stream* stream);
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
  signal(SIGINT, sigint_handler);
    }
    
    class MetricsServiceImpl final : public MetricsService::Service {
 public:
  grpc::Status GetAllGauges(ServerContext* context, const EmptyMessage* request,
                            ServerWriter<GaugeResponse>* writer) override;
    }
    
    #ifndef GRPC_TEST_CPP_UTIL_SUBPROCESS_H
#define GRPC_TEST_CPP_UTIL_SUBPROCESS_H
    
    // Saves the COM marker segment as a string to *jpg.
bool ProcessCOM(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  std::string com_str(reinterpret_cast<const char*>(
      &data[*pos - 2]), marker_len);
  *pos += marker_len - 2;
  jpg->com_data.push_back(com_str);
  return true;
}
    
      // Must be called before any CompareBlock() calls can be called.
  virtual void StartBlockComparisons() = 0;
  // No more CompareBlock() calls can be called after this.
  virtual void FinishBlockComparisons() = 0;
    
    void OutputImage::ToLinearRGB(int xmin, int ymin, int xsize, int ysize,
                              std::vector<std::vector<float> >* rgb) const {
  const double* lut = Srgb8ToLinearTable();
  std::vector<uint8_t> rgb_pixels = ToSRGB(xmin, ymin, xsize, ysize);
  for (int p = 0; p < xsize * ysize; ++p) {
    for (int i = 0; i < 3; ++i) {
      (*rgb)[i][p] = static_cast<float>(lut[rgb_pixels[3 * p + i]]);
    }
  }
}
    
      // Map of areas where to allow blurring, only where it is not too sharp
  std::vector<bool> blurmap(image[0].size(), false);
  std::vector<float> edge = Convolve2D(yuv[channel], w, h, kEdgeMatrix, 3);
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      size_t index = y * w + x;
      float u = yuv[1][index];
      float v = yuv[2][index];
      if (sharpenmap[index]) continue;
      if (!darkmap[index]) continue;
      if (fabs(edge[index]) < threshold && v < -0.162 * u) {
        blurmap[index] = true;
      }
    }
  }
  Erode(w, h, &blurmap);
  Erode(w, h, &blurmap);
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    #include <math.h>
    
    #include 'guetzli/jpeg_data.h'
    
      int iquant[3 * kDCTBlockSize];
  int idx = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < kDCTBlockSize; ++j) {
      int v = quant[idx];
      jpg->quant[i].values[j] = v;
      iquant[idx++] = ((1 << kIQuantBits) + 1) / v;
    }
  }
    
    #ifndef GUETZLI_JPEG_ERROR_H_
#define GUETZLI_JPEG_ERROR_H_
    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
      void ApplyGlobalQuantization(const int q[3][kDCTBlockSize]);
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    #endif

    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/ASTNULLType.hpp#2 $
 */
    
    #endif //INC_BaseAST_hpp__

    
    #include <antlr/config.hpp>
#include <vector>
#include <stdexcept>
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    	/** This method updates the state of the input buffer so that
	 * the text matched since the most recent mark() is no longer
	 * held by the buffer.  So, you either do a mark/rewind for
	 * failed predicate or mark/commit to keep on parsing without
	 * rewinding the input.
	 */
	inline void commit( void )
	{
		nMarkers--;
	}
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/LexerSharedInputState.hpp#2 $
 */