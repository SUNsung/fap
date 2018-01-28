\n\n    //add noise
    Mat noise(1, (int)points2d.size(), CV_32FC2);
    randu(noise, 0, 0.01);
    add(points2d, noise, points2d);\n\n        // find global minimum
        for (unsigned int j = 0; j < cost_.size(); ++j)
        {
            if( cost_[j] < cost__ )
            {
                t_est__ = t_est_[j] - C_est_[j] * R_[i] * mn;
                C_est__ = C_est_[j] * R_[i];
                cost__ = cost_[j];
            }
        }\n\n\n{    std::sort(order.begin(), order.end(), is_smaller);
}\n\n        switch(flag)
        {
        case JUST_FIND_CORNERS: imagePoints = imagePoints_findCb; break;
        case ARTIFICIAL_CORNERS: imagePoints = imagePoints_art; break;\n}\n\n    ChessBoardGenerator cbg(Size(8,6));
    corSize = cbg.cornersSize();
    vector<Point2f> exp_corn;
    chessBoard = cbg(Mat(imgSize, CV_8U, Scalar(0)), camMat, distCoeffs0, exp_corn);
    Mat_<Point2f>(corSize.height, corSize.width, (Point2f*)&exp_corn[0]).copyTo(corners);\n\n        // projection and jacobian
        cv::projectPoints(
            objectPoints,
            rvec,
            tvec,
            m_cameraMatrix,
            distortionCoeff,
            imagePoints,
            jacobian);\n\n\n{  void deallocate(void* p, const size_t sz, const size_t /* align */) override {
    DEBUG_PRINT(p << ' ' << sz);
    free(p);
  }
};\n\n/**
 * Check whether 'path' starts with 'prefix'.
 * That is, if prefix has n path elements, then the first n elements of
 * path must be the same as prefix.
 *
 * There is a special case if prefix ends with a slash:
 * /foo/bar/ is not a prefix of /foo/bar, but both /foo/bar and /foo/bar/
 * are prefixes of /foo/bar/baz.
 */
bool starts_with(const path& p, const path& prefix);\n\n/**
 * Get list of supported huge page sizes and their mount points, if
 * hugetlbfs file systems are mounted for those sizes.
 */
const HugePageSizeVec& getHugePageSizes();\n\n\n{  expectPathEq(a, canonical(a));
  expectPathEq(a, canonical_parent(b));
  expectPathEq(a, canonical(b));
  expectPathEq(a, canonical_parent(b));
  EXPECT_THROW({ canonical(c); }, filesystem_error);
  EXPECT_THROW({ canonical(d); }, filesystem_error);
  expectPathEq(c, canonical_parent(c));
  expectPathEq(c, canonical_parent(d));
}
\n\nLogCategory::LogCategory(StringPiece name, LogCategory* parent)
    : effectiveLevel_{parent->getEffectiveLevel()},
      level_{static_cast<uint32_t>(LogLevel::MAX_LEVEL) | FLAG_INHERIT},
      parent_{parent},
      name_{LogName::canonicalize(name)},
      db_{parent->getDB()},
      nextSibling_{parent_->firstChild_} {
  parent_->firstChild_ = this;
}\n\n  private:
    explicit DBWrapper();
    ~DBWrapper();\n\n\n{} // namespace rocksdb
\n\n#include 'rocksdb/db.h'
#include 'rocksdb/merge_operator.h'
#include 'rocksdb/utilities/db_ttl.h'
#include 'utilities/merge_operators.h'
#include 'utilities/merge_operators/string_append/stringappend.h'
#include 'utilities/merge_operators/string_append/stringappend2.h'
#include 'util/testharness.h'
#include 'util/random.h'\n\n#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include <string>
#include <functional>\n\nJniCallback::~JniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);\n}