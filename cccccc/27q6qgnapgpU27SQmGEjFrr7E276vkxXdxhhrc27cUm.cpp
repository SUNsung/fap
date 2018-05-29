
        
        /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixGetFloatInfo
 * Signature: (JLjava/lang/String;)[F
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixGetFloatInfo
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfield, jobjectArray jout) {
  DMatrixHandle handle = (DMatrixHandle) jhandle;
  const char*  field = jenv->GetStringUTFChars(jfield, 0);
  bst_ulong len;
  float *result;
  int ret = XGDMatrixGetFloatInfo(handle, field, &len, (const float**) &result);
  if (field) jenv->ReleaseStringUTFChars(jfield, field);
    }
    
    // tress
#include '../src/tree/tree_model.cc'
#include '../src/tree/tree_updater.cc'
#include '../src/tree/updater_colmaker.cc'
#include '../src/tree/updater_fast_hist.cc'
#include '../src/tree/updater_prune.cc'
#include '../src/tree/updater_refresh.cc'
#include '../src/tree/updater_sync.cc'
#include '../src/tree/updater_histmaker.cc'
#include '../src/tree/updater_skmaker.cc'
    
      void PredictBatch(DMatrix *p_fmat,
                    HostDeviceVector<bst_float> *out_preds,
                    unsigned ntree_limit) override {
    monitor_.Start('PredictBatch');
    CHECK_EQ(ntree_limit, 0U)
        << 'GBLinear::Predict ntrees is only valid for gbtree predictor';
    }