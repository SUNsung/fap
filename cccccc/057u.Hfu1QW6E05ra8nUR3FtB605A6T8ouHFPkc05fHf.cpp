
        
        namespace testing {
    }
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
    #if GTEST_HAS_GLOBAL_STRING
    
    int Water::allocated_ = 0;
    
    // Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    // This function takes tif/box pair of files and runs recognition on the image,
// while making sure that the word bounds that tesseract identified roughly
// match to those specified by the input box file. For each word (ngram in a
// single bounding box from the input box file) it outputs the ocred result,
// the correct label, rating and certainty.
void Tesseract::recog_training_segmented(const STRING &fname,
                                         PAGE_RES *page_res,
                                         volatile ETEXT_DESC *monitor,
                                         FILE *output_file) {
  STRING box_fname = fname;
  const char *lastdot = strrchr(box_fname.string(), '.');
  if (lastdot != NULL) box_fname[lastdot - box_fname.string()] = '\0';
  box_fname += '.box';
  // ReadNextBox() will close box_file
  FILE *box_file = open_file(box_fname.string(), 'r');
    }
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == NULL) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (inT16) x, (inT16) (ysize - y - height),
                         (inT16) (x + width), (inT16) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    // APPROXIMATIONS of the fractions of the character cell taken by
// the descenders, ascenders, and x-height.
const double CCStruct::kDescenderFraction = 0.25;
const double CCStruct::kXHeightFraction = 0.5;
const double CCStruct::kAscenderFraction = 0.25;
const double CCStruct::kXHeightCapRatio = CCStruct::kXHeightFraction /
    (CCStruct::kXHeightFraction + CCStruct::kAscenderFraction);
    
    // Computes all the cross product distances of the points perpendicular to
// the given direction, ignoring distances outside of the give distance range,
// storing the actual (signed) cross products in distances_.
void DetLineFit::ComputeConstrainedDistances(const FCOORD& direction,
                                             double min_dist, double max_dist) {
  distances_.truncate(0);
  square_length_ = direction.sqlength();
  // Compute the distance of each point from the line.
  for (int i = 0; i < pts_.size(); ++i) {
    FCOORD pt_vector = pts_[i].pt;
    // Compute |line_vector||pt_vector|sin(angle between)
    double dist = direction * pt_vector;
    if (min_dist <= dist && dist <= max_dist)
      distances_.push_back(DistPointPair(dist, pts_[i].pt));
  }
}
    
    

    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return NULL;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : NULL;
      inT64 new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != NULL && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    /**********************************************************************
 * LLSQ::clear
 *
 * Function to initialize a LLSQ.
 **********************************************************************/
    
    #include 'allheaders.h'
#include 'blobs.h'
#include 'helpers.h'
#include 'matrix.h'
#include 'ocrblock.h'
#include 'unicharset.h'
#include 'werd.h'
    
    
    {  // Best available image.
  Pix* pix_;
  // True if the source image is white-on-black.
  bool inverse_;
  // Block the word came from. If not null, block->re_rotation() takes the
  // 'untransformed' coordinates even further back to the original image.
  // Used only on the first DENORM in a chain.
  const BLOCK* block_;
  // Rotation to apply between translation to the origin and scaling.
  const FCOORD* rotation_;
  // Previous transformation in a chain.
  const DENORM* predecessor_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding x-coord. Owned by the DENORM.
  GenericVector<float>* x_map_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding y-coord. Owned by the DENORM.
  GenericVector<float>* y_map_;
  // x-coordinate to be mapped to final_xshift_ in the result.
  float x_origin_;
  // y-coordinate to be mapped to final_yshift_ in the result.
  float y_origin_;
  // Scale factors for x and y coords. Applied to pre-rotation system.
  float x_scale_;
  float y_scale_;
  // Destination coords of the x_origin_ and y_origin_.
  float final_xshift_;
  float final_yshift_;
};
#endif
