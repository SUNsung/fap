
        
          /**
   * Returns a binary image of the current object at the given level.
   * The position and size match the return from BoundingBoxInternal, and so
   * this could be upscaled with respect to the original input image.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetBinaryImage(PageIteratorLevel level) const;
    
    void IntFeatureMap::Clear() {
  for (int dir = 0; dir < kNumOffsetMaps; ++dir) {
    delete [] offset_plus_[dir];
    delete [] offset_minus_[dir];
    offset_plus_[dir] = nullptr;
    offset_minus_[dir] = nullptr;
  }
}
    
    // Max number of neighbour small objects per squared gridsize before a grid
// cell becomes image.
const double kMaxSmallNeighboursPerPix = 1.0 / 32;
// Max number of small blobs a large blob may overlap before it is rejected
// and determined to be image.
const int kMaxLargeOverlapsWithSmall = 3;
// Max number of small blobs a medium blob may overlap before it is rejected
// and determined to be image. Larger than for large blobs as medium blobs
// may be complex Chinese characters. Very large Chinese characters are going
// to overlap more medium blobs than small.
const int kMaxMediumOverlapsWithSmall = 12;
// Max number of normal blobs a large blob may overlap before it is rejected
// and determined to be image. This is set higher to allow for drop caps, which
// may overlap a lot of good text blobs.
const int kMaxLargeOverlapsWithMedium = 12;
// Multiplier of original noise_count used to test for the case of spreading
// noise beyond where it should really be.
const int kOriginalNoiseMultiple = 8;
// Pixel padding for noise blobs when rendering on the image
// mask to encourage them to join together. Make it too big and images
// will fatten out too much and have to be clipped to text.
const int kNoisePadding = 4;
// Fraction of max_noise_count_ to be added to the noise count if there is
// photo mask in the background.
const double kPhotoOffsetFraction = 0.375;
// Min ratio of perimeter^2/16area for a 'good' blob in estimating noise
// density. Good blobs are supposed to be highly likely real text.
// We consider a square to have unit ratio, where A=(p/4)^2, hence the factor
// of 16. Digital circles are weird and have a minimum ratio of pi/64, not
// the 1/(4pi) that you would expect.
const double kMinGoodTextPARatio = 1.5;
    
    void block_edges(Pix *t_image,         // thresholded image
                 PDBLK *block,         // block in image
                 C_OUTLINE_IT* outline_it);
void make_margins(PDBLK *block,            // block in image
                  BLOCK_LINE_IT *line_it,  // for old style
                  uint8_t *pixels,           // pixels to strip
                  uint8_t margin,            // white-out pixel
                  int16_t left,              // block edges
                  int16_t right,
                  int16_t y);                // line coord                 );
void line_edges(int16_t x,                     // coord of line start
                int16_t y,                     // coord of line
                int16_t xext,                  // width of line
                uint8_t uppercolour,           // start of prev line
                uint8_t * bwpos,               // thresholded line
                CRACKEDGE ** prevline,       // edges in progress
                CRACKEDGE **free_cracks,
                C_OUTLINE_IT* outline_it);
CRACKEDGE *h_edge(int sign,                  // sign of edge
                  CRACKEDGE * join,          // edge to join to
                  CrackPos* pos);
CRACKEDGE *v_edge(int sign,                  // sign of edge
                  CRACKEDGE * join,          // edge to join to
                  CrackPos* pos);
void join_edges(CRACKEDGE *edge1,            // edges to join
                CRACKEDGE *edge2,            // no specific order
                CRACKEDGE **free_cracks,
                C_OUTLINE_IT* outline_it);
void free_crackedges(CRACKEDGE *start);
    
    // Insert the given blocks at the front of the completed_blocks_ list so
// they can be kept in the correct reading order.
void WorkingPartSet::InsertCompletedBlocks(BLOCK_LIST* blocks,
                                           TO_BLOCK_LIST* to_blocks) {
  BLOCK_IT block_it(&completed_blocks_);
  block_it.add_list_before(blocks);
  TO_BLOCK_IT to_block_it(&to_blocks_);
  to_block_it.add_list_before(to_blocks);
}
    
      // Sets the coordinates of the current macro-block for the purpose of
  // CompareBlock() calls.
  virtual void SwitchBlock(int block_x, int block_y,
                           int factor_x, int factor_y) = 0;
    
    void OutputImage::SaveToJpegData(JPEGData* jpg) const {
  assert(components_[0].factor_x() == 1);
  assert(components_[0].factor_y() == 1);
  jpg->width = width_;
  jpg->height = height_;
  jpg->max_h_samp_factor = 1;
  jpg->max_v_samp_factor = 1;
  jpg->MCU_cols = components_[0].width_in_blocks();
  jpg->MCU_rows = components_[0].height_in_blocks();
  int ncomp = components_[1].IsAllZero() && components_[2].IsAllZero() ? 1 : 3;
  for (int i = 1; i < ncomp; ++i) {
    jpg->max_h_samp_factor = std::max(jpg->max_h_samp_factor,
                                      components_[i].factor_x());
    jpg->max_v_samp_factor = std::max(jpg->max_h_samp_factor,
                                      components_[i].factor_y());
    jpg->MCU_cols = std::min(jpg->MCU_cols, components_[i].width_in_blocks());
    jpg->MCU_rows = std::min(jpg->MCU_rows, components_[i].height_in_blocks());
  }
  jpg->components.resize(ncomp);
  int q[3][kDCTBlockSize];
  for (int c = 0; c < 3; ++c) {
    memcpy(&q[c][0], components_[c].quant(), kDCTBlockSize * sizeof(q[0][0]));
  }
  for (int c = 0; c < ncomp; ++c) {
    JPEGComponent* comp = &jpg->components[c];
    assert(jpg->max_h_samp_factor % components_[c].factor_x() == 0);
    assert(jpg->max_v_samp_factor % components_[c].factor_y() == 0);
    comp->id = c;
    comp->h_samp_factor = jpg->max_h_samp_factor / components_[c].factor_x();
    comp->v_samp_factor = jpg->max_v_samp_factor / components_[c].factor_y();
    comp->width_in_blocks = jpg->MCU_cols * comp->h_samp_factor;
    comp->height_in_blocks = jpg->MCU_rows * comp->v_samp_factor;
    comp->num_blocks = comp->width_in_blocks * comp->height_in_blocks;
    comp->coeffs.resize(kDCTBlockSize * comp->num_blocks);
    }
    }
    
    #include <assert.h>
#include <algorithm>
    
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
    
    #include 'guetzli/jpeg_data.h'
    
    void BuildSequentialHuffmanCodes(
    const JPEGData& jpg, std::vector<HuffmanCodeTable>* dc_huffman_code_tables,
    std::vector<HuffmanCodeTable>* ac_huffman_code_tables);