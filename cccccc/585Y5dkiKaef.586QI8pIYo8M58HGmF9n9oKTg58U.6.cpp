
        
        
    {  /** Pointer to the page_res owned by the API. */
  PAGE_RES* page_res_;
  /** Pointer to the Tesseract object owned by the API. */
  Tesseract* tesseract_;
  /**
   * The iterator to the page_res_. Owned by this ResultIterator.
   * A pointer just to avoid dragging in Tesseract includes.
   */
  PAGE_RES_IT* it_;
  /**
   * The current input WERD being iterated. If there is an output from OCR,
   * then word_ is nullptr. Owned by the API
   */
  WERD* word_;
  /** The length of the current word_. */
  int word_length_;
  /** The current blob index within the word. */
  int blob_index_;
  /**
   * Iterator to the blobs within the word. If nullptr, then we are iterating
   * OCR results in the box_word.
   * Owned by this ResultIterator.
   */
  C_BLOB_IT* cblob_it_;
  /** Control over what to include in bounding boxes. */
  bool include_upper_dots_;
  bool include_lower_dots_;
  /** Parameters saved from the Thresholder. Needed to rebuild coordinates.*/
  int scale_;
  int scaled_yres_;
  int rect_left_;
  int rect_top_;
  int rect_width_;
  int rect_height_;
};
    
      // Try to adjust the blamer bundle.
  if (orig_bb != nullptr) {
    // TODO(rays) Looks like a leak to me.
    // orig_bb should take, rather than copy.
    word->blamer_bundle = new BlamerBundle();
    word2->blamer_bundle = new BlamerBundle();
    orig_bb->SplitBundle(chopped->blobs.back()->bounding_box().right(),
                         word2->chopped_word->blobs[0]->bounding_box().left(),
                         wordrec_debug_blamer,
                         word->blamer_bundle, word2->blamer_bundle);
  }
    
    // Clip output boxes to input blob boxes for bounds that are within this
// tolerance. Otherwise, the blob may be chopped and we have to just use
// the word bounding box.
const int kBoxClipTolerance = 2;
    
    class BLOCK;
class WERD;
    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
      Extension_call_pargs args;
  args.registry = &registry;
  args.item = &item;
  args.request = &request;
  args.write(oprot_);
    
      // Flag for indicating found state utilizing hardware driver info.
  bool found = false;
  walk_func([&](const std::string& devname, hardwareDriver* type) {
    // Get autodetected info..
    auto resp = smartctl.getDevInfo(devname, '');
    if (resp.err != NOERR) {
      LOG(INFO) << 'There was an error retrieving drive information: '
                << libsmartctl::errStr(resp.err);
      // Don't return here, keep searching with fulltype.
    } else {
      resp.content['device_name'] = devname;
      results.push_back(std::move(resp.content));
    }
    }
    
        // output changed array
    std::cout << object << '\n';
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::const_reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }