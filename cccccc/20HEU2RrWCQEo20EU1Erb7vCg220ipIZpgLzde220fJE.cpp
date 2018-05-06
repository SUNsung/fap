
        
                // Core Extension: ARB_copy_buffer
        COPY_READ_BUFFER                 = 0x8F36,
        COPY_WRITE_BUFFER                = 0x8F37,
        COPY_READ_BUFFER_BINDING         = 0x8F36,
        COPY_WRITE_BUFFER_BINDING        = 0x8F37,
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    #endif  // TESSERACT_CCSTRUCT_CCSTRUCT_H_

    
    // Computes the absolute error distances of the points from the line,
// and returns the squared upper-quartile error distance.
double DetLineFit::ComputeUpperQuartileError() {
  int num_errors = distances_.size();
  if (num_errors == 0) return 0.0;
  // Get the absolute values of the errors.
  for (int i = 0; i < num_errors; ++i) {
    if (distances_[i].key < 0) distances_[i].key = -distances_[i].key;
  }
  // Now get the upper quartile distance.
  int index = distances_.choose_nth_item(3 * num_errors / 4);
  double dist = distances_[index].key;
  // The true distance is the square root of the dist squared / square_length.
  // Don't bother with the square root. Just return the square distance.
  return square_length_ > 0.0 ? dist * dist / square_length_ : 0.0;
}
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
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
    
    #endif  // GUETZLI_JPEG_DATA_ENCODER_H_

    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
    
    {  const int width_;
  const int height_;
  int factor_x_;
  int factor_y_;
  int width_in_blocks_;
  int height_in_blocks_;
  int num_blocks_;
  std::vector<coeff_t> coeffs_;
  std::vector<uint16_t> pixels_;
  // Same as last argument of ApplyGlobalQuantization() (default is all 1s).
  int quant_[kDCTBlockSize];
};
    
    
    {}  // namespace
    
    //
// Exception tracer library.
    
    namespace {
bool skipPrefix(const path& pth, const path& prefix, path::const_iterator& it) {
  it = pth.begin();
  for (auto& p : prefix) {
    if (it == pth.end()) {
      return false;
    }
    if (p == '.') {
      // Should only occur at the end, if prefix ends with a slash
      continue;
    }
    if (*it++ != p) {
      return false;
    }
  }
  return true;
}
} // namespace
    
    namespace folly {
namespace fs {
    }
    }
    
    void copy(const char* srcFile, const char* dest) {
  fs::path destPath(dest);
  if (!destPath.is_absolute()) {
    auto hp = getHugePageSize();
    CHECK(hp) << 'no huge pages available';
    destPath = fs::canonical_parent(destPath, hp->mountPoint);
  }
    }
    
    #include <algorithm>
#include <stdexcept>
#include <system_error>
    
    namespace folly {
    }
    
    template <typename T>
struct SimpleObservable<T>::Wrapper {
  using element_type = T;
    }