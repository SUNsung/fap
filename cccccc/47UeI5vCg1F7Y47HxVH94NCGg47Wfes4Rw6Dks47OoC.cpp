
        
        #endif  // ATOM_COMMON_API_LOCKER_H_

    
    
    {  DraggableRegion();
};
    
      // The state of a web resource has been changed. A resource may have been
  // added, removed, or altered. Source is WebResourceService, and the
  // details are NoDetails.
  NOTIFICATION_PROMO_RESOURCE_STATE_CHANGED,
    
      // The map of accelerators that have been successfully registered as global
  // shortcuts and their observer.
  typedef std::map<ui::Accelerator, Observer*> AcceleratorMap;
  AcceleratorMap accelerator_map_;
    
      const int render_process_id_;
  // Keep a copy from original thread.
  const base::FilePath profile_directory_;
  const GURL document_url_;
    
    #undef FPL

    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    
    {
} // namespace extensions
#endif

    
      protected:
    ~NwScreenRegisterStreamFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.registerStream', UNKNOWN)
    
     protected:
  ~NwShellShowItemInFolderFunction() override;
    
    // Tests that the RotatingTranspose function does the right thing for various
// transformations.
// dims=[5, 4, 3, 2]->[5, 2, 4, 3]
TEST_F(MatrixTest, RotatingTranspose_3_1) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 3, 1, &m);
  m.ResizeNoInit(kInputSize_ / 3, 3);
  // Verify that the result is:
  // output tensor=[[[[0, 2, 4][6, 8, 10][12, 14, 16][18, 20, 22]]
  //                 [[1, 3, 5][7, 9, 11][13, 15, 17][19, 21, 23]]]
  //                [[[24, 26, 28]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(2, m(0, 1));
  EXPECT_EQ(4, m(0, 2));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(1, m(4, 0));
  EXPECT_EQ(24, m(8, 0));
  EXPECT_EQ(26, m(8, 1));
  EXPECT_EQ(25, m(12, 0));
}
    
        // Where is word origin and how long is it?
    double x, y, word_length;
    {
      int word_x1, word_y1, word_x2, word_y2;
      res_it->Baseline(RIL_WORD, &word_x1, &word_y1, &word_x2, &word_y2);
      GetWordBaseline(writing_direction, ppi, height,
                      word_x1, word_y1, word_x2, word_y2,
                      line_x1, line_y1, line_x2, line_y2,
                      &x, &y, &word_length);
    }
    
    // Factory makes and returns an IntSimdMatrix (sub)class of the best
// available type for the current architecture.
/* static */
IntSimdMatrix* IntSimdMatrix::GetFastestMultiplier() {
  IntSimdMatrix* multiplier = nullptr;
  if (SIMDDetect::IsAVX2Available()) {
    multiplier = new IntSimdMatrixAVX2();
  } else if (SIMDDetect::IsSSEAvailable()) {
    multiplier = new IntSimdMatrixSSE();
  } else {
    // Default c++ implementation.
    multiplier = new IntSimdMatrix();
  }
  return multiplier;
}
    
    #include 'tesseractclass.h'
    
    void ResultIterator::MoveToLogicalStartOfTextline() {
  GenericVectorEqEq<int> word_indices;
  RestartRow();
  CalculateTextlineOrder(current_paragraph_is_ltr_,
                         dynamic_cast<const LTRResultIterator&>(*this),
                         &word_indices);
  int i = 0;
  for (; i < word_indices.size() && word_indices[i] < 0; i++) {
    if (word_indices[i] == kMinorRunStart) in_minor_direction_ = true;
    else if (word_indices[i] == kMinorRunEnd) in_minor_direction_ = false;
  }
  if (in_minor_direction_) at_beginning_of_minor_run_ = true;
  if (i >= word_indices.size()) return;
  int first_word_index = word_indices[i];
  for (int j = 0; j < first_word_index; j++) {
    PageIterator::Next(RIL_WORD);
  }
  MoveToLogicalStartOfWord();
}
    
      // Set the resolution of the source image in pixels per inch.
  // This should be called right after SetImage(), and will let us return
  // appropriate font sizes for the text.
  void SetSourceYResolution(int ppi) {
    yres_ = ppi;
    estimated_res_ = ppi;
  }
  int GetSourceYResolution() const {
    return yres_;
  }
  int GetScaledYResolution() const {
    return scale_ * yres_;
  }
  // Set the resolution of the source image in pixels per inch, as estimated
  // by the thresholder from the text size found during thresholding.
  // This value will be used to set internal size thresholds during recognition
  // and will not influence the output 'point size.' The default value is
  // the same as the source resolution. (yres_)
  void SetEstimatedResolution(int ppi) {
    estimated_res_ = ppi;
  }
  // Returns the estimated resolution, including any active scaling.
  // This value will be used to set internal size thresholds during recognition.
  int GetScaledEstimatedResolution() const {
    return scale_ * estimated_res_;
  }
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
      stopped = 0;                   /*not finished yet */
  edgept->flags[FLAGS] |= FIXED; /*fix it */
  do {
    linestart = edgept;          /*possible start of line */
    dir1 = edgept->flags[DIR];   /*first direction */
                                 /*length of dir1 */
    sum1 = edgept->flags[RUNLENGTH];
    edgept = edgept->next;
    dir2 = edgept->flags[DIR];   /*2nd direction */
                                 /*length in dir2 */
    sum2 = edgept->flags[RUNLENGTH];
    if (((dir1 - dir2 + 1) & 7) < 3) {
      while (edgept->prev->flags[DIR] == edgept->next->flags[DIR]) {
        edgept = edgept->next;   /*look at next */
        if (edgept->flags[DIR] == dir1)
                                 /*sum lengths */
          sum1 += edgept->flags[RUNLENGTH];
        else
          sum2 += edgept->flags[RUNLENGTH];
      }
    }
    }
    
        void fit(              //fit the given
             int degree);  //return actual
    double get_a() {  //get x squard
      return a;
    }
    double get_b() {  //get x squard
      return b;
    }
    double get_c() {  //get x squard
      return c;
    }