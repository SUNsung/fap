
        
        // If the keys are not available from the header, define them ourselves. The values match
// what tsd_private.h provides.
# ifndef __PTK_FRAMEWORK_SWIFT_KEY0
#  define __PTK_FRAMEWORK_SWIFT_KEY0 100
# endif
# ifndef __PTK_FRAMEWORK_SWIFT_KEY1
#  define __PTK_FRAMEWORK_SWIFT_KEY1 101
# endif
# ifndef __PTK_FRAMEWORK_SWIFT_KEY2
#  define __PTK_FRAMEWORK_SWIFT_KEY2 102
# endif
    
      /// Path to a file which should contain serialized diagnostics for this
  /// frontend invocation.
  ///
  /// This uses the same serialized diagnostics format as Clang, for tools that
  /// want machine-parseable diagnostics. There's a bit more information on
  /// how clients might use this in docs/Driver.md.
  ///
  /// \sa swift::serialized_diagnostics::createConsumer
  std::string SerializedDiagnosticsPath;
    
    #if SWIFT_OBJC_INTEROP
/// Checked Objective-C-style dynamic cast to a class type.
///
/// \param object The object to cast, or nil.
/// \param targetType The type to which we are casting, which is known to be
/// a class type, but not necessarily valid type metadata.
///
/// \returns the object if the cast succeeds, or null otherwise.
SWIFT_RUNTIME_EXPORT
const void *
swift_dynamicCastObjCClass(const void *object, const ClassMetadata *targetType);
    
    extern 'C' {
SWIFT_RUNTIME_LIBRARY_VISIBILITY
extern struct crashreporter_annotations_t gCRAnnotations;
}
    
    void GetRenderProcessHosts(std::set<RenderProcessHost*>& rphs) {
  RenderProcessHost* render_process_host = NULL;
  std::vector<Shell*> windows = Shell::windows();
  for (size_t i = 0; i < windows.size(); ++i) {
    if (!windows[i]->is_devtools()) {
      render_process_host = windows[i]->web_contents()->GetRenderProcessHost();
      rphs.insert(render_process_host);
    }
  }
}
    
    #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    namespace remote {
    }
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    
    {  *accelerator = item->accelerator_;
  return true;
}
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    class NwAppCrashBrowserFunction : public UIThreadExtensionFunction {
 public:
  NwAppCrashBrowserFunction() {}
    }
    
      EXPECT_CALL(*rw, Write(_, _))
      .Times(3)
      .WillRepeatedly(DoAll(SaveArg<0>(&msg), Return(true)));
  EXPECT_CALL(*rw, Read(_))
      .WillOnce(DoAll(WithArg<0>(copy(&msg)), Return(true)))
      .WillOnce(DoAll(WithArg<0>(copy(&msg)), Return(true)))
      .WillOnce(DoAll(WithArg<0>(copy(&msg)), Return(true)))
      .WillOnce(Return(false));
  EXPECT_CALL(*rw, WritesDone());
  EXPECT_CALL(*rw, Finish()).WillOnce(Return(Status::OK));
    
    
    {  for (auto it = services.begin(); it != services.end(); ++it) {
    CompareService(*it);
  }
}
    
    
    {    auto paths = platformGlob((files_to_carve_dir_ / '*').string());
    for (const auto& p : paths) {
      carvePaths.insert(p);
    }
  }
    
    Expected<int32_t, DatabaseError> Database::getInt32(const std::string& domain,
                                                    const std::string& key) {
  Expected<std::string, DatabaseError> string_value = getString(domain, key);
  if (string_value) {
    auto value = tryTo<int32_t>(*string_value);
    if (value) {
      return *value;
    } else {
      return createError(DatabaseError::FailToReadData, value.takeError())
             << 'Failed to convert string to int';
    }
  } else {
    return string_value.takeError();
  }
}
    
    template <typename T>
Expected<T, DatabaseError> InMemoryDatabase::getValue(const std::string& domain,
                                                      const std::string& key) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  if (!is_open_) {
    return createError(DatabaseError::DbIsNotOpen) << 'Database is closed';
  }
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  std::lock_guard<std::mutex> lock(storage_iter->second->getMutex());
  auto result = storage_iter->second->get(key);
  if (result) {
    DataType value = result.take();
    if (value.type() == typeid(T)) {
      return boost::get<T>(value);
    } else {
      auto error = createError(DatabaseError::KeyNotFound)
                   << 'Requested wrong type for: ' << domain << ':' << key
                   << ' stored type: ' << value.type().name()
                   << ' requested type '
                   << boost::core::demangle(typeid(T).name());
      LOG(ERROR) << error.getMessage();
      debug_only::fail(error.getMessage().c_str());
      return std::move(error);
    }
  }
  return result.takeError();
}
    
    Expected<int32_t, DatabaseError> RocksdbDatabase::getInt32(
    const std::string& domain, const std::string& key) {
  Expected<std::string, DatabaseError> buffer = getRawBytes(domain, key);
  if (buffer) {
    std::string value = buffer.take();
    if (BOOST_LIKELY(validateInt32StorageBuffer(value))) {
      int32_t result = *(reinterpret_cast<const int32_t*>(value.data()));
      return ntohl(result);
    } else {
      auto type_error = createError(RocksdbError::UnexpectedValueType)
                        << 'Fetching string as integer';
      auto error =
          createError(DatabaseError::KeyNotFound, std::move(type_error));
      assert(false && error.getMessage().c_str());
      LOG(ERROR) << error.getMessage();
      debug_only::fail(error.getMessage().c_str());
      return std::move(error);
    }
  }
  return buffer.takeError();
}
    
      bool validateInt32StorageBuffer(const std::string& buffer);
    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};
    
    /**
 * @brief An internal severity set mapping to Glog's LogSeverity levels.
 */
enum StatusLogSeverity {
  O_INFO = 0,
  O_WARNING = 1,
  O_ERROR = 2,
  O_FATAL = 3,
};
    
    
    {
    {
    {}  // namespace math
}  // namespace common
}  // namespace apollo

    
    namespace apollo {
namespace drivers {
namespace gnss {
    }
    }
    }
    
    #pragma once
    
    void DstManager::FodCheck(DstCommonData *dst_data) {
  uint64_t fod = 0;
  for (auto fod_subset : dst_data->fod_subsets_) {
    fod |= fod_subset;
  }
  dst_data->fod_loc_ = dst_data->fod_subsets_.size();
  auto find_res = dst_data->subsets_ind_map_.insert(
      std::make_pair(fod, dst_data->fod_subsets_.size()));
  if (find_res.second) {
    dst_data->fod_subsets_.push_back(fod);
  } else {
    dst_data->fod_loc_ = find_res.first->second;
  }
}
    
    void TrackObjectDistance::QueryProjectedVeloCtOnCamera(
    const SensorObjectConstPtr& velodyne64, const SensorObjectConstPtr& camera,
    const Eigen::Matrix4d& lidar2camera_pose, Eigen::Vector3d* projected_ct) {
  double time_diff = camera->GetTimestamp() - velodyne64->GetTimestamp();
  Eigen::Vector3d offset =
      velodyne64->GetBaseObject()->velocity.cast<double>() * time_diff;
  const Eigen::Vector3d& velo_ct = velodyne64->GetBaseObject()->center;
  Eigen::Vector4d projected_ct_4d =
      static_cast<Eigen::Matrix<double, 4, 1, 0, 4, 1>>(
          lidar2camera_pose * Eigen::Vector4d(velo_ct[0] + offset[0],
                                              velo_ct[1] + offset[1],
                                              velo_ct[2] + offset[2], 1.0));
  *projected_ct = projected_ct_4d.head(3);
}
    
      Eigen::Affine3d sensor2world_pose;
  bool status = sensor_manager->GetPose(sensor_id, measurement_timestamp,
                                        &sensor2world_pose);
  auto max_dist_it = options_.camera_max_valid_dist_.find(sensor_id);
  if (max_dist_it == options_.camera_max_valid_dist_.end()) {
    AWARN << boost::format(
                 'There is no pre-defined max valid camera'
                 ' dist for sensor type: %s') %
                 sensor_id;
  }
  if (status && max_dist_it != options_.camera_max_valid_dist_.end()) {
    SensorObjectConstPtr lidar_object = track_ref_->GetLatestLidarObject();
    SensorObjectConstPtr radar_object = track_ref_->GetLatestRadarObject();
    double camera_max_dist = max_dist_it->second;
    if (lidar_object != nullptr) {
      in_view_ratio = ObjectInCameraView(
          lidar_object, camera_model, sensor2world_pose, measurement_timestamp,
          camera_max_dist, true, false);
    } else if (radar_object != nullptr) {
      in_view_ratio = ObjectInCameraView(
          radar_object, camera_model, sensor2world_pose, measurement_timestamp,
          camera_max_dist, false, false);
    }
  }
    
    using cyber::common::GetAbsolutePath;
    
     private:
  // Returns status and expanded absolute path including the chroot directory.
  // Checks whether the provided path breaks out of the chroot. If it returns
  // non-OK status, the returned path should not be used.
  std::pair<Status, std::string> EncodePath(const std::string& path) {
    if (path.empty() || path[0] != '/') {
      return {Status::InvalidArgument(path, 'Not an absolute path'), ''};
    }
    std::pair<Status, std::string> res;
    res.second = chroot_dir_ + path;
#if defined(OS_AIX)
    char resolvedName[PATH_MAX];
    char* normalized_path = realpath(res.second.c_str(), resolvedName);
#else
    char* normalized_path = realpath(res.second.c_str(), nullptr);
#endif
    if (normalized_path == nullptr) {
      res.first = Status::NotFound(res.second, strerror(errno));
    } else if (strlen(normalized_path) < chroot_dir_.size() ||
               strncmp(normalized_path, chroot_dir_.c_str(),
                       chroot_dir_.size()) != 0) {
      res.first = Status::IOError(res.second,
                                  'Attempted to access path outside chroot');
    } else {
      res.first = Status::OK();
    }
#if !defined(OS_AIX)
    free(normalized_path);
#endif
    return res;
  }
    
    #include 'include/org_rocksdb_CompactionOptionsFIFO.h'
#include 'rocksdb/advanced_options.h'
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    useMmapReads
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_EnvOptions_useMmapReads(
    JNIEnv*, jobject, jlong jhandle) {
  return ENV_OPTIONS_GET(jhandle, use_mmap_reads);
}
    
    /*
 * Class:     org_rocksdb_RocksDB
 * Method:    getLongProperty
 * Signature: (JJLjava/lang/String;I)J
 */
jlong Java_org_rocksdb_RocksDB_getLongProperty(
    JNIEnv* env, jobject, jlong jdb_handle, jlong jcf_handle,
    jstring jproperty, jint jproperty_len) {
  const char* property = env->GetStringUTFChars(jproperty, nullptr);
  if (property == nullptr) {
    // exception thrown: OutOfMemoryError
    return 0;
  }
  rocksdb::Slice property_name(property, jproperty_len);
    }
    
    namespace rocksdb {
TableFilterJniCallback::TableFilterJniCallback(
    JNIEnv* env, jobject jtable_filter)
    : JniCallback(env, jtable_filter) {
  m_jfilter_methodid =
      AbstractTableFilterJni::getFilterMethod(env);
  if(m_jfilter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    http://www.cocos2d-x.org
    
        //
    // Overrides
    //
    virtual ProgressTo* clone() const override;
    virtual ProgressTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressTo() {}
    virtual ~ProgressTo() {}
    
        /** The alpha threshold.
     * The content is drawn only where the stencil have pixel with alpha greater than the alphaThreshold.
     * Should be a float between 0 and 1.
     * This default to 1 (so alpha test is disabled).
     *
     * @return The alpha threshold value,Should be a float between 0 and 1.
     */
    GLfloat getAlphaThreshold() const;
    
    /** Set the alpha threshold. 
     * 
     * @param alphaThreshold The alpha threshold.
     */
    void setAlphaThreshold(GLfloat alphaThreshold);
    
    /** Inverted. If this is set to true,
     * the stencil is inverted, so the content is drawn where the stencil is NOT drawn.
     * This default to false.
     *
     * @return If the clippingNode is Inverted, it will be return true.
     */
    bool isInverted() const;
    
    /** Set the ClippingNode whether or not invert.
     *
     * @param inverted A bool Type,to set the ClippingNode whether or not invert.
     */
    void setInverted(bool inverted);