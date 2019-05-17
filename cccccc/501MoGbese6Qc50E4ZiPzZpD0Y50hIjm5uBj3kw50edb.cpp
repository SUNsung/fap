
        
          /// Retrieve the array of replacement types, which line up with the
  /// generic parameters.
  ///
  /// Note that the types may be null, for cases where the generic parameter
  /// is concrete but hasn't been queried yet.
  ArrayRef<Type> getReplacementTypes() const {
    return llvm::makeArrayRef(getTrailingObjects<Type>(),
                              getNumReplacementTypes());
  }
    
      DCache.CBs.valueRetainCB(Value, nullptr);
  DCache.Entries[CKey] = Value;
    
      bool isRecord() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::RecordDecl *>();
  }
  const clang::RecordDecl *getRecord() const {
    assert(isRecord());
    return Decl.get<const clang::RecordDecl *>();
  }
    
    #include 'llvm/ADT/STLExtras.h'
#include 'llvm/Support/ErrorHandling.h'
    
      std::string getTargetForLinker() const override;
    
      if (enforceFilelistExclusion())
    return None;
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    #include 'genericvector.h'
#include 'kdpair.h'
#include 'points.h'
    
    static const int kUnigramAmbigsBufferSize = 1000;
static const char kAmbigNgramSeparator[] = { ' ', '\0' };
static const char kAmbigDelimiters[] = '\t ';
static const char kIllegalMsg[] =
  'Illegal ambiguity specification on line %d\n';
static const char kIllegalUnicharMsg[] =
  'Illegal unichar %s in ambiguity specification\n';
    
    #include 'errcode.h'
    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(nullptr) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = nullptr;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = nullptr;
  }
  // Operator= steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = nullptr;
    this->key_ = src.key_;
  }
    }
    
    
    {}  // namespace grpc

    
      // Serializes rpc server stats into the provided buffer.  It returns the
  // number of bytes written to the buffer. If the buffer is smaller than
  // kRpcServerStatsSize bytes it will return kEncodeDecodeFailure. Inlined for
  // performance reasons.
  static size_t Encode(uint64_t time, char* buf, size_t buf_size) {
    if (buf_size < kRpcServerStatsSize) {
      return kEncodeDecodeFailure;
    }
    }
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  host_cpu_load_info_data_t cpuinfo;
  mach_msg_type_number_t count = HOST_CPU_LOAD_INFO_COUNT;
  if (host_statistics(mach_host_self(), HOST_CPU_LOAD_INFO,
                      (host_info_t)&cpuinfo, &count) == KERN_SUCCESS) {
    for (int i = 0; i < CPU_STATE_MAX; i++) total += cpuinfo.cpu_ticks[i];
    busy = total - cpuinfo.cpu_ticks[CPU_STATE_IDLE];
  }
  return std::make_pair(busy, total);
}
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    RuleBasedCollator::RuleBasedCollator(const RuleBasedCollator &other)
        : Collator(other),
          data(other.data),
          settings(other.settings),
          tailoring(other.tailoring),
          cacheEntry(other.cacheEntry),
          validLocale(other.validLocale),
          explicitlySetAttributes(other.explicitlySetAttributes),
          actualLocaleIsSameAsValid(other.actualLocaleIsSameAsValid) {
    settings->addRef();
    cacheEntry->addRef();
}
    
    UnicodeString &ScientificNumberFormatter::format(
        const Formattable &number,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    UnicodeString original;
    FieldPositionIterator fpi;
    fDecimalFormat->format(number, original, &fpi, status);
    return fStyle->format(
            original,
            fpi,
            fPreExponent,
            *fStaticSets,
            appendTo,
            status);
}
    
    U_NAMESPACE_BEGIN
    
    #endif /* #if !UCONFIG_NO_BREAK_ITERATION */

    
    U_NAMESPACE_END
    
    
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    UBool
CollationKey::operator==(const CollationKey& source) const
{
    return getLength() == source.getLength() &&
            (this == &source ||
             uprv_memcmp(getBytes(), source.getBytes(), getLength()) == 0);
}
    
        for (int32_t i=0; i<output.length(); ++i) {
        if (hasCursor && i == cursor) {
            ICU_Utility::appendToRule(rule, (UChar)0x007C /*|*/, TRUE, escapeUnprintable, quoteBuf);
        }
        UChar c = output.charAt(i); // Ok to use 16-bits here
    }
    
    #include 'modules/drivers/canbus/can_client/esd/esd_can_client.h'
    
    using apollo::drivers::canbus::Byte;
    
      x <<= 2;
  x |= t;
    
    int ObjectQualityInfo60C::meas_state(const std::uint8_t* bytes,
                                     int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(2, 3);
    }
    
    
    {  for (int i = 0; i < 10; ++i) {
    EXPECT_DOUBLE_EQ(offset(i, 0), offset_golden(i, 0));
  }
}
    
    void Spline1dSeg::SetParams(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}
    
    Eigen::MatrixXd SplineSegKernel::NthDerivativeKernel(
    const uint32_t n, const uint32_t num_params, const double accumulated_x) {
  if (n == 1) {
    return DerivativeKernel(num_params, accumulated_x);
  } else if (n == 2) {
    return SecondOrderDerivativeKernel(num_params, accumulated_x);
  } else if (n == 3) {
    return ThirdOrderDerivativeKernel(num_params, accumulated_x);
  } else {
    return Eigen::MatrixXd::Zero(num_params, num_params);
  }
}
    
    #include 'glog/logging.h'
    
    
    {  auto &brakerpt = chassis_detail.gem().brake_rpt_6c();
  EXPECT_DOUBLE_EQ(brakerpt.manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(brakerpt.commanded_value(), 0.772);
  EXPECT_DOUBLE_EQ(brakerpt.output_value(), 4.37);
  EXPECT_EQ(brakerpt.brake_on_off(), Brake_rpt_6c::BRAKE_ON_OFF_ON);
}
    
    
    {
    {
    {
    {  int ret = x;
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo
