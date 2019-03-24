
        
                virtual const std::unordered_set<StreamInformation>& StreamInfos() override { return m_streamInfos; }
    
    // SetLabelMapping - Sets the label mapping from integer index to label
// labelMapping - mapping table from label values to IDs (must be 0-n)
// note: for tasks with labels, the mapping table must be the same between a training run and a testing run
void DataReader::SetLabelMapping(const std::wstring& sectionName, const std::map<LabelIdType, LabelType>& labelMapping)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->SetLabelMapping(sectionName, labelMapping);
}
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        ReadOutVariable(); // read out the value once, with the purpose of validating the variableName
        Base::Validate(isFinalValidationPass);
        // this node does not hold mini-batch data
        m_pMBLayout = nullptr;
        // for now, anything this node returns is a scalar
        SetDims(TensorShape(1), false);
    }
    
                    //   Restore the orignal input string length, which had been truncated
                //   inorder to pin the end of the lookbehind match
                //   to the position being looked-behind.
                int64_t originalInputLen = fData[opValue+3];
                U_ASSERT(originalInputLen >= fActiveLimit);
                U_ASSERT(originalInputLen <= fInputLength);
                fActiveLimit = originalInputLen;
    
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
    
    
ScriptSet &ScriptSet::set(UScriptCode script, UErrorCode &status) {
    if (U_FAILURE(status)) {
        return *this;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    bits[index] |= bit;
    return *this;
}
    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
        static const int32_t gDigitCount[] = {
        1,1,1,1,1,1,1,1,
        1,1,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4};
    
    int32_t StandardPlural::indexFromString(const UnicodeString &keyword, UErrorCode &errorCode) {
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
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const UnicodeString &keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
    }
    
        /**
     * Implement UnicodeMatcher
     * @param text the text to be matched
     * @param offset on input, the index into text at which to begin
     * matching.  On output, the limit of the matched text.  The
     * number of matched characters is the output value of offset
     * minus the input value.  Offset should always point to the
     * HIGH SURROGATE (leading code unit) of a pair of surrogates,
     * both on entry and upon return.
     * @param limit the limit index of text to be matched.  Greater
     * than offset for a forward direction match, less than offset for
     * a backward direction match.  The last character to be
     * considered for matching will be text.charAt(limit-1) in the
     * forward direction or text.charAt(limit+1) in the backward
     * direction.
     * @param incremental  if TRUE, then assume further characters may
     * be inserted at limit and check for partial matching.  Otherwise
     * assume the text as given is complete.
     * @return a match degree value indicating a full match, a partial
     * match, or a mismatch.  If incremental is FALSE then
     * U_PARTIAL_MATCH should never be returned.
     */
    virtual UMatchDegree matches(const Replaceable& text,
                                 int32_t& offset,
                                 int32_t limit,
                                 UBool incremental);
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}
