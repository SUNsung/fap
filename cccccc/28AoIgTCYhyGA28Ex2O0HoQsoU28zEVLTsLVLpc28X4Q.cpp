
        
          llvm::Optional<CommentParts> getParts() const {
    return Parts;
  }
    
    namespace swift {
namespace index {
    }
    }
    
    /// LSLocation and LSValue are used in DenseMap.
namespace llvm {
using swift::LSBase;
using swift::LSLocation;
using swift::LSValue;
    }
    
        D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
    static void findLinesCrossPoint(Point2f origin1, Point2f dir1, Point2f origin2, Point2f dir2, Point2f& cross_point)
{
    float det = dir2.x*dir1.y - dir2.y*dir1.x;
    Point2f offset = origin2 - origin1;
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    //
// END OF CUSTOM FUNCTIONS HERE
//
    
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
    
    #ifndef GUETZLI_ENTROPY_ENCODE_H_
#define GUETZLI_ENTROPY_ENCODE_H_
    
    
    {}  // namespace guetzli
    
    #endif  // GUETZLI_JPEG_HUFFMAN_DECODE_H_

    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);