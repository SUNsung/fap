
        
        
    {};
    
    		Image image(a_pafSourceRGBA, a_uiSourceWidth,
					a_uiSourceHeight,
					a_eErrMetric);
		image.m_bVerboseOutput = a_bVerboseOutput;
		image.Encode(a_format, a_eErrMetric, a_fEffort, a_uiJobs, a_uiMaxJobs);
    
    
    
    		union
		{
			unsigned char auc[BYTES_PER_BLOCK];
			unsigned long int ul;
			Individual individual;
			Differential differential;
			T t;
			H h;
			Planar planar;
		};
    
    Transliterator* RemoveTransliterator::clone(void) const {
    Transliterator* result = new RemoveTransliterator();
    if (result != NULL && getFilter() != 0) {
        result->adoptFilter((UnicodeFilter*)(getFilter()->clone()));
    }
    return result;
}
    
        /**
     * ICU 'poor man's RTTI', returns a UClassID for this class.
     */
    U_I18N_API static UClassID U_EXPORT2 getStaticClassID();
    
    
//---------------------------------------------------------------------
//
//   flags
//
//---------------------------------------------------------------------
uint32_t RegexPattern::flags() const {
    return fFlags;
}
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        DecimalFormat *fmtToAdopt,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            fmtToAdopt,
            new MarkupStyle(beginMarkup, endMarkup),
            status);
}
    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_END
    
    
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
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
      virtual ~DHTResponseMessage();
    
      const std::shared_ptr<DHTNode>& getLocalNode() const { return localNode_; }
    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createBucketRefreshTask()
{
  auto task = std::make_shared<DHTBucketRefreshTask>();
  setCommonProperty(task);
  return task;
}
    
      virtual std::shared_ptr<DHTTask>
  createReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                        const std::shared_ptr<DHTNode>& newNode) CXX11_OVERRIDE;
    
    
    {    return action;
}
    
    
    {     actionAllocWithHashElement(element);
 
     CCASSERT(! ccArrayContainsObject(element->actions, action), 'action already be added!');
     ccArrayAppendObject(element->actions, action);
 
     action->startWithTarget(target);
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(SplitCols);
};
    
    /** ActionTween
    
        bool isEnabled() const { return _enabled; }
    virtual void setEnabled(bool enabled);
    
    const std::string& getName() const { return _name; }
    virtual void setName(const std::string& name) { _name = name; }
    
    Node* getOwner() const { return _owner; }
    virtual void setOwner(Node *owner);
    
            component->onRemove();
        component->setOwner(nullptr);
        component->release();