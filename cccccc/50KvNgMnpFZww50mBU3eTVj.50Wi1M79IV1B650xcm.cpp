
        
        using namespace swift;
    
    
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
    return true;
  }
  return false;
}
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    void swift::printOpaquePrefixMap(raw_ostream &out, void *_root,
                         void (*printNodeData)(raw_ostream &out, void *node)) {
  auto root = reinterpret_cast<Node*>(_root);
  if (!root) {
    out << '(empty)\n';
    return;
  }
  TreePrinter(out, *printNodeData).print(root, ChildKind::Root);
}
    
    
    {  return forInvalid();
}
    
    
    {
    {    void emitNote(clang::FullSourceLoc Loc, StringRef Message) override {
      // We get invalid note locations when trying to describe where a module
      // is imported and the actual location is in Swift. We also want to ignore
      // things like 'in module X imported from <swift-imported-modules>'.
      if (Loc.isInvalid() || isInSwiftBuffers(Loc))
        return;
      emitDiagnosticMessage(Loc, {}, clang::DiagnosticsEngine::Note, Message,
                            {}, {});
    }
  };
} // end anonymous namespace
    
      bool isStaticMember() const {
    return isImportAsMember() && !selfIndex.hasValue();
  }
    
      /**
   * @brief Returns the 'canonical' version of a (usually) user-specified axis,
   *        allowing for negative indexing (e.g., -1 for the last axis).
   *
   * @param axis_index the axis index.
   *        If 0 <= index < num_axes(), return index.
   *        If -num_axes <= index <= -1, return (num_axes() - (-index)),
   *        e.g., the last axis index (num_axes() - 1) if index == -1,
   *        the second to last if index == -2, etc.
   *        Dies on out of range index.
   */
  inline int CanonicalAxisIndex(int axis_index) const {
    CHECK_GE(axis_index, -num_axes())
        << 'axis ' << axis_index << ' out of range for ' << num_axes()
        << '-D Blob with shape ' << shape_string();
    CHECK_LT(axis_index, num_axes())
        << 'axis ' << axis_index << ' out of range for ' << num_axes()
        << '-D Blob with shape ' << shape_string();
    if (axis_index < 0) {
      return axis_index + num_axes();
    }
    return axis_index;
  }
    
    // A global initialization function that you should call in your main function.
// Currently it initializes google flags and google logging.
void GlobalInit(int* pargc, char*** pargv);
    
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
    
      bool handles_setup_;
  cudnnHandle_t* handle_;
  cudaStream_t*  stream_;
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    // Encode a suitable internal key target for 'target' and return it.
// Uses *scratch as scratch space, and the returned pointer will point
// into this scratch space.
static const char* EncodeKey(std::string* scratch, const Slice& target) {
  scratch->clear();
  PutVarint32(scratch, target.size());
  scratch->append(target.data(), target.size());
  return scratch->data();
}
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size / 5 - 1048576);
}
    
    
    {  std::string tmp1, tmp2;
  ASSERT_OK(db_->Put(WriteOptions(), Key(1000, &tmp1), Value(1000, &tmp2)));
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
  dbi->TEST_CompactMemTable();
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
}
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
     private:
  friend class MemTableIterator;
  friend class MemTableBackwardIterator;
    
            friend Rational operator+(Rational lhs, Rational const& rhs);
        friend Rational operator-(Rational lhs, Rational const& rhs);
        friend Rational operator*(Rational lhs, Rational const& rhs);
        friend Rational operator/(Rational lhs, Rational const& rhs);
        friend Rational operator%(Rational lhs, Rational const& rhs);
    
        Rational result{ prat };
    destroyrat(prat);
    
    
    {
    {    private:
        int32_t m_sign;
        int32_t m_exp;
        std::vector<uint32_t> m_mantissa;
    };
}

    
    // Constructor
// Can throw Out of memory error
CHistoryCollector::CHistoryCollector(ICalcDisplay* pCalcDisplay, std::shared_ptr<IHistoryDisplay> pHistoryDisplay, wchar_t decimalSymbol)
    : m_pHistoryDisplay(pHistoryDisplay)
    , m_pCalcDisplay(pCalcDisplay)
    , m_iCurLineHistStart(-1)
    , m_decimalSymbol(decimalSymbol)
{
    ReinitHistory();
}
    
        struct HISTORYITEM
    {
        HISTORYITEMVECTOR historyItemVector;
    };
    
    namespace CalculatorEngineTests
{
    class CalcEngineTests;
}
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetMaxDigitsReachedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::MaxDigitsReached, AutomationNotificationKind::Other, AutomationNotificationProcessing::ImportantMostRecent);
}
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    #include <folly/GLog.h>
    
    
    {} // namespace detail
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    namespace uri_detail {
    }
    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}
    
    //
// Write a maximum amount of base-converted character digits, of a
// given base, from an unsigned integral type into a byte buffer of
// sufficient size.
//
// This function does not append null terminators.
//
// Output buffer size must be guaranteed by caller (indirectly
// controlled by DigitCount template parameter).
//
// Having these parameters at compile time allows compiler to
// precompute several of the values, use smaller instructions, and
// better optimize surrounding code.
//
// IntegralType:
//   - Something like uint8_t, uint16_t, etc
//
// DigitCount is the maximum number of digits to be printed
//   - This is tied to IntegralType and Base. For example:
//     - uint8_t in base 10 will print at most 3 digits ('255')
//     - uint16_t in base 16 will print at most 4 hex digits ('FFFF')
//
// Base is the desired output base of the string
//   - Base 10 will print [0-9], base 16 will print [0-9a-f]
//
// PrintAllDigits:
//   - Whether or not leading zeros should be printed
//
template <
    class IntegralType,
    IntegralType DigitCount,
    IntegralType Base = IntegralType(10),
    bool PrintAllDigits = false,
    class = typename std::enable_if<
        std::is_integral<IntegralType>::value &&
            std::is_unsigned<IntegralType>::value,
        bool>::type>
inline void writeIntegerString(IntegralType val, char** buffer) {
  char* buf = *buffer;
    }