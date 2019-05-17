
        
        #endif

    
    namespace tesseract {
    }
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
      // Similar to the above, but return the vector of unichar ids for which
  // the given unichar_id is an ambiguity (appears in the 'wrong' part of
  // some ambiguity pair).
  inline const UnicharIdVector *ReverseAmbigsForAdaption(
      UNICHAR_ID unichar_id) const {
    if (reverse_ambigs_for_adaption_.empty()) return nullptr;
    return reverse_ambigs_for_adaption_[unichar_id];
  }
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
      // Return a pointer to the object identified by id.
  // If we haven't yet loaded the object, use loader to load it.
  // If loader fails to load it, record a nullptr entry in the cache
  // and return nullptr -- further attempts to load will fail (even
  // with a different loader) until DeleteUnusedObjects() is called.
  // We delete the given loader.
  T *Get(STRING id,
         TessResultCallback<T *> *loader) {
    T *retval = nullptr;
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (id == cache_[i].id) {
        retval = cache_[i].object;
        if (cache_[i].object != nullptr) {
          cache_[i].count++;
        }
        mu_.Unlock();
        delete loader;
        return retval;
      }
    }
    cache_.push_back(ReferenceCount());
    ReferenceCount &rc = cache_.back();
    rc.id = id;
    retval = rc.object = loader->Run();
    rc.count = (retval != nullptr) ? 1 : 0;
    mu_.Unlock();
    return retval;
  }
    
            std::shared_ptr<const Matrix<V1ElemType>> matrix = GetMatrix<V1ElemType>();
        auto matrixDims = GetMatrixDimensions(Shape());
        if (matrix->GetNumRows() != matrixDims.first)
            LogicError('The number of rows of the underlying matrix does not match the shape.');
        if (matrix->GetNumCols() != matrixDims.second)
            LogicError('The number of columns of the underlying matrix does not match the shape.');
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
    
    {        // resize the temporaries to their proper size
        size_t cols = Input(0)->Value().GetNumCols();
        m_maxIndexes0->Resize(1, cols);
        m_maxIndexes1->Resize(1, cols);
        m_maxValues->Resize(1, cols);
    }
    
    // -----------------------------------------------------------------------
// SparseInputValue (/*no input*/)
// a sparse input value (typically fed by a DataReader)
// this covers two types: (regular vs. image)
// -----------------------------------------------------------------------
    
    template <class ElemType>
void EpochAccumulatorNode<ElemType>::Validate(bool isFinalValidationPass)
{
    Base::Validate(isFinalValidationPass);
    SetDims(Input(0)->GetSampleLayout(), HasMBLayout());
}
    
        if(result == CollationFastLatin::BAIL_OUT_RESULT) {
        if(settings->dontCheckFCD()) {
            UTF16CollationIterator leftIter(data, numeric,
                                            left, left + equalPrefixLength, leftLimit);
            UTF16CollationIterator rightIter(data, numeric,
                                            right, right + equalPrefixLength, rightLimit);
            result = CollationCompare::compareUpToQuaternary(leftIter, rightIter, *settings, errorCode);
        } else {
            FCDUTF16CollationIterator leftIter(data, numeric,
                                              left, left + equalPrefixLength, leftLimit);
            FCDUTF16CollationIterator rightIter(data, numeric,
                                                right, right + equalPrefixLength, rightLimit);
            result = CollationCompare::compareUpToQuaternary(leftIter, rightIter, *settings, errorCode);
        }
    }
    if(result != UCOL_EQUAL || settings->getStrength() < UCOL_IDENTICAL || U_FAILURE(errorCode)) {
        return (UCollationResult)result;
    }
    
    void ScientificNumberFormatter::getPreExponent(
        const DecimalFormatSymbols &dfs, UnicodeString &preExponent) {
    preExponent.append(dfs.getConstSymbol(
            DecimalFormatSymbols::kExponentMultiplicationSymbol));
    preExponent.append(dfs.getConstSymbol(DecimalFormatSymbols::kOneDigitSymbol));
    preExponent.append(dfs.getConstSymbol(DecimalFormatSymbols::kZeroDigitSymbol));
}
    
    int32_t SearchIterator::previous(UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        int32_t offset;
        if (m_search_->reset) {
            offset                       = m_search_->textLength;
            m_search_->isForwardSearching = FALSE;
            m_search_->reset              = FALSE;
            setOffset(offset, status);
        }
        else {
            offset = getOffset();
        }
        
        int32_t matchindex = m_search_->matchedIndex;
        if (m_search_->isForwardSearching == TRUE) {
            // switching direction. 
            // if matchedIndex == USEARCH_DONE, it means that either a 
            // setOffset has been called or that next ran off the text
            // string. the iterator would have been set to offset textLength if 
            // a match is not found.
            m_search_->isForwardSearching = FALSE;
            if (matchindex != USEARCH_DONE) {
                return matchindex;
            }
        }
        else {
            if (offset == 0 || matchindex == 0) {
                // not enough characters to match
                setMatchNotFound();
                return USEARCH_DONE; 
            }
        }
    }
    }
    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_BEGIN
    
        /**
     * Sets minimum significant digits. 0 or negative means no minimum.
     */
    void setMin(int32_t count) {
        fMin = count <= 0 ? 0 : count;
    }
    
    U_NAMESPACE_BEGIN