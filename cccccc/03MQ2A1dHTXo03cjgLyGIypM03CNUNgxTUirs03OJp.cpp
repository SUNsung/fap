
        
          auto source =
    GenericSignatureBuilder::FloatingRequirementSource::forAbstract();
    
    public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
        if (info.bytes == 0)
      return false;
    
    void DiverseStackBase::pushNewStorageSlow(std::size_t needed) {
  bool wasInline = isAllocatedInline();
    }
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    #include <map>
#include <string>
#include <vector>
    
      // If there are two top blobs, then the second blob will contain
  // accuracies per class.
  virtual inline int MinTopBlobs() const { return 1; }
  virtual inline int MaxTopBlobs() const { return 2; }
    
    #include <vector>
    
    
    {  int size_;
  Dtype alpha_, beta_, k_;
};
#endif
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    template <$for j, [[typename Generator$j]]>
internal::CartesianProductHolder$i<$for j, [[Generator$j]]> Combine(
    $for j, [[const Generator$j& g$j]]) {
  return internal::CartesianProductHolder$i<$for j, [[Generator$j]]>(
      $for j, [[g$j]]);
}
    
    // A copyable object representing the result of a test part (i.e. an
// assertion or an explicit FAIL(), ADD_FAILURE(), or SUCCESS()).
//
// Don't inherit from TestPartResult as its destructor is not virtual.
class GTEST_API_ TestPartResult {
 public:
  // The possible outcomes of a test part (i.e. an assertion or an
  // explicit SUCCEED(), FAIL(), or ADD_FAILURE()).
  enum Type {
    kSuccess,          // Succeeded.
    kNonFatalFailure,  // Failed but the test can continue.
    kFatalFailure      // Failed and the test should be terminated.
  };
    }
    
      // Removes the given event listener from the list and returns it.  It then
  // becomes the caller's responsibility to delete the listener. Returns
  // NULL if the listener is not found in the list.
  TestEventListener* Release(TestEventListener* listener);
    
      // Waits for the death test to finish and returns its status.
  virtual int Wait() = 0;
    
    template <typename T>
class TypeIdHelper {
 public:
  // dummy_ must not have a const type.  Otherwise an overly eager
  // compiler (e.g. MSVC 7.1 & 8.0) may try to merge
  // TypeIdHelper<T>::dummy_ for different Ts as an 'optimization'.
  static bool dummy_;
};
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
      size_t Length() const {
    return c_string_ == NULL ? 0 : strlen(c_string_);
  }
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
    
    {
    {}  // namespace exec
}  // namespace mxnet

    
      ~PrefetcherIter() {
    while (recycle_queue_.size() != 0) {
      DataBatch *batch = recycle_queue_.front();
      recycle_queue_.pop();
      delete batch;
    }
    delete out_;
    iter.Destroy();
  }
    
    
    {
    {inline void Dequantize2BitImpl(mshadow::Stream<mshadow::cpu> *s,
                               const std::vector<mxnet::TBlob> &inputs,
                               const float threshold) {
  Dequantize2BitKernelLaunch(s, inputs, threshold);
}
}  // namespace kvstore
}  // namespace mxnet
    
    namespace mxnet {
namespace op {
template<typename DType>
class CuDNNLocalResponseNormOp : public Operator {
 public:
  explicit CuDNNLocalResponseNormOp(LRNParam param) {
    param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
  }
    }
    }
    }
    
    void
RuleBasedCollator::internalAddContractions(UChar32 c, UnicodeSet &set, UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode)) { return; }
    ContractionsAndExpansions(&set, NULL, NULL, FALSE).forCodePoint(data, c, errorCode);
}
    
    UnicodeString &ScientificNumberFormatter::MarkupStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets & /*unusedDecimalFormatSets*/,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    FieldPosition fp;
    int32_t copyFromOffset = 0;
    while (fpi.next(fp)) {
        switch (fp.getField()) {
        case UNUM_EXPONENT_SYMBOL_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(preExponent);
            appendTo.append(fBeginMarkup);
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getEndIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(fEndMarkup);
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #endif

    
    U_NAMESPACE_BEGIN
    
    
/**
 * A formatter for small, positive integers.
 */
class U_I18N_API SmallIntFormatter : public UMemory {
public:
    /**
     * Estimates the actual digit count needed to format positiveValue
     * using the given range of digit counts.
     * Returns a value that is at least the actual digit count needed.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static int32_t estimateDigitCount(
            int32_t positiveValue, const IntDigitCountRange &range);
    }
    
        // Check for null pointers
    if (fDateIgnorables == NULL || fTimeIgnorables == NULL || fOtherIgnorables == NULL) {
        goto ExitConstrDeleteAll;
    }
    
    int32_t StandardPlural::indexFromString(const char *keyword, UErrorCode &errorCode) {
    if (U_FAILURE(errorCode)) { return OTHER; }
    int32_t i = indexOrNegativeFromString(keyword);
    if (i >= 0) {
        return i;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return OTHER;
    }
}
    
        /**
     * Construct a matcher that matches the given pattern string.
     * @param string the pattern to be matched, possibly containing
     * stand-ins that represent nested UnicodeMatcher objects.
     * @param start inclusive start index of text to be replaced
     * @param limit exclusive end index of text to be replaced;
     * must be greater than or equal to start
     * @param segmentNum the segment number from 1..n, or 0 if this is
     * not a segment.
     * @param data context object mapping stand-ins to
     * UnicodeMatcher objects.
     */
    StringMatcher(const UnicodeString& string,
                  int32_t start,
                  int32_t limit,
                  int32_t segmentNum,
                  const TransliterationRuleData& data);
    
    std::ostream& operator<<(std::ostream& out, const ExtensionCode::type& val) {
  std::map<int, const char*>::const_iterator it = _ExtensionCode_VALUES_TO_NAMES.find(val);
  if (it != _ExtensionCode_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}
    
      virtual ~InternalOptionInfo() throw();
  std::string value;
  std::string default_value;
  std::string type;
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
    
    {      if (entry.first == serial->second) {
        matched = true;
        row['disk_id'] = entry.second['disk_id'];
        row['driver_type'] = entry.second['driver_type'];
      }
    }
    
    #include <vector>
    
    namespace osquery {
namespace perf_event_open {
    }
    }
    
    
    {
    {} // namespace perf_event_open
} // namespace osquery

    
    #include <gtest/gtest.h>
    
    #include <osquery/utils/system/linux/ebpf/program.h>
#include <osquery/utils/system/linux/tracing/native_event.h>