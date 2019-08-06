
        
        #include 'pch.h'
#include 'KeyChord.h'
    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    // Maximum level to which a new compacted memtable is pushed if it
// does not create overlap.  We try to push to level 2 to avoid the
// relatively expensive level 0=>1 compactions and to avoid some
// expensive manifest file operations.  We do not push all the way to
// the largest level since that can generate a lot of wasted disk
// space if the same key space is being repeatedly overwritten.
static const int kMaxMemCompactLevel = 2;
    
    extern 'C' {
PyMODINIT_FUNC INITFUNC() {
#if PY_MAJOR_VERSION >= 3
  PyObject* module = PyModule_Create(&_module);
#else
  PyObject* module = Py_InitModule3(const_cast<char*>(kModuleName), NULL,
                                    const_cast<char*>(kModuleDocstring));
#endif
  if (module == NULL) {
    return INITFUNC_ERRORVAL;
  }
    }
    }
    
      // The Python MessageFactory used to create the class. It is needed to resolve
  // fields descriptors, including extensions fields; its C++ MessageFactory is
  // used to instantiate submessages.
  // This reference must stay alive until all message pointers are destructed.
  PyMessageFactory* py_message_factory;
    
    extern PyTypeObject RepeatedScalarContainer_Type;
    
    #include <google/protobuf/message.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wire_format_lite.h>
    
    #ifdef ADDRESS_SANITIZER
#include <sanitizer/asan_interface.h>
#endif  // ADDRESS_SANITIZER
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include <google/protobuf/arena.h>
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    
    {  /* Accept modes which occur between the above rejection groups */
  R_NN_ACCEPT,          // NN acceptance
  R_HYPHEN_ACCEPT,      // Hyphen acceptance
  R_MM_ACCEPT,          // Matrix match acceptance
  R_QUALITY_ACCEPT,     // Accept word in good quality doc
  R_MINIMAL_REJ_ACCEPT  // Accept EVERYTHING except tess failures
};
    
      // Get the value of the top (smallest, defined by operator< ) element.
  const Pair& PeekTop() const {
    return heap_[0];
  }
  // Get the value of the worst (largest, defined by operator< ) element.
  const Pair& PeekWorst() const { return heap_[IndexOfWorst()]; }
    
      // Initialize the bool array to the given size of feature space.
  // The feature_map is just borrowed, and must exist for the entire
  // lifetime of the IntFeatureDist.
  void Init(const IntFeatureMap* feature_map);
    
    	if (cfgRoot.length() != 0)
	{
		swprintf_s(args, L'%s  -loadcfgfile \'%s\'', args, userConEmuCfgPath);
	}
    
      // contents
  pageDict->lookupNF('Contents', &contents);
  if (!(contents.isRef() || contents.isArray() ||
	contents.isNull())) {
    error(-1, 'Page contents object (page %d) is wrong type (%s)',
	  num, contents.getTypeName());
    contents.free();
    goto err1;
  }
    
    
    {    switch (interval->style) {
    case Interval::Arabic:
      number = strtol(str + prefixLength, &end, 10);
      if (*end == '\0' && number - interval->first < interval->length) {
	*index = base + number - interval->first;
	return gTrue;
      }
      break;
    case Interval::LowercaseRoman:
    case Interval::UppercaseRoman:
      number = fromRoman(str + prefixLength);
      if (number >= 0 && number - interval->first < interval->length) {
	*index = base + number - interval->first;
	return gTrue;
      }
      break;
    case Interval::UppercaseLatin:
    case Interval::LowercaseLatin:
      number = fromLatin(str + prefixLength);
      if (number >= 0 && number - interval->first < interval->length) {
	*index = base + number - interval->first;
	return gTrue;
      }
      break;
    case Interval::None:
      break;
    }
  }
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
    ProfileData::ProfileData() {
	count = 0;
	total = 0.0;
	min = 0.0;
	max = 0.0;
}
    
        /**
     * Notifies a PlanExecutor that it should die. Callers must specify the reason for why this
     * executor is being killed. Subsequent calls to getNext() will return FAILURE, and fill
     * 'objOut'
     * with an error reflecting 'killStatus'. If this method is called multiple times, only the
     * first 'killStatus' will be retained. It is an error to call this method with Status::OK.
     */
    virtual void markAsKilled(Status killStatus) = 0;
    
        Top() = default;
    
        BSONObj query = fromjson('{$text: {$search:\'awesome\', $caseSensitive: false}}');
    auto expr =
        unittest::assertGet(ExtensionsCallbackReal(&_opCtx, &_nss).parseText(query.firstElement()));
    
    
    
    U_CAPI void U_EXPORT2
uhash_deleteScriptSet(void *obj);
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
        // serialize the JSON numbers
    std::cout << j_integer_t << '\n';
    std::cout << j_unsigned_t << '\n';
    std::cout << j_enum << '\n';
    std::cout << j_short << '\n';
    std::cout << j_int << '\n';
    std::cout << j_long << '\n';
    std::cout << j_int_least32_t << '\n';
    std::cout << j_uint8_t << '\n';
    std::cout << j_ok << '\n';
    std::cout << j_nan << '\n';
    std::cout << j_infinity << '\n';
    std::cout << j_float << '\n';
    std::cout << j_float_nan << '\n';
    std::cout << j_double << '\n\n';
    
    #include 'cyber/common/log.h'
#include 'modules/common/math/linear_quadratic_regulator.h'
    
    namespace apollo {
namespace drivers {
namespace gnss {
    }
    }
    }
    
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
    
    struct LaneLine {
  LaneLineType type;
  LaneLinePositionType pos_type;
  // @brief image coordinate system
  LaneLineCubicCurve curve_car_coord;
  // @brief camera coordinate system
  LaneLineCubicCurve curve_camera_coord;
  // @brief image coordinate system
  LaneLineCubicCurve curve_image_coord;
  // @brief curve image point set
  std::vector<Point2DF> curve_image_point_set;
  // @brief curve camera point set
  std::vector<Point3DF> curve_camera_point_set;
  // @brief curve car coord point set, only on XY plane
  std::vector<Point2DF> curve_car_coord_point_set;
  // @brief image end point set
  std::vector<EndPoints> image_end_point_set;
  // @brief track id
  int track_id = -1;
  // @brief confidence for lane line
  float confidence = 1.0f;
    }
    
    
    {  float relative_radial_velocity = 0.0f;
  float relative_tangential_velocity = 0.0f;
  float radial_velocity = 0.0f;
};
    
    void DstManager::BuildNamesMap(const std::vector<std::string> &fod_subset_names,
                               DstCommonData *dst_data) {
  // reset and reserve space
  dst_data->fod_subset_names_.clear();
  dst_data->fod_subset_names_.resize(dst_data->fod_subsets_.size());
  for (size_t i = 0; i < dst_data->fod_subsets_.size(); ++i) {
    dst_data->fod_subset_names_[i] =
        std::bitset<64>(dst_data->fod_subsets_[i]).to_string();
  }
  // set fod to unknown
  dst_data->fod_subset_names_[dst_data->fod_loc_] = 'unknown';
  for (size_t i = 0;
       i < std::min(fod_subset_names.size(), dst_data->fod_subsets_.size());
       ++i) {
    dst_data->fod_subset_names_[i] = fod_subset_names[i];
  }
}