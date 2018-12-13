
        
        // Constructs a new PyBfloat16.
PyObject* PyBfloat16_New(PyTypeObject* type, PyObject* args, PyObject* kwds) {
  if (kwds && PyDict_Size(kwds)) {
    PyErr_SetString(PyExc_TypeError, 'constructor takes no keyword arguments');
    return nullptr;
  }
  Py_ssize_t size = PyTuple_Size(args);
  if (size != 1) {
    PyErr_SetString(PyExc_TypeError,
                    'expected number as argument to bfloat16 constructor');
    return nullptr;
  }
  PyObject* arg = PyTuple_GetItem(args, 0);
    }
    
      // Attempt to get the next record at 'current_offset()'. Populates status
  // with OK on success, OUT_OF_RANGE for end of file, DATA_LOSS for some
  // kinds of truncated reads, or another code for other errors
  // (e.g., filesystem errors).
  void GetNext(TF_Status* status);
    
                    // If there were no matching characters, skip over the loop altogether.
                //   The loop doesn't run at all, a * op always succeeds.
                if (ix == fp->fInputIdx) {
                    fp->fPatIdx++;   // skip the URX_LOOP_C op.
                    break;
                }
    
    ScientificNumberFormatter *ScientificNumberFormatter::createSuperscriptInstance(
            const Locale &locale, UErrorCode &status) {
    return createInstance(
            static_cast<DecimalFormat *>(
                    DecimalFormat::createScientificInstance(locale, status)),
            new SuperscriptStyle(),
            status);
}
    
    #endif

    
    
IntDigitCountRange::IntDigitCountRange(int32_t min, int32_t max) {
    fMin = min < 0 ? 0 : min;
    fMax = max < fMin ? fMin : max;
}
    
    #endif  // __SMALLINTFORMATTER_H__

    
    int32_t
CollationKey::hashCode() const
{
    // (Cribbed from UnicodeString)
    // We cache the hashCode; when it becomes invalid, due to any change to the
    // string, we note this by setting it to kInvalidHashCode. [LIU]
    }
    
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
    
    
    {    /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword
     */
    static int32_t indexFromString(const UnicodeString &keyword, UErrorCode &errorCode);
};
    
    #include 'strmatch.h'
#include 'rbt_data.h'
#include 'util.h'
#include 'unicode/uniset.h'
#include 'unicode/utf16.h'
    
    
    {#define XGBOOST_REGISTER_PREDICTOR(UniqueId, Name)      \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::PredictorReg& \
      __make_##PredictorReg##_##UniqueId##__ =          \
          ::dmlc::Registry<::xgboost::PredictorReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost

    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
      virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats) const;