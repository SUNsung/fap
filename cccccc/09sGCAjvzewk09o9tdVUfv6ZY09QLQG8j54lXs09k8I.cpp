
        
          /*! \brief constructor */
  SparsePage() {
    this->Clear();
  }
  /*! \return number of instance in the page */
  inline size_t Size() const {
    return offset.size() - 1;
  }
  /*! \return estimation of memory cost of this page */
  inline size_t MemCostBytes() const {
    return offset.size() * sizeof(size_t) + data.size() * sizeof(Entry);
  }
  /*! \brief clear the page */
  inline void Clear() {
    base_rowid = 0;
    offset.clear();
    offset.push_back(0);
    data.clear();
  }
    
    namespace xgboost {
    }
    
    SEXP XGDMatrixSliceDMatrix_R(SEXP handle, SEXP idxset) {
  SEXP ret;
  R_API_BEGIN();
  int len = length(idxset);
  std::vector<int> idxvec(len);
  for (int i = 0; i < len; ++i) {
    idxvec[i] = INTEGER(idxset)[i] - 1;
  }
  DMatrixHandle res;
  CHECK_CALL(XGDMatrixSliceDMatrix(R_ExternalPtrAddr(handle),
                                   BeginPtr(idxvec), len,
                                   &res));
  ret = PROTECT(R_MakeExternalPtr(res, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    #include <yoga/Yoga.h>
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;