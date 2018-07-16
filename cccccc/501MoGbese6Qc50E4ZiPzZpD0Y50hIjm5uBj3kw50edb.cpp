
        
            f2coeff[1] = - 2*D[1][3] + 2*D[1][7] - 2*D[3][1] - 2*D[3][5] - 2*D[3][9] - 2*D[5][3] + 2*D[5][7] + 2*D[7][1] + 2*D[7][5] + 2*D[7][9] - 2*D[9][3] + 2*D[9][7]; // constant term
    f2coeff[2] = 4*D[1][5] - 4*D[1][1] + 8*D[2][2] + 8*D[2][4] + 8*D[4][2] + 8*D[4][4] + 4*D[5][1] - 4*D[5][5] + 4*D[9][9]; // s1^2  * s2
    f2coeff[3] = 4*D[1][8] - 4*D[1][6] - 8*D[2][3] + 8*D[2][7] - 8*D[3][2] - 8*D[3][4] - 8*D[4][3] + 8*D[4][7] + 4*D[5][6] - 4*D[5][8] - 4*D[6][1] + 4*D[6][5] - 4*D[6][9] + 8*D[7][2] + 8*D[7][4] + 4*D[8][1] - 4*D[8][5] + 4*D[8][9] - 4*D[9][6] + 4*D[9][8]; // s1 * s2
    f2coeff[4] = 8*D[2][2] - 8*D[3][3] - 8*D[4][4] + 8*D[6][6] + 8*D[7][7] - 8*D[8][8]; // s1 * s3
    f2coeff[5] = 4*D[1][4] - 4*D[1][2] - 4*D[2][1] + 4*D[2][5] - 4*D[2][9] - 8*D[3][6] - 8*D[3][8] + 4*D[4][1] - 4*D[4][5] + 4*D[4][9] + 4*D[5][2] - 4*D[5][4] - 8*D[6][3] + 8*D[6][7] + 8*D[7][6] + 8*D[7][8] - 8*D[8][3] + 8*D[8][7] - 4*D[9][2] + 4*D[9][4]; // s2 * s3
    f2coeff[6] = 6*D[5][6] - 6*D[1][8] - 6*D[1][6] + 6*D[5][8] - 6*D[6][1] + 6*D[6][5] - 6*D[6][9] - 6*D[8][1] + 6*D[8][5] - 6*D[8][9] - 6*D[9][6] - 6*D[9][8]; // s2^2 * s3
    f2coeff[7] = 4*D[1][1] - 4*D[1][5] + 4*D[1][9] - 4*D[5][1] + 4*D[5][5] - 4*D[5][9] + 4*D[9][1] - 4*D[9][5] + 4*D[9][9]; // s2^3
    f2coeff[8] = 2*D[2][9] - 2*D[1][4] - 2*D[2][1] - 2*D[2][5] - 2*D[1][2] + 4*D[3][6] + 4*D[3][8] - 2*D[4][1] - 2*D[4][5] + 2*D[4][9] - 2*D[5][2] - 2*D[5][4] + 4*D[6][3] + 4*D[6][7] + 4*D[7][6] + 4*D[7][8] + 4*D[8][3] + 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s1 * s3^2
    f2coeff[9] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] + 2*D[2][5] + 2*D[2][9] - 4*D[3][6] + 4*D[3][8] + 2*D[4][1] + 2*D[4][5] + 2*D[4][9] + 2*D[5][2] + 2*D[5][4] - 4*D[6][3] + 4*D[6][7] + 4*D[7][6] - 4*D[7][8] + 4*D[8][3] - 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s1
    f2coeff[10] = 2*D[1][6] + 2*D[1][8] - 4*D[2][3] + 4*D[2][7] - 4*D[3][2] + 4*D[3][4] + 4*D[4][3] - 4*D[4][7] + 2*D[5][6] + 2*D[5][8] + 2*D[6][1] + 2*D[6][5] + 2*D[6][9] + 4*D[7][2] - 4*D[7][4] + 2*D[8][1] + 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s3
    f2coeff[11] = 8*D[3][3] - 4*D[1][9] - 4*D[1][1] - 8*D[3][7] + 4*D[5][5] - 8*D[7][3] + 8*D[7][7] - 4*D[9][1] - 4*D[9][9]; // s2
    f2coeff[12] = 4*D[1][1] - 4*D[5][5] + 4*D[5][9] + 8*D[6][6] + 8*D[6][8] + 8*D[8][6] + 8*D[8][8] + 4*D[9][5] - 4*D[9][9]; // s2 * s3^2
    f2coeff[13] = 2*D[1][7] - 2*D[1][3] + 4*D[2][6] - 4*D[2][8] - 2*D[3][1] + 2*D[3][5] + 2*D[3][9] + 4*D[4][6] - 4*D[4][8] + 2*D[5][3] - 2*D[5][7] + 4*D[6][2] + 4*D[6][4] + 2*D[7][1] - 2*D[7][5] - 2*D[7][9] - 4*D[8][2] - 4*D[8][4] + 2*D[9][3] - 2*D[9][7]; // s1^2
    f2coeff[14] = 2*D[1][3] - 2*D[1][7] + 4*D[2][6] + 4*D[2][8] + 2*D[3][1] + 2*D[3][5] - 2*D[3][9] - 4*D[4][6] - 4*D[4][8] + 2*D[5][3] - 2*D[5][7] + 4*D[6][2] - 4*D[6][4] - 2*D[7][1] - 2*D[7][5] + 2*D[7][9] + 4*D[8][2] - 4*D[8][4] - 2*D[9][3] + 2*D[9][7]; // s3^2
    f2coeff[15] = 6*D[1][3] - 6*D[1][7] + 6*D[3][1] - 6*D[3][5] + 6*D[3][9] - 6*D[5][3] + 6*D[5][7] - 6*D[7][1] + 6*D[7][5] - 6*D[7][9] + 6*D[9][3] - 6*D[9][7]; // s2^2
    f2coeff[16] = 2*D[6][9] - 2*D[1][8] - 2*D[5][6] - 2*D[5][8] - 2*D[6][1] - 2*D[6][5] - 2*D[1][6] - 2*D[8][1] - 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s3^3
    f2coeff[17] = 8*D[2][6] - 4*D[1][7] - 4*D[1][3] + 8*D[2][8] - 4*D[3][1] + 4*D[3][5] - 4*D[3][9] + 8*D[4][6] + 8*D[4][8] + 4*D[5][3] + 4*D[5][7] + 8*D[6][2] + 8*D[6][4] - 4*D[7][1] + 4*D[7][5] - 4*D[7][9] + 8*D[8][2] + 8*D[8][4] - 4*D[9][3] - 4*D[9][7]; // s1 * s2 * s3
    f2coeff[18] = 6*D[2][5] - 6*D[1][4] - 6*D[2][1] - 6*D[1][2] - 6*D[2][9] - 6*D[4][1] + 6*D[4][5] - 6*D[4][9] + 6*D[5][2] + 6*D[5][4] - 6*D[9][2] - 6*D[9][4]; // s1 * s2^2
    f2coeff[19] = 2*D[1][6] + 2*D[1][8] + 4*D[2][3] + 4*D[2][7] + 4*D[3][2] + 4*D[3][4] + 4*D[4][3] + 4*D[4][7] - 2*D[5][6] - 2*D[5][8] + 2*D[6][1] - 2*D[6][5] - 2*D[6][9] + 4*D[7][2] + 4*D[7][4] + 2*D[8][1] - 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s1^2 * s3
    f2coeff[20] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] - 2*D[2][5] - 2*D[2][9] + 2*D[4][1] - 2*D[4][5] - 2*D[4][9] - 2*D[5][2] - 2*D[5][4] - 2*D[9][2] - 2*D[9][4]; // s1^3
    
    #endif

    
    //! @cond IGNORED
    
        // Extension: 2.1
    extern void (CODEGEN_FUNCPTR *UniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    
    static void* openclamdblas_check_fn(int ID);
    
    
    {
    {
    {} } } // namespace cv::ocl::runtime
    
      // Gets a pix that contains an 8 bit threshold value at each pixel. The
  // returned pix may be an integer reduction of the binary image such that
  // the scale factor may be inferred from the ratio of the sizes, even down
  // to the extreme of a 1x1 pixel thresholds image.
  // Ideally the 8 bit threshold should be the exact threshold used to generate
  // the binary image in ThresholdToPix, but this is not a hard constraint.
  // Returns nullptr if the input is binary. PixDestroy after use.
  virtual Pix* GetPixRectThresholds();
    
    namespace tesseract {
    }
    
      // See class comment for arguments.
  void Init(const IndexMapBiDi* charset_map,
            const ShapeTable* shape_table,
            bool randomize,
            TrainingSampleSet* sample_set);
    
      // Computes a very simple bag of chars char error rate.
  double ComputeCharError(const GenericVector<int>& truth_str,
                          const GenericVector<int>& ocr_str);
  // Computes a very simple bag of words word recall error rate.
  // NOTE that this is destructive on both input strings.
  double ComputeWordError(STRING* truth_str, STRING* ocr_str);
    
    // Helper to expand a box in one of the 4 directions by the given pad,
// provided it does not expand into any cell with a zero noise density.
// If that is not possible, try expanding all round by a small constant.
static TBOX AttemptBoxExpansion(const TBOX& box, const IntGrid& noise_density,
                                int pad) {
  TBOX expanded_box(box);
  expanded_box.set_right(box.right() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_left(box.left() - pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_top(box.top() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_bottom(box.bottom() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.pad(kNoisePadding, kNoisePadding);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  return box;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterDumpModelEx
 * Signature: (JLjava/lang/String;I)[Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterDumpModelEx
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfmap, jint jwith_stats, jstring jformat, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char *fmap = jenv->GetStringUTFChars(jfmap, 0);
  const char *format = jenv->GetStringUTFChars(jformat, 0);
  bst_ulong len = 0;
  char **result;
    }
    
      double double2[2] = {1.0, 2.0};
  EXPECT_EQ(info.GetRoot(1), 0)
    << 'When no root_index is given, was expecting default value 0';
  info.SetInfo('root_index', double2, xgboost::kDouble, 2);
  EXPECT_EQ(info.GetRoot(1), 2.0f);
    
    TreeUpdater* TreeUpdater::Create(const std::string& name) {
  auto *e = ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->Find(name);
  if (e == nullptr) {
    LOG(FATAL) << 'Unknown tree updater ' << name;
  }
  return (e->body)();
}
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
      // Test operator upper bounds.
  EXPECT_FALSE(cl2.matches(1000));
  EXPECT_FALSE(cl2.matches(1001));
    
      // Remove the backup and expect another reload to not create one.
  removePath(path_ + '.backup');
  ASSERT_FALSE(pathExists(path_ + '.backup'));
    
    /**
 * @brief Compute a map of metadata about the supplied QueryData object
 *
 * @param r A row to analyze
 * @param lengths A mutable set of column lengths
 * @param use_columns Calulate lengths of column names or values
 *
 * @return A map of string to int such that the key represents the 'column' in
 * the supplied QueryData and the int represents the length of the longest key
 */
void computeRowLengths(const Row& r,
                       std::map<std::string, size_t>& lengths,
                       bool use_columns = false);
    
    class SyslogTests : public testing::Test {
 public:
  std::vector<std::string> splitCsv(std::string line) {
    boost::tokenizer<RsyslogCsvSeparator> tokenizer(line);
    std::vector<std::string> result(tokenizer.begin(), tokenizer.end());
    return result;
  }
};
    
    
    {      batch.Delete(*v8::String::Utf8Value(array->Get(i)->ToString()));
      continue;
    }
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    #include 'rocksjni/statisticsjni.h'
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}