
        
        struct BlamerBundle;
class C_BLOB_IT;
class PAGE_RES;
class PAGE_RES_IT;
class WERD;
struct Pix;
struct Pta;
    
    
    {  // Non-serialized data initialized by other means or used temporarily
  // during loading of training samples.
  // Number of different class labels in unicharset_.
  int charsetsize_;
  // Flag to indicate that we are running shape analysis and need fragments
  // fixing.
  bool enable_shape_anaylsis_;
  // Flag to indicate that sample replication is required.
  bool enable_replication_;
  // Array of classids of fragments that replace the correctly segmented chars.
  int* fragments_;
  // Classid of previous correctly segmented sample that was added.
  int prev_unichar_id_;
  // Debug output control.
  int debug_level_;
  // Feature map used to construct reduced feature spaces for compact
  // classifiers.
  IntFeatureMap feature_map_;
  // Vector of Pix pointers used for classifiers that need the image.
  // Indexed by page_num_ in the samples.
  // These images are owned by the trainer and need to be pixDestroyed.
  GenericVector<Pix*> page_images_;
  // Vector of filenames of loaded tr files.
  GenericVector<STRING> tr_filenames_;
};
    
    CCNonTextDetect::CCNonTextDetect(int gridsize,
                             const ICOORD& bleft, const ICOORD& tright)
  : BlobGrid(gridsize, bleft, tright),
    max_noise_count_(static_cast<int>(kMaxSmallNeighboursPerPix *
                                      gridsize * gridsize)),
    noise_density_(nullptr) {
  // TODO(rays) break max_noise_count_ out into an area-proportional
  // value, as now plus an additive constant for the number of text blobs
  // in the 3x3 neighbourhood - maybe 9.
}
    
    static int set_addresses(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* data,
		  size_t len) {
	if (msg->ifa_family == AF_INET) {
		sockaddr_in* sa = new sockaddr_in;
		sa->sin_family = AF_INET;
		memcpy(&sa->sin_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else if (msg->ifa_family == AF_INET6) {
		sockaddr_in6* sa = new sockaddr_in6;
		sa->sin6_family = AF_INET6;
		sa->sin6_scope_id = msg->ifa_index;
		memcpy(&sa->sin6_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else {
		return -1;
	}
	return 0;
}
    
    		case STATUS_CONNECTION_ERROR:
			return ERR_CONNECTION_ERROR;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    struct oc_mode_rd{
  ogg_int16_t rate;
  ogg_int16_t rmse;
};
    
    /*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
        /* Compute number of bits head room and normalize input */
    b_headrm = silk_CLZ32( silk_abs(b32) ) - 1;
    b32_nrm = silk_LSHIFT(b32, b_headrm);                                       /* Q: b_headrm                */
    
    
opus_int32 silk_inner_prod_aligned_scale(
    const opus_int16 *const     inVec1,             /*    I input vector 1                                              */
    const opus_int16 *const     inVec2,             /*    I input vector 2                                              */
    const opus_int              scale,              /*    I number of bits to shift                                     */
    const opus_int              len                 /*    I vector lengths                                              */
);
    
    struct GradientUpdateInfo
{
    GradientsUpdateType type = GradientsUpdateType::AdaGrad;
    float gaussianNoiseInjectStd = 0.0075f;
    }
    
        template <typename ElementType>
    /*static*/ ValuePtr Value::CreateBatch(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/)
    {
        //TODO: avoid data copy.
        std::vector<std::vector<size_t>> input(batchData.size());
        for (size_t i = 0; i < batchData.size(); i++)
        {
            input[i] = {batchData[i]};
        }
        // Pass the empty seqStartFlags means all sequences have the start flag with true.
        return Create<ElementType>(dimension, input, {}, device, readOnly);
    }
    
    
    {    auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(config);
    ComputationNetworkPtr net = netBuilder->BuildNetworkFromDbnFile(dbnModelPath);
    net->Save(modelPath);
}
    
        float4 operator&(const float4& other) const
    {
        return _mm_and_ps(v, other);
    }
    float4 operator|(const float4& other) const
    {
        return _mm_or_ps(v, other);
    }
    float4 operator+(const float4& other) const
    {
        return _mm_add_ps(v, other);
    }
    float4 operator-(const float4& other) const
    {
        return _mm_sub_ps(v, other);
    }
    float4 operator*(const float4& other) const
    {
        return _mm_mul_ps(v, other);
    }
    float4 operator/(const float4& other) const
    {
        return _mm_div_ps(v, other);
    }
    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    
    {
    {    // Apply the fancy upsampler on the subsampled block.
    for (int y = ymin; y <= ymax; ++y) {
      const int y0 = ((y & ~1) / 2 - block_y * 8 + 1) * kSubsampledEdgeSize;
      const int dy = ((y & 1) * 2 - 1) * kSubsampledEdgeSize;
      uint16_t* rowptr = &pixels_[y * width_];
      for (int x = xmin; x <= xmax; ++x) {
        const int x0 = (x & ~1) / 2 - block_x * 8 + 1;
        const int dx = (x & 1) * 2 - 1;
        const int ix = x0 + y0;
        rowptr[x] = (subsampled[ix] * 9 + subsampled[ix + dy] * 3 +
                     subsampled[ix + dx] * 3 + subsampled[ix + dx + dy]) >> 4;
      }
    }
  } else {
    printf('Sampling ratio not supported: factor_x = %d factor_y = %d\n',
           factor_x_, factor_y_);
    exit(1);
  }
}
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
    #include <stddef.h>
#include <stdint.h>
    
    
    {}  // namespace guetzli
    
    
    {}  // namespace guetzli
    
      // Fills in block[] with the 8x8 coefficient block with block coordinates
  // (block_x, block_y).
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  void GetCoeffBlock(int block_x, int block_y,
                     coeff_t block[kDCTBlockSize]) const;
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
      TypeDescriptor& operator=(const TypeDescriptor& other) {
    if (this != &other) {
      ti_ = other.ti_;
      tag_ti_ = other.tag_ti_;
    }
    }
    
    
    {  return nallocx(minSize, 0);
}
    
    
    {Init::~Init() {
  SingletonVault::singleton()->destroyInstances();
}
} // namespace folly
