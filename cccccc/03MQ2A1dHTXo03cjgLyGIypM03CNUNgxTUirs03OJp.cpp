
        
          static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #endif  // ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_

    
    #include <string>
    
    
    {  DISALLOW_COPY_AND_ASSIGN(TrayIconGtk);
};
    
      // Process all the words on this page.
  TBOX tbox;  // tesseract-identified box
  TBOX bbox;  // box from the box file
  bool keep_going;
  int line_number = 0;
  int examined_words = 0;
  do {
    keep_going = read_t(&page_res_it, &tbox);
    keep_going &= ReadNextBox(applybox_page, &line_number, box_file, &label,
                              &bbox);
    // Align bottom left points of the TBOXes.
    while (keep_going &&
           !NearlyEqual<int>(tbox.bottom(), bbox.bottom(), kMaxBoxEdgeDiff)) {
      if (bbox.bottom() < tbox.bottom()) {
        page_res_it.forward();
        keep_going = read_t(&page_res_it, &tbox);
      } else {
        keep_going = ReadNextBox(applybox_page, &line_number, box_file, &label,
                                 &bbox);
      }
    }
    while (keep_going &&
           !NearlyEqual<int>(tbox.left(), bbox.left(), kMaxBoxEdgeDiff)) {
      if (bbox.left() > tbox.left()) {
        page_res_it.forward();
        keep_going = read_t(&page_res_it, &tbox);
      } else {
        keep_going = ReadNextBox(applybox_page, &line_number, box_file, &label,
                                 &bbox);
      }
    }
    // OCR the word if top right points of the TBOXes are similar.
    if (keep_going &&
        NearlyEqual<int>(tbox.right(), bbox.right(), kMaxBoxEdgeDiff) &&
        NearlyEqual<int>(tbox.top(), bbox.top(), kMaxBoxEdgeDiff)) {
        ambigs_classify_and_output(label.string(), &page_res_it, output_file);
        examined_words++;
    }
    page_res_it.forward();
  } while (keep_going);
    
    /**
 * @name tess_acceptable_word
 *
 * @return true if the word is regarded as 'good enough'.
 * @param word_choice after context
 * @param raw_choice before context
 */
bool Tesseract::tess_acceptable_word(WERD_RES* word) {
  return getDict().AcceptableResult(word);
}
    
    
    { private:
  // Set to true when bounding boxes for individual unichars are recorded.
  bool truth_has_char_boxes_;
  // The true_word (in the original image coordinate space) contains ground
  // truth bounding boxes for this WERD_RES.
  tesseract::BoxWord truth_word_;
  // Same as above, but in normalized coordinates
  // (filled in by WERD_RES::SetupForRecognition()).
  tesseract::BoxWord norm_truth_word_;
  // Tolerance for bounding box comparisons in normalized space.
  int norm_box_tolerance_;
  // Contains ground truth unichar for each of the bounding boxes in truth_word.
  GenericVector<STRING> truth_text_;
  // The reason for incorrect OCR result.
  IncorrectResultReason incorrect_result_reason_;
  // Debug text associated with the blame.
  STRING debug_;
  // Misadaption debug information (filled in if this word was misadapted to).
  STRING misadaption_debug_;
  // Variables used by the segmentation search when looking for the blame.
  // Set to true while segmentation search is continued after the usual
  // termination condition in order to look for the blame.
  bool segsearch_is_looking_for_blame_;
  // Best rating for correctly segmented path
  // (set and used by SegSearch when looking for blame).
  float best_correctly_segmented_rating_;
  // Vectors populated by SegSearch to indicate column and row indices that
  // correspond to blobs with correct bounding boxes.
  GenericVector<int> correct_segmentation_cols_;
  GenericVector<int> correct_segmentation_rows_;
  // Set to true if best choice is a dictionary word and
  // classifier's top choice.
  bool best_choice_is_dict_and_top_choice_;
  // Serialized segmentation search lattice.
  char *lattice_data_;
  int lattice_size_;  // size of lattice_data in bytes
  // Information about hypotheses (paths) explored by the segmentation search.
  tesseract::ParamsTrainingBundle params_training_bundle_;
};
    
    
    {}

    
    
    {    ICOORD pt;
    int halfwidth;
  };
  // Type holds the distance of each point from the fitted line and the point
  // itself. Use of double allows integer distances from ICOORDs to be stored
  // exactly, and also the floating point results from ConstrainedFit.
  typedef KDPairInc<double, ICOORD> DistPointPair;
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
    
    {}  // namespace leveldb
    
    #ifndef STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_
#define STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_
    
      // Check third filter (empty)
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'hello'));
    
    TableBuilder::~TableBuilder() {
  assert(rep_->closed);  // Catch errors where caller forgot to call Finish()
  delete rep_->filter_block;
  delete rep_;
}
    
    #include <dmlc/logging.h>
#include <sstream>
#include './base.h'
    
      ASSERT_EQ(GetFileSize(tmp_file), 76)
    << 'Expected saved binary file size to be same as object size';
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    
    {
    {    double dat[2]; dat[0] = sum, dat[1] = wsum;
    if (distributed) {
      rabit::Allreduce<rabit::op::Sum>(dat, 2);
    }
    return Derived::GetFinal(dat[0], dat[1]);
  }
  /*!
   * \brief to be implemented by subclass,
   *   get evaluation result from one row
   * \param label label of current instance
   * \param pred prediction value of current instance
   * \param nclass number of class in the prediction
   */
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass);
  /*!
   * \brief to be overridden by subclass, final transformation
   * \param esum the sum statistics returned by EvalRow
   * \param wsum sum of weight
   */
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return esum / wsum;
  }
  // used to store error message
  const char *error_msg_;
};
    
    #define STB__TRY(t,p)  /* avoid retrying a match we already tried */ \
    if (p ? dist != q-t : 1)                             \
    if ((m = stb_matchlen(t, q, match_max)) > best)     \
    if (stb__nc(m,q-(t)))                                \
    best = m, dist = q - (t)
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows. Please read the comment at the top of imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
    int main(int, char**)
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX10_NewFrame();
    }
    
    // Win32 data
static HWND                         g_hWnd = 0;
static INT64                        g_Time = 0;
static INT64                        g_TicksPerSecond = 0;
static ImGuiMouseCursor             g_LastMouseCursor = ImGuiMouseCursor_COUNT;
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.