
        
        
    {
    {#ifdef __cplusplus
}} // extern 'C', namespace swift
#endif
    
      void compute();
    
    namespace swift {
class DependencyTracker;
class ModuleDecl;
class SourceFile;
    }
    
    class List final : public MarkupASTNode,
    private llvm::TrailingObjects<List, MarkupASTNode *> {
  friend TrailingObjects;
    }
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
    
    {}  // namespace leveldb
    
    static std::string MakeFileName(const std::string& name, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return name + buf;
}
    
    WriteBatch::Handler::~Handler() { }
    
        if (bytes_ > 0) {
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / (finish - start_));
      if (!message_.empty()) {
        message_  = std::string(rate) + ' ' + message_;
      } else {
        message_ = rate;
      }
    }
    
      // keys[0,n-1] contains a list of keys (potentially with duplicates)
  // that are ordered according to the user supplied comparator.
  // Append a filter that summarizes keys[0,n-1] to *dst.
  //
  // Warning: do not change the initial contents of *dst.  Instead,
  // append the newly constructed filter to *dst.
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst)
      const = 0;
    
    
    {  int width = input_layer->width();
  int height = input_layer->height();
  float* input_data = input_layer->mutable_cpu_data();
  for (int i = 0; i < input_layer->channels(); ++i) {
    cv::Mat channel(height, width, CV_32FC1, input_data);
    input_channels->push_back(channel);
    input_data += width * height;
  }
}
    
      void Transform(const Datum& datum, Dtype* transformed_data);
  // Tranformation parameters
  TransformationParameter param_;
    
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
    
    #include <vector>
    
      virtual inline const char* type() const { return 'Convolution'; }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #include <vector>
    
    namespace caffe {
    }
    
    #endif  // CAFFE_DECONV_LAYER_HPP_

    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Exponential Linear Unit non-linearity @f$
 *        y = \left\{
 *        \begin{array}{lr}
 *            x                  & \mathrm{if} \; x > 0 \\
 *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
 *        \end{array} \right.
 *      @f$.  
 */
template <typename Dtype>
class ELULayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ELUParameter elu_param,
   *     with ELULayer options:
   *   - alpha (\b optional, default 1).
   *     the value @f$ \alpha @f$ by which controls saturation for negative inputs.
   */
  explicit ELULayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    #ifndef           PGEDIT_H
#define           PGEDIT_H
    
    // Runs classify_word_pass1() on the current word. Outputs Tesseract's
// raw choice as a result of the classification. For words labeled with a
// single unichar also outputs all alternatives from blob_choices of the
// best choice.
void Tesseract::ambigs_classify_and_output(const char *label,
                                           PAGE_RES_IT* pr_it,
                                           FILE *output_file) {
  // Classify word.
  fflush(stdout);
  WordData word_data(*pr_it);
  SetupWordPassN(1, &word_data);
  classify_word_and_language(1, pr_it, &word_data);
  WERD_RES* werd_res = word_data.word;
  WERD_CHOICE *best_choice = werd_res->best_choice;
  ASSERT_HOST(best_choice != NULL);
    }
    
    
/**********************************************************************
 * operator*=
 *
 * Scalar multiply of an ICOORD.
 **********************************************************************/
    
    enum NDK_CRASH_PARSER_STATE {
    EXPECTS_CRASH_DUMP,
    EXPECTS_CRASH_DUMP_HEADER,
    EXPECTS_CRASH_DUMP_CONTENT,
    EXPECTS_CRASH_DUMP_END,
};
    
    
    {    void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
        
#ifdef ANDROID
        char stack[4096] = {0};
        android_callstack(stack, sizeof(stack));
        xfatal2(TSF'%_', stack);
#endif
    }
}

    
    
    {        if (_name) m_strmap[_name] = _spy;
    }
    
    
    {  return Pos;
}
    
      if (Options.UseCounters) {
    uint64_t CounterDelta =
        EF->__sanitizer_update_counter_bitset_and_clear_counters(
            C->CounterBitmap.data());
    if (CounterDelta > 0) {
      Res = true;
      C->CounterBitmapBits += CounterDelta;
    }
  }
    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    unsigned NumberOfCpuCores() {
  unsigned N = std::thread::hardware_concurrency();
  if (!N) {
    Printf('WARNING: std::thread::hardware_concurrency not well defined for '
           'your platform. Assuming CPU count of 1.\n');
    N = 1;
  }
  return N;
}
    
    #endif // LIBFUZZER_APPLE
