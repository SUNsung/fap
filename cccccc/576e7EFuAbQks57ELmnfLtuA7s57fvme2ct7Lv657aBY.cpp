
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_

    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Activates a CUDA context within an enclosing scope.
class ScopedActivateExecutorContext {
 public:
  // Form that takes a CUDA executor implementation.
  explicit ScopedActivateExecutorContext(CUDAExecutor* cuda_exec);
    }
    
    CUDAEvent::~CUDAEvent() {}
    
      // If the conforming type is a class, add a class-constrained 'Self'
  // parameter.
  if (covariantSelf) {
    auto paramTy = GenericTypeParamType::get(/*depth=*/0, /*index=*/0, ctx);
    builder.addGenericParameter(paramTy);
  }
    
      MutableArrayRef<Type> getReplacementTypes() {
    return MutableArrayRef<Type>(getTrailingObjects<Type>(),
                                 getNumReplacementTypes());
  }
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
          if (node->Further) {
        // Further indent, and include the line to the right child if
        // there is one.
        IndentScope is(this, node->Right ? '|   ' : '    ');
        print(node->Further, ChildKind::Further);
      }
    
    DummyTaskQueue::~DummyTaskQueue() = default;
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
}
    
     public:
  virtual void GenerateCFunctionDeclarations(io::Printer* printer) const;
  virtual void GenerateCFunctionImplementations(io::Printer* printer) const;
  virtual void DetermineForwardDeclarations(std::set<string>* fwd_decls) const;
    
    
    {
    {
    {
    {
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ExtensionGenerator);
};
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_MESSAGE_H__

    
      /// @brief Deprecated legacy shape accessor num: use shape(0) instead.
  inline int num() const { return LegacyShape(0); }
  /// @brief Deprecated legacy shape accessor channels: use shape(1) instead.
  inline int channels() const { return LegacyShape(1); }
  /// @brief Deprecated legacy shape accessor height: use shape(2) instead.
  inline int height() const { return LegacyShape(2); }
  /// @brief Deprecated legacy shape accessor width: use shape(3) instead.
  inline int width() const { return LegacyShape(3); }
  inline int LegacyShape(int index) const {
    CHECK_LE(num_axes(), 4)
        << 'Cannot use legacy accessors on Blobs with > 4 axes.';
    CHECK_LT(index, 4);
    CHECK_GE(index, -4);
    if (index >= num_axes() || index < -num_axes()) {
      // Axis is out of range, but still in [0, 3] (or [-4, -1] for reverse
      // indexing) -- this special case simulates the one-padding used to fill
      // extraneous axes of legacy blobs.
      return 1;
    }
    return shape(index);
  }
    
    
    {  shared_ptr<boost::thread> thread_;
};
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/neuron_layer.hpp'
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Convolves the input image with a bank of learned filters,
 *        and (optionally) adds biases.
 *
 *   Caffe convolves by reduction to matrix multiplication. This achieves
 *   high-throughput and generality of input and filter dimensions but comes at
 *   the cost of memory for matrices. This makes use of efficiency in BLAS.
 *
 *   The input is 'im2col' transformed to a channel K' x H x W data matrix
 *   for multiplication with the N x K' x H x W filter matrix to yield a
 *   N' x H x W output matrix that is then 'col2im' restored. K' is the
 *   input channel * kernel height * kernel width dimension of the unrolled
 *   inputs so that the im2col matrix has a column for each input region to
 *   be filtered. col2im restores the output spatial structure by rolling up
 *   the output channel N' columns of the output matrix.
 */
template <typename Dtype>
class ConvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  /**
   * @param param provides ConvolutionParameter convolution_param,
   *    with ConvolutionLayer options:
   *  - num_output. The number of filters.
   *  - kernel_size / kernel_h / kernel_w. The filter dimensions, given by
   *  kernel_size for square filters or kernel_h and kernel_w for rectangular
   *  filters.
   *  - stride / stride_h / stride_w (\b optional, default 1). The filter
   *  stride, given by stride_size for equal dimensions or stride_h and stride_w
   *  for different strides. By default the convolution is dense with stride 1.
   *  - pad / pad_h / pad_w (\b optional, default 0). The zero-padding for
   *  convolution, given by pad for equal dimensions or pad_h and pad_w for
   *  different padding. Input padding is computed implicitly instead of
   *  actually padding.
   *  - dilation (\b optional, default 1). The filter
   *  dilation, given by dilation_size for equal dimensions for different
   *  dilation. By default the convolution has dilation 1.
   *  - group (\b optional, default 1). The number of filter groups. Group
   *  convolution is a method for reducing parameterization by selectively
   *  connecting input and output channels. The input and output channel dimensions must be divisible
   *  by the number of groups. For group @f$ \geq 1 @f$, the
   *  convolutional filters' input and output channels are separated s.t. each
   *  group takes 1 / group of the input channels and makes 1 / group of the
   *  output channels. Concretely 4 input channels, 8 output channels, and
   *  2 groups separate input channels 1-2 and output channels 1-4 into the
   *  first group and input channels 3-4 and output channels 5-8 into the second
   *  group.
   *  - bias_term (\b optional, default true). Whether to have a bias.
   *  - engine: convolution has CAFFE (matrix multiplication) and CUDNN (library
   *    kernels + stream parallelism) engines.
   */
  explicit ConvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    #ifndef TESSERACT_ARCH_INTSIMDMATRIX_H_
#define TESSERACT_ARCH_INTSIMDMATRIX_H_
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
      bool has_leaders;   // does the line contain leader dots (.....)?
  bool has_drop_cap;  // does the line have a drop cap?
  int pix_ldistance;  // distance to the left pblock boundary in pixels
  int pix_rdistance;  // distance to the right pblock boundary in pixels
  float pix_xheight;  // guessed xheight for the line
  int average_interword_space; // average space between words in pixels.
    
    
    {  // Do sanity checks and minor fixes on best_choice.
  if (word->best_choice->length() > word_length) {
    word->best_choice->make_bad();  // should never happen
    tprintf('recog_word: Discarded long string \'%s\''
            ' (%d characters vs %d blobs)\n',
            word->best_choice->unichar_string().string(),
            word->best_choice->length(), word_length);
    tprintf('Word is at:');
    word->word->bounding_box().print();
  }
  if (word->best_choice->length() < word_length) {
    UNICHAR_ID space_id = unicharset.unichar_to_id(' ');
    while (word->best_choice->length() < word_length) {
      word->best_choice->append_unichar_id(space_id, 1, 0.0,
                                           word->best_choice->certainty());
    }
  }
}
    
      /// Get a clone/copy of the source image rectangle.
  /// The returned Pix must be pixDestroyed.
  /// This function will be used in the future by the page layout analysis, and
  /// the layout analysis that uses it will only be available with Leptonica,
  /// so there is no raw equivalent.
  Pix* GetPixRect();
    
    
    {  if (HPHP::jit::deltaFits(imm32, HPHP::sz::word)) {
    // immediate has only low 16 bits set, use simple load immediate
    li(rt, static_cast<int16_t>(imm32));
    if (imm32 & (1ULL << 15) && !(imm32 & (1ULL << 16))) {
      // clear extended sign that should not be set
      // (32bits number. Sets the 16th bit but not the 17th, it's not negative!)
      clrldi(rt, rt, 48);
    } else {
      emitNop(instr_size_in_bytes); // emit nop for a balanced li32 with 2 instr
    }
  } else {
    // immediate has 32 bits set
    lis(rt, static_cast<int16_t>(imm32 >> 16));
    ori(rt, rt, static_cast<int16_t>(imm32 & UINT16_MAX));
  }
}
    
    
    {  // We had a counted inner array---we need to do an O(N) copy to get the
  // collection into the request local heap.
  auto const apcArr = APCArray::fromHandle(m_arrayHandle);
  auto const col = Object::attach(collections::alloc(m_colType));
  switch (m_colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    fillCollection(static_cast<BaseVector*>(col.get()), apcArr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    fillCollection(static_cast<BaseSet*>(col.get()), apcArr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    fillMap(static_cast<BaseMap*>(col.get()), apcArr);
    break;
  case CollectionType::Pair:
    always_assert(0);
    break;
  }
  return col;
}
    
    void Config::ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                    const std::string& iniStr,
                                    std::string& with_includes) {
  std::istringstream iss(iniStr);
  std::string line;
  while (std::getline(iss, line)) {
    // Handle cases like
    //   #include           ''
    //   ##includefoo barbaz'myconfig.ini' how weird is that
    // Anything that is not a syntactically correct #include 'file' after
    // this pre-processing, will be treated as an ini comment and processed
    // as such in the ini parser
    auto pos = line.find_first_not_of(' ');
    if (pos == std::string::npos ||
        line.compare(pos, strlen('#include'), '#include') != 0) {
      // treat as normal ini line, including comment that doesn't start with
      // #include
      with_includes += line + '\n';
      continue;
    }
    pos += strlen('#include');
    auto start = line.find_first_not_of(' ', pos);
    auto end = line.find_last_not_of(' ');
    if ((start == std::string::npos || line[start] != ''') ||
        (end == start || line[end] != ''')) {
      with_includes += line + '\n'; // treat as normal comment
      continue;
    }
    std::string file = line.substr(start + 1, end - start - 1);
    const std::string logger_file = file;
    boost::filesystem::path p(file);
    if (!p.is_absolute()) {
      boost::filesystem::path opath(original_ini_filename);
      p = opath.parent_path()/p;
    }
    if (boost::filesystem::exists(p)) {
      std::ifstream ifs(p.string());
      const std::string contents((std::istreambuf_iterator<char>(ifs)),
                                 std::istreambuf_iterator<char>());
      Config::ReplaceIncludesWithIni(p.string(), contents, with_includes);
    } else {
      Logger::Warning('ini include file %s not found', logger_file.c_str());
    }
  }
}
    
      EXCEPTION_COMMON_IMPL(ExtendedException);
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
    ///////////////////////////////////////////////////////////////////////////////
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_basic_escape()
{
   ++m_position;
   bool result = true;
   switch(this->m_traits.escape_syntax_type(*m_position))
   {
   case regex_constants::syntax_open_mark:
      return parse_open_paren();
   case regex_constants::syntax_close_mark:
      return false;
   case regex_constants::syntax_plus:
      if(this->flags() & regex_constants::bk_plus_qm)
      {
         ++m_position;
         return parse_repeat(1);
      }
      else
         return parse_literal();
   case regex_constants::syntax_question:
      if(this->flags() & regex_constants::bk_plus_qm)
      {
         ++m_position;
         return parse_repeat(0, 1);
      }
      else
         return parse_literal();
   case regex_constants::syntax_open_brace:
      if(this->flags() & regbase::no_intervals)
         return parse_literal();
      ++m_position;
      return parse_repeat_range(true);
   case regex_constants::syntax_close_brace:
      if(this->flags() & regbase::no_intervals)
         return parse_literal();
      fail(regex_constants::error_brace, this->m_position - this->m_base, 'Found a closing repetition operator } with no corresponding {.');
      return false;
   case regex_constants::syntax_or:
      if(this->flags() & regbase::bk_vbar)
         return parse_alt();
      else
         result = parse_literal();
      break;
   case regex_constants::syntax_digit:
      return parse_backref();
   case regex_constants::escape_type_start_buffer:
      if(this->flags() & regbase::emacs_ex)
      {
         ++m_position;
         this->append_state(syntax_element_buffer_start);
      }
      else
         result = parse_literal();
      break;
   case regex_constants::escape_type_end_buffer:
      if(this->flags() & regbase::emacs_ex)
      {
         ++m_position;
         this->append_state(syntax_element_buffer_end);
      }
      else
         result = parse_literal();
      break;
   case regex_constants::escape_type_word_assert:
      if(this->flags() & regbase::emacs_ex)
      {
         ++m_position;
         this->append_state(syntax_element_word_boundary);
      }
      else
         result = parse_literal();
      break;
   case regex_constants::escape_type_not_word_assert:
      if(this->flags() & regbase::emacs_ex)
      {
         ++m_position;
         this->append_state(syntax_element_within_word);
      }
      else
         result = parse_literal();
      break;
   case regex_constants::escape_type_left_word:
      if(this->flags() & regbase::emacs_ex)
      {
         ++m_position;
         this->append_state(syntax_element_word_start);
      }
      else
         result = parse_literal();
      break;
   case regex_constants::escape_type_right_word:
      if(this->flags() & regbase::emacs_ex)
      {
         ++m_position;
         this->append_state(syntax_element_word_end);
      }
      else
         result = parse_literal();
      break;
   default:
      if(this->flags() & regbase::emacs_ex)
      {
         bool negate = true;
         switch(*m_position)
         {
         case 'w':
            negate = false;
            BOOST_FALLTHROUGH;
         case 'W':
            {
            basic_char_set<charT, traits> char_set;
            if(negate)
               char_set.negate();
            char_set.add_class(this->m_word_mask);
            if(0 == this->append_set(char_set))
            {
               fail(regex_constants::error_ctype, m_position - m_base);
               return false;
            }
            ++m_position;
            return true;
            }
         case 's':
            negate = false;
            BOOST_FALLTHROUGH;
         case 'S':
            return add_emacs_code(negate);
         case 'c':
         case 'C':
            // not supported yet:
            fail(regex_constants::error_escape, m_position - m_base, 'The \\c and \\C escape sequences are not supported by POSIX basic regular expressions: try the Perl syntax instead.');
            return false;
         default:
            break;
         }
      }
      result = parse_literal();
      break;
   }
   return result;
}
    
    
    {} /* namespace boost */
#endif /* __cplusplus */
#endif /* include guard */
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_assertion(bool r)
{
   saved_assertion<BidiIterator>* pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
   pstate = pmp->pstate;
   position = pmp->position;
   bool result = (r == pmp->positive);
   m_recursive_result = pmp->positive ? r : !r;
   boost::BOOST_REGEX_DETAIL_NS::inplace_destroy(pmp++);
   m_backup_state = pmp;
   m_unwound_lookahead = true;
   return !result; // return false if the assertion was matched to stop search.
}
    
    

    
    template <class OutputIterator, class BidirectionalIterator, class traits, class charT, class Formatter>
OutputIterator regex_replace(OutputIterator out,
                         BidirectionalIterator first,
                         BidirectionalIterator last,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt, 
                         match_flag_type flags = match_default)
{
   regex_iterator<BidirectionalIterator, charT, traits> i(first, last, e, flags);
   regex_iterator<BidirectionalIterator, charT, traits> j;
   if(i == j)
   {
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(first, last, out);
   }
   else
   {
      BidirectionalIterator last_m(first);
      while(i != j)
      {
         if(!(flags & regex_constants::format_no_copy))
            out = BOOST_REGEX_DETAIL_NS::copy(i->prefix().first, i->prefix().second, out); 
         out = i->format(out, fmt, flags, e);
         last_m = (*i)[0].second;
         if(flags & regex_constants::format_first_only)
            break;
         ++i;
      }
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(last_m, last, out);
   }
   return out;
}
    
    /*! \brief High precision gradient statistics pair with integer backed
 * storage. Operators are associative where floating point versions are not
 * associative. */
using GradientPairInteger = detail::GradientPairInternal<int64_t>;
    
     protected:
  char GetChar() override {
    return fin_.get();
  }
  /*! \brief to be implemented by child, check if end of stream */
  bool IsEnd() override {
    return fin_.eof();
  }
    
    
    {
    {
    {  // base margin
  bst_float base_margin;
  // model parameter
  GBTreeModelParam param;
  /*! \brief vector of trees stored in the model */
  std::vector<std::unique_ptr<RegTree> > trees;
  /*! \brief for the update process, a place to keep the initial trees */
  std::vector<std::unique_ptr<RegTree> > trees_to_update;
  /*! \brief some information indicator of the tree, reserved */
  std::vector<int> tree_info;
};
}  // namespace gbm
}  // namespace xgboost

    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }