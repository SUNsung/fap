
        
          bool is_started() const;
    
    // Serialize LayerParameter to protocol buffer
template <typename Dtype>
void Layer<Dtype>::ToProto(LayerParameter* param, bool write_diff) {
  param->Clear();
  param->CopyFrom(layer_param_);
  param->clear_blobs();
  for (int i = 0; i < blobs_.size(); ++i) {
    blobs_[i]->ToProto(param->add_blobs(), write_diff);
  }
}
    
      // If there are two top blobs, then the second blob will contain
  // accuracies per class.
  virtual inline int MinTopBlobs() const { return 1; }
  virtual inline int MaxTopBlobs() const { return 2; }
    
      /// @brief The spatial dimensions of a filter kernel.
  Blob<int> kernel_shape_;
  /// @brief The spatial dimensions of the stride.
  Blob<int> stride_;
  /// @brief The spatial dimensions of the padding.
  Blob<int> pad_;
  /// @brief The spatial dimensions of the dilation.
  Blob<int> dilation_;
  /// @brief The spatial dimensions of the convolution input.
  Blob<int> conv_input_shape_;
  /// @brief The spatial dimensions of the col_buffer.
  vector<int> col_buffer_shape_;
  /// @brief The spatial dimensions of the output.
  vector<int> output_shape_;
  const vector<int>* bottom_shape_;
    
    
    {}  // namespace caffe
    
     protected:
  // Function to compute part of a matrix.vector multiplication. The weights
  // are in a very specific order (see above) in w, which is multiplied by
  // u of length num_in, to produce output v after scaling the integer results
  // by the corresponding member of scales.
  // The amount of w and scales consumed is fixed and not available to the
  // caller. The number of outputs written to v will be at most num_out.
  typedef void (*PartialFunc)(const int8_t* w, const double* scales,
                              const int8_t* u, int num_in, int num_out,
                              double* v);
    
      // Print statistics.
  void print_scores(void) const;
  void print_scores(int orientation_id) const;
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    // Gets the up to the first 3 prefixes from s (split by _).
// For example, tesseract_foo_bar will be split into tesseract,foo and bar.
void ParamsEditor::GetPrefixes(const char* s, STRING* level_one,
                               STRING* level_two,
                               STRING* level_three) {
  std::unique_ptr<char[]> p(new char[1024]);
  GetFirstWords(s, 1, p.get());
  *level_one = p.get();
  GetFirstWords(s, 2, p.get());
  *level_two = p.get();
  GetFirstWords(s, 3, p.get());
  *level_three = p.get();
}
    
      // Construct the cartesian product of the best_choices of word(1) and word2.
  WERD_CHOICE_LIST joined_choices;
  WERD_CHOICE_IT jc_it(&joined_choices);
  WERD_CHOICE_IT bc1_it(&word->best_choices);
  WERD_CHOICE_IT bc2_it(&word2->best_choices);
  int num_word1_choices = word->best_choices.length();
  int total_joined_choices = num_word1_choices;
  // Nota Bene: For the main loop here, we operate only on the 2nd and greater
  // word2 choices, and put them in the joined_choices list. The 1st word2
  // choice gets added to the original word1 choices in-place after we have
  // finished with them.
  int bc2_index = 1;
  for (bc2_it.forward(); !bc2_it.at_first(); bc2_it.forward(), ++bc2_index) {
    if (total_joined_choices >= kTooManyAltChoices &&
        bc2_index > kAltsPerPiece)
      break;
    int bc1_index = 0;
    for (bc1_it.move_to_first(); bc1_index < num_word1_choices;
        ++bc1_index, bc1_it.forward()) {
      if (total_joined_choices >= kTooManyAltChoices &&
          bc1_index > kAltsPerPiece)
        break;
      WERD_CHOICE *wc = new WERD_CHOICE(*bc1_it.data());
      *wc += *bc2_it.data();
      jc_it.add_after_then_move(wc);
      ++total_joined_choices;
    }
  }
  // Now that we've filled in as many alternates as we want, paste the best
  // choice for word2 onto the original word alt_choices.
  bc1_it.move_to_first();
  bc2_it.move_to_first();
  for (bc1_it.mark_cycle_pt(); !bc1_it.cycled_list(); bc1_it.forward()) {
    *bc1_it.data() += *bc2_it.data();
  }
  bc1_it.move_to_last();
  bc1_it.add_list_after(&joined_choices);
    
    namespace tesseract {
    }
    
        float32* x; //vertex arrays
    float32* y;
    int32 nVertices;
	
	float32 area;
	bool areaIsSet;
	
    b2Polygon(float32* _x, float32* _y, int32 nVert);
    b2Polygon(b2Vec2* v, int32 nVert);
	b2Polygon();
    ~b2Polygon();
	
	float32 GetArea();
	
	void MergeParallelEdges(float32 tolerance);
    b2Vec2* GetVertexVecs();
    b2Polygon(b2Triangle& t);
    void Set(const b2Polygon& p);
    bool IsConvex();
	bool IsCCW();
	bool IsUsable(bool printError);
	bool IsUsable();
    bool IsSimple();
   // void AddTo(b2FixtureDef& pd);
	
    b2Polygon* Add(b2Triangle& t);
    
    
    {	};
    
    					// try each CW
					for (unsigned int uiCW = 0; uiCW < CW_RANGES; uiCW++)
					{
						unsigned int auiPixelSelectors[PIXELS / 2];
						ColorFloatRGBA	afrgbaDecodedPixels[PIXELS / 2];
						float afPixelErrors[PIXELS / 2] = { FLT_MAX, FLT_MAX, FLT_MAX, FLT_MAX, 
															FLT_MAX, FLT_MAX, FLT_MAX, FLT_MAX };
    }
    
    
  FT_LOCAL( FT_Error )
  af_latin_metrics_init( AF_LatinMetrics  metrics,
                         FT_Face          face );
    
      The output buffer must be at least 5% larger than the input buffer
  and can not be smaller than 66 bytes.
    
    #define MIN(a,b) ((a)<(b) ? (a):(b))
#define MAX(a,b) ((a)>(b) ? (a):(b))
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    /** 16x16 multiply-add where the result fits in 32 bits */
#undef MAC16_16
static OPUS_INLINE opus_val32 MAC16_16_armv5e(opus_val32 c, opus_val16 a,
 opus_val16 b)
{
  int res;
  __asm__(
      '#MAC16_16\n\t'
      'smlabb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b), 'r'(c)
  );
  return res;
}
#define MAC16_16(c, a, b) (MAC16_16_armv5e(c, a, b))
    
    /********************************************************************/
/*                    SIGNAL PROCESSING FUNCTIONS                   */
/********************************************************************/
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    namespace log {
    }
    
      uint64_t FirstLogFile() {
    return GetFiles(kLogFile)[0];
  }
    
    class TestState {
 public:
  ConcurrentTest t_;
  int seed_;
  port::AtomicPointer quit_flag_;
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.h
 * \brief conversion between tensor and caffeBlob
 * \author Haoran Wang
*/
#ifndef PLUGIN_CAFFE_CAFFE_BLOB_H_
#define PLUGIN_CAFFE_CAFFE_BLOB_H_
    
    
    {    return false;
  }
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
      inline void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    std::vector<std::pair<std::string, std::string> > kwargs_left;
    // init batch param, it could have similar param with
    kwargs_left = param_.InitAllowUnknown(kwargs);
    // Init space for out
    out_.inst_index = new unsigned[param_.batch_size];
    out_.batch_size = param_.batch_size;
    out_.data.clear();
    // init base iterator
    base_->Init(kwargs);
  }
    
    
    
    
    {  SrcPos start;
  SrcPos past;
};
    
    #endif

    
    
    {
    {      write(ini_fd, line.c_str(), line.length());
      write(ini_fd, '\n', 1);
      cnt += 2;
      continue;
    }
    if (argv[cnt][0] != '-') {
      if (show) {
        newargv.push_back('-w');
      } else {
        newargv.push_back(lint ? '-l' : '-f');
      }
      newargv.push_back(argv[cnt++]);
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '--') == 0) {
      break;
    }
    cnt++; // skip unknown options
  }
    
    #include 'hphp/runtime/base/file.h'
    
    static void ParseFile(benchmark::State& state, const char* filename)
{
    while (state.KeepRunning())
    {
        state.PauseTiming();
        auto* f = new std::ifstream(filename);
        auto* j = new json();
        state.ResumeTiming();
    }
    }
    
      std::string const& fname = FLAGS_benchmark_out;
  if (fname.empty() && file_reporter) {
    Err << 'A custom file reporter was provided but '
           '--benchmark_out=<file> was not specified.'
        << std::endl;
    std::exit(1);
  }
  if (!fname.empty()) {
    output_file.open(fname);
    if (!output_file.is_open()) {
      Err << 'invalid file name: '' << fname << std::endl;
      std::exit(1);
    }
    if (!file_reporter) {
      default_file_reporter = internal::CreateReporter(
          FLAGS_benchmark_out_format, ConsoleReporter::OO_None);
      file_reporter = default_file_reporter.get();
    }
    file_reporter->SetOutputStream(&output_file);
    file_reporter->SetErrorStream(&output_file);
  }
    
    typedef void(AbortHandlerT)();
    
    bool IsColorTerminal() {
#if BENCHMARK_OS_WINDOWS
  // On Windows the TERM variable is usually not set, but the
  // console there does support colors.
  return 0 != _isatty(_fileno(stdout));
#else
  // On non-Windows platforms, we rely on the TERM variable. This list of
  // supported TERM values is copied from Google Test:
  // <https://github.com/google/googletest/blob/master/googletest/src/gtest.cc#L2925>.
  const char* const SUPPORTED_TERM_VALUES[] = {
      'xterm',         'xterm-color',     'xterm-256color',
      'screen',        'screen-256color', 'tmux',
      'tmux-256color', 'rxvt-unicode',    'rxvt-unicode-256color',
      'linux',         'cygwin',
  };
    }
    
    
    {}  // end namespace benchmark
    
    namespace benchmark {
// Parses 'str' for a 32-bit signed integer.  If successful, writes the result
// to *value and returns true; otherwise leaves *value unchanged and returns
// false.
bool ParseInt32(const std::string& src_text, const char* str, int32_t* value);
    }
    
      // FIXME: Add locking to output.
  template <class Tp>
  friend LogType& operator<<(LogType&, Tp const&);
  friend LogType& operator<<(LogType&, EndLType*);