
        
                const f32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const f32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const f32* ln2 = idx_rp1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp1) : tmp;
    
    
    {            v_y = vld2q_u8(srcy + syj + 32);
            v_dst.val[0] = vld1q_u8(srcu + sj + 16);
            v_dst.val[1] = v_y.val[0];
            v_dst.val[2] = vld1q_u8(srcv + sj + 16);
            v_dst.val[3] = v_y.val[1];
            vst4q_u8(dst + dj + 64, v_dst);
        }
#endif
    
    
    {    void operator() (const T * src0, const T * src1, u8 * dst) const
    {
        dst[0] = src0[0] == src1[0] ? 255 : 0;
    }
};
    
        /**
     * Implements {@link Transliterator#handleTransliterate}.
     * @param text          the buffer holding transliterated and
     *                      untransliterated text
     * @param offset        the start and limit of the text, the position
     *                      of the cursor, and the start and limit of transliteration.
     * @param incremental   if true, assume more text may be coming after
     *                      pos.contextLimit. Otherwise, assume the text is complete.
     */
    virtual void handleTransliterate(Replaceable& text, UTransPosition& offset,
                                     UBool isIncremental) const;
    
        if (other.fPatternString == NULL) {
        fPatternString = NULL;
        fPattern = utext_clone(fPattern, other.fPattern, FALSE, TRUE, &fDeferredStatus);
    } else {
        fPatternString = new UnicodeString(*(other.fPatternString));
        if (fPatternString == NULL) {
            fDeferredStatus = U_MEMORY_ALLOCATION_ERROR;
        } else {
            fPattern = utext_openConstUnicodeString(NULL, fPatternString, &fDeferredStatus);
        }
    }
    if (U_FAILURE(fDeferredStatus)) {
        return *this;
    }
    
    CollationKey &
RuleBasedCollator::getCollationKey(const UChar *s, int32_t length, CollationKey& key,
                                   UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode)) {
        return key.setToBogus();
    }
    if(s == NULL && length != 0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return key.setToBogus();
    }
    key.reset();  // resets the 'bogus' state
    CollationKeyByteSink sink(key);
    writeSortKey(s, length, sink, errorCode);
    if(U_FAILURE(errorCode)) {
        key.setToBogus();
    } else if(key.isBogus()) {
        errorCode = U_MEMORY_ALLOCATION_ERROR;
    } else {
        key.setLength(sink.NumberOfBytesAppended());
    }
    return key;
}
    
    UnicodeString &ScientificNumberFormatter::SuperscriptStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets &staticSets,
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
            break;
        case UNUM_EXPONENT_SIGN_FIELD:
            {
                int32_t beginIndex = fp.getBeginIndex();
                int32_t endIndex = fp.getEndIndex();
                UChar32 aChar = original.char32At(beginIndex);
                if (staticSets.fMinusSigns->contains(aChar)) {
                    appendTo.append(
                            original,
                            copyFromOffset,
                            beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptMinusSign);
                } else if (staticSets.fPlusSigns->contains(aChar)) {
                    appendTo.append(
                           original,
                           copyFromOffset,
                           beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptPlusSign);
                } else {
                    status = U_INVALID_CHAR_FOUND;
                    return appendTo;
                }
                copyFromOffset = endIndex;
            }
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            if (!copyAsSuperscript(
                    original,
                    fp.getBeginIndex(),
                    fp.getEndIndex(),
                    appendTo,
                    status)) {
              return appendTo;
            }
            copyFromOffset = fp.getEndIndex();
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    
ScriptSet &ScriptSet::resetAll() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
    return *this;
}
    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_NAMESPACE_BEGIN
    
    UnicodeSet *SimpleDateFormatStaticSets::getIgnorables(UDateFormatField fieldIndex)
{
    UErrorCode status = U_ZERO_ERROR;
    umtx_initOnce(gSimpleDateFormatStaticSetsInitOnce, &smpdtfmt_initSets, status);
    if (U_FAILURE(status)) {
        return NULL;
    }
    
    switch (fieldIndex) {
        case UDAT_YEAR_FIELD:
        case UDAT_MONTH_FIELD:
        case UDAT_DATE_FIELD:
        case UDAT_STANDALONE_DAY_FIELD:
        case UDAT_STANDALONE_MONTH_FIELD:
            return gStaticSets->fDateIgnorables;
            
        case UDAT_HOUR_OF_DAY1_FIELD:
        case UDAT_HOUR_OF_DAY0_FIELD:
        case UDAT_MINUTE_FIELD:
        case UDAT_SECOND_FIELD:
        case UDAT_HOUR1_FIELD:
        case UDAT_HOUR0_FIELD:
            return gStaticSets->fTimeIgnorables;
            
        default:
            return gStaticSets->fOtherIgnorables;
    }
}
    
    
U_NAMESPACE_END
    
    StringMatcher::StringMatcher(const StringMatcher& o) :
    UnicodeFunctor(o),
    UnicodeMatcher(o),
    UnicodeReplacer(o),
    pattern(o.pattern),
    data(o.data),
    segmentNumber(o.segmentNumber),
    matchStart(o.matchStart),
    matchLimit(o.matchLimit)
{
}
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name);
};
    
      pid_t const pid = -1;
  int const group_fd = -1;
  unsigned long const flags = 0;
  auto exp_fd = perf_event_open::syscall(
      &attr, pid, static_cast<int>(cpu), group_fd, flags);
  if (exp_fd.isError()) {
    return createError(PerfOutputError::SystemError,
                       'Fail to create perf_event output point',
                       exp_fd.takeError());
  }
  instance.fd_ = exp_fd.take();
    
    
    {        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      Extension_call_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
    
    
    {  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, 'query failed: unknown result');
}
    
      void registerExtension(ExtensionStatus& _return, const InternalExtensionInfo& info, const ExtensionRegistry& registry) {
    // Your implementation goes here
    printf('registerExtension\n');
  }
    
    std::ostream& operator<<(std::ostream& out, const ExtensionStatus& obj);
    
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
    
    
    { private:
  std::vector<PerfOutput<MessageType>> outputs_;
  std::vector<struct pollfd> fds_;
};
    
    ExpectedSuccess<LinuxProbesControl::Error> LinuxProbesControl::traceSetuid() {
  return traceEnterAndExit(syscall::EventType::SetuidEnter);
}