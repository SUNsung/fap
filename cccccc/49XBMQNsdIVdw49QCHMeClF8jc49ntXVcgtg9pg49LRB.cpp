
        
        Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    namespace content {
class RenderFrameHost;
}
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    Menu::~Menu() {
  Destroy();
}
    
      if (!item->enable_shortcut_)
    return false;
    
    void Menu::Popup(int x, int y, content::Shell* shell) {
  GdkEventButton* event = NULL; //FIXME: shell->web_contents()->GetRenderWidgetHostView()->GetLastMouseDown();
  uint32_t triggering_event_time = event ? event->time : GDK_CURRENT_TIME;
  gfx::Point point;
  if (!event) {
    // gfx::Rect bounds = shell->web_contents()->GetRenderWidgetHostView()->GetViewBounds();
    // point = gfx::Point(x + bounds.x(), y + bounds.y());
    DVLOG(1) << 'no last mouse down event';
    point = gfx::Point(x, y);
  }else
    point = gfx::Point(event->x_root, event->y_root);
    }
    
    namespace nw {
    }
    
          std::unique_ptr<SkBitmap> bitmap(new SkBitmap());
      if (data.type == TYPE_PNG &&
        !gfx::PNGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size(), bitmap.get())) {
        error_ = 'Failed to decode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG) {
        std::unique_ptr<SkBitmap> tmp_bitmap = gfx::JPEGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size());
        if (tmp_bitmap == NULL) {
          error_ = 'Failed to decode as JPEG';
          return false;
        }
        bitmap = std::move(tmp_bitmap);
      }
    
    class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #include <vector>
    
    
    {  C10_DISABLE_COPY_AND_ASSIGN(AsyncSchedulingNet);
};
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
    #include 'allheaders.h'
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not nullptr,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not nullptr, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
    
    {  // WARNING! Keep data as the first element! KDPairInc and KDPairDec depend
  // on the order of these elements so they can downcast pointers appropriately
  // for use by GenericHeap::Reshuffle.
  Data data;
  Key key;
};
// Specialization of KDPair to provide operator< for sorting in increasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairInc : public KDPair<Key, Data> {
  KDPairInc() = default;
  KDPairInc(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPairInc<Key, Data>& other) const {
    return this->key < other.key;
  }
  // Returns the input Data pointer recast to a KDPairInc pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairInc* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairInc*>(data_ptr);
  }
};
// Specialization of KDPair to provide operator< for sorting in decreasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairDec : public KDPair<Key, Data> {
  KDPairDec() = default;
  KDPairDec(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPairDec<Key, Data>& other) const {
    return this->key > other.key;
  }
  // Returns the input Data pointer recast to a KDPairDec pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairDec* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairDec*>(data_ptr);
  }
};
    
    #ifndef TESSERACT_CCUTIL_QRSEQUENCE_H_
#define TESSERACT_CCUTIL_QRSEQUENCE_H_
    
    void second(void) {
  printf('second\n');
  emscripten_sleep(1);
  longjmp(buf, -1);
}
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
      // get type
  if (dict->lookup('S', &obj)->isName()) {
    const char *s = obj.getName();
    
    if (strcmp('R', s) == 0)
      type = transitionReplace;
    else if (strcmp('Split', s) == 0)
      type = transitionSplit;
    else if (strcmp('Blinds', s) == 0)
      type = transitionBlinds;
    else if (strcmp('Box', s) == 0)
      type = transitionBox;
    else if (strcmp('Wipe', s) == 0)
      type = transitionWipe;
    else if (strcmp('Dissolve', s) == 0)
      type = transitionDissolve;
    else if (strcmp('Glitter', s) == 0)
      type = transitionGlitter;
    else if (strcmp('Fly', s) == 0)
      type = transitionFly;
    else if (strcmp('Push', s) == 0)
      type = transitionPush;
    else if (strcmp('Cover', s) == 0)
      type = transitionCover;
    else if (strcmp('Uncover', s) == 0)
      type = transitionUncover;
    else if (strcmp('Fade', s) == 0)
      type = transitionFade;
  }
  obj.free();
    
      // Start a page.
  virtual void startPage(int pageNum, GfxState *state);
    
      if (obj->dictLookup('D', &tmp)->isArray()) {
    Array * dim = tmp.getArray();
    
    if (dim->getLength() >= 2) {
      Object dd;
      if (dim->get(0, &dd)->isInt()) {
	width = dd.getInt();
      }
      dd.free();
      if (dim->get(1, &dd)->isInt()) {
	height = dd.getInt();
      }
      dd.free();
    }
  }
  tmp.free();
    
      GBool showControls;                      // false
    
    void *ExternalSecurityHandler::getAuthData() {
  void *authData;
    }
    
    Sound::~Sound()
{
  delete fileName;
  streamObj->free();
  delete streamObj;
}
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
        // create values of different floating-point types
    json::number_float_t v_ok = 3.141592653589793;
    json::number_float_t v_nan = NAN;
    json::number_float_t v_infinity = INFINITY;
    
    
    {  if (1 != init_raw(&raw_)) {
    AFATAL << 'memory allocation error for observation data structure.';
  }
}
    
    // Converts NewtonM2's azimuth (north = 0, east = 90) to FLU yaw (east = 0,
// north = pi/2).
constexpr double azimuth_deg_to_yaw_rad(double azimuth) {
  return (90.0 - azimuth) * DEG_TO_RAD_M2;
}
    
      auto channelManager =
      apollo::cyber::service_discovery::TopologyManager::Instance()
          ->channel_manager();
  channelManager->AddChangeListener(topologyCallback);
    
    
    {  // @brief existence confidence, required
  float confidence = 1.0f;
  BBox2DF box;
};
    
      // @brief local track id
  int local_track_id = -1;
    
      transform_matrix_.setIdentity(states_num_, states_num_);
  cur_observation_.setZero(states_num_, 1);
  cur_observation_uncertainty_.setIdentity(states_num_, states_num_);
    
    // @brief: bound given value within input range
// @return bounded value within input range
// @NOTE: original method name is bound
template <typename T>
T Bound(const T& value, const T& max_value, const T& min_value) {
  return std::max(min_value, std::min(max_value, value));
}
    
    // @brief: compute polygon center
// @return true if get center successfully, otherwise return false
bool TrackObjectDistance::ComputePolygonCenter(
    const base::PolygonDType& polygon, Eigen::Vector3d* center) {
  int size = static_cast<int>(polygon.size());
  if (size == 0) {
    return false;
  }
  *center = Eigen::Vector3d(0, 0, 0);
  for (int i = 0; i < size; ++i) {
    const auto& point = polygon.at(i);
    (*center)[0] += point.x;
    (*center)[1] += point.y;
  }
  (*center) /= size;
  return true;
}
    
    // @brief: calculate the location similarity between cloud and camera box
// @return the location similarity which belongs to [0, 1].
// @key idea:
// 1. calculate the mean x y pixel distance
// 2. normalize mean pixel distance on the size of box and std of x/y
// 3. generate location similarity from Chi-Squared distribution
// @NOTE: original method name is compute_pts_box_dist_score
double ComputePtsBoxLocationSimilarity(const ProjectionCachePtr& cache,
                                       const ProjectionCacheObject* object,
                                       const base::BBox2DF& camera_bbox) {
  static const double min_p = 1e-6;
  static const double max_p = 1 - 1e-6;
  double x_std_dev = 0.4;
  double y_std_dev = 0.5;
  size_t check_augmented_iou_minimum_pts_num = 20;
  float augmented_buffer = 25.0f;
  if (object->Empty()) {
    ADEBUG << 'cache object is empty!';
    return min_p;
  }
  Eigen::Vector2d mean_pixel_dist(0.0, 0.0);
  // calculate mean x y pixel distance
  const size_t start_ind = object->GetStartInd();
  const size_t end_ind = object->GetEndInd();
  if (end_ind - start_ind >= check_augmented_iou_minimum_pts_num) {
    base::BBox2DF velo_bbox = object->GetBox();
    float augmented_iou =
        CalculateAugmentedIOUBBox(velo_bbox, camera_bbox, augmented_buffer);
    if (augmented_iou < FLT_EPSILON) {
      ADEBUG << 'augmented iou is empty!';
      return min_p;
    }
  }
  for (size_t i = start_ind; i < end_ind; ++i) {
    auto* velo_pt2d = cache->GetPoint2d(i);
    if (velo_pt2d == nullptr) {
      AERROR << 'query pt from projection cache failed!';
      continue;
    }
    if (velo_pt2d->x() >= camera_bbox.xmin &&
        velo_pt2d->x() < camera_bbox.xmax &&
        velo_pt2d->y() >= camera_bbox.ymin &&
        velo_pt2d->y() < camera_bbox.ymax) {
      continue;
    }
    Eigen::Vector2d diff;
    diff.x() = std::max(0.0, camera_bbox.xmin - velo_pt2d->x());
    diff.x() = std::max(diff.x(), velo_pt2d->x() - camera_bbox.xmax);
    diff.y() = std::max(0.0, camera_bbox.ymin - velo_pt2d->y());
    diff.y() = std::max(diff.y(), velo_pt2d->y() - camera_bbox.ymax);
    mean_pixel_dist += diff;
  }
  mean_pixel_dist /= static_cast<double>(object->Size());
  ADEBUG << 'mean_pixel_dist is: ' << mean_pixel_dist;
  // normalize according to box size
  Eigen::Vector2d box_size = Eigen::Vector2d(
      camera_bbox.xmax - camera_bbox.xmin, camera_bbox.ymax - camera_bbox.ymin);
  mean_pixel_dist.array() /= box_size.array();
  // assuming the normalized distance obeys gauss distribution
  double square_norm_mean_pixel_dist =
      mean_pixel_dist.x() * mean_pixel_dist.x() / x_std_dev / x_std_dev +
      mean_pixel_dist.y() * mean_pixel_dist.y() / y_std_dev / y_std_dev;
  // use chi-square distribution. Cauchy may be more reasonable.
  double location_similarity =
      1 - ChiSquaredCdf2TableFun(square_norm_mean_pixel_dist);
  // for numerical stability
  location_similarity = std::max(min_p, std::min(max_p, location_similarity));
  return location_similarity;
}
// @brief: calculate the shape similarity between cloud and camera box
// @return the shape similarity which belongs to [0, 1].
// @key idea:
// 1. calculate box size diff between velo box and camera box
// 2. normalize box size diff according to the std of x/y
// 3. generate shape similarity from Chi-Squared distribution
// @NOTE: original method name is compute_pts_box_shape_score
double ComputePtsBoxShapeSimilarity(const ProjectionCachePtr& cache,
                                    const ProjectionCacheObject* object,
                                    const base::BBox2DF& camera_bbox) {
  static const double min_p = 1e-3;
  static const double max_p = 1 - 1e-3;
  double x_std_dev = 0.3;
  double y_std_dev = 0.4;
  if (object->Empty()) {
    return min_p;
  }
  // compute 2d bbox size of camera & velo
  Eigen::Vector2d camera_box_size = Eigen::Vector2d(
      camera_bbox.xmax - camera_bbox.xmin, camera_bbox.ymax - camera_bbox.ymin);
  // handled one point case
  base::BBox2DF velo_projection_bbox = object->GetBox();
  Eigen::Vector2d velo_box_size = camera_box_size / 10;
  velo_box_size.x() =
      std::max(static_cast<float>(velo_box_size.x()),
               velo_projection_bbox.xmax - velo_projection_bbox.xmin);
  velo_box_size.y() =
      std::max(static_cast<float>(velo_box_size.y()),
               velo_projection_bbox.ymax - velo_projection_bbox.ymin);
  // compute normalized box size diff
  Eigen::Vector2d mean_box_size = (camera_box_size + velo_box_size) / 2;
  Eigen::Vector2d box_size_diff =
      (velo_box_size - camera_box_size).array() / mean_box_size.array();
  // assuming the normalized distance obeys gauss distribution
  double square_norm_box_size_diff =
      box_size_diff.x() * box_size_diff.x() / x_std_dev / x_std_dev +
      box_size_diff.y() * box_size_diff.y() / y_std_dev / y_std_dev;
  ADEBUG << 'camera_box_size@(' << camera_box_size(0) << ','
         << camera_box_size(1) << '); '
         << 'velo_box_size@(' << velo_box_size.x() << ',' << velo_box_size.y()
         << '); '
         << 'box_size_diff@(' << box_size_diff.x() << ',' << box_size_diff.y()
         << '); '
         << 'square_norm_box_size_diff@' << square_norm_box_size_diff;
  // use chi-square distribution. Cauchy may be more reasonable.
  double shape_similarity =
      1 - ChiSquaredCdf2TableFun(square_norm_box_size_diff);
  // for numerical stability
  shape_similarity = std::max(min_p, std::min(max_p, shape_similarity));
  return shape_similarity;
}
// @brief: calculate the similarity between cloud and camera box
// @return the similarity which belongs to [0, 1].
// @key idea:
// 1. compute location similarity and shape similarity
// 2. fuse the two similarity above
// @NOTE: original method name is compute_pts_box_score
double ComputePtsBoxSimilarity(const ProjectionCachePtr& cache,
                               const ProjectionCacheObject* object,
                               const base::BBox2DF& camera_bbox) {
  double location_similarity =
      ComputePtsBoxLocationSimilarity(cache, object, camera_bbox);
  double shape_similarity =
      ComputePtsBoxShapeSimilarity(cache, object, camera_bbox);
  double fused_similarity =
      FuseTwoProbabilities(location_similarity, shape_similarity);
  ADEBUG << 'fused_similarity@' << fused_similarity << ', location_similarity@'
         << location_similarity << ', shape_similarity@' << shape_similarity;
  return fused_similarity;
}
// @brief: calculate the x/y/h similarity between radar and camera
// @return the similarity which belongs to [0, 1].
// @key idea:
// 1. compute the difference on x/y/h
// 2. compute similarity according to the WelshVarLoss/ChiSquareProb
// 3. scale the similarity above
double ComputeRadarCameraXSimilarity(const double velo_ct_x,
                                     const double camera_ct_x,
                                     const double size_x,
                                     const XSimilarityParams& params) {
  double x_diff = std::abs(velo_ct_x - camera_ct_x) / size_x;
  double x_similarity = WelshVarLossFun(x_diff, params.welsh_loss_thresh_,
                                        params.welsh_loss_scale_);
  x_similarity = ScalePositiveProbability(
      x_similarity, params.scale_positive_max_p_, params.scale_positive_th_p_);
  return x_similarity;
}
double ComputeRadarCameraYSimilarity(const double velo_ct_y,
                                     const double camera_ct_y,
                                     const double size_y,
                                     const YSimilarityParams& params) {
  // double y_diff =
  //     std::abs(velo_ct_y - camera_ct_y + size_y * params.smooth_factor_) /
  //     size_y;
    }
    
    namespace osquery {
    }
    
      virtual ExpectedSuccess<DatabaseError> putInt32(const std::string& domain,
                                                  const std::string& key,
                                                  const int32_t value);
  virtual ExpectedSuccess<DatabaseError> putString(
      const std::string& domain,
      const std::string& key,
      const std::string& value) = 0;
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::putInt32(
    const std::string& domain, const std::string& key, const int32_t value) {
  return putValue(domain, key, value);
}
    
    namespace osquery {
    }
    
    /**
 * @brief Superclass for the pluggable logging facilities.
 *
 * In order to make the logging of osquery results and inline debug, warning,
 * error status easy to integrate into your environment, we take advantage of
 * a plugin interface which allows you to integrate osquery with your internal
 * large-scale logging infrastructure.
 *
 * You may use flume, splunk, syslog, scribe, etc. In order to use your
 * specific upstream logging systems, one simply needs to create a custom
 * subclass of LoggerPlugin. That subclass should at least implement the
 * LoggerPlugin::logString method.
 *
 * Consider the following example:
 *
 * @code{.cpp}
 *   class TestLoggerPlugin : public LoggerPlugin {
 *    public:
 *     osquery::Status logString(const std::string& s) {
 *       int i = 0;
 *       internal::logStringToFlume(s, i);
 *       std::string message;
 *       if (i == 0) {
 *         message = 'OK';
 *       } else {
 *         message = 'Failed';
 *       }
 *       return osquery::Status(i, message);
 *     }
 *  };
 *
 *  REGISTER(TestLoggerPlugin, 'logger', 'test');
 * @endcode
 */
class LoggerPlugin : public Plugin {
 public:
  /// The LoggerPlugin PluginRequest action router.
  Status call(const PluginRequest& request, PluginResponse& response) override;
    }
    
    class SQLPlugin : public Plugin {
 public:
  /// Run a SQL query string against the SQL implementation.
  virtual Status query(const std::string& query,
                       QueryData& results,
                       bool use_cache) const = 0;
    }
    
    GTEST_TEST(InMemoryDatabaseTest, test_open) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  auto result = db->open();
  EXPECT_TRUE(result);
  db->close();
}
    
        if (sg_messagequeue_map.end() == sg_messagequeue_map.find(id))id = KInvalidQueueID;
    
    	if (NULL != devicename_jstr) {
		ScopedJstring scoped_jstr(env, devicename_jstr);
		
		jsize len = env->GetStringUTFLength(devicename_jstr);
		s_info.devicename = std::string(scoped_jstr.GetChar(), len);
		
		env->DeleteLocalRef(devicename_jstr);
	}
    
        const typename std::basic_ostream<ch, char_traits>::sentry ok(os);
    if (ok) {
        const std::streamsize width = os.width(0);
        const std::streamsize uuid_width = 36;
        const std::ios_base::fmtflags flags = os.flags();
        const typename std::basic_ios<ch, char_traits>::char_type fill = os.fill();
        if (flags & (std::ios_base::right | std::ios_base::internal)) {
            for (std::streamsize i=uuid_width; i<width; i++) {
                os << fill;
            }
        }
    }
    
        if (env_->ExceptionOccurred()) {
        return;
    }
    
    public: // Getters
  bool isExperimentalFeatureEnabled(int feature) const;
    
      const YGNodeRef root = YGNodeNewWithConfig(config);
  YGNodeStyleSetFlexDirection(root, YGFlexDirectionRow);
  YGNodeStyleSetAlignContent(root, YGAlignStretch);
  YGNodeStyleSetFlexWrap(root, YGWrapWrap);
  YGNodeStyleSetWidth(root, 150);
  YGNodeStyleSetHeight(root, 100);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetHeight(root_child0));
    
      const YGNodeRef root_child1 = YGNodeNew();
  YGNodeStyleSetWidth(root_child1, 50);
  YGNodeStyleSetHeight(root_child1, 20);
  YGNodeInsertChild(root, root_child1, 1);
    
          const YGNodeRef root = YGNodeNew();
      YGNodeStyleSetWidth(root, 100);
      YGNodeStyleSetHeight(root, 100);
      YGNodeStyleSetMargin(root, horizontalOrVertical, 10);
      YGNodeStyleSetMargin(root, edge, edgeValue);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0));