
        
        // Instantiate a class with float and double specifications.
#define INSTANTIATE_CLASS(classname) \
  char gInstantiationGuard##classname; \
  template class classname<float>; \
  template class classname<double>
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    
    {  Blob<Dtype> col_buffer_;
  Blob<Dtype> bias_multiplier_;
};
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      virtual inline const char* type() const { return 'Convolution'; }
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37>
internal::ValueArray37<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12,
    T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20,
    T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28,
    T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36,
    T37 v37) {
  return internal::ValueArray37<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37>(v1, v2, v3,
      v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19,
      v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33,
      v34, v35, v36, v37);
}
    
      // Appends the given TestPartResult to the array.
  void Append(const TestPartResult& result);
    
    // Type-parameterized tests are abstract test patterns parameterized
// by a type.  Compared with typed tests, type-parameterized tests
// allow you to define the test pattern without knowing what the type
// parameters are.  The defined pattern can be instantiated with
// different types any number of times, in any number of translation
// units.
//
// If you are designing an interface or concept, you can define a
// suite of type-parameterized tests to verify properties that any
// valid implementation of the interface/concept should have.  Then,
// each implementation can easily instantiate the test suite to verify
// that it conforms to the requirements, without having to write
// similar tests repeatedly.  Here's an example:
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_)};
    return ValuesIn(array);
  }
    
    #include 'sample2.h'
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
        int32_t result;
    int32_t fastLatinOptions = settings->fastLatinOptions;
    if(fastLatinOptions >= 0 &&
            (equalPrefixLength == leftLength ||
                left[equalPrefixLength] <= CollationFastLatin::LATIN_MAX) &&
            (equalPrefixLength == rightLength ||
                right[equalPrefixLength] <= CollationFastLatin::LATIN_MAX)) {
        if(leftLength >= 0) {
            result = CollationFastLatin::compareUTF16(data->fastLatinTable,
                                                      settings->fastLatinPrimaries,
                                                      fastLatinOptions,
                                                      left + equalPrefixLength,
                                                      leftLength - equalPrefixLength,
                                                      right + equalPrefixLength,
                                                      rightLength - equalPrefixLength);
        } else {
            result = CollationFastLatin::compareUTF16(data->fastLatinTable,
                                                      settings->fastLatinPrimaries,
                                                      fastLatinOptions,
                                                      left + equalPrefixLength, -1,
                                                      right + equalPrefixLength, -1);
        }
    } else {
        result = CollationFastLatin::BAIL_OUT_RESULT;
    }
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        const ScientificNumberFormatter &other)
        : UObject(other),
          fPreExponent(other.fPreExponent),
          fDecimalFormat(NULL),
          fStyle(NULL),
          fStaticSets(other.fStaticSets) {
    fDecimalFormat = static_cast<DecimalFormat *>(
            other.fDecimalFormat->clone());
    fStyle = other.fStyle->clone();
}
    
    UnicodeString&
SelectFormat::format(const UnicodeString& keyword,
                     UnicodeString& appendTo,
                     FieldPosition& /*pos */,
                     UErrorCode& status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    // Check for the validity of the keyword
    if (!PatternProps::isIdentifier(keyword.getBuffer(), keyword.length())) {
        status = U_ILLEGAL_ARGUMENT_ERROR;  // Invalid formatting argument.
    }
    if (msgPattern.countParts() == 0) {
        status = U_INVALID_STATE_ERROR;
        return appendTo;
    }
    int32_t msgStart = findSubMessage(msgPattern, 0, keyword, status);
    if (!MessageImpl::jdkAposMode(msgPattern)) {
        int32_t patternStart = msgPattern.getPart(msgStart).getLimit();
        int32_t msgLimit = msgPattern.getLimitPartIndex(msgStart);
        appendTo.append(msgPattern.getPatternString(),
                        patternStart,
                        msgPattern.getPatternIndex(msgLimit) - patternStart);
        return appendTo;
    }
    // JDK compatibility mode: Remove SKIP_SYNTAX.
    return MessageImpl::appendSubMessageWithoutSkipSyntax(msgPattern, msgStart, appendTo);
}
    
    #endif // SELFMTIMPL
//eof

    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    U_NAMESPACE_END
    
        for (int32_t i=0; i<output.length(); ++i) {
        if (hasCursor && i == cursor) {
            ICU_Utility::appendToRule(rule, (UChar)0x007C /*|*/, TRUE, escapeUnprintable, quoteBuf);
        }
        UChar c = output.charAt(i); // Ok to use 16-bits here
    }