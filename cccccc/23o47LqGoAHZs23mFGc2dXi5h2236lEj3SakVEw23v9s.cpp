
        
        
    {
    {    int last_dc = 0;
    const coeff_t* src_coeffs = components_[c].coeffs();
    coeff_t* dest_coeffs = &comp->coeffs[0];
    for (int block_y = 0; block_y < comp->height_in_blocks; ++block_y) {
      for (int block_x = 0; block_x < comp->width_in_blocks; ++block_x) {
        if (block_y >= components_[c].height_in_blocks() ||
            block_x >= components_[c].width_in_blocks()) {
          dest_coeffs[0] = last_dc;
          for (int k = 1; k < kDCTBlockSize; ++k) {
            dest_coeffs[k] = 0;
          }
        } else {
          for (int k = 0; k < kDCTBlockSize; ++k) {
            const int quant = q[c][k];
            int coeff = src_coeffs[k];
            assert(coeff % quant == 0);
            dest_coeffs[k] = coeff / quant;
          }
          src_coeffs += kDCTBlockSize;
        }
        last_dc = dest_coeffs[0];
        dest_coeffs += kDCTBlockSize;
      }
    }
  }
  SaveQuantTables(q, jpg);
}
    
    #include 'guetzli/gamma_correct.h'
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    // Library to decode jpeg coefficients into an RGB image.
    
    #include <stddef.h>
#include <stdint.h>