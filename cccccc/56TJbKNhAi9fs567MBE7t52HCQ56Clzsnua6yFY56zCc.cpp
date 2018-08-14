
        
        /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitFinalize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitFinalize
  (JNIEnv *jenv, jclass jcls) {
  RabitFinalize();
  return 0;
}
    
      virtual void PredictInteractionContributions(DMatrix* dmat,
                           std::vector<bst_float>* out_contribs,
                           unsigned ntree_limit, bool approximate) = 0;
    
    
    {}  // namespace xgboost
    
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