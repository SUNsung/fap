
        
        #include 'test/cpp/qps/report.h'
    
    #ifdef __cplusplus
extern 'C' {
#endif
    }
    
      signal(SIGINT, sigint_handler);
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    
    {
    {}  // namespace
}  // namespace grpc
    
    #include 'test/cpp/qps/histogram.h'
    
    UsageTimer::UsageTimer() : start_(Sample()) {}
    
    /*
 * This implements a Metrics server defined in
 * src/proto/grpc/testing/metrics.proto. Any
 * test service can use this to export Metrics (TODO (sreek): Only Gauges for
 * now).
 *
 * Example:
 *    MetricsServiceImpl metricsImpl;
 *    ..
 *    // Create QpsGauge(s). Note: QpsGauges can be created even after calling
 *    // 'StartServer'.
 *    QpsGauge qps_gauge1 = metricsImpl.CreateQpsGauge('foo', is_present);
 *    // qps_gauge1 can now be used anywhere in the program by first making a
 *    // one-time call qps_gauge1.Reset() and then calling qps_gauge1.Incr()
 *    // every time to increment a query counter
 *
 *    ...
 *    // Create the metrics server
 *    std::unique_ptr<grpc::Server> server = metricsImpl.StartServer(port);
 *    server->Wait(); // Note: This is blocking.
 */
namespace grpc {
namespace testing {
    }
    }
    
    namespace grpc {
    }
    
    bool EncodeSOF(const JPEGData& jpg, JPEGOutput out) {
  const size_t ncomps = jpg.components.size();
  const size_t marker_len = 8 + 3 * ncomps;
  std::vector<uint8_t> data(marker_len + 2);
  size_t pos = 0;
  data[pos++] = 0xff;
  data[pos++] = 0xc1;
  data[pos++] = static_cast<uint8_t>(marker_len >> 8);
  data[pos++] = marker_len & 0xff;
  data[pos++] = kJpegPrecision;
  data[pos++] = jpg.height >> 8;
  data[pos++] = jpg.height & 0xff;
  data[pos++] = jpg.width >> 8;
  data[pos++] = jpg.width & 0xff;
  data[pos++] = static_cast<uint8_t>(ncomps);
  for (size_t i = 0; i < ncomps; ++i) {
    data[pos++] = jpg.components[i].id;
    data[pos++] = ((jpg.components[i].h_samp_factor << 4) |
                      (jpg.components[i].v_samp_factor));
    const size_t quant_idx = jpg.components[i].quant_idx;
    if (quant_idx >= jpg.quant.size()) {
      return false;
    }
    data[pos++] = jpg.quant[quant_idx].index;
  }
  return JPEGWrite(out, &data[0], pos);
}
    
    void OutputImageComponent::ApplyGlobalQuantization(const int q[kDCTBlockSize]) {
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      GetCoeffBlock(block_x, block_y, block);
      if (QuantizeBlock(block, q)) {
        SetCoeffBlock(block_x, block_y, block);
      }
    }
  }
  memcpy(quant_, q, sizeof(quant_));
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
    
    #include <math.h>
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    struct Layout
{
    double left;
    double right;
    }
    
        Value getFlexBasis(void) const;
    double getFlexGrow(void) const;
    double getFlexShrink(void) const;
    
        Size(void)
    : width(0.0)
    , height(0.0)
    {
    }