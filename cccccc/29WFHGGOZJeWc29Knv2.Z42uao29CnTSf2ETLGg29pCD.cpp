
        
        
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(HasNewFatalFailureHelper);
};
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

    
    #if GTEST_OS_WINDOWS
    
      template <GTEST_$(k)_TYPENAMES_(U)>
  tuple& operator=(const GTEST_$(k)_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    
// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.
    
    namespace leveldb {
    }
    
            // Create values for key-value pair
        const int k = (order == SEQUENTIAL) ? i + j :
                      (rand_.Next() % num_entries);
        char key[100];
        snprintf(key, sizeof(key), '%016d', k);
    
    void Mutex::Unlock() { PthreadCall('unlock', pthread_mutex_unlock(&mu_)); }
    
    void TableBuilder::Add(const Slice& key, const Slice& value) {
  Rep* r = rep_;
  assert(!r->closed);
  if (!ok()) return;
  if (r->num_entries > 0) {
    assert(r->options.comparator->Compare(key, Slice(r->last_key)) > 0);
  }
    }
    
    
    {
    {    // Check false positive rate
    double rate = FalsePositiveRate();
    if (kVerbose >= 1) {
      fprintf(stderr, 'False positives: %5.2f%% @ length = %6d ; bytes = %6d\n',
              rate*100.0, length, static_cast<int>(FilterSize()));
    }
    ASSERT_LE(rate, 0.02);   // Must not be over 2%
    if (rate > 0.0125) mediocre_filters++;  // Allowed, but not too often
    else good_filters++;
  }
  if (kVerbose >= 1) {
    fprintf(stderr, 'Filters: %d good, %d mediocre\n',
            good_filters, mediocre_filters);
  }
  ASSERT_LE(mediocre_filters, good_filters/5);
}