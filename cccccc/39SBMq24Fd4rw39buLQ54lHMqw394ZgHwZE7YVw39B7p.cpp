
        
        #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    const char* InternalKeyComparator::Name() const {
  return 'leveldb.InternalKeyComparator';
}
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
    #ifndef STORAGE_LEVELDB_DB_TABLE_CACHE_H_
#define STORAGE_LEVELDB_DB_TABLE_CACHE_H_
    
    class VersionSet;
    
    
    {}  // namespace leveldb
    
    namespace leveldb {
    }
    
    // Add new checkboxmenuentry to menubar.
void ScrollView::MenuItem(const char* parent, const char* name,
                          int cmdEvent, bool flag) {
  if (parent == nullptr) { parent = ''; }
  if (flag) { SendMsg('addMenuBarItem('%s','%s',%d,true)',
                      parent, name, cmdEvent);
  } else { SendMsg('addMenuBarItem('%s','%s',%d,false)',
                   parent, name, cmdEvent); }
}
    
    /**
 * Sets up auto page segmentation, determines the orientation, and corrects it.
 * Somewhat arbitrary chunk of functionality, factored out of AutoPageSeg to
 * facilitate testing.
 * photo_mask_pix is a pointer to a nullptr pointer that will be filled on return
 * with the leptonica photo mask, which must be pixDestroyed by the caller.
 * to_blocks is an empty list that will be filled with (usually a single)
 * block that is used during layout analysis. This ugly API is required
 * because of the possibility of a unlv zone file.
 * TODO(rays) clean this up.
 * See AutoPageSeg for other arguments.
 * The returned ColumnFinder must be deleted after use.
 */
ColumnFinder* Tesseract::SetupPageSegAndDetectOrientation(
    PageSegMode pageseg_mode, BLOCK_LIST* blocks, Tesseract* osd_tess,
    OSResults* osr, TO_BLOCK_LIST* to_blocks, Pix** photo_mask_pix,
    Pix** music_mask_pix) {
  int vertical_x = 0;
  int vertical_y = 1;
  TabVector_LIST v_lines;
  TabVector_LIST h_lines;
  ICOORD bleft(0, 0);
    }
    
      /// Returns true if the source image is binary.
  bool IsBinary() const {
    return pix_channels_ == 0;
  }
    
    
    { private:
  tesseract::ParagraphJustification justification_;
  int margin_;
  int first_indent_;
  int body_indent_;
  int tolerance_;
};
    
    
    {  virtual void Run(A1 a1,A2 a2,A3 a3) {
    if (!del) {
      (*function_)(p1_,p2_,p3_,a1,a2,a3);
    } else {
      (*function_)(p1_,p2_,p3_,a1,a2,a3);
      //  zero out the pointer to ensure segfault if used again
      function_ = nullptr;
      delete this;
    }
  }
};
    
    // Helper to compute an offset index feature. In this context an offset
// feature with a dir of +/-1 is a feature of a similar direction,
// but shifted perpendicular to the direction of the feature. An offset
// feature with a dir of +/-2 is feature at the same position, but rotated
// by +/- one [compact] quantum. Returns the index of the generated offset
// feature, or -1 if it doesn't exist. Dir should be in
// [-kNumOffsetMaps, kNumOffsetMaps] to indicate the relative direction.
// A dir of 0 is an identity transformation.
// Both input and output are from the index(sparse) feature space, not
// the mapped/compact feature space, but the offset feature is the minimum
// distance moved from the input to guarantee that it maps to the next
// available quantum in the mapped/compact space.
int IntFeatureMap::ComputeOffsetFeature(int index_feature, int dir) const {
  INT_FEATURE_STRUCT f = InverseIndexFeature(index_feature);
  ASSERT_HOST(IndexFeature(f) == index_feature);
  if (dir == 0) {
    return index_feature;
  } else if (dir == 1 || dir == -1) {
    FCOORD feature_dir = FeatureDirection(f.Theta);
    FCOORD rotation90(0.0f, 1.0f);
    feature_dir.rotate(rotation90);
    // Find the nearest existing feature.
    for (int m = 1; m < kMaxOffsetDist; ++m) {
      double x_pos = f.X + feature_dir.x() * (m * dir);
      double y_pos = f.Y + feature_dir.y() * (m * dir);
      int x = IntCastRounded(x_pos);
      int y = IntCastRounded(y_pos);
      if (x >= 0 && x <= UINT8_MAX && y >= 0 && y <= UINT8_MAX) {
        INT_FEATURE_STRUCT offset_f;
        offset_f.X = x;
        offset_f.Y = y;
        offset_f.Theta = f.Theta;
        int offset_index = IndexFeature(offset_f);
        if (offset_index != index_feature && offset_index >= 0)
          return offset_index;  // Found one.
      } else {
        return -1;  // Hit the edge of feature space.
      }
    }
  } else if (dir == 2 || dir == -2) {
    // Find the nearest existing index_feature.
    for (int m = 1; m < kMaxOffsetDist; ++m) {
      int theta = f.Theta + m * dir / 2;
      INT_FEATURE_STRUCT offset_f;
      offset_f.X = f.X;
      offset_f.Y = f.Y;
      offset_f.Theta = Modulo(theta, 256);
      int offset_index = IndexFeature(offset_f);
      if (offset_index != index_feature && offset_index >= 0)
        return offset_index;  // Found one.
    }
  }
  return -1;  // Nothing within the max distance.
}
    
        SECTION('at(index) throws when given an invalid index') {
      REQUIRE_THROWS_WITH(
          cursor.at(5),
          StartsWith('Index 5 is out of range for cursor of size 3'));
      REQUIRE_THROWS_WITH(
          cursor.at(123),
          StartsWith('Index 123 is out of range for cursor of size 3'));
    }
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/utils.cpp'
#include <THC/THCGenerateAllTypes.h>
    
    THLongStoragePtr THPUtils_unpackSize(PyObject *arg) {
  THLongStoragePtr result;
  if (!THPUtils_tryUnpackLongs(arg, result)) {
    std::string msg = 'THPUtils_unpackSize() expects a torch.Size (got '';
    msg += Py_TYPE(arg)->tp_name;
    msg += '')';
    throw std::runtime_error(msg);
  }
  return result;
}
    
    
    {
    {      // Solve Ax=b
      const float div = A.determinant();
      EVecXf delta(2);
      float deltaScore;
      const float MAX_DELTA = 1.5;
      if (std::abs(div) < 1e-4f) {
        delta << 0.0f, 0.0f;
        deltaScore = maxScore;
      } else {
        delta = A.ldlt().solve(b);
        // clip delta if going out-of-range of 3x3 grid
        if (std::abs(delta(0)) > MAX_DELTA || std::abs(delta(1)) > MAX_DELTA) {
          float larger_delta = std::max(std::abs(delta(0)), std::abs(delta(1)));
          delta(0) = delta(0) / larger_delta * MAX_DELTA;
          delta(1) = delta(1) / larger_delta * MAX_DELTA;
        }
        deltaScore = fmax(1, 1) - b.transpose() * delta +
            1.0 / 2.0 * delta.transpose() * A * delta;
      }
      assert(std::abs(delta(0)) <= MAX_DELTA);
      assert(std::abs(delta(1)) <= MAX_DELTA);
      // find maximum of detla scores
      keypoints(k, 0 * keypoint_count + j) =
          x0 + (0.5 + maxX + delta(0)) * xLen / heatmap_size;
      keypoints(k, 1 * keypoint_count + j) =
          y0 + (0.5 + maxY + delta(1)) * yLen / heatmap_size;
      keypoints(k, 2 * keypoint_count + j) = deltaScore;
      if (should_output_softmax_) {
        keypoints(k, 3 * keypoint_count + j) = probs(heatmap_index, maxIndex);
      } else {
        keypoints(k, 3 * keypoint_count + j) = .0f;
      }
    }
  }
    
    template<typename real,
         typename = typename std::enable_if<std::is_arithmetic<real>::value>::type>
inline void _appendScalar(ByteArray& str, real data) {
  str.append(reinterpret_cast<char*>(&data), sizeof(data));
}
    
    
    {
    {}} // namespace rpc, thd
    
      if (arg.has_i()) {
    const auto it = kBlackListInt.find(arg.name());
    if (it != kBlackListInt.end()) {
      return it->second.count(arg.i());
    }
  } else if (arg.has_s()) {
    const auto it = kBlackListString.find(arg.name());
    if (it != kBlackListString.end()) {
      return it->second.count(arg.s());
    }
  }
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    // try to load weight information from file, if exists
inline bool MetaTryLoadFloatInfo(const std::string& fname,
                                 std::vector<bst_float>* data) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  data->clear();
  bst_float value;
  while (is >> value) {
    data->push_back(value);
  }
  return true;
}
    
        MetaInfo info;
    size_t bytes_write = 0;
    double tstart = dmlc::GetTime();
    // print every 4 sec.
    constexpr double kStep = 4.0;
    size_t tick_expected = static_cast<double>(kStep);
    
        out_gpair->Resize(preds_h.size());
    auto& gpair = out_gpair->HostVector();
    
    /*! \brief Enforces that the tree is monotonically increasing/decreasing with respect to a user specified set of
      features.
*/
class MonotonicConstraint final : public SplitEvaluator {
 public:
  explicit MonotonicConstraint(std::unique_ptr<SplitEvaluator> inner) {
    if (!inner) {
      LOG(FATAL) << 'MonotonicConstraint must be given an inner evaluator';
    }
    inner_ = std::move(inner);
  }
    }
    
     public:
  CompressedIterator() : buffer_(nullptr), symbol_bits_(0), offset_(0) {}
  CompressedIterator(CompressedByteT *buffer, int num_symbols)
      : buffer_(buffer), offset_(0) {
    symbol_bits_ = detail::SymbolBits(num_symbols);
  }
    
      /*!
   * \brief Set additional attribute to the Booster.
   *  The property will be saved along the booster.
   * \param key The key of the property.
   * \param value The value of the property.
   */
  virtual void SetAttr(const std::string& key, const std::string& value) = 0;
  /*!
   * \brief Get attribute from the booster.
   *  The property will be saved along the booster.
   * \param key The key of the attribute.
   * \param out The output value.
   * \return Whether the key exists among booster's attributes.
   */
  virtual bool GetAttr(const std::string& key, std::string* out) const = 0;
  /*!
   * \brief Delete an attribute from the booster.
   * \param key The key of the attribute.
   * \return Whether the key was found among booster's attributes.
   */
  virtual bool DelAttr(const std::string& key) = 0;
  /*!
   * \brief Get a vector of attribute names from the booster.
   * \return vector of attribute name strings.
   */
  virtual std::vector<std::string> GetAttrNames() const = 0;
  /*!
   * \return whether the model allow lazy checkpoint in rabit.
   */
  bool AllowLazyCheckPoint() const;
  /*!
   * \brief dump the model in the requested format
   * \param fmap feature map that may help give interpretations of feature
   * \param with_stats extra statistics while dumping model
   * \param format the format to dump the model in
   * \return a vector of dump for boosters.
   */
  std::vector<std::string> DumpModel(const FeatureMap& fmap,
                                     bool with_stats,
                                     std::string format) const;
  /*!
   * \brief online prediction function, predict score for one instance at a time
   *  NOTE: use the batch prediction interface if possible, batch prediction is usually
   *        more efficient than online prediction
   *        This function is NOT threadsafe, make sure you only call from one thread.
   *
   * \param inst the instance you want to predict
   * \param output_margin whether to only predict margin value instead of transformed prediction
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction
   */
  inline void Predict(const SparsePage::Inst &inst,
                      bool output_margin,
                      HostDeviceVector<bst_float> *out_preds,
                      unsigned ntree_limit = 0) const;
  /*!
   * \brief Create a new instance of learner.
   * \param cache_data The matrix to cache the prediction.
   * \return Created learner.
   */
  static Learner* Create(const std::vector<std::shared_ptr<DMatrix> >& cache_data);
    
    // Forward declarations
namespace xgboost {
class TreeUpdater;
}
    
    #include <folly/Executor.h>
#include <folly/MPMCQueue.h>
#include <folly/Range.h>
#include <folly/executors/task_queue/BlockingQueue.h>
#include <folly/synchronization/LifoSem.h>
#include <glog/logging.h>
    
    /** hazptr_tc_entry */
    
    /**
 * Accesses a defined setting.
 * Rationale for the macro:
 *  1) Searchability, all settings access is done via FOLLY_SETTING(...)
 *  2) Prevents omitting trailing () by accident, which could
 *     lead to bugs like `auto value = *FOLLY_SETTING_project_name;`,
 *     which compiles but dereferences the function pointer instead of
 *     the setting itself.
 */
#define FOLLY_SETTING(_project, _name) \
  FOLLY_SETTINGS_FUNC__##_project##_##_name()
    
      SettingCore(const SettingMetadata& meta, Type defaultValue)
      : meta_(meta),
        defaultValue_(std::move(defaultValue)),
        globalValue_(std::make_shared<Contents>('default', defaultValue_)),
        localValue_([]() {
          return new CachelinePadded<
              Indestructible<std::pair<size_t, std::shared_ptr<Contents>>>>(
              0, nullptr);
        }) {
    registerSetting(*this);
  }
    
    
    {  EXPECT_TRUE(future.isReady());
  EXPECT_EQ(std::move(future).get(), 123);
}