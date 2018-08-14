
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
        TestPartResult::Type const type;
    const char* const file;
    int const line;
    std::string const message;
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT4.
// Don't use this in your code.
#define GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, v1, v2, v3, v4), \
                on_failure)
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    # if GTEST_HAS_COMBINE
// INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Generates values from the Cartesian product of values produced
// by the argument generators.
//
$range i 2..maxtuple
$for i [[
$range j 1..i
$range k 2..i
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37>
struct Types37 {
  typedef T1 Head;
  typedef Types36<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37> Tail;
};
    
    // Implementation #2 pre-calculates the primes and stores the result
// in an array.
class PreCalculatedPrimeTable : public PrimeTable {
 public:
  // 'max' specifies the maximum number the prime table holds.
  explicit PreCalculatedPrimeTable(int max)
      : is_prime_size_(max + 1), is_prime_(new bool[max + 1]) {
    CalculatePrimesUpTo(max);
  }
  virtual ~PreCalculatedPrimeTable() { delete[] is_prime_; }
    }
    
    
    { private:
  static int allocated_;
};
    
    #ifndef TESSERACT_LSTM_LSTM_H_
#define TESSERACT_LSTM_LSTM_H_
    
      /**
   * Controls what to include in a bounding box. Bounding boxes of all levels
   * between RIL_WORD and RIL_BLOCK can include or exclude potential diacritics.
   * Between layout analysis and recognition, it isn't known where all
   * diacritics belong, so this control is used to include or exclude some
   * diacritics that are above or below the main body of the word. In most cases
   * where the placement is obvious, and after recognition, it doesn't make as
   * much difference, as the diacritics will already be included in the word.
   */
  void SetBoundingBoxComponents(bool include_upper_dots,
                                bool include_lower_dots) {
    include_upper_dots_ = include_upper_dots;
    include_lower_dots_ = include_lower_dots;
  }
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidBodyLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    // Get a terminated UTF8 string: Must delete[] it after use.
char* UNICHAR::utf8_str() const {
  int len = utf8_len();
  char* str = new char[len + 1];
  memcpy(str, chars, len);
  str[len] = 0;
  return str;
}
    
    // Creates and returns a Pix with the same resolution as the original
// in which 1 (black) pixels represent likely non text (photo, line drawing)
// areas of the page, deleting from the blob_block the blobs that were
// determined to be non-text.
// The photo_map is used to bias the decision towards non-text, rather than
// supplying definite decision.
// The blob_block is the usual result of connected component analysis,
// holding the detected blobs.
// The returned Pix should be PixDestroyed after use.
Pix* CCNonTextDetect::ComputeNonTextMask(bool debug, Pix* photo_map,
                                         TO_BLOCK* blob_block) {
  // Insert the smallest blobs into the grid.
  InsertBlobList(&blob_block->small_blobs);
  InsertBlobList(&blob_block->noise_blobs);
  // Add the medium blobs that don't have a good strokewidth neighbour.
  // Those that do go into good_grid as an antidote to spreading beyond the
  // real reaches of a noise region.
  BlobGrid good_grid(gridsize(), bleft(), tright());
  BLOBNBOX_IT blob_it(&blob_block->blobs);
  for (blob_it.mark_cycle_pt(); !blob_it.cycled_list(); blob_it.forward()) {
    BLOBNBOX* blob = blob_it.data();
    double perimeter_area_ratio = blob->cblob()->perimeter() / 4.0;
    perimeter_area_ratio *= perimeter_area_ratio / blob->enclosed_area();
    if (blob->GoodTextBlob() == 0 || perimeter_area_ratio < kMinGoodTextPARatio)
      InsertBBox(true, true, blob);
    else
      good_grid.InsertBBox(true, true, blob);
  }
  noise_density_ = ComputeNoiseDensity(debug, photo_map, &good_grid);
  good_grid.Clear();  // Not needed any more.
  Pix* pix = noise_density_->ThresholdToPix(max_noise_count_);
  if (debug) {
    pixWrite('junknoisemask.png', pix, IFF_PNG);
  }
  ScrollView* win = nullptr;
  #ifndef GRAPHICS_DISABLED
  if (debug) {
    win = MakeWindow(0, 400, 'Photo Mask Blobs');
  }
  #endif  // GRAPHICS_DISABLED
  // Large and medium blobs are not text if they overlap with 'a lot' of small
  // blobs.
  MarkAndDeleteNonTextBlobs(&blob_block->large_blobs,
                            kMaxLargeOverlapsWithSmall,
                            win, ScrollView::DARK_GREEN, pix);
  MarkAndDeleteNonTextBlobs(&blob_block->blobs, kMaxMediumOverlapsWithSmall,
                          win, ScrollView::WHITE, pix);
  // Clear the grid of small blobs and insert the medium blobs.
  Clear();
  InsertBlobList(&blob_block->blobs);
  MarkAndDeleteNonTextBlobs(&blob_block->large_blobs,
                            kMaxLargeOverlapsWithMedium,
                            win, ScrollView::DARK_GREEN, pix);
  // Clear again before we start deleting the blobs in the grid.
  Clear();
  MarkAndDeleteNonTextBlobs(&blob_block->noise_blobs, -1,
                            win, ScrollView::CORAL, pix);
  MarkAndDeleteNonTextBlobs(&blob_block->small_blobs, -1,
                            win, ScrollView::GOLDENROD, pix);
  MarkAndDeleteNonTextBlobs(&blob_block->blobs, -1,
                            win, ScrollView::WHITE, pix);
  if (debug) {
    #ifndef GRAPHICS_DISABLED
    win->Update();
    #endif  // GRAPHICS_DISABLED
    pixWrite('junkccphotomask.png', pix, IFF_PNG);
    #ifndef GRAPHICS_DISABLED
    delete win->AwaitEvent(SVET_DESTROY);
    delete win;
    #endif  // GRAPHICS_DISABLED
  }
  return pix;
}
    
    
    {  // Max entry in noise_density_ before the cell is declared noisy.
  int max_noise_count_;
  // Completed noise density map, which we keep around to use for secondary
  // noise detection.
  IntGrid* noise_density_;
};
    
      // Helper returns the mean gradient value for the vertical column at the
  // given x, (in the external coordinates) by subtracting the mean of the
  // transformed column 2 pixels left from the mean of the transformed column
  // 2 pixels to the right.
  // This gives a positive value for a good left edge and negative for right.
  // Returns the best result out of +2/-2, +3/-1, +1/-3 pixels from the edge.
  int BestMeanGradientInColumn(const DENORM* denorm, int16_t x, int16_t min_y,
                               int16_t max_y, bool best_is_max) const;
    
    
    {} // namespace cuda
    
      auto grid_t = theta->type().tensor();
  grid_t.resize_({N, H, W, 2});
    
    TEST_CASE('CUDAGuard') {
  if (at::cuda::getNumGPUs() < 2) {
    return;
  }
    }
    
    PyObject * THCPModule_cudaLockMutex(PyObject *module)
{
  auto mutex = THCCachingAllocator_getCudaFreeMutex();
  // This has to be a busy loop because we **absolutely need to** hold the GIL
  // or it's a recipe for a deadlock otherwise (if we let other Python threads
  // run while we have the cudaMutex, but not the GIL, they might try to e.g.
  // free a CUDA tensor and acquire the cudaMutex without giving up the GIL,
  // because it happens deep within THC).
  while (true) {
    if (mutex->try_lock())
      break;
    {
      AutoNoGIL no_gil;
      std::this_thread::sleep_for(std::chrono::microseconds(10));
    }
  }
    }
    
      for (long i = ndim - 1; i >= 0; --i) {
    long offset = ndim - 1 - i;
    long dimA = dimsA - 1 - offset;
    long dimB = dimsB - 1 - offset;
    long sizeA = (dimA >= 0) ? a[dimA] : 1;
    long sizeB = (dimB >= 0) ? b[dimB] : 1;
    }
    
      CaffeMap<std::string, TensorShape> SsaRewriteAndMapNames(
      Workspace* ws,
      NetDef* pred_net,
      const std::unordered_map<std::string, TensorShape>& input_shape_hints);
    
        // helper function to initialize and check BlockMomentumSGD related parameters
    void InitializeAndCheckBlockMomentumSGDParameters();
    // only true when the user specify LearningRatePerMB and the number of parallel utterances in Reader > 1
    // bool m_needToNormalizeLRByParallUtterance;          // TODO: should go away
    // bool m_needToNormalizeMomentumByParallUtterance;
    
        // make sure (dense * sparse -> dense) == (dense * dense -> dense)
    mD.Resize(dim1, dim1);
    mD.SetValue(0.0f);
    Matrix<float>::MultiplyAndAdd(mAdense, transposeA, mA1sparseCSC, transposeB, mD);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mA2sparseCSC, transposeB, beta, mD);
    
    // ---------------------------------------------------------------------------
// array_ref -- wraps a C pointer to an array together with its size.
//
// Called _ref because this is a reference to the array rather than the array
// itself (since it wraps a pointer). No need to pass an array_ref by reference.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// ---------------------------------------------------------------------------
    
        void FreeTypeFont::Shutdown()
    {
        if (FreetypeFace) 
        {
            FT_Done_Face(FreetypeFace);
            FreetypeFace = NULL;
            FT_Done_FreeType(FreetypeLibrary);
            FreetypeLibrary = NULL;
        }
    }
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
    
    {        // Rendering
        ImGui::Render();
        int display_w, display_h;
        glfwMakeContextCurrent(window);
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    	
        glfwMakeContextCurrent(window);
        glfwSwapBuffers(window);
    }
    
        ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
    ImGui_ImplOpenGL3_Init(glsl_version);