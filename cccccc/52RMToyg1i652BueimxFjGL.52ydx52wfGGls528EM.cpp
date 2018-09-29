
        
        
    {}  // namespace tesseract.
    
    #include <cstdint>      // for int32_t
    
    // Number of outputs held in each register. 8 x 32 bit ints.
constexpr int kNumOutputsPerRegister = 8;
// Maximum number of registers that we will use.
constexpr int kMaxOutputRegisters = 8;
// Number of inputs in the inputs register.
constexpr int kNumInputsPerRegister = 32;
// Number of inputs in each weight group.
constexpr int kNumInputsPerGroup = 4;
// Number of groups of inputs to be broadcast.
constexpr int kNumInputGroups = kNumInputsPerRegister / kNumInputsPerGroup;
    
    #endif  // TESSERACT_CCMAIN_EQUATIONDETECT_H_

    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    /**
 * Sets up the internal data for iterating the blobs of a new word, then
 * moves the iterator to the given offset.
 */
void PageIterator::BeginWord(int offset) {
  WERD_RES* word_res = it_->word();
  if (word_res == nullptr) {
    // This is a non-text block, so there is no word.
    word_length_ = 0;
    blob_index_ = 0;
    word_ = nullptr;
    return;
  }
  if (word_res->best_choice != nullptr) {
    // Recognition has been done, so we are using the box_word, which
    // is already baseline denormalized.
    word_length_ = word_res->best_choice->length();
    if (word_res->box_word != nullptr) {
      if (word_res->box_word->length() != word_length_) {
        tprintf('Corrupted word! best_choice[len=%d] = %s, box_word[len=%d]: ',
                word_length_, word_res->best_choice->unichar_string().string(),
                word_res->box_word->length());
        word_res->box_word->bounding_box().print();
      }
      ASSERT_HOST(word_res->box_word->length() == word_length_);
    }
    word_ = nullptr;
    // We will be iterating the box_word.
    delete cblob_it_;
    cblob_it_ = nullptr;
  } else {
    // No recognition yet, so a 'symbol' is a cblob.
    word_ = word_res->word;
    ASSERT_HOST(word_->cblob_list() != nullptr);
    word_length_ = word_->cblob_list()->length();
    if (cblob_it_ == nullptr) cblob_it_ = new C_BLOB_IT;
    cblob_it_->set_to_list(word_->cblob_list());
  }
  for (blob_index_ = 0; blob_index_ < offset; ++blob_index_) {
    if (cblob_it_ != nullptr)
      cblob_it_->forward();
  }
}
    
      /**
   * Moves the iterator to the beginning of the paragraph.
   * This class implements this functionality by moving it to the zero indexed
   * blob of the first (leftmost) word on the first row of the paragraph.
   */
  virtual void RestartParagraph();
    
    
    {}  // namespace tesseract.

    
      // Find all editable parameters used within tesseract and create a
  // SVMenuNode tree from it.
  SVMenuNode *BuildListOfAllLeaves(tesseract::Tesseract *tess);
    
    class Node;
    
    DeccelAmplitude* DeccelAmplitude::create(Action *action, float duration)
{
    DeccelAmplitude *ret = new (std::nothrow) DeccelAmplitude();
    if (ret && ret->initWithAction(action, duration))
    {
        ret->autorelease();
        return ret;
    }
    }
    
    void ActionInstant::step(float /*dt*/)
{
    float updateDt = 1;
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript)
    {
        if (ScriptEngineManager::sendActionEventToJS(this, kActionUpdate, (void *)&updateDt))
            return;
    }
#endif
    update(updateDt);
}
    
        /** Helper constructor to create an array of spawned actions. 
     *
     * @param action1   The first sequenceable action.
     * @param args  The va_list variable.
     * @return  An autoreleased Spawn object.
     * @js NA
     */
    static Spawn* createWithVariableList(FiniteTimeAction *action1, va_list args);
    
    #include '2d/CCActionGrid3D.h'
    
    /**
@brief Progress from a percentage to another percentage.
@since v0.99.1
*/
class CC_DLL ProgressFromTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with a duration, a 'from' percentage and a 'to' percentage.
     * @param duration Specify the duration of the ProgressFromTo action. It's a value in seconds.
     * @param fromPercentage Specify the source percentage.
     * @param toPercentage Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressFromTo action; otherwise, return nil.
     */
    static ProgressFromTo* create(float duration, float fromPercentage, float toPercentage);
    }
    
    void AnimationCache::parseVersion1(const ValueMap& animations)
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    }
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    #include 'guetzli/jpeg_data_decoder.h'
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    void BENCHFUN(insertFront)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.insert(v.begin(), obj); }
  });
}
    
    BENCHMARK_RELATIVE(format_nested_fbstrings, iters) {
  BenchmarkSuspender suspender;
  while (iters--) {
    for (int i = 0; i < 1000; ++i) {
      fbstring out;
      suspender.dismissing([&] {
        format(
            &out,
            '{} {}',
            format('{} {}', i, i + 1).fbstr(),
            format('{} {}', -i, -i - 1).fbstr());
      });
    }
  }
}
    
    // ============================================================================
// folly/test/GLogBenchmark.cpp                    relative  time/iter  iters/s
// ============================================================================
// skip_overhead                                               36.37ns   27.49M
// dev_null_log_overhead                                        2.61us  382.57K
// ============================================================================
    
    // Structure of note section for the probe.
#define FOLLY_SDT_NOTE_CONTENT(provider, name, has_semaphore, arg_template)    \
  FOLLY_SDT_ASM_1(990: FOLLY_SDT_NOP)                                          \
  FOLLY_SDT_ASM_3(     .pushsection .note.stapsdt,'','note')                   \
  FOLLY_SDT_ASM_1(     .balign 4)                                              \
  FOLLY_SDT_ASM_3(     .4byte 992f-991f, 994f-993f, FOLLY_SDT_NOTE_TYPE)       \
  FOLLY_SDT_ASM_1(991: .asciz FOLLY_SDT_NOTE_NAME)                             \
  FOLLY_SDT_ASM_1(992: .balign 4)                                              \
  FOLLY_SDT_ASM_1(993: FOLLY_SDT_ASM_ADDR 990b)                                \
  FOLLY_SDT_ASM_1(     FOLLY_SDT_ASM_ADDR 0) /*Reserved for Base Address*/     \
  FOLLY_SDT_SEMAPHORE_NOTE_##has_semaphore(provider, name)                     \
  FOLLY_SDT_ASM_STRING(provider)                                               \
  FOLLY_SDT_ASM_STRING(name)                                                   \
  FOLLY_SDT_ASM_STRING(arg_template)                                           \
  FOLLY_SDT_ASM_1(994: .balign 4)                                              \
  FOLLY_SDT_ASM_1(     .popsection)
    
    namespace detail {
    }
    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
    #if FOLLY_HAVE_LIBZ
    
     private:
  // Matches packed_sync_pointer.  Must be > max number of local
  // counts.  This is the max number of threads that can access this
  // atomic_shared_ptr at once before we start blocking.
  static constexpr unsigned EXTERNAL_OFFSET{0x2000};
  // Bit signifying aliased constructor
  static constexpr unsigned ALIASED_PTR{0x4000};