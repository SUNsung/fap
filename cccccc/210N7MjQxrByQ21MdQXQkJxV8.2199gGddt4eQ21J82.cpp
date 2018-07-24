
        
        class PreferencesManager : public content::RenderThreadObserver {
 public:
  PreferencesManager();
  ~PreferencesManager() override;
    }
    
    // Attempts to send the current command line to an already running instance of
// Chrome via a WM_COPYDATA message.
// Returns true if a running Chrome is found and successfully notified.
// |fast_start| is true when this is being called on the window fast start path.
NotifyChromeResult AttemptToNotifyRunningChrome(HWND remote_window,
                                                bool fast_start);
    
    #include 'base/strings/string16.h'
#include 'base/time/time.h'
#include 'content/public/browser/desktop_media_id.h'
#include 'ui/gfx/image/image_skia.h'
    
    // File name of the Pepper Flash plugin on different platforms.
const base::FilePath::CharType kPepperFlashPluginFilename[] =
#if defined(OS_MACOSX)
    FPL('PepperFlashPlayer.plugin');
#elif defined(OS_WIN)
    FPL('pepflashplayer.dll');
#else  // OS_LINUX, etc.
    FPL('libpepflashplayer.so');
#endif
    
      char delim_;         // The delimiter is inserted between elements
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      virtual MemTableRep* CreateMemTableRep(const MemTableRep::KeyComparator&,
                                         Allocator*, const SliceTransform*,
                                         Logger* logger) = 0;
  virtual MemTableRep* CreateMemTableRep(
      const MemTableRep::KeyComparator& key_cmp, Allocator* allocator,
      const SliceTransform* slice_transform, Logger* logger,
      uint32_t /* column_family_id */) {
    return CreateMemTableRep(key_cmp, allocator, slice_transform, logger);
  }
    
    namespace rocksdb {
    }
    
      // disable sync point processing
  void DisableProcessing();
    
      // Moves to the next entry in the source.  After this call, Valid() is
  // true iff the iterator was not positioned at the last entry in the source.
  // REQUIRES: Valid()
  virtual void Next() = 0;
    
      // Return the key for the current entry.  The underlying storage for
  // the returned slice is valid only until the next modification of
  // the iterator.
  // REQUIRES: Valid()
  virtual Slice key() const = 0;
    
    #ifndef BASEEVENT_INTERFACE_BASEEVENT_H_
#define BASEEVENT_INTERFACE_BASEEVENT_H_
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    template <class T>
inline int SimpleUnpack(const void* _rawbuf, size_t _rawlen, size_t& _packlen, PtrBuffer& _data) {
    if (sizeof(T) > _rawlen) return SIMPLE_CONTINUE;
    }
    
    #include <string>
#include <set>
#include <map>
    
      bool Init() override { return true; }
    
      *ptr_d_d = 0.5 * m_c * (m_identity - ts * 0.5 * m_a).inverse() * m_b + m_d;
    
    #include 'modules/common/adapters/proto/adapter_config.pb.h'
    
    namespace apollo {
namespace planning {
    }
    }
    
    bool Polygon2d::Contains(const Polygon2d &polygon) const {
  CHECK_GE(points_.size(), 3);
  if (area_ < polygon.area() - kMathEpsilon) {
    return false;
  }
  if (!IsPointIn(polygon.points()[0])) {
    return false;
  }
  const auto &line_segments = polygon.line_segments();
  return std::all_of(line_segments.begin(), line_segments.end(),
                     [&](const LineSegment2d &line_segment) {
                       return Contains(line_segment);
                     });
}
    
      /**
   * @brief Compute the distance from a point to the polygon. If the point is
   *        within the polygon, return 0. Otherwise, this distance is
   *        the minimal distance from the point to the edges of the polygon.
   * @param point The point to compute whose distance to the polygon.
   * @return The distance from the point to the polygon.
   */
  double DistanceTo(const Vec2d &point) const;
    
      // Read each camera's config
  std::unordered_map<std::string, CameraCoeffient> camera_coeffients;
  for (const auto &camera_focus_config :
       config_.multi_camera_projection_config().camera_focus_config()) {
    const auto &camera_model_name = camera_focus_config.name();
    CameraCoeffient camera_coeffient;
    if (!camera_coeffient.init(camera_model_name,
                               camera_focus_config.camera_extrinsic_file(),
                               camera_focus_config.camera_intrinsic_file())) {
      AERROR << camera_model_name << ' Projection init failed.';
      return false;
    }
    camera_coeffients[camera_model_name] = camera_coeffient;
    camera_names_.push_back(camera_model_name);
  }
    
    namespace apollo {
namespace perception {
namespace traffic_light {
// @brief 2 Camera Projection project the Light into the image.
class MultiCamerasProjection {
 public:
  MultiCamerasProjection() = default;
    }
    }
    }
    }
    
    bool UnityRecognize::Init() {
  if (!GetProtoFromFile(FLAGS_traffic_light_recognizer_config, &config_)) {
    AERROR << 'Cannot get config proto from file: '
           << FLAGS_traffic_light_recognizer_config;
    return false;
  }
    }