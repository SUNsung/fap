
        
          class MatchGroundTruth : public QuickTest ,
      public ::testing::WithParamInterface<const char*> {
  };
  
  TEST_P(MatchGroundTruth, FastPhototestOCR) {
    OCRTester(TESTING_DIR '/phototest.tif',
              TESTING_DIR '/phototest.txt',
              TESSDATA_DIR '_fast', GetParam());
  }
  
  INSTANTIATE_TEST_CASE_P( EngLatinDevaArabLang, MatchGroundTruth, 
                        ::testing::Values('eng', 'script/Latin', 'script/Devanagari', 'script/Arabic') );
    
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
    
    #endif  // TESSERACT_CCMAIN_OTSUTHR_H_

    
    void signal_exit(int signal_code);
    
    extern const char *kUTF8LineSeparator;
extern const char *kUTF8ParagraphSeparator;
extern const char *kLRM;  //< Left-to-Right Mark
extern const char *kRLM;  //< Right-to-Left Mark
extern const char *kRLE;  //< Right-to-Left Embedding
extern const char *kPDF;  //< Pop Directional Formatting
    
    /**
 * Return the character normalization feature for a blob.
 *
 * The features returned are in a scale where the x-height has been
 * normalized to live in the region y = [-0.25 .. 0.25].  Example ranges
 * for English below are based on the Linux font collection on 2009-12-04:
 *
 *  - Params[CharNormY]
 *     - The y coordinate of the grapheme's centroid.
 *     - English: [-0.27, 0.71]
 *
 *  - Params[CharNormLength]
 *     - The length of the grapheme's outline (tiny segments discarded),
 *     divided by 10.0=LENGTH_COMPRESSION.
 *     - English: [0.16, 0.85]
 *
 *  - Params[CharNormRx]
 *     - The radius of gyration about the x axis, as measured from CharNormY.
 *     - English: [0.011, 0.34]
 *
 *  - Params[CharNormRy]
 *     - The radius of gyration about the y axis, as measured from
 *     the x center of the grapheme's bounding box.
 *     - English: [0.011, 0.31]
 */
FEATURE_SET ExtractCharNormFeatures(const INT_FX_RESULT_STRUCT& fx_info) {
  FEATURE_SET feature_set = NewFeatureSet(1);
  FEATURE feature = NewFeature(&CharNormDesc);
    }
    
      // Free up any currently unused dawgs.
  void DeleteUnusedDawgs() {
    dawgs_.DeleteUnusedObjects();
  }
    
      // Builds a target using CTC. Slightly improved as follows:
  // Includes normalizations and clipping for stability.
  // labels should be pre-padded with nulls wherever desired, but they don't
  // have to be between all labels. Allows for multi-label codes with no
  // nulls between.
  // labels can be longer than the time sequence, but the total number of
  // essential labels (non-null plus nulls between equal labels) must not exceed
  // the number of timesteps in outputs.
  // outputs is the output of the network, and should have already been
  // normalized with NormalizeProbs.
  // On return targets is filled with the computed targets.
  // Returns false if there is insufficient time for the labels.
  static bool ComputeCTCTargets(const GenericVector<int>& truth_labels,
                                int null_char,
                                const GENERIC_2D_ARRAY<float>& outputs,
                                NetworkIO* targets);