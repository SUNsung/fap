
        
        v8::Local<v8::Value> Converter<Promise>::ToV8(v8::Isolate* isolate,
                                              Promise val) {
  return val.GetHandle();
}
    
    Arguments::~Arguments() {}
    
      template <typename P, typename C>
  void SetWeak(P* parameter, C callback) {
    handle_.SetWeak(parameter, callback);
  }
    
     private:
  NotificationCallback notification_callback_;  // Handler for notifications.
    
    void InspectableWebContentsImpl::ResetZoom() {
  SetZoomLevelForWebContents(GetDevToolsWebContents(), 0.);
  UpdateDevToolsZoomLevel(0.);
}
    
    GlobalMenuBarRegistrarX11::~GlobalMenuBarRegistrarX11() {
  if (registrar_proxy_) {
    g_signal_handlers_disconnect_by_func(
        registrar_proxy_, reinterpret_cast<void*>(OnNameOwnerChangedThunk),
        this);
    g_object_unref(registrar_proxy_);
  }
}
    
    
    {    remap(dst_frame2, dst_frame2, displacement_field, Mat(), INTER_LINEAR, BORDER_REPLICATE);
}
    
    
template <>
void
EnvmapAttribute::writeValueTo (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &os, int version) const
{
    unsigned char tmp = _value;
    Xdr::write <StreamIO> (os, tmp);
}
    
        Int64 _ljOffset[MAX_CODE_LEN +1 ]; // There are some other terms that can 
                                       // be folded into constants when taking
                                       // the 'left justified' decode path. This
                                       // holds those constants, indexed by
                                       // code length
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    
const Slice *
FrameBuffer::findSlice (const char name[]) const
{
    SliceMap::const_iterator i = _map.find (name);
    return (i == _map.end())? 0: &i->second;
}
    
    #include 'ImfNamespace.h'
    
    
//-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
      private:
    
    #include <ImfIntAttribute.h>
    
    
    {  const char* run_mode_val = ::getenv('CYBER_RUN_MODE');
  if (run_mode_val != nullptr) {
    std::string run_mode_str(run_mode_val);
    if (run_mode_str == 'simulation') {
      is_reality_mode_ = false;
    }
  }
}
    
      Matrix AT = A.transpose();
  Matrix BT = B.transpose();
    
        case novatel::GLOEPHEMERIS:
      if (message_length != sizeof(novatel::GLO_Ephemeris)) {
        AERROR << 'Incorrect GLOEPHEMERIS message length';
        break;
      }
      if (HandleGloEph(reinterpret_cast<novatel::GLO_Ephemeris*>(message))) {
        *message_ptr = &gnss_ephemeris_;
        return MessageType::GLOEPHEMERIDES;
      }
      break;
    
      w.show();
    
    // @brief default initializer used in concurrent object pool
template <class T>
struct ObjectPoolDefaultInitializer {
  void operator()(T* t) const {}
};
// @brief concurrent object pool with dynamic size
template <class ObjectType, size_t N = kPoolDefaultSize,
          class Initializer = ObjectPoolDefaultInitializer<ObjectType>>
class ConcurrentObjectPool : public BaseObjectPool<ObjectType> {
 public:
  // using ObjectTypePtr = typename BaseObjectPool<ObjectType>::ObjectTypePtr;
  using BaseObjectPool<ObjectType>::capacity_;
  // @brief Only allow accessing from global instance
  static ConcurrentObjectPool& Instance() {
    static ConcurrentObjectPool pool(N);
    return pool;
  }
  // @brief overrided function to get object smart pointer
  std::shared_ptr<ObjectType> Get() override {
// TODO(All): remove conditional build
#ifndef PERCEPTION_BASE_DISABLE_POOL
    ObjectType* ptr = nullptr;
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.empty()) {
        Add(1 + kPoolDefaultExtendNum);
      }
      ptr = queue_.front();
      queue_.pop();
    }
    // For efficiency consideration, initialization should be invoked
    // after releasing the mutex
    kInitializer(ptr);
    return std::shared_ptr<ObjectType>(ptr, [&](ObjectType* obj_ptr) {
      std::lock_guard<std::mutex> lock(mutex_);
      queue_.push(obj_ptr);
    });
#else
    return std::shared_ptr<ObjectType>(new ObjectType);
#endif
  }
  // @brief overrided function to get batch of smart pointers
  // @params[IN] num: batch number
  // @params[OUT] data: vector container to store the pointers
  void BatchGet(size_t num,
                std::vector<std::shared_ptr<ObjectType>>* data) override {
#ifndef PERCEPTION_BASE_DISABLE_POOL
    std::vector<ObjectType*> buffer(num, nullptr);
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.size() < num) {
        Add(num - queue_.size() + kPoolDefaultExtendNum);
      }
      for (size_t i = 0; i < num; ++i) {
        buffer[i] = queue_.front();
        queue_.pop();
      }
    }
    // For efficiency consideration, initialization should be invoked
    // after releasing the mutex
    for (size_t i = 0; i < num; ++i) {
      kInitializer(buffer[i]);
      data->emplace_back(
          std::shared_ptr<ObjectType>(buffer[i], [&](ObjectType* obj_ptr) {
            std::lock_guard<std::mutex> lock(mutex_);
            queue_.push(obj_ptr);
          }));
    }
#else
    for (size_t i = 0; i < num; ++i) {
      data->emplace_back(std::shared_ptr<ObjectType>(new ObjectType));
    }
#endif
  }
  // @brief overrided function to get batch of smart pointers
  // @params[IN] num: batch number
  // @params[IN] is_front: indicating insert to front or back of the list
  // @params[OUT] data: list container to store the pointers
  void BatchGet(size_t num, bool is_front,
                std::list<std::shared_ptr<ObjectType>>* data) override {
#ifndef PERCEPTION_BASE_DISABLE_POOL
    std::vector<ObjectType*> buffer(num, nullptr);
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.size() < num) {
        Add(num - queue_.size() + kPoolDefaultExtendNum);
      }
      for (size_t i = 0; i < num; ++i) {
        buffer[i] = queue_.front();
        queue_.pop();
      }
    }
    // For efficiency consideration, initialization should be invoked
    // after releasing the mutex
    for (size_t i = 0; i < num; ++i) {
      kInitializer(buffer[i]);
      is_front ? data->emplace_front(std::shared_ptr<ObjectType>(
                     buffer[i],
                     [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }))
               : data->emplace_back(std::shared_ptr<ObjectType>(
                     buffer[i], [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }));
    }
#else
    for (size_t i = 0; i < num; ++i) {
      is_front
          ? data->emplace_front(std::shared_ptr<ObjectType>(new ObjectType))
          : data->emplace_back(std::shared_ptr<ObjectType>(new ObjectType));
    }
#endif
  }
  // @brief overrided function to get batch of smart pointers
  // @params[IN] num: batch number
  // @params[IN] is_front: indicating insert to front or back of the deque
  // @params[OUT] data: deque container to store the pointers
  void BatchGet(size_t num, bool is_front,
                std::deque<std::shared_ptr<ObjectType>>* data) override {
#ifndef PERCEPTION_BASE_DISABLE_POOL
    std::vector<ObjectType*> buffer(num, nullptr);
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.size() < num) {
        Add(num - queue_.size() + kPoolDefaultExtendNum);
      }
      for (size_t i = 0; i < num; ++i) {
        buffer[i] = queue_.front();
        queue_.pop();
      }
    }
    for (size_t i = 0; i < num; ++i) {
      kInitializer(buffer[i]);
      is_front ? data->emplace_front(std::shared_ptr<ObjectType>(
                     buffer[i],
                     [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }))
               : data->emplace_back(std::shared_ptr<ObjectType>(
                     buffer[i], [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }));
    }
#else
    for (size_t i = 0; i < num; ++i) {
      is_front
          ? data->emplace_front(std::shared_ptr<ObjectType>(new ObjectType))
          : data->emplace_back(std::shared_ptr<ObjectType>(new ObjectType));
    }
#endif
  }
#ifndef PERCEPTION_BASE_DISABLE_POOL
  // @brief overrided function to set capacity
  void set_capacity(size_t capacity) override {
    std::lock_guard<std::mutex> lock(mutex_);
    if (capacity_ < capacity) {
      Add(capacity - capacity_);
    }
  }
  // @brief get remained object number
  size_t RemainedNum() override { return queue_.size(); }
#endif
  // @brief destructor to release the cached memory
  ~ConcurrentObjectPool() override {
    if (cache_) {
      delete[] cache_;
      cache_ = nullptr;
    }
    for (auto& ptr : extended_cache_) {
      delete ptr;
    }
    extended_cache_.clear();
  }
    }
    
    struct alignas(16) CameraFrameSupplement {
  // @brief valid only when on_use = true
  bool on_use = false;
    }
    
    typedef std::shared_ptr<RadarObjectSupplement> RadarObjectSupplementPtr;
typedef std::shared_ptr<const RadarObjectSupplement>
    RadarObjectSupplementConstPtr;
    
    Dst::Dst(const std::string &app_name) : app_name_(app_name) {
  if (DstManager::Instance()->IsAppAdded(app_name)) {
    dst_data_ptr_ = DstManager::Instance()->GetAppDataPtr(app_name);
    // default BBA provide no more evidence
    bba_vec_.resize(dst_data_ptr_->fod_subsets_.size(), 0.0);
    bba_vec_[dst_data_ptr_->fod_loc_] = 1.0;
  }
}
    
    #include <algorithm>
#include <vector>
    
    #include 'modules/perception/lib/config_manager/config_manager.h'
#include 'modules/perception/proto/map_manager_config.pb.h'
    
      status = get().refresh();
  EXPECT_FALSE(status.ok());
  EXPECT_EQ(fail_plugin->gen_config_count_, 1);
    
    #include <osquery/config/tests/test_utils.h>
    
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
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putString(
    const std::string& domain,
    const std::string& key,
    const std::string& value) {
  auto result = putRawBytes(domain, key, value);
  if (result) {
    return Success();
  }
  return result.takeError();
}
    
    Status LoggerPlugin::call(const PluginRequest& request,
                          PluginResponse& response) {
  std::vector<StatusLogLine> intermediate_logs;
  if (request.count('string') > 0) {
    return this->logString(request.at('string'));
  } else if (request.count('snapshot') > 0) {
    return this->logSnapshot(request.at('snapshot'));
  } else if (request.count('init') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    this->setProcessName(request.at('init'));
    this->init(this->name(), intermediate_logs);
    return Status(0);
  } else if (request.count('status') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    return this->logStatus(intermediate_logs);
  } else if (request.count('event') > 0) {
    return this->logEvent(request.at('event'));
  } else if (request.count('action') && request.at('action') == 'features') {
    size_t features = 0;
    features |= (usesLogStatus()) ? LOGGER_FEATURE_LOGSTATUS : 0;
    features |= (usesLogEvent()) ? LOGGER_FEATURE_LOGEVENT : 0;
    return Status(static_cast<int>(features));
  } else {
    return Status(1, 'Unsupported call to logger plugin');
  }
}
    
      /// The ASCII time stamp for when the status message was emitted
  std::string calendar_time;
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
    class SQLPlugin : public Plugin {
 public:
  /// Run a SQL query string against the SQL implementation.
  virtual Status query(const std::string& query,
                       QueryData& results,
                       bool use_cache) const = 0;
    }