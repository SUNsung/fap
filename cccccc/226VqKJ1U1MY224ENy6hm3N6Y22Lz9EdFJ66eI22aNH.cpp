
        
            // TODO: This could actually be strided?
    template <typename ElementType>
    ElementType* NDArrayView::WritableDataBuffer()
    {
        if (IsReadOnly())
            InvalidArgument('NDArrayView::WritableDataBuffer: Cannot get writable data buffer from a read-only NDArrayView.');
    }
    
    namespace CNTK
{
    class ProgressWriter::Impl
    {
    public:
        Impl(size_t updateWriteFrequency, size_t firstUpdatesToWrite)
            : m_frequency(updateWriteFrequency), m_firstN(firstUpdatesToWrite),
            m_totalUpdates(0), m_totalSummaries(0)
        {
            Reset();
        }
    }
    }
    
    
    {
    {                    if (input.IsOutput())
                    {
                        auto retVal = FindTrainingSampleCountVar(input.Owner());
                        if (retVal.second)
                            return retVal;
                    }
                }
                return std::make_pair(Variable(), false);
            };
    
        ParameterInitializer NormalInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::NormalInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
        static void setupTimeout(int seconds)
    {
        struct sigaction action = {};
        action.sa_handler = &CrossProcessMutex::noOpAlarmHandler;
        sigaction(SIGALRM, &action, NULL);
        alarm(seconds);
    }
    
            // If node derives from ILateAttachingNode() then it has unresolved inputs. Resolve them now.
        // This may generate a whole new load of nodes, including nodes which in turn have late init.
        // Note: In case of editing, we may be adding a new node that references nodes from the old
        // network that must be mapped because their inputs have changed. Hence, it is important to
        // to the mapping *after* late attaching.
        if (node->GetNumInputs() == 0) // (if this function is called during model editing, we may already have our inputs)
        {
            let lateAttachingNode = dynamic_pointer_cast<ILateAttachingNode>(node);
            if (lateAttachingNode)
                lateAttachingNode->LateAttachInputs();
        }
    
    
    
    U_CAPI UBool U_EXPORT2
uhash_compareScriptSet(const UElement key1, const UElement key2);
    
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
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_END
    
        // Bail out if we are before the onset of daylight savings time
    if(!useDaylight || year < startYear || era != GregorianCalendar::AD) 
        return result;
    
    /**
 * A representation an acceptable range of digit counts for integers.
 */
class U_I18N_API IntDigitCountRange : public UMemory {
public:
    /**
     * No constraints: 0 up to INT32_MAX
     */
    IntDigitCountRange() : fMin(0), fMax(INT32_MAX) { }
    IntDigitCountRange(int32_t min, int32_t max);
    int32_t pin(int32_t digitCount) const;
    int32_t getMax() const { return fMax; }
    int32_t getMin() const { return fMin; }
private:
    int32_t fMin;
    int32_t fMax;
};
    
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
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const UnicodeString &keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
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
    
        factory->setRoutingTable(routingTable.get());
    factory->setConnection(connection.get());
    factory->setMessageDispatcher(dispatcher.get());
    factory->setPeerAnnounceStorage(peerAnnounceStorage.get());
    factory->setTokenTracker(tokenTracker.get());
    factory->setLocalNode(localNode);
    factory->setBtRegistry(e->getBtRegistry().get());
    
    void DHTTaskQueueImpl::addImmediateTask(const std::shared_ptr<DHTTask>& task)
{
  immediateTaskQueue_.addTask(task);
}
    
    #endif // D_DHT_TASK_QUEUE_IMPL_H

    
    void DNSCache::CacheEntry::markBad(const std::string& addr)
{
  auto i = find(addr);
  if (i != addrEntries_.end()) {
    i->good_ = false;
  }
}
    
    #ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif