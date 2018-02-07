
        
          // Calculate D^2 and E^2
  double D2, E2;
  if (R < 10E-12) {
    double temp = r0 * r0 - 4 * e;
    if (temp < 0)
      D2 = E2 = -1;
    else {
      double sqrt_temp = sqrt(temp);
      D2 = 0.75 * b2 - 2 * c + 2 * sqrt_temp;
      E2 = D2 - 4 * sqrt_temp;
    }
  }
  else {
    double u = 0.75 * b2 - 2 * c - R2,
      v = 0.25 * inv_R * (4 * bc - 8 * d - b3);
    D2 = u + v;
    E2 = u - v;
  }
    
    
double CV_ModelEstimator2_Test::get_success_error_level( int /*test_case_idx*/, int /*i*/, int /*j*/ )
{
    return 0;
}
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    namespace cv
{
    }
    
        if ((new_cn > total_width || total_width % new_cn != 0) && new_rows == 0)
        new_rows = rows * total_width / new_cn;
    
    void cv::cuda::DeviceInfo::queryMemory(size_t& _totalMemory, size_t& _freeMemory) const
{
#ifndef HAVE_CUDA
    (void) _totalMemory;
    (void) _freeMemory;
    throw_no_cuda();
#else
    int prevDeviceID = getDevice();
    if (prevDeviceID != device_id_)
        setDevice(device_id_);
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
    
      // Splits *this into two pieces in bundle1 and bundle2 (preallocated, empty
  // bundles) where the right edge/ of the left-hand word is word1_right,
  // and the left edge of the right-hand word is word2_left.
  void SplitBundle(int word1_right, int word2_left, bool debug,
                   BlamerBundle* bundle1, BlamerBundle* bundle2) const;
  // 'Joins' the blames from bundle1 and bundle2 into *this.
  void JoinBlames(const BlamerBundle& bundle1, const BlamerBundle& bundle2,
                  bool debug);
    
    // Backwards compatible fit returning a gradient and constant.
// Deprecated. Prefer Fit(ICOORD*, ICOORD*) where possible, but use this
// function in preference to the LMS class.
double DetLineFit::Fit(float* m, float* c) {
  ICOORD start, end;
  double error = Fit(&start, &end);
  if (end.x() != start.x()) {
    *m = static_cast<float>(end.y() - start.y()) / (end.x() - start.x());
    *c = start.y() - *m * start.x();
  } else {
    *m = 0.0f;
    *c = 0.0f;
  }
  return error;
}
    
      Pix* pix() const {
    return pix_;
  }
  void set_pix(Pix* pix) {
    pix_ = pix;
  }
  bool inverse() const {
    return inverse_;
  }
  void set_inverse(bool value) {
    inverse_ = value;
  }
  const DENORM* RootDenorm() const {
    if (predecessor_ != NULL)
      return predecessor_->RootDenorm();
    return this;
  }
  const DENORM* predecessor() const {
    return predecessor_;
  }
  // Accessors - perhaps should not be needed.
  float x_scale() const {
    return x_scale_;
  }
  float y_scale() const {
    return y_scale_;
  }
  const BLOCK* block() const {
    return block_;
  }
  void set_block(const BLOCK* block) {
    block_ = block;
  }
    
    // A geometric model of paragraph indentation and alignment.
//
// Measurements are in pixels. The meaning of the integer arguments changes
// depending upon the value of justification.  Distances less than or equal
// to tolerance apart we take as 'equivalent' for the purpose of model
// matching, and in the examples below, we assume tolerance is zero.
//
// justification = LEFT:
//   margin       the 'ignored' margin to the left block edge.
//   first_indent indent from the left margin to a typical first text line.
//   body_indent  indent from the left margin of a typical body text line.
//
// justification = RIGHT:
//   margin       the 'ignored' margin to the right block edge.
//   first_indent indent from the right margin to a typical first text line.
//   body_indent  indent from the right margin of a typical body text line.
//
// justification = CENTER:
//   margin       ignored
//   first_indent ignored
//   body_indent  ignored
//
//  ====== Extended example, assuming each letter is ten pixels wide: =======
//
// +--------------------------------+
// |      Awesome                   | ParagraphModel(CENTER, 0, 0, 0)
// |   Centered Title               |
// | Paragraph Detection            |
// |      OCR TEAM                  |
// |  10 November 2010              |
// |                                |
// |  Look here, I have a paragraph.| ParagraphModel(LEFT, 0, 20, 0)
// |This paragraph starts at the top|
// |of the page and takes 3 lines.  |
// |  Here I have a second paragraph| ParagraphModel(LEFT, 0, 20, 0)
// |which indicates that the first  |
// |paragraph is not a continuation |
// |from a previous page, as it is  |
// |indented just like this second  |
// |paragraph.                      |
// |   Here is a block quote. It    | ParagraphModel(LEFT, 30, 0, 0)
// |   looks like the prior text    |
// |   but it  is indented  more    |
// |   and is fully justified.      |
// |  So how does one deal with     | ParagraphModel(LEFT, 0, 20, 0)
// |centered text, block quotes,    |
// |normal paragraphs, and lists    |
// |like what follows?              |
// |1. Make a plan.                 | ParagraphModel(LEFT, 0, 0, 30)
// |2. Use a heuristic, for example,| ParagraphModel(LEFT, 0, 0, 30)
// |   looking for lines where the  |
// |   first word of the next line  |
// |   would fit on the previous    |
// |   line.                        |
// |8. Try to implement the plan in | ParagraphModel(LEFT, 0, 0, 30)
// |   Python and try it out.       |
// |4. Determine how to fix the     | ParagraphModel(LEFT, 0, 0, 30)
// |   mistakes.                    |
// |5. Repeat.                      | ParagraphModel(LEFT, 0, 0, 30)
// |  For extra painful penalty work| ParagraphModel(LEFT, 0, 20, 0)
// |you can try to identify source  |
// |code.  Ouch!                    |
// +--------------------------------+
class ParagraphModel {
 public:
  ParagraphModel(tesseract::ParagraphJustification justification,
                 int margin,
                 int first_indent,
                 int body_indent,
                 int tolerance)
      : justification_(justification),
        margin_(margin),
        first_indent_(first_indent),
        body_indent_(body_indent),
        tolerance_(tolerance) {
    // Make one of {first_indent, body_indent} is 0.
    int added_margin = first_indent;
    if (body_indent < added_margin)
      added_margin = body_indent;
    margin_ += added_margin;
    first_indent_ -= added_margin;
    body_indent_ -= added_margin;
  }
    }
    
      /* Fetch an individual column. This code should be used with XGBOOST_TYPE_SWITCH
     to determine type of bin id's */
  template<typename T>
  inline Column<T> GetColumn(unsigned fid) const {
    const bool valid_type = std::is_same<T, uint32_t>::value
                          || std::is_same<T, uint16_t>::value
                          || std::is_same<T, uint8_t>::value;
    CHECK(valid_type);
    }
    
      EXPECT_EQ(dmat->GetColSize(0), 2);
  EXPECT_EQ(dmat->GetColSize(1), 1);
  EXPECT_EQ(dmat->GetColDensity(0), 1);
  EXPECT_EQ(dmat->GetColDensity(1), 0.5);
    
    void SimpleDMatrix::MakeManyBatch(const std::vector<bool>& enabled,
                                  float pkeep,
                                  size_t max_row_perbatch) {
  size_t btop = 0;
  std::bernoulli_distribution coin_flip(pkeep);
  auto& rnd = common::GlobalRandom();
  buffered_rowset_.clear();
  // internal temp cache
  SparsePage tmp; tmp.Clear();
  // start working
  dmlc::DataIter<RowBatch>* iter = this->RowIterator();
  iter->BeforeFirst();
    }