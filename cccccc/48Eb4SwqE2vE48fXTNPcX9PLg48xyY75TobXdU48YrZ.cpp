
        
        #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    void Menu::UpdateStates() {
}
    
    bool NwObjDestroyFunction::RunNWSync(base::ListValue* response, std::string* error) {
  int id = 0;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
    }
    
    extern void UNSCALE_BT_BASIS(btTransform &scaledBasis);
#endif

    
    	const RigidBodyBullet *getRigidBodyA() const;
	const RigidBodyBullet *getRigidBodyB() const;
	const Transform getCalculatedTransformA() const;
	const Transform getCalculatedTransformB() const;
	const Transform getFrameOffsetA() const;
	const Transform getFrameOffsetB() const;
	Transform getFrameOffsetA();
	Transform getFrameOffsetB();
	real_t getLowerLinLimit() const;
	void setLowerLinLimit(real_t lowerLimit);
	real_t getUpperLinLimit() const;
	void setUpperLinLimit(real_t upperLimit);
	real_t getLowerAngLimit() const;
	void setLowerAngLimit(real_t lowerLimit);
	real_t getUpperAngLimit() const;
	void setUpperAngLimit(real_t upperLimit);
    
    	free_list = &allocs[0];
    
    #include 'core/reference.h'
    
    
    {    default:
        U_ASSERT(FALSE);
    }
    
        case URX_SETREF:
    case URX_LOOP_SR_I:
        {
            UnicodeString s;
            UnicodeSet *set = (UnicodeSet *)fSets->elementAt(val);
            set->toPattern(s, TRUE);
            printf('%s', CStr(s)());
        }
        break;
    
    int32_t ScriptSet::countMembers() const {
    // This bit counter is good for sparse numbers of '1's, which is
    //  very much the case that we will usually have.
    int32_t count = 0;
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        uint32_t x = bits[i];
        while (x > 0) {
            count++;
            x &= (x - 1);    // and off the least significant one bit.
        }
    }
    return count;
}
    
    SearchIterator::SearchIterator()
{
    m_search_                     = (USearch *)uprv_malloc(sizeof(USearch));
    m_search_->breakIter          = NULL;
    m_search_->isOverlap          = FALSE;
    m_search_->isCanonicalMatch   = FALSE;
    m_search_->elementComparisonType = 0;
    m_search_->isForwardSearching = TRUE;
    m_search_->reset              = TRUE;
    m_search_->matchedIndex       = USEARCH_DONE;
    m_search_->matchedLength      = 0;
    m_search_->text               = NULL;
    m_search_->textLength         = 0;
    m_breakiterator_              = NULL;
}