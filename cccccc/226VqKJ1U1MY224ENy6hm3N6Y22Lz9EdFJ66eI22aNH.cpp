
        
        
    {
    {
}  // namespace python
}  // namespace protobuf
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    #endif
    
    #undef THHostTensor
#undef THHostTensor_
#undef THHostStorage
#undef THHostStorage_

    
    #ifdef _THP_CORE
#define THPStorageType TH_CONCAT_3(THP,Real,StorageType)
#define THPStorageBaseStr TH_CONCAT_STRING_2(Real,StorageBase)
#endif
    
    SEXP XGBoosterModelToRaw_R(SEXP handle) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const char *raw;
  CHECK_CALL(XGBoosterGetModelRaw(R_ExternalPtrAddr(handle), &olen, &raw));
  ret = PROTECT(allocVector(RAWSXP, olen));
  if (olen != 0) {
    memcpy(RAW(ret), raw, olen);
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromCSCEx
 * Signature: ([J[J[F)J
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromCSCEx
  (JNIEnv *jenv, jclass jcls, jlongArray jindptr, jintArray jindices, jfloatArray jdata, jint jrow, jlongArray jout) {
  DMatrixHandle result;
  jlong* indptr = jenv->GetLongArrayElements(jindptr, NULL);
  jint* indices = jenv->GetIntArrayElements(jindices, 0);
  jfloat* data = jenv->GetFloatArrayElements(jdata, NULL);
  bst_ulong nindptr = (bst_ulong)jenv->GetArrayLength(jindptr);
  bst_ulong nelem = (bst_ulong)jenv->GetArrayLength(jdata);
    }