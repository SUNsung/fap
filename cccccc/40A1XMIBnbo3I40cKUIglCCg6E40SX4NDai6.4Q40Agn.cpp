
        
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
    
    
    {}  // namespace tesseract.

    
      // Clip the top and bottom to the limit of normalized feature space.
  int top = ClipToRange<int>(bbox.top(), 0, kBlnCellHeight - 1);
  int bottom = ClipToRange<int>(bbox.bottom(), 0, kBlnCellHeight - 1);
  // A tolerance of yscale corresponds to 1 pixel in the image.
  double tolerance = y_scale();
  // If the script doesn't have upper and lower-case characters, widen the
  // tolerance to allow sloppy baseline/x-height estimates.
  if (!unicharset.script_has_upper_lower())
    tolerance = y_scale() * kSloppyTolerance;
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
      // Initialize the bool array to the given size of feature space.
  // The feature_map is just borrowed, and must exist for the entire
  // lifetime of the IntFeatureDist.
  void Init(const IntFeatureMap* feature_map);
    
    namespace jpgd
{
  typedef unsigned char  uint8;
  typedef   signed short int16;
  typedef unsigned short uint16;
  typedef unsigned int   uint;
  typedef   signed int   int32;
    }
    
    # if defined(OC_COLLECT_METRICS)
typedef struct oc_mode_metrics oc_mode_metrics;
# endif
typedef struct oc_mode_rd      oc_mode_rd;
    
      &_huff_book_line_1024x27_0sub0,
  &_huff_book_line_1024x27_1sub0,
  &_huff_book_line_1024x27_1sub1,
  &_huff_book_line_1024x27_2sub0,
  &_huff_book_line_1024x27_2sub1,
  &_huff_book_line_1024x27_3sub1,
  &_huff_book_line_1024x27_3sub2,
  &_huff_book_line_1024x27_3sub3,
  &_huff_book_line_1024x27_4sub1,
  &_huff_book_line_1024x27_4sub2,
  &_huff_book_line_1024x27_4sub3,
};
static const static_codebook*const _floor_2048x27_books[]={
  &_huff_book_line_2048x27_class1,
  &_huff_book_line_2048x27_class2,
  &_huff_book_line_2048x27_class3,
  &_huff_book_line_2048x27_class4,
    
    #else
    
    #if defined(HAVE_ARM_NE10)
    
    #if !defined(_mfrngcode_H)
# define _mfrngcode_H (1)
# include 'entcode.h'
    
    
    {    return y;
}